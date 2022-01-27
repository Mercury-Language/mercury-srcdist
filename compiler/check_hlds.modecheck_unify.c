/*
** Automatically generated from `modecheck_unify.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "hlds.make_goal.mih"
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



#line 653 "modecheck_unify.m"
struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s {
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
#line 659 "modecheck_unify.m"
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded;
#line 659 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24;
#line 659 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30;
#line 659 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_31;
#line 659 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32;
#line 708 "modecheck_unify.m"
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0;
#line 708 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_109_109;
#line 708 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_38;
#line 708 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_39;
#line 708 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_40;
#line 709 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_38;
#line 711 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_39;
#line 653 "modecheck_unify.m"
};


#line 179 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

#line 191 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 194 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 197 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 200 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0;

#line 203 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1;

#line 206 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2;

#line 209 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3];

#line 212 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3];

#line 215 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3];

#line 218 "check_hlds.modecheck_unify.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1];

#line 221 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0;

#line 224 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1;

#line 227 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1];

#line 230 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1];

#line 233 "check_hlds.modecheck_unify.c"
static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2];

#line 236 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2];

#line 239 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2];

#line 242 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
#line 245 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 247 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

#line 250 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
#line 253 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 255 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 257 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

#line 260 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
#line 263 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 265 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

#line 268 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
#line 271 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 273 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 275 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

#line 1513 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1513 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 480 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
#line 480 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 480 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 405 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
#line 405 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 405 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 315 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaGoal_10,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 315 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
#line 315 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);

#line 1664 "modecheck_unify.m"
static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1664__1_1_f_0(
#line 1664 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_19);

#line 1436 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1436__1_2_p_0(
#line 1436 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33,
#line 1436 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76);

#line 1331 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1331__1_2_p_0(
#line 1331 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
#line 1331 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91);

#line 480 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__480__1_3_p_0(
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_50,
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_95);

#line 405 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__405__1_4_p_0(
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_27,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_44,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_72);

#line 302 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__302__1_2_p_0(
#line 302 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 302 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_52);

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__300__1_2_p_0(
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_47);

#line 1534 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
#line 1534 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

#line 1534 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

#line 1538 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
#line 1538 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

#line 1538 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

#line 1781 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__mode_set_args_3_p_0(
#line 1781 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1781 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
#line 1781 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

#line 1769 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
#line 1769 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1769 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1769 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

#line 1741 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
#line 1741 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1741 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1741 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6);

#line 1731 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
#line 1731 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1731 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1731 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6);

#line 1715 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1715 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 1706 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1706 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

#line 1679 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 1679 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

#line 1664 "modecheck_unify.m"
static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
#line 1664 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 1664 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

#line 1650 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_8,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_9,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfXArgs_10,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
#line 1650 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17);

#line 1580 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
#line 1580 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6);

#line 1553 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap_2,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
#line 1553 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Result_8);

#line 1436 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
#line 1436 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 1420 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_13,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfXArgs_14,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_15,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_16,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_21,
#line 1420 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_22,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
#line 1420 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);

#line 1331 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
#line 1331 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 1318 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_12,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_13,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_14,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_17,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_18,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);

#line 1211 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_12,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_13,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Type_14,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_17,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1211 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62,
#line 1211 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);

#line 1061 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveX_17,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveY_18,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_19,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_20,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_21,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_25,
#line 1061 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unify_26,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50,
#line 1061 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);

#line 966 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);

#line 940 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_8,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_9,
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22);

#line 899 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_6,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_8,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 899 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

#line 875 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_10,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstConsId_11,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_12,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_13,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstArgs_14,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__WaitingVarsList_15,
#line 875 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_16,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22,
#line 875 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23);

#line 853 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_4,
#line 853 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__5_5);

#line 819 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__add_solver_init_calls_if_needed_5_p_0(
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_6,
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_7,
#line 819 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_8,
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 819 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22);

#line 796 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_9,
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_10,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__X_11,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__InstOfX_12,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__LiveX_13,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_14,
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 709 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
#line 709 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 711 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
#line 711 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg);

#line 653 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_12,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_17,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
#line 653 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_20,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_69,
#line 653 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);

#line 597 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_8,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_9,
#line 597 "modecheck_unify.m"
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
#line 597 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
#line 597 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);

#line 549 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_10,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification_11,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
#line 549 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_14,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
#line 549 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);

#line 502 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_13,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaDet_17,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_18,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_19,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_20,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_21,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Mode_22,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);

#line 302 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
#line 302 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
#line 300 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg);

#line 251 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_11,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_12,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_15,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
#line 251 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37,
#line 251 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);

#line 153 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_10,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
#line 153 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47,
#line 153 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);

#line 127 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
#line 127 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 127 "modecheck_unify.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3])),
    ((MR_Box) (check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0))
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
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1223 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1231 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1239 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1247 "check_hlds.modecheck_unify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1255 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1263 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1271 "check_hlds.modecheck_unify.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1280 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0 = {
  (MR_String) "ho_insts_match",
  (MR_Integer) 0
};

#line 1286 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1 = {
  (MR_String) "ho_insts_do_not_match",
  (MR_Integer) 1
};

#line 1292 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2 = {
  (MR_String) "ho_arg_not_ground",
  (MR_Integer) 2
};

#line 1298 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2
};

#line 1305 "check_hlds.modecheck_unify.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0
};

#line 1312 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1319 "check_hlds.modecheck_unify.c"
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

#line 1340 "check_hlds.modecheck_unify.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1345 "check_hlds.modecheck_unify.c"
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

#line 1360 "check_hlds.modecheck_unify.c"
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

#line 1375 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1
};

#line 1380 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

#line 1385 "check_hlds.modecheck_unify.c"
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

#line 1399 "check_hlds.modecheck_unify.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

#line 1405 "check_hlds.modecheck_unify.c"
static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1411 "check_hlds.modecheck_unify.c"
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

#line 1432 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
#line 1435 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 1437 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
#line 1439 "check_hlds.modecheck_unify.c"
{
#line 1441 "check_hlds.modecheck_unify.c"
  {
#line 1443 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1446 "check_hlds.modecheck_unify.c"
    {
#line 1448 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_mode_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
#line 1451 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 1453 "check_hlds.modecheck_unify.c"
  }
#line 1455 "check_hlds.modecheck_unify.c"
}

#line 1458 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
#line 1461 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 1463 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 1465 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
#line 1467 "check_hlds.modecheck_unify.c"
{
#line 1469 "check_hlds.modecheck_unify.c"
  {
#line 1471 "check_hlds.modecheck_unify.c"
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

#line 1474 "check_hlds.modecheck_unify.c"
    {
#line 1476 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify____Compare____match_mode_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
#line 1479 "check_hlds.modecheck_unify.c"
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
#line 1481 "check_hlds.modecheck_unify.c"
  }
#line 1483 "check_hlds.modecheck_unify.c"
}

#line 1486 "check_hlds.modecheck_unify.c"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
#line 1489 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
#line 1491 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
#line 1493 "check_hlds.modecheck_unify.c"
{
#line 1495 "check_hlds.modecheck_unify.c"
  {
#line 1497 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1500 "check_hlds.modecheck_unify.c"
    {
#line 1502 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_modes_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
#line 1505 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 1507 "check_hlds.modecheck_unify.c"
  }
#line 1509 "check_hlds.modecheck_unify.c"
}

#line 1512 "check_hlds.modecheck_unify.c"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
#line 1515 "check_hlds.modecheck_unify.c"
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
#line 1517 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
#line 1519 "check_hlds.modecheck_unify.c"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
#line 1521 "check_hlds.modecheck_unify.c"
{
#line 1523 "check_hlds.modecheck_unify.c"
  {
#line 1525 "check_hlds.modecheck_unify.c"
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

#line 1528 "check_hlds.modecheck_unify.c"
    {
#line 1530 "check_hlds.modecheck_unify.c"
      check_hlds__modecheck_unify____Compare____match_modes_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
#line 1533 "check_hlds.modecheck_unify.c"
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
#line 1535 "check_hlds.modecheck_unify.c"
  }
#line 1537 "check_hlds.modecheck_unify.c"
}

#line 1513 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1513 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1513 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1513 "modecheck_unify.m"
{
#line 1516 "modecheck_unify.m"
  while (MR_TRUE)
#line 1516 "modecheck_unify.m"
    {
#line 1516 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1516 "modecheck_unify.m"
      {
#line 1516 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1516 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1516 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1516 "modecheck_unify.m"
        else
#line 1518 "modecheck_unify.m"
          {
#line 1518 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1518 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1528 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgType_16;

#line 1520 "modecheck_unify.m"
            {
#line 1520 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__ArgVar_11, &check_hlds__modecheck_unify__ArgType_16);
            }
#line 1521 "modecheck_unify.m"
            {
#line 1521 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__modecheck_unify__ArgType_16);
            }
#line 1528 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1523 "modecheck_unify.m"
              {
#line 1523 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20;
#line 1523 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

#line 1523 "modecheck_unify.m"
                {
#line 1523 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20);
                }
#line 1524 "modecheck_unify.m"
                {
#line 1524 "modecheck_unify.m"
                  check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(check_hlds__modecheck_unify__ArgVar_11, check_hlds__modecheck_unify__ArgType_16, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[1]), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22);
                }
#line 1526 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1526 "modecheck_unify.m"
                {
#line 1526 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__ArgVars_12;
#line 1526 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

#line 1526 "modecheck_unify.m"
                  check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1526 "modecheck_unify.m"
                  check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 1526 "modecheck_unify.m"
                }
#line 1526 "modecheck_unify.m"
                continue;
#line 1523 "modecheck_unify.m"
              }
#line 1528 "modecheck_unify.m"
            else
#line 1528 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1518 "modecheck_unify.m"
          }
#line 1516 "modecheck_unify.m"
      }
#line 1516 "modecheck_unify.m"
      break;
#line 1516 "modecheck_unify.m"
    }
#line 1513 "modecheck_unify.m"
}

#line 480 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
#line 480 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 480 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 480 "modecheck_unify.m"
{
#line 480 "modecheck_unify.m"
  {
#line 480 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 480 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 480 "modecheck_unify.m"
    {
#line 480 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__480__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 480 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 480 "modecheck_unify.m"
  }
#line 480 "modecheck_unify.m"
}

#line 405 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
#line 405 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 405 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 405 "modecheck_unify.m"
{
#line 405 "modecheck_unify.m"
  {
#line 405 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 405 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 405 "modecheck_unify.m"
    {
#line 405 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__405__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 405 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 405 "modecheck_unify.m"
  }
#line 405 "modecheck_unify.m"
}

#line 315 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaGoal_10,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 315 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6,
#line 315 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
#line 315 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68)
#line 315 "modecheck_unify.m"
{
#line 321 "modecheck_unify.m"
  {
#line 321 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_108_108;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeCtorInfo_110_110;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__RHS_14;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Mode_15;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification_16;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Purity_18 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Groundness_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredOrFunc_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 2)));
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 3)));
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Modes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 4)));
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 5)));
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaGoal_10, (MR_Integer) 6)));
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_27;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__HowToCheckGoal_28;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Modes_30;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInitialInsts_31;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInstAL_32;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarInstMapDelta_33;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_34;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap1_35;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgLives_36;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveVarsList_37;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveVars_38;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo0_40;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals0_41;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals1_42;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals_43;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalsList_48;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalInsts_49;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo2_50;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69;
#line 321 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70;
#line 396 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_39_39;

#line 361 "modecheck_unify.m"
    {
#line 361 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__ModuleInfo0_27);
    }
#line 362 "modecheck_unify.m"
    {
#line 362 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__HowToCheckGoal_28);
    }
#line 369 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HowToCheckGoal_28 == (MR_Integer) 0))
#line 365 "modecheck_unify.m"
      {
#line 365 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_29;

#line 367 "modecheck_unify.m"
        {
#line 367 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, check_hlds__modecheck_unify__Vars_23, &check_hlds__modecheck_unify__VarTypes_29);
        }
#line 368 "modecheck_unify.m"
        {
#line 368 "modecheck_unify.m"
          check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__VarTypes_29, check_hlds__modecheck_unify__Modes0_24, &check_hlds__modecheck_unify__Modes_30);
        }
#line 365 "modecheck_unify.m"
      }
#line 369 "modecheck_unify.m"
    else
#line 371 "modecheck_unify.m"
      check_hlds__modecheck_unify__Modes_30 = check_hlds__modecheck_unify__Modes0_24;
#line 375 "modecheck_unify.m"
    {
#line 375 "modecheck_unify.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__VarInitialInsts_31);
    }
#line 1828 "check_hlds.modecheck_unify.c"
    check_hlds__modecheck_unify__TypeInfo_108_108 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 376 "modecheck_unify.m"
    {
#line 376 "modecheck_unify.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__modecheck_unify__TypeInfo_108_108, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__VarInitialInsts_31, &check_hlds__modecheck_unify__VarInstAL_32);
    }
#line 377 "modecheck_unify.m"
    {
#line 377 "modecheck_unify.m"
      check_hlds__modecheck_unify__VarInstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_unify__VarInstAL_32);
    }
#line 378 "modecheck_unify.m"
    {
#line 378 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__InstMap0_34);
    }
#line 379 "modecheck_unify.m"
    {
#line 379 "modecheck_unify.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__modecheck_unify__InstMap0_34, check_hlds__modecheck_unify__VarInstMapDelta_33, &check_hlds__modecheck_unify__InstMap1_35);
    }
#line 380 "modecheck_unify.m"
    {
#line 380 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69);
    }
#line 383 "modecheck_unify.m"
    {
#line 383 "modecheck_unify.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__ArgLives_36);
    }
#line 384 "modecheck_unify.m"
    {
#line 384 "modecheck_unify.m"
      check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__ArgLives_36, &check_hlds__modecheck_unify__LiveVarsList_37);
    }
#line 1865 "check_hlds.modecheck_unify.c"
    check_hlds__modecheck_unify__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 385 "modecheck_unify.m"
    {
#line 385 "modecheck_unify.m"
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__LiveVarsList_37, &check_hlds__modecheck_unify__LiveVars_38);
    }
#line 386 "modecheck_unify.m"
    {
#line 386 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70);
    }
#line 396 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_26, (MR_Integer) 0)));
#line 396 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_26, (MR_Integer) 1)));
#line 397 "modecheck_unify.m"
    {
#line 397 "modecheck_unify.m"
      check_hlds__modecheck_unify__NonLocals0_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo0_40);
    }
#line 398 "modecheck_unify.m"
    {
#line 398 "modecheck_unify.m"
      parse_tree__set_of_var__delete_list_3_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__NonLocals0_41, &check_hlds__modecheck_unify__NonLocals1_42);
    }
#line 402 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__Groundness_19 == (MR_Integer) 1))
#line 403 "modecheck_unify.m"
      {
#line 403 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonLocalTypes_44;
#line 403 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_71_71;

#line 404 "modecheck_unify.m"
        {
#line 404 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__NonLocalTypes_44);
        }
#line 405 "modecheck_unify.m"
        {
#line 405 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1));
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo0_27));
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_35));
#line 405 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_71_71, 5) = ((MR_Box) (check_hlds__modecheck_unify__NonLocalTypes_44));
#line 405 "modecheck_unify.m"
        }
#line 405 "modecheck_unify.m"
        {
#line 405 "modecheck_unify.m"
          check_hlds__modecheck_unify__NonLocals_43 = parse_tree__set_of_var__filter_2_f_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__V_71_71, check_hlds__modecheck_unify__NonLocals1_42);
        }
#line 403 "modecheck_unify.m"
      }
#line 402 "modecheck_unify.m"
    else
#line 401 "modecheck_unify.m"
      check_hlds__modecheck_unify__NonLocals_43 = check_hlds__modecheck_unify__NonLocals1_42;
#line 412 "modecheck_unify.m"
    {
#line 412 "modecheck_unify.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__NonLocals_43, &check_hlds__modecheck_unify__NonLocalsList_48);
    }
#line 413 "modecheck_unify.m"
    {
#line 413 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__NonLocalsList_48, &check_hlds__modecheck_unify__NonLocalInsts_49);
    }
#line 414 "modecheck_unify.m"
    {
#line 414 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__ModuleInfo2_50);
    }
#line 431 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Groundness_19 == (MR_Integer) 0);
#line 431 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 431 "modecheck_unify.m"
      {
#line 432 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_18 == (MR_Integer) 2);
#line 432 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 431 "modecheck_unify.m"
      }
#line 435 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 434 "modecheck_unify.m"
      {
#line 434 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_list_is_ground_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, check_hlds__modecheck_unify__ModuleInfo2_50);
      }
#line 435 "modecheck_unify.m"
    else
#line 436 "modecheck_unify.m"
      {
#line 436 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, check_hlds__modecheck_unify__ModuleInfo2_50);
      }
#line 479 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 440 "modecheck_unify.m"
      {
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__SharedNonLocalInsts_51;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo3_52;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap2_53;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Goal1_54;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInsts_55;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Goal_56;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap11_57;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__RHS0_58;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_78_78;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91;
#line 440 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92;

#line 439 "modecheck_unify.m"
        {
#line 439 "modecheck_unify.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__modecheck_unify__NonLocalInsts_49, &check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__ModuleInfo2_50, &check_hlds__modecheck_unify__ModuleInfo3_52);
        }
#line 441 "modecheck_unify.m"
        {
#line 441 "modecheck_unify.m"
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_48, check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__InstMap1_35, &check_hlds__modecheck_unify__InstMap2_53);
        }
#line 443 "modecheck_unify.m"
        {
#line 443 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo3_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76);
        }
#line 444 "modecheck_unify.m"
        {
#line 444 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap2_53, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77);
        }
#line 446 "modecheck_unify.m"
        {
#line 446 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_78_78, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_20));
#line 446 "modecheck_unify.m"
        }
#line 446 "modecheck_unify.m"
        {
#line 446 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_lock_vars_4_p_0(check_hlds__modecheck_unify__V_78_78, check_hlds__modecheck_unify__NonLocals_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79);
        }
#line 448 "modecheck_unify.m"
        {
#line 448 "modecheck_unify.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82);
        }
#line 454 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HowToCheckGoal_28 == (MR_Integer) 0))
#line 456 "modecheck_unify.m"
          {
#line 456 "modecheck_unify.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_unify__Goal0_26, &check_hlds__modecheck_unify__Goal1_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84);
          }
#line 454 "modecheck_unify.m"
        else
#line 453 "modecheck_unify.m"
          {
#line 453 "modecheck_unify.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modecheck_unify__Goal0_26, &check_hlds__modecheck_unify__Goal1_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84);
          }
#line 458 "modecheck_unify.m"
        {
#line 458 "modecheck_unify.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_27, check_hlds__modecheck_unify__Modes_30, &check_hlds__modecheck_unify__FinalInsts_55);
        }
#line 459 "modecheck_unify.m"
        {
#line 459 "modecheck_unify.m"
          check_hlds__modes__modecheck_lambda_final_insts_6_p_0(check_hlds__modecheck_unify__Vars_23, check_hlds__modecheck_unify__FinalInsts_55, check_hlds__modecheck_unify__Goal1_54, &check_hlds__modecheck_unify__Goal_56, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85);
        }
#line 460 "modecheck_unify.m"
        {
#line 460 "modecheck_unify.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88);
        }
#line 462 "modecheck_unify.m"
        {
#line 462 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89);
        }
#line 463 "modecheck_unify.m"
        {
#line 463 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0(check_hlds__modecheck_unify__V_78_78, check_hlds__modecheck_unify__NonLocals_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91);
        }
#line 469 "modecheck_unify.m"
        {
#line 469 "modecheck_unify.m"
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_48, check_hlds__modecheck_unify__SharedNonLocalInsts_51, check_hlds__modecheck_unify__InstMap0_34, &check_hlds__modecheck_unify__InstMap11_57);
        }
#line 471 "modecheck_unify.m"
        {
#line 471 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap11_57, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92);
        }
#line 475 "modecheck_unify.m"
        {
#line 475 "modecheck_unify.m"
          check_hlds__modecheck_unify__RHS0_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 0) = ((MR_Box) ((check_hlds__modecheck_unify__Purity_18 | ((((check_hlds__modecheck_unify__Groundness_19 << (MR_Integer) 2)) | ((check_hlds__modecheck_unify__PredOrFunc_20 << (MR_Integer) 3)))))));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 1) = (MR_Integer) 0;
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_22));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 3) = ((MR_Box) (check_hlds__modecheck_unify__Vars_23));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 4) = ((MR_Box) (check_hlds__modecheck_unify__Modes_30));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 5) = ((MR_Box) (check_hlds__modecheck_unify__Det_25));
#line 475 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_58, 6) = ((MR_Box) (check_hlds__modecheck_unify__Goal_56));
#line 475 "modecheck_unify.m"
        }
#line 477 "modecheck_unify.m"
        {
#line 477 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__PredOrFunc_20, check_hlds__modecheck_unify__ArgVars_22, check_hlds__modecheck_unify__Modes_30, check_hlds__modecheck_unify__Det_25, check_hlds__modecheck_unify__RHS0_58, &check_hlds__modecheck_unify__RHS_14, check_hlds__modecheck_unify__Unification0_11, &check_hlds__modecheck_unify__Unification_16, &check_hlds__modecheck_unify__Mode_15, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
        }
#line 440 "modecheck_unify.m"
      }
#line 479 "modecheck_unify.m"
    else
#line 484 "modecheck_unify.m"
      {
#line 484 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonGroundNonLocals_61;
#line 484 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_94_94;

#line 480 "modecheck_unify.m"
        {
#line 480 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 480 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[1]));
#line 480 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2));
#line 480 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 480 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_35));
#line 480 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_94_94, 4) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo2_50));
#line 480 "modecheck_unify.m"
        }
#line 480 "modecheck_unify.m"
        {
#line 480 "modecheck_unify.m"
          mercury__list__filter_3_p_0(check_hlds__modecheck_unify__TypeInfo_108_108, check_hlds__modecheck_unify__V_94_94, check_hlds__modecheck_unify__NonLocalsList_48, &check_hlds__modecheck_unify__NonGroundNonLocals_61);
        }
#line 491 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__NonGroundNonLocals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "modecheck_unify.m"
          {
#line 493 "modecheck_unify.m"
            {
#line 493 "modecheck_unify.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_lambda\'/8", (MR_String) "very strange var");
#line 493 "modecheck_unify.m"
              return;
            }
#line 492 "modecheck_unify.m"
          }
#line 491 "modecheck_unify.m"
        else
#line 486 "modecheck_unify.m"
          {
#line 486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__BadVar_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_61, (MR_Integer) 0)));
#line 486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__BadInst_64;
#line 486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_65;
#line 486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_66;
#line 486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_61, (MR_Integer) 1)));

#line 487 "modecheck_unify.m"
            {
#line 487 "modecheck_unify.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__BadVar_62, &check_hlds__modecheck_unify__BadInst_64);
            }
#line 488 "modecheck_unify.m"
            {
#line 488 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_65 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_unify__TypeCtorInfo_110_110, check_hlds__modecheck_unify__BadVar_62);
            }
#line 489 "modecheck_unify.m"
            {
#line 489 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 489 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 489 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 1) = ((MR_Box) (check_hlds__modecheck_unify__BadVar_62));
#line 489 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_66, 2) = ((MR_Box) (check_hlds__modecheck_unify__BadInst_64));
#line 489 "modecheck_unify.m"
            }
#line 490 "modecheck_unify.m"
            {
#line 490 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_65, check_hlds__modecheck_unify__ModeError_66, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
            }
#line 486 "modecheck_unify.m"
          }
#line 496 "modecheck_unify.m"
        check_hlds__modecheck_unify__RHS_14 = check_hlds__modecheck_unify__LambdaGoal_10;
#line 498 "modecheck_unify.m"
        check_hlds__modecheck_unify__Mode_15 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[7];
#line 499 "modecheck_unify.m"
        check_hlds__modecheck_unify__Unification_16 = check_hlds__modecheck_unify__Unification0_11;
#line 484 "modecheck_unify.m"
      }
#line 321 "modecheck_unify.m"
    {
#line 321 "modecheck_unify.m"
      MR_Word base;
#line 321 "modecheck_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 321 "modecheck_unify.m"
      *check_hlds__modecheck_unify__HeadVar__6_6 = base;
#line 321 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 321 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__RHS_14));
#line 321 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_15));
#line 321 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_16));
#line 321 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
#line 321 "modecheck_unify.m"
    }
#line 321 "modecheck_unify.m"
  }
#line 315 "modecheck_unify.m"
}

#line 1664 "modecheck_unify.m"
static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1664__1_1_f_0(
#line 1664 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_19)
#line 1664 "modecheck_unify.m"
{
#line 1664 "modecheck_unify.m"
  {
#line 1664 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1664 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__HeadVar__2_20;

#line 1664 "modecheck_unify.m"
    {
#line 1664 "modecheck_unify.m"
      check_hlds__modecheck_unify__HeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_20, 0) = ((MR_Box) (check_hlds__modecheck_unify__HeadVar__1_19));
#line 1664 "modecheck_unify.m"
    }
#line 1664 "modecheck_unify.m"
    return check_hlds__modecheck_unify__HeadVar__2_20;
#line 1664 "modecheck_unify.m"
  }
#line 1664 "modecheck_unify.m"
}

#line 1436 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1436__1_2_p_0(
#line 1436 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33,
#line 1436 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76)
#line 1436 "modecheck_unify.m"
{
#line 1436 "modecheck_unify.m"
  {
#line 1436 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1436 "modecheck_unify.m"
    {
#line 1436 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_33)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_76)));
    }
#line 1436 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1436 "modecheck_unify.m"
  }
#line 1436 "modecheck_unify.m"
}

#line 1331 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1331__1_2_p_0(
#line 1331 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
#line 1331 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91)
#line 1331 "modecheck_unify.m"
{
#line 1331 "modecheck_unify.m"
  {
#line 1331 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1331 "modecheck_unify.m"
    {
#line 1331 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_91)));
    }
#line 1331 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1331 "modecheck_unify.m"
  }
#line 1331 "modecheck_unify.m"
}

#line 480 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__480__1_3_p_0(
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_50,
#line 480 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_95)
#line 480 "modecheck_unify.m"
{
#line 480 "modecheck_unify.m"
  {
#line 480 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 480 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Inst_60;

#line 482 "modecheck_unify.m"
    {
#line 482 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__HeadVar__3_95, &check_hlds__modecheck_unify__Inst_60);
    }
#line 483 "modecheck_unify.m"
    {
#line 483 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_unify__ModuleInfo2_50, check_hlds__modecheck_unify__Inst_60);
    }
#line 483 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 480 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 480 "modecheck_unify.m"
  }
#line 480 "modecheck_unify.m"
}

#line 405 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__405__1_4_p_0(
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_27,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap1_35,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_44,
#line 405 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_72)
#line 405 "modecheck_unify.m"
{
#line 405 "modecheck_unify.m"
  {
#line 405 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 405 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalType_46;
#line 405 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocalInst_47;

#line 406 "modecheck_unify.m"
    {
#line 406 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__NonLocalTypes_44, check_hlds__modecheck_unify__HeadVar__4_72, &check_hlds__modecheck_unify__NonLocalType_46);
    }
#line 407 "modecheck_unify.m"
    {
#line 407 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_35, check_hlds__modecheck_unify__HeadVar__4_72, &check_hlds__modecheck_unify__NonLocalInst_47);
    }
#line 408 "modecheck_unify.m"
    {
#line 408 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__NonLocalInst_47, (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__modecheck_unify_scalar_common_1[13]), check_hlds__modecheck_unify__NonLocalType_46, check_hlds__modecheck_unify__ModuleInfo0_27);
    }
#line 408 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 405 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 405 "modecheck_unify.m"
  }
#line 405 "modecheck_unify.m"
}

#line 302 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__302__1_2_p_0(
#line 302 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 302 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_52)
#line 302 "modecheck_unify.m"
{
#line 302 "modecheck_unify.m"
  {
#line 302 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 302 "modecheck_unify.m"
    {
#line 302 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_52)));
    }
#line 302 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 302 "modecheck_unify.m"
  }
#line 302 "modecheck_unify.m"
}

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__300__1_2_p_0(
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 300 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_47)
#line 300 "modecheck_unify.m"
{
#line 300 "modecheck_unify.m"
  {
#line 300 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_13 == check_hlds__modecheck_unify__HeadVar__2_47);

#line 300 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 300 "modecheck_unify.m"
  }
#line 300 "modecheck_unify.m"
}

#line 1534 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
#line 1534 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
#line 1534 "modecheck_unify.m"
{
#line 1534 "modecheck_unify.m"
  {
#line 1534 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1534 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastX_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
#line 1534 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastY_9 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

#line 1534 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_8 == check_hlds__modecheck_unify__CastY_9);
#line 1534 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 2487 "check_hlds.modecheck_unify.c"
      *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
#line 1534 "modecheck_unify.m"
    else
#line 1534 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
#line 1534 "modecheck_unify.m"
        else
#line 2499 "check_hlds.modecheck_unify.c"
          *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 2;
#line 1534 "modecheck_unify.m"
      else
#line 1534 "modecheck_unify.m"
        {
#line 1534 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));

#line 1534 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2510 "check_hlds.modecheck_unify.c"
            *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 1;
#line 1534 "modecheck_unify.m"
          else
#line 1534 "modecheck_unify.m"
            {
#line 1534 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));

#line 1534 "modecheck_unify.m"
              {
#line 1534 "modecheck_unify.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[5], check_hlds__modecheck_unify__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_unify__V_11_11)), ((MR_Box) (check_hlds__modecheck_unify__V_5_5)));
#line 1534 "modecheck_unify.m"
                return;
              }
#line 1534 "modecheck_unify.m"
            }
#line 1534 "modecheck_unify.m"
        }
#line 1534 "modecheck_unify.m"
  }
#line 1534 "modecheck_unify.m"
}

#line 1534 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1534 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
#line 1534 "modecheck_unify.m"
{
#line 1534 "modecheck_unify.m"
  {
#line 1534 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1534 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastX_7 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
#line 1534 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__CastY_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

#line 1534 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_7 == check_hlds__modecheck_unify__CastY_8);
#line 1534 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1534 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1534 "modecheck_unify.m"
    else
#line 1534 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "modecheck_unify.m"
        {
#line 1534 "modecheck_unify.m"
          MR_Integer check_hlds__modecheck_unify__CastX_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
#line 1534 "modecheck_unify.m"
          MR_Integer check_hlds__modecheck_unify__CastY_6 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

#line 1534 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastY_6 == check_hlds__modecheck_unify__CastX_5);
#line 1534 "modecheck_unify.m"
        }
#line 1534 "modecheck_unify.m"
      else
#line 1534 "modecheck_unify.m"
        {
#line 1534 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeInfo_9_9;
#line 1534 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1534 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_4_4;

#line 1534 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1534 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 1534 "modecheck_unify.m"
            {
#line 1534 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 2593 "check_hlds.modecheck_unify.c"
              check_hlds__modecheck_unify__TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[5];
#line 2595 "check_hlds.modecheck_unify.c"
              {
#line 2597 "check_hlds.modecheck_unify.c"
                return check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_9_9, ((MR_Box) (check_hlds__modecheck_unify__V_3_3)), ((MR_Box) (check_hlds__modecheck_unify__V_4_4)));
              }
#line 1534 "modecheck_unify.m"
            }
#line 1534 "modecheck_unify.m"
        }
#line 1534 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1534 "modecheck_unify.m"
  }
#line 1534 "modecheck_unify.m"
}

#line 1538 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
#line 1538 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
#line 1538 "modecheck_unify.m"
{
#line 1538 "modecheck_unify.m"
  {
#line 1538 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1538 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
#line 1538 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

#line 1538 "modecheck_unify.m"
    {
#line 1538 "modecheck_unify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__Cast_HeadVar1_4, check_hlds__modecheck_unify__Cast_HeadVar2_5);
#line 1538 "modecheck_unify.m"
      return;
    }
#line 1538 "modecheck_unify.m"
  }
#line 1538 "modecheck_unify.m"
}

#line 1538 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
#line 1538 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
#line 1538 "modecheck_unify.m"
{
#line 2652 "check_hlds.modecheck_unify.c"
  {
#line 2654 "check_hlds.modecheck_unify.c"
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_1 == check_hlds__modecheck_unify__HeadVar__2_2);

#line 2657 "check_hlds.modecheck_unify.c"
    return check_hlds__modecheck_unify__succeeded;
#line 2659 "check_hlds.modecheck_unify.c"
  }
#line 1538 "modecheck_unify.m"
}

#line 1781 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__mode_set_args_3_p_0(
#line 1781 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1781 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
#line 1781 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
#line 1781 "modecheck_unify.m"
{
#line 1784 "modecheck_unify.m"
  {
#line 1784 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1784 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1784 "modecheck_unify.m"
      *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1784 "modecheck_unify.m"
    else
#line 1785 "modecheck_unify.m"
      {
#line 1785 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1785 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1785 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Mode_8;
#line 1785 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_9;

#line 1786 "modecheck_unify.m"
        {
#line 1786 "modecheck_unify.m"
          check_hlds__modecheck_unify__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 0) = ((MR_Box) (check_hlds__modecheck_unify__Inst_5));
#line 1786 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_8, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInst_2));
#line 1786 "modecheck_unify.m"
        }
#line 1787 "modecheck_unify.m"
        {
#line 1787 "modecheck_unify.m"
          check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__Insts_6, check_hlds__modecheck_unify__FinalInst_2, &check_hlds__modecheck_unify__Modes_9);
        }
#line 1785 "modecheck_unify.m"
        {
#line 1785 "modecheck_unify.m"
          MR_Word base;
#line 1785 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1785 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Mode_8));
#line 1785 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Modes_9));
#line 1785 "modecheck_unify.m"
        }
#line 1785 "modecheck_unify.m"
      }
#line 1784 "modecheck_unify.m"
  }
#line 1781 "modecheck_unify.m"
}

#line 1769 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
#line 1769 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1769 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1769 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
#line 1769 "modecheck_unify.m"
{
#line 1772 "modecheck_unify.m"
  {
#line 1772 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 1772 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1772 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1772 "modecheck_unify.m"
        *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1772 "modecheck_unify.m"
      else
#line 1773 "modecheck_unify.m"
        {
#line 1774 "modecheck_unify.m"
          {
#line 1774 "modecheck_unify.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
#line 1774 "modecheck_unify.m"
            return;
          }
#line 1773 "modecheck_unify.m"
        }
#line 1772 "modecheck_unify.m"
    else
#line 1772 "modecheck_unify.m"
      {
#line 1772 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1772 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));

#line 1772 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1775 "modecheck_unify.m"
          {
#line 1776 "modecheck_unify.m"
            {
#line 1776 "modecheck_unify.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
#line 1776 "modecheck_unify.m"
              return;
            }
#line 1775 "modecheck_unify.m"
          }
#line 1772 "modecheck_unify.m"
        else
#line 1777 "modecheck_unify.m"
          {
#line 1777 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InstB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1777 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InstsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1777 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Mode_20;
#line 1777 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Modes_21;

#line 1778 "modecheck_unify.m"
            {
#line 1778 "modecheck_unify.m"
              check_hlds__modecheck_unify__Mode_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_20, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_23_23));
#line 1778 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_20, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstB_18));
#line 1778 "modecheck_unify.m"
            }
#line 1779 "modecheck_unify.m"
            {
#line 1779 "modecheck_unify.m"
              check_hlds__modecheck_unify__pair_up_insts_3_p_0(check_hlds__modecheck_unify__V_22_22, check_hlds__modecheck_unify__InstsB_19, &check_hlds__modecheck_unify__Modes_21);
            }
#line 1777 "modecheck_unify.m"
            {
#line 1777 "modecheck_unify.m"
              MR_Word base;
#line 1777 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "modecheck_unify.m"
              *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 1777 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Mode_20));
#line 1777 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Modes_21));
#line 1777 "modecheck_unify.m"
            }
#line 1777 "modecheck_unify.m"
          }
#line 1772 "modecheck_unify.m"
      }
#line 1772 "modecheck_unify.m"
  }
#line 1769 "modecheck_unify.m"
}

#line 1741 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
#line 1741 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1741 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1741 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6)
#line 1741 "modecheck_unify.m"
{
#line 1746 "modecheck_unify.m"
  while (MR_TRUE)
#line 1746 "modecheck_unify.m"
    {
#line 1746 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1746 "modecheck_unify.m"
      {
#line 1746 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1746 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1746 "modecheck_unify.m"
          {
#line 1747 "modecheck_unify.m"
            {
#line 1747 "modecheck_unify.m"
              check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__ArgModes_6);
            }
#line 1746 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1746 "modecheck_unify.m"
          }
#line 1746 "modecheck_unify.m"
        else
#line 1746 "modecheck_unify.m"
          if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1749 "modecheck_unify.m"
            {
#line 1749 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));
#line 1749 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)));

#line 1749 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1749 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 1749 "modecheck_unify.m"
                {
#line 1750 "modecheck_unify.m"
                  {
#line 1750 "modecheck_unify.m"
                    check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__Inst_4, check_hlds__modecheck_unify__ArgModes_6);
                  }
#line 1750 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1749 "modecheck_unify.m"
                }
#line 1749 "modecheck_unify.m"
            }
#line 1746 "modecheck_unify.m"
          else
#line 1746 "modecheck_unify.m"
            if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1755 "modecheck_unify.m"
              {
#line 1755 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 3)));
#line 1755 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify___Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));
#line 1755 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify___InstResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));

#line 1760 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__BoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1757 "modecheck_unify.m"
                  {
#line 1759 "modecheck_unify.m"
                    {
#line 1759 "modecheck_unify.m"
                      check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__ArgModes_6);
                    }
#line 1757 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1757 "modecheck_unify.m"
                  }
#line 1760 "modecheck_unify.m"
                else
#line 1761 "modecheck_unify.m"
                  {
#line 1761 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__FunctorArgInsts_12;
#line 1761 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_10, (MR_Integer) 0)));
#line 1761 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_10, (MR_Integer) 1)));
#line 1761 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify___Name_11;

#line 1761 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1761 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1761 "modecheck_unify.m"
                      {
#line 1761 "modecheck_unify.m"
                        check_hlds__modecheck_unify___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_15_15, (MR_Integer) 0)));
#line 1761 "modecheck_unify.m"
                        check_hlds__modecheck_unify__FunctorArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_15_15, (MR_Integer) 1)));
#line 1762 "modecheck_unify.m"
                        {
#line 1762 "modecheck_unify.m"
                          check_hlds__modecheck_unify__pair_up_insts_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__FunctorArgInsts_12, check_hlds__modecheck_unify__ArgModes_6);
                        }
#line 1762 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1761 "modecheck_unify.m"
                      }
#line 1761 "modecheck_unify.m"
                  }
#line 1755 "modecheck_unify.m"
              }
#line 1746 "modecheck_unify.m"
            else
#line 1746 "modecheck_unify.m"
              if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1765 "modecheck_unify.m"
                {
#line 1765 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__SubInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));
#line 1765 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));

#line 1766 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1766 "modecheck_unify.m"
                  {
#line 1766 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Inst__tmp_copy_4 = check_hlds__modecheck_unify__SubInst_14;

#line 1766 "modecheck_unify.m"
                    check_hlds__modecheck_unify__Inst_4 = check_hlds__modecheck_unify__Inst__tmp_copy_4;
#line 1766 "modecheck_unify.m"
                  }
#line 1766 "modecheck_unify.m"
                  continue;
#line 1765 "modecheck_unify.m"
                }
#line 1746 "modecheck_unify.m"
              else
#line 1746 "modecheck_unify.m"
                if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1752 "modecheck_unify.m"
                  {
#line 1752 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 2)));
#line 1752 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_4, (MR_Integer) 1)));

#line 1752 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1752 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1752 "modecheck_unify.m"
                      {
#line 1753 "modecheck_unify.m"
                        {
#line 1753 "modecheck_unify.m"
                          check_hlds__modecheck_unify__mode_set_args_3_p_0(check_hlds__modecheck_unify__ArgInsts_5, check_hlds__modecheck_unify__Inst_4, check_hlds__modecheck_unify__ArgModes_6);
                        }
#line 1753 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1752 "modecheck_unify.m"
                      }
#line 1752 "modecheck_unify.m"
                  }
#line 1746 "modecheck_unify.m"
                else
#line 1746 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_FALSE;
#line 1746 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1746 "modecheck_unify.m"
      }
#line 1746 "modecheck_unify.m"
      break;
#line 1746 "modecheck_unify.m"
    }
#line 1741 "modecheck_unify.m"
}

#line 1731 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
#line 1731 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_4,
#line 1731 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgInsts_5,
#line 1731 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgModes_6)
#line 1731 "modecheck_unify.m"
{
#line 1737 "modecheck_unify.m"
  {
#line 1737 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1737 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModesPrime_7;

#line 1735 "modecheck_unify.m"
    {
#line 1735 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(check_hlds__modecheck_unify__Inst_4, check_hlds__modecheck_unify__ArgInsts_5, &check_hlds__modecheck_unify__ArgModesPrime_7);
    }
#line 1737 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1736 "modecheck_unify.m"
      *check_hlds__modecheck_unify__ArgModes_6 = check_hlds__modecheck_unify__ArgModesPrime_7;
#line 1737 "modecheck_unify.m"
    else
#line 1738 "modecheck_unify.m"
      {
#line 1738 "modecheck_unify.m"
        {
#line 1738 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
#line 1738 "modecheck_unify.m"
          return;
        }
#line 1738 "modecheck_unify.m"
      }
#line 1737 "modecheck_unify.m"
  }
#line 1731 "modecheck_unify.m"
}

#line 1715 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1715 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1715 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1715 "modecheck_unify.m"
{
#line 1718 "modecheck_unify.m"
  while (MR_TRUE)
#line 1718 "modecheck_unify.m"
    {
#line 1718 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1718 "modecheck_unify.m"
      {
#line 1718 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1718 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1718 "modecheck_unify.m"
          {
#line 1718 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1718 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1718 "modecheck_unify.m"
              {
#line 1718 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1718 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1718 "modecheck_unify.m"
              }
#line 1718 "modecheck_unify.m"
          }
#line 1718 "modecheck_unify.m"
        else
#line 1719 "modecheck_unify.m"
          {
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_18_18;
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19;
#line 1719 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_20_20;

#line 1719 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1719 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1719 "modecheck_unify.m"
              {
#line 1719 "modecheck_unify.m"
                check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
#line 1719 "modecheck_unify.m"
                check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
#line 1720 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1720 "modecheck_unify.m"
                {
#line 1720 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1720 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1720 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_unify__HeadVar__1_1));
#line 1720 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_18_18, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_20_20));
#line 1720 "modecheck_unify.m"
                }
#line 1720 "modecheck_unify.m"
                {
#line 1720 "modecheck_unify.m"
                  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_11, check_hlds__modecheck_unify__V_18_18, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19);
                }
#line 1721 "modecheck_unify.m"
                {
#line 1721 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1721 "modecheck_unify.m"
                  {
#line 1721 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Args_12;
#line 1721 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1721 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_19_19;

#line 1721 "modecheck_unify.m"
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1721 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
#line 1721 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 1721 "modecheck_unify.m"
                  }
#line 1721 "modecheck_unify.m"
                  continue;
#line 1721 "modecheck_unify.m"
                }
#line 1719 "modecheck_unify.m"
              }
#line 1719 "modecheck_unify.m"
          }
#line 1718 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1718 "modecheck_unify.m"
      }
#line 1718 "modecheck_unify.m"
      break;
#line 1718 "modecheck_unify.m"
    }
#line 1715 "modecheck_unify.m"
}

#line 1706 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1706 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
#line 1706 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
#line 1706 "modecheck_unify.m"
{
#line 1709 "modecheck_unify.m"
  while (MR_TRUE)
#line 1709 "modecheck_unify.m"
    {
#line 1709 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1709 "modecheck_unify.m"
      {
#line 1709 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1709 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "modecheck_unify.m"
          {
#line 1709 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1709 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1709 "modecheck_unify.m"
              {
#line 1709 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1709 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1709 "modecheck_unify.m"
                  {
#line 1709 "modecheck_unify.m"
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
#line 1709 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1709 "modecheck_unify.m"
                  }
#line 1709 "modecheck_unify.m"
              }
#line 1709 "modecheck_unify.m"
          }
#line 1709 "modecheck_unify.m"
        else
#line 1711 "modecheck_unify.m"
          {
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Inst_11;
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Insts_12;
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1711 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

#line 1710 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1710 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1710 "modecheck_unify.m"
              {
#line 1710 "modecheck_unify.m"
                check_hlds__modecheck_unify__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 1710 "modecheck_unify.m"
                check_hlds__modecheck_unify__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 1710 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1710 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1710 "modecheck_unify.m"
                  {
#line 1710 "modecheck_unify.m"
                    check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
#line 1710 "modecheck_unify.m"
                    check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
#line 1712 "modecheck_unify.m"
                    {
#line 1712 "modecheck_unify.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_9, check_hlds__modecheck_unify__Inst_11, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18);
                    }
#line 1713 "modecheck_unify.m"
                    {
#line 1713 "modecheck_unify.m"
                      /* direct tailcall eliminated */
#line 1713 "modecheck_unify.m"
                      {
#line 1713 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__Args_10;
#line 1713 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Insts_12;
#line 1713 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1713 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

#line 1713 "modecheck_unify.m"
                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 1713 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
#line 1713 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 1713 "modecheck_unify.m"
                        check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 1713 "modecheck_unify.m"
                      }
#line 1713 "modecheck_unify.m"
                      continue;
#line 1713 "modecheck_unify.m"
                    }
#line 1710 "modecheck_unify.m"
                  }
#line 1710 "modecheck_unify.m"
              }
#line 1711 "modecheck_unify.m"
          }
#line 1709 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1709 "modecheck_unify.m"
      }
#line 1709 "modecheck_unify.m"
      break;
#line 1709 "modecheck_unify.m"
    }
#line 1706 "modecheck_unify.m"
}

#line 1679 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_6,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
#line 1679 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 1679 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
#line 1679 "modecheck_unify.m"
{
#line 1684 "modecheck_unify.m"
  while (MR_TRUE)
#line 1684 "modecheck_unify.m"
    {
#line 1684 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1684 "modecheck_unify.m"
      {
#line 1684 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1684 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1684 "modecheck_unify.m"
          {
#line 1684 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InstMap_10;

#line 1685 "modecheck_unify.m"
            {
#line 1685 "modecheck_unify.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_10);
            }
#line 1686 "modecheck_unify.m"
            {
#line 1686 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_10, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
            }
#line 1684 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1684 "modecheck_unify.m"
          }
#line 1684 "modecheck_unify.m"
        else
#line 1684 "modecheck_unify.m"
          if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1691 "modecheck_unify.m"
            {
#line 1691 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 3)));
#line 1691 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify___Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
#line 1691 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify___InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

#line 1697 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1693 "modecheck_unify.m"
                {
#line 1693 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__InstMap_29;

#line 1695 "modecheck_unify.m"
                  {
#line 1695 "modecheck_unify.m"
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_29);
                  }
#line 1696 "modecheck_unify.m"
                  {
#line 1696 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                  }
#line 1693 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 1693 "modecheck_unify.m"
                }
#line 1697 "modecheck_unify.m"
              else
#line 1698 "modecheck_unify.m"
                {
#line 1698 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__ArgInsts_16;
#line 1698 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 0)));
#line 1698 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 1)));
#line 1698 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 0)));

#line 1698 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ArgInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 1)));
#line 1698 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1698 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 1699 "modecheck_unify.m"
                    {
#line 1699 "modecheck_unify.m"
                      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_2_5_p_0(check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__ArgInsts_16, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                    }
#line 1698 "modecheck_unify.m"
                }
#line 1691 "modecheck_unify.m"
            }
#line 1684 "modecheck_unify.m"
          else
#line 1684 "modecheck_unify.m"
            if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1702 "modecheck_unify.m"
              {
#line 1702 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));
#line 1702 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));

#line 1703 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1703 "modecheck_unify.m"
                {
#line 1703 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__Inst__tmp_copy_6 = check_hlds__modecheck_unify__SubInst_18;

#line 1703 "modecheck_unify.m"
                  check_hlds__modecheck_unify__Inst_6 = check_hlds__modecheck_unify__Inst__tmp_copy_6;
#line 1703 "modecheck_unify.m"
                }
#line 1703 "modecheck_unify.m"
                continue;
#line 1702 "modecheck_unify.m"
              }
#line 1684 "modecheck_unify.m"
            else
#line 1684 "modecheck_unify.m"
              if (((((MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1688 "modecheck_unify.m"
                {
#line 1688 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
#line 1688 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

#line 1688 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1688 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 1689 "modecheck_unify.m"
                    {
#line 1689 "modecheck_unify.m"
                      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(check_hlds__modecheck_unify__Uniq_11, check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                    }
#line 1688 "modecheck_unify.m"
                }
#line 1684 "modecheck_unify.m"
              else
#line 1684 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
#line 1684 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 1684 "modecheck_unify.m"
      }
#line 1684 "modecheck_unify.m"
      break;
#line 1684 "modecheck_unify.m"
    }
#line 1679 "modecheck_unify.m"
}

#line 1664 "modecheck_unify.m"
static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
#line 1664 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 1664 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 1664 "modecheck_unify.m"
{
#line 1664 "modecheck_unify.m"
  {
#line 1664 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__wrapper_arg_2;
#line 1664 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;
#line 1664 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__2_20;

#line 1664 "modecheck_unify.m"
    {
#line 1664 "modecheck_unify.m"
      check_hlds__modecheck_unify__conv0_HeadVar__2_20 = check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1664__1_1_f_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 1664 "modecheck_unify.m"
    check_hlds__modecheck_unify__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__2_20));
#line 1664 "modecheck_unify.m"
    return check_hlds__modecheck_unify__wrapper_arg_2;
#line 1664 "modecheck_unify.m"
  }
#line 1664 "modecheck_unify.m"
}

#line 1650 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Inst_8,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_9,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfXArgs_10,
#line 1650 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
#line 1650 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17)
#line 1650 "modecheck_unify.m"
{
#line 1654 "modecheck_unify.m"
  {
#line 1654 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1654 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_12;

#line 1655 "modecheck_unify.m"
    {
#line 1655 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__ModuleInfo_12);
    }
#line 1656 "modecheck_unify.m"
    {
#line 1656 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo_12, check_hlds__modecheck_unify__InstOfX_7);
    }
#line 1658 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1658 "modecheck_unify.m"
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16;
#line 1658 "modecheck_unify.m"
    else
#line 1659 "modecheck_unify.m"
      {
#line 1659 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InFromGroundTerm_13;

#line 1659 "modecheck_unify.m"
        {
#line 1659 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__InFromGroundTerm_13);
        }
#line 1662 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__InFromGroundTerm_13 == (MR_Integer) 0))
#line 1661 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16;
#line 1662 "modecheck_unify.m"
        else
#line 1663 "modecheck_unify.m"
          {
#line 1663 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
#line 1675 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31;

#line 1664 "modecheck_unify.m"
            {
#line 1664 "modecheck_unify.m"
              check_hlds__modecheck_unify__UnifyArgInsts_14 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], (MR_Word) &check_hlds__modecheck_unify_scalar_common_4[2], check_hlds__modecheck_unify__InstOfXArgs_10);
            }
#line 1673 "modecheck_unify.m"
            {
#line 1673 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(check_hlds__modecheck_unify__Inst_8, check_hlds__modecheck_unify__ArgVars_9, check_hlds__modecheck_unify__UnifyArgInsts_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31);
            }
#line 1675 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1675 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31;
#line 1675 "modecheck_unify.m"
            else
#line 1676 "modecheck_unify.m"
              {
#line 1676 "modecheck_unify.m"
                {
#line 1676 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
#line 1676 "modecheck_unify.m"
                  return;
                }
#line 1676 "modecheck_unify.m"
              }
#line 1663 "modecheck_unify.m"
          }
#line 1659 "modecheck_unify.m"
      }
#line 1654 "modecheck_unify.m"
  }
#line 1650 "modecheck_unify.m"
}

#line 1580 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
#line 1580 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
#line 1580 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6)
#line 1580 "modecheck_unify.m"
{
#line 1584 "modecheck_unify.m"
  while (MR_TRUE)
#line 1584 "modecheck_unify.m"
    {
#line 1584 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1584 "modecheck_unify.m"
      {
#line 1584 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1584 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "modecheck_unify.m"
          *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 0;
#line 1584 "modecheck_unify.m"
        else
#line 1587 "modecheck_unify.m"
          {
#line 1587 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 0)));
#line 1587 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 1)));
#line 1587 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgMode_18;
#line 1587 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgModes_19;
#line 1587 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Initial_20;
#line 1599 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_28_28;
#line 1599 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_21_21;
#line 1599 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_22_22;

#line 1590 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__ArgModesList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "modecheck_unify.m"
              {
#line 1592 "modecheck_unify.m"
                {
#line 1592 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.match_mode_by_higher_order_insts\'/6", (MR_String) "too many arguments");
#line 1592 "modecheck_unify.m"
                  return;
                }
#line 1591 "modecheck_unify.m"
              }
#line 1590 "modecheck_unify.m"
            else
#line 1589 "modecheck_unify.m"
              {
#line 1589 "modecheck_unify.m"
                check_hlds__modecheck_unify__ArgMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 0)));
#line 1589 "modecheck_unify.m"
                check_hlds__modecheck_unify__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 1)));
#line 1589 "modecheck_unify.m"
              }
#line 1598 "modecheck_unify.m"
            {
#line 1598 "modecheck_unify.m"
              check_hlds__modecheck_unify__Initial_20 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgMode_18);
            }
#line 1599 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Initial_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1599 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1599 "modecheck_unify.m"
              {
#line 1599 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 1)));
#line 1599 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 2)));
#line 1599 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1599 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1599 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_unify__V_28_28), (MR_Integer) 1);
#line 1599 "modecheck_unify.m"
              }
#line 1610 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1600 "modecheck_unify.m"
              {
#line 1600 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ArgInst_23;
#line 1600 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ArgType_24;

#line 1600 "modecheck_unify.m"
                {
#line 1600 "modecheck_unify.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgInst_23);
                }
#line 1601 "modecheck_unify.m"
                {
#line 1601 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__3_3, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgType_24);
                }
#line 1602 "modecheck_unify.m"
                {
#line 1602 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__ArgInst_23, check_hlds__modecheck_unify__Initial_20, check_hlds__modecheck_unify__ArgType_24, check_hlds__modecheck_unify__HeadVar__1_1);
                }
#line 1605 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1603 "modecheck_unify.m"
                  {
#line 1603 "modecheck_unify.m"
                    /* direct tailcall eliminated */
#line 1603 "modecheck_unify.m"
                    {
#line 1603 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
#line 1603 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

#line 1603 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
#line 1603 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
#line 1603 "modecheck_unify.m"
                    }
#line 1603 "modecheck_unify.m"
                    continue;
#line 1603 "modecheck_unify.m"
                  }
#line 1605 "modecheck_unify.m"
                else
#line 1607 "modecheck_unify.m"
                  {
#line 1605 "modecheck_unify.m"
                    {
#line 1605 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgInst_23);
                    }
#line 1605 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1607 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1606 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 2;
#line 1607 "modecheck_unify.m"
                    else
#line 1608 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 1;
#line 1607 "modecheck_unify.m"
                  }
#line 1600 "modecheck_unify.m"
              }
#line 1610 "modecheck_unify.m"
            else
#line 1611 "modecheck_unify.m"
              {
#line 1611 "modecheck_unify.m"
                /* direct tailcall eliminated */
#line 1611 "modecheck_unify.m"
                {
#line 1611 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
#line 1611 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

#line 1611 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
#line 1611 "modecheck_unify.m"
                  check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
#line 1611 "modecheck_unify.m"
                }
#line 1611 "modecheck_unify.m"
                continue;
#line 1611 "modecheck_unify.m"
              }
#line 1587 "modecheck_unify.m"
          }
#line 1584 "modecheck_unify.m"
      }
#line 1584 "modecheck_unify.m"
      break;
#line 1584 "modecheck_unify.m"
    }
#line 1580 "modecheck_unify.m"
}

#line 1553 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstMap_2,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
#line 1553 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
#line 1553 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Result_8)
#line 1553 "modecheck_unify.m"
{
#line 1558 "modecheck_unify.m"
  while (MR_TRUE)
#line 1558 "modecheck_unify.m"
    {
#line 1558 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 1558 "modecheck_unify.m"
      {
#line 1558 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 1558 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1558 "modecheck_unify.m"
          {
#line 1558 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_16_16;

#line 1559 "modecheck_unify.m"
            {
#line 1559 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_16_16 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__modecheck_unify__RevMatchedProcIds_7);
            }
#line 1559 "modecheck_unify.m"
            {
#line 1559 "modecheck_unify.m"
              MR_Word base;
#line 1559 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Result_8 = base;
#line 1559 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_16_16));
#line 1559 "modecheck_unify.m"
            }
#line 1558 "modecheck_unify.m"
          }
#line 1558 "modecheck_unify.m"
        else
#line 1561 "modecheck_unify.m"
          {
#line 1561 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 0)));
#line 1561 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 1)));
#line 1561 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcInfo_26;
#line 1561 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ArgModes_27;
#line 1561 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ProcResult_28;

#line 1562 "modecheck_unify.m"
            {
#line 1562 "modecheck_unify.m"
              hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__modecheck_unify__PredInfo_5, check_hlds__modecheck_unify__ProcId_22, &check_hlds__modecheck_unify__ProcInfo_26);
            }
#line 1563 "modecheck_unify.m"
            {
#line 1563 "modecheck_unify.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_unify__ProcInfo_26, &check_hlds__modecheck_unify__ArgModes_27);
            }
#line 1564 "modecheck_unify.m"
            {
#line 1564 "modecheck_unify.m"
              check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(check_hlds__modecheck_unify__ModuleInfo_1, check_hlds__modecheck_unify__InstMap_2, check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__ArgVars_4, check_hlds__modecheck_unify__ArgModes_27, &check_hlds__modecheck_unify__ProcResult_28);
            }
#line 1571 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__ProcResult_28 == (MR_Integer) 2))
#line 1577 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1571 "modecheck_unify.m"
            else
#line 1571 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__ProcResult_28 == (MR_Integer) 1))
#line 1573 "modecheck_unify.m"
                {
#line 1573 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1573 "modecheck_unify.m"
                  {
#line 1573 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;

#line 1573 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
#line 1573 "modecheck_unify.m"
                  }
#line 1573 "modecheck_unify.m"
                  continue;
#line 1573 "modecheck_unify.m"
                }
#line 1571 "modecheck_unify.m"
              else
#line 1567 "modecheck_unify.m"
                {
#line 1567 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_29_29;

#line 1569 "modecheck_unify.m"
                  {
#line 1569 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__ProcId_22));
#line 1569 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__RevMatchedProcIds_7));
#line 1569 "modecheck_unify.m"
                  }
#line 1568 "modecheck_unify.m"
                  /* direct tailcall eliminated */
#line 1568 "modecheck_unify.m"
                  {
#line 1568 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;
#line 1568 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7 = check_hlds__modecheck_unify__V_29_29;

#line 1568 "modecheck_unify.m"
                    check_hlds__modecheck_unify__RevMatchedProcIds_7 = check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7;
#line 1568 "modecheck_unify.m"
                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
#line 1568 "modecheck_unify.m"
                  }
#line 1568 "modecheck_unify.m"
                  continue;
#line 1567 "modecheck_unify.m"
                }
#line 1561 "modecheck_unify.m"
          }
#line 1558 "modecheck_unify.m"
      }
#line 1558 "modecheck_unify.m"
      break;
#line 1558 "modecheck_unify.m"
    }
#line 1553 "modecheck_unify.m"
}

#line 1436 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
#line 1436 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 1436 "modecheck_unify.m"
{
#line 1436 "modecheck_unify.m"
  {
#line 1436 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1436 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 1436 "modecheck_unify.m"
    {
#line 1436 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1436__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 1436 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1436 "modecheck_unify.m"
  }
#line 1436 "modecheck_unify.m"
}

#line 1420 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_13,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfXArgs_14,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_15,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_16,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_21,
#line 1420 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_22,
#line 1420 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
#line 1420 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71)
#line 1420 "modecheck_unify.m"
{
#line 1428 "modecheck_unify.m"
  {
#line 1428 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1428 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_24;
#line 1428 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeOfX_25;
#line 1428 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubInfo_35;
#line 1428 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_36;
#line 1428 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes_49;

#line 1429 "modecheck_unify.m"
    {
#line 1429 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__ModuleInfo_24);
    }
#line 1430 "modecheck_unify.m"
    {
#line 1430 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__X_16, &check_hlds__modecheck_unify__TypeOfX_25);
    }
#line 1442 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_21)) == (MR_mktag((MR_Integer) 0))))
#line 1433 "modecheck_unify.m"
      {
#line 1433 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
#line 1433 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_28_28;
#line 1433 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_29_29;
#line 1433 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_30_30;
#line 1433 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_31_31;

#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
#line 1433 "modecheck_unify.m"
        check_hlds__modecheck_unify__SubInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 6)));
#line 1437 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__SubInfo_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1438 "modecheck_unify.m"
          {
#line 1438 "modecheck_unify.m"
          }
#line 1437 "modecheck_unify.m"
        else
#line 1435 "modecheck_unify.m"
          {
#line 1435 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_35, (MR_Integer) 0)));
#line 1435 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1435 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify___MaybeSize0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_35, (MR_Integer) 1)));

#line 1436 "modecheck_unify.m"
            {
#line 1436 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2]));
#line 1436 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1));
#line 1436 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1436 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_33));
#line 1436 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "modecheck_unify.m"
            }
#line 1436 "modecheck_unify.m"
            {
#line 1436 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_72_72, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/12", (MR_String) "take_addr");
            }
#line 1435 "modecheck_unify.m"
          }
#line 1433 "modecheck_unify.m"
      }
#line 1442 "modecheck_unify.m"
    else
#line 1442 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_21)) == (MR_mktag((MR_Integer) 1))))
#line 1443 "modecheck_unify.m"
        {
#line 1443 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
#line 1443 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_38_38;
#line 1443 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_39_39;
#line 1443 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_40_40;
#line 1443 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_41_41;

#line 1443 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
#line 1443 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
#line 1443 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
#line 1443 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
#line 1443 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
#line 1444 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1443 "modecheck_unify.m"
        }
#line 1442 "modecheck_unify.m"
      else
#line 1450 "modecheck_unify.m"
        {
#line 1451 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_36 = check_hlds__modecheck_unify__NewConsId_17;
#line 1450 "modecheck_unify.m"
        }
#line 1454 "modecheck_unify.m"
    {
#line 1454 "modecheck_unify.m"
      check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfXArgs_14, check_hlds__modecheck_unify__ArgModes0_15, &check_hlds__modecheck_unify__ArgModes_49);
    }
#line 1455 "modecheck_unify.m"
    {
#line 1455 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfX_13);
    }
#line 1467 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1458 "modecheck_unify.m"
      {
#line 1458 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_79_79;
#line 1458 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80;
#line 1458 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81;

#line 1457 "modecheck_unify.m"
        {
#line 1457 "modecheck_unify.m"
          MR_Word base;
#line 1457 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_22 = base;
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_49));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1457 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_35));
#line 1457 "modecheck_unify.m"
        }
#line 1462 "modecheck_unify.m"
        {
#line 1462 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_79_79, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_20));
#line 1462 "modecheck_unify.m"
        }
#line 1462 "modecheck_unify.m"
        {
#line 1462 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_79_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80);
        }
#line 1464 "modecheck_unify.m"
        {
#line 1464 "modecheck_unify.m"
          check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(check_hlds__modecheck_unify__ArgVars_18, check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81);
        }
#line 1466 "modecheck_unify.m"
        {
#line 1466 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
#line 1466 "modecheck_unify.m"
          return;
        }
#line 1458 "modecheck_unify.m"
      }
#line 1467 "modecheck_unify.m"
    else
#line 1505 "modecheck_unify.m"
      {
#line 1505 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__CanFail_60;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInst0_50;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInst0_51;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInst_52;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInst_53;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_83_83;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_84_84;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_85_85;
#line 1476 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_86_86;
#line 1479 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_54_54;
#line 1479 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_55_55;
#line 1479 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_56_56;
#line 1480 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1480 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_58_58;
#line 1480 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_59_59;

#line 1476 "modecheck_unify.m"
        {
#line 1476 "modecheck_unify.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__ModeOfX_13, &check_hlds__modecheck_unify__InitialInst0_50, &check_hlds__modecheck_unify__FinalInst0_51);
        }
#line 1477 "modecheck_unify.m"
        {
#line 1477 "modecheck_unify.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__InitialInst0_50, &check_hlds__modecheck_unify__InitialInst_52);
        }
#line 1478 "modecheck_unify.m"
        {
#line 1478 "modecheck_unify.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__FinalInst0_51, &check_hlds__modecheck_unify__FinalInst_53);
        }
#line 1479 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__InitialInst_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1479 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1479 "modecheck_unify.m"
          {
#line 1479 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 1)));
#line 1479 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 2)));
#line 1479 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 3)));
#line 1479 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 1479 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1479 "modecheck_unify.m"
              {
#line 1479 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 0)));
#line 1479 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 1)));
#line 1479 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1476 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1476 "modecheck_unify.m"
                  {
#line 1480 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__FinalInst_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1480 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1480 "modecheck_unify.m"
                      {
#line 1480 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 1)));
#line 1480 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 2)));
#line 1480 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 3)));
#line 1480 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 1480 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1480 "modecheck_unify.m"
                          {
#line 1480 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 0)));
#line 1480 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 1)));
#line 1480 "modecheck_unify.m"
                            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1480 "modecheck_unify.m"
                          }
#line 1480 "modecheck_unify.m"
                      }
#line 1476 "modecheck_unify.m"
                  }
#line 1479 "modecheck_unify.m"
              }
#line 1479 "modecheck_unify.m"
          }
#line 1483 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1482 "modecheck_unify.m"
          {
#line 1482 "modecheck_unify.m"
            check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
#line 1482 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1482 "modecheck_unify.m"
          }
#line 1483 "modecheck_unify.m"
        else
#line 1490 "modecheck_unify.m"
          {
#line 1486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Constructors_61;
#line 1486 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_87_87;
#line 1487 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_62_62;

#line 1486 "modecheck_unify.m"
            {
#line 1486 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__modecheck_unify__ModuleInfo_24, check_hlds__modecheck_unify__TypeOfX_25, &check_hlds__modecheck_unify__Constructors_61);
            }
#line 1486 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1486 "modecheck_unify.m"
              {
#line 1487 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Constructors_61)) == (MR_mktag((MR_Integer) 1)));
#line 1487 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1487 "modecheck_unify.m"
                  {
#line 1487 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 0)));
#line 1487 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 1)));
#line 1487 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1487 "modecheck_unify.m"
                  }
#line 1486 "modecheck_unify.m"
              }
#line 1490 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1489 "modecheck_unify.m"
              {
#line 1489 "modecheck_unify.m"
                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
#line 1489 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1489 "modecheck_unify.m"
              }
#line 1490 "modecheck_unify.m"
            else
#line 1492 "modecheck_unify.m"
              {
#line 1492 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__InstMap0_63;
#line 1502 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredOrFunc_65;
#line 1495 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1495 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_67_67;

#line 1492 "modecheck_unify.m"
                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 0;
#line 1493 "modecheck_unify.m"
                {
#line 1493 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__InstMap0_63);
                }
#line 1495 "modecheck_unify.m"
                {
#line 1495 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_25, &check_hlds__modecheck_unify__V_64_64, &check_hlds__modecheck_unify__PredOrFunc_65, &check_hlds__modecheck_unify__V_67_67);
                }
#line 1495 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1496 "modecheck_unify.m"
                  {
#line 1496 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap0_63);
                  }
#line 1502 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1498 "modecheck_unify.m"
                  {
#line 1498 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__WaitingVars_68;
#line 1498 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ModeError_69;
#line 1498 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_88_88;

#line 1498 "modecheck_unify.m"
                    {
#line 1498 "modecheck_unify.m"
                      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_68);
                    }
#line 1500 "modecheck_unify.m"
                    {
#line 1500 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1500 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1500 "modecheck_unify.m"
                    }
#line 1499 "modecheck_unify.m"
                    {
#line 1499 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ModeError_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1499 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1499 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_88_88));
#line 1499 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 3) = ((MR_Box) (check_hlds__modecheck_unify__TypeOfX_25));
#line 1499 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_65));
#line 1499 "modecheck_unify.m"
                    }
#line 1501 "modecheck_unify.m"
                    {
#line 1501 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_68, check_hlds__modecheck_unify__ModeError_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
                    }
#line 1498 "modecheck_unify.m"
                  }
#line 1502 "modecheck_unify.m"
                else
#line 1502 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
#line 1492 "modecheck_unify.m"
              }
#line 1490 "modecheck_unify.m"
          }
#line 1506 "modecheck_unify.m"
        {
#line 1506 "modecheck_unify.m"
          MR_Word base;
#line 1506 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_22 = base;
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_36));
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_49));
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_60));
#line 1506 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1506 "modecheck_unify.m"
        }
#line 1505 "modecheck_unify.m"
      }
#line 1428 "modecheck_unify.m"
  }
#line 1420 "modecheck_unify.m"
}

#line 1331 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
#line 1331 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 1331 "modecheck_unify.m"
{
#line 1331 "modecheck_unify.m"
  {
#line 1331 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1331 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 1331 "modecheck_unify.m"
    {
#line 1331 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1331__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 1331 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 1331 "modecheck_unify.m"
  }
#line 1331 "modecheck_unify.m"
}

#line 1318 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_12,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgModes0_13,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_14,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_17,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_18,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1318 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
#line 1318 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81)
#line 1318 "modecheck_unify.m"
{
#line 1324 "modecheck_unify.m"
  {
#line 1324 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1324 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__Arity_22;
#line 1324 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_24;
#line 1324 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubInfo_29;
#line 1324 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_45;
#line 1324 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes_46;
#line 1324 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_47;

#line 1326 "modecheck_unify.m"
    {
#line 1326 "modecheck_unify.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__Arity_22);
    }
#line 1335 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1328 "modecheck_unify.m"
      {
#line 1328 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
#line 1328 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_25_25;
#line 1328 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_26_26;
#line 1328 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_27_27;
#line 1328 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_28_28;

#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
#line 1328 "modecheck_unify.m"
        check_hlds__modecheck_unify__SubInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 6)));
#line 1332 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__SubInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "modecheck_unify.m"
          {
#line 1333 "modecheck_unify.m"
          }
#line 1332 "modecheck_unify.m"
        else
#line 1330 "modecheck_unify.m"
          {
#line 1330 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 0)));
#line 1330 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_87_87;
#line 1330 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify___MaybeSize_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 1)));

#line 1331 "modecheck_unify.m"
            {
#line 1331 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2]));
#line 1331 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1));
#line 1331 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1331 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30));
#line 1331 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1331 "modecheck_unify.m"
            }
#line 1331 "modecheck_unify.m"
            {
#line 1331 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_87_87, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "take_addr");
            }
#line 1330 "modecheck_unify.m"
          }
#line 1328 "modecheck_unify.m"
      }
#line 1335 "modecheck_unify.m"
    else
#line 1335 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 1))))
#line 1336 "modecheck_unify.m"
        {
#line 1336 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
#line 1336 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_33_33;
#line 1336 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_34_34;
#line 1336 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_35_35;
#line 1336 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_36_36;

#line 1336 "modecheck_unify.m"
          check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1336 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1336 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1336 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
#line 1336 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
#line 1337 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1336 "modecheck_unify.m"
        }
#line 1335 "modecheck_unify.m"
      else
#line 1342 "modecheck_unify.m"
        {
#line 1343 "modecheck_unify.m"
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1347 "modecheck_unify.m"
          {
#line 1347 "modecheck_unify.m"
            check_hlds__modecheck_unify__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1347 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[1]));
#line 1347 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
#line 1347 "modecheck_unify.m"
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[10]));
#line 1347 "modecheck_unify.m"
          }
#line 1342 "modecheck_unify.m"
        }
#line 1349 "modecheck_unify.m"
    {
#line 1349 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__ModuleInfo_45);
    }
#line 1350 "modecheck_unify.m"
    {
#line 1350 "modecheck_unify.m"
      check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__ArgModes0_13, check_hlds__modecheck_unify__ArgModes0_13, &check_hlds__modecheck_unify__ArgModes_46);
    }
#line 1351 "modecheck_unify.m"
    {
#line 1351 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__InstMap_47);
    }
#line 1352 "modecheck_unify.m"
    {
#line 1352 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__ModeOfX_12);
    }
#line 1397 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1394 "modecheck_unify.m"
      {
#line 1392 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_48;

#line 1362 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1362 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1362 "modecheck_unify.m"
          {
#line 1362 "modecheck_unify.m"
            check_hlds__modecheck_unify__ShroudedPredProcId_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 1)));
#line 1363 "modecheck_unify.m"
            {
#line 1363 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_47);
            }
#line 1362 "modecheck_unify.m"
          }
#line 1392 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1365 "modecheck_unify.m"
          {
#line 1365 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__PredId_50;
#line 1365 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__ProcId_51;
#line 1365 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_93_93;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Goal_59;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_94_94;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_119_119;
#line 1367 "modecheck_unify.m"
            MR_Integer check_hlds__modecheck_unify__V_120_120;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_52_52;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_53_53;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_54_54;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_55_55;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_56_56;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1367 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_58_58;
#line 1368 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1368 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_60_60;
#line 1368 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_61_61;
#line 1368 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_62_62;
#line 1368 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63;

#line 1365 "modecheck_unify.m"
            {
#line 1365 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_93_93 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_48);
            }
#line 1365 "modecheck_unify.m"
            check_hlds__modecheck_unify__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 0)));
#line 1365 "modecheck_unify.m"
            check_hlds__modecheck_unify__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 1)));
#line 1367 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS0_17)) == (MR_mktag((MR_Integer) 2)));
#line 1367 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1367 "modecheck_unify.m"
              {
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 2)));
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 3)));
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 4)));
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 5)));
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__Goal_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 6)));
#line 1367 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1367 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1367 "modecheck_unify.m"
                  {
#line 1368 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 0)));
#line 1368 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 1)));
#line 1368 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_94_94)) == (MR_mktag((MR_Integer) 2)));
#line 1368 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1368 "modecheck_unify.m"
                      {
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 0)));
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 1)));
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 2)));
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 3)));
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 4)));
#line 1368 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 5)));
#line 1368 "modecheck_unify.m"
                        {
#line 1368 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__modecheck_unify__PredId_50, check_hlds__modecheck_unify__V_119_119);
                        }
#line 1367 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1368 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__ProcId_51 == check_hlds__modecheck_unify__V_120_120);
#line 1368 "modecheck_unify.m"
                      }
#line 1367 "modecheck_unify.m"
                  }
#line 1367 "modecheck_unify.m"
              }
#line 1389 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1370 "modecheck_unify.m"
              {
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredInfo_65;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredModule_66;
#line 1370 "modecheck_unify.m"
                MR_String check_hlds__modecheck_unify__PredName_67;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes_68;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Type_69;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__RHSTypeCtor_74;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__RHSConsId_76;
#line 1370 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_104_104;
#line 1383 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__MaybeReturnType_71;
#line 1375 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_70_70;
#line 1375 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_72_72;

#line 1370 "modecheck_unify.m"
                {
#line 1370 "modecheck_unify.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_45, check_hlds__modecheck_unify__PredId_50, &check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1371 "modecheck_unify.m"
                {
#line 1371 "modecheck_unify.m"
                  check_hlds__modecheck_unify__PredModule_66 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1372 "modecheck_unify.m"
                {
#line 1372 "modecheck_unify.m"
                  check_hlds__modecheck_unify__PredName_67 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
#line 1373 "modecheck_unify.m"
                {
#line 1373 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes_68);
                }
#line 1374 "modecheck_unify.m"
                {
#line 1374 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_68, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_69);
                }
#line 1375 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1375 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1375 "modecheck_unify.m"
                  {
#line 1375 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 1)));
#line 1375 "modecheck_unify.m"
                    check_hlds__modecheck_unify__MaybeReturnType_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 2)));
#line 1375 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 3)));
#line 1379 "modecheck_unify.m"
                    if ((check_hlds__modecheck_unify__MaybeReturnType_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "modecheck_unify.m"
                      {
#line 1378 "modecheck_unify.m"
                        check_hlds__modecheck_unify__RHSTypeCtor_74 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[11];
#line 1377 "modecheck_unify.m"
                      }
#line 1379 "modecheck_unify.m"
                    else
#line 1380 "modecheck_unify.m"
                      {
#line 1381 "modecheck_unify.m"
                        check_hlds__modecheck_unify__RHSTypeCtor_74 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[12];
#line 1380 "modecheck_unify.m"
                      }
#line 1375 "modecheck_unify.m"
                  }
#line 1375 "modecheck_unify.m"
                else
#line 1384 "modecheck_unify.m"
                  {
#line 1384 "modecheck_unify.m"
                    {
#line 1384 "modecheck_unify.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "bad HO type");
#line 1384 "modecheck_unify.m"
                      return;
                    }
#line 1384 "modecheck_unify.m"
                  }
#line 1386 "modecheck_unify.m"
                {
#line 1386 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredModule_66));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 1) = ((MR_Box) (check_hlds__modecheck_unify__PredName_67));
#line 1386 "modecheck_unify.m"
                }
#line 1386 "modecheck_unify.m"
                {
#line 1386 "modecheck_unify.m"
                  check_hlds__modecheck_unify__RHSConsId_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_104_104));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
#line 1386 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 3) = ((MR_Box) (check_hlds__modecheck_unify__RHSTypeCtor_74));
#line 1386 "modecheck_unify.m"
                }
#line 1388 "modecheck_unify.m"
                {
#line 1388 "modecheck_unify.m"
                  MR_Word base;
#line 1388 "modecheck_unify.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__RHS_18 = base;
#line 1388 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__RHSConsId_76));
#line 1388 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1388 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1388 "modecheck_unify.m"
                }
#line 1370 "modecheck_unify.m"
              }
#line 1389 "modecheck_unify.m"
            else
#line 1390 "modecheck_unify.m"
              {
#line 1390 "modecheck_unify.m"
                {
#line 1390 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "reintroduced lambda goal");
#line 1390 "modecheck_unify.m"
                  return;
                }
#line 1390 "modecheck_unify.m"
              }
#line 1365 "modecheck_unify.m"
          }
#line 1392 "modecheck_unify.m"
        else
#line 1393 "modecheck_unify.m"
          *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1395 "modecheck_unify.m"
        {
#line 1395 "modecheck_unify.m"
          MR_Word base;
#line 1395 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Unification_20 = base;
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_24));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_46));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1395 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_29));
#line 1395 "modecheck_unify.m"
        }
#line 1394 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
#line 1394 "modecheck_unify.m"
      }
#line 1397 "modecheck_unify.m"
    else
#line 1410 "modecheck_unify.m"
      {
#line 1397 "modecheck_unify.m"
        {
#line 1397 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_47);
        }
#line 1410 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1401 "modecheck_unify.m"
          {
#line 1401 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_77;
#line 1401 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__VarTypes0_78;
#line 1401 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_79;
#line 1401 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_111_111;
#line 1401 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Type_113;

#line 1401 "modecheck_unify.m"
            {
#line 1401 "modecheck_unify.m"
              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_77);
            }
#line 1402 "modecheck_unify.m"
            {
#line 1402 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes0_78);
            }
#line 1403 "modecheck_unify.m"
            {
#line 1403 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_78, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_113);
            }
#line 1405 "modecheck_unify.m"
            {
#line 1405 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_111_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 0) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
#line 1405 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes0_13));
#line 1405 "modecheck_unify.m"
            }
#line 1404 "modecheck_unify.m"
            {
#line 1404 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1404 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 1404 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_111_111));
#line 1404 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_113));
#line 1404 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_16));
#line 1404 "modecheck_unify.m"
            }
#line 1406 "modecheck_unify.m"
            {
#line 1406 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_77, check_hlds__modecheck_unify__ModeError_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);
            }
#line 1408 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
#line 1409 "modecheck_unify.m"
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1401 "modecheck_unify.m"
          }
#line 1410 "modecheck_unify.m"
        else
#line 1411 "modecheck_unify.m"
          {
#line 1411 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
#line 1412 "modecheck_unify.m"
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
#line 1411 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
#line 1411 "modecheck_unify.m"
          }
#line 1410 "modecheck_unify.m"
      }
#line 1324 "modecheck_unify.m"
  }
#line 1318 "modecheck_unify.m"
}

#line 1211 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_12,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_13,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Type_14,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_17,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_19,
#line 1211 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_20,
#line 1211 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62,
#line 1211 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63)
#line 1211 "modecheck_unify.m"
{
#line 1217 "modecheck_unify.m"
  {
#line 1217 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_22;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InitialInstX_23;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalInstX_24;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InitialInstY_25;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalInstY_26;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UniMode_27;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__CanFail_28;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars_33;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo3_40;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_64_64;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_65_65;
#line 1217 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1223 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_29_29;
#line 1226 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars0_32;
#line 1224 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_30_30;
#line 1224 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_31_31;
#line 1251 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Errors_41;
#line 1252 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 1252 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_43_43;

#line 1219 "modecheck_unify.m"
    {
#line 1219 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_unify__ModuleInfo0_22);
    }
#line 1220 "modecheck_unify.m"
    {
#line 1220 "modecheck_unify.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_22, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__InitialInstX_23, &check_hlds__modecheck_unify__FinalInstX_24);
    }
#line 1221 "modecheck_unify.m"
    {
#line 1221 "modecheck_unify.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_22, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__InitialInstY_25, &check_hlds__modecheck_unify__FinalInstY_26);
    }
#line 1222 "modecheck_unify.m"
    {
#line 1222 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_23));
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_64_64, 1) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_25));
#line 1222 "modecheck_unify.m"
    }
#line 1222 "modecheck_unify.m"
    {
#line 1222 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_65_65, 0) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstX_24));
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_65_65, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstY_26));
#line 1222 "modecheck_unify.m"
    }
#line 1222 "modecheck_unify.m"
    {
#line 1222 "modecheck_unify.m"
      check_hlds__modecheck_unify__UniMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode_27, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_64_64));
#line 1222 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_65_65));
#line 1222 "modecheck_unify.m"
    }
#line 1223 "modecheck_unify.m"
    {
#line 1223 "modecheck_unify.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_unify__Det_17, &check_hlds__modecheck_unify__CanFail_28, &check_hlds__modecheck_unify__V_29_29);
    }
#line 1224 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1224 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1224 "modecheck_unify.m"
      {
#line 1224 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
#line 1224 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
#line 1224 "modecheck_unify.m"
        check_hlds__modecheck_unify__UnifyTypeInfoVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
#line 1225 "modecheck_unify.m"
        check_hlds__modecheck_unify__UnifyTypeInfoVars_33 = check_hlds__modecheck_unify__UnifyTypeInfoVars0_32;
#line 1224 "modecheck_unify.m"
      }
#line 1224 "modecheck_unify.m"
    else
#line 1227 "modecheck_unify.m"
      {
#line 1227 "modecheck_unify.m"
        {
#line 1227 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_complicated_unify\'/11", (MR_String) "non-complicated unify");
#line 1227 "modecheck_unify.m"
          return;
        }
#line 1227 "modecheck_unify.m"
      }
#line 1229 "modecheck_unify.m"
    {
#line 1229 "modecheck_unify.m"
      MR_Word base;
#line 1229 "modecheck_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "modecheck_unify.m"
      *check_hlds__modecheck_unify__Unification_20 = base;
#line 1229 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1229 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__UniMode_27));
#line 1229 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_28));
#line 1229 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__UnifyTypeInfoVars_33));
#line 1229 "modecheck_unify.m"
    }
#line 1236 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__UnifyTypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1235 "modecheck_unify.m"
      check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62;
#line 1236 "modecheck_unify.m"
    else
#line 1237 "modecheck_unify.m"
      {
#line 1237 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__NumTypeInfoVars_36;
#line 1237 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ExpectedInsts_37;
#line 1237 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1237 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73;
#line 1237 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74;
#line 1243 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify___InstVarSub_39;

#line 1238 "modecheck_unify.m"
        {
#line 1238 "modecheck_unify.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__UnifyTypeInfoVars_33, &check_hlds__modecheck_unify__NumTypeInfoVars_36);
        }
#line 1239 "modecheck_unify.m"
        {
#line 1239 "modecheck_unify.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__NumTypeInfoVars_36, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[1]))), &check_hlds__modecheck_unify__ExpectedInsts_37);
        }
#line 1240 "modecheck_unify.m"
        {
#line 1240 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
#line 1240 "modecheck_unify.m"
        }
#line 1240 "modecheck_unify.m"
        {
#line 1240 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73);
        }
#line 1243 "modecheck_unify.m"
        {
#line 1243 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_unify__UnifyTypeInfoVars_33, check_hlds__modecheck_unify__ExpectedInsts_37, (MR_Integer) 0, &check_hlds__modecheck_unify___InstVarSub_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_73_73, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74);
        }
#line 1247 "modecheck_unify.m"
        {
#line 1247 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_74_74, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75);
        }
#line 1237 "modecheck_unify.m"
      }
#line 1249 "modecheck_unify.m"
    {
#line 1249 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__ModuleInfo3_40);
    }
#line 1251 "modecheck_unify.m"
    {
#line 1251 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__Errors_41);
    }
#line 1252 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Errors_41)) == (MR_mktag((MR_Integer) 1)));
#line 1252 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1252 "modecheck_unify.m"
      {
#line 1252 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_41, (MR_Integer) 0)));
#line 1252 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_41, (MR_Integer) 1)));
#line 1255 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1252 "modecheck_unify.m"
      }
#line 1252 "modecheck_unify.m"
    else
#line 1267 "modecheck_unify.m"
      {
#line 1261 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_44_44;
#line 1261 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_45_45;

#line 1261 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
#line 1261 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1261 "modecheck_unify.m"
          {
#line 1261 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
#line 1261 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
#line 1262 "modecheck_unify.m"
            {
#line 1262 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__InitialInstX_23);
            }
#line 1262 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1261 "modecheck_unify.m"
          }
#line 1267 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1264 "modecheck_unify.m"
          {
#line 1264 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_46;
#line 1264 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_47;

#line 1264 "modecheck_unify.m"
            {
#line 1264 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_46 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_12);
            }
#line 1265 "modecheck_unify.m"
            {
#line 1265 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1265 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
#line 1265 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_47, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_23));
#line 1265 "modecheck_unify.m"
            }
#line 1266 "modecheck_unify.m"
            {
#line 1266 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_46, check_hlds__modecheck_unify__ModeError_47, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1266 "modecheck_unify.m"
              return;
            }
#line 1264 "modecheck_unify.m"
          }
#line 1267 "modecheck_unify.m"
        else
#line 1274 "modecheck_unify.m"
          {
#line 1268 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_48_48;
#line 1268 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_49_49;

#line 1268 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
#line 1268 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1268 "modecheck_unify.m"
              {
#line 1268 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
#line 1268 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
#line 1269 "modecheck_unify.m"
                {
#line 1269 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__InitialInstY_25);
                }
#line 1269 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1268 "modecheck_unify.m"
              }
#line 1274 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1271 "modecheck_unify.m"
              {
#line 1271 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WaitingVars_81;
#line 1271 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModeError_82;

#line 1271 "modecheck_unify.m"
                {
#line 1271 "modecheck_unify.m"
                  check_hlds__modecheck_unify__WaitingVars_81 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__Y_13);
                }
#line 1272 "modecheck_unify.m"
                {
#line 1272 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ModeError_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1272 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
#line 1272 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_82, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_25));
#line 1272 "modecheck_unify.m"
                }
#line 1273 "modecheck_unify.m"
                {
#line 1273 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_81, check_hlds__modecheck_unify__ModeError_82, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1273 "modecheck_unify.m"
                  return;
                }
#line 1271 "modecheck_unify.m"
              }
#line 1274 "modecheck_unify.m"
            else
#line 1298 "modecheck_unify.m"
              {
#line 1298 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__PredOrFunc_51;
#line 1276 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_50_50;
#line 1276 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_53_53;

#line 1276 "modecheck_unify.m"
                {
#line 1276 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__V_50_50, &check_hlds__modecheck_unify__PredOrFunc_51, &check_hlds__modecheck_unify__V_53_53);
                }
#line 1298 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1283 "modecheck_unify.m"
                  {
#line 1283 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredId_54;
#line 1283 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredInfo_55;
#line 1283 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstMap0_56;

#line 1283 "modecheck_unify.m"
                    {
#line 1283 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__PredId_54);
                    }
#line 1284 "modecheck_unify.m"
                    {
#line 1284 "modecheck_unify.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo3_40, check_hlds__modecheck_unify__PredId_54, &check_hlds__modecheck_unify__PredInfo_55);
                    }
#line 1285 "modecheck_unify.m"
                    {
#line 1285 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__InstMap0_56);
                    }
#line 1287 "modecheck_unify.m"
                    {
#line 1287 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__modecheck_unify__PredInfo_55);
                    }
#line 1288 "modecheck_unify.m"
                    if (!(check_hlds__modecheck_unify__succeeded))
#line 1288 "modecheck_unify.m"
                      {
#line 1288 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_unify__InstMap0_56);
                      }
#line 1292 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1292 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1292 "modecheck_unify.m"
                    else
#line 1293 "modecheck_unify.m"
                      {
#line 1293 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_78_78;
#line 1293 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__WaitingVars_83;
#line 1293 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__ModeError_84;

#line 1293 "modecheck_unify.m"
                        {
#line 1293 "modecheck_unify.m"
                          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_83);
                        }
#line 1295 "modecheck_unify.m"
                        {
#line 1295 "modecheck_unify.m"
                          check_hlds__modecheck_unify__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_78_78, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
#line 1295 "modecheck_unify.m"
                        }
#line 1295 "modecheck_unify.m"
                        {
#line 1295 "modecheck_unify.m"
                          check_hlds__modecheck_unify__ModeError_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_78_78));
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_14));
#line 1295 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_84, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_51));
#line 1295 "modecheck_unify.m"
                        }
#line 1296 "modecheck_unify.m"
                        {
#line 1296 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_83, check_hlds__modecheck_unify__ModeError_84, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1296 "modecheck_unify.m"
                          return;
                        }
#line 1293 "modecheck_unify.m"
                      }
#line 1283 "modecheck_unify.m"
                  }
#line 1298 "modecheck_unify.m"
                else
#line 1309 "modecheck_unify.m"
                  {
#line 1309 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__TypeCtor_57;

#line 1301 "modecheck_unify.m"
                    {
#line 1301 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__TypeCtor_57);
                    }
#line 1309 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1303 "modecheck_unify.m"
                      {
#line 1303 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__Context_58;
#line 1303 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__InstVarSet_59;
#line 1303 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__UnifyProcId_60;
#line 1303 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__ModuleInfo_61;

#line 1303 "modecheck_unify.m"
                        {
#line 1303 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__Context_58);
                        }
#line 1304 "modecheck_unify.m"
                        {
#line 1304 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_unify__InstVarSet_59);
                        }
#line 1305 "modecheck_unify.m"
                        {
#line 1305 "modecheck_unify.m"
                          check_hlds__modecheck_unify__UnifyProcId_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_60, 0) = ((MR_Box) (check_hlds__modecheck_unify__TypeCtor_57));
#line 1305 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_60, 1) = ((MR_Box) (check_hlds__modecheck_unify__UniMode_27));
#line 1305 "modecheck_unify.m"
                        }
#line 1306 "modecheck_unify.m"
                        {
#line 1306 "modecheck_unify.m"
                          check_hlds__unify_proc__request_unify_6_p_0(check_hlds__modecheck_unify__UnifyProcId_60, check_hlds__modecheck_unify__InstVarSet_59, check_hlds__modecheck_unify__Det_17, check_hlds__modecheck_unify__Context_58, check_hlds__modecheck_unify__ModuleInfo3_40, &check_hlds__modecheck_unify__ModuleInfo_61);
                        }
#line 1308 "modecheck_unify.m"
                        {
#line 1308 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_61, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63);
#line 1308 "modecheck_unify.m"
                          return;
                        }
#line 1303 "modecheck_unify.m"
                      }
#line 1309 "modecheck_unify.m"
                    else
#line 1309 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_63 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;
#line 1309 "modecheck_unify.m"
                  }
#line 1298 "modecheck_unify.m"
              }
#line 1274 "modecheck_unify.m"
          }
#line 1267 "modecheck_unify.m"
      }
#line 1217 "modecheck_unify.m"
  }
#line 1211 "modecheck_unify.m"
}

#line 1061 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfX_15,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModeOfY_16,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveX_17,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LiveY_18,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_19,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_20,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Det_21,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_25,
#line 1061 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unify_26,
#line 1061 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50,
#line 1061 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51)
#line 1061 "modecheck_unify.m"
{
#line 1068 "modecheck_unify.m"
  {
#line 1068 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1068 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
#line 1068 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification_29;
#line 1068 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1143 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__AssignTarget_34;
#line 1143 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__AssignSource_35;
#line 1138 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_59_59;
#line 1138 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_74_74;

#line 1069 "modecheck_unify.m"
    {
#line 1069 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50, &check_hlds__modecheck_unify__ModuleInfo0_28);
    }
#line 1071 "modecheck_unify.m"
    {
#line 1071 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15);
    }
#line 1074 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1073 "modecheck_unify.m"
      {
#line 1073 "modecheck_unify.m"
        {
#line 1073 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1073 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1073 "modecheck_unify.m"
        }
#line 1073 "modecheck_unify.m"
        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1073 "modecheck_unify.m"
      }
#line 1074 "modecheck_unify.m"
    else
#line 1078 "modecheck_unify.m"
      {
#line 1075 "modecheck_unify.m"
        {
#line 1075 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16);
        }
#line 1078 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1077 "modecheck_unify.m"
          {
#line 1077 "modecheck_unify.m"
            {
#line 1077 "modecheck_unify.m"
              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1077 "modecheck_unify.m"
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1077 "modecheck_unify.m"
            }
#line 1077 "modecheck_unify.m"
            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1077 "modecheck_unify.m"
          }
#line 1078 "modecheck_unify.m"
        else
#line 1098 "modecheck_unify.m"
          {
#line 1079 "modecheck_unify.m"
            {
#line 1079 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15);
            }
#line 1079 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1080 "modecheck_unify.m"
              {
#line 1080 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__mode_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16);
              }
#line 1098 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1088 "modecheck_unify.m"
              {
#line 1088 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__LiveX_17 == (MR_Integer) 1))
#line 1087 "modecheck_unify.m"
                  {
#line 1087 "modecheck_unify.m"
                    check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1087 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1087 "modecheck_unify.m"
                  }
#line 1088 "modecheck_unify.m"
                else
#line 1093 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__LiveY_18 == (MR_Integer) 1))
#line 1092 "modecheck_unify.m"
                    {
#line 1092 "modecheck_unify.m"
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1092 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1092 "modecheck_unify.m"
                    }
#line 1093 "modecheck_unify.m"
                  else
#line 1094 "modecheck_unify.m"
                    {
#line 1095 "modecheck_unify.m"
                      {
#line 1095 "modecheck_unify.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_var\'/14", (MR_String) "free-free unify!");
#line 1095 "modecheck_unify.m"
                        return;
                      }
#line 1094 "modecheck_unify.m"
                    }
#line 1088 "modecheck_unify.m"
                check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1088 "modecheck_unify.m"
              }
#line 1098 "modecheck_unify.m"
            else
#line 1109 "modecheck_unify.m"
              {
#line 1100 "modecheck_unify.m"
                {
#line 1100 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_71_71;
#line 1100 "modecheck_unify.m"
                  MR_Word check_hlds__modecheck_unify__V_30_30;

#line 1100 "modecheck_unify.m"
                  {
#line 1100 "modecheck_unify.m"
                    check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__V_71_71, &check_hlds__modecheck_unify__V_30_30);
                  }
#line 1100 "modecheck_unify.m"
                  {
#line 1100 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__V_71_71);
                  }
#line 1100 "modecheck_unify.m"
                }
#line 1101 "modecheck_unify.m"
                if (!(check_hlds__modecheck_unify__succeeded))
#line 1101 "modecheck_unify.m"
                  {
#line 1101 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_72_72;
#line 1101 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_31_31;

#line 1101 "modecheck_unify.m"
                    {
#line 1101 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__V_72_72, &check_hlds__modecheck_unify__V_31_31);
                    }
#line 1101 "modecheck_unify.m"
                    {
#line 1101 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__V_72_72);
                    }
#line 1101 "modecheck_unify.m"
                  }
#line 1109 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 1108 "modecheck_unify.m"
                  {
#line 1108 "modecheck_unify.m"
                    {
#line 1108 "modecheck_unify.m"
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1108 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1108 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1108 "modecheck_unify.m"
                    }
#line 1108 "modecheck_unify.m"
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1108 "modecheck_unify.m"
                  }
#line 1109 "modecheck_unify.m"
                else
#line 1110 "modecheck_unify.m"
                  {
#line 1110 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Type_32;
#line 1113 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_33_33;

#line 1110 "modecheck_unify.m"
                    {
#line 1110 "modecheck_unify.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_24, check_hlds__modecheck_unify__X_19, &check_hlds__modecheck_unify__Type_32);
                    }
#line 1112 "modecheck_unify.m"
                    {
#line 1112 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_atomic_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32);
                    }
#line 1112 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1112 "modecheck_unify.m"
                      {
#line 1113 "modecheck_unify.m"
                        {
#line 1113 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32, &check_hlds__modecheck_unify__V_33_33);
                        }
#line 1113 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 1112 "modecheck_unify.m"
                      }
#line 1116 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 1115 "modecheck_unify.m"
                      {
#line 1115 "modecheck_unify.m"
                        {
#line 1115 "modecheck_unify.m"
                          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1115 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1115 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1115 "modecheck_unify.m"
                        }
#line 1115 "modecheck_unify.m"
                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1115 "modecheck_unify.m"
                      }
#line 1116 "modecheck_unify.m"
                    else
#line 1123 "modecheck_unify.m"
                      {
#line 1119 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_57_57;
#line 1119 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__V_73_73;

#line 1119 "modecheck_unify.m"
                        {
#line 1119 "modecheck_unify.m"
                          check_hlds__modecheck_unify__V_73_73 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                        }
#line 1119 "modecheck_unify.m"
                        {
#line 1119 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__V_73_73);
                        }
#line 1119 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1119 "modecheck_unify.m"
                          {
#line 1120 "modecheck_unify.m"
                            check_hlds__modecheck_unify__V_57_57 = (MR_Integer) 19;
#line 1120 "modecheck_unify.m"
                            {
#line 1120 "modecheck_unify.m"
                              check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__GoalInfo_23, check_hlds__modecheck_unify__V_57_57);
                            }
#line 1119 "modecheck_unify.m"
                          }
#line 1123 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 1122 "modecheck_unify.m"
                          {
#line 1122 "modecheck_unify.m"
                            {
#line 1122 "modecheck_unify.m"
                              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1122 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1122 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1122 "modecheck_unify.m"
                            }
#line 1122 "modecheck_unify.m"
                            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50;
#line 1122 "modecheck_unify.m"
                          }
#line 1123 "modecheck_unify.m"
                        else
#line 1124 "modecheck_unify.m"
                          {
#line 1124 "modecheck_unify.m"
                            check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(check_hlds__modecheck_unify__X_19, check_hlds__modecheck_unify__Y_20, check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__ModeOfX_15, check_hlds__modecheck_unify__ModeOfY_16, check_hlds__modecheck_unify__Det_21, check_hlds__modecheck_unify__UnifyContext_22, check_hlds__modecheck_unify__Unification0_25, &check_hlds__modecheck_unify__Unification_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_50, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58);
                          }
#line 1123 "modecheck_unify.m"
                      }
#line 1110 "modecheck_unify.m"
                  }
#line 1109 "modecheck_unify.m"
              }
#line 1098 "modecheck_unify.m"
          }
#line 1078 "modecheck_unify.m"
      }
#line 1138 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 2)));
#line 1138 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1138 "modecheck_unify.m"
      {
#line 1138 "modecheck_unify.m"
        check_hlds__modecheck_unify__AssignTarget_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)));
#line 1138 "modecheck_unify.m"
        check_hlds__modecheck_unify__AssignSource_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
#line 1139 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_59_59 = (MR_Integer) 1;
#line 1139 "modecheck_unify.m"
        {
#line 1139 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__AssignTarget_34, &check_hlds__modecheck_unify__V_74_74);
        }
#line 1139 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_59_59 == check_hlds__modecheck_unify__V_74_74);
#line 1138 "modecheck_unify.m"
      }
#line 1143 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1141 "modecheck_unify.m"
      {
#line 1141 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__NonLocals_84;
#line 1200 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_86;

#line 1141 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 1198 "modecheck_unify.m"
        {
#line 1198 "modecheck_unify.m"
          check_hlds__modecheck_unify__NonLocals_84 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
        }
#line 6153 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeCtorInfo_14_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1200 "modecheck_unify.m"
        {
#line 1200 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_86, check_hlds__modecheck_unify__NonLocals_84, check_hlds__modecheck_unify__AssignTarget_34);
        }
#line 1200 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1201 "modecheck_unify.m"
          {
#line 1201 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_86, check_hlds__modecheck_unify__NonLocals_84, check_hlds__modecheck_unify__AssignSource_35);
          }
#line 1204 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1204 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1204 "modecheck_unify.m"
        else
#line 1205 "modecheck_unify.m"
          {
#line 1205 "modecheck_unify.m"
            check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1205 "modecheck_unify.m"
            return;
          }
#line 1141 "modecheck_unify.m"
      }
#line 1143 "modecheck_unify.m"
    else
#line 1149 "modecheck_unify.m"
      {
#line 1149 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TestVar1_36;
#line 1149 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__TestVar2_37;

#line 1145 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Det_21 == (MR_Integer) 0);
#line 1144 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1144 "modecheck_unify.m"
          {
#line 1144 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1144 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1144 "modecheck_unify.m"
              {
#line 1144 "modecheck_unify.m"
                check_hlds__modecheck_unify__TestVar1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
#line 1144 "modecheck_unify.m"
                check_hlds__modecheck_unify__TestVar2_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 2)));
#line 1144 "modecheck_unify.m"
              }
#line 1144 "modecheck_unify.m"
          }
#line 1149 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 1147 "modecheck_unify.m"
          {
#line 1147 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__NonLocals_93;
#line 1200 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_95;

#line 1147 "modecheck_unify.m"
            *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 1198 "modecheck_unify.m"
            {
#line 1198 "modecheck_unify.m"
              check_hlds__modecheck_unify__NonLocals_93 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
            }
#line 6227 "check_hlds.modecheck_unify.c"
            check_hlds__modecheck_unify__TypeCtorInfo_14_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1200 "modecheck_unify.m"
            {
#line 1200 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_95, check_hlds__modecheck_unify__NonLocals_93, check_hlds__modecheck_unify__TestVar1_36);
            }
#line 1200 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1201 "modecheck_unify.m"
              {
#line 1201 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_95, check_hlds__modecheck_unify__NonLocals_93, check_hlds__modecheck_unify__TestVar2_37);
              }
#line 1204 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1204 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1204 "modecheck_unify.m"
            else
#line 1205 "modecheck_unify.m"
              {
#line 1205 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1205 "modecheck_unify.m"
                return;
              }
#line 1147 "modecheck_unify.m"
          }
#line 1149 "modecheck_unify.m"
        else
#line 1181 "modecheck_unify.m"
          {
#line 1150 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Det_21 == (MR_Integer) 7);
#line 1181 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 1158 "modecheck_unify.m"
              {
#line 1158 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModuleInfo_38;
#line 1158 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Globals_39;
#line 1158 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_40;

#line 1158 "modecheck_unify.m"
                *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 1159 "modecheck_unify.m"
                {
#line 1159 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_unify__ModuleInfo_38);
                }
#line 1160 "modecheck_unify.m"
                {
#line 1160 "modecheck_unify.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_38, &check_hlds__modecheck_unify__Globals_39);
                }
#line 1161 "modecheck_unify.m"
                {
#line 1161 "modecheck_unify.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_39, (MR_Integer) 18, &check_hlds__modecheck_unify__WarnCannotSucceed_40);
                }
#line 1178 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__WarnCannotSucceed_40 == (MR_Integer) 0))
#line 1179 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1178 "modecheck_unify.m"
                else
#line 1164 "modecheck_unify.m"
                  {
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstOfX_41;
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__InstOfY_43;
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredId_45;
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__PredInfo_46;
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__Origin_47;
#line 1164 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ReportWarning_48;
#line 1165 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 1166 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__V_44_44;

#line 1165 "modecheck_unify.m"
                    {
#line 1165 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfX_15, &check_hlds__modecheck_unify__InstOfX_41, &check_hlds__modecheck_unify__V_42_42);
                    }
#line 1166 "modecheck_unify.m"
                    {
#line 1166 "modecheck_unify.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__ModeOfY_16, &check_hlds__modecheck_unify__InstOfY_43, &check_hlds__modecheck_unify__V_44_44);
                    }
#line 1167 "modecheck_unify.m"
                    {
#line 1167 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, &check_hlds__modecheck_unify__PredId_45);
                    }
#line 1168 "modecheck_unify.m"
                    {
#line 1168 "modecheck_unify.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_38, check_hlds__modecheck_unify__PredId_45, &check_hlds__modecheck_unify__PredInfo_46);
                    }
#line 1169 "modecheck_unify.m"
                    {
#line 1169 "modecheck_unify.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_46, &check_hlds__modecheck_unify__Origin_47);
                    }
#line 1170 "modecheck_unify.m"
                    {
#line 1170 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ReportWarning_48 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_47);
                    }
#line 1175 "modecheck_unify.m"
                    if ((check_hlds__modecheck_unify__ReportWarning_48 == (MR_Integer) 0))
#line 1176 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1175 "modecheck_unify.m"
                    else
#line 1172 "modecheck_unify.m"
                      {
#line 1172 "modecheck_unify.m"
                        MR_Word check_hlds__modecheck_unify__Warning_49;

#line 1173 "modecheck_unify.m"
                        {
#line 1173 "modecheck_unify.m"
                          check_hlds__modecheck_unify__Warning_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1173 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1173 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_41));
#line 1173 "modecheck_unify.m"
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_43));
#line 1173 "modecheck_unify.m"
                        }
#line 1174 "modecheck_unify.m"
                        {
#line 1174 "modecheck_unify.m"
                          check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_49, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51);
#line 1174 "modecheck_unify.m"
                          return;
                        }
#line 1172 "modecheck_unify.m"
                      }
#line 1164 "modecheck_unify.m"
                  }
#line 1158 "modecheck_unify.m"
              }
#line 1181 "modecheck_unify.m"
            else
#line 1182 "modecheck_unify.m"
              {
#line 1182 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_69_69;
#line 1182 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_70_70;

#line 1182 "modecheck_unify.m"
                {
#line 1182 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_69_69, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
#line 1182 "modecheck_unify.m"
                }
#line 1182 "modecheck_unify.m"
                {
#line 1182 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_70_70, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_15));
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_70_70, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_16));
#line 1182 "modecheck_unify.m"
                }
#line 1182 "modecheck_unify.m"
                {
#line 1182 "modecheck_unify.m"
                  MR_Word base;
#line 1182 "modecheck_unify.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__Unify_26 = base;
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_69_69));
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_70_70));
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_29));
#line 1182 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_22));
#line 1182 "modecheck_unify.m"
                }
#line 1182 "modecheck_unify.m"
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_51 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_58_58;
#line 1182 "modecheck_unify.m"
              }
#line 1181 "modecheck_unify.m"
          }
#line 1149 "modecheck_unify.m"
      }
#line 1068 "modecheck_unify.m"
  }
#line 1061 "modecheck_unify.m"
}

#line 966 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
#line 966 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
#line 966 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6)
#line 966 "modecheck_unify.m"
{
#line 970 "modecheck_unify.m"
  {
#line 970 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 970 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "modecheck_unify.m"
      {
#line 970 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 970 "modecheck_unify.m"
          {
#line 970 "modecheck_unify.m"
            *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "modecheck_unify.m"
            *check_hlds__modecheck_unify__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5;
#line 970 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 970 "modecheck_unify.m"
          }
#line 970 "modecheck_unify.m"
      }
#line 970 "modecheck_unify.m"
    else
#line 972 "modecheck_unify.m"
      {
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Var0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UniMode0_12;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UniModes0_13;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo_17;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInstX_18;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitialInstY_19;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInstX_20;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__FinalInstY_21;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeX_22;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeY_23;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes0_24;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarType_25;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_32_32;
#line 972 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_33_33;
#line 980 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_34_34;
#line 980 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_35_35;
#line 980 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_40_40;
#line 980 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_41_41;

#line 971 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 971 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 971 "modecheck_unify.m"
          {
#line 971 "modecheck_unify.m"
            check_hlds__modecheck_unify__UniMode0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 971 "modecheck_unify.m"
            check_hlds__modecheck_unify__UniModes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
#line 973 "modecheck_unify.m"
            {
#line 973 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__ModuleInfo_17);
            }
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode0_12, (MR_Integer) 0)));
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UniMode0_12, (MR_Integer) 1)));
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__InitialInstX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_32_32, (MR_Integer) 0)));
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__InitialInstY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_32_32, (MR_Integer) 1)));
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__FinalInstX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_33_33, (MR_Integer) 0)));
#line 974 "modecheck_unify.m"
            check_hlds__modecheck_unify__FinalInstY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_33_33, (MR_Integer) 1)));
#line 975 "modecheck_unify.m"
            {
#line 975 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeX_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 975 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeX_22, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_18));
#line 975 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeX_22, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstX_20));
#line 975 "modecheck_unify.m"
            }
#line 976 "modecheck_unify.m"
            {
#line 976 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeY_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 976 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeY_23, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_19));
#line 976 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeY_23, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInstY_21));
#line 976 "modecheck_unify.m"
            }
#line 977 "modecheck_unify.m"
            {
#line 977 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_24);
            }
#line 978 "modecheck_unify.m"
            {
#line 978 "modecheck_unify.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_24, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_25);
            }
#line 980 "modecheck_unify.m"
            check_hlds__modecheck_unify__V_34_34 = (MR_Integer) 0;
#line 980 "modecheck_unify.m"
            {
#line 980 "modecheck_unify.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__ModeX_22, check_hlds__modecheck_unify__VarType_25, &check_hlds__modecheck_unify__V_40_40);
            }
#line 980 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_34_34 == check_hlds__modecheck_unify__V_40_40);
#line 980 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 980 "modecheck_unify.m"
              {
#line 981 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_35_35 = (MR_Integer) 0;
#line 981 "modecheck_unify.m"
                {
#line 981 "modecheck_unify.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__ModeY_23, check_hlds__modecheck_unify__VarType_25, &check_hlds__modecheck_unify__V_41_41);
                }
#line 981 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_35_35 == check_hlds__modecheck_unify__V_41_41);
#line 980 "modecheck_unify.m"
              }
#line 990 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 983 "modecheck_unify.m"
              {
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Var_26;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoals0_27;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Vars1_28;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoals1_29;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarSet0_48;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes0_49;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarSet_50;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarType_51;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__VarTypes_52;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ExtraGoal_53;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54;
#line 983 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_57_57;

#line 1001 "modecheck_unify.m"
                {
#line 1001 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarSet0_48);
                }
#line 1002 "modecheck_unify.m"
                {
#line 1002 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_49);
                }
#line 1003 "modecheck_unify.m"
                {
#line 1003 "modecheck_unify.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarSet0_48, &check_hlds__modecheck_unify__VarSet_50);
                }
#line 1004 "modecheck_unify.m"
                {
#line 1004 "modecheck_unify.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_49, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_51);
                }
#line 1005 "modecheck_unify.m"
                {
#line 1005 "modecheck_unify.m"
                  parse_tree__prog_data__add_var_type_4_p_0(check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarType_51, check_hlds__modecheck_unify__VarTypes0_49, &check_hlds__modecheck_unify__VarTypes_52);
                }
#line 1006 "modecheck_unify.m"
                {
#line 1006 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_50, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54);
                }
#line 1007 "modecheck_unify.m"
                {
#line 1007 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_54, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36);
                }
#line 1009 "modecheck_unify.m"
                {
#line 1009 "modecheck_unify.m"
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__Var0_10, check_hlds__modecheck_unify__Var_26, check_hlds__modecheck_unify__VarType_51, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_unify__ExtraGoal_53);
                }
#line 1012 "modecheck_unify.m"
                {
#line 1012 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_57_57, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_53));
#line 1012 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "modecheck_unify.m"
                }
#line 1012 "modecheck_unify.m"
                {
#line 1012 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ExtraGoals0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_57_57));
#line 1012 "modecheck_unify.m"
                }
#line 986 "modecheck_unify.m"
                {
#line 986 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__UniModes0_13, &check_hlds__modecheck_unify__Vars1_28, &check_hlds__modecheck_unify__ExtraGoals1_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
#line 983 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 983 "modecheck_unify.m"
                  {
#line 988 "modecheck_unify.m"
                    {
#line 988 "modecheck_unify.m"
                      MR_Word base;
#line 988 "modecheck_unify.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 988 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_26));
#line 988 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_28));
#line 988 "modecheck_unify.m"
                    }
#line 989 "modecheck_unify.m"
                    {
#line 989 "modecheck_unify.m"
                      check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals0_27, check_hlds__modecheck_unify__ExtraGoals1_29, check_hlds__modecheck_unify__HeadVar__4_4);
                    }
#line 989 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 983 "modecheck_unify.m"
                  }
#line 983 "modecheck_unify.m"
              }
#line 990 "modecheck_unify.m"
            else
#line 992 "modecheck_unify.m"
              {
#line 992 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Vars1_39;

#line 991 "modecheck_unify.m"
                {
#line 991 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__UniModes0_13, &check_hlds__modecheck_unify__Vars1_39, check_hlds__modecheck_unify__HeadVar__4_4, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
#line 992 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 992 "modecheck_unify.m"
                  {
#line 993 "modecheck_unify.m"
                    {
#line 993 "modecheck_unify.m"
                      MR_Word base;
#line 993 "modecheck_unify.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
#line 993 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_10));
#line 993 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_39));
#line 993 "modecheck_unify.m"
                    }
#line 993 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 992 "modecheck_unify.m"
                  }
#line 992 "modecheck_unify.m"
              }
#line 971 "modecheck_unify.m"
          }
#line 972 "modecheck_unify.m"
      }
#line 970 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 970 "modecheck_unify.m"
  }
#line 966 "modecheck_unify.m"
}

#line 940 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_8,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_9,
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
#line 940 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 940 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22)
#line 940 "modecheck_unify.m"
{
#line 960 "modecheck_unify.m"
  {
#line 960 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_8)) == (MR_mktag((MR_Integer) 1)));
#line 960 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__X_14;
#line 960 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConsId_15;
#line 960 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgModes0_16;
#line 960 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det_17;
#line 960 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__CanCGC_18;
#line 947 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_29_29;
#line 947 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_28_28;

#line 947 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 947 "modecheck_unify.m"
      {
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__X_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 0)));
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 1)));
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 2)));
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__ArgModes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 3)));
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 4)));
#line 947 "modecheck_unify.m"
        check_hlds__modecheck_unify__CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 5)));
#line 6837 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeInfo_29_29 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1];
#line 947 "modecheck_unify.m"
        {
#line 947 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_29_29, ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_10)), ((MR_Box) (check_hlds__modecheck_unify__V_28_28)));
        }
#line 947 "modecheck_unify.m"
      }
#line 960 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 957 "modecheck_unify.m"
      {
#line 957 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgVars1_19;
#line 957 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ExtraGoals1_20;
#line 957 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;

#line 950 "modecheck_unify.m"
        {
#line 950 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__ArgVars0_10, check_hlds__modecheck_unify__ArgModes0_16, &check_hlds__modecheck_unify__ArgVars1_19, &check_hlds__modecheck_unify__ExtraGoals1_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23);
        }
#line 957 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 953 "modecheck_unify.m"
          {
#line 953 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;
#line 953 "modecheck_unify.m"
            *check_hlds__modecheck_unify__ExtraGoals_12 = check_hlds__modecheck_unify__ExtraGoals1_20;
#line 954 "modecheck_unify.m"
            *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars1_19;
#line 955 "modecheck_unify.m"
            {
#line 955 "modecheck_unify.m"
              MR_Word base;
#line 955 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 955 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Unification_9 = base;
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_15));
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (*check_hlds__modecheck_unify__ArgVars_11));
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes0_16));
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__Det_17));
#line 955 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (check_hlds__modecheck_unify__CanCGC_18));
#line 955 "modecheck_unify.m"
            }
#line 953 "modecheck_unify.m"
          }
#line 957 "modecheck_unify.m"
        else
#line 958 "modecheck_unify.m"
          {
#line 958 "modecheck_unify.m"
            {
#line 958 "modecheck_unify.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_2 failed");
#line 958 "modecheck_unify.m"
              return;
            }
#line 958 "modecheck_unify.m"
          }
#line 957 "modecheck_unify.m"
      }
#line 960 "modecheck_unify.m"
    else
#line 961 "modecheck_unify.m"
      {
#line 961 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unification_9 = check_hlds__modecheck_unify__Unification0_8;
#line 962 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars0_10;
#line 963 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ExtraGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 961 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21;
#line 961 "modecheck_unify.m"
      }
#line 960 "modecheck_unify.m"
  }
#line 940 "modecheck_unify.m"
}

#line 899 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_6,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_8,
#line 899 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 899 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
#line 899 "modecheck_unify.m"
{
#line 902 "modecheck_unify.m"
  {
#line 902 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 902 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_10;
#line 902 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Globals_11;
#line 902 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_12;

#line 903 "modecheck_unify.m"
    {
#line 903 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__ModuleInfo_10);
    }
#line 904 "modecheck_unify.m"
    {
#line 904 "modecheck_unify.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_10, &check_hlds__modecheck_unify__Globals_11);
    }
#line 905 "modecheck_unify.m"
    {
#line 905 "modecheck_unify.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_11, (MR_Integer) 18, &check_hlds__modecheck_unify__WarnCannotSucceed_12);
    }
#line 929 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__WarnCannotSucceed_12 == (MR_Integer) 0))
#line 930 "modecheck_unify.m"
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
#line 929 "modecheck_unify.m"
    else
#line 908 "modecheck_unify.m"
      {
#line 908 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InDuplForSwitch_13;

#line 909 "modecheck_unify.m"
        {
#line 909 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__InDuplForSwitch_13);
        }
#line 914 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__InDuplForSwitch_13 == (MR_Integer) 0))
#line 911 "modecheck_unify.m"
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
#line 914 "modecheck_unify.m"
        else
#line 915 "modecheck_unify.m"
          {
#line 915 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__PredId_14;
#line 915 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__PredInfo_15;
#line 915 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__Origin_16;
#line 915 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ReportWarning_17;

#line 916 "modecheck_unify.m"
            {
#line 916 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__PredId_14);
            }
#line 917 "modecheck_unify.m"
            {
#line 917 "modecheck_unify.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_10, check_hlds__modecheck_unify__PredId_14, &check_hlds__modecheck_unify__PredInfo_15);
            }
#line 918 "modecheck_unify.m"
            {
#line 918 "modecheck_unify.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_15, &check_hlds__modecheck_unify__Origin_16);
            }
#line 919 "modecheck_unify.m"
            {
#line 919 "modecheck_unify.m"
              check_hlds__modecheck_unify__ReportWarning_17 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_16);
            }
#line 925 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__ReportWarning_17 == (MR_Integer) 0))
#line 926 "modecheck_unify.m"
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
#line 925 "modecheck_unify.m"
            else
#line 922 "modecheck_unify.m"
              {
#line 922 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Warning_18;

#line 923 "modecheck_unify.m"
                {
#line 923 "modecheck_unify.m"
                  check_hlds__modecheck_unify__Warning_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 923 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_6));
#line 923 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_7));
#line 923 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_8));
#line 923 "modecheck_unify.m"
                }
#line 924 "modecheck_unify.m"
                {
#line 924 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
#line 924 "modecheck_unify.m"
                  return;
                }
#line 922 "modecheck_unify.m"
              }
#line 915 "modecheck_unify.m"
          }
#line 908 "modecheck_unify.m"
      }
#line 902 "modecheck_unify.m"
  }
#line 899 "modecheck_unify.m"
}

#line 875 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_10,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstConsId_11,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_12,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_13,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstArgs_14,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__WaitingVarsList_15,
#line 875 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_16,
#line 875 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22,
#line 875 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23)
#line 875 "modecheck_unify.m"
{
#line 881 "modecheck_unify.m"
  {
#line 881 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__WaitingVars_18;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModeError_19;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Inst_20;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NoArgInsts_21;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24;
#line 881 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26;
#line 881 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__V_27_27;
#line 1675 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40;

#line 882 "modecheck_unify.m"
    {
#line 882 "modecheck_unify.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__WaitingVarsList_15, &check_hlds__modecheck_unify__WaitingVars_18);
    }
#line 883 "modecheck_unify.m"
    {
#line 883 "modecheck_unify.m"
      check_hlds__modecheck_unify__ModeError_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_10));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_11));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_12));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_13));
#line 883 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 5) = ((MR_Box) (check_hlds__modecheck_unify__InstArgs_14));
#line 883 "modecheck_unify.m"
    }
#line 885 "modecheck_unify.m"
    {
#line 885 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_18, check_hlds__modecheck_unify__ModeError_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24);
    }
#line 889 "modecheck_unify.m"
    check_hlds__modecheck_unify__Inst_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 890 "modecheck_unify.m"
    {
#line 890 "modecheck_unify.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_10, check_hlds__modecheck_unify__Inst_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26);
    }
#line 891 "modecheck_unify.m"
    {
#line 891 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_27_27 = mercury__list__length_1_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__ArgVars0_12);
    }
#line 891 "modecheck_unify.m"
    {
#line 891 "modecheck_unify.m"
      check_hlds__modecheck_unify__NoArgInsts_21 = mercury__list__duplicate_2_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], check_hlds__modecheck_unify__V_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 1673 "modecheck_unify.m"
    {
#line 1673 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(check_hlds__modecheck_unify__Inst_20, check_hlds__modecheck_unify__ArgVars0_12, check_hlds__modecheck_unify__NoArgInsts_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40);
    }
#line 1675 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1675 "modecheck_unify.m"
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40;
#line 1675 "modecheck_unify.m"
    else
#line 1676 "modecheck_unify.m"
      {
#line 1676 "modecheck_unify.m"
        {
#line 1676 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
#line 1676 "modecheck_unify.m"
          return;
        }
#line 1676 "modecheck_unify.m"
      }
#line 894 "modecheck_unify.m"
    *check_hlds__modecheck_unify__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 881 "modecheck_unify.m"
  }
#line 875 "modecheck_unify.m"
}

#line 853 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
#line 853 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ModuleInfo_4,
#line 853 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__HeadVar__5_5)
#line 853 "modecheck_unify.m"
{
#line 857 "modecheck_unify.m"
  while (MR_TRUE)
#line 857 "modecheck_unify.m"
    {
#line 857 "modecheck_unify.m"
      /* tailcall optimized into a loop */
#line 857 "modecheck_unify.m"
      {
#line 857 "modecheck_unify.m"
        MR_bool check_hlds__modecheck_unify__succeeded;

#line 857 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "modecheck_unify.m"
          {
#line 857 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "modecheck_unify.m"
              *check_hlds__modecheck_unify__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "modecheck_unify.m"
            else
#line 858 "modecheck_unify.m"
              {
#line 859 "modecheck_unify.m"
                {
#line 859 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.all_arg_vars_are_non_free_or_solver_vars\'/5", (MR_String) "mismatched list lengths");
                }
#line 858 "modecheck_unify.m"
              }
#line 857 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 857 "modecheck_unify.m"
          }
#line 857 "modecheck_unify.m"
        else
#line 857 "modecheck_unify.m"
          {
#line 857 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));

#line 857 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "modecheck_unify.m"
              {
#line 861 "modecheck_unify.m"
                {
#line 861 "modecheck_unify.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.all_arg_vars_are_non_free_or_solver_vars\'/5", (MR_String) "mismatched list lengths");
                }
#line 860 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 860 "modecheck_unify.m"
              }
#line 857 "modecheck_unify.m"
            else
#line 863 "modecheck_unify.m"
              {
#line 863 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
#line 863 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__Insts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));

#line 864 "modecheck_unify.m"
                {
#line 864 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo_4, check_hlds__modecheck_unify__Inst_26);
                }
#line 870 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 865 "modecheck_unify.m"
                  {
#line 865 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ArgType_31;
#line 865 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ArgVarsToInitTail_32;

#line 865 "modecheck_unify.m"
                    {
#line 865 "modecheck_unify.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__V_34_34, &check_hlds__modecheck_unify__ArgType_31);
                    }
#line 866 "modecheck_unify.m"
                    {
#line 866 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__modecheck_unify__ModuleInfo_4, check_hlds__modecheck_unify__ArgType_31);
                    }
#line 865 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 865 "modecheck_unify.m"
                      {
#line 867 "modecheck_unify.m"
                        {
#line 867 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(check_hlds__modecheck_unify__V_33_33, check_hlds__modecheck_unify__Insts_27, check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__ModuleInfo_4, &check_hlds__modecheck_unify__ArgVarsToInitTail_32);
                        }
#line 865 "modecheck_unify.m"
                        if (check_hlds__modecheck_unify__succeeded)
#line 865 "modecheck_unify.m"
                          {
#line 869 "modecheck_unify.m"
                            {
#line 869 "modecheck_unify.m"
                              MR_Word base;
#line 869 "modecheck_unify.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "modecheck_unify.m"
                              *check_hlds__modecheck_unify__HeadVar__5_5 = base;
#line 869 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_34_34));
#line 869 "modecheck_unify.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVarsToInitTail_32));
#line 869 "modecheck_unify.m"
                            }
#line 869 "modecheck_unify.m"
                            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 865 "modecheck_unify.m"
                          }
#line 865 "modecheck_unify.m"
                      }
#line 865 "modecheck_unify.m"
                  }
#line 870 "modecheck_unify.m"
                else
#line 871 "modecheck_unify.m"
                  {
#line 871 "modecheck_unify.m"
                    /* direct tailcall eliminated */
#line 871 "modecheck_unify.m"
                    {
#line 871 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__V_33_33;
#line 871 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Insts_27;

#line 871 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
#line 871 "modecheck_unify.m"
                      check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
#line 871 "modecheck_unify.m"
                    }
#line 871 "modecheck_unify.m"
                    continue;
#line 871 "modecheck_unify.m"
                  }
#line 863 "modecheck_unify.m"
              }
#line 857 "modecheck_unify.m"
          }
#line 857 "modecheck_unify.m"
        return check_hlds__modecheck_unify__succeeded;
#line 857 "modecheck_unify.m"
      }
#line 857 "modecheck_unify.m"
      break;
#line 857 "modecheck_unify.m"
    }
#line 853 "modecheck_unify.m"
}

#line 819 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__add_solver_init_calls_if_needed_5_p_0(
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__InstOfX_6,
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_7,
#line 819 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_8,
#line 819 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
#line 819 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22)
#line 819 "modecheck_unify.m"
{
#line 822 "modecheck_unify.m"
  {
#line 822 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 822 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__HowToCheckGoal_10;
#line 822 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_11;
#line 822 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes_12;
#line 822 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_13;
#line 849 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgVarsToInit_17;
#line 832 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstArgs0_16;
#line 832 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_14_14;
#line 832 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_15_15;

#line 823 "modecheck_unify.m"
    {
#line 823 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__HowToCheckGoal_10);
    }
#line 824 "modecheck_unify.m"
    {
#line 824 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__ModuleInfo0_11);
    }
#line 825 "modecheck_unify.m"
    {
#line 825 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__VarTypes_12);
    }
#line 826 "modecheck_unify.m"
    {
#line 826 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__InstMap0_13);
    }
#line 832 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__ArgVars0_7)) == (MR_mktag((MR_Integer) 1)));
#line 832 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 832 "modecheck_unify.m"
      {
#line 832 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgVars0_7, (MR_Integer) 0)));
#line 832 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgVars0_7, (MR_Integer) 1)));
#line 833 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HowToCheckGoal_10 == (MR_Integer) 0);
#line 832 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 832 "modecheck_unify.m"
          {
#line 834 "modecheck_unify.m"
            {
#line 834 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_11, check_hlds__modecheck_unify__InstOfX_6);
            }
#line 832 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 832 "modecheck_unify.m"
              {
#line 835 "modecheck_unify.m"
                {
#line 835 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21);
                }
#line 832 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 832 "modecheck_unify.m"
                  {
#line 836 "modecheck_unify.m"
                    {
#line 836 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21);
                    }
#line 832 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 832 "modecheck_unify.m"
                      {
#line 837 "modecheck_unify.m"
                        {
#line 837 "modecheck_unify.m"
                          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap0_13, check_hlds__modecheck_unify__ArgVars0_7, &check_hlds__modecheck_unify__InstArgs0_16);
                        }
#line 838 "modecheck_unify.m"
                        {
#line 838 "modecheck_unify.m"
                          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__all_arg_vars_are_non_free_or_solver_vars_5_p_0(check_hlds__modecheck_unify__ArgVars0_7, check_hlds__modecheck_unify__InstArgs0_16, check_hlds__modecheck_unify__VarTypes_12, check_hlds__modecheck_unify__ModuleInfo0_11, &check_hlds__modecheck_unify__ArgVarsToInit_17);
                        }
#line 832 "modecheck_unify.m"
                      }
#line 832 "modecheck_unify.m"
                  }
#line 832 "modecheck_unify.m"
              }
#line 832 "modecheck_unify.m"
          }
#line 832 "modecheck_unify.m"
      }
#line 849 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 841 "modecheck_unify.m"
      {
#line 841 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitGoals_18;

#line 841 "modecheck_unify.m"
        {
#line 841 "modecheck_unify.m"
          check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_unify__ArgVarsToInit_17, &check_hlds__modecheck_unify__InitGoals_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22);
        }
#line 845 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__InitGoals_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "modecheck_unify.m"
          *check_hlds__modecheck_unify__ExtraGoals_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "modecheck_unify.m"
        else
#line 846 "modecheck_unify.m"
          {
#line 847 "modecheck_unify.m"
            {
#line 847 "modecheck_unify.m"
              MR_Word base;
#line 847 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "modecheck_unify.m"
              *check_hlds__modecheck_unify__ExtraGoals_8 = base;
#line 847 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitGoals_18));
#line 847 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "modecheck_unify.m"
            }
#line 846 "modecheck_unify.m"
          }
#line 841 "modecheck_unify.m"
      }
#line 849 "modecheck_unify.m"
    else
#line 850 "modecheck_unify.m"
      {
#line 850 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ExtraGoals_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21;
#line 850 "modecheck_unify.m"
      }
#line 822 "modecheck_unify.m"
  }
#line 819 "modecheck_unify.m"
}

#line 796 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_9,
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_10,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__X_11,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__InstOfX_12,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__LiveX_13,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_14,
#line 796 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
#line 796 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
#line 796 "modecheck_unify.m"
{
#line 801 "modecheck_unify.m"
  {
#line 801 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 801 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_16;
#line 801 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX0_17;
#line 805 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_18;

#line 802 "modecheck_unify.m"
    {
#line 802 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__InstMap0_16);
    }
#line 803 "modecheck_unify.m"
    {
#line 803 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_16, check_hlds__modecheck_unify__X0_10, &check_hlds__modecheck_unify__InstOfX0_17);
    }
#line 805 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_9 == (MR_Integer) 1);
#line 805 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 805 "modecheck_unify.m"
      {
#line 806 "modecheck_unify.m"
        {
#line 806 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__ModuleInfo0_18);
        }
#line 807 "modecheck_unify.m"
        {
#line 807 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_18, check_hlds__modecheck_unify__InstOfX0_17);
        }
#line 807 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 805 "modecheck_unify.m"
      }
#line 812 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 809 "modecheck_unify.m"
      {
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet0_28;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes0_29;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet_30;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarType_31;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_32;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ExtraGoal_33;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34;
#line 809 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_37_37;

#line 1001 "modecheck_unify.m"
        {
#line 1001 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__VarSet0_28);
        }
#line 1002 "modecheck_unify.m"
        {
#line 1002 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__VarTypes0_29);
        }
#line 1003 "modecheck_unify.m"
        {
#line 1003 "modecheck_unify.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarSet0_28, &check_hlds__modecheck_unify__VarSet_30);
        }
#line 1004 "modecheck_unify.m"
        {
#line 1004 "modecheck_unify.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_29, check_hlds__modecheck_unify__X0_10, &check_hlds__modecheck_unify__VarType_31);
        }
#line 1005 "modecheck_unify.m"
        {
#line 1005 "modecheck_unify.m"
          parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarType_31, check_hlds__modecheck_unify__VarTypes0_29, &check_hlds__modecheck_unify__VarTypes_32);
        }
#line 1006 "modecheck_unify.m"
        {
#line 1006 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34);
        }
#line 1007 "modecheck_unify.m"
        {
#line 1007 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
        }
#line 1009 "modecheck_unify.m"
        {
#line 1009 "modecheck_unify.m"
          check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__X0_10, *check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarType_31, *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20, &check_hlds__modecheck_unify__ExtraGoal_33);
        }
#line 1012 "modecheck_unify.m"
        {
#line 1012 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_33));
#line 1012 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "modecheck_unify.m"
        }
#line 1012 "modecheck_unify.m"
        {
#line 1012 "modecheck_unify.m"
          MR_Word base;
#line 1012 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modecheck_unify.m"
          *check_hlds__modecheck_unify__ExtraGoals_14 = base;
#line 1012 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_37_37));
#line 1012 "modecheck_unify.m"
        }
#line 810 "modecheck_unify.m"
        *check_hlds__modecheck_unify__InstOfX_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 811 "modecheck_unify.m"
        *check_hlds__modecheck_unify__LiveX_13 = (MR_Integer) 0;
#line 809 "modecheck_unify.m"
      }
#line 812 "modecheck_unify.m"
    else
#line 813 "modecheck_unify.m"
      {
#line 813 "modecheck_unify.m"
        *check_hlds__modecheck_unify__X_11 = check_hlds__modecheck_unify__X0_10;
#line 814 "modecheck_unify.m"
        *check_hlds__modecheck_unify__InstOfX_12 = check_hlds__modecheck_unify__InstOfX0_17;
#line 815 "modecheck_unify.m"
        {
#line 815 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, *check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__LiveX_13);
        }
#line 816 "modecheck_unify.m"
        *check_hlds__modecheck_unify__ExtraGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 813 "modecheck_unify.m"
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
#line 813 "modecheck_unify.m"
      }
#line 801 "modecheck_unify.m"
  }
#line 796 "modecheck_unify.m"
}

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 708 "modecheck_unify.m"
{
#line 708 "modecheck_unify.m"
  {
#line 708 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 708 "modecheck_unify.m"
    MR_builtin_longjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0, 1);
#line 708 "modecheck_unify.m"
  }
#line 708 "modecheck_unify.m"
}

#line 709 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
#line 709 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 709 "modecheck_unify.m"
{
#line 709 "modecheck_unify.m"
  {
#line 709 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 709 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_38 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_38);
#line 709 "modecheck_unify.m"
    {
#line 709 "modecheck_unify.m"
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(check_hlds__modecheck_unify__env_ptr);
#line 709 "modecheck_unify.m"
      return;
    }
#line 709 "modecheck_unify.m"
  }
#line 709 "modecheck_unify.m"
}

#line 711 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
#line 711 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 711 "modecheck_unify.m"
{
#line 711 "modecheck_unify.m"
  {
#line 711 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 711 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_39 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_39);
#line 711 "modecheck_unify.m"
    {
#line 711 "modecheck_unify.m"
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(check_hlds__modecheck_unify__env_ptr);
#line 711 "modecheck_unify.m"
      return;
    }
#line 711 "modecheck_unify.m"
  }
#line 711 "modecheck_unify.m"
}

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 708 "modecheck_unify.m"
{
#line 708 "modecheck_unify.m"
  {
#line 708 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 712 "modecheck_unify.m"
    {
#line 712 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_31, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_39, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_40);
    }
#line 713 "modecheck_unify.m"
    {
#line 713 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_40);
    }
#line 713 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 713 "modecheck_unify.m"
      {
#line 713 "modecheck_unify.m"
        check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(check_hlds__modecheck_unify__env_ptr);
#line 713 "modecheck_unify.m"
        return;
      }
#line 708 "modecheck_unify.m"
  }
#line 708 "modecheck_unify.m"
}

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 708 "modecheck_unify.m"
{
#line 708 "modecheck_unify.m"
  {
#line 708 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 710 "modecheck_unify.m"
    {
#line 710 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_38);
    }
#line 708 "modecheck_unify.m"
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 708 "modecheck_unify.m"
      {
#line 7837 "check_hlds.modecheck_unify.c"
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_109_109 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 711 "modecheck_unify.m"
        {
#line 711 "modecheck_unify.m"
          mercury__list__member_2_p_1((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_109_109, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_39, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5, check_hlds__modecheck_unify__env_ptr);
        }
#line 708 "modecheck_unify.m"
      }
#line 708 "modecheck_unify.m"
  }
#line 708 "modecheck_unify.m"
}

#line 708 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
#line 708 "modecheck_unify.m"
  void * check_hlds__modecheck_unify__env_ptr_arg)
#line 708 "modecheck_unify.m"
{
#line 708 "modecheck_unify.m"
  {
#line 708 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

#line 708 "modecheck_unify.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0) == 0)
#line 708 "modecheck_unify.m"
      {
#line 708 "modecheck_unify.m"
        {
#line 708 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeCtorInfo_108_108;

#line 708 "modecheck_unify.m"
          {
#line 708 "modecheck_unify.m"
            (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
          }
#line 708 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 708 "modecheck_unify.m"
            {
#line 7881 "check_hlds.modecheck_unify.c"
              check_hlds__modecheck_unify__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 709 "modecheck_unify.m"
              {
#line 709 "modecheck_unify.m"
                mercury__list__member_2_p_1(check_hlds__modecheck_unify__TypeCtorInfo_108_108, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_38, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3, check_hlds__modecheck_unify__env_ptr);
              }
#line 708 "modecheck_unify.m"
            }
#line 708 "modecheck_unify.m"
        }
#line 708 "modecheck_unify.m"
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
#line 708 "modecheck_unify.m"
      }
#line 708 "modecheck_unify.m"
    else
#line 708 "modecheck_unify.m"
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
#line 708 "modecheck_unify.m"
  }
#line 708 "modecheck_unify.m"
}

#line 653 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X0_12,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_17,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
#line 653 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_20,
#line 653 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_69,
#line 653 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70)
#line 653 "modecheck_unify.m"
{
#line 653 "modecheck_unify.m"
  {
#line 653 "modecheck_unify.m"
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s check_hlds__modecheck_unify__env;

#line 653 "modecheck_unify.m"
    (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16 = check_hlds__modecheck_unify__ArgVars0_16;
#line 659 "modecheck_unify.m"
    {
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstMap0_22;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__X_23;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__LiveX_25;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ExtraGoals0_26;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ExtraGoals1_27;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstMap1_28;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__HowToCheckGoal_29;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__LiveArgs_33;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__ConsId_34;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstConsId_35;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__InstOfY_36;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_75_75;
#line 659 "modecheck_unify.m"
      MR_Word check_hlds__modecheck_unify__V_76_76;

#line 660 "modecheck_unify.m"
      {
#line 660 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_69, &check_hlds__modecheck_unify__InstMap0_22);
      }
#line 661 "modecheck_unify.m"
      {
#line 661 "modecheck_unify.m"
        check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(check_hlds__modecheck_unify__IsExistConstruction_15, check_hlds__modecheck_unify__X0_12, &check_hlds__modecheck_unify__X_23, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &check_hlds__modecheck_unify__LiveX_25, &check_hlds__modecheck_unify__ExtraGoals0_26, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71);
      }
#line 663 "modecheck_unify.m"
      {
#line 663 "modecheck_unify.m"
        check_hlds__modecheck_unify__add_solver_init_calls_if_needed_5_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__ExtraGoals1_27, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72);
      }
#line 666 "modecheck_unify.m"
      {
#line 666 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__InstMap1_28);
      }
#line 667 "modecheck_unify.m"
      {
#line 667 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__HowToCheckGoal_29);
      }
#line 668 "modecheck_unify.m"
      {
#line 668 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30);
      }
#line 669 "modecheck_unify.m"
      {
#line 669 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_31);
      }
#line 670 "modecheck_unify.m"
      {
#line 670 "modecheck_unify.m"
        hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_28, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32);
      }
#line 671 "modecheck_unify.m"
      {
#line 671 "modecheck_unify.m"
        check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__LiveArgs_33);
      }
#line 672 "modecheck_unify.m"
      {
#line 672 "modecheck_unify.m"
        parse_tree__prog_type__qualify_cons_id_4_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__ConsId0_14, &check_hlds__modecheck_unify__ConsId_34, &check_hlds__modecheck_unify__InstConsId_35);
      }
#line 674 "modecheck_unify.m"
      {
#line 674 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "modecheck_unify.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_76_76, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_35));
#line 674 "modecheck_unify.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_76_76, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32));
#line 674 "modecheck_unify.m"
      }
#line 674 "modecheck_unify.m"
      {
#line 674 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "modecheck_unify.m"
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_75_75, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_76_76));
#line 674 "modecheck_unify.m"
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "modecheck_unify.m"
      }
#line 673 "modecheck_unify.m"
      {
#line 673 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 673 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 673 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_36, 1) = ((MR_Box) ((MR_Integer) 1));
#line 673 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "modecheck_unify.m"
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_36, 3) = ((MR_Box) (check_hlds__modecheck_unify__V_75_75));
#line 673 "modecheck_unify.m"
      }
#line 677 "modecheck_unify.m"
      {
#line 677 "modecheck_unify.m"
        (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_unify__X_23)), (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
      }
#line 700 "modecheck_unify.m"
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 695 "modecheck_unify.m"
        {
#line 679 "modecheck_unify.m"
          {
#line 679 "modecheck_unify.m"
            (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
          }
#line 695 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 691 "modecheck_unify.m"
            {
#line 691 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Warning_37;
#line 691 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78;

#line 691 "modecheck_unify.m"
              {
#line 691 "modecheck_unify.m"
                check_hlds__modecheck_unify__Warning_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "modecheck_unify.m"
                MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Warning_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
#line 691 "modecheck_unify.m"
                MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Warning_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_34));
#line 691 "modecheck_unify.m"
              }
#line 692 "modecheck_unify.m"
              {
#line 692 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_37, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78);
              }
#line 693 "modecheck_unify.m"
              {
#line 693 "modecheck_unify.m"
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);
              }
#line 694 "modecheck_unify.m"
              *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 691 "modecheck_unify.m"
            }
#line 695 "modecheck_unify.m"
          else
#line 697 "modecheck_unify.m"
            {
#line 697 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_83_83;

#line 698 "modecheck_unify.m"
              {
#line 698 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
#line 698 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "modecheck_unify.m"
              }
#line 697 "modecheck_unify.m"
              {
#line 697 "modecheck_unify.m"
                check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__InstConsId_35, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32, check_hlds__modecheck_unify__V_83_83, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);
#line 697 "modecheck_unify.m"
                return;
              }
#line 697 "modecheck_unify.m"
            }
#line 695 "modecheck_unify.m"
        }
#line 700 "modecheck_unify.m"
      else
#line 780 "modecheck_unify.m"
        {
#line 780 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Inst_41;
#line 780 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Det_42;
#line 780 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModuleInfo1_43;
#line 714 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_86_86;

#line 708 "modecheck_unify.m"
          {
#line 708 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(&check_hlds__modecheck_unify__env);
          }
#line 707 "modecheck_unify.m"
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
#line 714 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 714 "modecheck_unify.m"
            {
#line 716 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_86_86 = (MR_Integer) 0;
#line 715 "modecheck_unify.m"
              {
#line 715 "modecheck_unify.m"
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__modecheck_unify__LiveX_25, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__InstConsId_35, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32, check_hlds__modecheck_unify__LiveArgs_33, check_hlds__modecheck_unify__V_86_86, check_hlds__modecheck_unify__TypeOfX_13, &check_hlds__modecheck_unify__Inst_41, &check_hlds__modecheck_unify__Det_42, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_30, &check_hlds__modecheck_unify__ModuleInfo1_43);
              }
#line 714 "modecheck_unify.m"
            }
#line 780 "modecheck_unify.m"
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 719 "modecheck_unify.m"
            {
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfX_44;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfY_45;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Mode_46;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeArgs_47;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__InstOfX1_48;
#line 719 "modecheck_unify.m"
              MR_Integer check_hlds__modecheck_unify__Arity_49;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__InstOfXArgs_50;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ModeOfXArgs_51;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Unification1_52;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__Unification_53;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ArgVars_54;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__ExtraGoals2_55;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_87_87;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_90_90;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91;
#line 719 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_56_56;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_57_57;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_58_58;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_59_59;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_60_60;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_61_61;
#line 739 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_62_62;

#line 719 "modecheck_unify.m"
              {
#line 719 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_87_87);
              }
#line 720 "modecheck_unify.m"
              {
#line 720 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfX_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_44, 0) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24));
#line 720 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_44, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_41));
#line 720 "modecheck_unify.m"
              }
#line 721 "modecheck_unify.m"
              {
#line 721 "modecheck_unify.m"
                check_hlds__modecheck_unify__ModeOfY_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_45, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_36));
#line 721 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_45, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_41));
#line 721 "modecheck_unify.m"
              }
#line 722 "modecheck_unify.m"
              {
#line 722 "modecheck_unify.m"
                check_hlds__modecheck_unify__Mode_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_46, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_44));
#line 722 "modecheck_unify.m"
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Mode_46, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_45));
#line 722 "modecheck_unify.m"
              }
#line 723 "modecheck_unify.m"
              {
#line 723 "modecheck_unify.m"
                check_hlds__modecheck_unify__get_mode_of_args_3_p_0(check_hlds__modecheck_unify__Inst_41, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32, &check_hlds__modecheck_unify__ModeArgs_47);
              }
#line 724 "modecheck_unify.m"
              {
#line 724 "modecheck_unify.m"
                check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_43, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &check_hlds__modecheck_unify__InstOfX1_48);
              }
#line 726 "modecheck_unify.m"
              {
#line 726 "modecheck_unify.m"
                mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__Arity_49);
              }
#line 727 "modecheck_unify.m"
              {
#line 727 "modecheck_unify.m"
                parse_tree__prog_mode__get_arg_insts_det_4_p_0(check_hlds__modecheck_unify__InstOfX1_48, check_hlds__modecheck_unify__InstConsId_35, check_hlds__modecheck_unify__Arity_49, &check_hlds__modecheck_unify__InstOfXArgs_50);
              }
#line 728 "modecheck_unify.m"
              {
#line 728 "modecheck_unify.m"
                check_hlds__modecheck_unify__get_mode_of_args_3_p_0(check_hlds__modecheck_unify__Inst_41, check_hlds__modecheck_unify__InstOfXArgs_50, &check_hlds__modecheck_unify__ModeOfXArgs_51);
              }
#line 729 "modecheck_unify.m"
              {
#line 729 "modecheck_unify.m"
                check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(check_hlds__modecheck_unify__ModeOfX_44, check_hlds__modecheck_unify__ModeOfXArgs_51, check_hlds__modecheck_unify__ModeArgs_47, check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__ConsId_34, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_31, check_hlds__modecheck_unify__UnifyContext_18, check_hlds__modecheck_unify__Unification0_17, &check_hlds__modecheck_unify__Unification1_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_87_87, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88);
              }
#line 732 "modecheck_unify.m"
              {
#line 732 "modecheck_unify.m"
                check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(check_hlds__modecheck_unify__Unification1_52, &check_hlds__modecheck_unify__Unification_53, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__ArgVars_54, &check_hlds__modecheck_unify__ExtraGoals2_55, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89);
              }
#line 734 "modecheck_unify.m"
              {
#line 734 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_90_90, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_36));
#line 734 "modecheck_unify.m"
              }
#line 734 "modecheck_unify.m"
              {
#line 734 "modecheck_unify.m"
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__Inst_41, check_hlds__modecheck_unify__V_90_90, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91);
              }
#line 735 "modecheck_unify.m"
              {
#line 735 "modecheck_unify.m"
                check_hlds__modecheck_unify__bind_args_if_needed_6_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__Inst_41, check_hlds__modecheck_unify__ArgVars_54, check_hlds__modecheck_unify__InstOfXArgs_50, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_91_91, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92);
              }
#line 739 "modecheck_unify.m"
              (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_53)) == (MR_mktag((MR_Integer) 0)));
#line 739 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 739 "modecheck_unify.m"
                {
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 0)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 1)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 2)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 3)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 4)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 5)));
#line 739 "modecheck_unify.m"
                  check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_53, (MR_Integer) 6)));
#line 740 "modecheck_unify.m"
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__LiveX_25 == (MR_Integer) 1);
#line 739 "modecheck_unify.m"
                }
#line 745 "modecheck_unify.m"
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 744 "modecheck_unify.m"
                {
#line 744 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 744 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92;
#line 744 "modecheck_unify.m"
                }
#line 745 "modecheck_unify.m"
              else
#line 753 "modecheck_unify.m"
                {
#line 746 "modecheck_unify.m"
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__Det_42 == (MR_Integer) 7);
#line 753 "modecheck_unify.m"
                  if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 750 "modecheck_unify.m"
                    {
#line 750 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]);
#line 751 "modecheck_unify.m"
                      {
#line 751 "modecheck_unify.m"
                        check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(check_hlds__modecheck_unify__X_23, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__ConsId_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);
#line 751 "modecheck_unify.m"
                        return;
                      }
#line 750 "modecheck_unify.m"
                    }
#line 753 "modecheck_unify.m"
                  else
#line 754 "modecheck_unify.m"
                    {
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__Functor_63;
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__UnifyExpr_64;
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__ExtraGoals01_65;
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__ExtraGoals_66;
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__V_102_102;
#line 754 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__V_103_103;
#line 768 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__V_67_67;
#line 768 "modecheck_unify.m"
                      MR_Word check_hlds__modecheck_unify__V_68_68;

#line 754 "modecheck_unify.m"
                      {
#line 754 "modecheck_unify.m"
                        check_hlds__modecheck_unify__Functor_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 754 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_63, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_34));
#line 754 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_15));
#line 754 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_63, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_54));
#line 754 "modecheck_unify.m"
                      }
#line 755 "modecheck_unify.m"
                      {
#line 755 "modecheck_unify.m"
                        check_hlds__modecheck_unify__UnifyExpr_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 755 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_64, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
#line 755 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_64, 1) = ((MR_Box) (check_hlds__modecheck_unify__Functor_63));
#line 755 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_64, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_46));
#line 755 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_64, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_53));
#line 755 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_64, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
#line 755 "modecheck_unify.m"
                      }
#line 764 "modecheck_unify.m"
                      {
#line 764 "modecheck_unify.m"
                        check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals0_26, check_hlds__modecheck_unify__ExtraGoals1_27, &check_hlds__modecheck_unify__ExtraGoals01_65);
                      }
#line 765 "modecheck_unify.m"
                      {
#line 765 "modecheck_unify.m"
                        check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals01_65, check_hlds__modecheck_unify__ExtraGoals2_55, &check_hlds__modecheck_unify__ExtraGoals_66);
                      }
#line 767 "modecheck_unify.m"
                      (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__HowToCheckGoal_29 == (MR_Integer) 1);
#line 767 "modecheck_unify.m"
                      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 767 "modecheck_unify.m"
                        {
#line 768 "modecheck_unify.m"
                          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__ExtraGoals_66)) == (MR_mktag((MR_Integer) 1)));
#line 768 "modecheck_unify.m"
                          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 768 "modecheck_unify.m"
                            {
#line 768 "modecheck_unify.m"
                              check_hlds__modecheck_unify__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_66, (MR_Integer) 0)));
#line 768 "modecheck_unify.m"
                              check_hlds__modecheck_unify__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_66, (MR_Integer) 1)));
#line 769 "modecheck_unify.m"
                              {
#line 769 "modecheck_unify.m"
                                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap1_28);
                              }
#line 768 "modecheck_unify.m"
                            }
#line 767 "modecheck_unify.m"
                        }
#line 774 "modecheck_unify.m"
                      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
#line 771 "modecheck_unify.m"
                        {
#line 771 "modecheck_unify.m"
                          {
#line 771 "modecheck_unify.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
#line 771 "modecheck_unify.m"
                            return;
                          }
#line 771 "modecheck_unify.m"
                        }
#line 774 "modecheck_unify.m"
                      else
#line 775 "modecheck_unify.m"
                        {
#line 775 "modecheck_unify.m"
                        }
#line 778 "modecheck_unify.m"
                      {
#line 778 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_102_102, 0) = ((MR_Box) (check_hlds__modecheck_unify__X0_12));
#line 778 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_102_102, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 778 "modecheck_unify.m"
                      }
#line 778 "modecheck_unify.m"
                      {
#line 778 "modecheck_unify.m"
                        check_hlds__modecheck_unify__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_103_103, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
#line 778 "modecheck_unify.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_103_103, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_54));
#line 778 "modecheck_unify.m"
                      }
#line 777 "modecheck_unify.m"
                      {
#line 777 "modecheck_unify.m"
                        check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_unify__UnifyExpr_64, check_hlds__modecheck_unify__ExtraGoals_66, check_hlds__modecheck_unify__GoalInfo0_19, check_hlds__modecheck_unify__V_102_102, check_hlds__modecheck_unify__V_103_103, check_hlds__modecheck_unify__InstMap0_22, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);
#line 777 "modecheck_unify.m"
                        return;
                      }
#line 754 "modecheck_unify.m"
                    }
#line 753 "modecheck_unify.m"
                }
#line 719 "modecheck_unify.m"
            }
#line 780 "modecheck_unify.m"
          else
#line 783 "modecheck_unify.m"
            {
#line 783 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_105_105;

#line 784 "modecheck_unify.m"
              {
#line 784 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_105_105, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
#line 784 "modecheck_unify.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_105_105, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
#line 784 "modecheck_unify.m"
              }
#line 783 "modecheck_unify.m"
              {
#line 783 "modecheck_unify.m"
                check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__InstConsId_35, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArgs_32, check_hlds__modecheck_unify__V_105_105, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70);
#line 783 "modecheck_unify.m"
                return;
              }
#line 783 "modecheck_unify.m"
            }
#line 780 "modecheck_unify.m"
        }
#line 659 "modecheck_unify.m"
    }
#line 653 "modecheck_unify.m"
  }
#line 653 "modecheck_unify.m"
}

#line 597 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_8,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_9,
#line 597 "modecheck_unify.m"
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
#line 597 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
#line 597 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
#line 597 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31)
#line 597 "modecheck_unify.m"
{
#line 602 "modecheck_unify.m"
  {
#line 602 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_14;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_15;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConstStructDb_17;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ConstStruct_18;
#line 602 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_22;
#line 608 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_19_19;
#line 608 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_20_20;
#line 608 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_21_21;

#line 603 "modecheck_unify.m"
    {
#line 603 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__InstMap_14);
    }
#line 604 "modecheck_unify.m"
    {
#line 604 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap_14, check_hlds__modecheck_unify__X_8, &check_hlds__modecheck_unify__InstOfX_15);
    }
#line 605 "modecheck_unify.m"
    {
#line 605 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
#line 606 "modecheck_unify.m"
    {
#line 606 "modecheck_unify.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ConstStructDb_17);
    }
#line 607 "modecheck_unify.m"
    {
#line 607 "modecheck_unify.m"
      hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__modecheck_unify__ConstStructDb_17, check_hlds__modecheck_unify__ConstNum_10, &check_hlds__modecheck_unify__ConstStruct_18);
    }
#line 608 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 0)));
#line 608 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 1)));
#line 608 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 2)));
#line 608 "modecheck_unify.m"
    check_hlds__modecheck_unify__InstOfY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 3)));
#line 609 "modecheck_unify.m"
    {
#line 609 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, check_hlds__modecheck_unify__InstOfX_15);
    }
#line 619 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 610 "modecheck_unify.m"
      {
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_24;
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_25;
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_26;
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_27;
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_32_32;
#line 610 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_39_39;

#line 611 "modecheck_unify.m"
        {
#line 611 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 611 "modecheck_unify.m"
        }
#line 611 "modecheck_unify.m"
        {
#line 611 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__InstOfY_22, check_hlds__modecheck_unify__V_32_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
#line 612 "modecheck_unify.m"
        {
#line 612 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 5) = ((MR_Box) ((MR_Integer) 1));
#line 612 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "modecheck_unify.m"
        }
#line 614 "modecheck_unify.m"
        {
#line 614 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_25, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 614 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_25, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 614 "modecheck_unify.m"
        }
#line 615 "modecheck_unify.m"
        {
#line 615 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_26, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 615 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_26, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 615 "modecheck_unify.m"
        }
#line 616 "modecheck_unify.m"
        {
#line 616 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_27, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_25));
#line 616 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_26));
#line 616 "modecheck_unify.m"
        }
#line 617 "modecheck_unify.m"
        {
#line 617 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "modecheck_unify.m"
        }
#line 617 "modecheck_unify.m"
        {
#line 617 "modecheck_unify.m"
          MR_Word base;
#line 617 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 617 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_39_39));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_27));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_24));
#line 617 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
#line 617 "modecheck_unify.m"
        }
#line 610 "modecheck_unify.m"
      }
#line 619 "modecheck_unify.m"
    else
#line 633 "modecheck_unify.m"
      {
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_28;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_29;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_42_42;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_54_54;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_57;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_58;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_59;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_60;
#line 633 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_61;

#line 633 "modecheck_unify.m"
        {
#line 633 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 633 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "modecheck_unify.m"
        }
#line 633 "modecheck_unify.m"
        {
#line 633 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_42_42, &check_hlds__modecheck_unify__WaitingVars_28);
        }
#line 634 "modecheck_unify.m"
        {
#line 634 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 634 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "modecheck_unify.m"
        }
#line 635 "modecheck_unify.m"
        {
#line 635 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_28, check_hlds__modecheck_unify__ModeError_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46);
        }
#line 639 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 640 "modecheck_unify.m"
        {
#line 640 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__Inst_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
#line 642 "modecheck_unify.m"
        {
#line 642 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 5) = ((MR_Box) ((MR_Integer) 1));
#line 642 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "modecheck_unify.m"
        }
#line 644 "modecheck_unify.m"
        {
#line 644 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_59, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
#line 644 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_59, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
#line 644 "modecheck_unify.m"
        }
#line 645 "modecheck_unify.m"
        {
#line 645 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_60, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
#line 645 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_60, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
#line 645 "modecheck_unify.m"
        }
#line 646 "modecheck_unify.m"
        {
#line 646 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_61, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_59));
#line 646 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_61, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_60));
#line 646 "modecheck_unify.m"
        }
#line 647 "modecheck_unify.m"
        {
#line 647 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "modecheck_unify.m"
        }
#line 647 "modecheck_unify.m"
        {
#line 647 "modecheck_unify.m"
          MR_Word base;
#line 647 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 647 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_54_54));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_61));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_58));
#line 647 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
#line 647 "modecheck_unify.m"
        }
#line 633 "modecheck_unify.m"
      }
#line 602 "modecheck_unify.m"
  }
#line 597 "modecheck_unify.m"
}

#line 549 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_10,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification_11,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
#line 549 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Goal_14,
#line 549 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
#line 549 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41)
#line 549 "modecheck_unify.m"
{
#line 555 "modecheck_unify.m"
  {
#line 555 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 555 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 6)));
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 2)));
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 3)));
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 4)));
#line 556 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 5)));
#line 591 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredId_25;
#line 591 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ArgVars_26;
#line 558 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_71_71;
#line 558 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 558 "modecheck_unify.m"
    MR_Tuple check_hlds__modecheck_unify__V_43_43;
#line 558 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_61_61;

#line 558 "modecheck_unify.m"
    {
#line 558 "modecheck_unify.m"
      hlds__goal_util__predids_with_args_from_goal_2_p_0(check_hlds__modecheck_unify__Goal0_24, &check_hlds__modecheck_unify__V_42_42);
    }
#line 558 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 558 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 558 "modecheck_unify.m"
      {
#line 558 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, (MR_Integer) 0)));
#line 558 "modecheck_unify.m"
        check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, (MR_Integer) 1)));
#line 8955 "check_hlds.modecheck_unify.c"
        check_hlds__modecheck_unify__TypeInfo_71_71 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[8];
#line 558 "modecheck_unify.m"
        {
#line 558 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_71_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__modecheck_unify__V_61_61)));
        }
#line 558 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 558 "modecheck_unify.m"
          {
#line 558 "modecheck_unify.m"
            check_hlds__modecheck_unify__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, (MR_Integer) 0)));
#line 558 "modecheck_unify.m"
            check_hlds__modecheck_unify__ArgVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, (MR_Integer) 1)));
#line 558 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
#line 558 "modecheck_unify.m"
          }
#line 558 "modecheck_unify.m"
      }
#line 591 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 559 "modecheck_unify.m"
      {
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo_27;
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InstMap_28;
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_29;
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__PredInfo_30;
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__MatchResult_31;
#line 559 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__CalleeProcIds_78;

#line 559 "modecheck_unify.m"
        {
#line 559 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__ModuleInfo_27);
        }
#line 560 "modecheck_unify.m"
        {
#line 560 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__InstMap_28);
        }
#line 561 "modecheck_unify.m"
        {
#line 561 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__VarTypes_29);
        }
#line 562 "modecheck_unify.m"
        {
#line 562 "modecheck_unify.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__PredId_25, &check_hlds__modecheck_unify__PredInfo_30);
        }
#line 1549 "modecheck_unify.m"
        {
#line 1549 "modecheck_unify.m"
          check_hlds__modecheck_unify__CalleeProcIds_78 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modecheck_unify__PredInfo_30);
        }
#line 1550 "modecheck_unify.m"
        {
#line 1550 "modecheck_unify.m"
          check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__InstMap_28, check_hlds__modecheck_unify__VarTypes_29, check_hlds__modecheck_unify__ArgVars_26, check_hlds__modecheck_unify__PredInfo_30, check_hlds__modecheck_unify__CalleeProcIds_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_unify__MatchResult_31);
        }
#line 574 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__MatchResult_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "modecheck_unify.m"
          {
#line 568 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__WaitingVars_32;
#line 568 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__ModeError_33;

#line 569 "modecheck_unify.m"
            {
#line 569 "modecheck_unify.m"
              check_hlds__modecheck_unify__WaitingVars_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
            }
#line 570 "modecheck_unify.m"
            {
#line 570 "modecheck_unify.m"
              check_hlds__modecheck_unify__ModeError_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 570 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 570 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 570 "modecheck_unify.m"
            }
#line 571 "modecheck_unify.m"
            {
#line 571 "modecheck_unify.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_32, check_hlds__modecheck_unify__ModeError_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
            }
#line 573 "modecheck_unify.m"
            {
#line 573 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
            }
#line 568 "modecheck_unify.m"
          }
#line 574 "modecheck_unify.m"
        else
#line 574 "modecheck_unify.m"
          {
#line 574 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MatchResult_31, (MR_Integer) 0)));

#line 574 "modecheck_unify.m"
            if ((check_hlds__modecheck_unify__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "modecheck_unify.m"
              {
#line 568 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__WaitingVars_62;
#line 568 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__ModeError_63;

#line 569 "modecheck_unify.m"
                {
#line 569 "modecheck_unify.m"
                  check_hlds__modecheck_unify__WaitingVars_62 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                }
#line 570 "modecheck_unify.m"
                {
#line 570 "modecheck_unify.m"
                  check_hlds__modecheck_unify__ModeError_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 570 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 570 "modecheck_unify.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_63, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 570 "modecheck_unify.m"
                }
#line 571 "modecheck_unify.m"
                {
#line 571 "modecheck_unify.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_62, check_hlds__modecheck_unify__ModeError_63, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
                }
#line 573 "modecheck_unify.m"
                {
#line 573 "modecheck_unify.m"
                  *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
                }
#line 568 "modecheck_unify.m"
              }
#line 574 "modecheck_unify.m"
            else
#line 574 "modecheck_unify.m"
              {
#line 574 "modecheck_unify.m"
                MR_Word check_hlds__modecheck_unify__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_68_68, (MR_Integer) 1)));
#line 574 "modecheck_unify.m"
                MR_Integer check_hlds__modecheck_unify__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_68_68, (MR_Integer) 0)));

#line 574 "modecheck_unify.m"
                if ((check_hlds__modecheck_unify__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "modecheck_unify.m"
                  {
#line 575 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__RHS_35;
#line 577 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__GoalInfo_36;

#line 576 "modecheck_unify.m"
                    {
#line 576 "modecheck_unify.m"
                      check_hlds__polymorphism__fix_undetermined_mode_lambda_goal_4_p_0(check_hlds__modecheck_unify__V_70_70, check_hlds__modecheck_unify__RHS0_10, &check_hlds__modecheck_unify__RHS_35, check_hlds__modecheck_unify__ModuleInfo_27);
                    }
#line 577 "modecheck_unify.m"
                    {
#line 577 "modecheck_unify.m"
                      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, check_hlds__modecheck_unify__GoalInfo0_13, &check_hlds__modecheck_unify__GoalInfo_36);
                    }
#line 580 "modecheck_unify.m"
                    {
#line 580 "modecheck_unify.m"
                      check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__RHS_35, check_hlds__modecheck_unify__Unification_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
#line 580 "modecheck_unify.m"
                      return;
                    }
#line 575 "modecheck_unify.m"
                  }
#line 574 "modecheck_unify.m"
                else
#line 583 "modecheck_unify.m"
                  {
#line 583 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__WaitingVars_57;
#line 583 "modecheck_unify.m"
                    MR_Word check_hlds__modecheck_unify__ModeError_58;

#line 584 "modecheck_unify.m"
                    {
#line 584 "modecheck_unify.m"
                      check_hlds__modecheck_unify__WaitingVars_57 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                    }
#line 585 "modecheck_unify.m"
                    {
#line 585 "modecheck_unify.m"
                      check_hlds__modecheck_unify__ModeError_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 585 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 585 "modecheck_unify.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_58, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
#line 585 "modecheck_unify.m"
                    }
#line 587 "modecheck_unify.m"
                    {
#line 587 "modecheck_unify.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_57, check_hlds__modecheck_unify__ModeError_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
                    }
#line 589 "modecheck_unify.m"
                    {
#line 589 "modecheck_unify.m"
                      *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
                    }
#line 583 "modecheck_unify.m"
                  }
#line 574 "modecheck_unify.m"
              }
#line 574 "modecheck_unify.m"
          }
#line 559 "modecheck_unify.m"
      }
#line 591 "modecheck_unify.m"
    else
#line 592 "modecheck_unify.m"
      {
#line 592 "modecheck_unify.m"
        {
#line 592 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "expecting single call");
#line 592 "modecheck_unify.m"
          return;
        }
#line 592 "modecheck_unify.m"
      }
#line 555 "modecheck_unify.m"
  }
#line 549 "modecheck_unify.m"
}

#line 502 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_13,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__LambdaDet_17,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__RHS0_18,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__RHS_19,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_20,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Unification_21,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__Mode_22,
#line 502 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
#line 502 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40)
#line 502 "modecheck_unify.m"
{
#line 508 "modecheck_unify.m"
  {
#line 508 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_24;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_25;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_26;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_27;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LambdaPredInfo_28;
#line 508 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_42_42;
#line 531 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyInst_29;
#line 531 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_31;
#line 516 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___Det_30;

#line 509 "modecheck_unify.m"
    {
#line 509 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__ModuleInfo0_24);
    }
#line 510 "modecheck_unify.m"
    {
#line 510 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__InstMap0_25);
    }
#line 511 "modecheck_unify.m"
    {
#line 511 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__X_13, &check_hlds__modecheck_unify__InstOfX_26);
    }
#line 513 "modecheck_unify.m"
    {
#line 513 "modecheck_unify.m"
      check_hlds__modecheck_unify__LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_14));
#line 513 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 1) = ((MR_Box) (check_hlds__modecheck_unify__LambdaModes_16));
#line 513 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 3) = ((MR_Box) (check_hlds__modecheck_unify__LambdaDet_17));
#line 513 "modecheck_unify.m"
    }
#line 512 "modecheck_unify.m"
    check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__modecheck_unify__LambdaPredInfo_28);
#line 512 "modecheck_unify.m"
    {
#line 512 "modecheck_unify.m"
      check_hlds__modecheck_unify__InstOfY_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 512 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 512 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 1) = ((MR_Box) ((MR_Integer) 1));
#line 512 "modecheck_unify.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_42_42));
#line 512 "modecheck_unify.m"
    }
#line 516 "modecheck_unify.m"
    {
#line 516 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_unify__InstOfX_26, check_hlds__modecheck_unify__InstOfY_27, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifyInst_29, &check_hlds__modecheck_unify___Det_30, check_hlds__modecheck_unify__ModuleInfo0_24, &check_hlds__modecheck_unify__ModuleInfo1_31);
    }
#line 531 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 519 "modecheck_unify.m"
      {
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_33;
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_34;
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgInsts_35;
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ArgModes_36;
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46;
#line 519 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48;

#line 520 "modecheck_unify.m"
        {
#line 520 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_31, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46);
        }
#line 521 "modecheck_unify.m"
        {
#line 521 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_33, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 521 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
#line 521 "modecheck_unify.m"
        }
#line 522 "modecheck_unify.m"
        {
#line 522 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_34, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 522 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_34, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
#line 522 "modecheck_unify.m"
        }
#line 523 "modecheck_unify.m"
        {
#line 523 "modecheck_unify.m"
          MR_Word base;
#line 523 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Mode_22 = base;
#line 523 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_33));
#line 523 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_34));
#line 523 "modecheck_unify.m"
        }
#line 526 "modecheck_unify.m"
        {
#line 526 "modecheck_unify.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__ArgInsts_35);
        }
#line 527 "modecheck_unify.m"
        {
#line 527 "modecheck_unify.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modecheck_unify__ArgInsts_35, check_hlds__modecheck_unify__ArgInsts_35, &check_hlds__modecheck_unify__ArgModes_36);
        }
#line 528 "modecheck_unify.m"
        {
#line 528 "modecheck_unify.m"
          check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(check_hlds__modecheck_unify__ModeOfX_33, check_hlds__modecheck_unify__ArgModes_36, check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__ArgVars_15, check_hlds__modecheck_unify__PredOrFunc_14, check_hlds__modecheck_unify__RHS0_18, check_hlds__modecheck_unify__RHS_19, check_hlds__modecheck_unify__Unification0_20, check_hlds__modecheck_unify__Unification_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48);
        }
#line 530 "modecheck_unify.m"
        {
#line 530 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__UnifyInst_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
#line 530 "modecheck_unify.m"
          return;
        }
#line 519 "modecheck_unify.m"
      }
#line 531 "modecheck_unify.m"
    else
#line 532 "modecheck_unify.m"
      {
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_37;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_38;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_51_51;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_56;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_57;
#line 532 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_58;

#line 532 "modecheck_unify.m"
        {
#line 532 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
#line 532 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "modecheck_unify.m"
        }
#line 532 "modecheck_unify.m"
        {
#line 532 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_51_51, &check_hlds__modecheck_unify__WaitingVars_37);
        }
#line 533 "modecheck_unify.m"
        {
#line 533 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 533 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
#line 533 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 533 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_38, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 533 "modecheck_unify.m"
        }
#line 534 "modecheck_unify.m"
        {
#line 534 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_37, check_hlds__modecheck_unify__ModeError_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53);
        }
#line 538 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 539 "modecheck_unify.m"
        {
#line 539 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__Inst_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_53_53, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
        }
#line 540 "modecheck_unify.m"
        {
#line 540 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_57, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
#line 540 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_57, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_56));
#line 540 "modecheck_unify.m"
        }
#line 541 "modecheck_unify.m"
        {
#line 541 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
#line 541 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_56));
#line 541 "modecheck_unify.m"
        }
#line 542 "modecheck_unify.m"
        {
#line 542 "modecheck_unify.m"
          MR_Word base;
#line 542 "modecheck_unify.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "modecheck_unify.m"
          *check_hlds__modecheck_unify__Mode_22 = base;
#line 542 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_57));
#line 542 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_58));
#line 542 "modecheck_unify.m"
        }
#line 545 "modecheck_unify.m"
        *check_hlds__modecheck_unify__Unification_21 = check_hlds__modecheck_unify__Unification0_20;
#line 546 "modecheck_unify.m"
        *check_hlds__modecheck_unify__RHS_19 = check_hlds__modecheck_unify__RHS0_18;
#line 532 "modecheck_unify.m"
      }
#line 508 "modecheck_unify.m"
  }
#line 502 "modecheck_unify.m"
}

#line 302 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
#line 302 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg)
#line 302 "modecheck_unify.m"
{
#line 302 "modecheck_unify.m"
  {
#line 302 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 302 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 302 "modecheck_unify.m"
    {
#line 302 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__302__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
#line 302 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 302 "modecheck_unify.m"
  }
#line 302 "modecheck_unify.m"
}

#line 300 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
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

#line 251 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_11,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ConsId_12,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_15,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
#line 251 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
#line 251 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37,
#line 251 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38)
#line 251 "modecheck_unify.m"
{
#line 257 "modecheck_unify.m"
  {
#line 257 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 257 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes0_20;
#line 257 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeOfX_21;
#line 295 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Purity_22;
#line 295 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredArgTypes_25;
#line 295 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_26;
#line 277 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_23_23;

#line 258 "modecheck_unify.m"
    {
#line 258 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__VarTypes0_20);
    }
#line 259 "modecheck_unify.m"
    {
#line 259 "modecheck_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_20, check_hlds__modecheck_unify__X_11, &check_hlds__modecheck_unify__TypeOfX_21);
    }
#line 277 "modecheck_unify.m"
    {
#line 277 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_21, &check_hlds__modecheck_unify__Purity_22, &check_hlds__modecheck_unify__V_23_23, &check_hlds__modecheck_unify__PredArgTypes_25);
    }
#line 278 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 278 "modecheck_unify.m"
      {
#line 279 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 279 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 279 "modecheck_unify.m"
          check_hlds__modecheck_unify__ShroudedPredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 1)));
#line 278 "modecheck_unify.m"
      }
#line 295 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 282 "modecheck_unify.m"
      {
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet0_29;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Context_30;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__PredId_31;
#line 282 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__ProcId_32;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Functor0_33;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarSet_34;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__VarTypes_35;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_39_39;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40;
#line 282 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41;

#line 282 "modecheck_unify.m"
        {
#line 282 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__ModuleInfo0_28);
        }
#line 283 "modecheck_unify.m"
        {
#line 283 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__VarSet0_29);
        }
#line 284 "modecheck_unify.m"
        {
#line 284 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__Context_30);
        }
#line 285 "modecheck_unify.m"
        {
#line 285 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_39_39 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_26);
        }
#line 285 "modecheck_unify.m"
        check_hlds__modecheck_unify__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_39_39, (MR_Integer) 0)));
#line 285 "modecheck_unify.m"
        check_hlds__modecheck_unify__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_39_39, (MR_Integer) 1)));
#line 286 "modecheck_unify.m"
        {
#line 286 "modecheck_unify.m"
          check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(check_hlds__modecheck_unify__Purity_22, check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__PredId_31, check_hlds__modecheck_unify__ProcId_32, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__PredArgTypes_25, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__Context_30, check_hlds__modecheck_unify__ModuleInfo0_28, &check_hlds__modecheck_unify__Functor0_33, check_hlds__modecheck_unify__VarSet0_29, &check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__VarTypes0_20, &check_hlds__modecheck_unify__VarTypes_35);
        }
#line 289 "modecheck_unify.m"
        {
#line 289 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 290 "modecheck_unify.m"
        {
#line 290 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 293 "modecheck_unify.m"
        {
#line 293 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__Functor0_33, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 293 "modecheck_unify.m"
          return;
        }
#line 282 "modecheck_unify.m"
      }
#line 295 "modecheck_unify.m"
    else
#line 306 "modecheck_unify.m"
      {
#line 306 "modecheck_unify.m"
        MR_Integer check_hlds__modecheck_unify__ConstNum_36;

#line 298 "modecheck_unify.m"
        {
#line 298 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(check_hlds__modecheck_unify__ConsId_12, &check_hlds__modecheck_unify__ConstNum_36);
        }
#line 306 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 301 "modecheck_unify.m"
          {
#line 301 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_43_43;
#line 301 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_48_48;

#line 300 "modecheck_unify.m"
            {
#line 300 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 3) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_13));
#line 300 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_43_43, 4) = ((MR_Box) ((MR_Integer) 0));
#line 300 "modecheck_unify.m"
            }
#line 300 "modecheck_unify.m"
            {
#line 300 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_43_43, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
            }
#line 302 "modecheck_unify.m"
            {
#line 302 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1]));
#line 302 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2));
#line 302 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14));
#line 302 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "modecheck_unify.m"
            }
#line 302 "modecheck_unify.m"
            {
#line 302 "modecheck_unify.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_48_48, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
            }
#line 304 "modecheck_unify.m"
            {
#line 304 "modecheck_unify.m"
              check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__ConstNum_36, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 304 "modecheck_unify.m"
              return;
            }
#line 301 "modecheck_unify.m"
          }
#line 306 "modecheck_unify.m"
        else
#line 310 "modecheck_unify.m"
          {
#line 310 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__TypeOfX_21, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__IsExistConstruction_13, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_37, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_38);
#line 310 "modecheck_unify.m"
            return;
          }
#line 306 "modecheck_unify.m"
      }
#line 257 "modecheck_unify.m"
  }
#line 251 "modecheck_unify.m"
}

#line 153 "modecheck_unify.m"
static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__X_9,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Y_10,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__Unification0_11,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
#line 153 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
#line 153 "modecheck_unify.m"
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47,
#line 153 "modecheck_unify.m"
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48)
#line 153 "modecheck_unify.m"
{
#line 158 "modecheck_unify.m"
  {
#line 158 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarTypes_17;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap0_18;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX0_19;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY0_20;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__MaybeInitX_23;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstMap_24;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfX_25;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__InstOfY_26;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveX_27;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__LiveY_28;
#line 158 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52;
#line 181 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__VarType_21;
#line 231 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyInst_30;
#line 231 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Det1_31;
#line 231 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_32;
#line 194 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__BothLive_29;
#line 204 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___XLockedReason_33;
#line 205 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___YLockedReason_34;
#line 208 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__TypeInfo_79_79;

#line 159 "modecheck_unify.m"
    {
#line 159 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
#line 160 "modecheck_unify.m"
    {
#line 160 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__VarTypes_17);
    }
#line 161 "modecheck_unify.m"
    {
#line 161 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__InstMap0_18);
    }
#line 162 "modecheck_unify.m"
    {
#line 162 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_18, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__InstOfX0_19);
    }
#line 163 "modecheck_unify.m"
    {
#line 163 "modecheck_unify.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_18, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__InstOfY0_20);
    }
#line 168 "modecheck_unify.m"
    {
#line 168 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47);
    }
#line 168 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 168 "modecheck_unify.m"
      {
#line 169 "modecheck_unify.m"
        {
#line 169 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47);
        }
#line 168 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 168 "modecheck_unify.m"
          {
#line 170 "modecheck_unify.m"
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__InstOfX0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 168 "modecheck_unify.m"
              {
#line 171 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__InstOfY0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 168 "modecheck_unify.m"
                  {
#line 172 "modecheck_unify.m"
                    {
#line 172 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_17, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__VarType_21);
                    }
#line 168 "modecheck_unify.m"
                    if (check_hlds__modecheck_unify__succeeded)
#line 173 "modecheck_unify.m"
                      {
#line 173 "modecheck_unify.m"
                        check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, check_hlds__modecheck_unify__VarType_21);
                      }
#line 168 "modecheck_unify.m"
                  }
#line 168 "modecheck_unify.m"
              }
#line 168 "modecheck_unify.m"
          }
#line 168 "modecheck_unify.m"
      }
#line 181 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 176 "modecheck_unify.m"
      {
#line 176 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__InitXGoal_22;
#line 176 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_49_49;
#line 176 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_50_50;
#line 176 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_53_53;

#line 175 "modecheck_unify.m"
        {
#line 175 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_49_49 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 176 "modecheck_unify.m"
        {
#line 176 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_50_50 = mercury__term__context_init_0_f_0();
        }
#line 175 "modecheck_unify.m"
        {
#line 175 "modecheck_unify.m"
          check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__VarType_21, check_hlds__modecheck_unify__V_49_49, check_hlds__modecheck_unify__V_50_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_unify__InitXGoal_22, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52);
        }
#line 177 "modecheck_unify.m"
        {
#line 177 "modecheck_unify.m"
          check_hlds__modecheck_unify__MaybeInitX_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 177 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeInitX_23, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitXGoal_22));
#line 177 "modecheck_unify.m"
        }
#line 178 "modecheck_unify.m"
        {
#line 178 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_53_53 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 178 "modecheck_unify.m"
        {
#line 178 "modecheck_unify.m"
          hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__V_53_53, check_hlds__modecheck_unify__InstMap0_18, &check_hlds__modecheck_unify__InstMap_24);
        }
#line 179 "modecheck_unify.m"
        {
#line 179 "modecheck_unify.m"
          check_hlds__modecheck_unify__InstOfX_25 = parse_tree__prog_mode__any_inst_0_f_0();
        }
#line 180 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_26 = check_hlds__modecheck_unify__InstOfY0_20;
#line 176 "modecheck_unify.m"
      }
#line 181 "modecheck_unify.m"
    else
#line 182 "modecheck_unify.m"
      {
#line 182 "modecheck_unify.m"
        check_hlds__modecheck_unify__MaybeInitX_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstMap_24 = check_hlds__modecheck_unify__InstMap0_18;
#line 184 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfX_25 = check_hlds__modecheck_unify__InstOfX0_19;
#line 185 "modecheck_unify.m"
        check_hlds__modecheck_unify__InstOfY_26 = check_hlds__modecheck_unify__InstOfY0_20;
#line 182 "modecheck_unify.m"
        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_47;
#line 182 "modecheck_unify.m"
      }
#line 187 "modecheck_unify.m"
    {
#line 187 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__LiveX_27);
    }
#line 188 "modecheck_unify.m"
    {
#line 188 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__LiveY_28);
    }
#line 190 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveX_27 == (MR_Integer) 0);
#line 190 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 190 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveY_28 == (MR_Integer) 0);
#line 192 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 191 "modecheck_unify.m"
      check_hlds__modecheck_unify__BothLive_29 = (MR_Integer) 0;
#line 192 "modecheck_unify.m"
    else
#line 193 "modecheck_unify.m"
      check_hlds__modecheck_unify__BothLive_29 = (MR_Integer) 1;
#line 195 "modecheck_unify.m"
    {
#line 195 "modecheck_unify.m"
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__modecheck_unify__BothLive_29, check_hlds__modecheck_unify__InstOfX_25, check_hlds__modecheck_unify__InstOfY_26, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifyInst_30, &check_hlds__modecheck_unify__Det1_31, check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ModuleInfo1_32);
    }
#line 194 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 194 "modecheck_unify.m"
      {
#line 203 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__UnifyInst_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "modecheck_unify.m"
        if (check_hlds__modecheck_unify__succeeded)
#line 203 "modecheck_unify.m"
          {
#line 204 "modecheck_unify.m"
            {
#line 204 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify___XLockedReason_33);
            }
#line 203 "modecheck_unify.m"
            if (check_hlds__modecheck_unify__succeeded)
#line 203 "modecheck_unify.m"
              {
#line 205 "modecheck_unify.m"
                {
#line 205 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify___YLockedReason_34);
                }
#line 203 "modecheck_unify.m"
                if (check_hlds__modecheck_unify__succeeded)
#line 203 "modecheck_unify.m"
                  {
#line 10043 "check_hlds.modecheck_unify.c"
                    check_hlds__modecheck_unify__TypeInfo_79_79 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 208 "modecheck_unify.m"
                    {
#line 208 "modecheck_unify.m"
                      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_79_79, ((MR_Box) (check_hlds__modecheck_unify__X_9)), ((MR_Box) (check_hlds__modecheck_unify__Y_10)));
                    }
#line 208 "modecheck_unify.m"
                    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 203 "modecheck_unify.m"
                  }
#line 203 "modecheck_unify.m"
              }
#line 203 "modecheck_unify.m"
          }
#line 202 "modecheck_unify.m"
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 194 "modecheck_unify.m"
      }
#line 231 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 211 "modecheck_unify.m"
      {
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_37;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_38;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__UnifyGoalExpr0_39;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_56_56;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_58_58;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
#line 211 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60;

#line 213 "modecheck_unify.m"
        {
#line 213 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55);
        }
#line 214 "modecheck_unify.m"
        {
#line 214 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_56_56, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 214 "modecheck_unify.m"
        }
#line 214 "modecheck_unify.m"
        {
#line 214 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__UnifyInst_30, check_hlds__modecheck_unify__V_56_56, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57);
        }
#line 215 "modecheck_unify.m"
        {
#line 215 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_58_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 215 "modecheck_unify.m"
        }
#line 215 "modecheck_unify.m"
        {
#line 215 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__UnifyInst_30, check_hlds__modecheck_unify__V_58_58, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59);
        }
#line 216 "modecheck_unify.m"
        {
#line 216 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 216 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_30));
#line 216 "modecheck_unify.m"
        }
#line 217 "modecheck_unify.m"
        {
#line 217 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 217 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_38, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 217 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_30));
#line 217 "modecheck_unify.m"
        }
#line 218 "modecheck_unify.m"
        {
#line 218 "modecheck_unify.m"
          check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(check_hlds__modecheck_unify__ModeOfX_37, check_hlds__modecheck_unify__ModeOfY_38, check_hlds__modecheck_unify__LiveX_27, check_hlds__modecheck_unify__LiveY_28, check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__Det1_31, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__VarTypes_17, check_hlds__modecheck_unify__Unification0_11, &check_hlds__modecheck_unify__UnifyGoalExpr0_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60);
        }
#line 224 "modecheck_unify.m"
        if ((check_hlds__modecheck_unify__MaybeInitX_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "modecheck_unify.m"
          {
#line 223 "modecheck_unify.m"
            *check_hlds__modecheck_unify__UnifyGoalExpr_14 = check_hlds__modecheck_unify__UnifyGoalExpr0_39;
#line 222 "modecheck_unify.m"
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60;
#line 222 "modecheck_unify.m"
          }
#line 224 "modecheck_unify.m"
        else
#line 225 "modecheck_unify.m"
          {
#line 225 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__InitGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeInitX_23, (MR_Integer) 0)));
#line 225 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifyGoalInfo_41;
#line 225 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__UnifySubGoal_42;
#line 225 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_63_63;
#line 225 "modecheck_unify.m"
            MR_Word check_hlds__modecheck_unify__V_64_64;

#line 226 "modecheck_unify.m"
            {
#line 226 "modecheck_unify.m"
              check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_unify__InstMap_24, check_hlds__modecheck_unify__UnifyGoalExpr0_39, check_hlds__modecheck_unify__UnifyGoalInfo0_13, &check_hlds__modecheck_unify__UnifyGoalInfo_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_60_60, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);
            }
#line 228 "modecheck_unify.m"
            {
#line 228 "modecheck_unify.m"
              check_hlds__modecheck_unify__UnifySubGoal_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifySubGoal_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyGoalExpr0_39));
#line 228 "modecheck_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifySubGoal_42, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyGoalInfo_41));
#line 228 "modecheck_unify.m"
            }
#line 229 "modecheck_unify.m"
            {
#line 229 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifySubGoal_42));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "modecheck_unify.m"
            }
#line 229 "modecheck_unify.m"
            {
#line 229 "modecheck_unify.m"
              check_hlds__modecheck_unify__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_63_63, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitGoal_40));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_63_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_64_64));
#line 229 "modecheck_unify.m"
            }
#line 229 "modecheck_unify.m"
            {
#line 229 "modecheck_unify.m"
              MR_Word base;
#line 229 "modecheck_unify.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 229 "modecheck_unify.m"
              *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 229 "modecheck_unify.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_63_63));
#line 229 "modecheck_unify.m"
            }
#line 225 "modecheck_unify.m"
          }
#line 211 "modecheck_unify.m"
      }
#line 231 "modecheck_unify.m"
    else
#line 232 "modecheck_unify.m"
      {
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__WaitingVars_43;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeError_44;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Unification_45;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Modes_46;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_66_66;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_67_67;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__V_74_74;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__Inst_75;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfX_76;
#line 232 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ModeOfY_77;

#line 232 "modecheck_unify.m"
        {
#line 232 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_67_67, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 232 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "modecheck_unify.m"
        }
#line 232 "modecheck_unify.m"
        {
#line 232 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_66_66, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 232 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_66_66, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_67_67));
#line 232 "modecheck_unify.m"
        }
#line 232 "modecheck_unify.m"
        {
#line 232 "modecheck_unify.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_66_66, &check_hlds__modecheck_unify__WaitingVars_43);
        }
#line 233 "modecheck_unify.m"
        {
#line 233 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeError_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 233 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 233 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 233 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 233 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 233 "modecheck_unify.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_44, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 233 "modecheck_unify.m"
        }
#line 234 "modecheck_unify.m"
        {
#line 234 "modecheck_unify.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_43, check_hlds__modecheck_unify__ModeError_44, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69);
        }
#line 238 "modecheck_unify.m"
        check_hlds__modecheck_unify__Inst_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 239 "modecheck_unify.m"
        {
#line 239 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__Inst_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71);
        }
#line 240 "modecheck_unify.m"
        {
#line 240 "modecheck_unify.m"
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__Inst_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48);
        }
#line 242 "modecheck_unify.m"
        {
#line 242 "modecheck_unify.m"
          check_hlds__modecheck_unify__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_45, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 242 "modecheck_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_45, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 242 "modecheck_unify.m"
        }
#line 243 "modecheck_unify.m"
        {
#line 243 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfX_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_76, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_25));
#line 243 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfX_76, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_75));
#line 243 "modecheck_unify.m"
        }
#line 244 "modecheck_unify.m"
        {
#line 244 "modecheck_unify.m"
          check_hlds__modecheck_unify__ModeOfY_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_77, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_26));
#line 244 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ModeOfY_77, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_75));
#line 244 "modecheck_unify.m"
        }
#line 245 "modecheck_unify.m"
        {
#line 245 "modecheck_unify.m"
          check_hlds__modecheck_unify__Modes_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_46, 0) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfX_76));
#line 245 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Modes_46, 1) = ((MR_Box) (check_hlds__modecheck_unify__ModeOfY_77));
#line 245 "modecheck_unify.m"
        }
#line 246 "modecheck_unify.m"
        {
#line 246 "modecheck_unify.m"
          check_hlds__modecheck_unify__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_74_74, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
#line 246 "modecheck_unify.m"
        }
#line 246 "modecheck_unify.m"
        {
#line 246 "modecheck_unify.m"
          MR_Word base;
#line 246 "modecheck_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 246 "modecheck_unify.m"
          *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_74_74));
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__Modes_46));
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_45));
#line 246 "modecheck_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
#line 246 "modecheck_unify.m"
        }
#line 232 "modecheck_unify.m"
      }
#line 158 "modecheck_unify.m"
  }
#line 153 "modecheck_unify.m"
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
#line 1014 "modecheck_unify.m"
  {
#line 1014 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalExpr_11;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo_12;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Context_13;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModeContext_14;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__UnifyContext_15;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__MainContext_16;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__SubContexts_17;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalExpr0_18;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo0_19;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__NonLocals_20;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo1_21;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__GoalInfo2_22;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ModuleInfo_23;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__PredId_24;
#line 1014 "modecheck_unify.m"
    MR_Integer check_hlds__modecheck_unify__ProcId_25;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__ProcInfo_27;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__RttiVarMaps_28;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_35_35;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_36_36;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_37_37;
#line 1014 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__V_38_38;
#line 1039 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify___PredInfo_26;
#line 1051 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__X_29;
#line 1051 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Y_30;
#line 1051 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Mode_31;
#line 1051 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__Unification0_32;
#line 1051 "modecheck_unify.m"
    MR_Word check_hlds__modecheck_unify__FinalUnifyContext_33;

#line 1016 "modecheck_unify.m"
    {
#line 1016 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__Context_13);
    }
#line 1017 "modecheck_unify.m"
    {
#line 1017 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModeContext_14);
    }
#line 1018 "modecheck_unify.m"
    {
#line 1018 "modecheck_unify.m"
      check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(check_hlds__modecheck_unify__ModeInfo_9, check_hlds__modecheck_unify__ModeContext_14, &check_hlds__modecheck_unify__UnifyContext_15);
    }
#line 1019 "modecheck_unify.m"
    check_hlds__modecheck_unify__MainContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 0)));
#line 1019 "modecheck_unify.m"
    check_hlds__modecheck_unify__SubContexts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 1)));
#line 1021 "modecheck_unify.m"
    {
#line 1021 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
#line 1021 "modecheck_unify.m"
    }
#line 1021 "modecheck_unify.m"
    {
#line 1021 "modecheck_unify.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__modecheck_unify__Var0_6, check_hlds__modecheck_unify__V_35_35, check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__MainContext_16, check_hlds__modecheck_unify__SubContexts_17, &check_hlds__modecheck_unify__V_36_36);
    }
#line 1022 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 0)));
#line 1022 "modecheck_unify.m"
    check_hlds__modecheck_unify__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 1)));
#line 1029 "modecheck_unify.m"
    {
#line 1029 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
#line 1029 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "modecheck_unify.m"
    }
#line 1029 "modecheck_unify.m"
    {
#line 1029 "modecheck_unify.m"
      check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_6));
#line 1029 "modecheck_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_38_38));
#line 1029 "modecheck_unify.m"
    }
#line 1029 "modecheck_unify.m"
    {
#line 1029 "modecheck_unify.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_37_37, &check_hlds__modecheck_unify__NonLocals_20);
    }
#line 1030 "modecheck_unify.m"
    {
#line 1030 "modecheck_unify.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_unify__NonLocals_20, check_hlds__modecheck_unify__GoalInfo0_19, &check_hlds__modecheck_unify__GoalInfo1_21);
    }
#line 1031 "modecheck_unify.m"
    {
#line 1031 "modecheck_unify.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__GoalInfo1_21, &check_hlds__modecheck_unify__GoalInfo2_22);
    }
#line 1036 "modecheck_unify.m"
    {
#line 1036 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModuleInfo_23);
    }
#line 1037 "modecheck_unify.m"
    {
#line 1037 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__PredId_24);
    }
#line 1038 "modecheck_unify.m"
    {
#line 1038 "modecheck_unify.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ProcId_25);
    }
#line 1039 "modecheck_unify.m"
    {
#line 1039 "modecheck_unify.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_unify__ModuleInfo_23, check_hlds__modecheck_unify__PredId_24, check_hlds__modecheck_unify__ProcId_25, &check_hlds__modecheck_unify___PredInfo_26, &check_hlds__modecheck_unify__ProcInfo_27);
    }
#line 1041 "modecheck_unify.m"
    {
#line 1041 "modecheck_unify.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__modecheck_unify__ProcInfo_27, &check_hlds__modecheck_unify__RttiVarMaps_28);
    }
#line 1047 "modecheck_unify.m"
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__GoalExpr0_18)) == (MR_mktag((MR_Integer) 1)));
#line 1047 "modecheck_unify.m"
    if (check_hlds__modecheck_unify__succeeded)
#line 1047 "modecheck_unify.m"
      {
#line 1047 "modecheck_unify.m"
        check_hlds__modecheck_unify__X_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 0)));
#line 1047 "modecheck_unify.m"
        check_hlds__modecheck_unify__Y_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 1)));
#line 1047 "modecheck_unify.m"
        check_hlds__modecheck_unify__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 2)));
#line 1047 "modecheck_unify.m"
        check_hlds__modecheck_unify__Unification0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 3)));
#line 1047 "modecheck_unify.m"
        check_hlds__modecheck_unify__FinalUnifyContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 4)));
#line 1049 "modecheck_unify.m"
        {
#line 1049 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Unification_34;

#line 1048 "modecheck_unify.m"
          {
#line 1048 "modecheck_unify.m"
            check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(check_hlds__modecheck_unify__Type_8, check_hlds__modecheck_unify__RttiVarMaps_28, check_hlds__modecheck_unify__Unification0_32, &check_hlds__modecheck_unify__Unification_34, check_hlds__modecheck_unify__GoalInfo2_22, &check_hlds__modecheck_unify__GoalInfo_12);
          }
#line 1050 "modecheck_unify.m"
          {
#line 1050 "modecheck_unify.m"
            check_hlds__modecheck_unify__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_29));
#line 1050 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_30));
#line 1050 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_31));
#line 1050 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_34));
#line 1050 "modecheck_unify.m"
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 4) = ((MR_Box) (check_hlds__modecheck_unify__FinalUnifyContext_33));
#line 1050 "modecheck_unify.m"
          }
#line 1049 "modecheck_unify.m"
        }
#line 1047 "modecheck_unify.m"
      }
#line 1047 "modecheck_unify.m"
    else
#line 1052 "modecheck_unify.m"
      {
#line 1052 "modecheck_unify.m"
        {
#line 1052 "modecheck_unify.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
#line 1052 "modecheck_unify.m"
          return;
        }
#line 1052 "modecheck_unify.m"
      }
#line 1015 "modecheck_unify.m"
    {
#line 1015 "modecheck_unify.m"
      MR_Word base;
#line 1015 "modecheck_unify.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "modecheck_unify.m"
      *check_hlds__modecheck_unify__Goal_10 = base;
#line 1015 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__GoalExpr_11));
#line 1015 "modecheck_unify.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__GoalInfo_12));
#line 1015 "modecheck_unify.m"
    }
#line 1014 "modecheck_unify.m"
  }
#line 38 "modecheck_unify.m"
}

#line 127 "modecheck_unify.m"
static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
#line 127 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__closure_arg,
#line 127 "modecheck_unify.m"
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
#line 127 "modecheck_unify.m"
{
#line 127 "modecheck_unify.m"
  {
#line 127 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;
#line 127 "modecheck_unify.m"
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

#line 127 "modecheck_unify.m"
    {
#line 127 "modecheck_unify.m"
      return check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__var_inst_contains_any_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
#line 127 "modecheck_unify.m"
    return check_hlds__modecheck_unify__succeeded;
#line 127 "modecheck_unify.m"
  }
#line 127 "modecheck_unify.m"
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
#line 111 "modecheck_unify.m"
  {
#line 111 "modecheck_unify.m"
    MR_bool check_hlds__modecheck_unify__succeeded;

#line 111 "modecheck_unify.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS_10)) == (MR_mktag((MR_Integer) 1))))
#line 115 "modecheck_unify.m"
      {
#line 115 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));
#line 115 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__IsExistConstr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 1)));
#line 115 "modecheck_unify.m"
        MR_Word check_hlds__modecheck_unify__RHSVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));

#line 116 "modecheck_unify.m"
        {
#line 116 "modecheck_unify.m"
          check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__ConsId_17, check_hlds__modecheck_unify__IsExistConstr_18, check_hlds__modecheck_unify__RHSVars_19, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 116 "modecheck_unify.m"
          return;
        }
#line 115 "modecheck_unify.m"
      }
#line 111 "modecheck_unify.m"
    else
#line 111 "modecheck_unify.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS_10)) == (MR_mktag((MR_Integer) 2))))
#line 121 "modecheck_unify.m"
        {
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__Purity_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__HOGroundness_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 121 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__LambdaNonLocals_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___PredOrFunc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___LambdaQuantVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 3)));
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___ArgModes_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 4)));
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___Detism_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 5)));
#line 119 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify___LambdaGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 6)));
#line 135 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__AnyVars_31;
#line 123 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__TypeInfo_47_47;
#line 123 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__ModuleInfo_29;
#line 123 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__InstMap_30;
#line 123 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_37_37;
#line 129 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_32_32;
#line 129 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__V_33_33;

#line 123 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_20 == (MR_Integer) 2);
#line 123 "modecheck_unify.m"
          check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
#line 123 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 123 "modecheck_unify.m"
            {
#line 124 "modecheck_unify.m"
              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HOGroundness_21 == (MR_Integer) 0);
#line 123 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 123 "modecheck_unify.m"
                {
#line 125 "modecheck_unify.m"
                  {
#line 125 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__ModuleInfo_29);
                  }
#line 126 "modecheck_unify.m"
                  {
#line 126 "modecheck_unify.m"
                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__InstMap_30);
                  }
#line 10766 "check_hlds.modecheck_unify.c"
                  check_hlds__modecheck_unify__TypeInfo_47_47 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
#line 127 "modecheck_unify.m"
                  {
#line 127 "modecheck_unify.m"
                    check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 127 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[0]));
#line 127 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
#line 127 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 127 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo_29));
#line 127 "modecheck_unify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap_30));
#line 127 "modecheck_unify.m"
                  }
#line 127 "modecheck_unify.m"
                  {
#line 127 "modecheck_unify.m"
                    check_hlds__modecheck_unify__AnyVars_31 = mercury__list__filter_2_f_0(check_hlds__modecheck_unify__TypeInfo_47_47, check_hlds__modecheck_unify__V_37_37, check_hlds__modecheck_unify__LambdaNonLocals_24);
                  }
#line 129 "modecheck_unify.m"
                  check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__AnyVars_31)) == (MR_mktag((MR_Integer) 1)));
#line 129 "modecheck_unify.m"
                  if (check_hlds__modecheck_unify__succeeded)
#line 129 "modecheck_unify.m"
                    {
#line 129 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 0)));
#line 129 "modecheck_unify.m"
                      check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 1)));
#line 129 "modecheck_unify.m"
                    }
#line 123 "modecheck_unify.m"
                }
#line 123 "modecheck_unify.m"
            }
#line 135 "modecheck_unify.m"
          if (check_hlds__modecheck_unify__succeeded)
#line 131 "modecheck_unify.m"
            {
#line 131 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__WaitingVars_34;
#line 131 "modecheck_unify.m"
              MR_Word check_hlds__modecheck_unify__V_38_38;

#line 131 "modecheck_unify.m"
              {
#line 131 "modecheck_unify.m"
                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_34);
              }
#line 133 "modecheck_unify.m"
              {
#line 133 "modecheck_unify.m"
                check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 133 "modecheck_unify.m"
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__AnyVars_31));
#line 133 "modecheck_unify.m"
              }
#line 132 "modecheck_unify.m"
              {
#line 132 "modecheck_unify.m"
                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_34, check_hlds__modecheck_unify__V_38_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
              }
#line 134 "modecheck_unify.m"
              *check_hlds__modecheck_unify__Goal_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
#line 131 "modecheck_unify.m"
            }
#line 135 "modecheck_unify.m"
          else
#line 143 "modecheck_unify.m"
            {
#line 137 "modecheck_unify.m"
              {
#line 137 "modecheck_unify.m"
                check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__UnifyGoalInfo0_13, (MR_Integer) 20);
              }
#line 143 "modecheck_unify.m"
              if (check_hlds__modecheck_unify__succeeded)
#line 140 "modecheck_unify.m"
                {
#line 140 "modecheck_unify.m"
                  check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 140 "modecheck_unify.m"
                  return;
                }
#line 143 "modecheck_unify.m"
              else
#line 144 "modecheck_unify.m"
                {
#line 144 "modecheck_unify.m"
                  check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 144 "modecheck_unify.m"
                  return;
                }
#line 143 "modecheck_unify.m"
            }
#line 121 "modecheck_unify.m"
        }
#line 111 "modecheck_unify.m"
      else
#line 111 "modecheck_unify.m"
        {
#line 111 "modecheck_unify.m"
          MR_Word check_hlds__modecheck_unify__RHSVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));

#line 112 "modecheck_unify.m"
          {
#line 112 "modecheck_unify.m"
            check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHSVar_16, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
#line 112 "modecheck_unify.m"
            return;
          }
#line 111 "modecheck_unify.m"
        }
#line 111 "modecheck_unify.m"
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
