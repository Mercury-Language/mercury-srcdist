/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
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
#include "check_hlds.type_util.mih"
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



#line 1604 "modecheck_goal.m"
struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s {
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__VarTypes_5;
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__ModuleInfo_6;
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMaps_7;
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Var_8;
#line 1607 "modecheck_goal.m"
  MR_bool check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded;
#line 1607 "modecheck_goal.m"
  jmp_buf check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__commit_0;
#line 1607 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMap_10;
#line 1607 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Inst_11;
#line 1610 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__conv0_InstMap_10;
#line 1604 "modecheck_goal.m"
};

#line 1574 "modecheck_goal.m"
struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s {
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3;
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4;
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
#line 1577 "modecheck_goal.m"
  MR_bool check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded;
#line 1579 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14;
#line 1583 "modecheck_goal.m"
  jmp_buf check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0;
#line 1583 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19;
#line 1583 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20;
#line 1574 "modecheck_goal.m"
};


#line 201 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 207 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0;

#line 210 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "check_hlds.modecheck_goal.c"
static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0;

#line 222 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 225 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 228 "check_hlds.modecheck_goal.c"
static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1];

#line 231 "check_hlds.modecheck_goal.c"
static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0;

#line 234 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;

#line 237 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 240 "check_hlds.modecheck_goal.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1];

#line 243 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0;

#line 246 "check_hlds.modecheck_goal.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1];

#line 249 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1;

#line 252 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1];

#line 255 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1];

#line 258 "check_hlds.modecheck_goal.c"
static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2];

#line 261 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2];

#line 264 "check_hlds.modecheck_goal.c"
static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2];

#line 267 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
#line 270 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 272 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

#line 275 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
#line 278 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 280 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 282 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

#line 285 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
#line 288 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 290 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

#line 293 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
#line 296 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 298 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 300 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

#line 303 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
#line 306 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 308 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

#line 311 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
#line 314 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 316 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 318 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

#line 1198 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
#line 1198 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1198 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1198 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
#line 1198 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);

#line 1170 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_8,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ConjGoals0_9,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23,
#line 1170 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__SubGoal_12,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24,
#line 1170 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25);

#line 1532 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1532__1_2_p_0(
#line 1532 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InnerUOType_35,
#line 1532 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_79);

#line 1530 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1530__1_2_p_0(
#line 1530 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InnerDIType_34,
#line 1530 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_74);

#line 1525 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1525__1_2_p_0(
#line 1525 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__OuterDIType_29,
#line 1525 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__OuterUOType_30);

#line 1036 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__1036__1_2_p_0(
#line 1036 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PolySpecs_23,
#line 1036 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_36);

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__867__1_2_p_0(
#line 867 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Kind1_40,
#line 867 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_73);

#line 1117 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
#line 1117 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

#line 1117 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

#line 1196 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
#line 1196 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

#line 1196 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

#line 1193 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
#line 1193 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

#line 1193 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

#line 1658 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__solver_var_to_init_3_p_0(
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ModuleInfo_4,
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap_5,
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_6);

#line 1644 "modecheck_goal.m"
static MR_Box MR_CALL 
check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0_1(
#line 1644 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1644 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 1635 "modecheck_goal.m"
static MR_Word MR_CALL 
check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InitedVars_5,
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InitCalls_6,
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal0_7);

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0_1(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 1614 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0(
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__5_5,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_1(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1610 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_3(
#line 1610 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_2(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_4(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1604 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0(
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_5,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ModuleInfo_6,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMaps_7,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_8);

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg);

#line 1574 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NegCtxtDesc_1,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap0_3,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap_4,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5,
#line 1574 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6);

#line 1552 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(
#line 1552 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1552 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5);

#line 1532 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
#line 1532 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 1530 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
#line 1530 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 1525 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
#line 1525 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 1460 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ShortHand0_6,
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 1460 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_43,
#line 1460 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44);

#line 1439 "modecheck_goal.m"
static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
#line 1439 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1439 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 1422 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Attributes_12,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredId_13,
#line 1422 "modecheck_goal.m"
  MR_Integer check_hlds__modecheck_goal__ProcId0_14,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_15,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ExtraArgs_16,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PragmaCode_18,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_19,
#line 1422 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_20,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1422 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

#line 1404 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LHS0_9,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__RHS0_10,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Unification0_11,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__UnifyContext_12,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
#line 1404 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16,
#line 1404 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17);

#line 1309 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GenericCall_8,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_9,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Modes0_10,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
#line 1309 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62,
#line 1309 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63);

#line 1273 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredId_10,
#line 1273 "modecheck_goal.m"
  MR_Integer check_hlds__modecheck_goal__ProcId0_11,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_12,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_13,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredName_14,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_15,
#line 1273 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_16,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1273 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

#line 1244 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
#line 1244 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1244 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);

#line 1161 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
#line 1161 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1);

#line 1121 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal_5,
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_6,
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVarInst_7,
#line 1121 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__MaybeGroundTermMode_8);

#line 1048 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_7,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 1048 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__MaybeKindAndSubGoal_10,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29,
#line 1048 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);

#line 1036 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
#line 1036 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 1006 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Type_7,
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Context_8,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__TypeInfoVar_9,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__TypeInfoGoals_10,
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

#line 945 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_7,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 945 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38,
#line 945 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39);

#line 825 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
#line 825 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 823 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
#line 823 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
#line 867 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
#line 867 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg);

#line 789 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Reason_7,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 789 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46,
#line 789 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);

#line 746 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_6,
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 746 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17,
#line 746 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18);

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_3(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_2(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 716 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0(
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NonLocals_13,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_14,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Then0_15,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Then_16,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Else0_17,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Else_18,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ThenInstMap0_19,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__ThenInstMap_20,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ElseInstMap0_21,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__ElseInstMap_22,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_32,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33);

#line 658 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Vars_9,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Cond0_10,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Then0_11,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Else0_12,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
#line 658 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_35,
#line 658 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36);

#line 643 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
#line 643 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
#line 643 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Case0_5,
#line 643 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Case_6);

#line 632 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
#line 632 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_1,
#line 632 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 632 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3);

#line 553 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
#line 553 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
#line 553 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal0_5,
#line 553 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Goal_6);

#line 544 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
#line 544 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 544 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2,
#line 544 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3);

#line 492 "modecheck_goal.m"
static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
#line 492 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal_3);

#line 413 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_8_p_0(
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8);

#line 466 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
#line 466 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 466 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 466 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

#line 461 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
#line 461 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 461 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 461 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

#line 389 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_8,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__CanFail_9,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Cases0_10,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
#line 389 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22,
#line 389 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23);

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 371 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0(
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NonLocals_9,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_10,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Disjs0_11,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Disjs_12,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMaps0_13,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__InstMaps_14,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_18,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19);

#line 313 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5,
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);

#line 361 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_3(
#line 361 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 361 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 361 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

#line 356 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
#line 356 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 356 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 356 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

#line 277 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Disjuncts0_6,
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 277 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_23,
#line 277 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24);


static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[3][7];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[3][6];

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

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modecheck_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[3][6] = {
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



#line 1309 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1317 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1326 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
  }
};

#line 1334 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1342 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1350 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1358 "check_hlds.modecheck_goal.c"
static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 1366 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1374 "check_hlds.modecheck_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1382 "check_hlds.modecheck_goal.c"
static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1] = {
  (MR_Integer) 0
};

#line 1387 "check_hlds.modecheck_goal.c"
static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 = {
  (MR_String) "construct_var_info",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  NULL
};

#line 1394 "check_hlds.modecheck_goal.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1411 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0
  }
};

#line 1420 "check_hlds.modecheck_goal.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1437 "check_hlds.modecheck_goal.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1445 "check_hlds.modecheck_goal.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1450 "check_hlds.modecheck_goal.c"
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
  NULL
};

#line 1465 "check_hlds.modecheck_goal.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1470 "check_hlds.modecheck_goal.c"
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
  NULL
};

#line 1485 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0
};

#line 1490 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

#line 1495 "check_hlds.modecheck_goal.c"
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

#line 1509 "check_hlds.modecheck_goal.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0,
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

#line 1515 "check_hlds.modecheck_goal.c"
static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1521 "check_hlds.modecheck_goal.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1538 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
#line 1541 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 1543 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
#line 1545 "check_hlds.modecheck_goal.c"
{
#line 1547 "check_hlds.modecheck_goal.c"
  {
#line 1549 "check_hlds.modecheck_goal.c"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1552 "check_hlds.modecheck_goal.c"
    {
#line 1554 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
#line 1557 "check_hlds.modecheck_goal.c"
    return check_hlds__modecheck_goal__succeeded;
#line 1559 "check_hlds.modecheck_goal.c"
  }
#line 1561 "check_hlds.modecheck_goal.c"
}

#line 1564 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
#line 1567 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 1569 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 1571 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
#line 1573 "check_hlds.modecheck_goal.c"
{
#line 1575 "check_hlds.modecheck_goal.c"
  {
#line 1577 "check_hlds.modecheck_goal.c"
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

#line 1580 "check_hlds.modecheck_goal.c"
    {
#line 1582 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal____Compare____construct_var_info_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
#line 1585 "check_hlds.modecheck_goal.c"
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
#line 1587 "check_hlds.modecheck_goal.c"
  }
#line 1589 "check_hlds.modecheck_goal.c"
}

#line 1592 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
#line 1595 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 1597 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
#line 1599 "check_hlds.modecheck_goal.c"
{
#line 1601 "check_hlds.modecheck_goal.c"
  {
#line 1603 "check_hlds.modecheck_goal.c"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1606 "check_hlds.modecheck_goal.c"
    {
#line 1608 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
#line 1611 "check_hlds.modecheck_goal.c"
    return check_hlds__modecheck_goal__succeeded;
#line 1613 "check_hlds.modecheck_goal.c"
  }
#line 1615 "check_hlds.modecheck_goal.c"
}

#line 1618 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
#line 1621 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 1623 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 1625 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
#line 1627 "check_hlds.modecheck_goal.c"
{
#line 1629 "check_hlds.modecheck_goal.c"
  {
#line 1631 "check_hlds.modecheck_goal.c"
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

#line 1634 "check_hlds.modecheck_goal.c"
    {
#line 1636 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
#line 1639 "check_hlds.modecheck_goal.c"
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
#line 1641 "check_hlds.modecheck_goal.c"
  }
#line 1643 "check_hlds.modecheck_goal.c"
}

#line 1646 "check_hlds.modecheck_goal.c"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
#line 1649 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 1651 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
#line 1653 "check_hlds.modecheck_goal.c"
{
#line 1655 "check_hlds.modecheck_goal.c"
  {
#line 1657 "check_hlds.modecheck_goal.c"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1660 "check_hlds.modecheck_goal.c"
    {
#line 1662 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
#line 1665 "check_hlds.modecheck_goal.c"
    return check_hlds__modecheck_goal__succeeded;
#line 1667 "check_hlds.modecheck_goal.c"
  }
#line 1669 "check_hlds.modecheck_goal.c"
}

#line 1672 "check_hlds.modecheck_goal.c"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
#line 1675 "check_hlds.modecheck_goal.c"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
#line 1677 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
#line 1679 "check_hlds.modecheck_goal.c"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
#line 1681 "check_hlds.modecheck_goal.c"
{
#line 1683 "check_hlds.modecheck_goal.c"
  {
#line 1685 "check_hlds.modecheck_goal.c"
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

#line 1688 "check_hlds.modecheck_goal.c"
    {
#line 1690 "check_hlds.modecheck_goal.c"
      check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
#line 1693 "check_hlds.modecheck_goal.c"
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
#line 1695 "check_hlds.modecheck_goal.c"
  }
#line 1697 "check_hlds.modecheck_goal.c"
}

#line 1198 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
#line 1198 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1198 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1198 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
#line 1198 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5)
#line 1198 "modecheck_goal.m"
{
#line 1202 "modecheck_goal.m"
  {
#line 1202 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1202 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1202 "modecheck_goal.m"
      {
#line 1202 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1202 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4;
#line 1202 "modecheck_goal.m"
      }
#line 1202 "modecheck_goal.m"
    else
#line 1204 "modecheck_goal.m"
      {
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal_13;
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals_14;
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_11, (MR_Integer) 0)));
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_11, (MR_Integer) 1)));
#line 1204 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55;
#line 1238 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__LHSVar_18;
#line 1238 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__RHS_19;
#line 1238 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__UnifyContext_22;
#line 1238 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__ConsId_23;
#line 1238 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__RHSVars_24;
#line 1207 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_42_42;
#line 1207 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_20_20;
#line 1207 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_21_21;

#line 1207 "modecheck_goal.m"
        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1207 "modecheck_goal.m"
          {
#line 1207 "modecheck_goal.m"
            check_hlds__modecheck_goal__LHSVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 0)));
#line 1207 "modecheck_goal.m"
            check_hlds__modecheck_goal__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 1)));
#line 1207 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 2)));
#line 1207 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 3)));
#line 1207 "modecheck_goal.m"
            check_hlds__modecheck_goal__UnifyContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 4)));
#line 1208 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_19)) == (MR_mktag((MR_Integer) 1)));
#line 1208 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1208 "modecheck_goal.m"
              {
#line 1208 "modecheck_goal.m"
                check_hlds__modecheck_goal__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 0)));
#line 1208 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 1)));
#line 1208 "modecheck_goal.m"
                check_hlds__modecheck_goal__RHSVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 2)));
#line 1208 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_42_42 == (MR_Integer) 0);
#line 1208 "modecheck_goal.m"
              }
#line 1207 "modecheck_goal.m"
          }
#line 1238 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1218 "modecheck_goal.m"
          {
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__ArgInsts_25;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__UniModes_26;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__BoundInst_27;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__TermInst_28;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__LHSMode_29;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__RHSMode_30;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__UnifyMode_31;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Unification_34;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalExpr_35;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InstMapDelta_36;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalInfo1_37;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalInfo_38;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__LHSVarInfo_39;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_46_46;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_51_51;
#line 1218 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_52_52;

#line 1217 "modecheck_goal.m"
            {
#line 1217 "modecheck_goal.m"
              check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(check_hlds__modecheck_goal__RHSVars_24, &check_hlds__modecheck_goal__ArgInsts_25, &check_hlds__modecheck_goal__UniModes_26, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43);
            }
#line 1219 "modecheck_goal.m"
            {
#line 1219 "modecheck_goal.m"
              check_hlds__modecheck_goal__BoundInst_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__ConsId_23));
#line 1219 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__ArgInsts_25));
#line 1219 "modecheck_goal.m"
            }
#line 1220 "modecheck_goal.m"
            {
#line 1220 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) (check_hlds__modecheck_goal__BoundInst_27));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "modecheck_goal.m"
            }
#line 1220 "modecheck_goal.m"
            {
#line 1220 "modecheck_goal.m"
              check_hlds__modecheck_goal__TermInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1220 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_46_46));
#line 1220 "modecheck_goal.m"
            }
#line 1221 "modecheck_goal.m"
            {
#line 1221 "modecheck_goal.m"
              check_hlds__modecheck_goal__LHSMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__LHSMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__LHSMode_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
#line 1221 "modecheck_goal.m"
            }
#line 1222 "modecheck_goal.m"
            {
#line 1222 "modecheck_goal.m"
              check_hlds__modecheck_goal__RHSMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__RHSMode_30, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
#line 1222 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__RHSMode_30, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
#line 1222 "modecheck_goal.m"
            }
#line 1223 "modecheck_goal.m"
            {
#line 1223 "modecheck_goal.m"
              check_hlds__modecheck_goal__UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyMode_31, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSMode_29));
#line 1223 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyMode_31, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSMode_30));
#line 1223 "modecheck_goal.m"
            }
#line 1226 "modecheck_goal.m"
            {
#line 1226 "modecheck_goal.m"
              check_hlds__modecheck_goal__Unification_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 1) = ((MR_Box) (check_hlds__modecheck_goal__ConsId_23));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 2) = ((MR_Box) (check_hlds__modecheck_goal__RHSVars_24));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 3) = ((MR_Box) (check_hlds__modecheck_goal__UniModes_26));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1226 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "modecheck_goal.m"
            }
#line 1228 "modecheck_goal.m"
            {
#line 1228 "modecheck_goal.m"
              check_hlds__modecheck_goal__GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
#line 1228 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHS_19));
#line 1228 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 2) = ((MR_Box) (check_hlds__modecheck_goal__UnifyMode_31));
#line 1228 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 3) = ((MR_Box) (check_hlds__modecheck_goal__Unification_34));
#line 1228 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 4) = ((MR_Box) (check_hlds__modecheck_goal__UnifyContext_22));
#line 1228 "modecheck_goal.m"
            }
#line 1229 "modecheck_goal.m"
            {
#line 1229 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
#line 1229 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
#line 1229 "modecheck_goal.m"
            }
#line 1229 "modecheck_goal.m"
            {
#line 1229 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_52_52));
#line 1229 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "modecheck_goal.m"
            }
#line 1229 "modecheck_goal.m"
            {
#line 1229 "modecheck_goal.m"
              check_hlds__modecheck_goal__InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_51_51);
            }
#line 1230 "modecheck_goal.m"
            {
#line 1230 "modecheck_goal.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_36, check_hlds__modecheck_goal__GoalInfo0_17, &check_hlds__modecheck_goal__GoalInfo1_37);
            }
#line 1233 "modecheck_goal.m"
            {
#line 1233 "modecheck_goal.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__GoalInfo1_37, &check_hlds__modecheck_goal__GoalInfo_38);
            }
#line 1234 "modecheck_goal.m"
            {
#line 1234 "modecheck_goal.m"
              check_hlds__modecheck_goal__Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_13, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_35));
#line 1234 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_13, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_38));
#line 1234 "modecheck_goal.m"
            }
#line 1236 "modecheck_goal.m"
            check_hlds__modecheck_goal__LHSVarInfo_39 = (MR_Word) check_hlds__modecheck_goal__TermInst_28;
#line 1237 "modecheck_goal.m"
            {
#line 1237 "modecheck_goal.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18)), ((MR_Box) (check_hlds__modecheck_goal__LHSVarInfo_39)), check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55);
            }
#line 1218 "modecheck_goal.m"
          }
#line 1238 "modecheck_goal.m"
        else
#line 1239 "modecheck_goal.m"
          {
#line 1239 "modecheck_goal.m"
            {
#line 1239 "modecheck_goal.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/5", (MR_String) "not rhs_functor unify");
#line 1239 "modecheck_goal.m"
              return;
            }
#line 1239 "modecheck_goal.m"
          }
#line 1241 "modecheck_goal.m"
        {
#line 1241 "modecheck_goal.m"
          check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(check_hlds__modecheck_goal__Goals0_12, &check_hlds__modecheck_goal__Goals_14, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);
        }
#line 1204 "modecheck_goal.m"
        {
#line 1204 "modecheck_goal.m"
          MR_Word base;
#line 1204 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 1204 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_13));
#line 1204 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_14));
#line 1204 "modecheck_goal.m"
        }
#line 1204 "modecheck_goal.m"
      }
#line 1202 "modecheck_goal.m"
  }
#line 1198 "modecheck_goal.m"
}

#line 1170 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_8,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ConjGoals0_9,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23,
#line 1170 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__SubGoal_12,
#line 1170 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24,
#line 1170 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25)
#line 1170 "modecheck_goal.m"
{
#line 1175 "modecheck_goal.m"
  {
#line 1175 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfo_34_34 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__LocalVarMap0_14;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ConjGoals_15;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__LocalVarMap_16;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarInfo_17;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarInst_18;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapDelta_19;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__SubGoalExpr_20;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap_22;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_26_26;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_27_27;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29;
#line 1175 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31;
#line 1179 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__conv0_TermVarInfo_17;

#line 1176 "modecheck_goal.m"
    {
#line 1176 "modecheck_goal.m"
      mercury__map__init_1_p_0(check_hlds__modecheck_goal__TypeInfo_34_34, check_hlds__modecheck_goal__TypeCtorInfo_35_35, &check_hlds__modecheck_goal__LocalVarMap0_14);
    }
#line 1177 "modecheck_goal.m"
    {
#line 1177 "modecheck_goal.m"
      check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(check_hlds__modecheck_goal__ConjGoals0_9, &check_hlds__modecheck_goal__ConjGoals_15, check_hlds__modecheck_goal__LocalVarMap0_14, &check_hlds__modecheck_goal__LocalVarMap_16);
    }
#line 1179 "modecheck_goal.m"
    {
#line 1179 "modecheck_goal.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_goal__TypeInfo_34_34, check_hlds__modecheck_goal__TypeCtorInfo_35_35, check_hlds__modecheck_goal__LocalVarMap_16, ((MR_Box) (check_hlds__modecheck_goal__TermVar_8)), &check_hlds__modecheck_goal__conv0_TermVarInfo_17);
    }
#line 1179 "modecheck_goal.m"
    check_hlds__modecheck_goal__TermVarInfo_17 = ((MR_Word) check_hlds__modecheck_goal__conv0_TermVarInfo_17);
#line 1180 "modecheck_goal.m"
    check_hlds__modecheck_goal__TermVarInst_18 = (MR_Word) check_hlds__modecheck_goal__TermVarInfo_17;
#line 1181 "modecheck_goal.m"
    {
#line 1181 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_8));
#line 1181 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarInst_18));
#line 1181 "modecheck_goal.m"
    }
#line 1181 "modecheck_goal.m"
    {
#line 1181 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_26_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_27_27));
#line 1181 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1181 "modecheck_goal.m"
    }
#line 1181 "modecheck_goal.m"
    {
#line 1181 "modecheck_goal.m"
      check_hlds__modecheck_goal__InstMapDelta_19 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_26_26);
    }
#line 1182 "modecheck_goal.m"
    {
#line 1182 "modecheck_goal.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_19, check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23, &check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29);
    }
#line 1185 "modecheck_goal.m"
    {
#line 1185 "modecheck_goal.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29, &check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31);
    }
#line 1186 "modecheck_goal.m"
    {
#line 1186 "modecheck_goal.m"
      check_hlds__modecheck_goal__SubGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1186 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1186 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 2) = ((MR_Box) (check_hlds__modecheck_goal__ConjGoals_15));
#line 1186 "modecheck_goal.m"
    }
#line 1187 "modecheck_goal.m"
    {
#line 1187 "modecheck_goal.m"
      MR_Word base;
#line 1187 "modecheck_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "modecheck_goal.m"
      *check_hlds__modecheck_goal__SubGoal_12 = base;
#line 1187 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr_20));
#line 1187 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31));
#line 1187 "modecheck_goal.m"
    }
#line 1189 "modecheck_goal.m"
    {
#line 1189 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modecheck_goal__InstMap0_21);
    }
#line 1190 "modecheck_goal.m"
    {
#line 1190 "modecheck_goal.m"
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_8, check_hlds__modecheck_goal__TermVarInst_18, check_hlds__modecheck_goal__InstMap0_21, &check_hlds__modecheck_goal__InstMap_22);
    }
#line 1191 "modecheck_goal.m"
    {
#line 1191 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25);
#line 1191 "modecheck_goal.m"
      return;
    }
#line 1175 "modecheck_goal.m"
  }
#line 1170 "modecheck_goal.m"
}

#line 1532 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1532__1_2_p_0(
#line 1532 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InnerUOType_35,
#line 1532 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_79)
#line 1532 "modecheck_goal.m"
{
#line 1532 "modecheck_goal.m"
  {
#line 1532 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1532 "modecheck_goal.m"
    {
#line 1532 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__InnerUOType_35, check_hlds__modecheck_goal__HeadVar__2_79);
    }
#line 1532 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1532 "modecheck_goal.m"
  }
#line 1532 "modecheck_goal.m"
}

#line 1530 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1530__1_2_p_0(
#line 1530 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InnerDIType_34,
#line 1530 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_74)
#line 1530 "modecheck_goal.m"
{
#line 1530 "modecheck_goal.m"
  {
#line 1530 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1530 "modecheck_goal.m"
    {
#line 1530 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__InnerDIType_34, check_hlds__modecheck_goal__HeadVar__2_74);
    }
#line 1530 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1530 "modecheck_goal.m"
  }
#line 1530 "modecheck_goal.m"
}

#line 1525 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1525__1_2_p_0(
#line 1525 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__OuterDIType_29,
#line 1525 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__OuterUOType_30)
#line 1525 "modecheck_goal.m"
{
#line 1525 "modecheck_goal.m"
  {
#line 1525 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1525 "modecheck_goal.m"
    {
#line 1525 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_29, check_hlds__modecheck_goal__OuterUOType_30);
    }
#line 1525 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1525 "modecheck_goal.m"
  }
#line 1525 "modecheck_goal.m"
}

#line 1036 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__1036__1_2_p_0(
#line 1036 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PolySpecs_23,
#line 1036 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_36)
#line 1036 "modecheck_goal.m"
{
#line 1036 "modecheck_goal.m"
  {
#line 1036 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1036 "modecheck_goal.m"
    {
#line 1036 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_goal__PolySpecs_23)), ((MR_Box) (check_hlds__modecheck_goal__HeadVar__2_36)));
    }
#line 1036 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1036 "modecheck_goal.m"
  }
#line 1036 "modecheck_goal.m"
}

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__867__1_2_p_0(
#line 867 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Kind1_40,
#line 867 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_73)
#line 867 "modecheck_goal.m"
{
#line 867 "modecheck_goal.m"
  {
#line 867 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__Kind1_40 == check_hlds__modecheck_goal__HeadVar__2_73);

#line 867 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 867 "modecheck_goal.m"
  }
#line 867 "modecheck_goal.m"
}

#line 1117 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
#line 1117 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
#line 1117 "modecheck_goal.m"
{
#line 1117 "modecheck_goal.m"
  {
#line 1117 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1117 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastX_12 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;
#line 1117 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastY_13 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__3_3;

#line 1117 "modecheck_goal.m"
    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_12 == check_hlds__modecheck_goal__CastY_13);
#line 1117 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 2339 "check_hlds.modecheck_goal.c"
      *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 0;
#line 1117 "modecheck_goal.m"
    else
#line 1117 "modecheck_goal.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1117 "modecheck_goal.m"
      {
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));

#line 1117 "modecheck_goal.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1117 "modecheck_goal.m"
          {
#line 1117 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 0)));

#line 1117 "modecheck_goal.m"
            {
#line 1117 "modecheck_goal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__V_16_16)), ((MR_Box) (check_hlds__modecheck_goal__V_5_5)));
#line 1117 "modecheck_goal.m"
              return;
            }
#line 1117 "modecheck_goal.m"
          }
#line 1117 "modecheck_goal.m"
        else
#line 2368 "check_hlds.modecheck_goal.c"
          *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 1;
#line 1117 "modecheck_goal.m"
      }
#line 1117 "modecheck_goal.m"
    else
#line 1117 "modecheck_goal.m"
      {
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));

#line 1117 "modecheck_goal.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2381 "check_hlds.modecheck_goal.c"
          *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 2;
#line 1117 "modecheck_goal.m"
        else
#line 1117 "modecheck_goal.m"
          {
#line 1117 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 0)));

#line 1117 "modecheck_goal.m"
            {
#line 1117 "modecheck_goal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__V_17_17)), ((MR_Box) (check_hlds__modecheck_goal__V_11_11)));
#line 1117 "modecheck_goal.m"
              return;
            }
#line 1117 "modecheck_goal.m"
          }
#line 1117 "modecheck_goal.m"
      }
#line 1117 "modecheck_goal.m"
  }
#line 1117 "modecheck_goal.m"
}

#line 1117 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1117 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
#line 1117 "modecheck_goal.m"
{
#line 1117 "modecheck_goal.m"
  {
#line 1117 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1117 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastX_7 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__1_1;
#line 1117 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastY_8 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;

#line 1117 "modecheck_goal.m"
    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_7 == check_hlds__modecheck_goal__CastY_8);
#line 1117 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 1117 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = MR_TRUE;
#line 1117 "modecheck_goal.m"
    else
#line 1117 "modecheck_goal.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1117 "modecheck_goal.m"
      {
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__TypeInfo_9_9;
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_4_4;

#line 1117 "modecheck_goal.m"
        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1117 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1117 "modecheck_goal.m"
          {
#line 1117 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 2451 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
#line 2453 "check_hlds.modecheck_goal.c"
            {
#line 2455 "check_hlds.modecheck_goal.c"
              return check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_9_9, ((MR_Box) (check_hlds__modecheck_goal__V_3_3)), ((MR_Box) (check_hlds__modecheck_goal__V_4_4)));
            }
#line 1117 "modecheck_goal.m"
          }
#line 1117 "modecheck_goal.m"
      }
#line 1117 "modecheck_goal.m"
    else
#line 1117 "modecheck_goal.m"
      {
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__TypeInfo_10_10;
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1117 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_6_6;

#line 1117 "modecheck_goal.m"
        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1117 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1117 "modecheck_goal.m"
          {
#line 1117 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 2481 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeInfo_10_10 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
#line 2483 "check_hlds.modecheck_goal.c"
            {
#line 2485 "check_hlds.modecheck_goal.c"
              return check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_10_10, ((MR_Box) (check_hlds__modecheck_goal__V_5_5)), ((MR_Box) (check_hlds__modecheck_goal__V_6_6)));
            }
#line 1117 "modecheck_goal.m"
          }
#line 1117 "modecheck_goal.m"
      }
#line 1117 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1117 "modecheck_goal.m"
  }
#line 1117 "modecheck_goal.m"
}

#line 1196 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
#line 1196 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
#line 1196 "modecheck_goal.m"
{
#line 1196 "modecheck_goal.m"
  {
#line 1196 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1196 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar1_4 = check_hlds__modecheck_goal__HeadVar__2_2;
#line 1196 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar2_5 = check_hlds__modecheck_goal__HeadVar__3_3;

#line 1196 "modecheck_goal.m"
    {
#line 1196 "modecheck_goal.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar2_5)));
#line 1196 "modecheck_goal.m"
      return;
    }
#line 1196 "modecheck_goal.m"
  }
#line 1196 "modecheck_goal.m"
}

#line 1196 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1196 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
#line 1196 "modecheck_goal.m"
{
#line 1196 "modecheck_goal.m"
  {
#line 1196 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1196 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar1_3 = check_hlds__modecheck_goal__HeadVar__1_1;
#line 1196 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar2_4 = check_hlds__modecheck_goal__HeadVar__2_2;

#line 1196 "modecheck_goal.m"
    {
#line 1196 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar2_4)));
    }
#line 1196 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1196 "modecheck_goal.m"
  }
#line 1196 "modecheck_goal.m"
}

#line 1193 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
#line 1193 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
#line 1193 "modecheck_goal.m"
{
#line 1193 "modecheck_goal.m"
  {
#line 1193 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1193 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastX_6 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;
#line 1193 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastY_7 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__3_3;

#line 1193 "modecheck_goal.m"
    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_6 == check_hlds__modecheck_goal__CastY_7);
#line 1193 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 2585 "check_hlds.modecheck_goal.c"
      *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 0;
#line 1193 "modecheck_goal.m"
    else
#line 1193 "modecheck_goal.m"
      {
#line 1193 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_4_4 = (MR_Word) check_hlds__modecheck_goal__HeadVar__2_2;
#line 1193 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_5_5 = (MR_Word) check_hlds__modecheck_goal__HeadVar__3_3;

#line 1193 "modecheck_goal.m"
        {
#line 1193 "modecheck_goal.m"
          parse_tree__prog_data____Compare____mer_inst_0_0(check_hlds__modecheck_goal__HeadVar__1_1, check_hlds__modecheck_goal__V_4_4, check_hlds__modecheck_goal__V_5_5);
#line 1193 "modecheck_goal.m"
          return;
        }
#line 1193 "modecheck_goal.m"
      }
#line 1193 "modecheck_goal.m"
  }
#line 1193 "modecheck_goal.m"
}

#line 1193 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1193 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
#line 1193 "modecheck_goal.m"
{
#line 1193 "modecheck_goal.m"
  {
#line 1193 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1193 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastX_5 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__1_1;
#line 1193 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__CastY_6 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;

#line 1193 "modecheck_goal.m"
    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_5 == check_hlds__modecheck_goal__CastY_6);
#line 1193 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 1193 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = MR_TRUE;
#line 1193 "modecheck_goal.m"
    else
#line 1193 "modecheck_goal.m"
      {
#line 1193 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_3_3 = (MR_Word) check_hlds__modecheck_goal__HeadVar__1_1;
#line 1193 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_4_4 = (MR_Word) check_hlds__modecheck_goal__HeadVar__2_2;

#line 2643 "check_hlds.modecheck_goal.c"
        {
#line 2645 "check_hlds.modecheck_goal.c"
          return check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_goal__V_3_3, check_hlds__modecheck_goal__V_4_4);
        }
#line 1193 "modecheck_goal.m"
      }
#line 1193 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1193 "modecheck_goal.m"
  }
#line 1193 "modecheck_goal.m"
}

#line 1658 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__solver_var_to_init_3_p_0(
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ModuleInfo_4,
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap_5,
#line 1658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_6)
#line 1658 "modecheck_goal.m"
{
#line 1661 "modecheck_goal.m"
  {
#line 1661 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1661 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Inst_7;

#line 1662 "modecheck_goal.m"
    {
#line 1662 "modecheck_goal.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap_5, check_hlds__modecheck_goal__Var_6, &check_hlds__modecheck_goal__Inst_7);
    }
#line 1663 "modecheck_goal.m"
    {
#line 1663 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_goal__ModuleInfo_4, check_hlds__modecheck_goal__Inst_7);
    }
#line 1661 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1661 "modecheck_goal.m"
  }
#line 1658 "modecheck_goal.m"
}

#line 1644 "modecheck_goal.m"
static MR_Box MR_CALL 
check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0_1(
#line 1644 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1644 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1644 "modecheck_goal.m"
{
#line 1644 "modecheck_goal.m"
  {
#line 1644 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__wrapper_arg_2;
#line 1644 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 1644 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv0_Goal_8;

#line 1644 "modecheck_goal.m"
    {
#line 1644 "modecheck_goal.m"
      check_hlds__modecheck_goal__conv0_Goal_8 = check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1644 "modecheck_goal.m"
    check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_Goal_8));
#line 1644 "modecheck_goal.m"
    return check_hlds__modecheck_goal__wrapper_arg_2;
#line 1644 "modecheck_goal.m"
  }
#line 1644 "modecheck_goal.m"
}

#line 1635 "modecheck_goal.m"
static MR_Word MR_CALL 
check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InitedVars_5,
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InitCalls_6,
#line 1635 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal0_7)
#line 1635 "modecheck_goal.m"
{
#line 1638 "modecheck_goal.m"
  {
#line 1638 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Goal_8;
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_7, (MR_Integer) 0)));
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_7, (MR_Integer) 1)));
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__NonLocals0_11;
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__NonLocals_12;
#line 1638 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalInfo_13;
#line 1647 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Disjs0_14;

#line 1640 "modecheck_goal.m"
    {
#line 1640 "modecheck_goal.m"
      check_hlds__modecheck_goal__NonLocals0_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_10);
    }
#line 1641 "modecheck_goal.m"
    {
#line 1641 "modecheck_goal.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__InitedVars_5, check_hlds__modecheck_goal__NonLocals0_11, &check_hlds__modecheck_goal__NonLocals_12);
    }
#line 1642 "modecheck_goal.m"
    {
#line 1642 "modecheck_goal.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_goal__NonLocals_12, check_hlds__modecheck_goal__GoalInfo0_10, &check_hlds__modecheck_goal__GoalInfo_13);
    }
#line 1643 "modecheck_goal.m"
    check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1643 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 1643 "modecheck_goal.m"
      {
#line 1643 "modecheck_goal.m"
        check_hlds__modecheck_goal__Disjs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_9, (MR_Integer) 1)));
#line 1645 "modecheck_goal.m"
        {
#line 1645 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1645 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Disjs_15;
#line 1645 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_17_17;
#line 1645 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_18_18;

#line 1644 "modecheck_goal.m"
          {
#line 1644 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1644 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[2]));
#line 1644 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0_1));
#line 1644 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1644 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_goal__InitedVars_5));
#line 1644 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_17_17, 4) = ((MR_Box) (check_hlds__modecheck_goal__InitCalls_6));
#line 1644 "modecheck_goal.m"
          }
#line 1644 "modecheck_goal.m"
          {
#line 1644 "modecheck_goal.m"
            check_hlds__modecheck_goal__Disjs_15 = mercury__list__map_2_f_0(check_hlds__modecheck_goal__TypeCtorInfo_21_21, check_hlds__modecheck_goal__TypeCtorInfo_21_21, check_hlds__modecheck_goal__V_17_17, check_hlds__modecheck_goal__Disjs0_14);
          }
#line 1646 "modecheck_goal.m"
          {
#line 1646 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1646 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_goal__Disjs_15));
#line 1646 "modecheck_goal.m"
          }
#line 1646 "modecheck_goal.m"
          {
#line 1646 "modecheck_goal.m"
            check_hlds__modecheck_goal__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1646 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_8, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_18_18));
#line 1646 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_8, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_13));
#line 1646 "modecheck_goal.m"
          }
#line 1645 "modecheck_goal.m"
        }
#line 1643 "modecheck_goal.m"
      }
#line 1643 "modecheck_goal.m"
    else
#line 1648 "modecheck_goal.m"
      {
#line 1648 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Conjs_16;
#line 1648 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_19_19;

#line 1648 "modecheck_goal.m"
        {
#line 1648 "modecheck_goal.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__modecheck_goal__Goal0_7, &check_hlds__modecheck_goal__Conjs_16);
        }
#line 1649 "modecheck_goal.m"
        {
#line 1649 "modecheck_goal.m"
          check_hlds__modecheck_goal__V_19_19 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__Conjs_16, check_hlds__modecheck_goal__InitCalls_6);
        }
#line 1649 "modecheck_goal.m"
        {
#line 1649 "modecheck_goal.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_goal__V_19_19, check_hlds__modecheck_goal__GoalInfo_13, &check_hlds__modecheck_goal__Goal_8);
        }
#line 1648 "modecheck_goal.m"
      }
#line 1638 "modecheck_goal.m"
    return check_hlds__modecheck_goal__Goal_8;
#line 1638 "modecheck_goal.m"
  }
#line 1635 "modecheck_goal.m"
}

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0_1(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1656 "modecheck_goal.m"
{
#line 1656 "modecheck_goal.m"
  {
#line 1656 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_to_init_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1656 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
  }
#line 1656 "modecheck_goal.m"
}

#line 1614 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0(
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__5_5,
#line 1614 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
#line 1614 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7)
#line 1614 "modecheck_goal.m"
{
#line 1618 "modecheck_goal.m"
  {
#line 1618 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1618 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1618 "modecheck_goal.m"
      if ((check_hlds__modecheck_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1618 "modecheck_goal.m"
        {
#line 1618 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1618 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1618 "modecheck_goal.m"
          *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6;
#line 1618 "modecheck_goal.m"
        }
#line 1618 "modecheck_goal.m"
      else
#line 1619 "modecheck_goal.m"
        {
#line 1620 "modecheck_goal.m"
          {
#line 1620 "modecheck_goal.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.add_necessary_disj_init_calls\'/7", (MR_String) "mismatched lists");
#line 1620 "modecheck_goal.m"
            return;
          }
#line 1619 "modecheck_goal.m"
        }
#line 1618 "modecheck_goal.m"
    else
#line 1618 "modecheck_goal.m"
      {
#line 1618 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1618 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));

#line 1618 "modecheck_goal.m"
        if ((check_hlds__modecheck_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1621 "modecheck_goal.m"
          {
#line 1622 "modecheck_goal.m"
            {
#line 1622 "modecheck_goal.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.add_necessary_disj_init_calls\'/7", (MR_String) "mismatched lists");
#line 1622 "modecheck_goal.m"
              return;
            }
#line 1621 "modecheck_goal.m"
          }
#line 1618 "modecheck_goal.m"
        else
#line 1625 "modecheck_goal.m"
          {
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goal_34;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goals_35;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InstMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 0)));
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InstMaps0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 1)));
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InstMap_38;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InstMaps_39;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__ModuleInfo_42;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__VarsToInit_43;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InitCalls_44;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__InitedVars_45;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_49_49;
#line 1625 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_57_57;

#line 1626 "modecheck_goal.m"
            {
#line 1626 "modecheck_goal.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__ModuleInfo_42);
            }
#line 1656 "modecheck_goal.m"
            {
#line 1656 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_57_57, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
#line 1656 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_57_57, 1) = ((MR_Box) (check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0_1));
#line 1656 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1656 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_57_57, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_42));
#line 1656 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_57_57, 4) = ((MR_Box) (check_hlds__modecheck_goal__InstMap0_36));
#line 1656 "modecheck_goal.m"
            }
#line 1656 "modecheck_goal.m"
            {
#line 1656 "modecheck_goal.m"
              check_hlds__modecheck_goal__VarsToInit_43 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_57_57, check_hlds__modecheck_goal__HeadVar__5_5);
            }
#line 1628 "modecheck_goal.m"
            {
#line 1628 "modecheck_goal.m"
              check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_goal__VarsToInit_43, &check_hlds__modecheck_goal__InitCalls_44, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 1629 "modecheck_goal.m"
            {
#line 1629 "modecheck_goal.m"
              check_hlds__modecheck_goal__InitedVars_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__VarsToInit_43);
            }
#line 1630 "modecheck_goal.m"
            {
#line 1630 "modecheck_goal.m"
              check_hlds__modecheck_goal__Goal_34 = check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(check_hlds__modecheck_goal__InitedVars_45, check_hlds__modecheck_goal__InitCalls_44, check_hlds__modecheck_goal__V_53_53);
            }
#line 1631 "modecheck_goal.m"
            {
#line 1631 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_49_49 = parse_tree__prog_mode__any_inst_0_f_0();
            }
#line 1631 "modecheck_goal.m"
            {
#line 1631 "modecheck_goal.m"
              hlds__instmap__instmap_set_vars_same_4_p_0(check_hlds__modecheck_goal__V_49_49, check_hlds__modecheck_goal__VarsToInit_43, check_hlds__modecheck_goal__InstMap0_36, &check_hlds__modecheck_goal__InstMap_38);
            }
#line 1632 "modecheck_goal.m"
            {
#line 1632 "modecheck_goal.m"
              check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0(check_hlds__modecheck_goal__V_52_52, &check_hlds__modecheck_goal__Goals_35, check_hlds__modecheck_goal__InstMaps0_37, &check_hlds__modecheck_goal__InstMaps_39, check_hlds__modecheck_goal__HeadVar__5_5, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);
            }
#line 1623 "modecheck_goal.m"
            {
#line 1623 "modecheck_goal.m"
              MR_Word base;
#line 1623 "modecheck_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "modecheck_goal.m"
              *check_hlds__modecheck_goal__HeadVar__2_2 = base;
#line 1623 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_34));
#line 1623 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_35));
#line 1623 "modecheck_goal.m"
            }
#line 1624 "modecheck_goal.m"
            {
#line 1624 "modecheck_goal.m"
              MR_Word base;
#line 1624 "modecheck_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "modecheck_goal.m"
              *check_hlds__modecheck_goal__HeadVar__4_4 = base;
#line 1624 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_38));
#line 1624 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_39));
#line 1624 "modecheck_goal.m"
            }
#line 1625 "modecheck_goal.m"
          }
#line 1618 "modecheck_goal.m"
      }
#line 1618 "modecheck_goal.m"
  }
#line 1614 "modecheck_goal.m"
}

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_1(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1607 "modecheck_goal.m"
{
#line 1607 "modecheck_goal.m"
  {
#line 1607 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1607 "modecheck_goal.m"
    MR_builtin_longjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__commit_0, 1);
#line 1607 "modecheck_goal.m"
  }
#line 1607 "modecheck_goal.m"
}

#line 1610 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_3(
#line 1610 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1610 "modecheck_goal.m"
{
#line 1610 "modecheck_goal.m"
  {
#line 1610 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1610 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMap_10 = ((MR_Word) (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__conv0_InstMap_10);
#line 1610 "modecheck_goal.m"
    {
#line 1610 "modecheck_goal.m"
      check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_2(check_hlds__modecheck_goal__env_ptr);
#line 1610 "modecheck_goal.m"
      return;
    }
#line 1610 "modecheck_goal.m"
  }
#line 1610 "modecheck_goal.m"
}

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_2(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1607 "modecheck_goal.m"
{
#line 1607 "modecheck_goal.m"
  {
#line 1607 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1611 "modecheck_goal.m"
    {
#line 1611 "modecheck_goal.m"
      hlds__instmap__instmap_lookup_var_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMap_10, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Var_8, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Inst_11);
    }
#line 1612 "modecheck_goal.m"
    {
#line 1612 "modecheck_goal.m"
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__ModuleInfo_6, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Inst_11);
    }
#line 1612 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded = !((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded);
#line 1612 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded)
#line 1612 "modecheck_goal.m"
      {
#line 1612 "modecheck_goal.m"
        check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_1(check_hlds__modecheck_goal__env_ptr);
#line 1612 "modecheck_goal.m"
        return;
      }
#line 1607 "modecheck_goal.m"
  }
#line 1607 "modecheck_goal.m"
}

#line 1607 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_4(
#line 1607 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1607 "modecheck_goal.m"
{
#line 1607 "modecheck_goal.m"
  {
#line 1607 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1607 "modecheck_goal.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__commit_0) == 0)
#line 1607 "modecheck_goal.m"
      {
#line 1607 "modecheck_goal.m"
        {
#line 1607 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_12_12;
#line 1607 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__VarType_9;

#line 1608 "modecheck_goal.m"
          {
#line 1608 "modecheck_goal.m"
            hlds__vartypes__lookup_var_type_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__VarTypes_5, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Var_8, &check_hlds__modecheck_goal__VarType_9);
          }
#line 1609 "modecheck_goal.m"
          {
#line 1609 "modecheck_goal.m"
            (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__ModuleInfo_6, check_hlds__modecheck_goal__VarType_9);
          }
#line 1607 "modecheck_goal.m"
          if ((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded)
#line 1607 "modecheck_goal.m"
            {
#line 3211 "check_hlds.modecheck_goal.c"
              check_hlds__modecheck_goal__TypeCtorInfo_12_12 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 1610 "modecheck_goal.m"
              {
#line 1610 "modecheck_goal.m"
                mercury__list__member_2_p_1(check_hlds__modecheck_goal__TypeCtorInfo_12_12, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__conv0_InstMap_10, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMaps_7, check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_3, check_hlds__modecheck_goal__env_ptr);
              }
#line 1607 "modecheck_goal.m"
            }
#line 1607 "modecheck_goal.m"
        }
#line 1607 "modecheck_goal.m"
        (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded = MR_FALSE;
#line 1607 "modecheck_goal.m"
      }
#line 1607 "modecheck_goal.m"
    else
#line 1607 "modecheck_goal.m"
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded = MR_TRUE;
#line 1607 "modecheck_goal.m"
  }
#line 1607 "modecheck_goal.m"
}

#line 1604 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0(
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_5,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ModuleInfo_6,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMaps_7,
#line 1604 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_8)
#line 1604 "modecheck_goal.m"
{
#line 1604 "modecheck_goal.m"
  {
#line 1604 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0_s check_hlds__modecheck_goal__env;

#line 1604 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__VarTypes_5 = check_hlds__modecheck_goal__VarTypes_5;
#line 1604 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__ModuleInfo_6 = check_hlds__modecheck_goal__ModuleInfo_6;
#line 1604 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__InstMaps_7 = check_hlds__modecheck_goal__InstMaps_7;
#line 1604 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__Var_8 = check_hlds__modecheck_goal__Var_8;
#line 1607 "modecheck_goal.m"
    {
#line 1607 "modecheck_goal.m"
      check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_4(&check_hlds__modecheck_goal__env);
    }
#line 1607 "modecheck_goal.m"
    return (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0_env_0__succeeded;
#line 1604 "modecheck_goal.m"
  }
#line 1604 "modecheck_goal.m"
}

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1583 "modecheck_goal.m"
{
#line 1583 "modecheck_goal.m"
  {
#line 1583 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1583 "modecheck_goal.m"
    MR_builtin_longjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0, 1);
#line 1583 "modecheck_goal.m"
  }
#line 1583 "modecheck_goal.m"
}

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1583 "modecheck_goal.m"
{
#line 1583 "modecheck_goal.m"
  {
#line 1583 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1584 "modecheck_goal.m"
    {
#line 1584 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20);
    }
#line 1585 "modecheck_goal.m"
    {
#line 1585 "modecheck_goal.m"
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
    }
#line 1585 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
#line 1585 "modecheck_goal.m"
      {
#line 1585 "modecheck_goal.m"
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(check_hlds__modecheck_goal__env_ptr);
#line 1585 "modecheck_goal.m"
        return;
      }
#line 1583 "modecheck_goal.m"
  }
#line 1583 "modecheck_goal.m"
}

#line 1583 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
#line 1583 "modecheck_goal.m"
  void * check_hlds__modecheck_goal__env_ptr_arg)
#line 1583 "modecheck_goal.m"
{
#line 1583 "modecheck_goal.m"
  {
#line 1583 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

#line 1583 "modecheck_goal.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0) == 0)
#line 1583 "modecheck_goal.m"
      {
#line 1581 "modecheck_goal.m"
        {
#line 1581 "modecheck_goal.m"
          {
#line 1581 "modecheck_goal.m"
            hlds__instmap__instmap_lookup_var_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
          }
#line 1581 "modecheck_goal.m"
          {
#line 1581 "modecheck_goal.m"
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(check_hlds__modecheck_goal__env_ptr);
          }
#line 1581 "modecheck_goal.m"
        }
#line 1582 "modecheck_goal.m"
        {
#line 1582 "modecheck_goal.m"
          {
#line 1582 "modecheck_goal.m"
            hlds__instmap__instmap_lookup_var_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
          }
#line 1582 "modecheck_goal.m"
          {
#line 1582 "modecheck_goal.m"
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(check_hlds__modecheck_goal__env_ptr);
          }
#line 1582 "modecheck_goal.m"
        }
#line 1583 "modecheck_goal.m"
        (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 1583 "modecheck_goal.m"
      }
#line 1583 "modecheck_goal.m"
    else
#line 1583 "modecheck_goal.m"
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 1583 "modecheck_goal.m"
  }
#line 1583 "modecheck_goal.m"
}

#line 1574 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NegCtxtDesc_1,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap0_3,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMap_4,
#line 1574 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5,
#line 1574 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6)
#line 1574 "modecheck_goal.m"
{
#line 1574 "modecheck_goal.m"
  {
#line 1574 "modecheck_goal.m"
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s check_hlds__modecheck_goal__env;

#line 1574 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3 = check_hlds__modecheck_goal__InstMap0_3;
#line 1574 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4 = check_hlds__modecheck_goal__InstMap_4;
#line 1574 "modecheck_goal.m"
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5;
#line 1577 "modecheck_goal.m"
    while (MR_TRUE)
#line 1577 "modecheck_goal.m"
      {
#line 1577 "modecheck_goal.m"
        /* tailcall optimized into a loop */
#line 1577 "modecheck_goal.m"
        if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1577 "modecheck_goal.m"
          *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6 = (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
#line 1577 "modecheck_goal.m"
        else
#line 1579 "modecheck_goal.m"
          {
#line 1579 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__NonLocals_15;

#line 1578 "modecheck_goal.m"
            (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 1578 "modecheck_goal.m"
            check_hlds__modecheck_goal__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 1583 "modecheck_goal.m"
            {
#line 1583 "modecheck_goal.m"
              check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(&check_hlds__modecheck_goal__env);
            }
#line 1591 "modecheck_goal.m"
            if ((check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
#line 1587 "modecheck_goal.m"
              {
#line 1587 "modecheck_goal.m"
                MR_Word check_hlds__modecheck_goal__WaitingVars_21;
#line 1587 "modecheck_goal.m"
                MR_Word check_hlds__modecheck_goal__ModeError_22;

#line 1587 "modecheck_goal.m"
                {
#line 1587 "modecheck_goal.m"
                  check_hlds__modecheck_goal__WaitingVars_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14);
                }
#line 1588 "modecheck_goal.m"
                {
#line 1588 "modecheck_goal.m"
                  check_hlds__modecheck_goal__ModeError_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "modecheck_goal.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 1588 "modecheck_goal.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 1) = ((MR_Box) (check_hlds__modecheck_goal__NegCtxtDesc_1));
#line 1588 "modecheck_goal.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 2) = ((MR_Box) ((check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14));
#line 1588 "modecheck_goal.m"
                }
#line 1590 "modecheck_goal.m"
                {
#line 1590 "modecheck_goal.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_goal__WaitingVars_21, check_hlds__modecheck_goal__ModeError_22, (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6);
#line 1590 "modecheck_goal.m"
                  return;
                }
#line 1587 "modecheck_goal.m"
              }
#line 1591 "modecheck_goal.m"
            else
#line 1592 "modecheck_goal.m"
              {
#line 1592 "modecheck_goal.m"
                /* direct tailcall eliminated */
#line 1592 "modecheck_goal.m"
                {
#line 1592 "modecheck_goal.m"
                  MR_Word check_hlds__modecheck_goal__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_goal__NonLocals_15;

#line 1592 "modecheck_goal.m"
                  check_hlds__modecheck_goal__HeadVar__2_2 = check_hlds__modecheck_goal__HeadVar__2__tmp_copy_2;
#line 1592 "modecheck_goal.m"
                }
#line 1592 "modecheck_goal.m"
                continue;
#line 1592 "modecheck_goal.m"
              }
#line 1579 "modecheck_goal.m"
          }
#line 1577 "modecheck_goal.m"
        break;
#line 1577 "modecheck_goal.m"
      }
#line 1574 "modecheck_goal.m"
  }
#line 1574 "modecheck_goal.m"
}

#line 1552 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(
#line 1552 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1552 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4,
#line 1552 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5)
#line 1552 "modecheck_goal.m"
{
#line 1555 "modecheck_goal.m"
  {
#line 1555 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1555 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "modecheck_goal.m"
      {
#line 1555 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1555 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1555 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4;
#line 1555 "modecheck_goal.m"
      }
#line 1555 "modecheck_goal.m"
    else
#line 1557 "modecheck_goal.m"
      {
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal_11;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals_12;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap_13;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_14;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap0_16;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19;
#line 1557 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20;

#line 1558 "modecheck_goal.m"
        {
#line 1558 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_goal__InstMap0_16);
        }
#line 1559 "modecheck_goal.m"
        {
#line 1559 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_9, &check_hlds__modecheck_goal__Goal_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19);
        }
#line 1560 "modecheck_goal.m"
        {
#line 1560 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__modecheck_goal__InstMap_13);
        }
#line 1561 "modecheck_goal.m"
        {
#line 1561 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20);
        }
#line 1562 "modecheck_goal.m"
        {
#line 1562 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(check_hlds__modecheck_goal__Goals0_10, &check_hlds__modecheck_goal__Goals_12, &check_hlds__modecheck_goal__InstMaps_14, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5);
        }
#line 1556 "modecheck_goal.m"
        {
#line 1556 "modecheck_goal.m"
          MR_Word base;
#line 1556 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
#line 1556 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_11));
#line 1556 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_12));
#line 1556 "modecheck_goal.m"
        }
#line 1556 "modecheck_goal.m"
        {
#line 1556 "modecheck_goal.m"
          MR_Word base;
#line 1556 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 1556 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_13));
#line 1556 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_14));
#line 1556 "modecheck_goal.m"
        }
#line 1557 "modecheck_goal.m"
      }
#line 1555 "modecheck_goal.m"
  }
#line 1552 "modecheck_goal.m"
}

#line 1532 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
#line 1532 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 1532 "modecheck_goal.m"
{
#line 1532 "modecheck_goal.m"
  {
#line 1532 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1532 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1532 "modecheck_goal.m"
    {
#line 1532 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1532__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
#line 1532 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1532 "modecheck_goal.m"
  }
#line 1532 "modecheck_goal.m"
}

#line 1530 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
#line 1530 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 1530 "modecheck_goal.m"
{
#line 1530 "modecheck_goal.m"
  {
#line 1530 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1530 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1530 "modecheck_goal.m"
    {
#line 1530 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1530__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
#line 1530 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1530 "modecheck_goal.m"
  }
#line 1530 "modecheck_goal.m"
}

#line 1525 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
#line 1525 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 1525 "modecheck_goal.m"
{
#line 1525 "modecheck_goal.m"
  {
#line 1525 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1525 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1525 "modecheck_goal.m"
    {
#line 1525 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1525__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
#line 1525 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1525 "modecheck_goal.m"
  }
#line 1525 "modecheck_goal.m"
}

#line 1460 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ShortHand0_6,
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 1460 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 1460 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_43,
#line 1460 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44)
#line 1460 "modecheck_goal.m"
{
#line 1466 "modecheck_goal.m"
  {
#line 1466 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1466 "modecheck_goal.m"
#line 1466 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__ShortHand0_6)) {
#line 1466 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1466 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 1547 "modecheck_goal.m"
        {
#line 1549 "modecheck_goal.m"
          {
#line 1549 "modecheck_goal.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "bi_implication");
#line 1549 "modecheck_goal.m"
            return;
          }
#line 1547 "modecheck_goal.m"
        }
#line 1466 "modecheck_goal.m"
        break;
#line 1466 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 1466 "modecheck_goal.m"
        {
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_85_85;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Outer_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 1)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Inner_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 2)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__MaybeOutputVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 3)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__MainGoal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 4)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OrElseGoals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 5)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OrElseInners_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 6)));
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__AtomicGoalList0_17;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__NonLocals_18;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__AtomicGoalList1_19;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMapList0_20;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__VarTypes_21;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__AtomicGoalList_22;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMapList_23;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__MainGoal_24;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OrElseGoals_25;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ArmInstMaps_26;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OuterDI_27;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OuterUO_28;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OuterDIType_29;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__OuterUOType_30;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__GoalType_31;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InnerDI_32;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InnerUO_33;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InnerDIType_34;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InnerUOType_35;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ShortHand_36;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_57_57;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_59_59;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_62_62;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_66_66;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_70_70;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_74_74;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_75_75;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_79_79;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Goal0_98;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Goals0_99;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Goal_100;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Goals_101;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMap_102;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMaps_103;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMap0_105;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_108;
#line 1466 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_109;
#line 1465 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 0)));
#line 1493 "modecheck_goal.m"
          MR_Box check_hlds__modecheck_goal__conv0_MainGoal_24;

#line 1473 "modecheck_goal.m"
          {
#line 1473 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_43, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_57_57);
          }
#line 1474 "modecheck_goal.m"
          {
#line 1474 "modecheck_goal.m"
            check_hlds__modecheck_goal__AtomicGoalList0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainGoal0_14));
#line 1474 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, 1) = ((MR_Box) (check_hlds__modecheck_goal__OrElseGoals0_15));
#line 1474 "modecheck_goal.m"
          }
#line 1475 "modecheck_goal.m"
          {
#line 1475 "modecheck_goal.m"
            check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
          }
#line 1556 "modecheck_goal.m"
          check_hlds__modecheck_goal__Goal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, (MR_Integer) 0)));
#line 1556 "modecheck_goal.m"
          check_hlds__modecheck_goal__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, (MR_Integer) 1)));
#line 1558 "modecheck_goal.m"
          {
#line 1558 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_goal__InstMap0_105);
          }
#line 1559 "modecheck_goal.m"
          {
#line 1559 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_98, &check_hlds__modecheck_goal__Goal_100, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_108);
          }
#line 1560 "modecheck_goal.m"
          {
#line 1560 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_108, &check_hlds__modecheck_goal__InstMap_102);
          }
#line 1561 "modecheck_goal.m"
          {
#line 1561 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_105, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_108, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_109);
          }
#line 1562 "modecheck_goal.m"
          {
#line 1562 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(check_hlds__modecheck_goal__Goals0_99, &check_hlds__modecheck_goal__Goals_101, &check_hlds__modecheck_goal__InstMaps_103, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_109, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58);
          }
#line 1556 "modecheck_goal.m"
          {
#line 1556 "modecheck_goal.m"
            check_hlds__modecheck_goal__AtomicGoalList1_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList1_19, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_100));
#line 1556 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList1_19, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_101));
#line 1556 "modecheck_goal.m"
          }
#line 1556 "modecheck_goal.m"
          {
#line 1556 "modecheck_goal.m"
            check_hlds__modecheck_goal__InstMapList0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__InstMapList0_20, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_102));
#line 1556 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__InstMapList0_20, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_103));
#line 1556 "modecheck_goal.m"
          }
#line 1486 "modecheck_goal.m"
          {
#line 1486 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_goal__VarTypes_21);
          }
#line 1490 "modecheck_goal.m"
          {
#line 1490 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NonLocals_18);
          }
#line 1490 "modecheck_goal.m"
          {
#line 1490 "modecheck_goal.m"
            check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0(check_hlds__modecheck_goal__V_59_59, check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__AtomicGoalList1_19, &check_hlds__modecheck_goal__AtomicGoalList_22, check_hlds__modecheck_goal__InstMapList0_20, &check_hlds__modecheck_goal__InstMapList_23, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60);
          }
#line 3922 "check_hlds.modecheck_goal.c"
          check_hlds__modecheck_goal__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1493 "modecheck_goal.m"
          {
#line 1493 "modecheck_goal.m"
            check_hlds__modecheck_goal__conv0_MainGoal_24 = mercury__list__det_head_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_85_85, check_hlds__modecheck_goal__AtomicGoalList_22);
          }
#line 1493 "modecheck_goal.m"
          check_hlds__modecheck_goal__MainGoal_24 = ((MR_Word) check_hlds__modecheck_goal__conv0_MainGoal_24);
#line 1494 "modecheck_goal.m"
          {
#line 1494 "modecheck_goal.m"
            check_hlds__modecheck_goal__OrElseGoals_25 = mercury__list__det_tail_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_85_85, check_hlds__modecheck_goal__AtomicGoalList_22);
          }
#line 1496 "modecheck_goal.m"
          {
#line 1496 "modecheck_goal.m"
            hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__AtomicGoalList_22, check_hlds__modecheck_goal__InstMapList_23, &check_hlds__modecheck_goal__ArmInstMaps_26);
          }
#line 1497 "modecheck_goal.m"
          {
#line 1497 "modecheck_goal.m"
            hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__ArmInstMaps_26, (MR_Integer) 2, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_62_62);
          }
#line 1507 "modecheck_goal.m"
          check_hlds__modecheck_goal__OuterDI_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Outer_11, (MR_Integer) 0)));
#line 1507 "modecheck_goal.m"
          check_hlds__modecheck_goal__OuterUO_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Outer_11, (MR_Integer) 1)));
#line 1508 "modecheck_goal.m"
          {
#line 1508 "modecheck_goal.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__OuterDI_27, &check_hlds__modecheck_goal__OuterDIType_29);
          }
#line 1509 "modecheck_goal.m"
          {
#line 1509 "modecheck_goal.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__OuterUO_28, &check_hlds__modecheck_goal__OuterUOType_30);
          }
#line 1511 "modecheck_goal.m"
          {
#line 1511 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_89_89;

#line 1511 "modecheck_goal.m"
            {
#line 1511 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_89_89 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            }
#line 1511 "modecheck_goal.m"
            {
#line 1511 "modecheck_goal.m"
              check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_29, check_hlds__modecheck_goal__V_89_89);
            }
#line 1511 "modecheck_goal.m"
          }
#line 1512 "modecheck_goal.m"
          if (!(check_hlds__modecheck_goal__succeeded))
#line 1512 "modecheck_goal.m"
            {
#line 1512 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_90_90;

#line 1512 "modecheck_goal.m"
              {
#line 1512 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_90_90 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
              }
#line 1512 "modecheck_goal.m"
              {
#line 1512 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_29, check_hlds__modecheck_goal__V_90_90);
              }
#line 1512 "modecheck_goal.m"
            }
#line 1516 "modecheck_goal.m"
          if (check_hlds__modecheck_goal__succeeded)
#line 1515 "modecheck_goal.m"
            check_hlds__modecheck_goal__GoalType_31 = (MR_Integer) 1;
#line 1516 "modecheck_goal.m"
          else
#line 1520 "modecheck_goal.m"
            {
#line 1517 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_91_91;

#line 1517 "modecheck_goal.m"
              {
#line 1517 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_91_91 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
              }
#line 1517 "modecheck_goal.m"
              {
#line 1517 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_29, check_hlds__modecheck_goal__V_91_91);
              }
#line 1520 "modecheck_goal.m"
              if (check_hlds__modecheck_goal__succeeded)
#line 1519 "modecheck_goal.m"
                check_hlds__modecheck_goal__GoalType_31 = (MR_Integer) 2;
#line 1520 "modecheck_goal.m"
              else
#line 1521 "modecheck_goal.m"
                {
#line 1521 "modecheck_goal.m"
                  {
#line 1521 "modecheck_goal.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid outer var type");
#line 1521 "modecheck_goal.m"
                    return;
                  }
#line 1521 "modecheck_goal.m"
                }
#line 1520 "modecheck_goal.m"
            }
#line 1525 "modecheck_goal.m"
          {
#line 1525 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
#line 1525 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1));
#line 1525 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1525 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 3) = ((MR_Box) (check_hlds__modecheck_goal__OuterDIType_29));
#line 1525 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 4) = ((MR_Box) (check_hlds__modecheck_goal__OuterUOType_30));
#line 1525 "modecheck_goal.m"
          }
#line 1525 "modecheck_goal.m"
          {
#line 1525 "modecheck_goal.m"
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_66_66, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: mismatched outer var type");
          }
#line 1527 "modecheck_goal.m"
          check_hlds__modecheck_goal__InnerDI_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Inner_12, (MR_Integer) 0)));
#line 1527 "modecheck_goal.m"
          check_hlds__modecheck_goal__InnerUO_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Inner_12, (MR_Integer) 1)));
#line 1528 "modecheck_goal.m"
          {
#line 1528 "modecheck_goal.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__InnerDI_32, &check_hlds__modecheck_goal__InnerDIType_34);
          }
#line 1529 "modecheck_goal.m"
          {
#line 1529 "modecheck_goal.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__InnerUO_33, &check_hlds__modecheck_goal__InnerUOType_35);
          }
#line 1530 "modecheck_goal.m"
          {
#line 1530 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_74_74 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          }
#line 1530 "modecheck_goal.m"
          {
#line 1530 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_70_70, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
#line 1530 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_70_70, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2));
#line 1530 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1530 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_70_70, 3) = ((MR_Box) (check_hlds__modecheck_goal__InnerDIType_34));
#line 1530 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_70_70, 4) = ((MR_Box) (check_hlds__modecheck_goal__V_74_74));
#line 1530 "modecheck_goal.m"
          }
#line 1530 "modecheck_goal.m"
          {
#line 1530 "modecheck_goal.m"
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_70_70, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          }
#line 1532 "modecheck_goal.m"
          {
#line 1532 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_79_79 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          }
#line 1532 "modecheck_goal.m"
          {
#line 1532 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1532 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_75_75, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
#line 1532 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_75_75, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3));
#line 1532 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1532 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_75_75, 3) = ((MR_Box) (check_hlds__modecheck_goal__InnerUOType_35));
#line 1532 "modecheck_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_75_75, 4) = ((MR_Box) (check_hlds__modecheck_goal__V_79_79));
#line 1532 "modecheck_goal.m"
          }
#line 1532 "modecheck_goal.m"
          {
#line 1532 "modecheck_goal.m"
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_75_75, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          }
#line 1535 "modecheck_goal.m"
          {
#line 1535 "modecheck_goal.m"
            check_hlds__modecheck_goal__ShortHand_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalType_31));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 1) = ((MR_Box) (check_hlds__modecheck_goal__Outer_11));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 2) = ((MR_Box) (check_hlds__modecheck_goal__Inner_12));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 3) = ((MR_Box) (check_hlds__modecheck_goal__MaybeOutputVars_13));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 4) = ((MR_Box) (check_hlds__modecheck_goal__MainGoal_24));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 5) = ((MR_Box) (check_hlds__modecheck_goal__OrElseGoals_25));
#line 1535 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_36, 6) = ((MR_Box) (check_hlds__modecheck_goal__OrElseInners_16));
#line 1535 "modecheck_goal.m"
          }
#line 1537 "modecheck_goal.m"
          {
#line 1537 "modecheck_goal.m"
            MR_Word base;
#line 1537 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_8 = base;
#line 1537 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1537 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__ShortHand_36));
#line 1537 "modecheck_goal.m"
          }
#line 1538 "modecheck_goal.m"
          {
#line 1538 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_62_62, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44);
#line 1538 "modecheck_goal.m"
            return;
          }
#line 1466 "modecheck_goal.m"
        }
#line 1466 "modecheck_goal.m"
        break;
#line 1466 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 1540 "modecheck_goal.m"
        {
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__MaybeIO_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 0)));
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ResultVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 1)));
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 2)));
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal_40;
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50;
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51;
#line 1540 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ShortHand_83;

#line 1541 "modecheck_goal.m"
          {
#line 1541 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_43, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50);
          }
#line 1542 "modecheck_goal.m"
          {
#line 1542 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_39, &check_hlds__modecheck_goal__SubGoal_40, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51);
          }
#line 1543 "modecheck_goal.m"
          {
#line 1543 "modecheck_goal.m"
            check_hlds__modecheck_goal__ShortHand_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "modecheck_goal.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_83, 0) = ((MR_Box) (check_hlds__modecheck_goal__MaybeIO_37));
#line 1543 "modecheck_goal.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_83, 1) = ((MR_Box) (check_hlds__modecheck_goal__ResultVar_38));
#line 1543 "modecheck_goal.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_83, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_40));
#line 1543 "modecheck_goal.m"
          }
#line 1544 "modecheck_goal.m"
          {
#line 1544 "modecheck_goal.m"
            MR_Word base;
#line 1544 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_8 = base;
#line 1544 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1544 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__ShortHand_83));
#line 1544 "modecheck_goal.m"
          }
#line 1545 "modecheck_goal.m"
          {
#line 1545 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44);
#line 1545 "modecheck_goal.m"
            return;
          }
#line 1540 "modecheck_goal.m"
        }
#line 1466 "modecheck_goal.m"
        break;
#line 1466 "modecheck_goal.m"
    }
#line 1466 "modecheck_goal.m"
  }
#line 1460 "modecheck_goal.m"
}

#line 1439 "modecheck_goal.m"
static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
#line 1439 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1439 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1439 "modecheck_goal.m"
{
#line 1439 "modecheck_goal.m"
  {
#line 1439 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__wrapper_arg_2;
#line 1439 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 1439 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__2_2;

#line 1439 "modecheck_goal.m"
    {
#line 1439 "modecheck_goal.m"
      check_hlds__modecheck_goal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1439 "modecheck_goal.m"
    check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__2_2));
#line 1439 "modecheck_goal.m"
    return check_hlds__modecheck_goal__wrapper_arg_2;
#line 1439 "modecheck_goal.m"
  }
#line 1439 "modecheck_goal.m"
}

#line 1422 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Attributes_12,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredId_13,
#line 1422 "modecheck_goal.m"
  MR_Integer check_hlds__modecheck_goal__ProcId0_14,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_15,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ExtraArgs_16,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PragmaCode_18,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_19,
#line 1422 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_20,
#line 1422 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1422 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
#line 1422 "modecheck_goal.m"
{
#line 1429 "modecheck_goal.m"
  {
#line 1429 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CallId_22;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_23;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ArgVars0_25;
#line 1429 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__ProcId_26;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ArgVars_27;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ExtraGoals_28;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Pragma_29;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_35_35;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_37_37;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;
#line 1429 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;

#line 1433 "modecheck_goal.m"
    {
#line 1433 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "pragma_foreign_code", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34);
    }
#line 1434 "modecheck_goal.m"
    {
#line 1434 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, check_hlds__modecheck_goal__PredId_13, &check_hlds__modecheck_goal__CallId_22);
    }
#line 1435 "modecheck_goal.m"
    {
#line 1435 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__InstMap0_23);
    }
#line 1437 "modecheck_goal.m"
    {
#line 1437 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_22));
#line 1437 "modecheck_goal.m"
    }
#line 1437 "modecheck_goal.m"
    {
#line 1437 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_37_37));
#line 1437 "modecheck_goal.m"
    }
#line 1437 "modecheck_goal.m"
    {
#line 1437 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_35_35, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
    }
#line 1439 "modecheck_goal.m"
    {
#line 1439 "modecheck_goal.m"
      check_hlds__modecheck_goal__ArgVars0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal_scalar_common_2[4], check_hlds__modecheck_goal__Args0_15);
    }
#line 1440 "modecheck_goal.m"
    {
#line 1440 "modecheck_goal.m"
      check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__modecheck_goal__PredId_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__ProcId0_14, &check_hlds__modecheck_goal__ProcId_26, check_hlds__modecheck_goal__ArgVars0_25, &check_hlds__modecheck_goal__ArgVars_27, check_hlds__modecheck_goal__GoalInfo0_19, &check_hlds__modecheck_goal__ExtraGoals_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 1447 "modecheck_goal.m"
    {
#line 1447 "modecheck_goal.m"
      check_hlds__modecheck_goal__Pragma_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__Attributes_12));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 2) = ((MR_Box) (check_hlds__modecheck_goal__PredId_13));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 3) = ((MR_Box) (check_hlds__modecheck_goal__ProcId_26));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 4) = ((MR_Box) (check_hlds__modecheck_goal__Args0_15));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 5) = ((MR_Box) (check_hlds__modecheck_goal__ExtraArgs_16));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 6) = ((MR_Box) (check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17));
#line 1447 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 7) = ((MR_Box) (check_hlds__modecheck_goal__PragmaCode_18));
#line 1447 "modecheck_goal.m"
    }
#line 1449 "modecheck_goal.m"
    {
#line 1449 "modecheck_goal.m"
      check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__Pragma_29, check_hlds__modecheck_goal__ExtraGoals_28, check_hlds__modecheck_goal__GoalInfo0_19, check_hlds__modecheck_goal__ArgVars0_25, check_hlds__modecheck_goal__ArgVars_27, check_hlds__modecheck_goal__InstMap0_23, check_hlds__modecheck_goal__GoalExpr_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 1452 "modecheck_goal.m"
    {
#line 1452 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 1453 "modecheck_goal.m"
    {
#line 1453 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "pragma_foreign_code", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
#line 1453 "modecheck_goal.m"
      return;
    }
#line 1429 "modecheck_goal.m"
  }
#line 1422 "modecheck_goal.m"
}

#line 1404 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LHS0_9,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__RHS0_10,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Unification0_11,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__UnifyContext_12,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
#line 1404 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
#line 1404 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16,
#line 1404 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17)
#line 1404 "modecheck_goal.m"
{
#line 1409 "modecheck_goal.m"
  {
#line 1409 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1409 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20;
#line 1409 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_21_21;
#line 1409 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22;
#line 1409 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23;
#line 1409 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24;

#line 1410 "modecheck_goal.m"
    {
#line 1410 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20);
    }
#line 1411 "modecheck_goal.m"
    {
#line 1411 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_21_21, 0) = ((MR_Box) (check_hlds__modecheck_goal__UnifyContext_12));
#line 1411 "modecheck_goal.m"
    }
#line 1411 "modecheck_goal.m"
    {
#line 1411 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_21_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1412 "modecheck_goal.m"
    {
#line 1412 "modecheck_goal.m"
      check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__modecheck_goal__LHS0_9, check_hlds__modecheck_goal__RHS0_10, check_hlds__modecheck_goal__Unification0_11, check_hlds__modecheck_goal__UnifyContext_12, check_hlds__modecheck_goal__GoalInfo0_13, check_hlds__modecheck_goal__GoalExpr_14, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1414 "modecheck_goal.m"
    {
#line 1414 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24);
    }
#line 1415 "modecheck_goal.m"
    {
#line 1415 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17);
#line 1415 "modecheck_goal.m"
      return;
    }
#line 1409 "modecheck_goal.m"
  }
#line 1404 "modecheck_goal.m"
}

#line 1309 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GenericCall_8,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_9,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Modes0_10,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
#line 1309 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
#line 1309 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62,
#line 1309 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63)
#line 1309 "modecheck_goal.m"
{
#line 1314 "modecheck_goal.m"
  {
#line 1314 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_14;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GenericCallId_15;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CallId_16;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_67_67;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104;
#line 1314 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105;

#line 1315 "modecheck_goal.m"
    {
#line 1315 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66);
    }
#line 1316 "modecheck_goal.m"
    {
#line 1316 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_goal__InstMap0_14);
    }
#line 1318 "modecheck_goal.m"
    {
#line 1318 "modecheck_goal.m"
      hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__modecheck_goal__GenericCall_8, &check_hlds__modecheck_goal__GenericCallId_15);
    }
#line 1319 "modecheck_goal.m"
    {
#line 1319 "modecheck_goal.m"
      check_hlds__modecheck_goal__CallId_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__CallId_16, 0) = ((MR_Box) (check_hlds__modecheck_goal__GenericCallId_15));
#line 1319 "modecheck_goal.m"
    }
#line 1320 "modecheck_goal.m"
    {
#line 1320 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_67_67, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_16));
#line 1320 "modecheck_goal.m"
    }
#line 1320 "modecheck_goal.m"
    {
#line 1320 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_67_67, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68);
    }
#line 1331 "modecheck_goal.m"
#line 1331 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GenericCall_8)) {
#line 1331 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1331 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 1322 "modecheck_goal.m"
        {
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 0)));
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 2)));
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Args_21;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Modes_22;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Det_23;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ExtraGoals_24;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__GoalExpr1_25;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__AllArgs0_26;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__AllArgs_27;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102;
#line 1322 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 1)));
#line 1322 "modecheck_goal.m"
          MR_Integer check_hlds__modecheck_goal__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 3)));

#line 1323 "modecheck_goal.m"
          {
#line 1323 "modecheck_goal.m"
            check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(check_hlds__modecheck_goal__PredOrFunc_19, check_hlds__modecheck_goal__PredVar_17, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_21, &check_hlds__modecheck_goal__Modes_22, &check_hlds__modecheck_goal__Det_23, &check_hlds__modecheck_goal__ExtraGoals_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102);
          }
#line 1325 "modecheck_goal.m"
          {
#line 1325 "modecheck_goal.m"
            check_hlds__modecheck_goal__GoalExpr1_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_21));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_22));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1325 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 5) = ((MR_Box) (check_hlds__modecheck_goal__Det_23));
#line 1325 "modecheck_goal.m"
          }
#line 1327 "modecheck_goal.m"
          {
#line 1327 "modecheck_goal.m"
            check_hlds__modecheck_goal__AllArgs0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs0_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredVar_17));
#line 1327 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs0_26, 1) = ((MR_Box) (check_hlds__modecheck_goal__Args0_9));
#line 1327 "modecheck_goal.m"
          }
#line 1328 "modecheck_goal.m"
          {
#line 1328 "modecheck_goal.m"
            check_hlds__modecheck_goal__AllArgs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredVar_17));
#line 1328 "modecheck_goal.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__Args_21));
#line 1328 "modecheck_goal.m"
          }
#line 1329 "modecheck_goal.m"
          {
#line 1329 "modecheck_goal.m"
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__GoalExpr1_25, check_hlds__modecheck_goal__ExtraGoals_24, check_hlds__modecheck_goal__GoalInfo0_11, check_hlds__modecheck_goal__AllArgs0_26, check_hlds__modecheck_goal__AllArgs_27, check_hlds__modecheck_goal__InstMap0_14, check_hlds__modecheck_goal__GoalExpr_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
#line 1322 "modecheck_goal.m"
        }
#line 1331 "modecheck_goal.m"
        break;
#line 1331 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 1335 "modecheck_goal.m"
        {
#line 1336 "modecheck_goal.m"
          {
#line 1336 "modecheck_goal.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "class_method_call");
#line 1336 "modecheck_goal.m"
            return;
          }
#line 1335 "modecheck_goal.m"
        }
#line 1331 "modecheck_goal.m"
        break;
#line 1331 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 1338 "modecheck_goal.m"
        {
#line 1338 "modecheck_goal.m"
          MR_String check_hlds__modecheck_goal__EventName_32 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 0)));
#line 1338 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ModuleInfo_33;
#line 1338 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__EventSet_34;
#line 1338 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__EventSpecMap_35;
#line 1338 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Args_109;
#line 1338 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Modes_110;
#line 1341 "modecheck_goal.m"
          MR_String check_hlds__modecheck_goal__V_119_119;
#line 1344 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ModesPrime_36;

#line 1339 "modecheck_goal.m"
          {
#line 1339 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__ModuleInfo_33);
          }
#line 1340 "modecheck_goal.m"
          {
#line 1340 "modecheck_goal.m"
            hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__modecheck_goal__ModuleInfo_33, &check_hlds__modecheck_goal__EventSet_34);
          }
#line 1341 "modecheck_goal.m"
          check_hlds__modecheck_goal__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__EventSet_34, (MR_Integer) 0)));
#line 1341 "modecheck_goal.m"
          check_hlds__modecheck_goal__EventSpecMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__EventSet_34, (MR_Integer) 1)));
#line 1342 "modecheck_goal.m"
          {
#line 1342 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = parse_tree__prog_event__event_arg_modes_3_p_0(check_hlds__modecheck_goal__EventSpecMap_35, check_hlds__modecheck_goal__EventName_32, &check_hlds__modecheck_goal__ModesPrime_36);
          }
#line 1344 "modecheck_goal.m"
          if (check_hlds__modecheck_goal__succeeded)
#line 1343 "modecheck_goal.m"
            check_hlds__modecheck_goal__Modes_110 = check_hlds__modecheck_goal__ModesPrime_36;
#line 1344 "modecheck_goal.m"
          else
#line 1347 "modecheck_goal.m"
            {
#line 1347 "modecheck_goal.m"
              {
#line 1347 "modecheck_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "unknown event");
#line 1347 "modecheck_goal.m"
                return;
              }
#line 1347 "modecheck_goal.m"
            }
#line 1349 "modecheck_goal.m"
          {
#line 1349 "modecheck_goal.m"
            check_hlds__modecheck_call__modecheck_event_call_5_p_0(check_hlds__modecheck_goal__Modes_110, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_109, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
#line 1350 "modecheck_goal.m"
          {
#line 1350 "modecheck_goal.m"
            MR_Word base;
#line 1350 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_12 = base;
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_109));
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_110));
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1350 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1350 "modecheck_goal.m"
          }
#line 1338 "modecheck_goal.m"
        }
#line 1331 "modecheck_goal.m"
        break;
#line 1331 "modecheck_goal.m"
      case (MR_Integer) 3:
#line 1353 "modecheck_goal.m"
        {
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90;
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Args_113;
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Modes_114;
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Det_115;
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ExtraGoals_116;
#line 1353 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__GoalExpr1_117;
#line 1386 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Mode1_44;
#line 1386 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Unique_47;
#line 1386 "modecheck_goal.m"
          MR_Integer check_hlds__modecheck_goal__LocalTag_59;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_128_128;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_129_129;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InstMap_38;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Arg1_43;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Mode2_45;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Inst1_46;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ConsId_49;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__TypeTable_50;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__VarTypes_51;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ArgType1_52;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ArgTypeCtor1_53;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__CtorDefn_54;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Body_55;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ConsTagValues_56;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ConsTag_57;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_77_77;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_78_78;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_79_79;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_80_80;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__ModuleInfo_111;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_130_130;
#line 1355 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_131_131;
#line 1364 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Arg1Prime_39;
#line 1364 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Mode1Prime_41;
#line 1364 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Mode2Prime_42;
#line 1358 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_70_70;
#line 1358 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_71_71;
#line 1358 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_72_72;
#line 1358 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_73_73;
#line 1358 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal___Arg2Prime_40;
#line 1370 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_48_48;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_120_120;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_121_121;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_122_122;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_123_123;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_124_124;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_125_125;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_126_126;
#line 1378 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_127_127;
#line 1379 "modecheck_goal.m"
          MR_Box check_hlds__modecheck_goal__conv0_ConsTag_57;
#line 1380 "modecheck_goal.m"
          MR_Integer check_hlds__modecheck_goal__V_58_58;

#line 1355 "modecheck_goal.m"
          {
#line 1355 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_11, (MR_Integer) 11);
          }
#line 1355 "modecheck_goal.m"
          if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
            {
#line 1356 "modecheck_goal.m"
              {
#line 1356 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__InstMap_38);
              }
#line 1358 "modecheck_goal.m"
              check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Args0_9)) == (MR_mktag((MR_Integer) 1)));
#line 1358 "modecheck_goal.m"
              if (check_hlds__modecheck_goal__succeeded)
#line 1358 "modecheck_goal.m"
                {
#line 1358 "modecheck_goal.m"
                  check_hlds__modecheck_goal__Arg1Prime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Args0_9, (MR_Integer) 0)));
#line 1358 "modecheck_goal.m"
                  check_hlds__modecheck_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Args0_9, (MR_Integer) 1)));
#line 1358 "modecheck_goal.m"
                  check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 1358 "modecheck_goal.m"
                  if (check_hlds__modecheck_goal__succeeded)
#line 1358 "modecheck_goal.m"
                    {
#line 1358 "modecheck_goal.m"
                      check_hlds__modecheck_goal___Arg2Prime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, (MR_Integer) 0)));
#line 1358 "modecheck_goal.m"
                      check_hlds__modecheck_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, (MR_Integer) 1)));
#line 1358 "modecheck_goal.m"
                      check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1358 "modecheck_goal.m"
                      if (check_hlds__modecheck_goal__succeeded)
#line 1358 "modecheck_goal.m"
                        {
#line 1359 "modecheck_goal.m"
                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Modes0_10)) == (MR_mktag((MR_Integer) 1)));
#line 1359 "modecheck_goal.m"
                          if (check_hlds__modecheck_goal__succeeded)
#line 1359 "modecheck_goal.m"
                            {
#line 1359 "modecheck_goal.m"
                              check_hlds__modecheck_goal__Mode1Prime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes0_10, (MR_Integer) 0)));
#line 1359 "modecheck_goal.m"
                              check_hlds__modecheck_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes0_10, (MR_Integer) 1)));
#line 1359 "modecheck_goal.m"
                              check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 1359 "modecheck_goal.m"
                              if (check_hlds__modecheck_goal__succeeded)
#line 1359 "modecheck_goal.m"
                                {
#line 1359 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__Mode2Prime_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_72_72, (MR_Integer) 0)));
#line 1359 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_72_72, (MR_Integer) 1)));
#line 1359 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "modecheck_goal.m"
                                }
#line 1359 "modecheck_goal.m"
                            }
#line 1358 "modecheck_goal.m"
                        }
#line 1358 "modecheck_goal.m"
                    }
#line 1358 "modecheck_goal.m"
                }
#line 1364 "modecheck_goal.m"
              if (check_hlds__modecheck_goal__succeeded)
#line 1361 "modecheck_goal.m"
                {
#line 1361 "modecheck_goal.m"
                  check_hlds__modecheck_goal__Arg1_43 = check_hlds__modecheck_goal__Arg1Prime_39;
#line 1362 "modecheck_goal.m"
                  check_hlds__modecheck_goal__Mode1_44 = check_hlds__modecheck_goal__Mode1Prime_41;
#line 1363 "modecheck_goal.m"
                  check_hlds__modecheck_goal__Mode2_45 = check_hlds__modecheck_goal__Mode2Prime_42;
#line 1361 "modecheck_goal.m"
                }
#line 1364 "modecheck_goal.m"
              else
#line 1365 "modecheck_goal.m"
                {
#line 1365 "modecheck_goal.m"
                  {
#line 1365 "modecheck_goal.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "bad cast");
#line 1365 "modecheck_goal.m"
                    return;
                  }
#line 1365 "modecheck_goal.m"
                }
#line 1367 "modecheck_goal.m"
              {
#line 1367 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_130_130 = parse_tree__prog_mode__in_mode_0_f_0();
              }
#line 1367 "modecheck_goal.m"
              {
#line 1367 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(check_hlds__modecheck_goal__Mode1_44, check_hlds__modecheck_goal__V_130_130);
              }
#line 1355 "modecheck_goal.m"
              if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
                {
#line 1368 "modecheck_goal.m"
                  {
#line 1368 "modecheck_goal.m"
                    check_hlds__modecheck_goal__V_131_131 = parse_tree__prog_mode__out_mode_0_f_0();
                  }
#line 1368 "modecheck_goal.m"
                  {
#line 1368 "modecheck_goal.m"
                    check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(check_hlds__modecheck_goal__Mode2_45, check_hlds__modecheck_goal__V_131_131);
                  }
#line 1355 "modecheck_goal.m"
                  if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
                    {
#line 1369 "modecheck_goal.m"
                      {
#line 1369 "modecheck_goal.m"
                        hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap_38, check_hlds__modecheck_goal__Arg1_43, &check_hlds__modecheck_goal__Inst1_46);
                      }
#line 1370 "modecheck_goal.m"
                      check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__Inst1_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1370 "modecheck_goal.m"
                      if (check_hlds__modecheck_goal__succeeded)
#line 1370 "modecheck_goal.m"
                        {
#line 1370 "modecheck_goal.m"
                          check_hlds__modecheck_goal__Unique_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 1)));
#line 1370 "modecheck_goal.m"
                          check_hlds__modecheck_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 2)));
#line 1370 "modecheck_goal.m"
                          check_hlds__modecheck_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 3)));
#line 1370 "modecheck_goal.m"
                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 1370 "modecheck_goal.m"
                          if (check_hlds__modecheck_goal__succeeded)
#line 1370 "modecheck_goal.m"
                            {
#line 1370 "modecheck_goal.m"
                              check_hlds__modecheck_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_77_77, (MR_Integer) 0)));
#line 1370 "modecheck_goal.m"
                              check_hlds__modecheck_goal__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_77_77, (MR_Integer) 1)));
#line 1370 "modecheck_goal.m"
                              check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "modecheck_goal.m"
                              if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
                                {
#line 1370 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_78_78, (MR_Integer) 0)));
#line 1370 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_78_78, (MR_Integer) 1)));
#line 1370 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "modecheck_goal.m"
                                  if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
                                    {
#line 1371 "modecheck_goal.m"
                                      {
#line 1371 "modecheck_goal.m"
                                        check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__ModuleInfo_111);
                                      }
#line 1372 "modecheck_goal.m"
                                      {
#line 1372 "modecheck_goal.m"
                                        hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__modecheck_goal__ModuleInfo_111, &check_hlds__modecheck_goal__TypeTable_50);
                                      }
#line 1373 "modecheck_goal.m"
                                      {
#line 1373 "modecheck_goal.m"
                                        check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__VarTypes_51);
                                      }
#line 1374 "modecheck_goal.m"
                                      {
#line 1374 "modecheck_goal.m"
                                        hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_51, check_hlds__modecheck_goal__Arg1_43, &check_hlds__modecheck_goal__ArgType1_52);
                                      }
#line 1375 "modecheck_goal.m"
                                      {
#line 1375 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_goal__ArgType1_52, &check_hlds__modecheck_goal__ArgTypeCtor1_53);
                                      }
#line 1355 "modecheck_goal.m"
                                      if (check_hlds__modecheck_goal__succeeded)
#line 1355 "modecheck_goal.m"
                                        {
#line 1376 "modecheck_goal.m"
                                          {
#line 1376 "modecheck_goal.m"
                                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__modecheck_goal__TypeTable_50, check_hlds__modecheck_goal__ArgTypeCtor1_53, &check_hlds__modecheck_goal__CtorDefn_54);
                                          }
#line 1377 "modecheck_goal.m"
                                          {
#line 1377 "modecheck_goal.m"
                                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__modecheck_goal__CtorDefn_54, &check_hlds__modecheck_goal__Body_55);
                                          }
#line 1378 "modecheck_goal.m"
                                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Body_55)) == (MR_mktag((MR_Integer) 1)));
#line 1378 "modecheck_goal.m"
                                          if (check_hlds__modecheck_goal__succeeded)
#line 1378 "modecheck_goal.m"
                                            {
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 0)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__ConsTagValues_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 1)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 2)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 3)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 4)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 5)));
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_125_125 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1378 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 7)));
#line 5100 "check_hlds.modecheck_goal.c"
                                              check_hlds__modecheck_goal__TypeCtorInfo_128_128 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5102 "check_hlds.modecheck_goal.c"
                                              check_hlds__modecheck_goal__TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1379 "modecheck_goal.m"
                                              {
#line 1379 "modecheck_goal.m"
                                                mercury__map__lookup_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_128_128, check_hlds__modecheck_goal__TypeCtorInfo_129_129, check_hlds__modecheck_goal__ConsTagValues_56, ((MR_Box) (check_hlds__modecheck_goal__ConsId_49)), &check_hlds__modecheck_goal__conv0_ConsTag_57);
                                              }
#line 1379 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__ConsTag_57 = ((MR_Word) check_hlds__modecheck_goal__conv0_ConsTag_57);
#line 1380 "modecheck_goal.m"
                                              check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__ConsTag_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 1380 "modecheck_goal.m"
                                              if (check_hlds__modecheck_goal__succeeded)
#line 1380 "modecheck_goal.m"
                                                {
#line 1380 "modecheck_goal.m"
                                                  check_hlds__modecheck_goal__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 1)));
#line 1380 "modecheck_goal.m"
                                                  check_hlds__modecheck_goal__LocalTag_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 2)));
#line 1380 "modecheck_goal.m"
                                                }
#line 1378 "modecheck_goal.m"
                                            }
#line 1355 "modecheck_goal.m"
                                        }
#line 1355 "modecheck_goal.m"
                                    }
#line 1355 "modecheck_goal.m"
                                }
#line 1370 "modecheck_goal.m"
                            }
#line 1370 "modecheck_goal.m"
                        }
#line 1355 "modecheck_goal.m"
                    }
#line 1355 "modecheck_goal.m"
                }
#line 1355 "modecheck_goal.m"
            }
#line 1386 "modecheck_goal.m"
          if (check_hlds__modecheck_goal__succeeded)
#line 1382 "modecheck_goal.m"
            {
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__BoundInst_60;
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__NewMode2_61;
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_81_81;
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_84_84;
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_86_86;
#line 1382 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_88_88;

#line 1382 "modecheck_goal.m"
              {
#line 1382 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1382 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_81_81, 1) = ((MR_Box) (check_hlds__modecheck_goal__LocalTag_59));
#line 1382 "modecheck_goal.m"
              }
#line 1382 "modecheck_goal.m"
              {
#line 1382 "modecheck_goal.m"
                check_hlds__modecheck_goal__BoundInst_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_60, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_81_81));
#line 1382 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "modecheck_goal.m"
              }
#line 1384 "modecheck_goal.m"
              {
#line 1384 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_86_86, 0) = ((MR_Box) (check_hlds__modecheck_goal__BoundInst_60));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "modecheck_goal.m"
              }
#line 1384 "modecheck_goal.m"
              {
#line 1384 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 1) = ((MR_Box) (check_hlds__modecheck_goal__Unique_47));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_86_86));
#line 1384 "modecheck_goal.m"
              }
#line 1384 "modecheck_goal.m"
              {
#line 1384 "modecheck_goal.m"
                check_hlds__modecheck_goal__NewMode2_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__NewMode2_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__NewMode2_61, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_84_84));
#line 1384 "modecheck_goal.m"
              }
#line 1385 "modecheck_goal.m"
              {
#line 1385 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_88_88, 0) = ((MR_Box) (check_hlds__modecheck_goal__NewMode2_61));
#line 1385 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "modecheck_goal.m"
              }
#line 1385 "modecheck_goal.m"
              {
#line 1385 "modecheck_goal.m"
                check_hlds__modecheck_goal__Modes_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes_114, 0) = ((MR_Box) (check_hlds__modecheck_goal__Mode1_44));
#line 1385 "modecheck_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes_114, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_88_88));
#line 1385 "modecheck_goal.m"
              }
#line 1382 "modecheck_goal.m"
            }
#line 1386 "modecheck_goal.m"
          else
#line 1387 "modecheck_goal.m"
            check_hlds__modecheck_goal__Modes_114 = check_hlds__modecheck_goal__Modes0_10;
#line 1389 "modecheck_goal.m"
          {
#line 1389 "modecheck_goal.m"
            check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(check_hlds__modecheck_goal__Modes_114, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_113, &check_hlds__modecheck_goal__Det_115, &check_hlds__modecheck_goal__ExtraGoals_116, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90);
          }
#line 1390 "modecheck_goal.m"
          {
#line 1390 "modecheck_goal.m"
            check_hlds__modecheck_goal__GoalExpr1_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_113));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_114));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 5) = ((MR_Box) (check_hlds__modecheck_goal__Det_115));
#line 1390 "modecheck_goal.m"
          }
#line 1392 "modecheck_goal.m"
          {
#line 1392 "modecheck_goal.m"
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__GoalExpr1_117, check_hlds__modecheck_goal__ExtraGoals_116, check_hlds__modecheck_goal__GoalInfo0_11, check_hlds__modecheck_goal__Args0_9, check_hlds__modecheck_goal__Args_113, check_hlds__modecheck_goal__InstMap0_14, check_hlds__modecheck_goal__GoalExpr_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
#line 1353 "modecheck_goal.m"
        }
#line 1331 "modecheck_goal.m"
        break;
#line 1331 "modecheck_goal.m"
    }
#line 1396 "modecheck_goal.m"
    {
#line 1396 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105);
    }
#line 1397 "modecheck_goal.m"
    {
#line 1397 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63);
#line 1397 "modecheck_goal.m"
      return;
    }
#line 1314 "modecheck_goal.m"
  }
#line 1309 "modecheck_goal.m"
}

#line 1273 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredId_10,
#line 1273 "modecheck_goal.m"
  MR_Integer check_hlds__modecheck_goal__ProcId0_11,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Args0_12,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_13,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__PredName_14,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_15,
#line 1273 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_16,
#line 1273 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1273 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
#line 1273 "modecheck_goal.m"
{
#line 1279 "modecheck_goal.m"
  {
#line 1279 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1279 "modecheck_goal.m"
    MR_String check_hlds__modecheck_goal__PredNameString_18;
#line 1279 "modecheck_goal.m"
    MR_String check_hlds__modecheck_goal__CallString_19;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CallId_20;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
#line 1279 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__ProcId_23;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Args_24;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ExtraGoals_25;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo_26;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CallerPredId_27;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Builtin_28;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Call_29;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_35_35;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_37_37;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
#line 1279 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;

#line 1280 "modecheck_goal.m"
    {
#line 1280 "modecheck_goal.m"
      check_hlds__modecheck_goal__PredNameString_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__modecheck_goal__PredName_14);
    }
#line 1281 "modecheck_goal.m"
    {
#line 1281 "modecheck_goal.m"
      check_hlds__modecheck_goal__CallString_19 = mercury__string__f_43_43_2_f_0((MR_String) "call ", check_hlds__modecheck_goal__PredNameString_18);
    }
#line 1282 "modecheck_goal.m"
    {
#line 1282 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modecheck_goal__CallString_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34);
    }
#line 1284 "modecheck_goal.m"
    {
#line 1284 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, check_hlds__modecheck_goal__PredId_10, &check_hlds__modecheck_goal__CallId_20);
    }
#line 1285 "modecheck_goal.m"
    {
#line 1285 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_20));
#line 1285 "modecheck_goal.m"
    }
#line 1285 "modecheck_goal.m"
    {
#line 1285 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_37_37));
#line 1285 "modecheck_goal.m"
    }
#line 1285 "modecheck_goal.m"
    {
#line 1285 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_35_35, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
    }
#line 1288 "modecheck_goal.m"
    {
#line 1288 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__InstMap0_21);
    }
#line 1290 "modecheck_goal.m"
    {
#line 1290 "modecheck_goal.m"
      check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__modecheck_goal__PredId_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__ProcId0_11, &check_hlds__modecheck_goal__ProcId_23, check_hlds__modecheck_goal__Args0_12, &check_hlds__modecheck_goal__Args_24, check_hlds__modecheck_goal__GoalInfo0_15, &check_hlds__modecheck_goal__ExtraGoals_25, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 1293 "modecheck_goal.m"
    {
#line 1293 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__ModuleInfo_26);
    }
#line 1294 "modecheck_goal.m"
    {
#line 1294 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__CallerPredId_27);
    }
#line 1295 "modecheck_goal.m"
    {
#line 1295 "modecheck_goal.m"
      check_hlds__modecheck_goal__Builtin_28 = hlds__hlds_pred__builtin_state_4_f_0(check_hlds__modecheck_goal__ModuleInfo_26, check_hlds__modecheck_goal__CallerPredId_27, check_hlds__modecheck_goal__PredId_10, check_hlds__modecheck_goal__ProcId_23);
    }
#line 1296 "modecheck_goal.m"
    {
#line 1296 "modecheck_goal.m"
      check_hlds__modecheck_goal__Call_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredId_10));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__ProcId_23));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_24));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 3) = ((MR_Box) (check_hlds__modecheck_goal__Builtin_28));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 4) = ((MR_Box) (check_hlds__modecheck_goal__MaybeCallUnifyContext_13));
#line 1296 "modecheck_goal.m"
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 5) = ((MR_Box) (check_hlds__modecheck_goal__PredName_14));
#line 1296 "modecheck_goal.m"
    }
#line 1298 "modecheck_goal.m"
    {
#line 1298 "modecheck_goal.m"
      check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__Call_29, check_hlds__modecheck_goal__ExtraGoals_25, check_hlds__modecheck_goal__GoalInfo0_15, check_hlds__modecheck_goal__Args0_12, check_hlds__modecheck_goal__Args_24, check_hlds__modecheck_goal__InstMap0_21, check_hlds__modecheck_goal__GoalExpr_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 1301 "modecheck_goal.m"
    {
#line 1301 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 1302 "modecheck_goal.m"
    {
#line 1302 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modecheck_goal__CallString_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
#line 1302 "modecheck_goal.m"
      return;
    }
#line 1279 "modecheck_goal.m"
  }
#line 1273 "modecheck_goal.m"
}

#line 1244 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
#line 1244 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 1244 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
#line 1244 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5)
#line 1244 "modecheck_goal.m"
{
#line 1248 "modecheck_goal.m"
  {
#line 1248 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 1248 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "modecheck_goal.m"
      {
#line 1248 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1248 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1248 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4;
#line 1248 "modecheck_goal.m"
      }
#line 1248 "modecheck_goal.m"
    else
#line 1250 "modecheck_goal.m"
      {
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__VarInsts_12;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__UniMode_13;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__UniModes_14;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__VarInfo_16;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__RHSNewInst_20;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_24_24;
#line 1250 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_25_25;
#line 1258 "modecheck_goal.m"
        MR_Box check_hlds__modecheck_goal__conv0_VarInfo_16;

#line 1258 "modecheck_goal.m"
        {
#line 1258 "modecheck_goal.m"
          mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (check_hlds__modecheck_goal__Var_9)), &check_hlds__modecheck_goal__conv0_VarInfo_16, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23);
        }
#line 1258 "modecheck_goal.m"
        check_hlds__modecheck_goal__VarInfo_16 = ((MR_Word) check_hlds__modecheck_goal__conv0_VarInfo_16);
#line 1259 "modecheck_goal.m"
        check_hlds__modecheck_goal__RHSNewInst_20 = (MR_Word) check_hlds__modecheck_goal__VarInfo_16;
#line 1264 "modecheck_goal.m"
        {
#line 1264 "modecheck_goal.m"
          check_hlds__modecheck_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_24_24, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
#line 1264 "modecheck_goal.m"
        }
#line 1264 "modecheck_goal.m"
        {
#line 1264 "modecheck_goal.m"
          check_hlds__modecheck_goal__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 0) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
#line 1264 "modecheck_goal.m"
        }
#line 1264 "modecheck_goal.m"
        {
#line 1264 "modecheck_goal.m"
          check_hlds__modecheck_goal__UniMode_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UniMode_13, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_24_24));
#line 1264 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UniMode_13, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_25_25));
#line 1264 "modecheck_goal.m"
        }
#line 1265 "modecheck_goal.m"
        {
#line 1265 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(check_hlds__modecheck_goal__Vars_10, &check_hlds__modecheck_goal__VarInsts_12, &check_hlds__modecheck_goal__UniModes_14, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);
        }
#line 1249 "modecheck_goal.m"
        {
#line 1249 "modecheck_goal.m"
          MR_Word base;
#line 1249 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
#line 1249 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
#line 1249 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__VarInsts_12));
#line 1249 "modecheck_goal.m"
        }
#line 1250 "modecheck_goal.m"
        {
#line 1250 "modecheck_goal.m"
          MR_Word base;
#line 1250 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 1250 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__UniMode_13));
#line 1250 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UniModes_14));
#line 1250 "modecheck_goal.m"
        }
#line 1250 "modecheck_goal.m"
      }
#line 1248 "modecheck_goal.m"
  }
#line 1244 "modecheck_goal.m"
}

#line 1161 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
#line 1161 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1)
#line 1161 "modecheck_goal.m"
{
#line 1163 "modecheck_goal.m"
  while (MR_TRUE)
#line 1163 "modecheck_goal.m"
    {
#line 1163 "modecheck_goal.m"
      /* tailcall optimized into a loop */
#line 1163 "modecheck_goal.m"
      {
#line 1163 "modecheck_goal.m"
        MR_bool check_hlds__modecheck_goal__succeeded;

#line 1163 "modecheck_goal.m"
        if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = MR_TRUE;
#line 1163 "modecheck_goal.m"
        else
#line 1164 "modecheck_goal.m"
          {
#line 1164 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_2, (MR_Integer) 0)));
#line 1164 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__RHS_7;
#line 1164 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_13_13;
#line 1165 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_2, (MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal___LHSVar_6;
#line 1166 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_8_8;
#line 1166 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_9_9;
#line 1166 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_10_10;
#line 1167 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal___ConsId_11;
#line 1167 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal___RHSVars_12;

#line 1166 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_4)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1166 "modecheck_goal.m"
              {
#line 1166 "modecheck_goal.m"
                check_hlds__modecheck_goal___LHSVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 0)));
#line 1166 "modecheck_goal.m"
                check_hlds__modecheck_goal__RHS_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 2)));
#line 1166 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 3)));
#line 1166 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 4)));
#line 1167 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_7)) == (MR_mktag((MR_Integer) 1)));
#line 1167 "modecheck_goal.m"
                if (check_hlds__modecheck_goal__succeeded)
#line 1167 "modecheck_goal.m"
                  {
#line 1167 "modecheck_goal.m"
                    check_hlds__modecheck_goal___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 0)));
#line 1167 "modecheck_goal.m"
                    check_hlds__modecheck_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 1)));
#line 1167 "modecheck_goal.m"
                    check_hlds__modecheck_goal___RHSVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 2)));
#line 1167 "modecheck_goal.m"
                    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_13_13 == (MR_Integer) 0);
#line 1164 "modecheck_goal.m"
                    if (check_hlds__modecheck_goal__succeeded)
#line 1168 "modecheck_goal.m"
                      {
#line 1168 "modecheck_goal.m"
                        /* direct tailcall eliminated */
#line 1168 "modecheck_goal.m"
                        {
#line 1168 "modecheck_goal.m"
                          MR_Word check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_goal__Goals_3;

#line 1168 "modecheck_goal.m"
                          check_hlds__modecheck_goal__HeadVar__1_1 = check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1;
#line 1168 "modecheck_goal.m"
                        }
#line 1168 "modecheck_goal.m"
                        continue;
#line 1168 "modecheck_goal.m"
                      }
#line 1167 "modecheck_goal.m"
                  }
#line 1166 "modecheck_goal.m"
              }
#line 1164 "modecheck_goal.m"
          }
#line 1163 "modecheck_goal.m"
        return check_hlds__modecheck_goal__succeeded;
#line 1163 "modecheck_goal.m"
      }
#line 1163 "modecheck_goal.m"
      break;
#line 1163 "modecheck_goal.m"
    }
#line 1161 "modecheck_goal.m"
}

#line 1121 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal_5,
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_6,
#line 1121 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVarInst_7,
#line 1121 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__MaybeGroundTermMode_8)
#line 1121 "modecheck_goal.m"
{
#line 1125 "modecheck_goal.m"
  {
#line 1125 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1125 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__SubGoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_5, (MR_Integer) 0)));
#line 1125 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__SubGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_5, (MR_Integer) 1)));
#line 1157 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_22_22;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfo_35_35;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfo_36_36;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__NonLocals_11;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__UnifyTermGoal_12;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_20_20;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_21_21;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_23_23;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_33_33;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_34_34;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Goal_37;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Goals_38;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalExpr_39;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__RHS_42;
#line 1128 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_48_48;
#line 1131 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__UnifyArgGoals_13;
#line 1135 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_30_30;
#line 1135 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_14_14;
#line 1135 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_15_15;
#line 1135 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_16_16;
#line 1135 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_17_17;
#line 1165 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_40_40;
#line 1166 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal___LHSVar_41;
#line 1166 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_43_43;
#line 1166 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_44_44;
#line 1166 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_45_45;
#line 1167 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal___ConsId_46;
#line 1167 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal___RHSVars_47;

#line 1128 "modecheck_goal.m"
    {
#line 1128 "modecheck_goal.m"
      check_hlds__modecheck_goal__NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__SubGoalInfo_10);
    }
#line 1129 "modecheck_goal.m"
    {
#line 1129 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_singleton_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NonLocals_11, &check_hlds__modecheck_goal__V_33_33);
    }
#line 1128 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 1128 "modecheck_goal.m"
      {
#line 5806 "check_hlds.modecheck_goal.c"
        check_hlds__modecheck_goal__TypeInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
#line 1129 "modecheck_goal.m"
        {
#line 1129 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_35_35, ((MR_Box) (check_hlds__modecheck_goal__TermVar_6)), ((MR_Box) (check_hlds__modecheck_goal__V_33_33)));
        }
#line 1128 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1128 "modecheck_goal.m"
          {
#line 1130 "modecheck_goal.m"
            {
#line 1130 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_20_20 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__modecheck_goal__SubGoalInfo_10);
            }
#line 1130 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_20_20 == (MR_Integer) 0);
#line 1128 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1128 "modecheck_goal.m"
              {
#line 1131 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__SubGoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1131 "modecheck_goal.m"
                if (check_hlds__modecheck_goal__succeeded)
#line 1131 "modecheck_goal.m"
                  {
#line 1131 "modecheck_goal.m"
                    check_hlds__modecheck_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 1)));
#line 1131 "modecheck_goal.m"
                    check_hlds__modecheck_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 2)));
#line 1131 "modecheck_goal.m"
                    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_21_21 == (MR_Integer) 0);
#line 1128 "modecheck_goal.m"
                    if (check_hlds__modecheck_goal__succeeded)
#line 1128 "modecheck_goal.m"
                      {
#line 1131 "modecheck_goal.m"
                        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1131 "modecheck_goal.m"
                        if (check_hlds__modecheck_goal__succeeded)
#line 1131 "modecheck_goal.m"
                          {
#line 1131 "modecheck_goal.m"
                            check_hlds__modecheck_goal__UnifyTermGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 0)));
#line 1131 "modecheck_goal.m"
                            check_hlds__modecheck_goal__UnifyArgGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 1)));
#line 1135 "modecheck_goal.m"
                            check_hlds__modecheck_goal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyTermGoal_12, (MR_Integer) 0)));
#line 1135 "modecheck_goal.m"
                            check_hlds__modecheck_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyTermGoal_12, (MR_Integer) 1)));
#line 1135 "modecheck_goal.m"
                            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 1135 "modecheck_goal.m"
                            if (check_hlds__modecheck_goal__succeeded)
#line 1135 "modecheck_goal.m"
                              {
#line 1135 "modecheck_goal.m"
                                check_hlds__modecheck_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 0)));
#line 1135 "modecheck_goal.m"
                                check_hlds__modecheck_goal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 1)));
#line 1135 "modecheck_goal.m"
                                check_hlds__modecheck_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 2)));
#line 1135 "modecheck_goal.m"
                                check_hlds__modecheck_goal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 3)));
#line 1135 "modecheck_goal.m"
                                check_hlds__modecheck_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 4)));
#line 5874 "check_hlds.modecheck_goal.c"
                                check_hlds__modecheck_goal__TypeInfo_36_36 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
#line 1135 "modecheck_goal.m"
                                {
#line 1135 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_36_36, ((MR_Box) (check_hlds__modecheck_goal__TermVar_6)), ((MR_Box) (check_hlds__modecheck_goal__V_34_34)));
                                }
#line 1128 "modecheck_goal.m"
                                if (check_hlds__modecheck_goal__succeeded)
#line 1128 "modecheck_goal.m"
                                  {
#line 1164 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 0)));
#line 1164 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 1)));
#line 1165 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_37, (MR_Integer) 0)));
#line 1165 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_37, (MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
                                    if (check_hlds__modecheck_goal__succeeded)
#line 1166 "modecheck_goal.m"
                                      {
#line 1166 "modecheck_goal.m"
                                        check_hlds__modecheck_goal___LHSVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 0)));
#line 1166 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__RHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 1)));
#line 1166 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 2)));
#line 1166 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 3)));
#line 1166 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 4)));
#line 1167 "modecheck_goal.m"
                                        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_42)) == (MR_mktag((MR_Integer) 1)));
#line 1167 "modecheck_goal.m"
                                        if (check_hlds__modecheck_goal__succeeded)
#line 1167 "modecheck_goal.m"
                                          {
#line 1167 "modecheck_goal.m"
                                            check_hlds__modecheck_goal___ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 0)));
#line 1167 "modecheck_goal.m"
                                            check_hlds__modecheck_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 1)));
#line 1167 "modecheck_goal.m"
                                            check_hlds__modecheck_goal___RHSVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 2)));
#line 1167 "modecheck_goal.m"
                                            check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_48_48 == (MR_Integer) 0);
#line 1128 "modecheck_goal.m"
                                            if (check_hlds__modecheck_goal__succeeded)
#line 1168 "modecheck_goal.m"
                                              {
#line 1168 "modecheck_goal.m"
                                                check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(check_hlds__modecheck_goal__Goals_38);
                                              }
#line 1167 "modecheck_goal.m"
                                          }
#line 1166 "modecheck_goal.m"
                                      }
#line 1128 "modecheck_goal.m"
                                  }
#line 1135 "modecheck_goal.m"
                              }
#line 1131 "modecheck_goal.m"
                          }
#line 1128 "modecheck_goal.m"
                      }
#line 1131 "modecheck_goal.m"
                  }
#line 1128 "modecheck_goal.m"
              }
#line 1128 "modecheck_goal.m"
          }
#line 1128 "modecheck_goal.m"
      }
#line 1157 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 1151 "modecheck_goal.m"
      {
#line 1138 "modecheck_goal.m"
        check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__TermVarInst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1149 "modecheck_goal.m"
          {
#line 1149 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__RevConj_18;
#line 1149 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_26_26;

#line 1149 "modecheck_goal.m"
            {
#line 1149 "modecheck_goal.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__V_22_22, &check_hlds__modecheck_goal__RevConj_18);
            }
#line 1150 "modecheck_goal.m"
            {
#line 1150 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_26_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__RevConj_18));
#line 1150 "modecheck_goal.m"
            }
#line 1150 "modecheck_goal.m"
            {
#line 1150 "modecheck_goal.m"
              MR_Word base;
#line 1150 "modecheck_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "modecheck_goal.m"
              *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = base;
#line 1150 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_26_26));
#line 1150 "modecheck_goal.m"
            }
#line 1149 "modecheck_goal.m"
          }
#line 1151 "modecheck_goal.m"
        else
#line 1154 "modecheck_goal.m"
          {
#line 1151 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_27_27;
#line 1151 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_28_28;

#line 1151 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__TermVarInst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1151 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1151 "modecheck_goal.m"
              {
#line 1151 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 1)));
#line 1151 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 2)));
#line 1151 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_27_27 == (MR_Integer) 0);
#line 1151 "modecheck_goal.m"
                if (check_hlds__modecheck_goal__succeeded)
#line 1151 "modecheck_goal.m"
                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "modecheck_goal.m"
              }
#line 1154 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1152 "modecheck_goal.m"
              {
#line 1152 "modecheck_goal.m"
                MR_Word check_hlds__modecheck_goal__V_29_29;

#line 1153 "modecheck_goal.m"
                {
#line 1153 "modecheck_goal.m"
                  check_hlds__modecheck_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "modecheck_goal.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_29_29, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_22_22));
#line 1153 "modecheck_goal.m"
                }
#line 1153 "modecheck_goal.m"
                {
#line 1153 "modecheck_goal.m"
                  MR_Word base;
#line 1153 "modecheck_goal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = base;
#line 1153 "modecheck_goal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_29_29));
#line 1153 "modecheck_goal.m"
                }
#line 1152 "modecheck_goal.m"
              }
#line 1154 "modecheck_goal.m"
            else
#line 1155 "modecheck_goal.m"
              *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "modecheck_goal.m"
          }
#line 1151 "modecheck_goal.m"
      }
#line 1157 "modecheck_goal.m"
    else
#line 1158 "modecheck_goal.m"
      *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1125 "modecheck_goal.m"
  }
#line 1121 "modecheck_goal.m"
}

#line 1048 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_7,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 1048 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__MaybeKindAndSubGoal_10,
#line 1048 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29,
#line 1048 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30)
#line 1048 "modecheck_goal.m"
{
#line 1054 "modecheck_goal.m"
  {
#line 1054 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1054 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_12;
#line 1054 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarInst_13;
#line 1054 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__MaybeGroundTermMode_15;
#line 1061 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarSet_14;

#line 1059 "modecheck_goal.m"
    {
#line 1059 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__InstMap0_12);
    }
#line 1060 "modecheck_goal.m"
    {
#line 1060 "modecheck_goal.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap0_12, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarInst_13);
    }
#line 1061 "modecheck_goal.m"
    {
#line 1061 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__VarSet_14);
    }
#line 1062 "modecheck_goal.m"
    {
#line 1062 "modecheck_goal.m"
      check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__TermVarInst_13, &check_hlds__modecheck_goal__MaybeGroundTermMode_15);
    }
#line 1079 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__MaybeGroundTermMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1104 "modecheck_goal.m"
      {
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoal1_23;
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoal2_28;
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42;
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_46_46;
#line 1104 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoal_54;
#line 1100 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoalConjuncts0_25;
#line 1100 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoalInfo0_50;
#line 1090 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__SubGoalExpr0_24;
#line 1090 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_31_31;

#line 1090 "modecheck_goal.m"
        check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__TermVarInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1090 "modecheck_goal.m"
          {
#line 1091 "modecheck_goal.m"
            check_hlds__modecheck_goal__SubGoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 0)));
#line 1091 "modecheck_goal.m"
            check_hlds__modecheck_goal__SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 1)));
#line 1092 "modecheck_goal.m"
            check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__SubGoalExpr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1092 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1092 "modecheck_goal.m"
              {
#line 1092 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 1)));
#line 1092 "modecheck_goal.m"
                check_hlds__modecheck_goal__SubGoalConjuncts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 2)));
#line 1092 "modecheck_goal.m"
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_31_31 == (MR_Integer) 0);
#line 1092 "modecheck_goal.m"
              }
#line 1090 "modecheck_goal.m"
          }
#line 1100 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1097 "modecheck_goal.m"
          {
#line 1097 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__SubGoalConjuncts1_26;
#line 1097 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__SubGoalExpr1_27;

#line 1097 "modecheck_goal.m"
            {
#line 1097 "modecheck_goal.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__SubGoalConjuncts0_25, &check_hlds__modecheck_goal__SubGoalConjuncts1_26);
            }
#line 1098 "modecheck_goal.m"
            {
#line 1098 "modecheck_goal.m"
              check_hlds__modecheck_goal__SubGoalExpr1_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1098 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1098 "modecheck_goal.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalConjuncts1_26));
#line 1098 "modecheck_goal.m"
            }
#line 1099 "modecheck_goal.m"
            {
#line 1099 "modecheck_goal.m"
              check_hlds__modecheck_goal__SubGoal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal1_23, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr1_27));
#line 1099 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal1_23, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalInfo0_50));
#line 1099 "modecheck_goal.m"
            }
#line 1097 "modecheck_goal.m"
          }
#line 1100 "modecheck_goal.m"
        else
#line 1101 "modecheck_goal.m"
          check_hlds__modecheck_goal__SubGoal1_23 = check_hlds__modecheck_goal__SubGoal0_8;
#line 1105 "modecheck_goal.m"
        {
#line 1105 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 1);
        }
#line 1108 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 1106 "modecheck_goal.m"
          {
#line 1106 "modecheck_goal.m"
            {
#line 1106 "modecheck_goal.m"
              hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, check_hlds__modecheck_goal__SubGoal1_23, &check_hlds__modecheck_goal__SubGoal2_28);
            }
#line 1106 "modecheck_goal.m"
          }
#line 1108 "modecheck_goal.m"
        else
#line 1109 "modecheck_goal.m"
          check_hlds__modecheck_goal__SubGoal2_28 = check_hlds__modecheck_goal__SubGoal1_23;
#line 1111 "modecheck_goal.m"
        {
#line 1111 "modecheck_goal.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 1112 "modecheck_goal.m"
        {
#line 1112 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal2_28, &check_hlds__modecheck_goal__SubGoal_54, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42);
        }
#line 1113 "modecheck_goal.m"
        {
#line 1113 "modecheck_goal.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
        }
#line 1114 "modecheck_goal.m"
        {
#line 1114 "modecheck_goal.m"
          check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1114 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_54));
#line 1114 "modecheck_goal.m"
        }
#line 1114 "modecheck_goal.m"
        {
#line 1114 "modecheck_goal.m"
          MR_Word base;
#line 1114 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "modecheck_goal.m"
          *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
#line 1114 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_46_46));
#line 1114 "modecheck_goal.m"
        }
#line 1104 "modecheck_goal.m"
      }
#line 1079 "modecheck_goal.m"
    else
#line 1079 "modecheck_goal.m"
      {
#line 1079 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__MaybeGroundTermMode_15, (MR_Integer) 0)));

#line 1079 "modecheck_goal.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__V_99_99)) == (MR_mktag((MR_Integer) 0))))
#line 1065 "modecheck_goal.m"
          {
#line 1065 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__RevConj0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_99_99, (MR_Integer) 0)));
#line 1065 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__LiveTermVar_17;

#line 1066 "modecheck_goal.m"
            {
#line 1066 "modecheck_goal.m"
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__LiveTermVar_17);
            }
#line 1074 "modecheck_goal.m"
#line 1074 "modecheck_goal.m"
            switch (check_hlds__modecheck_goal__LiveTermVar_17) {
#line 1074 "modecheck_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "modecheck_goal.m"
              case (MR_Integer) 1:
#line 1075 "modecheck_goal.m"
                {
#line 1077 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1075 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29;
#line 1075 "modecheck_goal.m"
                }
#line 1074 "modecheck_goal.m"
                break;
#line 1074 "modecheck_goal.m"
              case (MR_Integer) 0:
#line 1068 "modecheck_goal.m"
                {
#line 1068 "modecheck_goal.m"
                  MR_Word check_hlds__modecheck_goal__SubGoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 1)));
#line 1068 "modecheck_goal.m"
                  MR_Word check_hlds__modecheck_goal__SubGoal_20;
#line 1068 "modecheck_goal.m"
                  MR_Word check_hlds__modecheck_goal__V_49_49;
#line 1069 "modecheck_goal.m"
                  MR_Word check_hlds__modecheck_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 0)));

#line 1070 "modecheck_goal.m"
                  {
#line 1070 "modecheck_goal.m"
                    check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__RevConj0_16, check_hlds__modecheck_goal__SubGoalInfo0_19, &check_hlds__modecheck_goal__SubGoal_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
                  }
#line 1073 "modecheck_goal.m"
                  {
#line 1073 "modecheck_goal.m"
                    check_hlds__modecheck_goal__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "modecheck_goal.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_49_49, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1073 "modecheck_goal.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_49_49, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_20));
#line 1073 "modecheck_goal.m"
                  }
#line 1073 "modecheck_goal.m"
                  {
#line 1073 "modecheck_goal.m"
                    MR_Word base;
#line 1073 "modecheck_goal.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "modecheck_goal.m"
                    *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
#line 1073 "modecheck_goal.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_49_49));
#line 1073 "modecheck_goal.m"
                  }
#line 1068 "modecheck_goal.m"
                }
#line 1074 "modecheck_goal.m"
                break;
#line 1074 "modecheck_goal.m"
            }
#line 1065 "modecheck_goal.m"
          }
#line 1079 "modecheck_goal.m"
        else
#line 1104 "modecheck_goal.m"
          {
#line 1104 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__SubGoal2_68;
#line 1104 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76;
#line 1104 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77;
#line 1104 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_80_80;
#line 1104 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__SubGoal_81;

#line 1105 "modecheck_goal.m"
            {
#line 1105 "modecheck_goal.m"
              check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 1);
            }
#line 1108 "modecheck_goal.m"
            if (check_hlds__modecheck_goal__succeeded)
#line 1106 "modecheck_goal.m"
              {
#line 1106 "modecheck_goal.m"
                {
#line 1106 "modecheck_goal.m"
                  hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal2_68);
                }
#line 1106 "modecheck_goal.m"
              }
#line 1108 "modecheck_goal.m"
            else
#line 1109 "modecheck_goal.m"
              check_hlds__modecheck_goal__SubGoal2_68 = check_hlds__modecheck_goal__SubGoal0_8;
#line 1111 "modecheck_goal.m"
            {
#line 1111 "modecheck_goal.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76);
            }
#line 1112 "modecheck_goal.m"
            {
#line 1112 "modecheck_goal.m"
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal2_68, &check_hlds__modecheck_goal__SubGoal_81, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77);
            }
#line 1113 "modecheck_goal.m"
            {
#line 1113 "modecheck_goal.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
            }
#line 1114 "modecheck_goal.m"
            {
#line 1114 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_80_80, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1114 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_80_80, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_81));
#line 1114 "modecheck_goal.m"
            }
#line 1114 "modecheck_goal.m"
            {
#line 1114 "modecheck_goal.m"
              MR_Word base;
#line 1114 "modecheck_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "modecheck_goal.m"
              *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
#line 1114 "modecheck_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_80_80));
#line 1114 "modecheck_goal.m"
            }
#line 1104 "modecheck_goal.m"
          }
#line 1079 "modecheck_goal.m"
      }
#line 1054 "modecheck_goal.m"
  }
#line 1048 "modecheck_goal.m"
}

#line 1036 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
#line 1036 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 1036 "modecheck_goal.m"
{
#line 1036 "modecheck_goal.m"
  {
#line 1036 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1036 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1036 "modecheck_goal.m"
    {
#line 1036 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__1036__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
#line 1036 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1036 "modecheck_goal.m"
  }
#line 1036 "modecheck_goal.m"
}

#line 1006 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Type_7,
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Context_8,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__TypeInfoVar_9,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__TypeInfoGoals_10,
#line 1006 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
#line 1006 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
#line 1006 "modecheck_goal.m"
{
#line 1010 "modecheck_goal.m"
  {
#line 1010 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo0_12;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PredId_13;
#line 1010 "modecheck_goal.m"
    MR_Integer check_hlds__modecheck_goal__ProcId_14;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PredInfo0_15;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ProcInfo0_16;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarTypes0_17;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarSet0_18;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ProcInfo1_19;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ProcInfo2_20;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PolyInfo0_21;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PolyInfo_22;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PolySpecs_23;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__PredInfo_24;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ProcInfo_25;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo1_26;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo_27;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarSet_28;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarTypes_29;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_32_32;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
#line 1010 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38;

#line 1011 "modecheck_goal.m"
    {
#line 1011 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__ModuleInfo0_12);
    }
#line 1014 "modecheck_goal.m"
    {
#line 1014 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__PredId_13);
    }
#line 1015 "modecheck_goal.m"
    {
#line 1015 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__ProcId_14);
    }
#line 1016 "modecheck_goal.m"
    {
#line 1016 "modecheck_goal.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_goal__ModuleInfo0_12, check_hlds__modecheck_goal__PredId_13, check_hlds__modecheck_goal__ProcId_14, &check_hlds__modecheck_goal__PredInfo0_15, &check_hlds__modecheck_goal__ProcInfo0_16);
    }
#line 1023 "modecheck_goal.m"
    {
#line 1023 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__VarTypes0_17);
    }
#line 1024 "modecheck_goal.m"
    {
#line 1024 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__VarSet0_18);
    }
#line 1025 "modecheck_goal.m"
    {
#line 1025 "modecheck_goal.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet0_18, check_hlds__modecheck_goal__ProcInfo0_16, &check_hlds__modecheck_goal__ProcInfo1_19);
    }
#line 1026 "modecheck_goal.m"
    {
#line 1026 "modecheck_goal.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modecheck_goal__VarTypes0_17, check_hlds__modecheck_goal__ProcInfo1_19, &check_hlds__modecheck_goal__ProcInfo2_20);
    }
#line 1027 "modecheck_goal.m"
    {
#line 1027 "modecheck_goal.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__modecheck_goal__ModuleInfo0_12, check_hlds__modecheck_goal__PredInfo0_15, check_hlds__modecheck_goal__ProcInfo2_20, &check_hlds__modecheck_goal__PolyInfo0_21);
    }
#line 1030 "modecheck_goal.m"
    {
#line 1030 "modecheck_goal.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__modecheck_goal__Type_7, check_hlds__modecheck_goal__Context_8, check_hlds__modecheck_goal__TypeInfoVar_9, check_hlds__modecheck_goal__TypeInfoGoals_10, check_hlds__modecheck_goal__PolyInfo0_21, &check_hlds__modecheck_goal__PolyInfo_22);
    }
#line 1034 "modecheck_goal.m"
    {
#line 1034 "modecheck_goal.m"
      check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__modecheck_goal__PolyInfo_22, &check_hlds__modecheck_goal__PolySpecs_23, check_hlds__modecheck_goal__PredInfo0_15, &check_hlds__modecheck_goal__PredInfo_24, check_hlds__modecheck_goal__ProcInfo2_20, &check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__ModuleInfo1_26);
    }
#line 1036 "modecheck_goal.m"
    {
#line 1036 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[1]));
#line 1036 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1));
#line 1036 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1036 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 3) = ((MR_Box) (check_hlds__modecheck_goal__PolySpecs_23));
#line 1036 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "modecheck_goal.m"
    }
#line 1036 "modecheck_goal.m"
    {
#line 1036 "modecheck_goal.m"
      mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_32_32, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_make_type_info_var_for_type\'/6", (MR_String) "got errors while making type_info_var");
    }
#line 1038 "modecheck_goal.m"
    {
#line 1038 "modecheck_goal.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__modecheck_goal__PredId_13, check_hlds__modecheck_goal__ProcId_14, check_hlds__modecheck_goal__PredInfo_24, check_hlds__modecheck_goal__ProcInfo_25, check_hlds__modecheck_goal__ModuleInfo1_26, &check_hlds__modecheck_goal__ModuleInfo_27);
    }
#line 1042 "modecheck_goal.m"
    {
#line 1042 "modecheck_goal.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__VarSet_28);
    }
#line 1043 "modecheck_goal.m"
    {
#line 1043 "modecheck_goal.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__VarTypes_29);
    }
#line 1044 "modecheck_goal.m"
    {
#line 1044 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
    }
#line 1045 "modecheck_goal.m"
    {
#line 1045 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_goal__VarTypes_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 1046 "modecheck_goal.m"
    {
#line 1046 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_goal__ModuleInfo_27, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
#line 1046 "modecheck_goal.m"
      return;
    }
#line 1010 "modecheck_goal.m"
  }
#line 1006 "modecheck_goal.m"
}

#line 945 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__TermVar_7,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 945 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
#line 945 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38,
#line 945 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39)
#line 945 "modecheck_goal.m"
{
#line 950 "modecheck_goal.m"
  {
#line 950 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfo_73_73;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarTypes0_12;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarSet0_13;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CloneVar_14;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarSet_15;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarType_16;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarTypes_17;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Rename_18;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__SubGoal_19;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ScopeGoalInfo1_20;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarOldInst_22;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ScopeInstMapDelta_23;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ScopeGoalInfo_24;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Reason_25;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ScopeGoalExpr_26;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ScopeGoal_27;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TermVarUniqueInst_28;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap1_29;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Context_30;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfoVar_31;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeInfoGoals_32;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapDelta_33;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo_34;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__CopyGoal_35;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap2_36;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap_37;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_43_43;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_44_44;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_51_51;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_52_52;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_54_54;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_60_60;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_63_63;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_64_64;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_68_68;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_69_69;
#line 950 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_70_70;

#line 951 "modecheck_goal.m"
    {
#line 951 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__VarTypes0_12);
    }
#line 952 "modecheck_goal.m"
    {
#line 952 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__VarSet0_13);
    }
#line 953 "modecheck_goal.m"
    {
#line 953 "modecheck_goal.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__VarSet0_13, &check_hlds__modecheck_goal__VarSet_15);
    }
#line 954 "modecheck_goal.m"
    {
#line 954 "modecheck_goal.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes0_12, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarType_16);
    }
#line 955 "modecheck_goal.m"
    {
#line 955 "modecheck_goal.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__TermVarType_16, check_hlds__modecheck_goal__VarTypes0_12, &check_hlds__modecheck_goal__VarTypes_17);
    }
#line 956 "modecheck_goal.m"
    {
#line 956 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet_15, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 957 "modecheck_goal.m"
    {
#line 957 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_goal__VarTypes_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 6778 "check_hlds.modecheck_goal.c"
    check_hlds__modecheck_goal__TypeInfo_73_73 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
#line 958 "modecheck_goal.m"
    {
#line 958 "modecheck_goal.m"
      check_hlds__modecheck_goal__Rename_18 = mercury__map__singleton_2_f_0(check_hlds__modecheck_goal__TypeInfo_73_73, check_hlds__modecheck_goal__TypeInfo_73_73, ((MR_Box) (check_hlds__modecheck_goal__TermVar_7)), ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14)));
    }
#line 964 "modecheck_goal.m"
    {
#line 964 "modecheck_goal.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__modecheck_goal__Rename_18, check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_19);
    }
#line 965 "modecheck_goal.m"
    {
#line 965 "modecheck_goal.m"
      hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, check_hlds__modecheck_goal__Rename_18, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__ScopeGoalInfo1_20);
    }
#line 971 "modecheck_goal.m"
    {
#line 971 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__InstMap0_21);
    }
#line 972 "modecheck_goal.m"
    {
#line 972 "modecheck_goal.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap0_21, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarOldInst_22);
    }
#line 974 "modecheck_goal.m"
    {
#line 974 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 974 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
#line 974 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarOldInst_22));
#line 974 "modecheck_goal.m"
    }
#line 974 "modecheck_goal.m"
    {
#line 974 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_43_43, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_44_44));
#line 974 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "modecheck_goal.m"
    }
#line 974 "modecheck_goal.m"
    {
#line 974 "modecheck_goal.m"
      check_hlds__modecheck_goal__ScopeInstMapDelta_23 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_43_43);
    }
#line 975 "modecheck_goal.m"
    {
#line 975 "modecheck_goal.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__ScopeInstMapDelta_23, check_hlds__modecheck_goal__ScopeGoalInfo1_20, &check_hlds__modecheck_goal__ScopeGoalInfo_24);
    }
#line 978 "modecheck_goal.m"
    {
#line 978 "modecheck_goal.m"
      check_hlds__modecheck_goal__Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 978 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 978 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
#line 978 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 2) = ((MR_Box) ((MR_Integer) 1));
#line 978 "modecheck_goal.m"
    }
#line 979 "modecheck_goal.m"
    {
#line 979 "modecheck_goal.m"
      check_hlds__modecheck_goal__ScopeGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 979 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 979 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_25));
#line 979 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_19));
#line 979 "modecheck_goal.m"
    }
#line 980 "modecheck_goal.m"
    {
#line 980 "modecheck_goal.m"
      check_hlds__modecheck_goal__ScopeGoal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 980 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__ScopeGoal_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoalExpr_26));
#line 980 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__ScopeGoal_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoalInfo_24));
#line 980 "modecheck_goal.m"
    }
#line 985 "modecheck_goal.m"
    check_hlds__modecheck_goal__TermVarUniqueInst_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3]);
#line 987 "modecheck_goal.m"
    {
#line 987 "modecheck_goal.m"
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__TermVarOldInst_22, check_hlds__modecheck_goal__InstMap0_21, &check_hlds__modecheck_goal__InstMap1_29);
    }
#line 988 "modecheck_goal.m"
    {
#line 988 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap1_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
    }
#line 990 "modecheck_goal.m"
    {
#line 990 "modecheck_goal.m"
      check_hlds__modecheck_goal__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
    }
#line 991 "modecheck_goal.m"
    {
#line 991 "modecheck_goal.m"
      check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(check_hlds__modecheck_goal__TermVarType_16, check_hlds__modecheck_goal__Context_30, &check_hlds__modecheck_goal__TypeInfoVar_31, &check_hlds__modecheck_goal__TypeInfoGoals_32, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50);
    }
#line 995 "modecheck_goal.m"
    {
#line 995 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_7));
#line 995 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarUniqueInst_28));
#line 995 "modecheck_goal.m"
    }
#line 995 "modecheck_goal.m"
    {
#line 995 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_52_52));
#line 995 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "modecheck_goal.m"
    }
#line 995 "modecheck_goal.m"
    {
#line 995 "modecheck_goal.m"
      check_hlds__modecheck_goal__InstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_51_51);
    }
#line 996 "modecheck_goal.m"
    {
#line 996 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_goal__ModuleInfo_34);
    }
#line 997 "modecheck_goal.m"
    {
#line 997 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_54_54 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 998 "modecheck_goal.m"
    {
#line 998 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_7));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "modecheck_goal.m"
    }
#line 998 "modecheck_goal.m"
    {
#line 998 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_63_63, 0) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_63_63, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_64_64));
#line 998 "modecheck_goal.m"
    }
#line 998 "modecheck_goal.m"
    {
#line 998 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_60_60, 0) = ((MR_Box) (check_hlds__modecheck_goal__TypeInfoVar_31));
#line 998 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_60_60, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_63_63));
#line 998 "modecheck_goal.m"
    }
#line 997 "modecheck_goal.m"
    {
#line 997 "modecheck_goal.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__modecheck_goal__V_54_54, (MR_String) "copy", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_7[0]), (MR_Integer) 0, (MR_Integer) 0, check_hlds__modecheck_goal__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__InstMapDelta_33, check_hlds__modecheck_goal__ModuleInfo_34, check_hlds__modecheck_goal__Context_30, &check_hlds__modecheck_goal__CopyGoal_35);
    }
#line 1000 "modecheck_goal.m"
    {
#line 1000 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_goal__InstMap2_36);
    }
#line 1001 "modecheck_goal.m"
    {
#line 1001 "modecheck_goal.m"
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__TermVarUniqueInst_28, check_hlds__modecheck_goal__InstMap2_36, &check_hlds__modecheck_goal__InstMap_37);
    }
#line 1002 "modecheck_goal.m"
    {
#line 1002 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_37, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39);
    }
#line 1004 "modecheck_goal.m"
    {
#line 1004 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_69_69, 0) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoal_27));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_69_69, 1) = ((MR_Box) (check_hlds__modecheck_goal__TypeInfoGoals_32));
#line 1004 "modecheck_goal.m"
    }
#line 1004 "modecheck_goal.m"
    {
#line 1004 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, 0) = ((MR_Box) (check_hlds__modecheck_goal__CopyGoal_35));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1004 "modecheck_goal.m"
    }
#line 1004 "modecheck_goal.m"
    {
#line 1004 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__V_69_69, check_hlds__modecheck_goal__V_70_70);
    }
#line 1004 "modecheck_goal.m"
    {
#line 1004 "modecheck_goal.m"
      MR_Word base;
#line 1004 "modecheck_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "modecheck_goal.m"
      *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1004 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__V_68_68));
#line 1004 "modecheck_goal.m"
    }
#line 950 "modecheck_goal.m"
  }
#line 945 "modecheck_goal.m"
}

#line 825 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
#line 825 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 825 "modecheck_goal.m"
{
#line 825 "modecheck_goal.m"
  {
#line 825 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 825 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 825 "modecheck_goal.m"
    {
#line 825 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))));
    }
#line 825 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 825 "modecheck_goal.m"
  }
#line 825 "modecheck_goal.m"
}

#line 823 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
#line 823 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 823 "modecheck_goal.m"
{
#line 823 "modecheck_goal.m"
  {
#line 823 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 823 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 823 "modecheck_goal.m"
    {
#line 823 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))));
    }
#line 823 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 823 "modecheck_goal.m"
  }
#line 823 "modecheck_goal.m"
}

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
#line 867 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 867 "modecheck_goal.m"
{
#line 867 "modecheck_goal.m"
  {
#line 867 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 867 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 867 "modecheck_goal.m"
    {
#line 867 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))));
    }
#line 867 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 867 "modecheck_goal.m"
  }
#line 867 "modecheck_goal.m"
}

#line 867 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
#line 867 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg)
#line 867 "modecheck_goal.m"
{
#line 867 "modecheck_goal.m"
  {
#line 867 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 867 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 867 "modecheck_goal.m"
    {
#line 867 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__867__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
#line 867 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 867 "modecheck_goal.m"
  }
#line 867 "modecheck_goal.m"
}

#line 789 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Reason_7,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
#line 789 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
#line 789 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46,
#line 789 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47)
#line 789 "modecheck_goal.m"
{
#line 795 "modecheck_goal.m"
  {
#line 795 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 795 "modecheck_goal.m"
#line 795 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_7)) {
#line 795 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 795 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 827 "modecheck_goal.m"
        {
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135;
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136;
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal_139;

#line 828 "modecheck_goal.m"
          {
#line 828 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135);
          }
#line 829 "modecheck_goal.m"
          {
#line 829 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_139, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136);
          }
#line 830 "modecheck_goal.m"
          {
#line 830 "modecheck_goal.m"
            MR_Word base;
#line 830 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_139));
#line 830 "modecheck_goal.m"
          }
#line 831 "modecheck_goal.m"
          {
#line 831 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
            return;
          }
#line 827 "modecheck_goal.m"
        }
#line 795 "modecheck_goal.m"
        break;
#line 795 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 827 "modecheck_goal.m"
        {
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149;
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150;
#line 827 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal_153;

#line 828 "modecheck_goal.m"
          {
#line 828 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149);
          }
#line 829 "modecheck_goal.m"
          {
#line 829 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_153, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150);
          }
#line 830 "modecheck_goal.m"
          {
#line 830 "modecheck_goal.m"
            MR_Word base;
#line 830 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_153));
#line 830 "modecheck_goal.m"
          }
#line 831 "modecheck_goal.m"
          {
#line 831 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
            return;
          }
#line 827 "modecheck_goal.m"
        }
#line 795 "modecheck_goal.m"
        break;
#line 795 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 901 "modecheck_goal.m"
        {
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__InPPScope_45;
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52;
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53;
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56;
#line 901 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal_124;

#line 902 "modecheck_goal.m"
          {
#line 902 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InPPScope_45);
          }
#line 903 "modecheck_goal.m"
          {
#line 903 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
          }
#line 905 "modecheck_goal.m"
          {
#line 905 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "promise_purity scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52);
          }
#line 906 "modecheck_goal.m"
          {
#line 906 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_124, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53);
          }
#line 907 "modecheck_goal.m"
          {
#line 907 "modecheck_goal.m"
            MR_Word base;
#line 907 "modecheck_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 907 "modecheck_goal.m"
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 907 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 907 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 907 "modecheck_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_124));
#line 907 "modecheck_goal.m"
          }
#line 908 "modecheck_goal.m"
          {
#line 908 "modecheck_goal.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "promise_purity scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56);
          }
#line 909 "modecheck_goal.m"
          {
#line 909 "modecheck_goal.m"
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(check_hlds__modecheck_goal__InPPScope_45, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 909 "modecheck_goal.m"
            return;
          }
#line 901 "modecheck_goal.m"
        }
#line 795 "modecheck_goal.m"
        break;
#line 795 "modecheck_goal.m"
      case (MR_Integer) 3:
#line 795 "modecheck_goal.m"
#line 795 "modecheck_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 0)))) {
#line 795 "modecheck_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 795 "modecheck_goal.m"
          case (MR_Integer) 0:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_167;

#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_167, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_167));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 1:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_160;

#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_160, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_160));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 2:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_174;

#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_174, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_174));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 3:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_132;

#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_132, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_132));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 4:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_110;

#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_110, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_110));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 5:
#line 833 "modecheck_goal.m"
            {
#line 833 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 1)));
#line 833 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__OldKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 2)));

#line 856 "modecheck_goal.m"
#line 856 "modecheck_goal.m"
              switch (check_hlds__modecheck_goal__OldKind_35) {
#line 856 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 856 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 835 "modecheck_goal.m"
                  {
#line 835 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__IsLive_36;

#line 836 "modecheck_goal.m"
                    {
#line 836 "modecheck_goal.m"
                      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, check_hlds__modecheck_goal__TermVar_34, &check_hlds__modecheck_goal__IsLive_36);
                    }
#line 850 "modecheck_goal.m"
#line 850 "modecheck_goal.m"
                    switch (check_hlds__modecheck_goal__IsLive_36) {
#line 850 "modecheck_goal.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 850 "modecheck_goal.m"
                      case (MR_Integer) 1:
#line 851 "modecheck_goal.m"
                        {
#line 854 "modecheck_goal.m"
                          *check_hlds__modecheck_goal__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
#line 851 "modecheck_goal.m"
                          *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46;
#line 851 "modecheck_goal.m"
                        }
#line 850 "modecheck_goal.m"
                        break;
#line 850 "modecheck_goal.m"
                      case (MR_Integer) 0:
#line 838 "modecheck_goal.m"
                        {
#line 838 "modecheck_goal.m"
                          MR_Word check_hlds__modecheck_goal__InstMapDelta0_37;
#line 838 "modecheck_goal.m"
                          MR_Word check_hlds__modecheck_goal__TermVarInst_38;
#line 838 "modecheck_goal.m"
                          MR_Word check_hlds__modecheck_goal__InstMap0_111;
#line 838 "modecheck_goal.m"
                          MR_Word check_hlds__modecheck_goal__InstMap_112;

#line 843 "modecheck_goal.m"
                          {
#line 843 "modecheck_goal.m"
                            MR_Word base;
#line 843 "modecheck_goal.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "modecheck_goal.m"
                            *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 843 "modecheck_goal.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 843 "modecheck_goal.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 843 "modecheck_goal.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal0_8));
#line 843 "modecheck_goal.m"
                          }
#line 845 "modecheck_goal.m"
                          {
#line 845 "modecheck_goal.m"
                            check_hlds__modecheck_goal__InstMapDelta0_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
                          }
#line 846 "modecheck_goal.m"
                          {
#line 846 "modecheck_goal.m"
                            hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMapDelta0_37, check_hlds__modecheck_goal__TermVar_34, &check_hlds__modecheck_goal__TermVarInst_38);
                          }
#line 847 "modecheck_goal.m"
                          {
#line 847 "modecheck_goal.m"
                            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InstMap0_111);
                          }
#line 848 "modecheck_goal.m"
                          {
#line 848 "modecheck_goal.m"
                            hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__TermVarInst_38, check_hlds__modecheck_goal__InstMap0_111, &check_hlds__modecheck_goal__InstMap_112);
                          }
#line 849 "modecheck_goal.m"
                          {
#line 849 "modecheck_goal.m"
                            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_112, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 849 "modecheck_goal.m"
                            return;
                          }
#line 838 "modecheck_goal.m"
                        }
#line 850 "modecheck_goal.m"
                        break;
#line 850 "modecheck_goal.m"
                    }
#line 835 "modecheck_goal.m"
                  }
#line 856 "modecheck_goal.m"
                  break;
#line 856 "modecheck_goal.m"
                case (MR_Integer) 2:
#line 856 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 856 "modecheck_goal.m"
                case (MR_Integer) 3:
#line 860 "modecheck_goal.m"
                  {
#line 860 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39;
#line 860 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60;
#line 860 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61;
#line 860 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64;

#line 861 "modecheck_goal.m"
                    {
#line 861 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60);
                    }
#line 862 "modecheck_goal.m"
                    {
#line 862 "modecheck_goal.m"
                      check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__SubGoal0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61);
                    }
#line 864 "modecheck_goal.m"
                    {
#line 864 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64);
                    }
#line 895 "modecheck_goal.m"
                    if ((check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "modecheck_goal.m"
                      {
#line 897 "modecheck_goal.m"
                        *check_hlds__modecheck_goal__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
#line 896 "modecheck_goal.m"
                        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64;
#line 896 "modecheck_goal.m"
                      }
#line 895 "modecheck_goal.m"
                    else
#line 866 "modecheck_goal.m"
                      {
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__Kind1_40;
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__SubGoal1_41;
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__MakeGroundTermsUnique_42;
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39, (MR_Integer) 0)));
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_68_68;
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_72_72;
#line 866 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;

#line 866 "modecheck_goal.m"
                        check_hlds__modecheck_goal__Kind1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_67_67, (MR_Integer) 0)));
#line 866 "modecheck_goal.m"
                        check_hlds__modecheck_goal__SubGoal1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_67_67, (MR_Integer) 1)));
#line 867 "modecheck_goal.m"
                        {
#line 867 "modecheck_goal.m"
                          check_hlds__modecheck_goal__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[0]));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 4) = ((MR_Box) ((MR_Integer) 0));
#line 867 "modecheck_goal.m"
                        }
#line 867 "modecheck_goal.m"
                        {
#line 867 "modecheck_goal.m"
                          check_hlds__modecheck_goal__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 867 "modecheck_goal.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_72_72));
#line 867 "modecheck_goal.m"
                        }
#line 867 "modecheck_goal.m"
                        {
#line 867 "modecheck_goal.m"
                          mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_68_68, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                        }
#line 869 "modecheck_goal.m"
                        {
#line 869 "modecheck_goal.m"
                          check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75);
                        }
#line 872 "modecheck_goal.m"
                        {
#line 872 "modecheck_goal.m"
                          check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_goal__MakeGroundTermsUnique_42);
                        }
#line 878 "modecheck_goal.m"
#line 878 "modecheck_goal.m"
                        switch (check_hlds__modecheck_goal__MakeGroundTermsUnique_42) {
#line 878 "modecheck_goal.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 878 "modecheck_goal.m"
                          case (MR_Integer) 1:
#line 875 "modecheck_goal.m"
                            {
#line 875 "modecheck_goal.m"
                              MR_Word check_hlds__modecheck_goal__UpdatedReason1_43;

#line 876 "modecheck_goal.m"
                              {
#line 876 "modecheck_goal.m"
                                check_hlds__modecheck_goal__UpdatedReason1_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 876 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 876 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_34));
#line 876 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 2) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
#line 876 "modecheck_goal.m"
                              }
#line 877 "modecheck_goal.m"
                              {
#line 877 "modecheck_goal.m"
                                MR_Word base;
#line 877 "modecheck_goal.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "modecheck_goal.m"
                                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 877 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 877 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UpdatedReason1_43));
#line 877 "modecheck_goal.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal1_41));
#line 877 "modecheck_goal.m"
                              }
#line 875 "modecheck_goal.m"
                              *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;
#line 875 "modecheck_goal.m"
                            }
#line 878 "modecheck_goal.m"
                            break;
#line 878 "modecheck_goal.m"
                          case (MR_Integer) 0:
#line 883 "modecheck_goal.m"
#line 883 "modecheck_goal.m"
                            switch (check_hlds__modecheck_goal__Kind1_40) {
#line 883 "modecheck_goal.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 883 "modecheck_goal.m"
                              case (MR_Integer) 1:
#line 885 "modecheck_goal.m"
                                {
#line 885 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__SubGoal1_41, check_hlds__modecheck_goal__GoalInfo0_9, check_hlds__modecheck_goal__GoalExpr_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 885 "modecheck_goal.m"
                                  return;
                                }
#line 883 "modecheck_goal.m"
                                break;
#line 883 "modecheck_goal.m"
                              case (MR_Integer) 2:
#line 883 "modecheck_goal.m"
                              case (MR_Integer) 3:
#line 890 "modecheck_goal.m"
                                {
#line 890 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__UpdatedReason1_117;

#line 891 "modecheck_goal.m"
                                  {
#line 891 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__UpdatedReason1_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 891 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 891 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_34));
#line 891 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 2) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
#line 891 "modecheck_goal.m"
                                  }
#line 892 "modecheck_goal.m"
                                  {
#line 892 "modecheck_goal.m"
                                    MR_Word base;
#line 892 "modecheck_goal.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 892 "modecheck_goal.m"
                                    *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 892 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 892 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UpdatedReason1_117));
#line 892 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal1_41));
#line 892 "modecheck_goal.m"
                                  }
#line 890 "modecheck_goal.m"
                                  *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;
#line 890 "modecheck_goal.m"
                                }
#line 883 "modecheck_goal.m"
                                break;
#line 883 "modecheck_goal.m"
                              case (MR_Integer) 0:
#line 881 "modecheck_goal.m"
                                {
#line 882 "modecheck_goal.m"
                                  {
#line 882 "modecheck_goal.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
#line 882 "modecheck_goal.m"
                                    return;
                                  }
#line 881 "modecheck_goal.m"
                                }
#line 883 "modecheck_goal.m"
                                break;
#line 883 "modecheck_goal.m"
                            }
#line 878 "modecheck_goal.m"
                            break;
#line 878 "modecheck_goal.m"
                        }
#line 866 "modecheck_goal.m"
                      }
#line 860 "modecheck_goal.m"
                  }
#line 856 "modecheck_goal.m"
                  break;
#line 856 "modecheck_goal.m"
              }
#line 833 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 6:
#line 795 "modecheck_goal.m"
            {
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__InstMap0_17;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__NonLocals_18;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_19;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105;
#line 795 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106;

#line 796 "modecheck_goal.m"
              {
#line 796 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100);
              }
#line 797 "modecheck_goal.m"
              {
#line 797 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modecheck_goal__InstMap0_17);
              }
#line 798 "modecheck_goal.m"
              {
#line 798 "modecheck_goal.m"
                check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
              }
#line 802 "modecheck_goal.m"
              {
#line 802 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102);
              }
#line 803 "modecheck_goal.m"
              {
#line 803 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103);
              }
#line 804 "modecheck_goal.m"
              {
#line 804 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105);
              }
#line 805 "modecheck_goal.m"
              {
#line 805 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106);
              }
#line 806 "modecheck_goal.m"
              {
#line 806 "modecheck_goal.m"
                MR_Word base;
#line 806 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 806 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 806 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 806 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 806 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_19));
#line 806 "modecheck_goal.m"
              }
#line 807 "modecheck_goal.m"
              {
#line 807 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 807 "modecheck_goal.m"
                return;
              }
#line 795 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
          case (MR_Integer) 7:
#line 827 "modecheck_goal.m"
            {
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__LCVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 1)));
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__LCSVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 2)));
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__InstMap_32;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__ModuleInfo_33;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_83_83;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_87_87;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143;
#line 827 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal_146;
#line 819 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 3)));

#line 821 "modecheck_goal.m"
              {
#line 821 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InstMap_32);
              }
#line 822 "modecheck_goal.m"
              {
#line 822 "modecheck_goal.m"
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__ModuleInfo_33);
              }
#line 823 "modecheck_goal.m"
              {
#line 823 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3));
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_33));
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 4) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_32));
#line 823 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 5) = ((MR_Box) (check_hlds__modecheck_goal__LCVar_29));
#line 823 "modecheck_goal.m"
              }
#line 823 "modecheck_goal.m"
              {
#line 823 "modecheck_goal.m"
                mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_83_83, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control variable is not ground");
              }
#line 825 "modecheck_goal.m"
              {
#line 825 "modecheck_goal.m"
                check_hlds__modecheck_goal__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4));
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_33));
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 4) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_32));
#line 825 "modecheck_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 5) = ((MR_Box) (check_hlds__modecheck_goal__LCSVar_30));
#line 825 "modecheck_goal.m"
              }
#line 825 "modecheck_goal.m"
              {
#line 825 "modecheck_goal.m"
                mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_87_87, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control slot variable is not ground");
              }
#line 828 "modecheck_goal.m"
              {
#line 828 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142);
              }
#line 829 "modecheck_goal.m"
              {
#line 829 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_146, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143);
              }
#line 830 "modecheck_goal.m"
              {
#line 830 "modecheck_goal.m"
                MR_Word base;
#line 830 "modecheck_goal.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "modecheck_goal.m"
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
#line 830 "modecheck_goal.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_146));
#line 830 "modecheck_goal.m"
              }
#line 831 "modecheck_goal.m"
              {
#line 831 "modecheck_goal.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
#line 831 "modecheck_goal.m"
                return;
              }
#line 827 "modecheck_goal.m"
            }
#line 795 "modecheck_goal.m"
            break;
#line 795 "modecheck_goal.m"
        }
#line 795 "modecheck_goal.m"
        break;
#line 795 "modecheck_goal.m"
    }
#line 795 "modecheck_goal.m"
  }
#line 789 "modecheck_goal.m"
}

#line 746 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__SubGoal0_6,
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 746 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 746 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17,
#line 746 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18)
#line 746 "modecheck_goal.m"
{
#line 749 "modecheck_goal.m"
  {
#line 749 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__NonLocals_10;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_11;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__LiveVars0_12;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__SubGoal_13;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InPromisePurityScope_14;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_22_22;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30;
#line 749 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33;

#line 750 "modecheck_goal.m"
    {
#line 750 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 751 "modecheck_goal.m"
    {
#line 751 "modecheck_goal.m"
      check_hlds__modecheck_goal__NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
    }
#line 752 "modecheck_goal.m"
    {
#line 752 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__InstMap0_11);
    }
#line 760 "modecheck_goal.m"
    {
#line 760 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__LiveVars0_12);
    }
#line 761 "modecheck_goal.m"
    {
#line 761 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_22_22 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0]);
    }
#line 761 "modecheck_goal.m"
    {
#line 761 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_goal__V_22_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 765 "modecheck_goal.m"
    {
#line 765 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__NonLocals_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 766 "modecheck_goal.m"
    {
#line 766 "modecheck_goal.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_6, &check_hlds__modecheck_goal__SubGoal_13, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26);
    }
#line 767 "modecheck_goal.m"
    {
#line 767 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_goal__LiveVars0_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 768 "modecheck_goal.m"
    {
#line 768 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__NonLocals_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 769 "modecheck_goal.m"
    {
#line 769 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 770 "modecheck_goal.m"
    {
#line 770 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_goal__InPromisePurityScope_14);
    }
#line 778 "modecheck_goal.m"
#line 778 "modecheck_goal.m"
    switch (check_hlds__modecheck_goal__InPromisePurityScope_14) {
#line 778 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 778 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 779 "modecheck_goal.m"
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30;
#line 778 "modecheck_goal.m"
        break;
#line 778 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 772 "modecheck_goal.m"
        {
#line 772 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__NegNonLocals_15;
#line 772 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Unreachable_16;
#line 772 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_32_32;

#line 773 "modecheck_goal.m"
          {
#line 773 "modecheck_goal.m"
            check_hlds__modecheck_goal__NegNonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
          }
#line 774 "modecheck_goal.m"
          {
#line 774 "modecheck_goal.m"
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__Unreachable_16);
          }
#line 776 "modecheck_goal.m"
          {
#line 776 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_32_32 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NegNonLocals_15);
          }
#line 775 "modecheck_goal.m"
          {
#line 775 "modecheck_goal.m"
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 1, check_hlds__modecheck_goal__V_32_32, check_hlds__modecheck_goal__InstMap0_11, check_hlds__modecheck_goal__Unreachable_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33);
          }
#line 772 "modecheck_goal.m"
        }
#line 778 "modecheck_goal.m"
        break;
#line 778 "modecheck_goal.m"
    }
#line 781 "modecheck_goal.m"
    *check_hlds__modecheck_goal__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__modecheck_goal__SubGoal_13);
#line 782 "modecheck_goal.m"
    {
#line 782 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18);
#line 782 "modecheck_goal.m"
      return;
    }
#line 749 "modecheck_goal.m"
  }
#line 746 "modecheck_goal.m"
}

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_3(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1656 "modecheck_goal.m"
{
#line 1656 "modecheck_goal.m"
  {
#line 1656 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_to_init_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1656 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
  }
#line 1656 "modecheck_goal.m"
}

#line 1656 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_2(
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1656 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1656 "modecheck_goal.m"
{
#line 1656 "modecheck_goal.m"
  {
#line 1656 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_to_init_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1656 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1656 "modecheck_goal.m"
  }
#line 1656 "modecheck_goal.m"
}

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1601 "modecheck_goal.m"
{
#line 1601 "modecheck_goal.m"
  {
#line 1601 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1601 "modecheck_goal.m"
    {
#line 1601 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1601 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
  }
#line 1601 "modecheck_goal.m"
}

#line 716 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0(
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NonLocals_13,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_14,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Then0_15,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Then_16,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Else0_17,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Else_18,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ThenInstMap0_19,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__ThenInstMap_20,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__ElseInstMap0_21,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__ElseInstMap_22,
#line 716 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_32,
#line 716 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33)
#line 716 "modecheck_goal.m"
{
#line 722 "modecheck_goal.m"
  {
#line 722 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_41_41;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo_24;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__EnsureInitialised_25;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ThenVarsToInit_26;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ThenInitCalls_27;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InitedThenVars_28;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ElseVarsToInit_29;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ElseInitCalls_30;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InitedElseVars_31;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_34_34;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_35_35;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_38_38;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_40_40;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_46_46;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_52_52;
#line 722 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_58_58;

#line 723 "modecheck_goal.m"
    {
#line 723 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_32, &check_hlds__modecheck_goal__ModuleInfo_24);
    }
#line 725 "modecheck_goal.m"
    {
#line 725 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__ElseInstMap0_21));
#line 725 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "modecheck_goal.m"
    }
#line 725 "modecheck_goal.m"
    {
#line 725 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_goal__ThenInstMap0_19));
#line 725 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_34_34, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_35_35));
#line 725 "modecheck_goal.m"
    }
#line 1601 "modecheck_goal.m"
    {
#line 1601 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[0]));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_1));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_goal__VarTypes_14));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 4) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_24));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 5) = ((MR_Box) (check_hlds__modecheck_goal__V_34_34));
#line 1601 "modecheck_goal.m"
    }
#line 1600 "modecheck_goal.m"
    {
#line 1600 "modecheck_goal.m"
      check_hlds__modecheck_goal__EnsureInitialised_25 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_46_46, check_hlds__modecheck_goal__NonLocals_13);
    }
#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_2));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_24));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 4) = ((MR_Box) (check_hlds__modecheck_goal__ThenInstMap0_19));
#line 1656 "modecheck_goal.m"
    }
#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      check_hlds__modecheck_goal__ThenVarsToInit_26 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_52_52, check_hlds__modecheck_goal__EnsureInitialised_25);
    }
#line 729 "modecheck_goal.m"
    {
#line 729 "modecheck_goal.m"
      check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_goal__ThenVarsToInit_26, &check_hlds__modecheck_goal__ThenInitCalls_27, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_32, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
    }
#line 8532 "check_hlds.modecheck_goal.c"
    check_hlds__modecheck_goal__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 730 "modecheck_goal.m"
    {
#line 730 "modecheck_goal.m"
      check_hlds__modecheck_goal__InitedThenVars_28 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_41_41, check_hlds__modecheck_goal__ThenVarsToInit_26);
    }
#line 731 "modecheck_goal.m"
    {
#line 731 "modecheck_goal.m"
      *check_hlds__modecheck_goal__Then_16 = check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(check_hlds__modecheck_goal__InitedThenVars_28, check_hlds__modecheck_goal__ThenInitCalls_27, check_hlds__modecheck_goal__Then0_15);
    }
#line 732 "modecheck_goal.m"
    {
#line 732 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_38_38 = parse_tree__prog_mode__any_inst_0_f_0();
    }
#line 732 "modecheck_goal.m"
    {
#line 732 "modecheck_goal.m"
      hlds__instmap__instmap_set_vars_same_4_p_0(check_hlds__modecheck_goal__V_38_38, check_hlds__modecheck_goal__ThenVarsToInit_26, check_hlds__modecheck_goal__ThenInstMap0_19, check_hlds__modecheck_goal__ThenInstMap_20);
    }
#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_58_58, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_58_58, 1) = ((MR_Box) (check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0_3));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_58_58, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_24));
#line 1656 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_58_58, 4) = ((MR_Box) (check_hlds__modecheck_goal__ElseInstMap0_21));
#line 1656 "modecheck_goal.m"
    }
#line 1656 "modecheck_goal.m"
    {
#line 1656 "modecheck_goal.m"
      check_hlds__modecheck_goal__ElseVarsToInit_29 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_58_58, check_hlds__modecheck_goal__EnsureInitialised_25);
    }
#line 736 "modecheck_goal.m"
    {
#line 736 "modecheck_goal.m"
      check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_goal__ElseVarsToInit_29, &check_hlds__modecheck_goal__ElseInitCalls_30, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33);
    }
#line 737 "modecheck_goal.m"
    {
#line 737 "modecheck_goal.m"
      check_hlds__modecheck_goal__InitedElseVars_31 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_41_41, check_hlds__modecheck_goal__ElseVarsToInit_29);
    }
#line 738 "modecheck_goal.m"
    {
#line 738 "modecheck_goal.m"
      *check_hlds__modecheck_goal__Else_18 = check_hlds__modecheck_goal__append_init_calls_to_goal_3_f_0(check_hlds__modecheck_goal__InitedElseVars_31, check_hlds__modecheck_goal__ElseInitCalls_30, check_hlds__modecheck_goal__Else0_17);
    }
#line 739 "modecheck_goal.m"
    {
#line 739 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_40_40 = parse_tree__prog_mode__any_inst_0_f_0();
    }
#line 739 "modecheck_goal.m"
    {
#line 739 "modecheck_goal.m"
      hlds__instmap__instmap_set_vars_same_4_p_0(check_hlds__modecheck_goal__V_40_40, check_hlds__modecheck_goal__ElseVarsToInit_29, check_hlds__modecheck_goal__ElseInstMap0_21, check_hlds__modecheck_goal__ElseInstMap_22);
#line 739 "modecheck_goal.m"
      return;
    }
#line 722 "modecheck_goal.m"
  }
#line 716 "modecheck_goal.m"
}

#line 658 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Vars_9,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Cond0_10,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Then0_11,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Else0_12,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
#line 658 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
#line 658 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_35,
#line 658 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36)
#line 658 "modecheck_goal.m"
{
#line 664 "modecheck_goal.m"
  {
#line 664 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_67_67;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__NonLocals_16;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ThenVars_17;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap0_18;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cond_19;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapCond_20;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Then1_21;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapThen1_22;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Else1_23;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapElse1_24;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__VarTypes_25;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Then_26;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Else_27;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapThen_28;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMapElse_29;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ThenElseArgInfos_30;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InstMap_31;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__InPromisePurityScope_32;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_46_46;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47_47;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_50_50;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_53_53;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_54_54;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_55_55;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_57_57;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60;
#line 664 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63_63;

#line 665 "modecheck_goal.m"
    {
#line 665 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 666 "modecheck_goal.m"
    {
#line 666 "modecheck_goal.m"
      check_hlds__modecheck_goal__NonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_13);
    }
#line 667 "modecheck_goal.m"
    {
#line 667 "modecheck_goal.m"
      check_hlds__modecheck_goal__ThenVars_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_goal__Then0_11);
    }
#line 668 "modecheck_goal.m"
    {
#line 668 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__InstMap0_18);
    }
#line 673 "modecheck_goal.m"
    {
#line 673 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 674 "modecheck_goal.m"
    {
#line 674 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_goal__ThenVars_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 675 "modecheck_goal.m"
    {
#line 675 "modecheck_goal.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Cond0_10, &check_hlds__modecheck_goal__Cond_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43);
    }
#line 676 "modecheck_goal.m"
    {
#line 676 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_goal__InstMapCond_20);
    }
#line 677 "modecheck_goal.m"
    {
#line 677 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_goal__ThenVars_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 678 "modecheck_goal.m"
    {
#line 678 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 679 "modecheck_goal.m"
    {
#line 679 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_goal__InstMapCond_20);
    }
#line 682 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 680 "modecheck_goal.m"
      {
#line 680 "modecheck_goal.m"
        {
#line 680 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Then0_11, &check_hlds__modecheck_goal__Then1_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47_47);
        }
#line 681 "modecheck_goal.m"
        {
#line 681 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_goal__InstMapThen1_22);
        }
#line 680 "modecheck_goal.m"
      }
#line 682 "modecheck_goal.m"
    else
#line 686 "modecheck_goal.m"
      {
#line 686 "modecheck_goal.m"
        {
#line 686 "modecheck_goal.m"
          check_hlds__modecheck_goal__Then1_21 = hlds__make_goal__true_goal_0_f_0();
        }
#line 687 "modecheck_goal.m"
        check_hlds__modecheck_goal__InstMapThen1_22 = check_hlds__modecheck_goal__InstMapCond_20;
#line 686 "modecheck_goal.m"
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_46_46;
#line 686 "modecheck_goal.m"
      }
#line 689 "modecheck_goal.m"
    {
#line 689 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 690 "modecheck_goal.m"
    {
#line 690 "modecheck_goal.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Else0_12, &check_hlds__modecheck_goal__Else1_23, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
    }
#line 691 "modecheck_goal.m"
    {
#line 691 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__InstMapElse1_24);
    }
#line 692 "modecheck_goal.m"
    {
#line 692 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__VarTypes_25);
    }
#line 8811 "check_hlds.modecheck_goal.c"
    check_hlds__modecheck_goal__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 693 "modecheck_goal.m"
    {
#line 693 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_67_67, check_hlds__modecheck_goal__NonLocals_16);
    }
#line 693 "modecheck_goal.m"
    {
#line 693 "modecheck_goal.m"
      check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_p_0(check_hlds__modecheck_goal__V_50_50, check_hlds__modecheck_goal__VarTypes_25, check_hlds__modecheck_goal__Then1_21, &check_hlds__modecheck_goal__Then_26, check_hlds__modecheck_goal__Else1_23, &check_hlds__modecheck_goal__Else_27, check_hlds__modecheck_goal__InstMapThen1_22, &check_hlds__modecheck_goal__InstMapThen_28, check_hlds__modecheck_goal__InstMapElse1_24, &check_hlds__modecheck_goal__InstMapElse_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51);
    }
#line 696 "modecheck_goal.m"
    {
#line 696 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52);
    }
#line 697 "modecheck_goal.m"
    {
#line 697 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_55_55, 0) = ((MR_Box) (check_hlds__modecheck_goal__Else_27));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "modecheck_goal.m"
    }
#line 697 "modecheck_goal.m"
    {
#line 697 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_53_53, 0) = ((MR_Box) (check_hlds__modecheck_goal__Then_26));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_55_55));
#line 697 "modecheck_goal.m"
    }
#line 697 "modecheck_goal.m"
    {
#line 697 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_57_57, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMapElse_29));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "modecheck_goal.m"
    }
#line 697 "modecheck_goal.m"
    {
#line 697 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_54_54, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMapThen_28));
#line 697 "modecheck_goal.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_54_54, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_57_57));
#line 697 "modecheck_goal.m"
    }
#line 697 "modecheck_goal.m"
    {
#line 697 "modecheck_goal.m"
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__V_53_53, check_hlds__modecheck_goal__V_54_54, &check_hlds__modecheck_goal__ThenElseArgInfos_30);
    }
#line 699 "modecheck_goal.m"
    {
#line 699 "modecheck_goal.m"
      hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__ThenElseArgInfos_30, (MR_Integer) 1, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60);
    }
#line 700 "modecheck_goal.m"
    {
#line 700 "modecheck_goal.m"
      MR_Word base;
#line 700 "modecheck_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 700 "modecheck_goal.m"
      *check_hlds__modecheck_goal__GoalExpr_14 = base;
#line 700 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 700 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Vars_9));
#line 700 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Cond_19));
#line 700 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Then_26));
#line 700 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__modecheck_goal__Else_27));
#line 700 "modecheck_goal.m"
    }
#line 701 "modecheck_goal.m"
    {
#line 701 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__InstMap_31);
    }
#line 702 "modecheck_goal.m"
    {
#line 702 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__InPromisePurityScope_32);
    }
#line 711 "modecheck_goal.m"
#line 711 "modecheck_goal.m"
    switch (check_hlds__modecheck_goal__InPromisePurityScope_32) {
#line 711 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 711 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 712 "modecheck_goal.m"
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63_63 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60;
#line 711 "modecheck_goal.m"
        break;
#line 711 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 704 "modecheck_goal.m"
        {
#line 704 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__CondNonLocals0_33;
#line 704 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__CondNonLocals_34;
#line 704 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__V_61_61;

#line 705 "modecheck_goal.m"
          {
#line 705 "modecheck_goal.m"
            check_hlds__modecheck_goal__CondNonLocals0_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_goal__Cond_19);
          }
#line 708 "modecheck_goal.m"
          {
#line 708 "modecheck_goal.m"
            check_hlds__modecheck_goal__V_61_61 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__modecheck_goal__TypeCtorInfo_67_67, check_hlds__modecheck_goal__CondNonLocals0_33, check_hlds__modecheck_goal__NonLocals_16);
          }
#line 707 "modecheck_goal.m"
          {
#line 707 "modecheck_goal.m"
            check_hlds__modecheck_goal__CondNonLocals_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_67_67, check_hlds__modecheck_goal__V_61_61);
          }
#line 709 "modecheck_goal.m"
          {
#line 709 "modecheck_goal.m"
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 0, check_hlds__modecheck_goal__CondNonLocals_34, check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__InstMap_31, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63_63);
          }
#line 704 "modecheck_goal.m"
        }
#line 711 "modecheck_goal.m"
        break;
#line 711 "modecheck_goal.m"
    }
#line 714 "modecheck_goal.m"
    {
#line 714 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63_63, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36);
#line 714 "modecheck_goal.m"
      return;
    }
#line 664 "modecheck_goal.m"
  }
#line 658 "modecheck_goal.m"
}

#line 643 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
#line 643 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
#line 643 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Case0_5,
#line 643 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Case_6)
#line 643 "modecheck_goal.m"
{
#line 647 "modecheck_goal.m"
  {
#line 647 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 647 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 0)));
#line 647 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 1)));
#line 647 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 2)));
#line 647 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Goal_10;

#line 649 "modecheck_goal.m"
    {
#line 649 "modecheck_goal.m"
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__Goal0_9, &check_hlds__modecheck_goal__Goal_10);
    }
#line 651 "modecheck_goal.m"
    {
#line 651 "modecheck_goal.m"
      MR_Word base;
#line 651 "modecheck_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 651 "modecheck_goal.m"
      *check_hlds__modecheck_goal__Case_6 = base;
#line 651 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainConsId_7));
#line 651 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__OtherConsIds_8));
#line 651 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Goal_10));
#line 651 "modecheck_goal.m"
    }
#line 647 "modecheck_goal.m"
  }
#line 643 "modecheck_goal.m"
}

#line 632 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
#line 632 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_1,
#line 632 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 632 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3)
#line 632 "modecheck_goal.m"
{
#line 635 "modecheck_goal.m"
  {
#line 635 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 635 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "modecheck_goal.m"
      *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "modecheck_goal.m"
    else
#line 637 "modecheck_goal.m"
      {
#line 637 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 637 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal_8;
#line 637 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals_9;

#line 638 "modecheck_goal.m"
        {
#line 638 "modecheck_goal.m"
          check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_1, check_hlds__modecheck_goal__Goal0_6, &check_hlds__modecheck_goal__Goal_8);
        }
#line 640 "modecheck_goal.m"
        {
#line 640 "modecheck_goal.m"
          check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_1, check_hlds__modecheck_goal__Goals0_7, &check_hlds__modecheck_goal__Goals_9);
        }
#line 637 "modecheck_goal.m"
        {
#line 637 "modecheck_goal.m"
          MR_Word base;
#line 637 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 637 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_8));
#line 637 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_9));
#line 637 "modecheck_goal.m"
        }
#line 637 "modecheck_goal.m"
      }
#line 635 "modecheck_goal.m"
  }
#line 632 "modecheck_goal.m"
}

#line 553 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
#line 553 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
#line 553 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal0_5,
#line 553 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Goal_6)
#line 553 "modecheck_goal.m"
{
#line 557 "modecheck_goal.m"
  {
#line 557 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 557 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 0)));
#line 557 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 1)));

#line 562 "modecheck_goal.m"
#line 562 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_7)) {
#line 562 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 562 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 576 "modecheck_goal.m"
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
        break;
#line 562 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 561 "modecheck_goal.m"
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
        break;
#line 562 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 566 "modecheck_goal.m"
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
        break;
#line 562 "modecheck_goal.m"
      case (MR_Integer) 3:
#line 562 "modecheck_goal.m"
#line 562 "modecheck_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 0)))) {
#line 562 "modecheck_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 562 "modecheck_goal.m"
          case (MR_Integer) 0:
#line 562 "modecheck_goal.m"
          case (MR_Integer) 1:
#line 566 "modecheck_goal.m"
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 2:
#line 562 "modecheck_goal.m"
            {
#line 562 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 2)));
#line 562 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 1)));

#line 562 "modecheck_goal.m"
#line 562 "modecheck_goal.m"
              switch (check_hlds__modecheck_goal__V_100_100) {
#line 562 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 562 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 576 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
                  break;
#line 562 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 617 "modecheck_goal.m"
                  {
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_98_98;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__Conjuncts_76;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__ChangedVars_77;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__GroundVars_78;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__V_82_82;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__InstMapDelta0_93;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__InstMapDelta_94;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__GoalInfo_95;
#line 617 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__GoalExpr_96;

#line 618 "modecheck_goal.m"
                    {
#line 618 "modecheck_goal.m"
                      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__V_99_99, &check_hlds__modecheck_goal__Conjuncts_76);
                    }
#line 620 "modecheck_goal.m"
                    {
#line 620 "modecheck_goal.m"
                      check_hlds__modecheck_goal__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 620 "modecheck_goal.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "modecheck_goal.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 1) = ((MR_Box) ((MR_Integer) 0));
#line 620 "modecheck_goal.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 2) = ((MR_Box) (check_hlds__modecheck_goal__Conjuncts_76));
#line 620 "modecheck_goal.m"
                    }
#line 622 "modecheck_goal.m"
                    {
#line 622 "modecheck_goal.m"
                      check_hlds__modecheck_goal__InstMapDelta0_93 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_8);
                    }
#line 623 "modecheck_goal.m"
                    {
#line 623 "modecheck_goal.m"
                      hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__modecheck_goal__InstMapDelta0_93, &check_hlds__modecheck_goal__ChangedVars_77);
                    }
#line 9210 "check_hlds.modecheck_goal.c"
                    check_hlds__modecheck_goal__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "modecheck_goal.m"
                    {
#line 624 "modecheck_goal.m"
                      parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_98_98, check_hlds__modecheck_goal__ChangedVars_77, check_hlds__modecheck_goal__LargeFlatConstructs_4, &check_hlds__modecheck_goal__GroundVars_78);
                    }
#line 626 "modecheck_goal.m"
                    {
#line 626 "modecheck_goal.m"
                      check_hlds__modecheck_goal__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_98_98, check_hlds__modecheck_goal__GroundVars_78);
                    }
#line 625 "modecheck_goal.m"
                    {
#line 625 "modecheck_goal.m"
                      hlds__instmap__instmap_delta_set_vars_same_4_p_0((MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2]), check_hlds__modecheck_goal__V_82_82, check_hlds__modecheck_goal__InstMapDelta0_93, &check_hlds__modecheck_goal__InstMapDelta_94);
                    }
#line 628 "modecheck_goal.m"
                    {
#line 628 "modecheck_goal.m"
                      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_94, check_hlds__modecheck_goal__GoalInfo0_8, &check_hlds__modecheck_goal__GoalInfo_95);
                    }
#line 629 "modecheck_goal.m"
                    {
#line 629 "modecheck_goal.m"
                      MR_Word base;
#line 629 "modecheck_goal.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = base;
#line 629 "modecheck_goal.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_96));
#line 629 "modecheck_goal.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_95));
#line 629 "modecheck_goal.m"
                    }
#line 617 "modecheck_goal.m"
                  }
#line 562 "modecheck_goal.m"
                  break;
#line 562 "modecheck_goal.m"
              }
#line 562 "modecheck_goal.m"
            }
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 3:
#line 576 "modecheck_goal.m"
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 4:
#line 576 "modecheck_goal.m"
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 5:
#line 578 "modecheck_goal.m"
            {
#line 578 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 1)));
#line 578 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 2)));

#line 599 "modecheck_goal.m"
#line 599 "modecheck_goal.m"
              switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_43)) {
#line 599 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 599 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 614 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                  break;
#line 599 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 614 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                  break;
#line 599 "modecheck_goal.m"
                case (MR_Integer) 2:
#line 614 "modecheck_goal.m"
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                  break;
#line 599 "modecheck_goal.m"
                case (MR_Integer) 3:
#line 599 "modecheck_goal.m"
#line 599 "modecheck_goal.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 0)))) {
#line 599 "modecheck_goal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 0:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 1:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 2:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 3:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 4:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 5:
#line 599 "modecheck_goal.m"
                      {
#line 599 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 2)));
#line 599 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 1)));

#line 599 "modecheck_goal.m"
#line 599 "modecheck_goal.m"
                        switch (check_hlds__modecheck_goal__V_101_101) {
#line 599 "modecheck_goal.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 599 "modecheck_goal.m"
                          case (MR_Integer) 1:
#line 596 "modecheck_goal.m"
                            {
#line 581 "modecheck_goal.m"
                              {
#line 581 "modecheck_goal.m"
                                check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__V_102_102);
                              }
#line 596 "modecheck_goal.m"
                              if (check_hlds__modecheck_goal__succeeded)
#line 582 "modecheck_goal.m"
                                {
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__InstMapDelta0_46;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__InstMapDelta_47;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__GoalInfo_48;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__SubGoalExpr0_49;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__SubGoalInfo0_50;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__SubGoalInfo_51;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__SubGoal_52;
#line 582 "modecheck_goal.m"
                                  MR_Word check_hlds__modecheck_goal__GoalExpr_53;

#line 582 "modecheck_goal.m"
                                  {
#line 582 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__InstMapDelta0_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_8);
                                  }
#line 583 "modecheck_goal.m"
                                  {
#line 583 "modecheck_goal.m"
                                    hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__modecheck_goal__V_102_102, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2]), check_hlds__modecheck_goal__InstMapDelta0_46, &check_hlds__modecheck_goal__InstMapDelta_47);
                                  }
#line 585 "modecheck_goal.m"
                                  {
#line 585 "modecheck_goal.m"
                                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_47, check_hlds__modecheck_goal__GoalInfo0_8, &check_hlds__modecheck_goal__GoalInfo_48);
                                  }
#line 587 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__SubGoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_44, (MR_Integer) 0)));
#line 587 "modecheck_goal.m"
                                  check_hlds__modecheck_goal__SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_44, (MR_Integer) 1)));
#line 588 "modecheck_goal.m"
                                  {
#line 588 "modecheck_goal.m"
                                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_47, check_hlds__modecheck_goal__SubGoalInfo0_50, &check_hlds__modecheck_goal__SubGoalInfo_51);
                                  }
#line 593 "modecheck_goal.m"
                                  {
#line 593 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__SubGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr0_49));
#line 593 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalInfo_51));
#line 593 "modecheck_goal.m"
                                  }
#line 594 "modecheck_goal.m"
                                  {
#line 594 "modecheck_goal.m"
                                    check_hlds__modecheck_goal__GoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 594 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 594 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_43));
#line 594 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_52));
#line 594 "modecheck_goal.m"
                                  }
#line 595 "modecheck_goal.m"
                                  {
#line 595 "modecheck_goal.m"
                                    MR_Word base;
#line 595 "modecheck_goal.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "modecheck_goal.m"
                                    *check_hlds__modecheck_goal__Goal_6 = base;
#line 595 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_53));
#line 595 "modecheck_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_48));
#line 595 "modecheck_goal.m"
                                  }
#line 582 "modecheck_goal.m"
                                }
#line 596 "modecheck_goal.m"
                              else
#line 597 "modecheck_goal.m"
                                *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 596 "modecheck_goal.m"
                            }
#line 599 "modecheck_goal.m"
                            break;
#line 599 "modecheck_goal.m"
                          case (MR_Integer) 2:
#line 614 "modecheck_goal.m"
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                            break;
#line 599 "modecheck_goal.m"
                          case (MR_Integer) 0:
#line 614 "modecheck_goal.m"
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                            break;
#line 599 "modecheck_goal.m"
                          case (MR_Integer) 3:
#line 614 "modecheck_goal.m"
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                            break;
#line 599 "modecheck_goal.m"
                        }
#line 599 "modecheck_goal.m"
                      }
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 6:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                    case (MR_Integer) 7:
#line 614 "modecheck_goal.m"
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 599 "modecheck_goal.m"
                      break;
#line 599 "modecheck_goal.m"
                  }
#line 599 "modecheck_goal.m"
                  break;
#line 599 "modecheck_goal.m"
              }
#line 578 "modecheck_goal.m"
            }
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 6:
#line 576 "modecheck_goal.m"
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
          case (MR_Integer) 7:
#line 576 "modecheck_goal.m"
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
#line 562 "modecheck_goal.m"
            break;
#line 562 "modecheck_goal.m"
        }
#line 562 "modecheck_goal.m"
        break;
#line 562 "modecheck_goal.m"
    }
#line 557 "modecheck_goal.m"
  }
#line 553 "modecheck_goal.m"
}

#line 544 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
#line 544 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 544 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2,
#line 544 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3)
#line 544 "modecheck_goal.m"
{
#line 547 "modecheck_goal.m"
  while (MR_TRUE)
#line 547 "modecheck_goal.m"
    {
#line 547 "modecheck_goal.m"
      /* tailcall optimized into a loop */
#line 547 "modecheck_goal.m"
      {
#line 547 "modecheck_goal.m"
        MR_bool check_hlds__modecheck_goal__succeeded;

#line 547 "modecheck_goal.m"
        if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "modecheck_goal.m"
          *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2;
#line 547 "modecheck_goal.m"
        else
#line 548 "modecheck_goal.m"
          {
#line 548 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 548 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 548 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_10;
#line 548 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13;

#line 549 "modecheck_goal.m"
            {
#line 549 "modecheck_goal.m"
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_10 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_7);
            }
#line 550 "modecheck_goal.m"
            {
#line 550 "modecheck_goal.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_10, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13);
            }
#line 551 "modecheck_goal.m"
            /* direct tailcall eliminated */
#line 551 "modecheck_goal.m"
            {
#line 551 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_goal__Goals_8;
#line 551 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0__tmp_copy_2 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13;

#line 551 "modecheck_goal.m"
              check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0__tmp_copy_2;
#line 551 "modecheck_goal.m"
              check_hlds__modecheck_goal__HeadVar__1_1 = check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1;
#line 551 "modecheck_goal.m"
            }
#line 551 "modecheck_goal.m"
            continue;
#line 548 "modecheck_goal.m"
          }
#line 547 "modecheck_goal.m"
      }
#line 547 "modecheck_goal.m"
      break;
#line 547 "modecheck_goal.m"
    }
#line 544 "modecheck_goal.m"
}

#line 492 "modecheck_goal.m"
static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
#line 492 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal_3)
#line 492 "modecheck_goal.m"
{
#line 494 "modecheck_goal.m"
  {
#line 494 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 494 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4;
#line 494 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_3, (MR_Integer) 0)));
#line 495 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_3, (MR_Integer) 1)));

#line 501 "modecheck_goal.m"
#line 501 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_5)) {
#line 501 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 501 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 514 "modecheck_goal.m"
        {
#line 515 "modecheck_goal.m"
          {
#line 515 "modecheck_goal.m"
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 514 "modecheck_goal.m"
        }
#line 501 "modecheck_goal.m"
        break;
#line 501 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 497 "modecheck_goal.m"
        {
#line 500 "modecheck_goal.m"
          {
#line 500 "modecheck_goal.m"
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 497 "modecheck_goal.m"
        }
#line 501 "modecheck_goal.m"
        break;
#line 501 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 505 "modecheck_goal.m"
        {
#line 506 "modecheck_goal.m"
          {
#line 506 "modecheck_goal.m"
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 505 "modecheck_goal.m"
        }
#line 501 "modecheck_goal.m"
        break;
#line 501 "modecheck_goal.m"
      case (MR_Integer) 3:
#line 501 "modecheck_goal.m"
#line 501 "modecheck_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 0)))) {
#line 501 "modecheck_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 501 "modecheck_goal.m"
          case (MR_Integer) 0:
#line 501 "modecheck_goal.m"
          case (MR_Integer) 1:
#line 505 "modecheck_goal.m"
            {
#line 506 "modecheck_goal.m"
              {
#line 506 "modecheck_goal.m"
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 505 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 2:
#line 501 "modecheck_goal.m"
            {
#line 501 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 2)));
#line 501 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 1)));

#line 501 "modecheck_goal.m"
#line 501 "modecheck_goal.m"
              switch (check_hlds__modecheck_goal__V_98_98) {
#line 501 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 501 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 514 "modecheck_goal.m"
                  {
#line 515 "modecheck_goal.m"
                    {
#line 515 "modecheck_goal.m"
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
#line 514 "modecheck_goal.m"
                  }
#line 501 "modecheck_goal.m"
                  break;
#line 501 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 539 "modecheck_goal.m"
                  {
#line 539 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__V_67_67;

#line 541 "modecheck_goal.m"
                    {
#line 541 "modecheck_goal.m"
                      check_hlds__modecheck_goal__V_67_67 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
#line 540 "modecheck_goal.m"
                    {
#line 540 "modecheck_goal.m"
                      check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(check_hlds__modecheck_goal__V_97_97, check_hlds__modecheck_goal__V_67_67, &check_hlds__modecheck_goal__LargeFlatConstructs_4);
                    }
#line 539 "modecheck_goal.m"
                  }
#line 501 "modecheck_goal.m"
                  break;
#line 501 "modecheck_goal.m"
              }
#line 501 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 3:
#line 514 "modecheck_goal.m"
            {
#line 515 "modecheck_goal.m"
              {
#line 515 "modecheck_goal.m"
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 514 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 4:
#line 514 "modecheck_goal.m"
            {
#line 515 "modecheck_goal.m"
              {
#line 515 "modecheck_goal.m"
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 514 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 5:
#line 517 "modecheck_goal.m"
            {
#line 517 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 1)));
#line 517 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 2)));

#line 521 "modecheck_goal.m"
#line 521 "modecheck_goal.m"
              switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_41)) {
#line 521 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 521 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 535 "modecheck_goal.m"
                  {
#line 536 "modecheck_goal.m"
                    {
#line 536 "modecheck_goal.m"
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
#line 535 "modecheck_goal.m"
                  }
#line 521 "modecheck_goal.m"
                  break;
#line 521 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 535 "modecheck_goal.m"
                  {
#line 536 "modecheck_goal.m"
                    {
#line 536 "modecheck_goal.m"
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
#line 535 "modecheck_goal.m"
                  }
#line 521 "modecheck_goal.m"
                  break;
#line 521 "modecheck_goal.m"
                case (MR_Integer) 2:
#line 535 "modecheck_goal.m"
                  {
#line 536 "modecheck_goal.m"
                    {
#line 536 "modecheck_goal.m"
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
#line 535 "modecheck_goal.m"
                  }
#line 521 "modecheck_goal.m"
                  break;
#line 521 "modecheck_goal.m"
                case (MR_Integer) 3:
#line 521 "modecheck_goal.m"
#line 521 "modecheck_goal.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 0)))) {
#line 521 "modecheck_goal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 0:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 1:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 2:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 3:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 4:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 5:
#line 521 "modecheck_goal.m"
                      {
#line 521 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 2)));
#line 521 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 1)));

#line 521 "modecheck_goal.m"
#line 521 "modecheck_goal.m"
                        switch (check_hlds__modecheck_goal__V_99_99) {
#line 521 "modecheck_goal.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 521 "modecheck_goal.m"
                          case (MR_Integer) 1:
#line 519 "modecheck_goal.m"
                            {
#line 520 "modecheck_goal.m"
                              {
#line 520 "modecheck_goal.m"
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__V_100_100);
                              }
#line 519 "modecheck_goal.m"
                            }
#line 521 "modecheck_goal.m"
                            break;
#line 521 "modecheck_goal.m"
                          case (MR_Integer) 2:
#line 535 "modecheck_goal.m"
                            {
#line 536 "modecheck_goal.m"
                              {
#line 536 "modecheck_goal.m"
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
#line 535 "modecheck_goal.m"
                            }
#line 521 "modecheck_goal.m"
                            break;
#line 521 "modecheck_goal.m"
                          case (MR_Integer) 0:
#line 535 "modecheck_goal.m"
                            {
#line 536 "modecheck_goal.m"
                              {
#line 536 "modecheck_goal.m"
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
#line 535 "modecheck_goal.m"
                            }
#line 521 "modecheck_goal.m"
                            break;
#line 521 "modecheck_goal.m"
                          case (MR_Integer) 3:
#line 535 "modecheck_goal.m"
                            {
#line 536 "modecheck_goal.m"
                              {
#line 536 "modecheck_goal.m"
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
#line 535 "modecheck_goal.m"
                            }
#line 521 "modecheck_goal.m"
                            break;
#line 521 "modecheck_goal.m"
                        }
#line 521 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 6:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                    case (MR_Integer) 7:
#line 535 "modecheck_goal.m"
                      {
#line 536 "modecheck_goal.m"
                        {
#line 536 "modecheck_goal.m"
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
#line 535 "modecheck_goal.m"
                      }
#line 521 "modecheck_goal.m"
                      break;
#line 521 "modecheck_goal.m"
                  }
#line 521 "modecheck_goal.m"
                  break;
#line 521 "modecheck_goal.m"
              }
#line 517 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 6:
#line 514 "modecheck_goal.m"
            {
#line 515 "modecheck_goal.m"
              {
#line 515 "modecheck_goal.m"
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 514 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
          case (MR_Integer) 7:
#line 514 "modecheck_goal.m"
            {
#line 515 "modecheck_goal.m"
              {
#line 515 "modecheck_goal.m"
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 514 "modecheck_goal.m"
            }
#line 501 "modecheck_goal.m"
            break;
#line 501 "modecheck_goal.m"
        }
#line 501 "modecheck_goal.m"
        break;
#line 501 "modecheck_goal.m"
    }
#line 494 "modecheck_goal.m"
    return check_hlds__modecheck_goal__LargeFlatConstructs_4;
#line 494 "modecheck_goal.m"
  }
#line 492 "modecheck_goal.m"
}

#line 413 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_8_p_0(
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6,
#line 413 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7,
#line 413 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8)
#line 413 "modecheck_goal.m"
{
#line 417 "modecheck_goal.m"
  {
#line 417 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 417 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "modecheck_goal.m"
      {
#line 417 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7;
#line 417 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5;
#line 417 "modecheck_goal.m"
      }
#line 417 "modecheck_goal.m"
    else
#line 419 "modecheck_goal.m"
      {
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Case_19;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Cases_20;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap_21;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_22;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 0)));
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 1)));
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 2)));
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap0_28;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap1_29;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal1_30;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal_31;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38;
#line 419 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;

#line 421 "modecheck_goal.m"
        {
#line 421 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_goal__InstMap0_28);
        }
#line 425 "modecheck_goal.m"
        {
#line 425 "modecheck_goal.m"
          check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modecheck_goal__HeadVar__2_2, check_hlds__modecheck_goal__MainConsId_25, check_hlds__modecheck_goal__OtherConsIds_26, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
        }
#line 428 "modecheck_goal.m"
        {
#line 428 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__InstMap1_29);
        }
#line 429 "modecheck_goal.m"
        {
#line 429 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_goal__InstMap1_29);
        }
#line 432 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 430 "modecheck_goal.m"
          {
#line 430 "modecheck_goal.m"
            {
#line 430 "modecheck_goal.m"
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_27, &check_hlds__modecheck_goal__Goal1_30, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
            }
#line 431 "modecheck_goal.m"
            {
#line 431 "modecheck_goal.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__InstMap_21);
            }
#line 430 "modecheck_goal.m"
          }
#line 432 "modecheck_goal.m"
        else
#line 436 "modecheck_goal.m"
          {
#line 436 "modecheck_goal.m"
            {
#line 436 "modecheck_goal.m"
              check_hlds__modecheck_goal__Goal1_30 = hlds__make_goal__true_goal_0_f_0();
            }
#line 437 "modecheck_goal.m"
            check_hlds__modecheck_goal__InstMap_21 = check_hlds__modecheck_goal__InstMap1_29;
#line 436 "modecheck_goal.m"
            check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
#line 436 "modecheck_goal.m"
          }
#line 441 "modecheck_goal.m"
        {
#line 441 "modecheck_goal.m"
          check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modecheck_goal__HeadVar__2_2, check_hlds__modecheck_goal__InstMap0_28, check_hlds__modecheck_goal__InstMap_21, check_hlds__modecheck_goal__Goal1_30, &check_hlds__modecheck_goal__Goal_31);
        }
#line 443 "modecheck_goal.m"
        {
#line 443 "modecheck_goal.m"
          check_hlds__modecheck_goal__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 443 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainConsId_25));
#line 443 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 1) = ((MR_Box) (check_hlds__modecheck_goal__OtherConsIds_26));
#line 443 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 2) = ((MR_Box) (check_hlds__modecheck_goal__Goal_31));
#line 443 "modecheck_goal.m"
        }
#line 483 "modecheck_goal.m"
        {
#line 483 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5);
        }
#line 487 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 487 "modecheck_goal.m"
          check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5;
#line 487 "modecheck_goal.m"
        else
#line 488 "modecheck_goal.m"
          {
#line 488 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_46;

#line 488 "modecheck_goal.m"
            {
#line 488 "modecheck_goal.m"
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_46 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_31);
            }
#line 489 "modecheck_goal.m"
            {
#line 489 "modecheck_goal.m"
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_46, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38);
            }
#line 488 "modecheck_goal.m"
          }
#line 445 "modecheck_goal.m"
        {
#line 445 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
        }
#line 446 "modecheck_goal.m"
        {
#line 446 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_case_list_8_p_0(check_hlds__modecheck_goal__Cases0_17, check_hlds__modecheck_goal__HeadVar__2_2, &check_hlds__modecheck_goal__Cases_20, &check_hlds__modecheck_goal__InstMaps_22, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8);
        }
#line 418 "modecheck_goal.m"
        {
#line 418 "modecheck_goal.m"
          MR_Word base;
#line 418 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 418 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Case_19));
#line 418 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Cases_20));
#line 418 "modecheck_goal.m"
        }
#line 419 "modecheck_goal.m"
        {
#line 419 "modecheck_goal.m"
          MR_Word base;
#line 419 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__4_4 = base;
#line 419 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_21));
#line 419 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_22));
#line 419 "modecheck_goal.m"
        }
#line 419 "modecheck_goal.m"
      }
#line 417 "modecheck_goal.m"
  }
#line 413 "modecheck_goal.m"
}

#line 466 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
#line 466 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 466 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 466 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
#line 466 "modecheck_goal.m"
{
#line 466 "modecheck_goal.m"
  {
#line 466 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 466 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv1_HeadVar__4_4;

#line 466 "modecheck_goal.m"
    {
#line 466 "modecheck_goal.m"
      hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv1_HeadVar__4_4);
    }
#line 466 "modecheck_goal.m"
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv1_HeadVar__4_4));
#line 466 "modecheck_goal.m"
  }
#line 466 "modecheck_goal.m"
}

#line 461 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
#line 461 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 461 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 461 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
#line 461 "modecheck_goal.m"
{
#line 461 "modecheck_goal.m"
  {
#line 461 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 461 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv0_Case_6;

#line 461 "modecheck_goal.m"
    {
#line 461 "modecheck_goal.m"
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv0_Case_6);
    }
#line 461 "modecheck_goal.m"
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_Case_6));
#line 461 "modecheck_goal.m"
  }
#line 461 "modecheck_goal.m"
}

#line 389 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Var_8,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__CanFail_9,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Cases0_10,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
#line 389 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
#line 389 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22,
#line 389 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23)
#line 389 "modecheck_goal.m"
{
#line 393 "modecheck_goal.m"
  {
#line 393 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 393 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Cases_14;
#line 393 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26;
#line 393 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;

#line 394 "modecheck_goal.m"
    {
#line 394 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26);
    }
#line 400 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__Cases0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "modecheck_goal.m"
      {
#line 396 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap_15;

#line 397 "modecheck_goal.m"
        check_hlds__modecheck_goal__Cases_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "modecheck_goal.m"
        {
#line 398 "modecheck_goal.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__InstMap_15);
        }
#line 399 "modecheck_goal.m"
        {
#line 399 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_15, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 396 "modecheck_goal.m"
      }
#line 400 "modecheck_goal.m"
    else
#line 403 "modecheck_goal.m"
      {
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__NonLocals_18;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Cases1_19;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_20;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_21;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_41;
#line 403 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__ArmInstMaps_43;

#line 404 "modecheck_goal.m"
        {
#line 404 "modecheck_goal.m"
          check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_11);
        }
#line 405 "modecheck_goal.m"
        {
#line 405 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_case_list_8_p_0(check_hlds__modecheck_goal__Cases0_10, check_hlds__modecheck_goal__Var_8, &check_hlds__modecheck_goal__Cases1_19, &check_hlds__modecheck_goal__InstMaps_20, check_hlds__modecheck_goal__NonLocals_18, &check_hlds__modecheck_goal__LargeFlatConstructs_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
        }
#line 455 "modecheck_goal.m"
        {
#line 455 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_21);
        }
#line 458 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 456 "modecheck_goal.m"
          {
#line 456 "modecheck_goal.m"
            check_hlds__modecheck_goal__Cases_14 = check_hlds__modecheck_goal__Cases1_19;
#line 457 "modecheck_goal.m"
            check_hlds__modecheck_goal__InstMaps_41 = check_hlds__modecheck_goal__InstMaps_20;
#line 456 "modecheck_goal.m"
          }
#line 458 "modecheck_goal.m"
        else
#line 462 "modecheck_goal.m"
          {
#line 462 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_29_54;
#line 462 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_33_58;
#line 462 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__LargeFlatConstructList_42;
#line 462 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_44_44;
#line 462 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_45_45;

#line 461 "modecheck_goal.m"
            {
#line 461 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[1]));
#line 461 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1));
#line 461 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 3) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructs_21));
#line 461 "modecheck_goal.m"
            }
#line 10442 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeCtorInfo_29_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 460 "modecheck_goal.m"
            {
#line 460 "modecheck_goal.m"
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_29_54, check_hlds__modecheck_goal__TypeCtorInfo_29_54, check_hlds__modecheck_goal__V_44_44, check_hlds__modecheck_goal__Cases1_19, &check_hlds__modecheck_goal__Cases_14);
            }
#line 463 "modecheck_goal.m"
            {
#line 463 "modecheck_goal.m"
              check_hlds__modecheck_goal__LargeFlatConstructList_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_21);
            }
#line 466 "modecheck_goal.m"
            {
#line 466 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 466 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[1]));
#line 466 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2));
#line 466 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2])));
#line 466 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 4) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructList_42));
#line 466 "modecheck_goal.m"
            }
#line 10470 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeCtorInfo_33_58 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 465 "modecheck_goal.m"
            {
#line 465 "modecheck_goal.m"
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_33_58, check_hlds__modecheck_goal__TypeCtorInfo_33_58, check_hlds__modecheck_goal__V_45_45, check_hlds__modecheck_goal__InstMaps_20, &check_hlds__modecheck_goal__InstMaps_41);
            }
#line 462 "modecheck_goal.m"
          }
#line 470 "modecheck_goal.m"
        {
#line 470 "modecheck_goal.m"
          hlds__instmap__make_arm_instmaps_for_cases_3_p_0(check_hlds__modecheck_goal__Cases_14, check_hlds__modecheck_goal__InstMaps_41, &check_hlds__modecheck_goal__ArmInstMaps_43);
        }
#line 471 "modecheck_goal.m"
        {
#line 471 "modecheck_goal.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__ArmInstMaps_43, (MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 403 "modecheck_goal.m"
      }
#line 410 "modecheck_goal.m"
    {
#line 410 "modecheck_goal.m"
      MR_Word base;
#line 410 "modecheck_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "modecheck_goal.m"
      *check_hlds__modecheck_goal__GoalExpr_12 = base;
#line 410 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 410 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Var_8));
#line 410 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__CanFail_9));
#line 410 "modecheck_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Cases_14));
#line 410 "modecheck_goal.m"
    }
#line 411 "modecheck_goal.m"
    {
#line 411 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23);
#line 411 "modecheck_goal.m"
      return;
    }
#line 393 "modecheck_goal.m"
  }
#line 389 "modecheck_goal.m"
}

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1601 "modecheck_goal.m"
{
#line 1601 "modecheck_goal.m"
  {
#line 1601 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1601 "modecheck_goal.m"
    {
#line 1601 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1601 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
  }
#line 1601 "modecheck_goal.m"
}

#line 371 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0(
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__NonLocals_9,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__VarTypes_10,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Disjs0_11,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Disjs_12,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__InstMaps0_13,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__InstMaps_14,
#line 371 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_18,
#line 371 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19)
#line 371 "modecheck_goal.m"
{
#line 377 "modecheck_goal.m"
  {
#line 377 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 377 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__ModuleInfo_16;
#line 377 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__EnsureInitialised_17;
#line 377 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_25_25;

#line 378 "modecheck_goal.m"
    {
#line 378 "modecheck_goal.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modecheck_goal__ModuleInfo_16);
    }
#line 1601 "modecheck_goal.m"
    {
#line 1601 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[0]));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_p_0_1));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 3) = ((MR_Box) (check_hlds__modecheck_goal__VarTypes_10));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 4) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_16));
#line 1601 "modecheck_goal.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 5) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps0_13));
#line 1601 "modecheck_goal.m"
    }
#line 1600 "modecheck_goal.m"
    {
#line 1600 "modecheck_goal.m"
      check_hlds__modecheck_goal__EnsureInitialised_17 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_25_25, check_hlds__modecheck_goal__NonLocals_9);
    }
#line 381 "modecheck_goal.m"
    {
#line 381 "modecheck_goal.m"
      check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0(check_hlds__modecheck_goal__Disjs0_11, check_hlds__modecheck_goal__Disjs_12, check_hlds__modecheck_goal__InstMaps0_13, check_hlds__modecheck_goal__InstMaps_14, check_hlds__modecheck_goal__EnsureInitialised_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19);
#line 381 "modecheck_goal.m"
      return;
    }
#line 377 "modecheck_goal.m"
  }
#line 371 "modecheck_goal.m"
}

#line 313 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5,
#line 313 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
#line 313 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7)
#line 313 "modecheck_goal.m"
{
#line 317 "modecheck_goal.m"
  {
#line 317 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 317 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "modecheck_goal.m"
      {
#line 317 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "modecheck_goal.m"
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6;
#line 317 "modecheck_goal.m"
        *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4;
#line 317 "modecheck_goal.m"
      }
#line 317 "modecheck_goal.m"
    else
#line 319 "modecheck_goal.m"
      {
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goal_16;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Goals_17;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap_18;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_19;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap0_22;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28;
#line 319 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;

#line 320 "modecheck_goal.m"
        {
#line 320 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__InstMap0_22);
        }
#line 321 "modecheck_goal.m"
        {
#line 321 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_14, &check_hlds__modecheck_goal__Goal_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
        }
#line 483 "modecheck_goal.m"
        {
#line 483 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4);
        }
#line 487 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 487 "modecheck_goal.m"
          check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4;
#line 487 "modecheck_goal.m"
        else
#line 488 "modecheck_goal.m"
          {
#line 488 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_36;

#line 488 "modecheck_goal.m"
            {
#line 488 "modecheck_goal.m"
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_36 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_16);
            }
#line 489 "modecheck_goal.m"
            {
#line 489 "modecheck_goal.m"
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_36, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28);
            }
#line 488 "modecheck_goal.m"
          }
#line 323 "modecheck_goal.m"
        {
#line 323 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__InstMap_18);
        }
#line 324 "modecheck_goal.m"
        {
#line 324 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 325 "modecheck_goal.m"
        {
#line 325 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(check_hlds__modecheck_goal__Goals0_15, &check_hlds__modecheck_goal__Goals_17, &check_hlds__modecheck_goal__InstMaps_19, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);
        }
#line 318 "modecheck_goal.m"
        {
#line 318 "modecheck_goal.m"
          MR_Word base;
#line 318 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
#line 318 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_16));
#line 318 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_17));
#line 318 "modecheck_goal.m"
        }
#line 318 "modecheck_goal.m"
        {
#line 318 "modecheck_goal.m"
          MR_Word base;
#line 318 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "modecheck_goal.m"
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
#line 318 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_18));
#line 318 "modecheck_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_19));
#line 318 "modecheck_goal.m"
        }
#line 319 "modecheck_goal.m"
      }
#line 317 "modecheck_goal.m"
  }
#line 313 "modecheck_goal.m"
}

#line 361 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_3(
#line 361 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 361 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 361 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
#line 361 "modecheck_goal.m"
{
#line 361 "modecheck_goal.m"
  {
#line 361 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 361 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv1_HeadVar__4_4;

#line 361 "modecheck_goal.m"
    {
#line 361 "modecheck_goal.m"
      hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv1_HeadVar__4_4);
    }
#line 361 "modecheck_goal.m"
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv1_HeadVar__4_4));
#line 361 "modecheck_goal.m"
  }
#line 361 "modecheck_goal.m"
}

#line 356 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
#line 356 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 356 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
#line 356 "modecheck_goal.m"
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
#line 356 "modecheck_goal.m"
{
#line 356 "modecheck_goal.m"
  {
#line 356 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
#line 356 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__conv0_Goal_6;

#line 356 "modecheck_goal.m"
    {
#line 356 "modecheck_goal.m"
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv0_Goal_6);
    }
#line 356 "modecheck_goal.m"
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_Goal_6));
#line 356 "modecheck_goal.m"
  }
#line 356 "modecheck_goal.m"
}

#line 1601 "modecheck_goal.m"
static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__closure_arg,
#line 1601 "modecheck_goal.m"
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
#line 1601 "modecheck_goal.m"
{
#line 1601 "modecheck_goal.m"
  {
#line 1601 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

#line 1601 "modecheck_goal.m"
    {
#line 1601 "modecheck_goal.m"
      return check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__solver_var_must_be_initialised_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
#line 1601 "modecheck_goal.m"
    return check_hlds__modecheck_goal__succeeded;
#line 1601 "modecheck_goal.m"
  }
#line 1601 "modecheck_goal.m"
}

#line 277 "modecheck_goal.m"
static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Disjuncts0_6,
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 277 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 277 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_23,
#line 277 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24)
#line 277 "modecheck_goal.m"
{
#line 280 "modecheck_goal.m"
  {
#line 280 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 280 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
#line 280 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33;

#line 281 "modecheck_goal.m"
    {
#line 281 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 287 "modecheck_goal.m"
    if ((check_hlds__modecheck_goal__Disjuncts0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "modecheck_goal.m"
      {
#line 283 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap_10;

#line 284 "modecheck_goal.m"
        {
#line 284 "modecheck_goal.m"
          MR_Word base;
#line 284 "modecheck_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "modecheck_goal.m"
          *check_hlds__modecheck_goal__GoalExpr_8 = base;
#line 284 "modecheck_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 284 "modecheck_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Disjuncts0_6));
#line 284 "modecheck_goal.m"
        }
#line 285 "modecheck_goal.m"
        {
#line 285 "modecheck_goal.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__InstMap_10);
        }
#line 286 "modecheck_goal.m"
        {
#line 286 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 283 "modecheck_goal.m"
      }
#line 287 "modecheck_goal.m"
    else
#line 290 "modecheck_goal.m"
      {
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__NonLocals_13;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Disjuncts1_14;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps0_15;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_16;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Disjuncts2_18;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_19;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Disjuncts3_20;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__Disjuncts_21;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__V_32_32;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMaps_65;
#line 290 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__ArmInstMaps_67;
#line 309 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal___GoalInfo_22;

#line 291 "modecheck_goal.m"
        {
#line 291 "modecheck_goal.m"
          check_hlds__modecheck_goal__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
        }
#line 292 "modecheck_goal.m"
        {
#line 292 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(check_hlds__modecheck_goal__Disjuncts0_6, &check_hlds__modecheck_goal__Disjuncts1_14, &check_hlds__modecheck_goal__InstMaps0_15, check_hlds__modecheck_goal__NonLocals_13, &check_hlds__modecheck_goal__LargeFlatConstructs_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 294 "modecheck_goal.m"
        {
#line 294 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 299 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 295 "modecheck_goal.m"
          {
#line 295 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__VarTypes_17;
#line 295 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_29_29;
#line 295 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__ModuleInfo_47;
#line 295 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__EnsureInitialised_48;
#line 295 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_54_54;

#line 295 "modecheck_goal.m"
            {
#line 295 "modecheck_goal.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modecheck_goal__VarTypes_17);
            }
#line 296 "modecheck_goal.m"
            {
#line 296 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NonLocals_13);
            }
#line 378 "modecheck_goal.m"
            {
#line 378 "modecheck_goal.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modecheck_goal__ModuleInfo_47);
            }
#line 1601 "modecheck_goal.m"
            {
#line 1601 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[0]));
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1));
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 3) = ((MR_Box) (check_hlds__modecheck_goal__VarTypes_17));
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 4) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_47));
#line 1601 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_54_54, 5) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps0_15));
#line 1601 "modecheck_goal.m"
            }
#line 1600 "modecheck_goal.m"
            {
#line 1600 "modecheck_goal.m"
              check_hlds__modecheck_goal__EnsureInitialised_48 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], check_hlds__modecheck_goal__V_54_54, check_hlds__modecheck_goal__V_29_29);
            }
#line 381 "modecheck_goal.m"
            {
#line 381 "modecheck_goal.m"
              check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_p_0(check_hlds__modecheck_goal__Disjuncts1_14, &check_hlds__modecheck_goal__Disjuncts2_18, check_hlds__modecheck_goal__InstMaps0_15, &check_hlds__modecheck_goal__InstMaps_19, check_hlds__modecheck_goal__EnsureInitialised_48, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30);
            }
#line 295 "modecheck_goal.m"
          }
#line 299 "modecheck_goal.m"
        else
#line 300 "modecheck_goal.m"
          {
#line 300 "modecheck_goal.m"
            check_hlds__modecheck_goal__InstMaps_19 = check_hlds__modecheck_goal__InstMaps0_15;
#line 301 "modecheck_goal.m"
            check_hlds__modecheck_goal__Disjuncts2_18 = check_hlds__modecheck_goal__Disjuncts1_14;
#line 300 "modecheck_goal.m"
            check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28;
#line 300 "modecheck_goal.m"
          }
#line 334 "modecheck_goal.m"
        {
#line 334 "modecheck_goal.m"
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_16);
        }
#line 337 "modecheck_goal.m"
        if (check_hlds__modecheck_goal__succeeded)
#line 335 "modecheck_goal.m"
          {
#line 335 "modecheck_goal.m"
            check_hlds__modecheck_goal__Disjuncts3_20 = check_hlds__modecheck_goal__Disjuncts2_18;
#line 336 "modecheck_goal.m"
            check_hlds__modecheck_goal__InstMaps_65 = check_hlds__modecheck_goal__InstMaps_19;
#line 335 "modecheck_goal.m"
          }
#line 337 "modecheck_goal.m"
        else
#line 357 "modecheck_goal.m"
          {
#line 357 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_29_78;
#line 357 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_33_82;
#line 357 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__LargeFlatConstructList_66;
#line 357 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_68_68;
#line 357 "modecheck_goal.m"
            MR_Word check_hlds__modecheck_goal__V_69_69;

#line 356 "modecheck_goal.m"
            {
#line 356 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[0]));
#line 356 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2));
#line 356 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 3) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructs_16));
#line 356 "modecheck_goal.m"
            }
#line 11086 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeCtorInfo_29_78 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 355 "modecheck_goal.m"
            {
#line 355 "modecheck_goal.m"
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_29_78, check_hlds__modecheck_goal__TypeCtorInfo_29_78, check_hlds__modecheck_goal__V_68_68, check_hlds__modecheck_goal__Disjuncts2_18, &check_hlds__modecheck_goal__Disjuncts3_20);
            }
#line 358 "modecheck_goal.m"
            {
#line 358 "modecheck_goal.m"
              check_hlds__modecheck_goal__LargeFlatConstructList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_16);
            }
#line 361 "modecheck_goal.m"
            {
#line 361 "modecheck_goal.m"
              check_hlds__modecheck_goal__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 361 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_69_69, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[1]));
#line 361 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_69_69, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_3));
#line 361 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 361 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_69_69, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2])));
#line 361 "modecheck_goal.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_69_69, 4) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructList_66));
#line 361 "modecheck_goal.m"
            }
#line 11114 "check_hlds.modecheck_goal.c"
            check_hlds__modecheck_goal__TypeCtorInfo_33_82 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 360 "modecheck_goal.m"
            {
#line 360 "modecheck_goal.m"
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_33_82, check_hlds__modecheck_goal__TypeCtorInfo_33_82, check_hlds__modecheck_goal__V_69_69, check_hlds__modecheck_goal__InstMaps_19, &check_hlds__modecheck_goal__InstMaps_65);
            }
#line 357 "modecheck_goal.m"
          }
#line 365 "modecheck_goal.m"
        {
#line 365 "modecheck_goal.m"
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__Disjuncts3_20, check_hlds__modecheck_goal__InstMaps_65, &check_hlds__modecheck_goal__ArmInstMaps_67);
        }
#line 366 "modecheck_goal.m"
        {
#line 366 "modecheck_goal.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_13, check_hlds__modecheck_goal__ArmInstMaps_67, (MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 308 "modecheck_goal.m"
        {
#line 308 "modecheck_goal.m"
          hlds__goal_util__flatten_disj_2_p_0(check_hlds__modecheck_goal__Disjuncts3_20, &check_hlds__modecheck_goal__Disjuncts_21);
        }
#line 309 "modecheck_goal.m"
        {
#line 309 "modecheck_goal.m"
          hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Disjuncts_21, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__V_32_32);
        }
#line 309 "modecheck_goal.m"
        *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, (MR_Integer) 0)));
#line 309 "modecheck_goal.m"
        check_hlds__modecheck_goal___GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, (MR_Integer) 1)));
#line 290 "modecheck_goal.m"
      }
#line 311 "modecheck_goal.m"
    {
#line 311 "modecheck_goal.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24);
#line 311 "modecheck_goal.m"
      return;
    }
#line 280 "modecheck_goal.m"
  }
#line 277 "modecheck_goal.m"
}

#line 103 "modecheck_goal.m"
void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(
#line 103 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalExpr0_6,
#line 103 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
#line 103 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
#line 103 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41,
#line 103 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42)
#line 103 "modecheck_goal.m"
{
#line 195 "modecheck_goal.m"
  {
#line 195 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;

#line 195 "modecheck_goal.m"
#line 195 "modecheck_goal.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_6)) {
#line 195 "modecheck_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 195 "modecheck_goal.m"
      case (MR_Integer) 0:
#line 229 "modecheck_goal.m"
        {
#line 229 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__SubGoal0_38 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_goal__GoalExpr0_6), (MR_Integer) 0);

#line 230 "modecheck_goal.m"
          {
#line 230 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(check_hlds__modecheck_goal__SubGoal0_38, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 230 "modecheck_goal.m"
            return;
          }
#line 229 "modecheck_goal.m"
        }
#line 195 "modecheck_goal.m"
        break;
#line 195 "modecheck_goal.m"
      case (MR_Integer) 1:
#line 195 "modecheck_goal.m"
        {
#line 195 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)));
#line 195 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 195 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
#line 195 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
#line 195 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal___UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

#line 196 "modecheck_goal.m"
          {
#line 196 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(check_hlds__modecheck_goal__LHS0_10, check_hlds__modecheck_goal__RHS0_11, check_hlds__modecheck_goal__Unification0_13, check_hlds__modecheck_goal__UnifyContext_14, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 196 "modecheck_goal.m"
            return;
          }
#line 195 "modecheck_goal.m"
        }
#line 195 "modecheck_goal.m"
        break;
#line 195 "modecheck_goal.m"
      case (MR_Integer) 2:
#line 200 "modecheck_goal.m"
        {
#line 200 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)));
#line 200 "modecheck_goal.m"
          MR_Integer check_hlds__modecheck_goal__ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 200 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
#line 200 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
#line 200 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));
#line 199 "modecheck_goal.m"
          MR_Word check_hlds__modecheck_goal___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));

#line 201 "modecheck_goal.m"
          {
#line 201 "modecheck_goal.m"
            check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(check_hlds__modecheck_goal__PredId_15, check_hlds__modecheck_goal__ProcId0_16, check_hlds__modecheck_goal__Args0_17, check_hlds__modecheck_goal__MaybeCallUnifyContext_19, check_hlds__modecheck_goal__PredName_20, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 201 "modecheck_goal.m"
            return;
          }
#line 200 "modecheck_goal.m"
        }
#line 195 "modecheck_goal.m"
        break;
#line 195 "modecheck_goal.m"
      case (MR_Integer) 3:
#line 195 "modecheck_goal.m"
#line 195 "modecheck_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)))) {
#line 195 "modecheck_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 195 "modecheck_goal.m"
          case (MR_Integer) 0:
#line 205 "modecheck_goal.m"
            {
#line 205 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__GenericCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 205 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
#line 205 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Args0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
#line 204 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal___MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
#line 204 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal___Detism_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));

#line 206 "modecheck_goal.m"
              {
#line 206 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(check_hlds__modecheck_goal__GenericCall_21, check_hlds__modecheck_goal__Args0_54, check_hlds__modecheck_goal__Modes0_22, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 206 "modecheck_goal.m"
                return;
              }
#line 205 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 1:
#line 210 "modecheck_goal.m"
            {
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__ExtraArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 6)));
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__PragmaCode_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 7)));
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
#line 210 "modecheck_goal.m"
              MR_Integer check_hlds__modecheck_goal__ProcId0_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
#line 210 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Args0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));

#line 211 "modecheck_goal.m"
              {
#line 211 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(check_hlds__modecheck_goal__Attributes_25, check_hlds__modecheck_goal__PredId_55, check_hlds__modecheck_goal__ProcId0_56, check_hlds__modecheck_goal__Args0_57, check_hlds__modecheck_goal__ExtraArgs_26, check_hlds__modecheck_goal__MaybeTraceRuntimeCond_27, check_hlds__modecheck_goal__PragmaCode_28, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 211 "modecheck_goal.m"
                return;
              }
#line 210 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 2:
#line 215 "modecheck_goal.m"
            {
#line 215 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__ConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 215 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Goals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

#line 250 "modecheck_goal.m"
#line 250 "modecheck_goal.m"
              switch (check_hlds__modecheck_goal__ConjType_29) {
#line 250 "modecheck_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 250 "modecheck_goal.m"
                case (MR_Integer) 1:
#line 263 "modecheck_goal.m"
                  {
#line 263 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__Goal_71;
#line 263 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74;
#line 263 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75;
#line 263 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__Goals_90;
#line 268 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal___GoalInfo_89;

#line 264 "modecheck_goal.m"
                    {
#line 264 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "par_conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74);
                    }
#line 266 "modecheck_goal.m"
                    {
#line 266 "modecheck_goal.m"
                      check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(check_hlds__modecheck_goal__ConjType_29, check_hlds__modecheck_goal__Goals_30, &check_hlds__modecheck_goal__Goals_90, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75);
                    }
#line 267 "modecheck_goal.m"
                    {
#line 267 "modecheck_goal.m"
                      hlds__hlds_goal__par_conj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Goals_90, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__Goal_71);
                    }
#line 268 "modecheck_goal.m"
                    *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_71, (MR_Integer) 0)));
#line 268 "modecheck_goal.m"
                    check_hlds__modecheck_goal___GoalInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_71, (MR_Integer) 1)));
#line 269 "modecheck_goal.m"
                    {
#line 269 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "par_conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 269 "modecheck_goal.m"
                      return;
                    }
#line 263 "modecheck_goal.m"
                  }
#line 250 "modecheck_goal.m"
                  break;
#line 250 "modecheck_goal.m"
                case (MR_Integer) 0:
#line 250 "modecheck_goal.m"
                  {
#line 250 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81;
#line 250 "modecheck_goal.m"
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82;

#line 251 "modecheck_goal.m"
                    {
#line 251 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81);
                    }
#line 256 "modecheck_goal.m"
                    if ((check_hlds__modecheck_goal__Goals_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "modecheck_goal.m"
                      {
#line 255 "modecheck_goal.m"
                        *check_hlds__modecheck_goal__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
#line 253 "modecheck_goal.m"
                        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81;
#line 253 "modecheck_goal.m"
                      }
#line 256 "modecheck_goal.m"
                    else
#line 257 "modecheck_goal.m"
                      {
#line 257 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__Goals_69;
#line 257 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal__V_83_83;
#line 259 "modecheck_goal.m"
                        MR_Word check_hlds__modecheck_goal___GoalInfo_70;

#line 258 "modecheck_goal.m"
                        {
#line 258 "modecheck_goal.m"
                          check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(check_hlds__modecheck_goal__ConjType_29, check_hlds__modecheck_goal__Goals_30, &check_hlds__modecheck_goal__Goals_69, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82);
                        }
#line 259 "modecheck_goal.m"
                        {
#line 259 "modecheck_goal.m"
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Goals_69, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__V_83_83);
                        }
#line 259 "modecheck_goal.m"
                        *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, (MR_Integer) 0)));
#line 259 "modecheck_goal.m"
                        check_hlds__modecheck_goal___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, (MR_Integer) 1)));
#line 257 "modecheck_goal.m"
                      }
#line 261 "modecheck_goal.m"
                    {
#line 261 "modecheck_goal.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 261 "modecheck_goal.m"
                      return;
                    }
#line 250 "modecheck_goal.m"
                  }
#line 250 "modecheck_goal.m"
                  break;
#line 250 "modecheck_goal.m"
              }
#line 215 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 3:
#line 218 "modecheck_goal.m"
            {
#line 218 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));

#line 219 "modecheck_goal.m"
              {
#line 219 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(check_hlds__modecheck_goal__Goals_58, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 219 "modecheck_goal.m"
                return;
              }
#line 218 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 4:
#line 221 "modecheck_goal.m"
            {
#line 221 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 221 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
#line 221 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));

#line 222 "modecheck_goal.m"
              {
#line 222 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(check_hlds__modecheck_goal__Var_31, check_hlds__modecheck_goal__CanFail_32, check_hlds__modecheck_goal__Cases0_33, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 222 "modecheck_goal.m"
                return;
              }
#line 221 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 5:
#line 232 "modecheck_goal.m"
            {
#line 232 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Reason_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 232 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

#line 233 "modecheck_goal.m"
              {
#line 233 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(check_hlds__modecheck_goal__Reason_39, check_hlds__modecheck_goal__SubGoal0_59, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 233 "modecheck_goal.m"
                return;
              }
#line 232 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 6:
#line 225 "modecheck_goal.m"
            {
#line 225 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
#line 225 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
#line 225 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
#line 225 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));

#line 226 "modecheck_goal.m"
              {
#line 226 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(check_hlds__modecheck_goal__Vars_34, check_hlds__modecheck_goal__Cond0_35, check_hlds__modecheck_goal__Then0_36, check_hlds__modecheck_goal__Else0_37, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 226 "modecheck_goal.m"
                return;
              }
#line 225 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
          case (MR_Integer) 7:
#line 235 "modecheck_goal.m"
            {
#line 235 "modecheck_goal.m"
              MR_Word check_hlds__modecheck_goal__ShortHand0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));

#line 236 "modecheck_goal.m"
              {
#line 236 "modecheck_goal.m"
                check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(check_hlds__modecheck_goal__ShortHand0_40, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
#line 236 "modecheck_goal.m"
                return;
              }
#line 235 "modecheck_goal.m"
            }
#line 195 "modecheck_goal.m"
            break;
#line 195 "modecheck_goal.m"
        }
#line 195 "modecheck_goal.m"
        break;
#line 195 "modecheck_goal.m"
    }
#line 195 "modecheck_goal.m"
  }
#line 103 "modecheck_goal.m"
}

#line 98 "modecheck_goal.m"
void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_4_p_0(
#line 98 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__Goal0_5,
#line 98 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__Goal_6,
#line 98 "modecheck_goal.m"
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12,
#line 98 "modecheck_goal.m"
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13)
#line 98 "modecheck_goal.m"
{
#line 157 "modecheck_goal.m"
  {
#line 157 "modecheck_goal.m"
    MR_bool check_hlds__modecheck_goal__succeeded;
#line 157 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 0)));
#line 157 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 1)));
#line 157 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__Context_10;
#line 157 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14;
#line 163 "modecheck_goal.m"
    MR_Word check_hlds__modecheck_goal__V_21_21;

#line 162 "modecheck_goal.m"
    {
#line 162 "modecheck_goal.m"
      check_hlds__modecheck_goal__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
    }
#line 163 "modecheck_goal.m"
    {
#line 163 "modecheck_goal.m"
      check_hlds__modecheck_goal__V_21_21 = mercury__term__context_init_0_f_0();
    }
#line 163 "modecheck_goal.m"
    {
#line 163 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = mercury__term____Unify____context_0_0(check_hlds__modecheck_goal__Context_10, check_hlds__modecheck_goal__V_21_21);
    }
#line 165 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 165 "modecheck_goal.m"
      check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12;
#line 165 "modecheck_goal.m"
    else
#line 166 "modecheck_goal.m"
      {
#line 166 "modecheck_goal.m"
        check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modecheck_goal__Context_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14);
      }
#line 168 "modecheck_goal.m"
    {
#line 168 "modecheck_goal.m"
      check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 13);
    }
#line 173 "modecheck_goal.m"
    if (check_hlds__modecheck_goal__succeeded)
#line 169 "modecheck_goal.m"
      {
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InDuplForSwitch_11;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap0_29;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalExpr_30;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalInfo_31;
#line 169 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32;

#line 169 "modecheck_goal.m"
        {
#line 169 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__InDuplForSwitch_11);
        }
#line 170 "modecheck_goal.m"
        {
#line 170 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17);
        }
#line 185 "modecheck_goal.m"
        {
#line 185 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_goal__InstMap0_29);
        }
#line 186 "modecheck_goal.m"
        {
#line 186 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(check_hlds__modecheck_goal__GoalExpr0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalExpr_30, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32);
        }
#line 187 "modecheck_goal.m"
        {
#line 187 "modecheck_goal.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_goal__InstMap0_29, check_hlds__modecheck_goal__GoalExpr_30, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalInfo_31, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 189 "modecheck_goal.m"
        {
#line 189 "modecheck_goal.m"
          MR_Word base;
#line 189 "modecheck_goal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "modecheck_goal.m"
          *check_hlds__modecheck_goal__Goal_6 = base;
#line 189 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_30));
#line 189 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_31));
#line 189 "modecheck_goal.m"
        }
#line 172 "modecheck_goal.m"
        {
#line 172 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(check_hlds__modecheck_goal__InDuplForSwitch_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13);
#line 172 "modecheck_goal.m"
          return;
        }
#line 169 "modecheck_goal.m"
      }
#line 173 "modecheck_goal.m"
    else
#line 182 "modecheck_goal.m"
      {
#line 182 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__InstMap0_40;
#line 182 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalExpr_41;
#line 182 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__GoalInfo_42;
#line 182 "modecheck_goal.m"
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43;

#line 185 "modecheck_goal.m"
        {
#line 185 "modecheck_goal.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__InstMap0_40);
        }
#line 186 "modecheck_goal.m"
        {
#line 186 "modecheck_goal.m"
          check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(check_hlds__modecheck_goal__GoalExpr0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalExpr_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43);
        }
#line 187 "modecheck_goal.m"
        {
#line 187 "modecheck_goal.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_goal__InstMap0_40, check_hlds__modecheck_goal__GoalExpr_41, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalInfo_42, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13);
        }
#line 189 "modecheck_goal.m"
        {
#line 189 "modecheck_goal.m"
          MR_Word base;
#line 189 "modecheck_goal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "modecheck_goal.m"
          *check_hlds__modecheck_goal__Goal_6 = base;
#line 189 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_41));
#line 189 "modecheck_goal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_42));
#line 189 "modecheck_goal.m"
        }
#line 182 "modecheck_goal.m"
      }
#line 157 "modecheck_goal.m"
  }
#line 98 "modecheck_goal.m"
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
