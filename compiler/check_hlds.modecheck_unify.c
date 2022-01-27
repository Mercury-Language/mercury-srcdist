/*
** Automatically generated from `modecheck_unify.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.modecheck_unify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_unify__init
ENDINIT
*/

#include "check_hlds.modecheck_unify.mih"


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
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.unique_modes.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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



#line 651 "modecheck_unify.m"
struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s {
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
#line 657 "modecheck_unify.m"
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded;
#line 657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22;
#line 657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26;
#line 657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30;
#line 657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40;
#line 757 "modecheck_unify.m"
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0;
#line 757 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_171_171;
#line 757 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_56;
#line 757 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_57;
#line 757 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_58;
#line 758 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_56;
#line 760 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_57;
#line 651 "modecheck_unify.m"
};


#line 174 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 186 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

#line 189 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 192 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 195 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0;

#line 198 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1;

#line 201 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2;

#line 204 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3];

#line 207 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3];

#line 210 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3];

#line 213 "check_hlds.modecheck_unify.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1];

#line 216 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0;

#line 219 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1;

#line 222 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1];

#line 225 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1];

#line 228 "check_hlds.modecheck_unify.c"
static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2];

#line 231 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2];

#line 234 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2];

#line 237 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
#line 240 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 242 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

#line 245 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
#line 248 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 250 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 252 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

#line 255 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
#line 258 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 260 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

#line 263 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
#line 266 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 268 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 270 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

#line 1543 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1543 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 478 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
#line 478 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 478 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 403 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
#line 403 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 403 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 313 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaGoal_10,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 313 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
#line 313 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);

#line 1466 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1466__1_2_p_0(
#line 1466 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33,
#line 1466 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76);

#line 1361 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1361__1_2_p_0(
#line 1361 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
#line 1361 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91);

#line 797 "modecheck_unify.m"
static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_functor__797__1_1_f_0(
#line 797 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_127);

#line 478 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__478__1_3_p_0(
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_50,
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_95);

#line 403 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__403__1_4_p_0(
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_27,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_44,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_72);

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__300__1_2_p_0(
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_52);

#line 298 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__298__1_2_p_0(
#line 298 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 298 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_47);

#line 1564 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
#line 1564 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

#line 1564 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

#line 1568 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
#line 1568 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

#line 1568 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

#line 1745 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__mode_set_args_3_p_0(
#line 1745 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1745 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
#line 1745 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

#line 1737 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_2_3_p_0(
#line 1737 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1737 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1737 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

#line 1709 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
#line 1709 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1709 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1709 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6);

#line 1693 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1693 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 1684 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1684 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 1657 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 1657 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

#line 1647 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__bind_args_5_p_0(
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Args_7,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_10,
#line 1647 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_11);

#line 1610 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
#line 1610 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6);

#line 1583 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap_2,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
#line 1583 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Result_8);

#line 1466 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
#line 1466 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 1450 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_13,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfXArgs_14,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_15,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_16,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_21,
#line 1450 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_22,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
#line 1450 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);

#line 1361 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
#line 1361 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 1348 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_12,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_13,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_14,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_17,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_18,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);

#line 1241 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_12,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_13,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Type_14,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_17,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1241 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62,
#line 1241 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);

#line 1091 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveX_17,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveY_18,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_19,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_20,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_21,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_25,
#line 1091 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unify_26,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50,
#line 1091 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);

#line 1026 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__make_complicated_sub_unify_5_p_0(
#line 1026 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Var0_6,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Var_7,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals0_8,
#line 1026 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17);

#line 996 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);

#line 970 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_8,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_9,
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22);

#line 941 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_4,
#line 941 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__5_5);

#line 797 "modecheck_unify.m"
static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7(
#line 797 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 797 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 758 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
#line 758 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 760 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
#line 760 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 651 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_12,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_17,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
#line 651 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_20,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96,
#line 651 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97);

#line 595 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_8,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_9,
#line 595 "modecheck_unify.m"
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
#line 595 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
#line 595 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);

#line 547 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_10,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification_11,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
#line 547 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_14,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
#line 547 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);

#line 500 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_13,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaDet_17,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_18,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_19,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_20,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_21,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Mode_22,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
#line 300 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 298 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
#line 298 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 249 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_11,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_12,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_15,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
#line 249 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37,
#line 249 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);

#line 151 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_10,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
#line 151 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47,
#line 151 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);

#line 125 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
#line 125 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 125 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][6];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[3][3];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[4][5];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[4][1];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][7];




static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[6])),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_2[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[2])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[3])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2])),
    ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "__LambdaGoal__"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1150 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1158 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1166 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1174 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1182 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1190 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1198 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1207 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0 = {
  (MR_String) "ho_insts_match",
  (MR_Integer) 0
};

#line 1213 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1 = {
  (MR_String) "ho_insts_do_not_match",
  (MR_Integer) 1
};

#line 1219 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2 = {
  (MR_String) "ho_arg_not_ground",
  (MR_Integer) 2
};

#line 1225 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2
};

#line 1232 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0
};

#line 1239 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1246 "check_hlds.modecheck_unify.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_mode_result",
  {
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0
  },
  {
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0
};

#line 1267 "check_hlds.modecheck_unify.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1272 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0 = {
  (MR_String) "possible_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1287 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1 = {
  (MR_String) "ho_arg_not_ground",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1302 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1
};

#line 1307 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

#line 1312 "check_hlds.modecheck_unify.c"
static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1
  }
};

#line 1326 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

#line 1332 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1338 "check_hlds.modecheck_unify.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_modes_result",
  {
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0
  },
  {
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0
};

#line 1359 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
#line 1362 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 1364 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
#line 1366 "check_hlds.modecheck_unify.c"
{
#line 1368 "check_hlds.modecheck_unify.c"
  {
#line 1370 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1373 "check_hlds.modecheck_unify.c"
    {
#line 1375 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_mode_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
#line 1378 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 1380 "check_hlds.modecheck_unify.c"
  }
#line 1382 "check_hlds.modecheck_unify.c"
}

#line 1385 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
#line 1388 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 1390 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 1392 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
#line 1394 "check_hlds.modecheck_unify.c"
{
#line 1396 "check_hlds.modecheck_unify.c"
  {
#line 1398 "check_hlds.modecheck_unify.c"
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

#line 1401 "check_hlds.modecheck_unify.c"
    {
#line 1403 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify____Compare____match_mode_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
#line 1406 "check_hlds.modecheck_unify.c"
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
#line 1408 "check_hlds.modecheck_unify.c"
  }
#line 1410 "check_hlds.modecheck_unify.c"
}

#line 1413 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
#line 1416 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 1418 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
#line 1420 "check_hlds.modecheck_unify.c"
{
#line 1422 "check_hlds.modecheck_unify.c"
  {
#line 1424 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1427 "check_hlds.modecheck_unify.c"
    {
#line 1429 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_modes_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
#line 1432 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 1434 "check_hlds.modecheck_unify.c"
  }
#line 1436 "check_hlds.modecheck_unify.c"
}

#line 1439 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
#line 1442 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 1444 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 1446 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
#line 1448 "check_hlds.modecheck_unify.c"
{
#line 1450 "check_hlds.modecheck_unify.c"
  {
#line 1452 "check_hlds.modecheck_unify.c"
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

#line 1455 "check_hlds.modecheck_unify.c"
    {
#line 1457 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify____Compare____match_modes_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
#line 1460 "check_hlds.modecheck_unify.c"
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
#line 1462 "check_hlds.modecheck_unify.c"
  }
#line 1464 "check_hlds.modecheck_unify.c"
}

#line 1543 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1543 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1543 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1543 "modecheck_unify.m"
{
#line 1546 "modecheck_unify.m"
  while (MR_TRUE)
#line 1546 "modecheck_unify.m"
    {
#line 1546 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1546 "modecheck_unify.m"
      {
#line 1546 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1546 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1546 "modecheck_unify.m"
        else
#line 1548 "modecheck_unify.m"
          {
#line 1548 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1548 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1558 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgType_16;

#line 1550 "modecheck_unify.m"
            {
#line 1550 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__ArgVar_11, &check_hlds__modecheck_unify__ArgType_16);
            }
#line 1551 "modecheck_unify.m"
            {
#line 1551 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__modecheck_unify__ArgType_16);
            }
#line 1558 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1553 "modecheck_unify.m"
              {
#line 1553 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20;
#line 1553 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

#line 1553 "modecheck_unify.m"
                {
#line 1553 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20);
                }
#line 1554 "modecheck_unify.m"
                {
#line 1554 "modecheck_unify.m"
                  check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(check_hlds__modecheck_unify__ArgVar_11, check_hlds__modecheck_unify__ArgType_16, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[2]), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22);
                }
#line 1556 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1556 "modecheck_unify.m"
                {
#line 1556 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__ArgVars_12;
#line 1556 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

#line 1556 "modecheck_unify.m"
                  check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1556 "modecheck_unify.m"
                  check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 1556 "modecheck_unify.m"
                }
#line 1556 "modecheck_unify.m"
                continue;
#line 1553 "modecheck_unify.m"
              }
#line 1558 "modecheck_unify.m"
            else
#line 1556 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1548 "modecheck_unify.m"
          }
#line 1546 "modecheck_unify.m"
      }
#line 1546 "modecheck_unify.m"
      break;
#line 1546 "modecheck_unify.m"
    }
#line 1543 "modecheck_unify.m"
}

#line 478 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
#line 478 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 478 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 478 "modecheck_unify.m"
{
#line 478 "modecheck_unify.m"
  {
#line 478 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 478 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 478 "modecheck_unify.m"
    {
#line 478 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__478__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 478 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 478 "modecheck_unify.m"
  }
#line 478 "modecheck_unify.m"
}

#line 403 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
#line 403 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 403 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 403 "modecheck_unify.m"
{
#line 403 "modecheck_unify.m"
  {
#line 403 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 403 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 403 "modecheck_unify.m"
    {
#line 403 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__403__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 403 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 403 "modecheck_unify.m"
  }
#line 403 "modecheck_unify.m"
}

#line 313 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaGoal_10,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 313 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6,
#line 313 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
#line 313 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68)
#line 313 "modecheck_unify.m"
{
#line 319 "modecheck_unify.m"
  {
#line 319 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_108_108;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeCtorInfo_110_110;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__RHS_14;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Mode_15;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification_16;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Purity_18 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Groundness_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredOrFunc_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 2)));
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 3)));
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Modes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 4)));
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 5)));
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 6)));
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_27;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__HowToCheckGoal_28;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Modes_30;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInitialInsts_31;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInstAL_32;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInstMapDelta_33;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_34;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap1_35;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgLives_36;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveVarsList_37;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveVars_38;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo0_40;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals0_41;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals1_42;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals_43;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalsList_48;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalInsts_49;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo2_50;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69;
#line 319 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70;
#line 394 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_39_39;

#line 359 "modecheck_unify.m"
    {
#line 359 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__ModuleInfo0_27);
    }
#line 360 "modecheck_unify.m"
    {
#line 360 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__HowToCheckGoal_28);
    }
#line 367 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HowToCheckGoal_28 == (MR_Integer) 0))
#line 363 "modecheck_unify.m"
      {
#line 363 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_29;

#line 365 "modecheck_unify.m"
        {
#line 365 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, check_hlds__modecheck_unify__Vars_23, &check_hlds__modecheck_unify__VarTypes_29);
        }
#line 366 "modecheck_unify.m"
        {
#line 366 "modecheck_unify.m"
          check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__VarTypes_29, check_hlds__modecheck_unify__Modes0_24, &check_hlds__modecheck_unify__Modes_30);
        }
#line 363 "modecheck_unify.m"
      }
#line 367 "modecheck_unify.m"
    else
#line 369 "modecheck_unify.m"
      check_hlds__modecheck_unify__Modes_30 = check_hlds__modecheck_unify__Modes0_24;
#line 373 "modecheck_unify.m"
    {
#line 373 "modecheck_unify.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__VarInitialInsts_31);
    }
#line 1755 "check_hlds.modecheck_unify.c"
    check_hlds__modecheck_unify__TypeInfo_108_108 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 374 "modecheck_unify.m"
    {
#line 374 "modecheck_unify.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__modecheck_unify__TypeInfo_108_108, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__VarInitialInsts_31, &check_hlds__modecheck_unify__VarInstAL_32);
    }
#line 375 "modecheck_unify.m"
    {
#line 375 "modecheck_unify.m"
      check_hlds__modecheck_unify__VarInstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_unify__VarInstAL_32);
    }
#line 376 "modecheck_unify.m"
    {
#line 376 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__InstMap0_34);
    }
#line 377 "modecheck_unify.m"
    {
#line 377 "modecheck_unify.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__modecheck_unify__InstMap0_34, check_hlds__modecheck_unify__VarInstMapDelta_33, &check_hlds__modecheck_unify__InstMap1_35);
    }
#line 378 "modecheck_unify.m"
    {
#line 378 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69);
    }
#line 381 "modecheck_unify.m"
    {
#line 381 "modecheck_unify.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__ArgLives_36);
    }
#line 382 "modecheck_unify.m"
    {
#line 382 "modecheck_unify.m"
      check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__ArgLives_36, &check_hlds__modecheck_unify__LiveVarsList_37);
    }
#line 1792 "check_hlds.modecheck_unify.c"
    check_hlds__modecheck_unify__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 383 "modecheck_unify.m"
    {
#line 383 "modecheck_unify.m"
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__LiveVarsList_37, &check_hlds__modecheck_unify__LiveVars_38);
    }
#line 384 "modecheck_unify.m"
    {
#line 384 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70);
    }
#line 394 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_26, (MR_Integer) 0)));
#line 394 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_26, (MR_Integer) 1)));
#line 395 "modecheck_unify.m"
    {
#line 395 "modecheck_unify.m"
      check_hlds__modecheck_unify__NonLocals0_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo0_40);
    }
#line 396 "modecheck_unify.m"
    {
#line 396 "modecheck_unify.m"
      parse_tree__set_of_var__delete_list_3_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__NonLocals0_41, &check_hlds__modecheck_unify__NonLocals1_42);
    }
#line 400 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__Groundness_19 == (MR_Integer) 1))
#line 401 "modecheck_unify.m"
      {
#line 401 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonLocalTypes_44;
#line 401 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_71_71;

#line 402 "modecheck_unify.m"
        {
#line 402 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__NonLocalTypes_44);
        }
#line 403 "modecheck_unify.m"
        {
#line 403 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1));
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo0_27));
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_35));
#line 403 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 5) = ((MR_Box) (check_hlds__modecheck_unify__NonLocalTypes_44));
#line 403 "modecheck_unify.m"
        }
#line 403 "modecheck_unify.m"
        {
#line 403 "modecheck_unify.m"
          check_hlds__modecheck_unify__NonLocals_43 = parse_tree__set_of_var__filter_2_f_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__V_71_71, check_hlds__modecheck_unify__NonLocals1_42);
        }
#line 401 "modecheck_unify.m"
      }
#line 400 "modecheck_unify.m"
    else
#line 399 "modecheck_unify.m"
      check_hlds__modecheck_unify__NonLocals_43 = check_hlds__modecheck_unify__NonLocals1_42;
#line 410 "modecheck_unify.m"
    {
#line 410 "modecheck_unify.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__NonLocals_43, &check_hlds__modecheck_unify__NonLocalsList_48);
    }
#line 411 "modecheck_unify.m"
    {
#line 411 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__NonLocalsList_48, &check_hlds__modecheck_unify__NonLocalInsts_49);
    }
#line 412 "modecheck_unify.m"
    {
#line 412 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__ModuleInfo2_50);
    }
#line 429 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Groundness_19 == (MR_Integer) 0);
#line 429 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 429 "modecheck_unify.m"
      {
#line 430 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_18 == (MR_Integer) 2);
#line 430 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 429 "modecheck_unify.m"
      }
#line 433 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 432 "modecheck_unify.m"
      {
#line 432 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_list_is_ground_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, check_hlds__modecheck_unify__ModuleInfo2_50);
      }
#line 433 "modecheck_unify.m"
    else
#line 434 "modecheck_unify.m"
      {
#line 434 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, check_hlds__modecheck_unify__ModuleInfo2_50);
      }
#line 477 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 438 "modecheck_unify.m"
      {
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__SharedNonLocalInsts_51;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo3_52;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap2_53;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Goal1_54;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInsts_55;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Goal_56;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap11_57;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__RHS0_58;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_78_78;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91;
#line 438 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92;

#line 437 "modecheck_unify.m"
        {
#line 437 "modecheck_unify.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, &check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__ModuleInfo2_50, &check_hlds__modecheck_unify__ModuleInfo3_52);
        }
#line 439 "modecheck_unify.m"
        {
#line 439 "modecheck_unify.m"
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_48, check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__InstMap1_35, &check_hlds__modecheck_unify__InstMap2_53);
        }
#line 441 "modecheck_unify.m"
        {
#line 441 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo3_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76);
        }
#line 442 "modecheck_unify.m"
        {
#line 442 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap2_53, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77);
        }
#line 444 "modecheck_unify.m"
        {
#line 444 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_78_78, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_20));
#line 444 "modecheck_unify.m"
        }
#line 444 "modecheck_unify.m"
        {
#line 444 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_lock_vars_4_p_0(check_hlds__modecheck_unify__V_78_78, check_hlds__modecheck_unify__NonLocals_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79);
        }
#line 446 "modecheck_unify.m"
        {
#line 446 "modecheck_unify.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82);
        }
#line 452 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HowToCheckGoal_28 == (MR_Integer) 0))
#line 454 "modecheck_unify.m"
          {
#line 454 "modecheck_unify.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_unify__Goal0_26, &check_hlds__modecheck_unify__Goal1_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84);
          }
#line 452 "modecheck_unify.m"
        else
#line 451 "modecheck_unify.m"
          {
#line 451 "modecheck_unify.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modecheck_unify__Goal0_26, &check_hlds__modecheck_unify__Goal1_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84);
          }
#line 456 "modecheck_unify.m"
        {
#line 456 "modecheck_unify.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__FinalInsts_55);
        }
#line 457 "modecheck_unify.m"
        {
#line 457 "modecheck_unify.m"
          check_hlds__modes__modecheck_lambda_final_insts_6_p_0(check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__FinalInsts_55, check_hlds__modecheck_unify__Goal1_54, &check_hlds__modecheck_unify__Goal_56, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85);
        }
#line 458 "modecheck_unify.m"
        {
#line 458 "modecheck_unify.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88);
        }
#line 460 "modecheck_unify.m"
        {
#line 460 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89);
        }
#line 461 "modecheck_unify.m"
        {
#line 461 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0(check_hlds__modecheck_unify__V_78_78, check_hlds__modecheck_unify__NonLocals_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91);
        }
#line 467 "modecheck_unify.m"
        {
#line 467 "modecheck_unify.m"
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_48, check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__InstMap0_34, &check_hlds__modecheck_unify__InstMap11_57);
        }
#line 469 "modecheck_unify.m"
        {
#line 469 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap11_57, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92);
        }
#line 473 "modecheck_unify.m"
        {
#line 473 "modecheck_unify.m"
          check_hlds__modecheck_unify__RHS0_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 0) = ((MR_Box) ((check_hlds__modecheck_unify__Purity_18 | ((((check_hlds__modecheck_unify__Groundness_19 << (MR_Integer) 2)) | ((check_hlds__modecheck_unify__PredOrFunc_20 << (MR_Integer) 3)))))));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 1) = (MR_Integer) 0;
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_22));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 3) = ((MR_Box) (check_hlds__modecheck_unify__Vars_23));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 4) = ((MR_Box) (check_hlds__modecheck_unify__Modes_30));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 5) = ((MR_Box) (check_hlds__modecheck_unify__Det_25));
#line 473 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 6) = ((MR_Box) (check_hlds__modecheck_unify__Goal_56));
#line 473 "modecheck_unify.m"
        }
#line 475 "modecheck_unify.m"
        {
#line 475 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__PredOrFunc_20, check_hlds__modecheck_unify__ArgVars_22, check_hlds__modecheck_unify__Modes_30, check_hlds__modecheck_unify__Det_25, check_hlds__modecheck_unify__RHS0_58, &check_hlds__modecheck_unify__RHS_14, check_hlds__modecheck_unify__Unification0_11, &check_hlds__modecheck_unify__Unification_16, &check_hlds__modecheck_unify__Mode_15, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
        }
#line 438 "modecheck_unify.m"
      }
#line 477 "modecheck_unify.m"
    else
#line 482 "modecheck_unify.m"
      {
#line 482 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonGroundNonLocals_61;
#line 482 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_94_94;

#line 478 "modecheck_unify.m"
        {
#line 478 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 478 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[1]));
#line 478 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2));
#line 478 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_35));
#line 478 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 4) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo2_50));
#line 478 "modecheck_unify.m"
        }
#line 478 "modecheck_unify.m"
        {
#line 478 "modecheck_unify.m"
          mercury__list__filter_3_p_0(check_hlds__modecheck_unify__TypeInfo_108_108, check_hlds__modecheck_unify__V_94_94, check_hlds__modecheck_unify__NonLocalsList_48, &check_hlds__modecheck_unify__NonGroundNonLocals_61);
        }
#line 489 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__NonGroundNonLocals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "modecheck_unify.m"
          {
#line 491 "modecheck_unify.m"
            {
#line 491 "modecheck_unify.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_lambda\'/8", (MR_String) "very strange var");
#line 491 "modecheck_unify.m"
              return;
            }
#line 490 "modecheck_unify.m"
          }
#line 489 "modecheck_unify.m"
        else
#line 484 "modecheck_unify.m"
          {
#line 484 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__BadVar_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_61, (MR_Integer) 0)));
#line 484 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__BadInst_64;
#line 484 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_65;
#line 484 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_66;
#line 484 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_61, (MR_Integer) 1)));

#line 485 "modecheck_unify.m"
            {
#line 485 "modecheck_unify.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__BadVar_62, &check_hlds__modecheck_unify__BadInst_64);
            }
#line 486 "modecheck_unify.m"
            {
#line 486 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_65 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__BadVar_62);
            }
#line 487 "modecheck_unify.m"
            {
#line 487 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 487 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 487 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 1) = ((MR_Box) (check_hlds__modecheck_unify__BadVar_62));
#line 487 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 2) = ((MR_Box) (check_hlds__modecheck_unify__BadInst_64));
#line 487 "modecheck_unify.m"
            }
#line 488 "modecheck_unify.m"
            {
#line 488 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_65, check_hlds__modecheck_unify__ModeError_66, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
            }
#line 484 "modecheck_unify.m"
          }
#line 494 "modecheck_unify.m"
        check_hlds__modecheck_unify__RHS_14 = check_hlds__modecheck_unify__LambdaGoal_10;
#line 496 "modecheck_unify.m"
        check_hlds__modecheck_unify__Mode_15 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[7];
#line 497 "modecheck_unify.m"
        check_hlds__modecheck_unify__Unification_16 = check_hlds__modecheck_unify__Unification0_11;
#line 482 "modecheck_unify.m"
      }
#line 319 "modecheck_unify.m"
    {
#line 319 "modecheck_unify.m"
      MR_Word base;
#line 319 "modecheck_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 319 "modecheck_unify.m"
      *check_hlds__modecheck_unify__HeadVar__6_6 = base;
#line 319 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 319 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__RHS_14));
#line 319 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_15));
#line 319 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_16));
#line 319 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
#line 319 "modecheck_unify.m"
    }
#line 319 "modecheck_unify.m"
  }
#line 313 "modecheck_unify.m"
}

#line 1466 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1466__1_2_p_0(
#line 1466 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33,
#line 1466 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76)
#line 1466 "modecheck_unify.m"
{
#line 1466 "modecheck_unify.m"
  {
#line 1466 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1466 "modecheck_unify.m"
    {
#line 1466 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_33)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_76)));
    }
#line 1466 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1466 "modecheck_unify.m"
  }
#line 1466 "modecheck_unify.m"
}

#line 1361 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1361__1_2_p_0(
#line 1361 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
#line 1361 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91)
#line 1361 "modecheck_unify.m"
{
#line 1361 "modecheck_unify.m"
  {
#line 1361 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1361 "modecheck_unify.m"
    {
#line 1361 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_91)));
    }
#line 1361 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1361 "modecheck_unify.m"
  }
#line 1361 "modecheck_unify.m"
}

#line 797 "modecheck_unify.m"
static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_functor__797__1_1_f_0(
#line 797 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_127)
#line 797 "modecheck_unify.m"
{
#line 797 "modecheck_unify.m"
  {
#line 797 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 797 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__HeadVar__2_128;

#line 797 "modecheck_unify.m"
    {
#line 797 "modecheck_unify.m"
      check_hlds__modecheck_unify__HeadVar__2_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_128, 0) = ((MR_Box) (check_hlds__modecheck_unify__HeadVar__1_127));
#line 797 "modecheck_unify.m"
    }
#line 797 "modecheck_unify.m"
    return check_hlds__modecheck_unify__HeadVar__2_128;
#line 797 "modecheck_unify.m"
  }
#line 797 "modecheck_unify.m"
}

#line 478 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__478__1_3_p_0(
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_50,
#line 478 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_95)
#line 478 "modecheck_unify.m"
{
#line 478 "modecheck_unify.m"
  {
#line 478 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 478 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Inst_60;

#line 480 "modecheck_unify.m"
    {
#line 480 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__HeadVar__3_95, &check_hlds__modecheck_unify__Inst_60);
    }
#line 481 "modecheck_unify.m"
    {
#line 481 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_unify__ModuleInfo2_50, check_hlds__modecheck_unify__Inst_60);
    }
#line 481 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 478 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 478 "modecheck_unify.m"
  }
#line 478 "modecheck_unify.m"
}

#line 403 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__403__1_4_p_0(
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_27,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_44,
#line 403 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_72)
#line 403 "modecheck_unify.m"
{
#line 403 "modecheck_unify.m"
  {
#line 403 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 403 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalType_46;
#line 403 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalInst_47;

#line 404 "modecheck_unify.m"
    {
#line 404 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__NonLocalTypes_44, check_hlds__modecheck_unify__HeadVar__4_72, &check_hlds__modecheck_unify__NonLocalType_46);
    }
#line 405 "modecheck_unify.m"
    {
#line 405 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__HeadVar__4_72, &check_hlds__modecheck_unify__NonLocalInst_47);
    }
#line 406 "modecheck_unify.m"
    {
#line 406 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__NonLocalInst_47, (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__modecheck_unify_scalar_common_1[13]), check_hlds__modecheck_unify__NonLocalType_46, check_hlds__modecheck_unify__ModuleInfo0_27);
    }
#line 406 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 403 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 403 "modecheck_unify.m"
  }
#line 403 "modecheck_unify.m"
}

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__300__1_2_p_0(
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_52)
#line 300 "modecheck_unify.m"
{
#line 300 "modecheck_unify.m"
  {
#line 300 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 300 "modecheck_unify.m"
    {
#line 300 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_52)));
    }
#line 300 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 300 "modecheck_unify.m"
  }
#line 300 "modecheck_unify.m"
}

#line 298 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__298__1_2_p_0(
#line 298 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 298 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_47)
#line 298 "modecheck_unify.m"
{
#line 298 "modecheck_unify.m"
  {
#line 298 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_13 == check_hlds__modecheck_unify__HeadVar__2_47);

#line 298 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 298 "modecheck_unify.m"
  }
#line 298 "modecheck_unify.m"
}

#line 1564 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
#line 1564 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
#line 1564 "modecheck_unify.m"
{
#line 1564 "modecheck_unify.m"
  {
#line 1564 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1564 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastX_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
#line 1564 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastY_9 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

#line 1564 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_8 == check_hlds__modecheck_unify__CastY_9);
#line 1564 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 2414 "check_hlds.modecheck_unify.c"
      *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
#line 1564 "modecheck_unify.m"
    else
#line 1564 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1564 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1564 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
#line 1564 "modecheck_unify.m"
        else
#line 2426 "check_hlds.modecheck_unify.c"
          *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 2;
#line 1564 "modecheck_unify.m"
      else
#line 1564 "modecheck_unify.m"
        {
#line 1564 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));

#line 1564 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2437 "check_hlds.modecheck_unify.c"
            *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 1;
#line 1564 "modecheck_unify.m"
          else
#line 1564 "modecheck_unify.m"
            {
#line 1564 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));

#line 1564 "modecheck_unify.m"
              {
#line 1564 "modecheck_unify.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[5], check_hlds__modecheck_unify__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_unify__V_11_11)), ((MR_Box) (check_hlds__modecheck_unify__V_5_5)));
#line 1564 "modecheck_unify.m"
                return;
              }
#line 1564 "modecheck_unify.m"
            }
#line 1564 "modecheck_unify.m"
        }
#line 1564 "modecheck_unify.m"
  }
#line 1564 "modecheck_unify.m"
}

#line 1564 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1564 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
#line 1564 "modecheck_unify.m"
{
#line 1564 "modecheck_unify.m"
  {
#line 1564 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1564 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastX_7 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
#line 1564 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastY_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

#line 1564 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_7 == check_hlds__modecheck_unify__CastY_8);
#line 1564 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1564 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1564 "modecheck_unify.m"
    else
#line 1564 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1564 "modecheck_unify.m"
        {
#line 1564 "modecheck_unify.m"
          MR_Integer check_hlds__modecheck_unify__CastX_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
#line 1564 "modecheck_unify.m"
          MR_Integer check_hlds__modecheck_unify__CastY_6 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

#line 1564 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastY_6 == check_hlds__modecheck_unify__CastX_5);
#line 1564 "modecheck_unify.m"
        }
#line 1564 "modecheck_unify.m"
      else
#line 1564 "modecheck_unify.m"
        {
#line 1564 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeInfo_9_9;
#line 1564 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1564 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_4_4;

#line 1564 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1564 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 1564 "modecheck_unify.m"
            {
#line 1564 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 2520 "check_hlds.modecheck_unify.c"
              check_hlds__modecheck_unify__TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[5];
#line 2522 "check_hlds.modecheck_unify.c"
              {
#line 2524 "check_hlds.modecheck_unify.c"
                return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_9_9, ((MR_Box) (check_hlds__modecheck_unify__V_3_3)), ((MR_Box) (check_hlds__modecheck_unify__V_4_4)));
              }
#line 1564 "modecheck_unify.m"
            }
#line 1564 "modecheck_unify.m"
        }
#line 1564 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1564 "modecheck_unify.m"
  }
#line 1564 "modecheck_unify.m"
}

#line 1568 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
#line 1568 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
#line 1568 "modecheck_unify.m"
{
#line 1568 "modecheck_unify.m"
  {
#line 1568 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1568 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
#line 1568 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

#line 1568 "modecheck_unify.m"
    {
#line 1568 "modecheck_unify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__Cast_HeadVar1_4, check_hlds__modecheck_unify__Cast_HeadVar2_5);
#line 1568 "modecheck_unify.m"
      return;
    }
#line 1568 "modecheck_unify.m"
  }
#line 1568 "modecheck_unify.m"
}

#line 1568 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
#line 1568 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
#line 1568 "modecheck_unify.m"
{
#line 2579 "check_hlds.modecheck_unify.c"
  {
#line 2581 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_1 == check_hlds__modecheck_unify__HeadVar__2_2);

#line 2584 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 2586 "check_hlds.modecheck_unify.c"
  }
#line 1568 "modecheck_unify.m"
}

#line 1745 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__mode_set_args_3_p_0(
#line 1745 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1745 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
#line 1745 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
#line 1745 "modecheck_unify.m"
{
#line 1748 "modecheck_unify.m"
  {
#line 1748 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1748 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1748 "modecheck_unify.m"
      *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1748 "modecheck_unify.m"
    else
#line 1749 "modecheck_unify.m"
      {
#line 1749 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1749 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1749 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Mode_8;
#line 1749 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_9;

#line 1750 "modecheck_unify.m"
        {
#line 1750 "modecheck_unify.m"
          check_hlds__modecheck_unify__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1750 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 0) = ((MR_Box) (check_hlds__modecheck_unify__Inst_5));
#line 1750 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInst_2));
#line 1750 "modecheck_unify.m"
        }
#line 1751 "modecheck_unify.m"
        {
#line 1751 "modecheck_unify.m"
          check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__Insts_6, check_hlds__modecheck_unify__FinalInst_2, &check_hlds__modecheck_unify__Modes_9);
        }
#line 1749 "modecheck_unify.m"
        {
#line 1749 "modecheck_unify.m"
          MR_Word base;
#line 1749 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1749 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Mode_8));
#line 1749 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Modes_9));
#line 1749 "modecheck_unify.m"
        }
#line 1749 "modecheck_unify.m"
      }
#line 1748 "modecheck_unify.m"
  }
#line 1745 "modecheck_unify.m"
}

#line 1737 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_2_3_p_0(
#line 1737 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1737 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1737 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
#line 1737 "modecheck_unify.m"
{
#line 1740 "modecheck_unify.m"
  {
#line 1740 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1740 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1740 "modecheck_unify.m"
      {
#line 1740 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1740 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1740 "modecheck_unify.m"
          {
#line 1740 "modecheck_unify.m"
            *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1740 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1740 "modecheck_unify.m"
          }
#line 1740 "modecheck_unify.m"
      }
#line 1740 "modecheck_unify.m"
    else
#line 1741 "modecheck_unify.m"
      {
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstsA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstB_6;
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstsB_7;
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Mode_8;
#line 1741 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_9;

#line 1741 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1741 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1741 "modecheck_unify.m"
          {
#line 1741 "modecheck_unify.m"
            check_hlds__modecheck_unify__InstB_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1741 "modecheck_unify.m"
            check_hlds__modecheck_unify__InstsB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1742 "modecheck_unify.m"
            {
#line 1742 "modecheck_unify.m"
              check_hlds__modecheck_unify__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1742 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstA_4));
#line 1742 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstB_6));
#line 1742 "modecheck_unify.m"
            }
#line 1743 "modecheck_unify.m"
            {
#line 1743 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__get_mode_of_args_2_3_p_0(check_hlds__modecheck_unify__InstsA_5, check_hlds__modecheck_unify__InstsB_7, &check_hlds__modecheck_unify__Modes_9);
            }
#line 1741 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1741 "modecheck_unify.m"
              {
#line 1741 "modecheck_unify.m"
                {
#line 1741 "modecheck_unify.m"
                  MR_Word base;
#line 1741 "modecheck_unify.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1741 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1741 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Mode_8));
#line 1741 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Modes_9));
#line 1741 "modecheck_unify.m"
                }
#line 1741 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1741 "modecheck_unify.m"
              }
#line 1741 "modecheck_unify.m"
          }
#line 1741 "modecheck_unify.m"
      }
#line 1740 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1740 "modecheck_unify.m"
  }
#line 1737 "modecheck_unify.m"
}

#line 1709 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
#line 1709 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1709 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1709 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6)
#line 1709 "modecheck_unify.m"
{
#line 1714 "modecheck_unify.m"
  while (MR_TRUE)
#line 1714 "modecheck_unify.m"
    {
#line 1714 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1714 "modecheck_unify.m"
      {
#line 1714 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1714 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1714 "modecheck_unify.m"
          {
#line 1715 "modecheck_unify.m"
            {
#line 1715 "modecheck_unify.m"
              check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__ArgModes_6);
            }
#line 1714 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1714 "modecheck_unify.m"
          }
#line 1714 "modecheck_unify.m"
        else
#line 1714 "modecheck_unify.m"
          if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1717 "modecheck_unify.m"
            {
#line 1717 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));
#line 1717 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)));

#line 1717 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1717 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 1717 "modecheck_unify.m"
                {
#line 1718 "modecheck_unify.m"
                  {
#line 1718 "modecheck_unify.m"
                    check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__Inst_4, check_hlds__modecheck_unify__ArgModes_6);
                  }
#line 1718 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1717 "modecheck_unify.m"
                }
#line 1717 "modecheck_unify.m"
            }
#line 1714 "modecheck_unify.m"
          else
#line 1714 "modecheck_unify.m"
            if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1723 "modecheck_unify.m"
              {
#line 1723 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 3)));
#line 1723 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify___Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));
#line 1723 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify___InstResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));

#line 1728 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__BoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1725 "modecheck_unify.m"
                  {
#line 1727 "modecheck_unify.m"
                    {
#line 1727 "modecheck_unify.m"
                      check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__ArgModes_6);
                    }
#line 1725 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1725 "modecheck_unify.m"
                  }
#line 1728 "modecheck_unify.m"
                else
#line 1729 "modecheck_unify.m"
                  {
#line 1729 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__FunctorArgInsts_12;
#line 1729 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_10, (MR_Integer) 0)));
#line 1729 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_10, (MR_Integer) 1)));
#line 1729 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify___Name_11;

#line 1729 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1729 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1729 "modecheck_unify.m"
                      {
#line 1729 "modecheck_unify.m"
                        check_hlds__modecheck_unify___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_15_15, (MR_Integer) 0)));
#line 1729 "modecheck_unify.m"
                        check_hlds__modecheck_unify__FunctorArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_15_15, (MR_Integer) 1)));
#line 1730 "modecheck_unify.m"
                        {
#line 1730 "modecheck_unify.m"
                          return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__get_mode_of_args_2_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__FunctorArgInsts_12, check_hlds__modecheck_unify__ArgModes_6);
                        }
#line 1729 "modecheck_unify.m"
                      }
#line 1729 "modecheck_unify.m"
                  }
#line 1723 "modecheck_unify.m"
              }
#line 1714 "modecheck_unify.m"
            else
#line 1714 "modecheck_unify.m"
              if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1733 "modecheck_unify.m"
                {
#line 1733 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__SubInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));
#line 1733 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));

#line 1734 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1734 "modecheck_unify.m"
                  {
#line 1734 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Inst__tmp_copy_4 = check_hlds__modecheck_unify__SubInst_14;

#line 1734 "modecheck_unify.m"
                    check_hlds__modecheck_unify__Inst_4 = check_hlds__modecheck_unify__Inst__tmp_copy_4;
#line 1734 "modecheck_unify.m"
                  }
#line 1734 "modecheck_unify.m"
                  continue;
#line 1733 "modecheck_unify.m"
                }
#line 1714 "modecheck_unify.m"
              else
#line 1714 "modecheck_unify.m"
                if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1720 "modecheck_unify.m"
                  {
#line 1720 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));
#line 1720 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));

#line 1720 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1720 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1720 "modecheck_unify.m"
                      {
#line 1721 "modecheck_unify.m"
                        {
#line 1721 "modecheck_unify.m"
                          check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__Inst_4, check_hlds__modecheck_unify__ArgModes_6);
                        }
#line 1721 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1720 "modecheck_unify.m"
                      }
#line 1720 "modecheck_unify.m"
                  }
#line 1714 "modecheck_unify.m"
                else
#line 1714 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_FALSE;
#line 1714 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1714 "modecheck_unify.m"
      }
#line 1714 "modecheck_unify.m"
      break;
#line 1714 "modecheck_unify.m"
    }
#line 1709 "modecheck_unify.m"
}

#line 1693 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1693 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1693 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1693 "modecheck_unify.m"
{
#line 1696 "modecheck_unify.m"
  while (MR_TRUE)
#line 1696 "modecheck_unify.m"
    {
#line 1696 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1696 "modecheck_unify.m"
      {
#line 1696 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1696 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1696 "modecheck_unify.m"
          {
#line 1696 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1696 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1696 "modecheck_unify.m"
              {
#line 1696 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1696 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1696 "modecheck_unify.m"
              }
#line 1696 "modecheck_unify.m"
          }
#line 1696 "modecheck_unify.m"
        else
#line 1697 "modecheck_unify.m"
          {
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_18_18;
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19;
#line 1697 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_20_20;

#line 1697 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1697 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1697 "modecheck_unify.m"
              {
#line 1697 "modecheck_unify.m"
                check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
#line 1697 "modecheck_unify.m"
                check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
#line 1698 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1698 "modecheck_unify.m"
                {
#line 1698 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1698 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_unify__HeadVar__1_1));
#line 1698 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_20_20));
#line 1698 "modecheck_unify.m"
                }
#line 1698 "modecheck_unify.m"
                {
#line 1698 "modecheck_unify.m"
                  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_11, check_hlds__modecheck_unify__V_18_18, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19);
                }
#line 1699 "modecheck_unify.m"
                {
#line 1699 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1699 "modecheck_unify.m"
                  {
#line 1699 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Args_12;
#line 1699 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1699 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19;

#line 1699 "modecheck_unify.m"
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1699 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
#line 1699 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 1699 "modecheck_unify.m"
                  }
#line 1699 "modecheck_unify.m"
                  continue;
#line 1699 "modecheck_unify.m"
                }
#line 1697 "modecheck_unify.m"
              }
#line 1697 "modecheck_unify.m"
          }
#line 1696 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1696 "modecheck_unify.m"
      }
#line 1696 "modecheck_unify.m"
      break;
#line 1696 "modecheck_unify.m"
    }
#line 1693 "modecheck_unify.m"
}

#line 1684 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1684 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1684 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1684 "modecheck_unify.m"
{
#line 1687 "modecheck_unify.m"
  while (MR_TRUE)
#line 1687 "modecheck_unify.m"
    {
#line 1687 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1687 "modecheck_unify.m"
      {
#line 1687 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1687 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "modecheck_unify.m"
          {
#line 1687 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1687 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1687 "modecheck_unify.m"
              {
#line 1687 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1687 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1687 "modecheck_unify.m"
                  {
#line 1687 "modecheck_unify.m"
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1687 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1687 "modecheck_unify.m"
                  }
#line 1687 "modecheck_unify.m"
              }
#line 1687 "modecheck_unify.m"
          }
#line 1687 "modecheck_unify.m"
        else
#line 1689 "modecheck_unify.m"
          {
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Inst_11;
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Insts_12;
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1689 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

#line 1689 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1689 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1689 "modecheck_unify.m"
              {
#line 1689 "modecheck_unify.m"
                check_hlds__modecheck_unify__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1689 "modecheck_unify.m"
                check_hlds__modecheck_unify__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1689 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1689 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1689 "modecheck_unify.m"
                  {
#line 1689 "modecheck_unify.m"
                    check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
#line 1689 "modecheck_unify.m"
                    check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
#line 1690 "modecheck_unify.m"
                    {
#line 1690 "modecheck_unify.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_9, check_hlds__modecheck_unify__Inst_11, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18);
                    }
#line 1691 "modecheck_unify.m"
                    {
#line 1691 "modecheck_unify.m"
                      /* direct tailcall eliminated */
#line 1691 "modecheck_unify.m"
                      {
#line 1691 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__Args_10;
#line 1691 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Insts_12;
#line 1691 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1691 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

#line 1691 "modecheck_unify.m"
                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1691 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
#line 1691 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 1691 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 1691 "modecheck_unify.m"
                      }
#line 1691 "modecheck_unify.m"
                      continue;
#line 1691 "modecheck_unify.m"
                    }
#line 1689 "modecheck_unify.m"
                  }
#line 1689 "modecheck_unify.m"
              }
#line 1689 "modecheck_unify.m"
          }
#line 1687 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1687 "modecheck_unify.m"
      }
#line 1687 "modecheck_unify.m"
      break;
#line 1687 "modecheck_unify.m"
    }
#line 1684 "modecheck_unify.m"
}

#line 1657 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1657 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 1657 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
#line 1657 "modecheck_unify.m"
{
#line 1662 "modecheck_unify.m"
  while (MR_TRUE)
#line 1662 "modecheck_unify.m"
    {
#line 1662 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1662 "modecheck_unify.m"
      {
#line 1662 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1662 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1662 "modecheck_unify.m"
          {
#line 1662 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InstMap_10;

#line 1663 "modecheck_unify.m"
            {
#line 1663 "modecheck_unify.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_10);
            }
#line 1664 "modecheck_unify.m"
            {
#line 1664 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_10, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
            }
#line 1662 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1662 "modecheck_unify.m"
          }
#line 1662 "modecheck_unify.m"
        else
#line 1662 "modecheck_unify.m"
          if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1669 "modecheck_unify.m"
            {
#line 1669 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 3)));
#line 1669 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify___Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
#line 1669 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify___InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

#line 1675 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1671 "modecheck_unify.m"
                {
#line 1671 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__InstMap_29;

#line 1673 "modecheck_unify.m"
                  {
#line 1673 "modecheck_unify.m"
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_29);
                  }
#line 1674 "modecheck_unify.m"
                  {
#line 1674 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                  }
#line 1671 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1671 "modecheck_unify.m"
                }
#line 1675 "modecheck_unify.m"
              else
#line 1676 "modecheck_unify.m"
                {
#line 1676 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__ArgInsts_16;
#line 1676 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 0)));
#line 1676 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 1)));
#line 1676 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 0)));

#line 1676 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ArgInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 1)));
#line 1676 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1676 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 1677 "modecheck_unify.m"
                    {
#line 1677 "modecheck_unify.m"
                      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_2_5_p_0(check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__ArgInsts_16, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                    }
#line 1676 "modecheck_unify.m"
                }
#line 1669 "modecheck_unify.m"
            }
#line 1662 "modecheck_unify.m"
          else
#line 1662 "modecheck_unify.m"
            if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1680 "modecheck_unify.m"
              {
#line 1680 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));
#line 1680 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));

#line 1681 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1681 "modecheck_unify.m"
                {
#line 1681 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__Inst__tmp_copy_6 = check_hlds__modecheck_unify__SubInst_18;

#line 1681 "modecheck_unify.m"
                  check_hlds__modecheck_unify__Inst_6 = check_hlds__modecheck_unify__Inst__tmp_copy_6;
#line 1681 "modecheck_unify.m"
                }
#line 1681 "modecheck_unify.m"
                continue;
#line 1680 "modecheck_unify.m"
              }
#line 1662 "modecheck_unify.m"
            else
#line 1662 "modecheck_unify.m"
              if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1666 "modecheck_unify.m"
                {
#line 1666 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
#line 1666 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

#line 1666 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1666 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 1667 "modecheck_unify.m"
                    {
#line 1667 "modecheck_unify.m"
                      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(check_hlds__modecheck_unify__Uniq_11, check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                    }
#line 1666 "modecheck_unify.m"
                }
#line 1662 "modecheck_unify.m"
              else
#line 1662 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
#line 1662 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1662 "modecheck_unify.m"
      }
#line 1662 "modecheck_unify.m"
      break;
#line 1662 "modecheck_unify.m"
    }
#line 1657 "modecheck_unify.m"
}

#line 1647 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__bind_args_5_p_0(
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Args_7,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1647 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_10,
#line 1647 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_11)
#line 1647 "modecheck_unify.m"
{
#line 1653 "modecheck_unify.m"
  {
#line 1653 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1653 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_12;

#line 1651 "modecheck_unify.m"
    {
#line 1651 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(check_hlds__modecheck_unify__Inst_6, check_hlds__modecheck_unify__Args_7, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_10, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_12);
    }
#line 1653 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1651 "modecheck_unify.m"
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_11 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_12;
#line 1653 "modecheck_unify.m"
    else
#line 1654 "modecheck_unify.m"
      {
#line 1654 "modecheck_unify.m"
        {
#line 1654 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
#line 1654 "modecheck_unify.m"
          return;
        }
#line 1654 "modecheck_unify.m"
      }
#line 1653 "modecheck_unify.m"
  }
#line 1647 "modecheck_unify.m"
}

#line 1610 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
#line 1610 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
#line 1610 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6)
#line 1610 "modecheck_unify.m"
{
#line 1614 "modecheck_unify.m"
  while (MR_TRUE)
#line 1614 "modecheck_unify.m"
    {
#line 1614 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1614 "modecheck_unify.m"
      {
#line 1614 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1614 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1614 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 0;
#line 1614 "modecheck_unify.m"
        else
#line 1617 "modecheck_unify.m"
          {
#line 1617 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 0)));
#line 1617 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 1)));
#line 1617 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgMode_18;
#line 1617 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgModes_19;
#line 1617 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Initial_20;
#line 1629 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_28_28;
#line 1629 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_21_21;
#line 1629 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_22_22;

#line 1620 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__ArgModesList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1621 "modecheck_unify.m"
              {
#line 1622 "modecheck_unify.m"
                {
#line 1622 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.match_mode_by_higher_order_insts\'/6", (MR_String) "too many arguments");
#line 1622 "modecheck_unify.m"
                  return;
                }
#line 1621 "modecheck_unify.m"
              }
#line 1620 "modecheck_unify.m"
            else
#line 1619 "modecheck_unify.m"
              {
#line 1619 "modecheck_unify.m"
                check_hlds__modecheck_unify__ArgMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 0)));
#line 1619 "modecheck_unify.m"
                check_hlds__modecheck_unify__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 1)));
#line 1619 "modecheck_unify.m"
              }
#line 1628 "modecheck_unify.m"
            {
#line 1628 "modecheck_unify.m"
              check_hlds__modecheck_unify__Initial_20 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgMode_18);
            }
#line 1629 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Initial_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1629 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1629 "modecheck_unify.m"
              {
#line 1629 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 1)));
#line 1629 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 2)));
#line 1629 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1629 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1629 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_unify__V_28_28), (MR_Integer) 1);
#line 1629 "modecheck_unify.m"
              }
#line 1640 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1630 "modecheck_unify.m"
              {
#line 1630 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ArgInst_23;
#line 1630 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ArgType_24;

#line 1630 "modecheck_unify.m"
                {
#line 1630 "modecheck_unify.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgInst_23);
                }
#line 1631 "modecheck_unify.m"
                {
#line 1631 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__3_3, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgType_24);
                }
#line 1632 "modecheck_unify.m"
                {
#line 1632 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__ArgInst_23, check_hlds__modecheck_unify__Initial_20, check_hlds__modecheck_unify__ArgType_24, check_hlds__modecheck_unify__HeadVar__1_1);
                }
#line 1635 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1633 "modecheck_unify.m"
                  {
#line 1633 "modecheck_unify.m"
                    /* direct tailcall eliminated */
#line 1633 "modecheck_unify.m"
                    {
#line 1633 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
#line 1633 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

#line 1633 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
#line 1633 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
#line 1633 "modecheck_unify.m"
                    }
#line 1633 "modecheck_unify.m"
                    continue;
#line 1633 "modecheck_unify.m"
                  }
#line 1635 "modecheck_unify.m"
                else
#line 1637 "modecheck_unify.m"
                  {
#line 1635 "modecheck_unify.m"
                    {
#line 1635 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgInst_23);
                    }
#line 1635 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1637 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1636 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 2;
#line 1637 "modecheck_unify.m"
                    else
#line 1638 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 1;
#line 1637 "modecheck_unify.m"
                  }
#line 1630 "modecheck_unify.m"
              }
#line 1640 "modecheck_unify.m"
            else
#line 1641 "modecheck_unify.m"
              {
#line 1641 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1641 "modecheck_unify.m"
                {
#line 1641 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
#line 1641 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

#line 1641 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
#line 1641 "modecheck_unify.m"
                  check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
#line 1641 "modecheck_unify.m"
                }
#line 1641 "modecheck_unify.m"
                continue;
#line 1641 "modecheck_unify.m"
              }
#line 1617 "modecheck_unify.m"
          }
#line 1614 "modecheck_unify.m"
      }
#line 1614 "modecheck_unify.m"
      break;
#line 1614 "modecheck_unify.m"
    }
#line 1610 "modecheck_unify.m"
}

#line 1583 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap_2,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
#line 1583 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
#line 1583 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Result_8)
#line 1583 "modecheck_unify.m"
{
#line 1588 "modecheck_unify.m"
  while (MR_TRUE)
#line 1588 "modecheck_unify.m"
    {
#line 1588 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1588 "modecheck_unify.m"
      {
#line 1588 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1588 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1588 "modecheck_unify.m"
          {
#line 1588 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_16_16;

#line 1589 "modecheck_unify.m"
            {
#line 1589 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_16_16 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__modecheck_unify__RevMatchedProcIds_7);
            }
#line 1589 "modecheck_unify.m"
            {
#line 1589 "modecheck_unify.m"
              MR_Word base;
#line 1589 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Result_8 = base;
#line 1589 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_16_16));
#line 1589 "modecheck_unify.m"
            }
#line 1588 "modecheck_unify.m"
          }
#line 1588 "modecheck_unify.m"
        else
#line 1591 "modecheck_unify.m"
          {
#line 1591 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 0)));
#line 1591 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 1)));
#line 1591 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcInfo_26;
#line 1591 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgModes_27;
#line 1591 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcResult_28;

#line 1592 "modecheck_unify.m"
            {
#line 1592 "modecheck_unify.m"
              hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__modecheck_unify__PredInfo_5, check_hlds__modecheck_unify__ProcId_22, &check_hlds__modecheck_unify__ProcInfo_26);
            }
#line 1593 "modecheck_unify.m"
            {
#line 1593 "modecheck_unify.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_unify__ProcInfo_26, &check_hlds__modecheck_unify__ArgModes_27);
            }
#line 1594 "modecheck_unify.m"
            {
#line 1594 "modecheck_unify.m"
              check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(check_hlds__modecheck_unify__ModuleInfo_1, check_hlds__modecheck_unify__InstMap_2, check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__ArgVars_4, check_hlds__modecheck_unify__ArgModes_27, &check_hlds__modecheck_unify__ProcResult_28);
            }
#line 1601 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__ProcResult_28 == (MR_Integer) 2))
#line 1607 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1601 "modecheck_unify.m"
            else
#line 1601 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__ProcResult_28 == (MR_Integer) 1))
#line 1603 "modecheck_unify.m"
                {
#line 1603 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1603 "modecheck_unify.m"
                  {
#line 1603 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;

#line 1603 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
#line 1603 "modecheck_unify.m"
                  }
#line 1603 "modecheck_unify.m"
                  continue;
#line 1603 "modecheck_unify.m"
                }
#line 1601 "modecheck_unify.m"
              else
#line 1597 "modecheck_unify.m"
                {
#line 1597 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_29_29;

#line 1598 "modecheck_unify.m"
                  {
#line 1598 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__ProcId_22));
#line 1598 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__RevMatchedProcIds_7));
#line 1598 "modecheck_unify.m"
                  }
#line 1598 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1598 "modecheck_unify.m"
                  {
#line 1598 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;
#line 1598 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7 = check_hlds__modecheck_unify__V_29_29;

#line 1598 "modecheck_unify.m"
                    check_hlds__modecheck_unify__RevMatchedProcIds_7 = check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7;
#line 1598 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
#line 1598 "modecheck_unify.m"
                  }
#line 1598 "modecheck_unify.m"
                  continue;
#line 1597 "modecheck_unify.m"
                }
#line 1591 "modecheck_unify.m"
          }
#line 1588 "modecheck_unify.m"
      }
#line 1588 "modecheck_unify.m"
      break;
#line 1588 "modecheck_unify.m"
    }
#line 1583 "modecheck_unify.m"
}

#line 1466 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
#line 1466 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 1466 "modecheck_unify.m"
{
#line 1466 "modecheck_unify.m"
  {
#line 1466 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1466 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 1466 "modecheck_unify.m"
    {
#line 1466 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1466__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 1466 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1466 "modecheck_unify.m"
  }
#line 1466 "modecheck_unify.m"
}

#line 1450 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_13,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfXArgs_14,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_15,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_16,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_21,
#line 1450 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_22,
#line 1450 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
#line 1450 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71)
#line 1450 "modecheck_unify.m"
{
#line 1458 "modecheck_unify.m"
  {
#line 1458 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1458 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_24;
#line 1458 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeOfX_25;
#line 1458 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubInfo_35;
#line 1458 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_36;
#line 1458 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes_49;

#line 1459 "modecheck_unify.m"
    {
#line 1459 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__ModuleInfo_24);
    }
#line 1460 "modecheck_unify.m"
    {
#line 1460 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__X_16, &check_hlds__modecheck_unify__TypeOfX_25);
    }
#line 1472 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_21)) == (MR_mktag((MR_Integer) 0))))
#line 1463 "modecheck_unify.m"
      {
#line 1463 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
#line 1463 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_28_28;
#line 1463 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_29_29;
#line 1463 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_30_30;
#line 1463 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_31_31;

#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
#line 1463 "modecheck_unify.m"
        check_hlds__modecheck_unify__SubInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 6)));
#line 1467 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__SubInfo_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "modecheck_unify.m"
          {
#line 1468 "modecheck_unify.m"
          }
#line 1467 "modecheck_unify.m"
        else
#line 1465 "modecheck_unify.m"
          {
#line 1465 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_35, (MR_Integer) 0)));
#line 1465 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1465 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify___MaybeSize0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_35, (MR_Integer) 1)));

#line 1466 "modecheck_unify.m"
            {
#line 1466 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3]));
#line 1466 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1));
#line 1466 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1466 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_33));
#line 1466 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "modecheck_unify.m"
            }
#line 1466 "modecheck_unify.m"
            {
#line 1466 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_72_72, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/12", (MR_String) "take_addr");
            }
#line 1465 "modecheck_unify.m"
          }
#line 1463 "modecheck_unify.m"
      }
#line 1472 "modecheck_unify.m"
    else
#line 1472 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_21)) == (MR_mktag((MR_Integer) 1))))
#line 1473 "modecheck_unify.m"
        {
#line 1473 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
#line 1473 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_38_38;
#line 1473 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_39_39;
#line 1473 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_40_40;
#line 1473 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_41_41;

#line 1473 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
#line 1473 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
#line 1473 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
#line 1473 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
#line 1473 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
#line 1474 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1473 "modecheck_unify.m"
        }
#line 1472 "modecheck_unify.m"
      else
#line 1480 "modecheck_unify.m"
        {
#line 1481 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1482 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_36 = check_hlds__modecheck_unify__NewConsId_17;
#line 1480 "modecheck_unify.m"
        }
#line 1484 "modecheck_unify.m"
    {
#line 1484 "modecheck_unify.m"
      check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfXArgs_14, check_hlds__modecheck_unify__ArgModes0_15, &check_hlds__modecheck_unify__ArgModes_49);
    }
#line 1485 "modecheck_unify.m"
    {
#line 1485 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfX_13);
    }
#line 1497 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1488 "modecheck_unify.m"
      {
#line 1488 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_79_79;
#line 1488 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80;
#line 1488 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81;

#line 1487 "modecheck_unify.m"
        {
#line 1487 "modecheck_unify.m"
          MR_Word base;
#line 1487 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_22 = base;
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_49));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1487 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_35));
#line 1487 "modecheck_unify.m"
        }
#line 1492 "modecheck_unify.m"
        {
#line 1492 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_79_79, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_20));
#line 1492 "modecheck_unify.m"
        }
#line 1492 "modecheck_unify.m"
        {
#line 1492 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_79_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80);
        }
#line 1494 "modecheck_unify.m"
        {
#line 1494 "modecheck_unify.m"
          check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(check_hlds__modecheck_unify__ArgVars_18, check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81);
        }
#line 1496 "modecheck_unify.m"
        {
#line 1496 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
#line 1496 "modecheck_unify.m"
          return;
        }
#line 1488 "modecheck_unify.m"
      }
#line 1497 "modecheck_unify.m"
    else
#line 1535 "modecheck_unify.m"
      {
#line 1535 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__CanFail_60;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInst0_50;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInst0_51;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInst_52;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInst_53;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_83_83;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_84_84;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_85_85;
#line 1506 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_86_86;
#line 1509 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_54_54;
#line 1509 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_55_55;
#line 1509 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_56_56;
#line 1510 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1510 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_58_58;
#line 1510 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_59_59;

#line 1506 "modecheck_unify.m"
        {
#line 1506 "modecheck_unify.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfX_13, &check_hlds__modecheck_unify__InitialInst0_50, &check_hlds__modecheck_unify__FinalInst0_51);
        }
#line 1507 "modecheck_unify.m"
        {
#line 1507 "modecheck_unify.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__InitialInst0_50, &check_hlds__modecheck_unify__InitialInst_52);
        }
#line 1508 "modecheck_unify.m"
        {
#line 1508 "modecheck_unify.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__FinalInst0_51, &check_hlds__modecheck_unify__FinalInst_53);
        }
#line 1509 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__InitialInst_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1509 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1509 "modecheck_unify.m"
          {
#line 1509 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 1)));
#line 1509 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 2)));
#line 1509 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 3)));
#line 1509 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 1509 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1509 "modecheck_unify.m"
              {
#line 1509 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 0)));
#line 1509 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 1)));
#line 1509 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1506 "modecheck_unify.m"
                  {
#line 1510 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__FinalInst_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1510 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1510 "modecheck_unify.m"
                      {
#line 1510 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 1)));
#line 1510 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 2)));
#line 1510 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 3)));
#line 1510 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 1510 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1510 "modecheck_unify.m"
                          {
#line 1510 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 0)));
#line 1510 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 1)));
#line 1510 "modecheck_unify.m"
                            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1510 "modecheck_unify.m"
                          }
#line 1510 "modecheck_unify.m"
                      }
#line 1506 "modecheck_unify.m"
                  }
#line 1509 "modecheck_unify.m"
              }
#line 1509 "modecheck_unify.m"
          }
#line 1513 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1512 "modecheck_unify.m"
          {
#line 1512 "modecheck_unify.m"
            check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
#line 1512 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1512 "modecheck_unify.m"
          }
#line 1513 "modecheck_unify.m"
        else
#line 1520 "modecheck_unify.m"
          {
#line 1516 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Constructors_61;
#line 1516 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_87_87;
#line 1517 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_62_62;

#line 1516 "modecheck_unify.m"
            {
#line 1516 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__TypeOfX_25, &check_hlds__modecheck_unify__Constructors_61);
            }
#line 1516 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1516 "modecheck_unify.m"
              {
#line 1517 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Constructors_61)) == (MR_mktag((MR_Integer) 1)));
#line 1517 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1517 "modecheck_unify.m"
                  {
#line 1517 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 0)));
#line 1517 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 1)));
#line 1517 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1517 "modecheck_unify.m"
                  }
#line 1516 "modecheck_unify.m"
              }
#line 1520 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1519 "modecheck_unify.m"
              {
#line 1519 "modecheck_unify.m"
                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
#line 1519 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1519 "modecheck_unify.m"
              }
#line 1520 "modecheck_unify.m"
            else
#line 1522 "modecheck_unify.m"
              {
#line 1522 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__InstMap0_63;
#line 1532 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredOrFunc_65;
#line 1525 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1525 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_67_67;

#line 1522 "modecheck_unify.m"
                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 0;
#line 1523 "modecheck_unify.m"
                {
#line 1523 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__InstMap0_63);
                }
#line 1525 "modecheck_unify.m"
                {
#line 1525 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_25, &check_hlds__modecheck_unify__V_64_64, &check_hlds__modecheck_unify__PredOrFunc_65, &check_hlds__modecheck_unify__V_67_67);
                }
#line 1525 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1526 "modecheck_unify.m"
                  {
#line 1526 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap0_63);
                  }
#line 1532 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1528 "modecheck_unify.m"
                  {
#line 1528 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__WaitingVars_68;
#line 1528 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ModeError_69;
#line 1528 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_88_88;

#line 1528 "modecheck_unify.m"
                    {
#line 1528 "modecheck_unify.m"
                      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_68);
                    }
#line 1529 "modecheck_unify.m"
                    {
#line 1529 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1529 "modecheck_unify.m"
                    }
#line 1529 "modecheck_unify.m"
                    {
#line 1529 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ModeError_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_88_88));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 3) = ((MR_Box) (check_hlds__modecheck_unify__TypeOfX_25));
#line 1529 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_65));
#line 1529 "modecheck_unify.m"
                    }
#line 1531 "modecheck_unify.m"
                    {
#line 1531 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_68, check_hlds__modecheck_unify__ModeError_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
                    }
#line 1528 "modecheck_unify.m"
                  }
#line 1532 "modecheck_unify.m"
                else
#line 1531 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1522 "modecheck_unify.m"
              }
#line 1520 "modecheck_unify.m"
          }
#line 1536 "modecheck_unify.m"
        {
#line 1536 "modecheck_unify.m"
          MR_Word base;
#line 1536 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_22 = base;
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_49));
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_60));
#line 1536 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1536 "modecheck_unify.m"
        }
#line 1535 "modecheck_unify.m"
      }
#line 1458 "modecheck_unify.m"
  }
#line 1450 "modecheck_unify.m"
}

#line 1361 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
#line 1361 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 1361 "modecheck_unify.m"
{
#line 1361 "modecheck_unify.m"
  {
#line 1361 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1361 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 1361 "modecheck_unify.m"
    {
#line 1361 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1361__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 1361 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1361 "modecheck_unify.m"
  }
#line 1361 "modecheck_unify.m"
}

#line 1348 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_12,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_13,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_14,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_17,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_18,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1348 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
#line 1348 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81)
#line 1348 "modecheck_unify.m"
{
#line 1354 "modecheck_unify.m"
  {
#line 1354 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1354 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Arity_22;
#line 1354 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_24;
#line 1354 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubInfo_29;
#line 1354 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_45;
#line 1354 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes_46;
#line 1354 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_47;

#line 1356 "modecheck_unify.m"
    {
#line 1356 "modecheck_unify.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__Arity_22);
    }
#line 1365 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1358 "modecheck_unify.m"
      {
#line 1358 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
#line 1358 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_25_25;
#line 1358 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_26_26;
#line 1358 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_27_27;
#line 1358 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_28_28;

#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
#line 1358 "modecheck_unify.m"
        check_hlds__modecheck_unify__SubInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 6)));
#line 1362 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__SubInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1363 "modecheck_unify.m"
          {
#line 1363 "modecheck_unify.m"
          }
#line 1362 "modecheck_unify.m"
        else
#line 1360 "modecheck_unify.m"
          {
#line 1360 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 0)));
#line 1360 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_87_87;
#line 1360 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify___MaybeSize_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 1)));

#line 1361 "modecheck_unify.m"
            {
#line 1361 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3]));
#line 1361 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1));
#line 1361 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1361 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30));
#line 1361 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "modecheck_unify.m"
            }
#line 1361 "modecheck_unify.m"
            {
#line 1361 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_87_87, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "take_addr");
            }
#line 1360 "modecheck_unify.m"
          }
#line 1358 "modecheck_unify.m"
      }
#line 1365 "modecheck_unify.m"
    else
#line 1365 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 1))))
#line 1366 "modecheck_unify.m"
        {
#line 1366 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
#line 1366 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_33_33;
#line 1366 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_34_34;
#line 1366 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_35_35;
#line 1366 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_36_36;

#line 1366 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1366 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1366 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1366 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
#line 1366 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
#line 1367 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "modecheck_unify.m"
        }
#line 1365 "modecheck_unify.m"
      else
#line 1372 "modecheck_unify.m"
        {
#line 1373 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1377 "modecheck_unify.m"
          {
#line 1377 "modecheck_unify.m"
            check_hlds__modecheck_unify__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1377 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[1]));
#line 1377 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
#line 1377 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[10]));
#line 1377 "modecheck_unify.m"
          }
#line 1372 "modecheck_unify.m"
        }
#line 1379 "modecheck_unify.m"
    {
#line 1379 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__ModuleInfo_45);
    }
#line 1380 "modecheck_unify.m"
    {
#line 1380 "modecheck_unify.m"
      check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__ArgModes0_13, check_hlds__modecheck_unify__ArgModes0_13, &check_hlds__modecheck_unify__ArgModes_46);
    }
#line 1381 "modecheck_unify.m"
    {
#line 1381 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__InstMap_47);
    }
#line 1382 "modecheck_unify.m"
    {
#line 1382 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__ModeOfX_12);
    }
#line 1427 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1424 "modecheck_unify.m"
      {
#line 1422 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_48;

#line 1392 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1392 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1392 "modecheck_unify.m"
          {
#line 1392 "modecheck_unify.m"
            check_hlds__modecheck_unify__ShroudedPredProcId_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 1)));
#line 1393 "modecheck_unify.m"
            {
#line 1393 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_47);
            }
#line 1392 "modecheck_unify.m"
          }
#line 1422 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1395 "modecheck_unify.m"
          {
#line 1395 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__PredId_50;
#line 1395 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__ProcId_51;
#line 1395 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_93_93;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Goal_59;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_94_94;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_119_119;
#line 1397 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__V_120_120;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_52_52;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_53_53;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_54_54;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_55_55;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_56_56;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1397 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_58_58;
#line 1398 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1398 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_60_60;
#line 1398 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_61_61;
#line 1398 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_62_62;
#line 1398 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63;

#line 1395 "modecheck_unify.m"
            {
#line 1395 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_93_93 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_48);
            }
#line 1395 "modecheck_unify.m"
            check_hlds__modecheck_unify__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 0)));
#line 1395 "modecheck_unify.m"
            check_hlds__modecheck_unify__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 1)));
#line 1397 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS0_17)) == (MR_mktag((MR_Integer) 2)));
#line 1397 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1397 "modecheck_unify.m"
              {
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 2)));
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 3)));
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 4)));
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 5)));
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__Goal_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 6)));
#line 1397 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1397 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1397 "modecheck_unify.m"
                  {
#line 1398 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 0)));
#line 1398 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 1)));
#line 1398 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_94_94)) == (MR_mktag((MR_Integer) 2)));
#line 1398 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1398 "modecheck_unify.m"
                      {
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 0)));
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 1)));
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 2)));
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 3)));
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 4)));
#line 1398 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 5)));
#line 1398 "modecheck_unify.m"
                        {
#line 1398 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__modecheck_unify__PredId_50, check_hlds__modecheck_unify__V_119_119);
                        }
#line 1397 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1398 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__ProcId_51 == check_hlds__modecheck_unify__V_120_120);
#line 1398 "modecheck_unify.m"
                      }
#line 1397 "modecheck_unify.m"
                  }
#line 1397 "modecheck_unify.m"
              }
#line 1419 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1400 "modecheck_unify.m"
              {
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredInfo_65;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredModule_66;
#line 1400 "modecheck_unify.m"
                MR_String check_hlds__modecheck_unify__PredName_67;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes_68;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Type_69;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__RHSTypeCtor_74;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__RHSConsId_76;
#line 1400 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_104_104;
#line 1413 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__MaybeReturnType_71;
#line 1405 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_70_70;
#line 1405 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_72_72;

#line 1400 "modecheck_unify.m"
                {
#line 1400 "modecheck_unify.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__PredId_50, &check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1401 "modecheck_unify.m"
                {
#line 1401 "modecheck_unify.m"
                  check_hlds__modecheck_unify__PredModule_66 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1402 "modecheck_unify.m"
                {
#line 1402 "modecheck_unify.m"
                  check_hlds__modecheck_unify__PredName_67 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1403 "modecheck_unify.m"
                {
#line 1403 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes_68);
                }
#line 1404 "modecheck_unify.m"
                {
#line 1404 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_68, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_69);
                }
#line 1405 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1405 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1405 "modecheck_unify.m"
                  {
#line 1405 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 1)));
#line 1405 "modecheck_unify.m"
                    check_hlds__modecheck_unify__MaybeReturnType_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 2)));
#line 1405 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 3)));
#line 1409 "modecheck_unify.m"
                    if ((check_hlds__modecheck_unify__MaybeReturnType_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1407 "modecheck_unify.m"
                      {
#line 1408 "modecheck_unify.m"
                        check_hlds__modecheck_unify__RHSTypeCtor_74 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[11];
#line 1407 "modecheck_unify.m"
                      }
#line 1409 "modecheck_unify.m"
                    else
#line 1410 "modecheck_unify.m"
                      {
#line 1411 "modecheck_unify.m"
                        check_hlds__modecheck_unify__RHSTypeCtor_74 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[12];
#line 1410 "modecheck_unify.m"
                      }
#line 1405 "modecheck_unify.m"
                  }
#line 1405 "modecheck_unify.m"
                else
#line 1414 "modecheck_unify.m"
                  {
#line 1414 "modecheck_unify.m"
                    {
#line 1414 "modecheck_unify.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "bad HO type");
#line 1414 "modecheck_unify.m"
                      return;
                    }
#line 1414 "modecheck_unify.m"
                  }
#line 1416 "modecheck_unify.m"
                {
#line 1416 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredModule_66));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 1) = ((MR_Box) (check_hlds__modecheck_unify__PredName_67));
#line 1416 "modecheck_unify.m"
                }
#line 1416 "modecheck_unify.m"
                {
#line 1416 "modecheck_unify.m"
                  check_hlds__modecheck_unify__RHSConsId_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_104_104));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
#line 1416 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 3) = ((MR_Box) (check_hlds__modecheck_unify__RHSTypeCtor_74));
#line 1416 "modecheck_unify.m"
                }
#line 1418 "modecheck_unify.m"
                {
#line 1418 "modecheck_unify.m"
                  MR_Word base;
#line 1418 "modecheck_unify.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__RHS_18 = base;
#line 1418 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__RHSConsId_76));
#line 1418 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1418 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1418 "modecheck_unify.m"
                }
#line 1400 "modecheck_unify.m"
              }
#line 1419 "modecheck_unify.m"
            else
#line 1420 "modecheck_unify.m"
              {
#line 1420 "modecheck_unify.m"
                {
#line 1420 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "reintroduced lambda goal");
#line 1420 "modecheck_unify.m"
                  return;
                }
#line 1420 "modecheck_unify.m"
              }
#line 1395 "modecheck_unify.m"
          }
#line 1422 "modecheck_unify.m"
        else
#line 1423 "modecheck_unify.m"
          *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1425 "modecheck_unify.m"
        {
#line 1425 "modecheck_unify.m"
          MR_Word base;
#line 1425 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_20 = base;
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_24));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_46));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1425 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_29));
#line 1425 "modecheck_unify.m"
        }
#line 1425 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
#line 1424 "modecheck_unify.m"
      }
#line 1427 "modecheck_unify.m"
    else
#line 1440 "modecheck_unify.m"
      {
#line 1427 "modecheck_unify.m"
        {
#line 1427 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_47);
        }
#line 1440 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1431 "modecheck_unify.m"
          {
#line 1431 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_77;
#line 1431 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__VarTypes0_78;
#line 1431 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_79;
#line 1431 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_111_111;
#line 1431 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Type_113;

#line 1431 "modecheck_unify.m"
            {
#line 1431 "modecheck_unify.m"
              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_77);
            }
#line 1432 "modecheck_unify.m"
            {
#line 1432 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes0_78);
            }
#line 1433 "modecheck_unify.m"
            {
#line 1433 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_78, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_113);
            }
#line 1434 "modecheck_unify.m"
            {
#line 1434 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_111_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 0) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes0_13));
#line 1434 "modecheck_unify.m"
            }
#line 1434 "modecheck_unify.m"
            {
#line 1434 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_111_111));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_113));
#line 1434 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_16));
#line 1434 "modecheck_unify.m"
            }
#line 1436 "modecheck_unify.m"
            {
#line 1436 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_77, check_hlds__modecheck_unify__ModeError_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);
            }
#line 1438 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
#line 1439 "modecheck_unify.m"
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1431 "modecheck_unify.m"
          }
#line 1440 "modecheck_unify.m"
        else
#line 1441 "modecheck_unify.m"
          {
#line 1441 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
#line 1442 "modecheck_unify.m"
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1442 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
#line 1441 "modecheck_unify.m"
          }
#line 1440 "modecheck_unify.m"
      }
#line 1354 "modecheck_unify.m"
  }
#line 1348 "modecheck_unify.m"
}

#line 1241 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_12,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_13,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Type_14,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_17,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1241 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1241 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62,
#line 1241 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63)
#line 1241 "modecheck_unify.m"
{
#line 1247 "modecheck_unify.m"
  {
#line 1247 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_22;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InitialInstX_23;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalInstX_24;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InitialInstY_25;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalInstY_26;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UniMode_27;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__CanFail_28;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars_33;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo3_40;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_65_65;
#line 1247 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1253 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_29_29;
#line 1256 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars0_32;
#line 1254 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_30_30;
#line 1254 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_31_31;
#line 1281 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Errors_41;
#line 1282 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 1282 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_43_43;

#line 1249 "modecheck_unify.m"
    {
#line 1249 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_unify__ModuleInfo0_22);
    }
#line 1250 "modecheck_unify.m"
    {
#line 1250 "modecheck_unify.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_22, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__InitialInstX_23, &check_hlds__modecheck_unify__FinalInstX_24);
    }
#line 1251 "modecheck_unify.m"
    {
#line 1251 "modecheck_unify.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_22, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__InitialInstY_25, &check_hlds__modecheck_unify__FinalInstY_26);
    }
#line 1252 "modecheck_unify.m"
    {
#line 1252 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_23));
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_64_64, 1) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_25));
#line 1252 "modecheck_unify.m"
    }
#line 1252 "modecheck_unify.m"
    {
#line 1252 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_65_65, 0) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstX_24));
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_65_65, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstY_26));
#line 1252 "modecheck_unify.m"
    }
#line 1252 "modecheck_unify.m"
    {
#line 1252 "modecheck_unify.m"
      check_hlds__modecheck_unify__UniMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode_27, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_64_64));
#line 1252 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_65_65));
#line 1252 "modecheck_unify.m"
    }
#line 1253 "modecheck_unify.m"
    {
#line 1253 "modecheck_unify.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_unify__Det_17, &check_hlds__modecheck_unify__CanFail_28, &check_hlds__modecheck_unify__V_29_29);
    }
#line 1254 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1254 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1254 "modecheck_unify.m"
      {
#line 1254 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1254 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1254 "modecheck_unify.m"
        check_hlds__modecheck_unify__UnifyTypeInfoVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1255 "modecheck_unify.m"
        check_hlds__modecheck_unify__UnifyTypeInfoVars_33 = check_hlds__modecheck_unify__UnifyTypeInfoVars0_32;
#line 1254 "modecheck_unify.m"
      }
#line 1254 "modecheck_unify.m"
    else
#line 1257 "modecheck_unify.m"
      {
#line 1257 "modecheck_unify.m"
        {
#line 1257 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_complicated_unify\'/11", (MR_String) "non-complicated unify");
#line 1257 "modecheck_unify.m"
          return;
        }
#line 1257 "modecheck_unify.m"
      }
#line 1259 "modecheck_unify.m"
    {
#line 1259 "modecheck_unify.m"
      MR_Word base;
#line 1259 "modecheck_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "modecheck_unify.m"
      *check_hlds__modecheck_unify__Unification_20 = base;
#line 1259 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1259 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__UniMode_27));
#line 1259 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_28));
#line 1259 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__UnifyTypeInfoVars_33));
#line 1259 "modecheck_unify.m"
    }
#line 1266 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__UnifyTypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "modecheck_unify.m"
      check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62;
#line 1266 "modecheck_unify.m"
    else
#line 1267 "modecheck_unify.m"
      {
#line 1267 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__NumTypeInfoVars_36;
#line 1267 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ExpectedInsts_37;
#line 1267 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1267 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73;
#line 1267 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74;
#line 1273 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify___InstVarSub_39;

#line 1268 "modecheck_unify.m"
        {
#line 1268 "modecheck_unify.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__UnifyTypeInfoVars_33, &check_hlds__modecheck_unify__NumTypeInfoVars_36);
        }
#line 1269 "modecheck_unify.m"
        {
#line 1269 "modecheck_unify.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__NumTypeInfoVars_36, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[2]))), &check_hlds__modecheck_unify__ExpectedInsts_37);
        }
#line 1270 "modecheck_unify.m"
        {
#line 1270 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
#line 1270 "modecheck_unify.m"
        }
#line 1270 "modecheck_unify.m"
        {
#line 1270 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73);
        }
#line 1273 "modecheck_unify.m"
        {
#line 1273 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_unify__UnifyTypeInfoVars_33, check_hlds__modecheck_unify__ExpectedInsts_37, (MR_Integer) 0, &check_hlds__modecheck_unify___InstVarSub_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74);
        }
#line 1277 "modecheck_unify.m"
        {
#line 1277 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75);
        }
#line 1267 "modecheck_unify.m"
      }
#line 1279 "modecheck_unify.m"
    {
#line 1279 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__ModuleInfo3_40);
    }
#line 1281 "modecheck_unify.m"
    {
#line 1281 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__Errors_41);
    }
#line 1282 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Errors_41)) == (MR_mktag((MR_Integer) 1)));
#line 1282 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1282 "modecheck_unify.m"
      {
#line 1282 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_41, (MR_Integer) 0)));
#line 1282 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_41, (MR_Integer) 1)));
#line 1282 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1282 "modecheck_unify.m"
      }
#line 1282 "modecheck_unify.m"
    else
#line 1297 "modecheck_unify.m"
      {
#line 1291 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_44_44;
#line 1291 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_45_45;

#line 1291 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
#line 1291 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1291 "modecheck_unify.m"
          {
#line 1291 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
#line 1291 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
#line 1292 "modecheck_unify.m"
            {
#line 1292 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__InitialInstX_23);
            }
#line 1292 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1291 "modecheck_unify.m"
          }
#line 1297 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1294 "modecheck_unify.m"
          {
#line 1294 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_46;
#line 1294 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_47;

#line 1294 "modecheck_unify.m"
            {
#line 1294 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_46 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_12);
            }
#line 1295 "modecheck_unify.m"
            {
#line 1295 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1295 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
#line 1295 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_23));
#line 1295 "modecheck_unify.m"
            }
#line 1296 "modecheck_unify.m"
            {
#line 1296 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_46, check_hlds__modecheck_unify__ModeError_47, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1296 "modecheck_unify.m"
              return;
            }
#line 1294 "modecheck_unify.m"
          }
#line 1297 "modecheck_unify.m"
        else
#line 1304 "modecheck_unify.m"
          {
#line 1298 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_48_48;
#line 1298 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_49_49;

#line 1298 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
#line 1298 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1298 "modecheck_unify.m"
              {
#line 1298 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
#line 1298 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
#line 1299 "modecheck_unify.m"
                {
#line 1299 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__InitialInstY_25);
                }
#line 1299 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1298 "modecheck_unify.m"
              }
#line 1304 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1301 "modecheck_unify.m"
              {
#line 1301 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WaitingVars_81;
#line 1301 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModeError_82;

#line 1301 "modecheck_unify.m"
                {
#line 1301 "modecheck_unify.m"
                  check_hlds__modecheck_unify__WaitingVars_81 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__Y_13);
                }
#line 1302 "modecheck_unify.m"
                {
#line 1302 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ModeError_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1302 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
#line 1302 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_25));
#line 1302 "modecheck_unify.m"
                }
#line 1303 "modecheck_unify.m"
                {
#line 1303 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_81, check_hlds__modecheck_unify__ModeError_82, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1303 "modecheck_unify.m"
                  return;
                }
#line 1301 "modecheck_unify.m"
              }
#line 1304 "modecheck_unify.m"
            else
#line 1328 "modecheck_unify.m"
              {
#line 1328 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredOrFunc_51;
#line 1306 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_50_50;
#line 1306 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_53_53;

#line 1306 "modecheck_unify.m"
                {
#line 1306 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__V_50_50, &check_hlds__modecheck_unify__PredOrFunc_51, &check_hlds__modecheck_unify__V_53_53);
                }
#line 1328 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1313 "modecheck_unify.m"
                  {
#line 1313 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredId_54;
#line 1313 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredInfo_55;
#line 1313 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstMap0_56;

#line 1313 "modecheck_unify.m"
                    {
#line 1313 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__PredId_54);
                    }
#line 1314 "modecheck_unify.m"
                    {
#line 1314 "modecheck_unify.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__PredId_54, &check_hlds__modecheck_unify__PredInfo_55);
                    }
#line 1315 "modecheck_unify.m"
                    {
#line 1315 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__InstMap0_56);
                    }
#line 1317 "modecheck_unify.m"
                    {
#line 1317 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__modecheck_unify__PredInfo_55);
                    }
#line 1318 "modecheck_unify.m"
                    if (!(check_hlds__modecheck_unify__succeeded))
#line 1318 "modecheck_unify.m"
                      {
#line 1318 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_unify__InstMap0_56);
                      }
#line 1322 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1318 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1322 "modecheck_unify.m"
                    else
#line 1323 "modecheck_unify.m"
                      {
#line 1323 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_78_78;
#line 1323 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__WaitingVars_83;
#line 1323 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__ModeError_84;

#line 1323 "modecheck_unify.m"
                        {
#line 1323 "modecheck_unify.m"
                          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_83);
                        }
#line 1325 "modecheck_unify.m"
                        {
#line 1325 "modecheck_unify.m"
                          check_hlds__modecheck_unify__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_78_78, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
#line 1325 "modecheck_unify.m"
                        }
#line 1324 "modecheck_unify.m"
                        {
#line 1324 "modecheck_unify.m"
                          check_hlds__modecheck_unify__ModeError_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1324 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
#line 1324 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_78_78));
#line 1324 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_14));
#line 1324 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_51));
#line 1324 "modecheck_unify.m"
                        }
#line 1326 "modecheck_unify.m"
                        {
#line 1326 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_83, check_hlds__modecheck_unify__ModeError_84, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1326 "modecheck_unify.m"
                          return;
                        }
#line 1323 "modecheck_unify.m"
                      }
#line 1313 "modecheck_unify.m"
                  }
#line 1328 "modecheck_unify.m"
                else
#line 1339 "modecheck_unify.m"
                  {
#line 1339 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__TypeCtor_57;

#line 1331 "modecheck_unify.m"
                    {
#line 1331 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__TypeCtor_57);
                    }
#line 1339 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1333 "modecheck_unify.m"
                      {
#line 1333 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__Context_58;
#line 1333 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__InstVarSet_59;
#line 1333 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__UnifyProcId_60;
#line 1333 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__ModuleInfo_61;

#line 1333 "modecheck_unify.m"
                        {
#line 1333 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__Context_58);
                        }
#line 1334 "modecheck_unify.m"
                        {
#line 1334 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__InstVarSet_59);
                        }
#line 1335 "modecheck_unify.m"
                        {
#line 1335 "modecheck_unify.m"
                          check_hlds__modecheck_unify__UnifyProcId_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_60, 0) = ((MR_Box) (check_hlds__modecheck_unify__TypeCtor_57));
#line 1335 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_60, 1) = ((MR_Box) (check_hlds__modecheck_unify__UniMode_27));
#line 1335 "modecheck_unify.m"
                        }
#line 1336 "modecheck_unify.m"
                        {
#line 1336 "modecheck_unify.m"
                          check_hlds__unify_proc__request_unify_6_p_0(check_hlds__modecheck_unify__UnifyProcId_60, check_hlds__modecheck_unify__InstVarSet_59, check_hlds__modecheck_unify__Det_17, check_hlds__modecheck_unify__Context_58, check_hlds__modecheck_unify__ModuleInfo3_40, &check_hlds__modecheck_unify__ModuleInfo_61);
                        }
#line 1338 "modecheck_unify.m"
                        {
#line 1338 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_61, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1338 "modecheck_unify.m"
                          return;
                        }
#line 1333 "modecheck_unify.m"
                      }
#line 1339 "modecheck_unify.m"
                    else
#line 1338 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1339 "modecheck_unify.m"
                  }
#line 1328 "modecheck_unify.m"
              }
#line 1304 "modecheck_unify.m"
          }
#line 1297 "modecheck_unify.m"
      }
#line 1247 "modecheck_unify.m"
  }
#line 1241 "modecheck_unify.m"
}

#line 1091 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveX_17,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveY_18,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_19,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_20,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_21,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_25,
#line 1091 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unify_26,
#line 1091 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50,
#line 1091 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51)
#line 1091 "modecheck_unify.m"
{
#line 1098 "modecheck_unify.m"
  {
#line 1098 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1098 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
#line 1098 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification_29;
#line 1098 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1173 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__AssignTarget_34;
#line 1173 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__AssignSource_35;
#line 1168 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_59_59;
#line 1168 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_74_74;

#line 1099 "modecheck_unify.m"
    {
#line 1099 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50, &check_hlds__modecheck_unify__ModuleInfo0_28);
    }
#line 1101 "modecheck_unify.m"
    {
#line 1101 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15);
    }
#line 1104 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1103 "modecheck_unify.m"
      {
#line 1103 "modecheck_unify.m"
        {
#line 1103 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1103 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1103 "modecheck_unify.m"
        }
#line 1103 "modecheck_unify.m"
        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1103 "modecheck_unify.m"
      }
#line 1104 "modecheck_unify.m"
    else
#line 1108 "modecheck_unify.m"
      {
#line 1105 "modecheck_unify.m"
        {
#line 1105 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16);
        }
#line 1108 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1107 "modecheck_unify.m"
          {
#line 1107 "modecheck_unify.m"
            {
#line 1107 "modecheck_unify.m"
              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1107 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1107 "modecheck_unify.m"
            }
#line 1107 "modecheck_unify.m"
            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1107 "modecheck_unify.m"
          }
#line 1108 "modecheck_unify.m"
        else
#line 1128 "modecheck_unify.m"
          {
#line 1109 "modecheck_unify.m"
            {
#line 1109 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15);
            }
#line 1109 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1110 "modecheck_unify.m"
              {
#line 1110 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16);
              }
#line 1128 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1118 "modecheck_unify.m"
              {
#line 1118 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__LiveX_17 == (MR_Integer) 1))
#line 1117 "modecheck_unify.m"
                  {
#line 1117 "modecheck_unify.m"
                    check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1117 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1117 "modecheck_unify.m"
                  }
#line 1118 "modecheck_unify.m"
                else
#line 1123 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__LiveY_18 == (MR_Integer) 1))
#line 1122 "modecheck_unify.m"
                    {
#line 1122 "modecheck_unify.m"
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1122 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1122 "modecheck_unify.m"
                    }
#line 1123 "modecheck_unify.m"
                  else
#line 1124 "modecheck_unify.m"
                    {
#line 1125 "modecheck_unify.m"
                      {
#line 1125 "modecheck_unify.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_var\'/14", (MR_String) "free-free unify!");
#line 1125 "modecheck_unify.m"
                        return;
                      }
#line 1124 "modecheck_unify.m"
                    }
#line 1125 "modecheck_unify.m"
                check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1118 "modecheck_unify.m"
              }
#line 1128 "modecheck_unify.m"
            else
#line 1139 "modecheck_unify.m"
              {
#line 1130 "modecheck_unify.m"
                {
#line 1130 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_71_71;
#line 1130 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_30_30;

#line 1130 "modecheck_unify.m"
                  {
#line 1130 "modecheck_unify.m"
                    check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__V_71_71, &check_hlds__modecheck_unify__V_30_30);
                  }
#line 1130 "modecheck_unify.m"
                  {
#line 1130 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__V_71_71);
                  }
#line 1130 "modecheck_unify.m"
                }
#line 1131 "modecheck_unify.m"
                if (!(check_hlds__modecheck_unify__succeeded))
#line 1131 "modecheck_unify.m"
                  {
#line 1131 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1131 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_31_31;

#line 1131 "modecheck_unify.m"
                    {
#line 1131 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__V_72_72, &check_hlds__modecheck_unify__V_31_31);
                    }
#line 1131 "modecheck_unify.m"
                    {
#line 1131 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__V_72_72);
                    }
#line 1131 "modecheck_unify.m"
                  }
#line 1139 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1138 "modecheck_unify.m"
                  {
#line 1138 "modecheck_unify.m"
                    {
#line 1138 "modecheck_unify.m"
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1138 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1138 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1138 "modecheck_unify.m"
                    }
#line 1138 "modecheck_unify.m"
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1138 "modecheck_unify.m"
                  }
#line 1139 "modecheck_unify.m"
                else
#line 1140 "modecheck_unify.m"
                  {
#line 1140 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Type_32;
#line 1143 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_33_33;

#line 1140 "modecheck_unify.m"
                    {
#line 1140 "modecheck_unify.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_24, check_hlds__modecheck_unify__X_19, &check_hlds__modecheck_unify__Type_32);
                    }
#line 1142 "modecheck_unify.m"
                    {
#line 1142 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_atomic_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32);
                    }
#line 1142 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1142 "modecheck_unify.m"
                      {
#line 1143 "modecheck_unify.m"
                        {
#line 1143 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32, &check_hlds__modecheck_unify__V_33_33);
                        }
#line 1143 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1142 "modecheck_unify.m"
                      }
#line 1146 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1145 "modecheck_unify.m"
                      {
#line 1145 "modecheck_unify.m"
                        {
#line 1145 "modecheck_unify.m"
                          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1145 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1145 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1145 "modecheck_unify.m"
                        }
#line 1145 "modecheck_unify.m"
                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1145 "modecheck_unify.m"
                      }
#line 1146 "modecheck_unify.m"
                    else
#line 1153 "modecheck_unify.m"
                      {
#line 1149 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1149 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_73_73;

#line 1149 "modecheck_unify.m"
                        {
#line 1149 "modecheck_unify.m"
                          check_hlds__modecheck_unify__V_73_73 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                        }
#line 1149 "modecheck_unify.m"
                        {
#line 1149 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__V_73_73);
                        }
#line 1149 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1149 "modecheck_unify.m"
                          {
#line 1150 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_57_57 = (MR_Integer) 19;
#line 1150 "modecheck_unify.m"
                            {
#line 1150 "modecheck_unify.m"
                              check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__GoalInfo_23, check_hlds__modecheck_unify__V_57_57);
                            }
#line 1149 "modecheck_unify.m"
                          }
#line 1153 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1152 "modecheck_unify.m"
                          {
#line 1152 "modecheck_unify.m"
                            {
#line 1152 "modecheck_unify.m"
                              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1152 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1152 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1152 "modecheck_unify.m"
                            }
#line 1152 "modecheck_unify.m"
                            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1152 "modecheck_unify.m"
                          }
#line 1153 "modecheck_unify.m"
                        else
#line 1154 "modecheck_unify.m"
                          {
#line 1154 "modecheck_unify.m"
                            check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(check_hlds__modecheck_unify__X_19, check_hlds__modecheck_unify__Y_20, check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__ModeOfX_15, check_hlds__modecheck_unify__ModeOfY_16, check_hlds__modecheck_unify__Det_21, check_hlds__modecheck_unify__UnifyContext_22, check_hlds__modecheck_unify__Unification0_25, &check_hlds__modecheck_unify__Unification_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58);
                          }
#line 1153 "modecheck_unify.m"
                      }
#line 1140 "modecheck_unify.m"
                  }
#line 1139 "modecheck_unify.m"
              }
#line 1128 "modecheck_unify.m"
          }
#line 1108 "modecheck_unify.m"
      }
#line 1168 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 2)));
#line 1168 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1168 "modecheck_unify.m"
      {
#line 1168 "modecheck_unify.m"
        check_hlds__modecheck_unify__AssignTarget_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)));
#line 1168 "modecheck_unify.m"
        check_hlds__modecheck_unify__AssignSource_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
#line 1169 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_59_59 = (MR_Integer) 1;
#line 1169 "modecheck_unify.m"
        {
#line 1169 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__AssignTarget_34, &check_hlds__modecheck_unify__V_74_74);
        }
#line 1169 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_59_59 == check_hlds__modecheck_unify__V_74_74);
#line 1168 "modecheck_unify.m"
      }
#line 1173 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1171 "modecheck_unify.m"
      {
#line 1171 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonLocals_84;
#line 1230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_86;

#line 1171 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 1228 "modecheck_unify.m"
        {
#line 1228 "modecheck_unify.m"
          check_hlds__modecheck_unify__NonLocals_84 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
        }
#line 5952 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeCtorInfo_14_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1230 "modecheck_unify.m"
        {
#line 1230 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_86, check_hlds__modecheck_unify__NonLocals_84, check_hlds__modecheck_unify__AssignTarget_34);
        }
#line 1230 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1231 "modecheck_unify.m"
          {
#line 1231 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_86, check_hlds__modecheck_unify__NonLocals_84, check_hlds__modecheck_unify__AssignSource_35);
          }
#line 1234 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1231 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1234 "modecheck_unify.m"
        else
#line 1235 "modecheck_unify.m"
          {
#line 1235 "modecheck_unify.m"
            check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1235 "modecheck_unify.m"
            return;
          }
#line 1171 "modecheck_unify.m"
      }
#line 1173 "modecheck_unify.m"
    else
#line 1179 "modecheck_unify.m"
      {
#line 1179 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TestVar1_36;
#line 1179 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TestVar2_37;

#line 1175 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Det_21 == (MR_Integer) 0);
#line 1174 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1174 "modecheck_unify.m"
          {
#line 1174 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1174 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1174 "modecheck_unify.m"
              {
#line 1174 "modecheck_unify.m"
                check_hlds__modecheck_unify__TestVar1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
#line 1174 "modecheck_unify.m"
                check_hlds__modecheck_unify__TestVar2_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 2)));
#line 1174 "modecheck_unify.m"
              }
#line 1174 "modecheck_unify.m"
          }
#line 1179 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1177 "modecheck_unify.m"
          {
#line 1177 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__NonLocals_93;
#line 1230 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_95;

#line 1177 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 1228 "modecheck_unify.m"
            {
#line 1228 "modecheck_unify.m"
              check_hlds__modecheck_unify__NonLocals_93 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
            }
#line 6026 "check_hlds.modecheck_unify.c"
            check_hlds__modecheck_unify__TypeCtorInfo_14_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1230 "modecheck_unify.m"
            {
#line 1230 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_95, check_hlds__modecheck_unify__NonLocals_93, check_hlds__modecheck_unify__TestVar1_36);
            }
#line 1230 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1231 "modecheck_unify.m"
              {
#line 1231 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_95, check_hlds__modecheck_unify__NonLocals_93, check_hlds__modecheck_unify__TestVar2_37);
              }
#line 1234 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1231 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1234 "modecheck_unify.m"
            else
#line 1235 "modecheck_unify.m"
              {
#line 1235 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1235 "modecheck_unify.m"
                return;
              }
#line 1177 "modecheck_unify.m"
          }
#line 1179 "modecheck_unify.m"
        else
#line 1211 "modecheck_unify.m"
          {
#line 1180 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Det_21 == (MR_Integer) 7);
#line 1211 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1188 "modecheck_unify.m"
              {
#line 1188 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModuleInfo_38;
#line 1188 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Globals_39;
#line 1188 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_40;

#line 1188 "modecheck_unify.m"
                *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 1189 "modecheck_unify.m"
                {
#line 1189 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_unify__ModuleInfo_38);
                }
#line 1190 "modecheck_unify.m"
                {
#line 1190 "modecheck_unify.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_38, &check_hlds__modecheck_unify__Globals_39);
                }
#line 1191 "modecheck_unify.m"
                {
#line 1191 "modecheck_unify.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_39, (MR_Integer) 18, &check_hlds__modecheck_unify__WarnCannotSucceed_40);
                }
#line 1208 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__WarnCannotSucceed_40 == (MR_Integer) 0))
#line 1209 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1208 "modecheck_unify.m"
                else
#line 1194 "modecheck_unify.m"
                  {
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstOfX_41;
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstOfY_43;
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredId_45;
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredInfo_46;
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Origin_47;
#line 1194 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ReportWarning_48;
#line 1195 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 1196 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_44_44;

#line 1195 "modecheck_unify.m"
                    {
#line 1195 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__InstOfX_41, &check_hlds__modecheck_unify__V_42_42);
                    }
#line 1196 "modecheck_unify.m"
                    {
#line 1196 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__InstOfY_43, &check_hlds__modecheck_unify__V_44_44);
                    }
#line 1197 "modecheck_unify.m"
                    {
#line 1197 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_unify__PredId_45);
                    }
#line 1198 "modecheck_unify.m"
                    {
#line 1198 "modecheck_unify.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_38, check_hlds__modecheck_unify__PredId_45, &check_hlds__modecheck_unify__PredInfo_46);
                    }
#line 1199 "modecheck_unify.m"
                    {
#line 1199 "modecheck_unify.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_46, &check_hlds__modecheck_unify__Origin_47);
                    }
#line 1200 "modecheck_unify.m"
                    {
#line 1200 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ReportWarning_48 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_47);
                    }
#line 1205 "modecheck_unify.m"
                    if ((check_hlds__modecheck_unify__ReportWarning_48 == (MR_Integer) 0))
#line 1206 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1205 "modecheck_unify.m"
                    else
#line 1202 "modecheck_unify.m"
                      {
#line 1202 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__Warning_49;

#line 1203 "modecheck_unify.m"
                        {
#line 1203 "modecheck_unify.m"
                          check_hlds__modecheck_unify__Warning_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1203 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1203 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_41));
#line 1203 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_43));
#line 1203 "modecheck_unify.m"
                        }
#line 1204 "modecheck_unify.m"
                        {
#line 1204 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_49, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1204 "modecheck_unify.m"
                          return;
                        }
#line 1202 "modecheck_unify.m"
                      }
#line 1194 "modecheck_unify.m"
                  }
#line 1188 "modecheck_unify.m"
              }
#line 1211 "modecheck_unify.m"
            else
#line 1212 "modecheck_unify.m"
              {
#line 1212 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_69_69;
#line 1212 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_70_70;

#line 1212 "modecheck_unify.m"
                {
#line 1212 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_69_69, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1212 "modecheck_unify.m"
                }
#line 1212 "modecheck_unify.m"
                {
#line 1212 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_70_70, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_15));
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_70_70, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_16));
#line 1212 "modecheck_unify.m"
                }
#line 1212 "modecheck_unify.m"
                {
#line 1212 "modecheck_unify.m"
                  MR_Word base;
#line 1212 "modecheck_unify.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__Unify_26 = base;
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_69_69));
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_70_70));
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_29));
#line 1212 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_22));
#line 1212 "modecheck_unify.m"
                }
#line 1212 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1212 "modecheck_unify.m"
              }
#line 1211 "modecheck_unify.m"
          }
#line 1179 "modecheck_unify.m"
      }
#line 1098 "modecheck_unify.m"
  }
#line 1091 "modecheck_unify.m"
}

#line 1026 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__make_complicated_sub_unify_5_p_0(
#line 1026 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Var0_6,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Var_7,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals0_8,
#line 1026 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
#line 1026 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17)
#line 1026 "modecheck_unify.m"
{
#line 1029 "modecheck_unify.m"
  {
#line 1029 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarSet0_10;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes0_11;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarSet_12;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarType_13;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes_14;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ExtraGoal_15;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;
#line 1029 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_21_21;

#line 1031 "modecheck_unify.m"
    {
#line 1031 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__VarSet0_10);
    }
#line 1032 "modecheck_unify.m"
    {
#line 1032 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__VarTypes0_11);
    }
#line 1033 "modecheck_unify.m"
    {
#line 1033 "modecheck_unify.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__Var_7, check_hlds__modecheck_unify__VarSet0_10, &check_hlds__modecheck_unify__VarSet_12);
    }
#line 1034 "modecheck_unify.m"
    {
#line 1034 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_11, check_hlds__modecheck_unify__Var0_6, &check_hlds__modecheck_unify__VarType_13);
    }
#line 1035 "modecheck_unify.m"
    {
#line 1035 "modecheck_unify.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__modecheck_unify__Var_7, check_hlds__modecheck_unify__VarType_13, check_hlds__modecheck_unify__VarTypes0_11, &check_hlds__modecheck_unify__VarTypes_14);
    }
#line 1036 "modecheck_unify.m"
    {
#line 1036 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_12, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18);
    }
#line 1037 "modecheck_unify.m"
    {
#line 1037 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17);
    }
#line 1039 "modecheck_unify.m"
    {
#line 1039 "modecheck_unify.m"
      check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__Var0_6, *check_hlds__modecheck_unify__Var_7, check_hlds__modecheck_unify__VarType_13, *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17, &check_hlds__modecheck_unify__ExtraGoal_15);
    }
#line 1042 "modecheck_unify.m"
    {
#line 1042 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_21_21, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_15));
#line 1042 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "modecheck_unify.m"
    }
#line 1042 "modecheck_unify.m"
    {
#line 1042 "modecheck_unify.m"
      MR_Word base;
#line 1042 "modecheck_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "modecheck_unify.m"
      *check_hlds__modecheck_unify__ExtraGoals0_8 = base;
#line 1042 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_21_21));
#line 1042 "modecheck_unify.m"
    }
#line 1029 "modecheck_unify.m"
  }
#line 1026 "modecheck_unify.m"
}

#line 996 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
#line 996 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
#line 996 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6)
#line 996 "modecheck_unify.m"
{
#line 1000 "modecheck_unify.m"
  {
#line 1000 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1000 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "modecheck_unify.m"
      {
#line 1000 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1000 "modecheck_unify.m"
          {
#line 1000 "modecheck_unify.m"
            *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "modecheck_unify.m"
            *check_hlds__modecheck_unify__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5;
#line 1000 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1000 "modecheck_unify.m"
          }
#line 1000 "modecheck_unify.m"
      }
#line 1000 "modecheck_unify.m"
    else
#line 1002 "modecheck_unify.m"
      {
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Var0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UniMode0_12;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UniModes0_13;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo_17;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInstX_18;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInstY_19;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInstX_20;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInstY_21;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeX_22;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeY_23;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes0_24;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarType_25;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_32_32;
#line 1002 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_33_33;
#line 1010 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_34_34;
#line 1010 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_35_35;
#line 1010 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_40_40;
#line 1010 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_41_41;

#line 1002 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1002 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1002 "modecheck_unify.m"
          {
#line 1002 "modecheck_unify.m"
            check_hlds__modecheck_unify__UniMode0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1002 "modecheck_unify.m"
            check_hlds__modecheck_unify__UniModes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1003 "modecheck_unify.m"
            {
#line 1003 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__ModuleInfo_17);
            }
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode0_12, (MR_Integer) 0)));
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode0_12, (MR_Integer) 1)));
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__InitialInstX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_32_32, (MR_Integer) 0)));
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__InitialInstY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_32_32, (MR_Integer) 1)));
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__FinalInstX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_33_33, (MR_Integer) 0)));
#line 1004 "modecheck_unify.m"
            check_hlds__modecheck_unify__FinalInstY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_33_33, (MR_Integer) 1)));
#line 1005 "modecheck_unify.m"
            {
#line 1005 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeX_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeX_22, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_18));
#line 1005 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeX_22, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstX_20));
#line 1005 "modecheck_unify.m"
            }
#line 1006 "modecheck_unify.m"
            {
#line 1006 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeY_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeY_23, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_19));
#line 1006 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeY_23, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstY_21));
#line 1006 "modecheck_unify.m"
            }
#line 1007 "modecheck_unify.m"
            {
#line 1007 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_24);
            }
#line 1008 "modecheck_unify.m"
            {
#line 1008 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_24, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_25);
            }
#line 1010 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_34_34 = (MR_Integer) 0;
#line 1010 "modecheck_unify.m"
            {
#line 1010 "modecheck_unify.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__ModeX_22, check_hlds__modecheck_unify__VarType_25, &check_hlds__modecheck_unify__V_40_40);
            }
#line 1010 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_34_34 == check_hlds__modecheck_unify__V_40_40);
#line 1010 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1010 "modecheck_unify.m"
              {
#line 1011 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_35_35 = (MR_Integer) 0;
#line 1011 "modecheck_unify.m"
                {
#line 1011 "modecheck_unify.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__ModeY_23, check_hlds__modecheck_unify__VarType_25, &check_hlds__modecheck_unify__V_41_41);
                }
#line 1011 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_35_35 == check_hlds__modecheck_unify__V_41_41);
#line 1010 "modecheck_unify.m"
              }
#line 1020 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1013 "modecheck_unify.m"
              {
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Var_26;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoals0_27;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Vars1_28;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoals1_29;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarSet0_48;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes0_49;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarSet_50;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarType_51;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes_52;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoal_53;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54;
#line 1013 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_57_57;

#line 1031 "modecheck_unify.m"
                {
#line 1031 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarSet0_48);
                }
#line 1032 "modecheck_unify.m"
                {
#line 1032 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_49);
                }
#line 1033 "modecheck_unify.m"
                {
#line 1033 "modecheck_unify.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarSet0_48, &check_hlds__modecheck_unify__VarSet_50);
                }
#line 1034 "modecheck_unify.m"
                {
#line 1034 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_49, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_51);
                }
#line 1035 "modecheck_unify.m"
                {
#line 1035 "modecheck_unify.m"
                  parse_tree__prog_data__add_var_type_4_p_0(check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarType_51, check_hlds__modecheck_unify__VarTypes0_49, &check_hlds__modecheck_unify__VarTypes_52);
                }
#line 1036 "modecheck_unify.m"
                {
#line 1036 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_50, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54);
                }
#line 1037 "modecheck_unify.m"
                {
#line 1037 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36);
                }
#line 1039 "modecheck_unify.m"
                {
#line 1039 "modecheck_unify.m"
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__Var0_10, check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarType_51, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_unify__ExtraGoal_53);
                }
#line 1042 "modecheck_unify.m"
                {
#line 1042 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_57_57, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_53));
#line 1042 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "modecheck_unify.m"
                }
#line 1042 "modecheck_unify.m"
                {
#line 1042 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ExtraGoals0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_57_57));
#line 1042 "modecheck_unify.m"
                }
#line 1016 "modecheck_unify.m"
                {
#line 1016 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__UniModes0_13, &check_hlds__modecheck_unify__Vars1_28, &check_hlds__modecheck_unify__ExtraGoals1_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
#line 1013 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1013 "modecheck_unify.m"
                  {
#line 1018 "modecheck_unify.m"
                    {
#line 1018 "modecheck_unify.m"
                      MR_Word base;
#line 1018 "modecheck_unify.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1018 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_26));
#line 1018 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_28));
#line 1018 "modecheck_unify.m"
                    }
#line 1019 "modecheck_unify.m"
                    {
#line 1019 "modecheck_unify.m"
                      check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals0_27, check_hlds__modecheck_unify__ExtraGoals1_29, check_hlds__modecheck_unify__HeadVar__4_4);
                    }
#line 1019 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1013 "modecheck_unify.m"
                  }
#line 1013 "modecheck_unify.m"
              }
#line 1020 "modecheck_unify.m"
            else
#line 1022 "modecheck_unify.m"
              {
#line 1022 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Vars1_39;

#line 1021 "modecheck_unify.m"
                {
#line 1021 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__UniModes0_13, &check_hlds__modecheck_unify__Vars1_39, check_hlds__modecheck_unify__HeadVar__4_4, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
#line 1022 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1022 "modecheck_unify.m"
                  {
#line 1023 "modecheck_unify.m"
                    {
#line 1023 "modecheck_unify.m"
                      MR_Word base;
#line 1023 "modecheck_unify.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1023 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_10));
#line 1023 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_39));
#line 1023 "modecheck_unify.m"
                    }
#line 1023 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1022 "modecheck_unify.m"
                  }
#line 1022 "modecheck_unify.m"
              }
#line 1002 "modecheck_unify.m"
          }
#line 1002 "modecheck_unify.m"
      }
#line 1000 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1000 "modecheck_unify.m"
  }
#line 996 "modecheck_unify.m"
}

#line 970 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_8,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_9,
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
#line 970 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 970 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22)
#line 970 "modecheck_unify.m"
{
#line 990 "modecheck_unify.m"
  {
#line 990 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_8)) == (MR_mktag((MR_Integer) 1)));
#line 990 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__X_14;
#line 990 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_15;
#line 990 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes0_16;
#line 990 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det_17;
#line 990 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__CanCGC_18;
#line 977 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_29_29;
#line 977 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_28_28;

#line 977 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 977 "modecheck_unify.m"
      {
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__X_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 0)));
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 1)));
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 2)));
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__ArgModes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 3)));
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 4)));
#line 977 "modecheck_unify.m"
        check_hlds__modecheck_unify__CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 5)));
#line 6741 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeInfo_29_29 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1];
#line 977 "modecheck_unify.m"
        {
#line 977 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_29_29, ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_10)), ((MR_Box) (check_hlds__modecheck_unify__V_28_28)));
        }
#line 977 "modecheck_unify.m"
      }
#line 990 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 987 "modecheck_unify.m"
      {
#line 987 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgVars1_19;
#line 987 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ExtraGoals1_20;
#line 987 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;

#line 980 "modecheck_unify.m"
        {
#line 980 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__ArgVars0_10, check_hlds__modecheck_unify__ArgModes0_16, &check_hlds__modecheck_unify__ArgVars1_19, &check_hlds__modecheck_unify__ExtraGoals1_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23);
        }
#line 987 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 983 "modecheck_unify.m"
          {
#line 983 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;
#line 983 "modecheck_unify.m"
            *check_hlds__modecheck_unify__ExtraGoals_12 = check_hlds__modecheck_unify__ExtraGoals1_20;
#line 984 "modecheck_unify.m"
            *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars1_19;
#line 985 "modecheck_unify.m"
            {
#line 985 "modecheck_unify.m"
              MR_Word base;
#line 985 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 985 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Unification_9 = base;
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_15));
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (*check_hlds__modecheck_unify__ArgVars_11));
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes0_16));
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__Det_17));
#line 985 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (check_hlds__modecheck_unify__CanCGC_18));
#line 985 "modecheck_unify.m"
            }
#line 983 "modecheck_unify.m"
          }
#line 987 "modecheck_unify.m"
        else
#line 988 "modecheck_unify.m"
          {
#line 988 "modecheck_unify.m"
            {
#line 988 "modecheck_unify.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_2 failed");
#line 988 "modecheck_unify.m"
              return;
            }
#line 988 "modecheck_unify.m"
          }
#line 987 "modecheck_unify.m"
      }
#line 990 "modecheck_unify.m"
    else
#line 991 "modecheck_unify.m"
      {
#line 991 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unification_9 = check_hlds__modecheck_unify__Unification0_8;
#line 992 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars0_10;
#line 993 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ExtraGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 993 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21;
#line 991 "modecheck_unify.m"
      }
#line 990 "modecheck_unify.m"
  }
#line 970 "modecheck_unify.m"
}

#line 941 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 941 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_4,
#line 941 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__5_5)
#line 941 "modecheck_unify.m"
{
#line 945 "modecheck_unify.m"
  while (MR_TRUE)
#line 945 "modecheck_unify.m"
    {
#line 945 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 945 "modecheck_unify.m"
      {
#line 945 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 945 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "modecheck_unify.m"
          {
#line 945 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "modecheck_unify.m"
              *check_hlds__modecheck_unify__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "modecheck_unify.m"
            else
#line 946 "modecheck_unify.m"
              {
#line 947 "modecheck_unify.m"
                {
#line 947 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.all_arg_vars_are_non_free_or_solver_vars\'/5", (MR_String) "mismatched list lengths");
                }
#line 946 "modecheck_unify.m"
              }
#line 945 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 945 "modecheck_unify.m"
          }
#line 945 "modecheck_unify.m"
        else
#line 945 "modecheck_unify.m"
          {
#line 945 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 945 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));

#line 945 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "modecheck_unify.m"
              {
#line 949 "modecheck_unify.m"
                {
#line 949 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.all_arg_vars_are_non_free_or_solver_vars\'/5", (MR_String) "mismatched list lengths");
                }
#line 948 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 948 "modecheck_unify.m"
              }
#line 945 "modecheck_unify.m"
            else
#line 951 "modecheck_unify.m"
              {
#line 951 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 951 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Insts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));

#line 952 "modecheck_unify.m"
                {
#line 952 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo_4, check_hlds__modecheck_unify__Inst_26);
                }
#line 958 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 953 "modecheck_unify.m"
                  {
#line 953 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ArgType_31;
#line 953 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ArgVarsToInitTail_32;

#line 953 "modecheck_unify.m"
                    {
#line 953 "modecheck_unify.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__V_34_34, &check_hlds__modecheck_unify__ArgType_31);
                    }
#line 954 "modecheck_unify.m"
                    {
#line 954 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__modecheck_unify__ModuleInfo_4, check_hlds__modecheck_unify__ArgType_31);
                    }
#line 953 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 953 "modecheck_unify.m"
                      {
#line 955 "modecheck_unify.m"
                        {
#line 955 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(check_hlds__modecheck_unify__V_33_33, check_hlds__modecheck_unify__Insts_27, check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__ModuleInfo_4, &check_hlds__modecheck_unify__ArgVarsToInitTail_32);
                        }
#line 953 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 953 "modecheck_unify.m"
                          {
#line 957 "modecheck_unify.m"
                            {
#line 957 "modecheck_unify.m"
                              MR_Word base;
#line 957 "modecheck_unify.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "modecheck_unify.m"
                              *check_hlds__modecheck_unify__HeadVar__5_5 = base;
#line 957 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_34_34));
#line 957 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVarsToInitTail_32));
#line 957 "modecheck_unify.m"
                            }
#line 957 "modecheck_unify.m"
                            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 953 "modecheck_unify.m"
                          }
#line 953 "modecheck_unify.m"
                      }
#line 953 "modecheck_unify.m"
                  }
#line 958 "modecheck_unify.m"
                else
#line 959 "modecheck_unify.m"
                  {
#line 959 "modecheck_unify.m"
                    /* direct tailcall eliminated */
#line 959 "modecheck_unify.m"
                    {
#line 959 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__V_33_33;
#line 959 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Insts_27;

#line 959 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 959 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 959 "modecheck_unify.m"
                    }
#line 959 "modecheck_unify.m"
                    continue;
#line 959 "modecheck_unify.m"
                  }
#line 951 "modecheck_unify.m"
              }
#line 945 "modecheck_unify.m"
          }
#line 945 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 945 "modecheck_unify.m"
      }
#line 945 "modecheck_unify.m"
      break;
#line 945 "modecheck_unify.m"
    }
#line 941 "modecheck_unify.m"
}

#line 797 "modecheck_unify.m"
static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7(
#line 797 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 797 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 797 "modecheck_unify.m"
{
#line 797 "modecheck_unify.m"
  {
#line 797 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__wrapper_arg_2;
#line 797 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;
#line 797 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__conv2_HeadVar__2_128;

#line 797 "modecheck_unify.m"
    {
#line 797 "modecheck_unify.m"
      check_hlds__modecheck_unify__conv2_HeadVar__2_128 = check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_functor__797__1_1_f_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 797 "modecheck_unify.m"
    check_hlds__modecheck_unify__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_unify__conv2_HeadVar__2_128));
#line 797 "modecheck_unify.m"
    return check_hlds__modecheck_unify__wrapper_arg_2;
#line 797 "modecheck_unify.m"
  }
#line 797 "modecheck_unify.m"
}

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 757 "modecheck_unify.m"
{
#line 757 "modecheck_unify.m"
  {
#line 757 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 757 "modecheck_unify.m"
    MR_builtin_longjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0, 1);
#line 757 "modecheck_unify.m"
  }
#line 757 "modecheck_unify.m"
}

#line 758 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
#line 758 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 758 "modecheck_unify.m"
{
#line 758 "modecheck_unify.m"
  {
#line 758 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 758 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_56 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_56);
#line 758 "modecheck_unify.m"
    {
#line 758 "modecheck_unify.m"
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(check_hlds__modecheck_unify__env_ptr);
#line 758 "modecheck_unify.m"
      return;
    }
#line 758 "modecheck_unify.m"
  }
#line 758 "modecheck_unify.m"
}

#line 760 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
#line 760 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 760 "modecheck_unify.m"
{
#line 760 "modecheck_unify.m"
  {
#line 760 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 760 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_57 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_57);
#line 760 "modecheck_unify.m"
    {
#line 760 "modecheck_unify.m"
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(check_hlds__modecheck_unify__env_ptr);
#line 760 "modecheck_unify.m"
      return;
    }
#line 760 "modecheck_unify.m"
  }
#line 760 "modecheck_unify.m"
}

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 757 "modecheck_unify.m"
{
#line 757 "modecheck_unify.m"
  {
#line 757 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 761 "modecheck_unify.m"
    {
#line 761 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_57, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_58);
    }
#line 762 "modecheck_unify.m"
    {
#line 762 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_58);
    }
#line 762 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 762 "modecheck_unify.m"
      {
#line 762 "modecheck_unify.m"
        check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(check_hlds__modecheck_unify__env_ptr);
#line 762 "modecheck_unify.m"
        return;
      }
#line 757 "modecheck_unify.m"
  }
#line 757 "modecheck_unify.m"
}

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 757 "modecheck_unify.m"
{
#line 757 "modecheck_unify.m"
  {
#line 757 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 759 "modecheck_unify.m"
    {
#line 759 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_56);
    }
#line 757 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 757 "modecheck_unify.m"
      {
#line 7171 "check_hlds.modecheck_unify.c"
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_171_171 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 760 "modecheck_unify.m"
        {
#line 760 "modecheck_unify.m"
          mercury__list__member_2_p_1((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_171_171, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_57, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5, check_hlds__modecheck_unify__env_ptr);
        }
#line 757 "modecheck_unify.m"
      }
#line 757 "modecheck_unify.m"
  }
#line 757 "modecheck_unify.m"
}

#line 757 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
#line 757 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 757 "modecheck_unify.m"
{
#line 757 "modecheck_unify.m"
  {
#line 757 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 757 "modecheck_unify.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0) == 0)
#line 757 "modecheck_unify.m"
      {
#line 757 "modecheck_unify.m"
        {
#line 757 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeCtorInfo_170_170;

#line 757 "modecheck_unify.m"
          {
#line 757 "modecheck_unify.m"
            (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26);
          }
#line 757 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 757 "modecheck_unify.m"
            {
#line 7215 "check_hlds.modecheck_unify.c"
              check_hlds__modecheck_unify__TypeCtorInfo_170_170 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 758 "modecheck_unify.m"
              {
#line 758 "modecheck_unify.m"
                mercury__list__member_2_p_1(check_hlds__modecheck_unify__TypeCtorInfo_170_170, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_56, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3, check_hlds__modecheck_unify__env_ptr);
              }
#line 757 "modecheck_unify.m"
            }
#line 757 "modecheck_unify.m"
        }
#line 757 "modecheck_unify.m"
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
#line 757 "modecheck_unify.m"
      }
#line 757 "modecheck_unify.m"
    else
#line 757 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
#line 757 "modecheck_unify.m"
  }
#line 757 "modecheck_unify.m"
}

#line 651 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_12,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_17,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
#line 651 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_20,
#line 651 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96,
#line 651 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97)
#line 651 "modecheck_unify.m"
{
#line 651 "modecheck_unify.m"
  {
#line 651 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s check_hlds__modecheck_unify__env;

#line 651 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16 = check_hlds__modecheck_unify__ArgVars0_16;
#line 657 "modecheck_unify.m"
    {
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__HowToCheckGoal_23;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstMap0_24;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstOfX0_25;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__LiveX_27;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__X_28;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ExtraGoals0_29;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ExtraGoals1_36;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstMap1_39;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__LiveArgs_41;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ConsId_42;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstConsId_43;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstOfY_44;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__Det_48;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__Mode_51;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__Unification_53;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ArgVars_54;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ExtraGoals2_55;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_103_103;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_104_104;
#line 657 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113;
#line 712 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ArgVarsToInit_34;
#line 695 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstArgs0_33;
#line 695 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_31_31;
#line 695 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_32_32;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_74_74;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_75_75;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_76_76;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_77_77;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_78_78;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_79_79;
#line 870 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_80_80;

#line 658 "modecheck_unify.m"
      {
#line 658 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22);
      }
#line 659 "modecheck_unify.m"
      {
#line 659 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96, &check_hlds__modecheck_unify__HowToCheckGoal_23);
      }
#line 661 "modecheck_unify.m"
      {
#line 661 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96, &check_hlds__modecheck_unify__InstMap0_24);
      }
#line 662 "modecheck_unify.m"
      {
#line 662 "modecheck_unify.m"
        hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_24, check_hlds__modecheck_unify__X0_12, &check_hlds__modecheck_unify__InstOfX0_25);
      }
#line 667 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_15 == (MR_Integer) 1);
#line 667 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 667 "modecheck_unify.m"
        {
#line 668 "modecheck_unify.m"
          {
#line 668 "modecheck_unify.m"
            (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, check_hlds__modecheck_unify__InstOfX0_25);
          }
#line 668 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
#line 667 "modecheck_unify.m"
        }
#line 679 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 676 "modecheck_unify.m"
        {
#line 676 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "modecheck_unify.m"
          check_hlds__modecheck_unify__LiveX_27 = (MR_Integer) 0;
#line 678 "modecheck_unify.m"
          {
#line 678 "modecheck_unify.m"
            check_hlds__modecheck_unify__make_complicated_sub_unify_5_p_0(check_hlds__modecheck_unify__X0_12, &check_hlds__modecheck_unify__X_28, &check_hlds__modecheck_unify__ExtraGoals0_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98);
          }
#line 676 "modecheck_unify.m"
        }
#line 679 "modecheck_unify.m"
      else
#line 680 "modecheck_unify.m"
        {
#line 680 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26 = check_hlds__modecheck_unify__InstOfX0_25;
#line 681 "modecheck_unify.m"
          check_hlds__modecheck_unify__X_28 = check_hlds__modecheck_unify__X0_12;
#line 682 "modecheck_unify.m"
          {
#line 682 "modecheck_unify.m"
            check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96, check_hlds__modecheck_unify__X_28, &check_hlds__modecheck_unify__LiveX_27);
          }
#line 683 "modecheck_unify.m"
          check_hlds__modecheck_unify__ExtraGoals0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "modecheck_unify.m"
          check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_96;
#line 680 "modecheck_unify.m"
        }
#line 689 "modecheck_unify.m"
      {
#line 689 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30);
      }
#line 695 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16)) == (MR_mktag((MR_Integer) 1)));
#line 695 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
        {
#line 695 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (MR_Integer) 0)));
#line 695 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (MR_Integer) 1)));
#line 696 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__HowToCheckGoal_23 == (MR_Integer) 0);
#line 695 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
            {
#line 697 "modecheck_unify.m"
              {
#line 697 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26);
              }
#line 695 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
                {
#line 698 "modecheck_unify.m"
                  {
#line 698 "modecheck_unify.m"
                    (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98);
                  }
#line 695 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
                    {
#line 699 "modecheck_unify.m"
                      {
#line 699 "modecheck_unify.m"
                        (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98);
                      }
#line 695 "modecheck_unify.m"
                      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
                        {
#line 700 "modecheck_unify.m"
                          {
#line 700 "modecheck_unify.m"
                            hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap0_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__InstArgs0_33);
                          }
#line 701 "modecheck_unify.m"
                          {
#line 701 "modecheck_unify.m"
                            (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__InstArgs0_33, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, &check_hlds__modecheck_unify__ArgVarsToInit_34);
                          }
#line 695 "modecheck_unify.m"
                        }
#line 695 "modecheck_unify.m"
                    }
#line 695 "modecheck_unify.m"
                }
#line 695 "modecheck_unify.m"
            }
#line 695 "modecheck_unify.m"
        }
#line 712 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 704 "modecheck_unify.m"
        {
#line 704 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__InitGoals_35;

#line 704 "modecheck_unify.m"
          {
#line 704 "modecheck_unify.m"
            check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_unify__ArgVarsToInit_34, &check_hlds__modecheck_unify__InitGoals_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99);
          }
#line 708 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__InitGoals_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "modecheck_unify.m"
            check_hlds__modecheck_unify__ExtraGoals1_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "modecheck_unify.m"
          else
#line 709 "modecheck_unify.m"
            {
#line 710 "modecheck_unify.m"
              {
#line 710 "modecheck_unify.m"
                check_hlds__modecheck_unify__ExtraGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals1_36, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitGoals_35));
#line 710 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "modecheck_unify.m"
              }
#line 709 "modecheck_unify.m"
            }
#line 704 "modecheck_unify.m"
        }
#line 712 "modecheck_unify.m"
      else
#line 713 "modecheck_unify.m"
        {
#line 713 "modecheck_unify.m"
          check_hlds__modecheck_unify__ExtraGoals1_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "modecheck_unify.m"
          check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_98_98;
#line 713 "modecheck_unify.m"
        }
#line 715 "modecheck_unify.m"
      {
#line 715 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99, &check_hlds__modecheck_unify__InstMap1_39);
      }
#line 716 "modecheck_unify.m"
      {
#line 716 "modecheck_unify.m"
        hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_39, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40);
      }
#line 717 "modecheck_unify.m"
      {
#line 717 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__LiveArgs_41);
      }
#line 718 "modecheck_unify.m"
      {
#line 718 "modecheck_unify.m"
        parse_tree__prog_type__qualify_cons_id_4_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__ConsId0_14, &check_hlds__modecheck_unify__ConsId_42, &check_hlds__modecheck_unify__InstConsId_43);
      }
#line 720 "modecheck_unify.m"
      {
#line 720 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "modecheck_unify.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_104_104, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_43));
#line 720 "modecheck_unify.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_104_104, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40));
#line 720 "modecheck_unify.m"
      }
#line 719 "modecheck_unify.m"
      {
#line 719 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_103_103, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_104_104));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "modecheck_unify.m"
      }
#line 719 "modecheck_unify.m"
      {
#line 719 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_44, 1) = ((MR_Box) ((MR_Integer) 1));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_44, 3) = ((MR_Box) (check_hlds__modecheck_unify__V_103_103));
#line 719 "modecheck_unify.m"
      }
#line 727 "modecheck_unify.m"
      {
#line 727 "modecheck_unify.m"
        (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_unify__X_28)), (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
      }
#line 727 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 727 "modecheck_unify.m"
        {
#line 728 "modecheck_unify.m"
          {
#line 728 "modecheck_unify.m"
            (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26);
          }
#line 728 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
#line 727 "modecheck_unify.m"
        }
#line 749 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 730 "modecheck_unify.m"
        {
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__WaitingVars_45;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModeError_46;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Inst_47;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModeOfX_49;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModeOfY_50;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__NoArgInsts_52;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_106_106;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_108_108;
#line 730 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_110_110;
#line 730 "modecheck_unify.m"
          MR_Integer check_hlds__modecheck_unify__V_111_111;

#line 730 "modecheck_unify.m"
          {
#line 730 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_106_106, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 730 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "modecheck_unify.m"
          }
#line 730 "modecheck_unify.m"
          {
#line 730 "modecheck_unify.m"
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_106_106, &check_hlds__modecheck_unify__WaitingVars_45);
          }
#line 731 "modecheck_unify.m"
          {
#line 731 "modecheck_unify.m"
            check_hlds__modecheck_unify__ModeError_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_43));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 3) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 4) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 731 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 5) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40));
#line 731 "modecheck_unify.m"
          }
#line 733 "modecheck_unify.m"
          {
#line 733 "modecheck_unify.m"
            check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_45, check_hlds__modecheck_unify__ModeError_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_108_108);
          }
#line 734 "modecheck_unify.m"
          check_hlds__modecheck_unify__Inst_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 735 "modecheck_unify.m"
          check_hlds__modecheck_unify__Det_48 = (MR_Integer) 6;
#line 739 "modecheck_unify.m"
          {
#line 739 "modecheck_unify.m"
            check_hlds__modecheck_unify__ModeOfX_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_49, 0) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 739 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_47));
#line 739 "modecheck_unify.m"
          }
#line 740 "modecheck_unify.m"
          {
#line 740 "modecheck_unify.m"
            check_hlds__modecheck_unify__ModeOfY_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 740 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_50, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_44));
#line 740 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_50, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_47));
#line 740 "modecheck_unify.m"
          }
#line 741 "modecheck_unify.m"
          {
#line 741 "modecheck_unify.m"
            check_hlds__modecheck_unify__Mode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_49));
#line 741 "modecheck_unify.m"
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_50));
#line 741 "modecheck_unify.m"
          }
#line 742 "modecheck_unify.m"
          {
#line 742 "modecheck_unify.m"
            check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_28, check_hlds__modecheck_unify__Inst_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_108_108, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_110_110);
          }
#line 743 "modecheck_unify.m"
          {
#line 743 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_111_111 = mercury__list__length_1_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
          }
#line 743 "modecheck_unify.m"
          {
#line 743 "modecheck_unify.m"
            check_hlds__modecheck_unify__NoArgInsts_52 = mercury__list__duplicate_2_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], check_hlds__modecheck_unify__V_111_111, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 744 "modecheck_unify.m"
          {
#line 744 "modecheck_unify.m"
            check_hlds__modecheck_unify__bind_args_5_p_0(check_hlds__modecheck_unify__Inst_47, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__NoArgInsts_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_110_110, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113);
          }
#line 746 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_53 = check_hlds__modecheck_unify__Unification0_17;
#line 747 "modecheck_unify.m"
          check_hlds__modecheck_unify__ArgVars_54 = (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
#line 748 "modecheck_unify.m"
          check_hlds__modecheck_unify__ExtraGoals2_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "modecheck_unify.m"
        }
#line 749 "modecheck_unify.m"
      else
#line 843 "modecheck_unify.m"
        {
#line 843 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__UnifyInst_59;
#line 843 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Det1_60;
#line 843 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModuleInfo1_61;
#line 763 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_114_114;

#line 757 "modecheck_unify.m"
          {
#line 757 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(&check_hlds__modecheck_unify__env);
          }
#line 756 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
#line 763 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 763 "modecheck_unify.m"
            {
#line 764 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_114_114 = (MR_Integer) 0;
#line 764 "modecheck_unify.m"
              {
#line 764 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__modecheck_unify__LiveX_27, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26, check_hlds__modecheck_unify__InstConsId_43, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40, check_hlds__modecheck_unify__LiveArgs_41, check_hlds__modecheck_unify__V_114_114, check_hlds__modecheck_unify__TypeOfX_13, &check_hlds__modecheck_unify__UnifyInst_59, &check_hlds__modecheck_unify__Det1_60, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, &check_hlds__modecheck_unify__ModuleInfo1_61);
              }
#line 763 "modecheck_unify.m"
            }
#line 843 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 768 "modecheck_unify.m"
            {
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeArgs_63;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfXArgs_68;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__InstOfXArgs_69;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Unification1_70;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__UnifyArgInsts_71;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_115_115;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_122_122;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_123_123;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_124_124;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfX_152;
#line 768 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfY_153;
#line 776 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeArgs0_62;
#line 788 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__InstOfXArgs0_66;
#line 788 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfXArgs0_67;
#line 781 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__InstOfX1_64;
#line 781 "modecheck_unify.m"
              MR_Integer check_hlds__modecheck_unify__Arity_65;

#line 769 "modecheck_unify.m"
              check_hlds__modecheck_unify__Det_48 = check_hlds__modecheck_unify__Det1_60;
#line 770 "modecheck_unify.m"
              {
#line 770 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_61, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_115_115);
              }
#line 771 "modecheck_unify.m"
              {
#line 771 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfX_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_152, 0) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 771 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_152, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_59));
#line 771 "modecheck_unify.m"
              }
#line 772 "modecheck_unify.m"
              {
#line 772 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfY_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_153, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_44));
#line 772 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_153, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_59));
#line 772 "modecheck_unify.m"
              }
#line 773 "modecheck_unify.m"
              {
#line 773 "modecheck_unify.m"
                check_hlds__modecheck_unify__Mode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 773 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_152));
#line 773 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_153));
#line 773 "modecheck_unify.m"
              }
#line 774 "modecheck_unify.m"
              {
#line 774 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__get_mode_of_args_3_p_0(check_hlds__modecheck_unify__UnifyInst_59, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40, &check_hlds__modecheck_unify__ModeArgs0_62);
              }
#line 776 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 775 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeArgs_63 = check_hlds__modecheck_unify__ModeArgs0_62;
#line 776 "modecheck_unify.m"
              else
#line 777 "modecheck_unify.m"
                {
#line 777 "modecheck_unify.m"
                  {
#line 777 "modecheck_unify.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "get_mode_of_args failed");
#line 777 "modecheck_unify.m"
                    return;
                  }
#line 777 "modecheck_unify.m"
                }
#line 780 "modecheck_unify.m"
              {
#line 780 "modecheck_unify.m"
                check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_61, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26, &check_hlds__modecheck_unify__InstOfX1_64);
              }
#line 782 "modecheck_unify.m"
              {
#line 782 "modecheck_unify.m"
                mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__Arity_65);
              }
#line 783 "modecheck_unify.m"
              {
#line 783 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(check_hlds__modecheck_unify__InstOfX1_64, check_hlds__modecheck_unify__InstConsId_43, check_hlds__modecheck_unify__Arity_65, &check_hlds__modecheck_unify__InstOfXArgs0_66);
              }
#line 781 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 784 "modecheck_unify.m"
                {
#line 784 "modecheck_unify.m"
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__get_mode_of_args_3_p_0(check_hlds__modecheck_unify__UnifyInst_59, check_hlds__modecheck_unify__InstOfXArgs0_66, &check_hlds__modecheck_unify__ModeOfXArgs0_67);
                }
#line 788 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 786 "modecheck_unify.m"
                {
#line 786 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ModeOfXArgs_68 = check_hlds__modecheck_unify__ModeOfXArgs0_67;
#line 787 "modecheck_unify.m"
                  check_hlds__modecheck_unify__InstOfXArgs_69 = check_hlds__modecheck_unify__InstOfXArgs0_66;
#line 786 "modecheck_unify.m"
                }
#line 788 "modecheck_unify.m"
              else
#line 789 "modecheck_unify.m"
                {
#line 789 "modecheck_unify.m"
                  {
#line 789 "modecheck_unify.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "get_(inst/mode)_of_args failed");
#line 789 "modecheck_unify.m"
                    return;
                  }
#line 789 "modecheck_unify.m"
                }
#line 791 "modecheck_unify.m"
              {
#line 791 "modecheck_unify.m"
                check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(check_hlds__modecheck_unify__ModeOfX_152, check_hlds__modecheck_unify__ModeOfXArgs_68, check_hlds__modecheck_unify__ModeArgs_63, check_hlds__modecheck_unify__X_28, check_hlds__modecheck_unify__ConsId_42, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, check_hlds__modecheck_unify__UnifyContext_18, check_hlds__modecheck_unify__Unification0_17, &check_hlds__modecheck_unify__Unification1_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_115_115, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_122_122);
              }
#line 794 "modecheck_unify.m"
              {
#line 794 "modecheck_unify.m"
                check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(check_hlds__modecheck_unify__Unification1_70, &check_hlds__modecheck_unify__Unification_53, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__ArgVars_54, &check_hlds__modecheck_unify__ExtraGoals2_55, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_122_122, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_123_123);
              }
#line 796 "modecheck_unify.m"
              {
#line 796 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_124_124, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_44));
#line 796 "modecheck_unify.m"
              }
#line 796 "modecheck_unify.m"
              {
#line 796 "modecheck_unify.m"
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_28, check_hlds__modecheck_unify__UnifyInst_59, check_hlds__modecheck_unify__V_124_124, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_123_123, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125);
              }
#line 797 "modecheck_unify.m"
              {
#line 797 "modecheck_unify.m"
                check_hlds__modecheck_unify__UnifyArgInsts_71 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], (MR_Word) &check_hlds__modecheck_unify_scalar_common_4[1], check_hlds__modecheck_unify__InstOfXArgs_69);
              }
#line 832 "modecheck_unify.m"
              {
#line 832 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_22, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26);
              }
#line 834 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 832 "modecheck_unify.m"
                check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125;
#line 834 "modecheck_unify.m"
              else
#line 835 "modecheck_unify.m"
                {
#line 835 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__InFromGroundTerm_73;

#line 835 "modecheck_unify.m"
                  {
#line 835 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125, &check_hlds__modecheck_unify__InFromGroundTerm_73);
                  }
#line 838 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__InFromGroundTerm_73 == (MR_Integer) 0))
#line 837 "modecheck_unify.m"
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125;
#line 838 "modecheck_unify.m"
                  else
#line 840 "modecheck_unify.m"
                    {
#line 840 "modecheck_unify.m"
                      check_hlds__modecheck_unify__bind_args_5_p_0(check_hlds__modecheck_unify__UnifyInst_59, check_hlds__modecheck_unify__ArgVars_54, check_hlds__modecheck_unify__UnifyArgInsts_71, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_125_125, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113);
                    }
#line 835 "modecheck_unify.m"
                }
#line 768 "modecheck_unify.m"
            }
#line 843 "modecheck_unify.m"
          else
#line 844 "modecheck_unify.m"
            {
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_130_130;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_131_131;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_133_133;
#line 844 "modecheck_unify.m"
              MR_Integer check_hlds__modecheck_unify__V_134_134;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__WaitingVars_154;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeError_155;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Inst_156;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfX_157;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfY_158;
#line 844 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__NoArgInsts_159;

#line 844 "modecheck_unify.m"
              {
#line 844 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_130_130, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 844 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_130_130, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 844 "modecheck_unify.m"
              }
#line 844 "modecheck_unify.m"
              {
#line 844 "modecheck_unify.m"
                parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_130_130, &check_hlds__modecheck_unify__WaitingVars_154);
              }
#line 845 "modecheck_unify.m"
              {
#line 845 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeError_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_43));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 3) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 4) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 845 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_155, 5) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_40));
#line 845 "modecheck_unify.m"
              }
#line 847 "modecheck_unify.m"
              {
#line 847 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_154, check_hlds__modecheck_unify__ModeError_155, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_99_99, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_131_131);
              }
#line 851 "modecheck_unify.m"
              check_hlds__modecheck_unify__Inst_156 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 852 "modecheck_unify.m"
              check_hlds__modecheck_unify__Det_48 = (MR_Integer) 6;
#line 853 "modecheck_unify.m"
              {
#line 853 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfX_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_157, 0) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 853 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_157, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_156));
#line 853 "modecheck_unify.m"
              }
#line 854 "modecheck_unify.m"
              {
#line 854 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfY_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_158, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_44));
#line 854 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_158, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_156));
#line 854 "modecheck_unify.m"
              }
#line 855 "modecheck_unify.m"
              {
#line 855 "modecheck_unify.m"
                check_hlds__modecheck_unify__Mode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 855 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_157));
#line 855 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_51, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_158));
#line 855 "modecheck_unify.m"
              }
#line 856 "modecheck_unify.m"
              {
#line 856 "modecheck_unify.m"
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_28, check_hlds__modecheck_unify__Inst_156, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_131_131, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_133_133);
              }
#line 857 "modecheck_unify.m"
              {
#line 857 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_134_134 = mercury__list__length_1_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
              }
#line 857 "modecheck_unify.m"
              {
#line 857 "modecheck_unify.m"
                check_hlds__modecheck_unify__NoArgInsts_159 = mercury__list__duplicate_2_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], check_hlds__modecheck_unify__V_134_134, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
              }
#line 858 "modecheck_unify.m"
              {
#line 858 "modecheck_unify.m"
                check_hlds__modecheck_unify__bind_args_5_p_0(check_hlds__modecheck_unify__Inst_156, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__NoArgInsts_159, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_133_133, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113);
              }
#line 860 "modecheck_unify.m"
              check_hlds__modecheck_unify__Unification_53 = check_hlds__modecheck_unify__Unification0_17;
#line 861 "modecheck_unify.m"
              check_hlds__modecheck_unify__ArgVars_54 = (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
#line 862 "modecheck_unify.m"
              check_hlds__modecheck_unify__ExtraGoals2_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "modecheck_unify.m"
            }
#line 843 "modecheck_unify.m"
        }
#line 870 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_53)) == (MR_mktag((MR_Integer) 0)));
#line 870 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 870 "modecheck_unify.m"
        {
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 0)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 1)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 2)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 3)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 4)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 5)));
#line 870 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 6)));
#line 871 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__LiveX_27 == (MR_Integer) 1);
#line 870 "modecheck_unify.m"
        }
#line 874 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 873 "modecheck_unify.m"
        {
#line 873 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Goal_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 873 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113;
#line 873 "modecheck_unify.m"
        }
#line 874 "modecheck_unify.m"
      else
#line 913 "modecheck_unify.m"
        {
#line 875 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__Det_48 == (MR_Integer) 7);
#line 913 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 883 "modecheck_unify.m"
            {
#line 883 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModuleInfo_81;
#line 883 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Globals_82;
#line 883 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_83;

#line 883 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Goal_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 884 "modecheck_unify.m"
              {
#line 884 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113, &check_hlds__modecheck_unify__ModuleInfo_81);
              }
#line 885 "modecheck_unify.m"
              {
#line 885 "modecheck_unify.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_81, &check_hlds__modecheck_unify__Globals_82);
              }
#line 886 "modecheck_unify.m"
              {
#line 886 "modecheck_unify.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_82, (MR_Integer) 18, &check_hlds__modecheck_unify__WarnCannotSucceed_83);
              }
#line 910 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__WarnCannotSucceed_83 == (MR_Integer) 0))
#line 911 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113;
#line 910 "modecheck_unify.m"
              else
#line 889 "modecheck_unify.m"
                {
#line 889 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__InDuplForSwitch_84;

#line 890 "modecheck_unify.m"
                  {
#line 890 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113, &check_hlds__modecheck_unify__InDuplForSwitch_84);
                  }
#line 895 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__InDuplForSwitch_84 == (MR_Integer) 0))
#line 892 "modecheck_unify.m"
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113;
#line 895 "modecheck_unify.m"
                  else
#line 896 "modecheck_unify.m"
                    {
#line 896 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__PredId_85;
#line 896 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__PredInfo_86;
#line 896 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__Origin_87;
#line 896 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__ReportWarning_88;

#line 897 "modecheck_unify.m"
                      {
#line 897 "modecheck_unify.m"
                        check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113, &check_hlds__modecheck_unify__PredId_85);
                      }
#line 898 "modecheck_unify.m"
                      {
#line 898 "modecheck_unify.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_81, check_hlds__modecheck_unify__PredId_85, &check_hlds__modecheck_unify__PredInfo_86);
                      }
#line 899 "modecheck_unify.m"
                      {
#line 899 "modecheck_unify.m"
                        hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_86, &check_hlds__modecheck_unify__Origin_87);
                      }
#line 900 "modecheck_unify.m"
                      {
#line 900 "modecheck_unify.m"
                        check_hlds__modecheck_unify__ReportWarning_88 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_87);
                      }
#line 906 "modecheck_unify.m"
                      if ((check_hlds__modecheck_unify__ReportWarning_88 == (MR_Integer) 0))
#line 907 "modecheck_unify.m"
                        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113;
#line 906 "modecheck_unify.m"
                      else
#line 903 "modecheck_unify.m"
                        {
#line 903 "modecheck_unify.m"
                          MR_Word check_hlds__modecheck_unify__Warning_89;

#line 904 "modecheck_unify.m"
                          {
#line 904 "modecheck_unify.m"
                            check_hlds__modecheck_unify__Warning_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 904 "modecheck_unify.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_89, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 904 "modecheck_unify.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_89, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_26));
#line 904 "modecheck_unify.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_89, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_42));
#line 904 "modecheck_unify.m"
                          }
#line 905 "modecheck_unify.m"
                          {
#line 905 "modecheck_unify.m"
                            check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_89, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97);
#line 905 "modecheck_unify.m"
                            return;
                          }
#line 903 "modecheck_unify.m"
                        }
#line 896 "modecheck_unify.m"
                    }
#line 889 "modecheck_unify.m"
                }
#line 883 "modecheck_unify.m"
            }
#line 913 "modecheck_unify.m"
          else
#line 914 "modecheck_unify.m"
            {
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Functor_90;
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Unify_91;
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ExtraGoals01_92;
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ExtraGoals_93;
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_147_147;
#line 914 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_148_148;
#line 928 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_94_94;
#line 928 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_95_95;

#line 914 "modecheck_unify.m"
              {
#line 914 "modecheck_unify.m"
                check_hlds__modecheck_unify__Functor_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 914 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_90, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_42));
#line 914 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_90, 1) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_15));
#line 914 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_90, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_54));
#line 914 "modecheck_unify.m"
              }
#line 915 "modecheck_unify.m"
              {
#line 915 "modecheck_unify.m"
                check_hlds__modecheck_unify__Unify_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 915 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unify_91, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 915 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unify_91, 1) = ((MR_Box) (check_hlds__modecheck_unify__Functor_90));
#line 915 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unify_91, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_51));
#line 915 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unify_91, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_53));
#line 915 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unify_91, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
#line 915 "modecheck_unify.m"
              }
#line 924 "modecheck_unify.m"
              {
#line 924 "modecheck_unify.m"
                check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals0_29, check_hlds__modecheck_unify__ExtraGoals1_36, &check_hlds__modecheck_unify__ExtraGoals01_92);
              }
#line 925 "modecheck_unify.m"
              {
#line 925 "modecheck_unify.m"
                check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals01_92, check_hlds__modecheck_unify__ExtraGoals2_55, &check_hlds__modecheck_unify__ExtraGoals_93);
              }
#line 927 "modecheck_unify.m"
              (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__HowToCheckGoal_23 == (MR_Integer) 1);
#line 927 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 927 "modecheck_unify.m"
                {
#line 928 "modecheck_unify.m"
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__ExtraGoals_93)) == (MR_mktag((MR_Integer) 1)));
#line 928 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 928 "modecheck_unify.m"
                    {
#line 928 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_93, (MR_Integer) 0)));
#line 928 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_93, (MR_Integer) 1)));
#line 929 "modecheck_unify.m"
                      {
#line 929 "modecheck_unify.m"
                        (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap1_39);
                      }
#line 928 "modecheck_unify.m"
                    }
#line 927 "modecheck_unify.m"
                }
#line 934 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 931 "modecheck_unify.m"
                {
#line 931 "modecheck_unify.m"
                  {
#line 931 "modecheck_unify.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
#line 931 "modecheck_unify.m"
                    return;
                  }
#line 931 "modecheck_unify.m"
                }
#line 934 "modecheck_unify.m"
              else
#line 935 "modecheck_unify.m"
                {
#line 935 "modecheck_unify.m"
                }
#line 937 "modecheck_unify.m"
              {
#line 937 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_147_147, 0) = ((MR_Box) (check_hlds__modecheck_unify__X0_12));
#line 937 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_147_147, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 937 "modecheck_unify.m"
              }
#line 937 "modecheck_unify.m"
              {
#line 937 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_148_148, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_28));
#line 937 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_148_148, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_54));
#line 937 "modecheck_unify.m"
              }
#line 937 "modecheck_unify.m"
              {
#line 937 "modecheck_unify.m"
                check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_unify__Unify_91, check_hlds__modecheck_unify__ExtraGoals_93, check_hlds__modecheck_unify__GoalInfo0_19, check_hlds__modecheck_unify__V_147_147, check_hlds__modecheck_unify__V_148_148, check_hlds__modecheck_unify__InstMap0_24, check_hlds__modecheck_unify__Goal_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_113_113, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_97);
#line 937 "modecheck_unify.m"
                return;
              }
#line 914 "modecheck_unify.m"
            }
#line 913 "modecheck_unify.m"
        }
#line 657 "modecheck_unify.m"
    }
#line 651 "modecheck_unify.m"
  }
#line 651 "modecheck_unify.m"
}

#line 595 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_8,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_9,
#line 595 "modecheck_unify.m"
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
#line 595 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
#line 595 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
#line 595 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31)
#line 595 "modecheck_unify.m"
{
#line 600 "modecheck_unify.m"
  {
#line 600 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_14;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_15;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConstStructDb_17;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConstStruct_18;
#line 600 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_22;
#line 606 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_19_19;
#line 606 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_20_20;
#line 606 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_21_21;

#line 601 "modecheck_unify.m"
    {
#line 601 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__InstMap_14);
    }
#line 602 "modecheck_unify.m"
    {
#line 602 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap_14, check_hlds__modecheck_unify__X_8, &check_hlds__modecheck_unify__InstOfX_15);
    }
#line 603 "modecheck_unify.m"
    {
#line 603 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
#line 604 "modecheck_unify.m"
    {
#line 604 "modecheck_unify.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ConstStructDb_17);
    }
#line 605 "modecheck_unify.m"
    {
#line 605 "modecheck_unify.m"
      hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__modecheck_unify__ConstStructDb_17, check_hlds__modecheck_unify__ConstNum_10, &check_hlds__modecheck_unify__ConstStruct_18);
    }
#line 606 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 0)));
#line 606 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 1)));
#line 606 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 2)));
#line 606 "modecheck_unify.m"
    check_hlds__modecheck_unify__InstOfY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 3)));
#line 607 "modecheck_unify.m"
    {
#line 607 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, check_hlds__modecheck_unify__InstOfX_15);
    }
#line 617 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 608 "modecheck_unify.m"
      {
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_24;
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_25;
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_26;
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_27;
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_32_32;
#line 608 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_39_39;

#line 609 "modecheck_unify.m"
        {
#line 609 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 609 "modecheck_unify.m"
        }
#line 609 "modecheck_unify.m"
        {
#line 609 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__InstOfY_22, check_hlds__modecheck_unify__V_32_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
#line 610 "modecheck_unify.m"
        {
#line 610 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 5) = ((MR_Box) ((MR_Integer) 1));
#line 610 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "modecheck_unify.m"
        }
#line 612 "modecheck_unify.m"
        {
#line 612 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_25, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_25, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 612 "modecheck_unify.m"
        }
#line 613 "modecheck_unify.m"
        {
#line 613 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_26, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 613 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_26, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 613 "modecheck_unify.m"
        }
#line 614 "modecheck_unify.m"
        {
#line 614 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_27, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_25));
#line 614 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_26));
#line 614 "modecheck_unify.m"
        }
#line 615 "modecheck_unify.m"
        {
#line 615 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "modecheck_unify.m"
        }
#line 615 "modecheck_unify.m"
        {
#line 615 "modecheck_unify.m"
          MR_Word base;
#line 615 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 615 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_39_39));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_27));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_24));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
#line 615 "modecheck_unify.m"
        }
#line 608 "modecheck_unify.m"
      }
#line 617 "modecheck_unify.m"
    else
#line 631 "modecheck_unify.m"
      {
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_28;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_29;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_42_42;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_54_54;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_57;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_58;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_59;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_60;
#line 631 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_61;

#line 631 "modecheck_unify.m"
        {
#line 631 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 631 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "modecheck_unify.m"
        }
#line 631 "modecheck_unify.m"
        {
#line 631 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_42_42, &check_hlds__modecheck_unify__WaitingVars_28);
        }
#line 632 "modecheck_unify.m"
        {
#line 632 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 632 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "modecheck_unify.m"
        }
#line 633 "modecheck_unify.m"
        {
#line 633 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_28, check_hlds__modecheck_unify__ModeError_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46);
        }
#line 637 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 638 "modecheck_unify.m"
        {
#line 638 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__Inst_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
#line 640 "modecheck_unify.m"
        {
#line 640 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 5) = ((MR_Box) ((MR_Integer) 1));
#line 640 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_unify.m"
        }
#line 642 "modecheck_unify.m"
        {
#line 642 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_59, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_59, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
#line 642 "modecheck_unify.m"
        }
#line 643 "modecheck_unify.m"
        {
#line 643 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_60, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 643 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_60, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
#line 643 "modecheck_unify.m"
        }
#line 644 "modecheck_unify.m"
        {
#line 644 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_61, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_59));
#line 644 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_61, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_60));
#line 644 "modecheck_unify.m"
        }
#line 645 "modecheck_unify.m"
        {
#line 645 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "modecheck_unify.m"
        }
#line 645 "modecheck_unify.m"
        {
#line 645 "modecheck_unify.m"
          MR_Word base;
#line 645 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 645 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_54_54));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_61));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_58));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
#line 645 "modecheck_unify.m"
        }
#line 631 "modecheck_unify.m"
      }
#line 600 "modecheck_unify.m"
  }
#line 595 "modecheck_unify.m"
}

#line 547 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_10,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification_11,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
#line 547 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_14,
#line 547 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
#line 547 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41)
#line 547 "modecheck_unify.m"
{
#line 553 "modecheck_unify.m"
  {
#line 553 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 553 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 6)));
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 2)));
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 3)));
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 4)));
#line 554 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 5)));
#line 589 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredId_25;
#line 589 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgVars_26;
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_71_71;
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 556 "modecheck_unify.m"
    MR_Tuple check_hlds__modecheck_unify__V_43_43;
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_61_61;

#line 556 "modecheck_unify.m"
    {
#line 556 "modecheck_unify.m"
      hlds__goal_util__predids_with_args_from_goal_2_p_0(check_hlds__modecheck_unify__Goal0_24, &check_hlds__modecheck_unify__V_42_42);
    }
#line 556 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 556 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 556 "modecheck_unify.m"
      {
#line 556 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, (MR_Integer) 0)));
#line 556 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, (MR_Integer) 1)));
#line 8809 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeInfo_71_71 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[8];
#line 556 "modecheck_unify.m"
        {
#line 556 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_71_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__modecheck_unify__V_61_61)));
        }
#line 556 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 556 "modecheck_unify.m"
          {
#line 556 "modecheck_unify.m"
            check_hlds__modecheck_unify__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, (MR_Integer) 0)));
#line 556 "modecheck_unify.m"
            check_hlds__modecheck_unify__ArgVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, (MR_Integer) 1)));
#line 556 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 556 "modecheck_unify.m"
          }
#line 556 "modecheck_unify.m"
      }
#line 589 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 557 "modecheck_unify.m"
      {
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo_27;
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap_28;
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_29;
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__PredInfo_30;
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__MatchResult_31;
#line 557 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__CalleeProcIds_78;

#line 557 "modecheck_unify.m"
        {
#line 557 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__ModuleInfo_27);
        }
#line 558 "modecheck_unify.m"
        {
#line 558 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__InstMap_28);
        }
#line 559 "modecheck_unify.m"
        {
#line 559 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__VarTypes_29);
        }
#line 560 "modecheck_unify.m"
        {
#line 560 "modecheck_unify.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__PredId_25, &check_hlds__modecheck_unify__PredInfo_30);
        }
#line 1579 "modecheck_unify.m"
        {
#line 1579 "modecheck_unify.m"
          check_hlds__modecheck_unify__CalleeProcIds_78 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modecheck_unify__PredInfo_30);
        }
#line 1580 "modecheck_unify.m"
        {
#line 1580 "modecheck_unify.m"
          check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__InstMap_28, check_hlds__modecheck_unify__VarTypes_29, check_hlds__modecheck_unify__ArgVars_26, check_hlds__modecheck_unify__PredInfo_30, check_hlds__modecheck_unify__CalleeProcIds_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_unify__MatchResult_31);
        }
#line 572 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__MatchResult_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "modecheck_unify.m"
          {
#line 566 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_32;
#line 566 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_33;

#line 567 "modecheck_unify.m"
            {
#line 567 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
            }
#line 568 "modecheck_unify.m"
            {
#line 568 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 568 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 568 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 568 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 568 "modecheck_unify.m"
            }
#line 569 "modecheck_unify.m"
            {
#line 569 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_32, check_hlds__modecheck_unify__ModeError_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
            }
#line 571 "modecheck_unify.m"
            {
#line 571 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Goal_14 = hlds__hlds_goal__true_goal_expr_0_f_0();
            }
#line 566 "modecheck_unify.m"
          }
#line 572 "modecheck_unify.m"
        else
#line 572 "modecheck_unify.m"
          {
#line 572 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MatchResult_31, (MR_Integer) 0)));

#line 572 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "modecheck_unify.m"
              {
#line 566 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WaitingVars_62;
#line 566 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModeError_63;

#line 567 "modecheck_unify.m"
                {
#line 567 "modecheck_unify.m"
                  check_hlds__modecheck_unify__WaitingVars_62 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                }
#line 568 "modecheck_unify.m"
                {
#line 568 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ModeError_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 568 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 568 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 568 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 568 "modecheck_unify.m"
                }
#line 569 "modecheck_unify.m"
                {
#line 569 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_62, check_hlds__modecheck_unify__ModeError_63, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
                }
#line 571 "modecheck_unify.m"
                {
#line 571 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__Goal_14 = hlds__hlds_goal__true_goal_expr_0_f_0();
                }
#line 566 "modecheck_unify.m"
              }
#line 572 "modecheck_unify.m"
            else
#line 572 "modecheck_unify.m"
              {
#line 572 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_68_68, (MR_Integer) 1)));
#line 572 "modecheck_unify.m"
                MR_Integer check_hlds__modecheck_unify__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_68_68, (MR_Integer) 0)));

#line 572 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "modecheck_unify.m"
                  {
#line 573 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__RHS_35;
#line 575 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__GoalInfo_36;

#line 574 "modecheck_unify.m"
                    {
#line 574 "modecheck_unify.m"
                      check_hlds__polymorphism__fix_undetermined_mode_lambda_goal_4_p_0(check_hlds__modecheck_unify__V_70_70, check_hlds__modecheck_unify__RHS0_10, &check_hlds__modecheck_unify__RHS_35, check_hlds__modecheck_unify__ModuleInfo_27);
                    }
#line 575 "modecheck_unify.m"
                    {
#line 575 "modecheck_unify.m"
                      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, check_hlds__modecheck_unify__GoalInfo0_13, &check_hlds__modecheck_unify__GoalInfo_36);
                    }
#line 578 "modecheck_unify.m"
                    {
#line 578 "modecheck_unify.m"
                      check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__RHS_35, check_hlds__modecheck_unify__Unification_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
#line 578 "modecheck_unify.m"
                      return;
                    }
#line 573 "modecheck_unify.m"
                  }
#line 572 "modecheck_unify.m"
                else
#line 581 "modecheck_unify.m"
                  {
#line 581 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__WaitingVars_57;
#line 581 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ModeError_58;

#line 582 "modecheck_unify.m"
                    {
#line 582 "modecheck_unify.m"
                      check_hlds__modecheck_unify__WaitingVars_57 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                    }
#line 583 "modecheck_unify.m"
                    {
#line 583 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ModeError_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 583 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 583 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 583 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 583 "modecheck_unify.m"
                    }
#line 585 "modecheck_unify.m"
                    {
#line 585 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_57, check_hlds__modecheck_unify__ModeError_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
                    }
#line 587 "modecheck_unify.m"
                    {
#line 587 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__Goal_14 = hlds__hlds_goal__true_goal_expr_0_f_0();
                    }
#line 581 "modecheck_unify.m"
                  }
#line 572 "modecheck_unify.m"
              }
#line 572 "modecheck_unify.m"
          }
#line 557 "modecheck_unify.m"
      }
#line 589 "modecheck_unify.m"
    else
#line 590 "modecheck_unify.m"
      {
#line 590 "modecheck_unify.m"
        {
#line 590 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "expecting single call");
#line 590 "modecheck_unify.m"
          return;
        }
#line 590 "modecheck_unify.m"
      }
#line 553 "modecheck_unify.m"
  }
#line 547 "modecheck_unify.m"
}

#line 500 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_13,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaDet_17,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_18,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_19,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_20,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_21,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Mode_22,
#line 500 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
#line 500 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40)
#line 500 "modecheck_unify.m"
{
#line 506 "modecheck_unify.m"
  {
#line 506 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_24;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_25;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_26;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_27;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LambdaPredInfo_28;
#line 506 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 529 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyInst_29;
#line 529 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_31;
#line 514 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___Det_30;

#line 507 "modecheck_unify.m"
    {
#line 507 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__ModuleInfo0_24);
    }
#line 508 "modecheck_unify.m"
    {
#line 508 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__InstMap0_25);
    }
#line 509 "modecheck_unify.m"
    {
#line 509 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__X_13, &check_hlds__modecheck_unify__InstOfX_26);
    }
#line 511 "modecheck_unify.m"
    {
#line 511 "modecheck_unify.m"
      check_hlds__modecheck_unify__LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 511 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_14));
#line 511 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 1) = ((MR_Box) (check_hlds__modecheck_unify__LambdaModes_16));
#line 511 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 3) = ((MR_Box) (check_hlds__modecheck_unify__LambdaDet_17));
#line 511 "modecheck_unify.m"
    }
#line 510 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__modecheck_unify__LambdaPredInfo_28);
#line 510 "modecheck_unify.m"
    {
#line 510 "modecheck_unify.m"
      check_hlds__modecheck_unify__InstOfY_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 510 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 1) = ((MR_Box) ((MR_Integer) 1));
#line 510 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_42_42));
#line 510 "modecheck_unify.m"
    }
#line 514 "modecheck_unify.m"
    {
#line 514 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_unify__InstOfX_26, check_hlds__modecheck_unify__InstOfY_27, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifyInst_29, &check_hlds__modecheck_unify___Det_30, check_hlds__modecheck_unify__ModuleInfo0_24, &check_hlds__modecheck_unify__ModuleInfo1_31);
    }
#line 529 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 517 "modecheck_unify.m"
      {
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_33;
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_34;
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgInsts_35;
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgModes_36;
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46;
#line 517 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48;

#line 518 "modecheck_unify.m"
        {
#line 518 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_31, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46);
        }
#line 519 "modecheck_unify.m"
        {
#line 519 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_33, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 519 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
#line 519 "modecheck_unify.m"
        }
#line 520 "modecheck_unify.m"
        {
#line 520 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_34, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 520 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_34, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
#line 520 "modecheck_unify.m"
        }
#line 521 "modecheck_unify.m"
        {
#line 521 "modecheck_unify.m"
          MR_Word base;
#line 521 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Mode_22 = base;
#line 521 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_33));
#line 521 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_34));
#line 521 "modecheck_unify.m"
        }
#line 524 "modecheck_unify.m"
        {
#line 524 "modecheck_unify.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__ArgInsts_35);
        }
#line 525 "modecheck_unify.m"
        {
#line 525 "modecheck_unify.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modecheck_unify__ArgInsts_35, check_hlds__modecheck_unify__ArgInsts_35, &check_hlds__modecheck_unify__ArgModes_36);
        }
#line 526 "modecheck_unify.m"
        {
#line 526 "modecheck_unify.m"
          check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(check_hlds__modecheck_unify__ModeOfX_33, check_hlds__modecheck_unify__ArgModes_36, check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__ArgVars_15, check_hlds__modecheck_unify__PredOrFunc_14, check_hlds__modecheck_unify__RHS0_18, check_hlds__modecheck_unify__RHS_19, check_hlds__modecheck_unify__Unification0_20, check_hlds__modecheck_unify__Unification_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48);
        }
#line 528 "modecheck_unify.m"
        {
#line 528 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__UnifyInst_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
#line 528 "modecheck_unify.m"
          return;
        }
#line 517 "modecheck_unify.m"
      }
#line 529 "modecheck_unify.m"
    else
#line 530 "modecheck_unify.m"
      {
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_37;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_38;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_51_51;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_56;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_57;
#line 530 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_58;

#line 530 "modecheck_unify.m"
        {
#line 530 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
#line 530 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "modecheck_unify.m"
        }
#line 530 "modecheck_unify.m"
        {
#line 530 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_51_51, &check_hlds__modecheck_unify__WaitingVars_37);
        }
#line 531 "modecheck_unify.m"
        {
#line 531 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 531 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 531 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
#line 531 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 531 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 531 "modecheck_unify.m"
        }
#line 532 "modecheck_unify.m"
        {
#line 532 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_37, check_hlds__modecheck_unify__ModeError_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53);
        }
#line 536 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 537 "modecheck_unify.m"
        {
#line 537 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__Inst_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
        }
#line 538 "modecheck_unify.m"
        {
#line 538 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_57, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 538 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_57, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_56));
#line 538 "modecheck_unify.m"
        }
#line 539 "modecheck_unify.m"
        {
#line 539 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 539 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_56));
#line 539 "modecheck_unify.m"
        }
#line 540 "modecheck_unify.m"
        {
#line 540 "modecheck_unify.m"
          MR_Word base;
#line 540 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Mode_22 = base;
#line 540 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_57));
#line 540 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_58));
#line 540 "modecheck_unify.m"
        }
#line 543 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unification_21 = check_hlds__modecheck_unify__Unification0_20;
#line 544 "modecheck_unify.m"
        *check_hlds__modecheck_unify__RHS_19 = check_hlds__modecheck_unify__RHS0_18;
#line 530 "modecheck_unify.m"
      }
#line 506 "modecheck_unify.m"
  }
#line 500 "modecheck_unify.m"
}

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
#line 300 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 300 "modecheck_unify.m"
{
#line 300 "modecheck_unify.m"
  {
#line 300 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 300 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 300 "modecheck_unify.m"
    {
#line 300 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__300__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 300 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 300 "modecheck_unify.m"
  }
#line 300 "modecheck_unify.m"
}

#line 298 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
#line 298 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 298 "modecheck_unify.m"
{
#line 298 "modecheck_unify.m"
  {
#line 298 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 298 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 298 "modecheck_unify.m"
    {
#line 298 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__298__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 298 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 298 "modecheck_unify.m"
  }
#line 298 "modecheck_unify.m"
}

#line 249 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_11,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_12,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_15,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
#line 249 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
#line 249 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37,
#line 249 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38)
#line 249 "modecheck_unify.m"
{
#line 255 "modecheck_unify.m"
  {
#line 255 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 255 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes0_20;
#line 255 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeOfX_21;
#line 293 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Purity_22;
#line 293 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredArgTypes_25;
#line 293 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_26;
#line 275 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_23_23;

#line 256 "modecheck_unify.m"
    {
#line 256 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__VarTypes0_20);
    }
#line 257 "modecheck_unify.m"
    {
#line 257 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_20, check_hlds__modecheck_unify__X_11, &check_hlds__modecheck_unify__TypeOfX_21);
    }
#line 275 "modecheck_unify.m"
    {
#line 275 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_21, &check_hlds__modecheck_unify__Purity_22, &check_hlds__modecheck_unify__V_23_23, &check_hlds__modecheck_unify__PredArgTypes_25);
    }
#line 276 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 276 "modecheck_unify.m"
      {
#line 277 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 277 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 277 "modecheck_unify.m"
          check_hlds__modecheck_unify__ShroudedPredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 1)));
#line 276 "modecheck_unify.m"
      }
#line 293 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 280 "modecheck_unify.m"
      {
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet0_29;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Context_30;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__PredId_31;
#line 280 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__ProcId_32;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Functor0_33;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet_34;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_35;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_39_39;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40;
#line 280 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41;

#line 280 "modecheck_unify.m"
        {
#line 280 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__ModuleInfo0_28);
        }
#line 281 "modecheck_unify.m"
        {
#line 281 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__VarSet0_29);
        }
#line 282 "modecheck_unify.m"
        {
#line 282 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__Context_30);
        }
#line 283 "modecheck_unify.m"
        {
#line 283 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_26);
        }
#line 283 "modecheck_unify.m"
        check_hlds__modecheck_unify__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_39_39, (MR_Integer) 0)));
#line 283 "modecheck_unify.m"
        check_hlds__modecheck_unify__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_39_39, (MR_Integer) 1)));
#line 284 "modecheck_unify.m"
        {
#line 284 "modecheck_unify.m"
          check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(check_hlds__modecheck_unify__Purity_22, check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__PredId_31, check_hlds__modecheck_unify__ProcId_32, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__PredArgTypes_25, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__Context_30, check_hlds__modecheck_unify__ModuleInfo0_28, &check_hlds__modecheck_unify__Functor0_33, check_hlds__modecheck_unify__VarSet0_29, &check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__VarTypes0_20, &check_hlds__modecheck_unify__VarTypes_35);
        }
#line 287 "modecheck_unify.m"
        {
#line 287 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 288 "modecheck_unify.m"
        {
#line 288 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 291 "modecheck_unify.m"
        {
#line 291 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__Functor0_33, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 291 "modecheck_unify.m"
          return;
        }
#line 280 "modecheck_unify.m"
      }
#line 293 "modecheck_unify.m"
    else
#line 304 "modecheck_unify.m"
      {
#line 304 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__ConstNum_36;

#line 296 "modecheck_unify.m"
        {
#line 296 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(check_hlds__modecheck_unify__ConsId_12, &check_hlds__modecheck_unify__ConstNum_36);
        }
#line 304 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 299 "modecheck_unify.m"
          {
#line 299 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_43_43;
#line 299 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_48_48;

#line 298 "modecheck_unify.m"
            {
#line 298 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 298 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
#line 298 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1));
#line 298 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 298 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 3) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_13));
#line 298 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 4) = ((MR_Box) ((MR_Integer) 0));
#line 298 "modecheck_unify.m"
            }
#line 298 "modecheck_unify.m"
            {
#line 298 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_43_43, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
            }
#line 300 "modecheck_unify.m"
            {
#line 300 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1]));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "modecheck_unify.m"
            }
#line 300 "modecheck_unify.m"
            {
#line 300 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_48_48, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
            }
#line 302 "modecheck_unify.m"
            {
#line 302 "modecheck_unify.m"
              check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__ConstNum_36, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 302 "modecheck_unify.m"
              return;
            }
#line 299 "modecheck_unify.m"
          }
#line 304 "modecheck_unify.m"
        else
#line 308 "modecheck_unify.m"
          {
#line 308 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__TypeOfX_21, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__IsExistConstruction_13, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 308 "modecheck_unify.m"
            return;
          }
#line 304 "modecheck_unify.m"
      }
#line 255 "modecheck_unify.m"
  }
#line 249 "modecheck_unify.m"
}

#line 151 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_10,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
#line 151 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
#line 151 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47,
#line 151 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48)
#line 151 "modecheck_unify.m"
{
#line 156 "modecheck_unify.m"
  {
#line 156 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes_17;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_18;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX0_19;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY0_20;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__MaybeInitX_23;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_24;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_25;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_26;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveX_27;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveY_28;
#line 156 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52;
#line 179 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarType_21;
#line 229 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyInst_30;
#line 229 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det1_31;
#line 229 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_32;
#line 192 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__BothLive_29;
#line 202 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___XLockedReason_33;
#line 203 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___YLockedReason_34;
#line 206 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_79_79;

#line 157 "modecheck_unify.m"
    {
#line 157 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
#line 158 "modecheck_unify.m"
    {
#line 158 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__VarTypes_17);
    }
#line 159 "modecheck_unify.m"
    {
#line 159 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__InstMap0_18);
    }
#line 160 "modecheck_unify.m"
    {
#line 160 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_18, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__InstOfX0_19);
    }
#line 161 "modecheck_unify.m"
    {
#line 161 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_18, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__InstOfY0_20);
    }
#line 166 "modecheck_unify.m"
    {
#line 166 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47);
    }
#line 166 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 166 "modecheck_unify.m"
      {
#line 167 "modecheck_unify.m"
        {
#line 167 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47);
        }
#line 166 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 166 "modecheck_unify.m"
          {
#line 168 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__InstOfX0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 166 "modecheck_unify.m"
              {
#line 169 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__InstOfY0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 166 "modecheck_unify.m"
                  {
#line 170 "modecheck_unify.m"
                    {
#line 170 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_17, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__VarType_21);
                    }
#line 166 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 171 "modecheck_unify.m"
                      {
#line 171 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, check_hlds__modecheck_unify__VarType_21);
                      }
#line 166 "modecheck_unify.m"
                  }
#line 166 "modecheck_unify.m"
              }
#line 166 "modecheck_unify.m"
          }
#line 166 "modecheck_unify.m"
      }
#line 179 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 174 "modecheck_unify.m"
      {
#line 174 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitXGoal_22;
#line 174 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_49_49;
#line 174 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_50_50;
#line 174 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_53_53;

#line 173 "modecheck_unify.m"
        {
#line 173 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_49_49 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 173 "modecheck_unify.m"
        {
#line 173 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_50_50 = mercury__term__context_init_0_f_0();
        }
#line 173 "modecheck_unify.m"
        {
#line 173 "modecheck_unify.m"
          check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__VarType_21, check_hlds__modecheck_unify__V_49_49, check_hlds__modecheck_unify__V_50_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_unify__InitXGoal_22, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52);
        }
#line 175 "modecheck_unify.m"
        {
#line 175 "modecheck_unify.m"
          check_hlds__modecheck_unify__MaybeInitX_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 175 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeInitX_23, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitXGoal_22));
#line 175 "modecheck_unify.m"
        }
#line 176 "modecheck_unify.m"
        {
#line 176 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_53_53 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 176 "modecheck_unify.m"
        {
#line 176 "modecheck_unify.m"
          hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__V_53_53, check_hlds__modecheck_unify__InstMap0_18, &check_hlds__modecheck_unify__InstMap_24);
        }
#line 177 "modecheck_unify.m"
        {
#line 177 "modecheck_unify.m"
          check_hlds__modecheck_unify__InstOfX_25 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 178 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_26 = check_hlds__modecheck_unify__InstOfY0_20;
#line 174 "modecheck_unify.m"
      }
#line 179 "modecheck_unify.m"
    else
#line 180 "modecheck_unify.m"
      {
#line 180 "modecheck_unify.m"
        check_hlds__modecheck_unify__MaybeInitX_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstMap_24 = check_hlds__modecheck_unify__InstMap0_18;
#line 182 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfX_25 = check_hlds__modecheck_unify__InstOfX0_19;
#line 183 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_26 = check_hlds__modecheck_unify__InstOfY0_20;
#line 183 "modecheck_unify.m"
        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47;
#line 180 "modecheck_unify.m"
      }
#line 185 "modecheck_unify.m"
    {
#line 185 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__LiveX_27);
    }
#line 186 "modecheck_unify.m"
    {
#line 186 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__LiveY_28);
    }
#line 188 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveX_27 == (MR_Integer) 0);
#line 188 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 188 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveY_28 == (MR_Integer) 0);
#line 190 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 189 "modecheck_unify.m"
      check_hlds__modecheck_unify__BothLive_29 = (MR_Integer) 0;
#line 190 "modecheck_unify.m"
    else
#line 191 "modecheck_unify.m"
      check_hlds__modecheck_unify__BothLive_29 = (MR_Integer) 1;
#line 193 "modecheck_unify.m"
    {
#line 193 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__modecheck_unify__BothLive_29, check_hlds__modecheck_unify__InstOfX_25, check_hlds__modecheck_unify__InstOfY_26, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifyInst_30, &check_hlds__modecheck_unify__Det1_31, check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ModuleInfo1_32);
    }
#line 192 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 192 "modecheck_unify.m"
      {
#line 201 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__UnifyInst_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 201 "modecheck_unify.m"
          {
#line 202 "modecheck_unify.m"
            {
#line 202 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify___XLockedReason_33);
            }
#line 201 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 201 "modecheck_unify.m"
              {
#line 203 "modecheck_unify.m"
                {
#line 203 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify___YLockedReason_34);
                }
#line 201 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 201 "modecheck_unify.m"
                  {
#line 9897 "check_hlds.modecheck_unify.c"
                    check_hlds__modecheck_unify__TypeInfo_79_79 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 206 "modecheck_unify.m"
                    {
#line 206 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_79_79, ((MR_Box) (check_hlds__modecheck_unify__X_9)), ((MR_Box) (check_hlds__modecheck_unify__Y_10)));
                    }
#line 206 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 201 "modecheck_unify.m"
                  }
#line 201 "modecheck_unify.m"
              }
#line 201 "modecheck_unify.m"
          }
#line 200 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 192 "modecheck_unify.m"
      }
#line 229 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 209 "modecheck_unify.m"
      {
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_37;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_38;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UnifyGoalExpr0_39;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_56_56;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_58_58;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
#line 209 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60;

#line 211 "modecheck_unify.m"
        {
#line 211 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55);
        }
#line 212 "modecheck_unify.m"
        {
#line 212 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_56_56, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 212 "modecheck_unify.m"
        }
#line 212 "modecheck_unify.m"
        {
#line 212 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__UnifyInst_30, check_hlds__modecheck_unify__V_56_56, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57);
        }
#line 213 "modecheck_unify.m"
        {
#line 213 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 213 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_58_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 213 "modecheck_unify.m"
        }
#line 213 "modecheck_unify.m"
        {
#line 213 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__UnifyInst_30, check_hlds__modecheck_unify__V_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59);
        }
#line 214 "modecheck_unify.m"
        {
#line 214 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 214 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_30));
#line 214 "modecheck_unify.m"
        }
#line 215 "modecheck_unify.m"
        {
#line 215 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_38, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 215 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_30));
#line 215 "modecheck_unify.m"
        }
#line 216 "modecheck_unify.m"
        {
#line 216 "modecheck_unify.m"
          check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(check_hlds__modecheck_unify__ModeOfX_37, check_hlds__modecheck_unify__ModeOfY_38, check_hlds__modecheck_unify__LiveX_27, check_hlds__modecheck_unify__LiveY_28, check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__Det1_31, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__VarTypes_17, check_hlds__modecheck_unify__Unification0_11, &check_hlds__modecheck_unify__UnifyGoalExpr0_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60);
        }
#line 222 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__MaybeInitX_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "modecheck_unify.m"
          {
#line 221 "modecheck_unify.m"
            *check_hlds__modecheck_unify__UnifyGoalExpr_14 = check_hlds__modecheck_unify__UnifyGoalExpr0_39;
#line 221 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60;
#line 220 "modecheck_unify.m"
          }
#line 222 "modecheck_unify.m"
        else
#line 223 "modecheck_unify.m"
          {
#line 223 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InitGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeInitX_23, (MR_Integer) 0)));
#line 223 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyGoalInfo_41;
#line 223 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifySubGoal_42;
#line 223 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63;
#line 223 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_64_64;

#line 224 "modecheck_unify.m"
            {
#line 224 "modecheck_unify.m"
              check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_unify__InstMap_24, check_hlds__modecheck_unify__UnifyGoalExpr0_39, check_hlds__modecheck_unify__UnifyGoalInfo0_13, &check_hlds__modecheck_unify__UnifyGoalInfo_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);
            }
#line 226 "modecheck_unify.m"
            {
#line 226 "modecheck_unify.m"
              check_hlds__modecheck_unify__UnifySubGoal_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifySubGoal_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyGoalExpr0_39));
#line 226 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifySubGoal_42, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyGoalInfo_41));
#line 226 "modecheck_unify.m"
            }
#line 227 "modecheck_unify.m"
            {
#line 227 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifySubGoal_42));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "modecheck_unify.m"
            }
#line 227 "modecheck_unify.m"
            {
#line 227 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_63_63, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitGoal_40));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_63_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_64_64));
#line 227 "modecheck_unify.m"
            }
#line 227 "modecheck_unify.m"
            {
#line 227 "modecheck_unify.m"
              MR_Word base;
#line 227 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 227 "modecheck_unify.m"
              *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 227 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_63_63));
#line 227 "modecheck_unify.m"
            }
#line 223 "modecheck_unify.m"
          }
#line 209 "modecheck_unify.m"
      }
#line 229 "modecheck_unify.m"
    else
#line 230 "modecheck_unify.m"
      {
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_43;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_44;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_45;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_46;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_66_66;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_67_67;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_74_74;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_75;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_76;
#line 230 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_77;

#line 230 "modecheck_unify.m"
        {
#line 230 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_67_67, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 230 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "modecheck_unify.m"
        }
#line 230 "modecheck_unify.m"
        {
#line 230 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_66_66, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 230 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_66_66, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_67_67));
#line 230 "modecheck_unify.m"
        }
#line 230 "modecheck_unify.m"
        {
#line 230 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_66_66, &check_hlds__modecheck_unify__WaitingVars_43);
        }
#line 231 "modecheck_unify.m"
        {
#line 231 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 231 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 231 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 231 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 231 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 231 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 231 "modecheck_unify.m"
        }
#line 232 "modecheck_unify.m"
        {
#line 232 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_43, check_hlds__modecheck_unify__ModeError_44, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69);
        }
#line 236 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 237 "modecheck_unify.m"
        {
#line 237 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__Inst_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71);
        }
#line 238 "modecheck_unify.m"
        {
#line 238 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__Inst_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);
        }
#line 240 "modecheck_unify.m"
        {
#line 240 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_45, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 240 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_45, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 240 "modecheck_unify.m"
        }
#line 241 "modecheck_unify.m"
        {
#line 241 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_76, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 241 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_76, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_75));
#line 241 "modecheck_unify.m"
        }
#line 242 "modecheck_unify.m"
        {
#line 242 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_77, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 242 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_77, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_75));
#line 242 "modecheck_unify.m"
        }
#line 243 "modecheck_unify.m"
        {
#line 243 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_46, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_76));
#line 243 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_46, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_77));
#line 243 "modecheck_unify.m"
        }
#line 244 "modecheck_unify.m"
        {
#line 244 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_74_74, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 244 "modecheck_unify.m"
        }
#line 244 "modecheck_unify.m"
        {
#line 244 "modecheck_unify.m"
          MR_Word base;
#line 244 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 244 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_74_74));
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_46));
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_45));
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
#line 244 "modecheck_unify.m"
        }
#line 230 "modecheck_unify.m"
      }
#line 156 "modecheck_unify.m"
  }
#line 151 "modecheck_unify.m"
}

#line 38 "modecheck_unify.m"
void MR_CALL 
check_hlds__modecheck_unify__create_var_var_unification_5_p_0(
#line 38 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Var0_6,
#line 38 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Var_7,
#line 38 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Type_8,
#line 38 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeInfo_9,
#line 38 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_10)
#line 38 "modecheck_unify.m"
{
#line 1044 "modecheck_unify.m"
  {
#line 1044 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalExpr_11;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo_12;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Context_13;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModeContext_14;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyContext_15;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__MainContext_16;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubContexts_17;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalExpr0_18;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo0_19;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals_20;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo1_21;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo2_22;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_23;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredId_24;
#line 1044 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__ProcId_25;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ProcInfo_27;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__RttiVarMaps_28;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_35_35;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_36_36;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_37_37;
#line 1044 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_38_38;
#line 1069 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___PredInfo_26;
#line 1081 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__X_29;
#line 1081 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Y_30;
#line 1081 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Mode_31;
#line 1081 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification0_32;
#line 1081 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalUnifyContext_33;

#line 1046 "modecheck_unify.m"
    {
#line 1046 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__Context_13);
    }
#line 1047 "modecheck_unify.m"
    {
#line 1047 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModeContext_14);
    }
#line 1048 "modecheck_unify.m"
    {
#line 1048 "modecheck_unify.m"
      check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(check_hlds__modecheck_unify__ModeInfo_9, check_hlds__modecheck_unify__ModeContext_14, &check_hlds__modecheck_unify__UnifyContext_15);
    }
#line 1049 "modecheck_unify.m"
    check_hlds__modecheck_unify__MainContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 0)));
#line 1049 "modecheck_unify.m"
    check_hlds__modecheck_unify__SubContexts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 1)));
#line 1051 "modecheck_unify.m"
    {
#line 1051 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
#line 1051 "modecheck_unify.m"
    }
#line 1051 "modecheck_unify.m"
    {
#line 1051 "modecheck_unify.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__modecheck_unify__Var0_6, check_hlds__modecheck_unify__V_35_35, check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__MainContext_16, check_hlds__modecheck_unify__SubContexts_17, &check_hlds__modecheck_unify__V_36_36);
    }
#line 1051 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 0)));
#line 1051 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 1)));
#line 1059 "modecheck_unify.m"
    {
#line 1059 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
#line 1059 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "modecheck_unify.m"
    }
#line 1059 "modecheck_unify.m"
    {
#line 1059 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_6));
#line 1059 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_38_38));
#line 1059 "modecheck_unify.m"
    }
#line 1059 "modecheck_unify.m"
    {
#line 1059 "modecheck_unify.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_37_37, &check_hlds__modecheck_unify__NonLocals_20);
    }
#line 1060 "modecheck_unify.m"
    {
#line 1060 "modecheck_unify.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_unify__NonLocals_20, check_hlds__modecheck_unify__GoalInfo0_19, &check_hlds__modecheck_unify__GoalInfo1_21);
    }
#line 1061 "modecheck_unify.m"
    {
#line 1061 "modecheck_unify.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__GoalInfo1_21, &check_hlds__modecheck_unify__GoalInfo2_22);
    }
#line 1066 "modecheck_unify.m"
    {
#line 1066 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModuleInfo_23);
    }
#line 1067 "modecheck_unify.m"
    {
#line 1067 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__PredId_24);
    }
#line 1068 "modecheck_unify.m"
    {
#line 1068 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ProcId_25);
    }
#line 1069 "modecheck_unify.m"
    {
#line 1069 "modecheck_unify.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_unify__ModuleInfo_23, check_hlds__modecheck_unify__PredId_24, check_hlds__modecheck_unify__ProcId_25, &check_hlds__modecheck_unify___PredInfo_26, &check_hlds__modecheck_unify__ProcInfo_27);
    }
#line 1071 "modecheck_unify.m"
    {
#line 1071 "modecheck_unify.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__modecheck_unify__ProcInfo_27, &check_hlds__modecheck_unify__RttiVarMaps_28);
    }
#line 1077 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__GoalExpr0_18)) == (MR_mktag((MR_Integer) 1)));
#line 1077 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1077 "modecheck_unify.m"
      {
#line 1077 "modecheck_unify.m"
        check_hlds__modecheck_unify__X_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 0)));
#line 1077 "modecheck_unify.m"
        check_hlds__modecheck_unify__Y_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 1)));
#line 1077 "modecheck_unify.m"
        check_hlds__modecheck_unify__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 2)));
#line 1077 "modecheck_unify.m"
        check_hlds__modecheck_unify__Unification0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 3)));
#line 1077 "modecheck_unify.m"
        check_hlds__modecheck_unify__FinalUnifyContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 4)));
#line 1079 "modecheck_unify.m"
        {
#line 1079 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Unification_34;

#line 1078 "modecheck_unify.m"
          {
#line 1078 "modecheck_unify.m"
            check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(check_hlds__modecheck_unify__Type_8, check_hlds__modecheck_unify__RttiVarMaps_28, check_hlds__modecheck_unify__Unification0_32, &check_hlds__modecheck_unify__Unification_34, check_hlds__modecheck_unify__GoalInfo2_22, &check_hlds__modecheck_unify__GoalInfo_12);
          }
#line 1080 "modecheck_unify.m"
          {
#line 1080 "modecheck_unify.m"
            check_hlds__modecheck_unify__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_29));
#line 1080 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_30));
#line 1080 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_31));
#line 1080 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_34));
#line 1080 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 4) = ((MR_Box) (check_hlds__modecheck_unify__FinalUnifyContext_33));
#line 1080 "modecheck_unify.m"
          }
#line 1079 "modecheck_unify.m"
        }
#line 1077 "modecheck_unify.m"
      }
#line 1077 "modecheck_unify.m"
    else
#line 1082 "modecheck_unify.m"
      {
#line 1082 "modecheck_unify.m"
        {
#line 1082 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
#line 1082 "modecheck_unify.m"
          return;
        }
#line 1082 "modecheck_unify.m"
      }
#line 1045 "modecheck_unify.m"
    {
#line 1045 "modecheck_unify.m"
      MR_Word base;
#line 1045 "modecheck_unify.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "modecheck_unify.m"
      *check_hlds__modecheck_unify__Goal_10 = base;
#line 1045 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__GoalExpr_11));
#line 1045 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__GoalInfo_12));
#line 1045 "modecheck_unify.m"
    }
#line 1044 "modecheck_unify.m"
  }
#line 38 "modecheck_unify.m"
}

#line 125 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
#line 125 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 125 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 125 "modecheck_unify.m"
{
#line 125 "modecheck_unify.m"
  {
#line 125 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 125 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 125 "modecheck_unify.m"
    {
#line 125 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__var_inst_contains_any_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 125 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 125 "modecheck_unify.m"
  }
#line 125 "modecheck_unify.m"
}

#line 31 "modecheck_unify.m"
void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0(
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LHSVar_9,
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS_10,
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
#line 31 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_14,
#line 31 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35,
#line 31 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36)
#line 31 "modecheck_unify.m"
{
#line 109 "modecheck_unify.m"
  {
#line 109 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 109 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS_10)) == (MR_mktag((MR_Integer) 1))))
#line 113 "modecheck_unify.m"
      {
#line 113 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));
#line 113 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__IsExistConstr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 1)));
#line 113 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__RHSVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));

#line 114 "modecheck_unify.m"
        {
#line 114 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__ConsId_17, check_hlds__modecheck_unify__IsExistConstr_18, check_hlds__modecheck_unify__RHSVars_19, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 114 "modecheck_unify.m"
          return;
        }
#line 113 "modecheck_unify.m"
      }
#line 109 "modecheck_unify.m"
    else
#line 109 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS_10)) == (MR_mktag((MR_Integer) 2))))
#line 119 "modecheck_unify.m"
        {
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Purity_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__HOGroundness_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__LambdaNonLocals_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));
#line 117 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___PredOrFunc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 117 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___LambdaQuantVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 3)));
#line 117 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___ArgModes_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 4)));
#line 117 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___Detism_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 5)));
#line 117 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___LambdaGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 6)));
#line 133 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__AnyVars_31;
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeInfo_47_47;
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModuleInfo_29;
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__InstMap_30;
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_37_37;
#line 127 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_32_32;
#line 127 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_33_33;

#line 121 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_20 == (MR_Integer) 2);
#line 121 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 121 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 121 "modecheck_unify.m"
            {
#line 122 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HOGroundness_21 == (MR_Integer) 0);
#line 121 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 121 "modecheck_unify.m"
                {
#line 123 "modecheck_unify.m"
                  {
#line 123 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__ModuleInfo_29);
                  }
#line 124 "modecheck_unify.m"
                  {
#line 124 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__InstMap_30);
                  }
#line 10620 "check_hlds.modecheck_unify.c"
                  check_hlds__modecheck_unify__TypeInfo_47_47 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 125 "modecheck_unify.m"
                  {
#line 125 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 125 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[0]));
#line 125 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
#line 125 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 125 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo_29));
#line 125 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap_30));
#line 125 "modecheck_unify.m"
                  }
#line 125 "modecheck_unify.m"
                  {
#line 125 "modecheck_unify.m"
                    check_hlds__modecheck_unify__AnyVars_31 = mercury__list__filter_2_f_0(check_hlds__modecheck_unify__TypeInfo_47_47, check_hlds__modecheck_unify__V_37_37, check_hlds__modecheck_unify__LambdaNonLocals_24);
                  }
#line 127 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__AnyVars_31)) == (MR_mktag((MR_Integer) 1)));
#line 127 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 127 "modecheck_unify.m"
                    {
#line 127 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 0)));
#line 127 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 1)));
#line 127 "modecheck_unify.m"
                    }
#line 121 "modecheck_unify.m"
                }
#line 121 "modecheck_unify.m"
            }
#line 133 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 129 "modecheck_unify.m"
            {
#line 129 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__WaitingVars_34;
#line 129 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_38_38;

#line 129 "modecheck_unify.m"
              {
#line 129 "modecheck_unify.m"
                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_34);
              }
#line 130 "modecheck_unify.m"
              {
#line 130 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 130 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__AnyVars_31));
#line 130 "modecheck_unify.m"
              }
#line 130 "modecheck_unify.m"
              {
#line 130 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_34, check_hlds__modecheck_unify__V_38_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
              }
#line 132 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Goal_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 129 "modecheck_unify.m"
            }
#line 133 "modecheck_unify.m"
          else
#line 141 "modecheck_unify.m"
            {
#line 135 "modecheck_unify.m"
              {
#line 135 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__UnifyGoalInfo0_13, (MR_Integer) 20);
              }
#line 141 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 138 "modecheck_unify.m"
                {
#line 138 "modecheck_unify.m"
                  check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 138 "modecheck_unify.m"
                  return;
                }
#line 141 "modecheck_unify.m"
              else
#line 142 "modecheck_unify.m"
                {
#line 142 "modecheck_unify.m"
                  check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 142 "modecheck_unify.m"
                  return;
                }
#line 141 "modecheck_unify.m"
            }
#line 119 "modecheck_unify.m"
        }
#line 109 "modecheck_unify.m"
      else
#line 109 "modecheck_unify.m"
        {
#line 109 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__RHSVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));

#line 110 "modecheck_unify.m"
          {
#line 110 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHSVar_16, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 110 "modecheck_unify.m"
            return;
          }
#line 109 "modecheck_unify.m"
        }
#line 109 "modecheck_unify.m"
  }
#line 31 "modecheck_unify.m"
}

void mercury__check_hlds__modecheck_unify__init(void)
{
}

void mercury__check_hlds__modecheck_unify__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0);
}

void mercury__check_hlds__modecheck_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_unify. */
