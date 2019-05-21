/*
** Automatically generated from `mode_util.m'
** by the Mercury compiler,
** version rotd-2017-10-24
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.mode_util.
// :- implementation.

/*
INIT mercury__check_hlds__mode_util__init
ENDINIT
*/

#include "check_hlds.mode_util.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2];

static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2];

static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1];

static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1];

static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TupleArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_RI_0_9,
  MR_Word * STATE_VARIABLE_RI_10);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RI_0_8,
  MR_Word * STATE_VARIABLE_RI_9);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
  MR_Word RecomputeAtomic_11,
  MR_Word Var_12,
  MR_Word Cases0_13,
  MR_Word * Cases_14,
  MR_Word VarTypes_15,
  MR_Word InstMap0_16,
  MR_Word NonLocals_17,
  MR_Word * InstMapDelta_18,
  MR_Word STATE_VARIABLE_RI_0_23,
  MR_Word * STATE_VARIABLE_RI_24);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word Goals0_11,
  MR_Word * Goals_12,
  MR_Word VarTypes_13,
  MR_Word InstMap_14,
  MR_Word NonLocals_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_21,
  MR_Word * STATE_VARIABLE_RI_22);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
  MR_Word RecomputeAtomic_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word VarTypes_4,
  MR_Word InstMap0_5,
  MR_Word * InstMapDelta_6,
  MR_Word STATE_VARIABLE_RI_0_7,
  MR_Word * STATE_VARIABLE_RI_8);

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word VarTypes_14,
  MR_Word InstMap0_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_105,
  MR_Word * STATE_VARIABLE_RI_106);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstMap0_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_39,
  MR_Word * STATE_VARIABLE_RI_40);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word * R_6,
  MR_Word STATE_VARIABLE_RI_0_10,
  MR_Word * STATE_VARIABLE_RI_11);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
  MR_Word Unification_9,
  MR_Word UniMode0_10,
  MR_Word * UniMode_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_55,
  MR_Word * STATE_VARIABLE_RI_56);

static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Integer NumArgs_7);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Args_11,
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_34,
  MR_Word * STATE_VARIABLE_RI_35);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Sub_0_5,
  MR_Word * STATE_VARIABLE_Sub_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word ContainingTypes_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * TopFunctorMode_12);

static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word ConsId_7,
  MR_Word * ArgInst_8);

static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInst_7);

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type0_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Constructors_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word TypeCtor_3,
  MR_Word TypeModule_4,
  MR_Word Constructors_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredArgTypes_5,
  MR_Word * PredInstInfo_6);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util__inst_lookup_subst_args_5_p_0(
  MR_Word InstBody_6,
  MR_Word Params_7,
  MR_Word Name_8,
  MR_Word Args_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgInst_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inst_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
  MR_Word Type0_4,
  MR_Word Subst_5,
  MR_Word * Type_6);

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[1][7];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[4][3];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[1][1];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[2][5];




static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0])))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_1[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
  (MR_String) "recompute_atomic_instmap_deltas",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
  (MR_String) "do_not_recompute_atomic_instmap_deltas",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001)),
  ((MR_Box) (check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001)),
  (MR_String) "check_hlds.mode_util",
  (MR_String) "recompute_atomic_instmap_deltas",
  {     check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0 },
  {     check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
};

static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2] = {
  (MR_String) "ri_module_info",
  (MR_String) "ri_inst_varset"
};

static const MR_DuFunctorDesc check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0 = {
  (MR_String) "recompute_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0,
  check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_util____Unify____recompute_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_util____Compare____recompute_info_0_0_10001)),
  (MR_String) "check_hlds.mode_util",
  (MR_String) "recompute_info",
  {     check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0 },
  {     check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0
};

static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  {
    MR_Word _LHSInsts_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 0)));

    *LambdaHeadVar__2_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      hlds__hlds_module____Compare____module_info_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &check_hlds__mode_util_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TupleArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8)
{
  {
    MR_bool succeeded;
    MR_Word Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 0)));
    MR_Word ArgInsts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 1)));
    MR_Word ArgInsts_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeCtorInfo_17_17;
    MR_Integer ArgInstsLen_12;
    MR_Integer TupleArgTypesLen_13;
    MR_Integer Var_11;

    succeeded = ((((MR_tag((MR_Word) Functor_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 1)));
      TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
      mercury__list__length_2_p_0(TypeCtorInfo_16_16, ArgInsts0_10, &ArgInstsLen_12);
      TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__length_2_p_0(TypeCtorInfo_17_17, TupleArgTypes_6, &TupleArgTypesLen_13);
      succeeded = (ArgInstsLen_12 == TupleArgTypesLen_13);
    }
    if (succeeded)
    {
      MR_Word Subst_14;

      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &Subst_14);
      check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(ModuleInfo_5, Subst_14, TupleArgTypes_6, ArgInsts0_10, &ArgInsts_15);
    }
    else
      ArgInsts_15 = ArgInsts0_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Functor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_15));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__partition_args_5_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Box Arg_26 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_InputArgs_32_32;
        MR_Word STATE_VARIABLE_OutputArgs_33_33;
        MR_Word InitialInst_41;
        MR_Word _FinalInst_42;

        check_hlds__mode_util__partition_args_5_p_0(TypeInfo_for_T_36, ModuleInfo_1, Var_37, Args_27, &STATE_VARIABLE_InputArgs_32_32, &STATE_VARIABLE_OutputArgs_33_33);
        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Var_38, &InitialInst_41, &_FinalInst_42);
        succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitialInst_41);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Arg_26;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputArgs_32_32));
          }
          *HeadVar__5_5 = STATE_VARIABLE_OutputArgs_33_33;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Arg_26;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputArgs_33_33));
          }
          *HeadVar__4_4 = STATE_VARIABLE_InputArgs_32_32;
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__normalise_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Insts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Inst_25;
      MR_Word Insts_26;

      check_hlds__mode_util__normalise_inst_4_p_0(ModuleInfo_1, Var_28, Inst0_23, &Inst_25);
      check_hlds__mode_util__normalise_insts_4_p_0(ModuleInfo_1, Var_27, Insts0_24, &Insts_26);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_26));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__normalise_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * NormalisedInst_8)
{
  {
    MR_bool succeeded;
    MR_Word Inst_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_5, Inst0_7, &Inst_9);
    succeeded = ((((MR_tag((MR_Word) Inst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3)));
      {
        MR_Word Uniq_13;

        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_5, Inst_9);
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_5, Inst_9);
            if (succeeded)
            {
              Uniq_13 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(ModuleInfo_5, Inst_9);
              if (succeeded)
              {
                Uniq_13 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(ModuleInfo_5, Inst_9);
              succeeded = !(succeeded);
            }
          }
        }
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *NormalisedInst_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_13));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_5, Inst_9);
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_5, Inst_9);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(ModuleInfo_5, Inst_9);
              succeeded = !(succeeded);
            }
          }
          if (succeeded)
          {
            *NormalisedInst_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0]);
          }
          else
            *NormalisedInst_8 = Inst_9;
        }
      }
    }
    else
      *NormalisedInst_8 = Inst_9;
  }
}

void MR_CALL 
check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(
  MR_Word Var_6,
  MR_Word InstMap0_7,
  MR_Word InstMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    MR_Word InstMapDelta0_13;
    MR_Word Inst0_14;
    MR_Word Inst_15;
    MR_Word GoalInfo_16;

    InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_12);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_7, Var_6, &Inst0_14);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_6, &Inst_15);
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_15, Inst0_14);
    if (succeeded)
      GoalInfo_16 = GoalInfo0_12;
    else
    {
      MR_Word InstMapDelta_17;

      hlds__instmap__instmap_delta_set_var_4_p_0(Var_6, Inst_15, InstMapDelta0_13, &InstMapDelta_17);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_17, GoalInfo0_12, &GoalInfo_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_16));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word IsLive_8;
      MR_Word IsLives_9;
      MR_Word FinalInst_11;
      MR_Word _InitialInst_10;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_6, &_InitialInst_10, &FinalInst_11);
      succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_1, FinalInst_11);
      if (succeeded)
        IsLive_8 = (MR_Integer) 1;
      else
        IsLive_8 = (MR_Integer) 0;
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_1, Modes_7, &IsLives_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IsLive_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IsLives_9));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Uniq_7, TypeCtor_8, Constructors_9, BoundInsts_10);
}

void MR_CALL 
check_hlds__mode_util__constructors_to_bound_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Uniq_7, TypeCtor_8, Constructors_9, BoundInsts_10);
}

void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstVarSet_13,
  MR_Word InstMap0_14,
  MR_Word ModuleInfo0_15,
  MR_Word * ModuleInfo_16)
{
  {
    MR_Word RI0_17;
    MR_Word RI_19;
    MR_Word Var_18;
    MR_Word Var_20;

    {
      RI0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RI0_17, 0) = ((MR_Box) (ModuleInfo0_15));
      MR_hl_field(MR_mktag(0), RI0_17, 1) = ((MR_Box) (InstVarSet_13));
    }
    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, Goal0_10, Goal_11, VarTypes_12, InstMap0_14, &Var_18, RI0_17, &RI_19);
    *ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), RI_19, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RI_19, (MR_Integer) 1)));
  }
}

void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0(
  MR_Word RecomputeAtomic_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_Word InstMap0_9;
    MR_Word VarTypes_10;
    MR_Word Goal0_11;
    MR_Word InstVarSet_12;
    MR_Word Goal_13;
    MR_Word RI0_28;
    MR_Word RI_30;
    MR_Word Var_29;
    MR_Word Var_31;

    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ModuleInfo_0_16, &InstMap0_9);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarTypes_10);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Goal0_11);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &InstVarSet_12);
    {
      RI0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RI0_28, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), RI0_28, 1) = ((MR_Box) (InstVarSet_12));
    }
    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_6, Goal0_11, &Goal_13, VarTypes_10, InstMap0_9, &Var_29, RI0_28, &RI_30);
    *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), RI_30, (MR_Integer) 0)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RI_30, (MR_Integer) 1)));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_13, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15);
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_RI_0_9,
  MR_Word * STATE_VARIABLE_RI_10)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_RI_10 = STATE_VARIABLE_RI_0_9;
  }
  else
  {
    MR_Word Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Case_23;
    MR_Word Cases_24;
    MR_Word InstMapDelta_28;
    MR_Word InstMapDeltas_29;
    MR_Word MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 0)));
    MR_Word OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 1)));
    MR_Word Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 2)));
    MR_Word Type_34;
    MR_Word InstMap1_35;
    MR_Word Goal_36;
    MR_Word InstMapDelta0_37;
    MR_Word STATE_VARIABLE_RI_41_41;
    MR_Word STATE_VARIABLE_RI_42_42;
    MR_Word STATE_VARIABLE_RI_44_44;
    MR_Word ModuleInfo0_59;
    MR_Word ModuleInfo_60;
    MR_Word ModuleInfo0_71;
    MR_Word ModuleInfo_72;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_63;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_75;

    hlds__vartypes__lookup_var_type_3_p_0(HeadVar__5_5, HeadVar__2_2, &Type_34);
    ModuleInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__2_2, Type_34, MainConsId_31, OtherConsIds_32, HeadVar__6_6, &InstMap1_35, ModuleInfo0_59, &ModuleInfo_60);
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
    {
      STATE_VARIABLE_RI_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_41_41, 0) = ((MR_Box) (ModuleInfo_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_41_41, 1) = ((MR_Box) (Var_64));
    }
    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(HeadVar__1_1, Goal0_33, &Goal_36, HeadVar__5_5, InstMap1_35, &InstMapDelta0_37, STATE_VARIABLE_RI_41_41, &STATE_VARIABLE_RI_42_42);
    ModuleInfo0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
    hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(HeadVar__2_2, Type_34, MainConsId_31, OtherConsIds_32, HeadVar__6_6, InstMapDelta0_37, &InstMapDelta_28, ModuleInfo0_71, &ModuleInfo_72);
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
    {
      STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (ModuleInfo_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (Var_76));
    }
    {
      Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_23, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(MR_mktag(0), Case_23, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(MR_mktag(0), Case_23, 2) = ((MR_Box) (Goal_36));
    }
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(HeadVar__1_1, HeadVar__2_2, Cases0_22, &Cases_24, HeadVar__5_5, HeadVar__6_6, &InstMapDeltas_29, STATE_VARIABLE_RI_44_44, STATE_VARIABLE_RI_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapDelta_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMapDeltas_29));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RI_0_8,
  MR_Word * STATE_VARIABLE_RI_9)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_RI_9 = STATE_VARIABLE_RI_0_8;
  }
  else
  {
    MR_Word Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_20;
    MR_Word Goals_21;
    MR_Word InstMapDelta_25;
    MR_Word InstMapDeltas_26;
    MR_Word STATE_VARIABLE_RI_30_30;

    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(HeadVar__1_1, Goal0_18, &Goal_20, HeadVar__4_4, HeadVar__5_5, &InstMapDelta_25, STATE_VARIABLE_RI_0_8, &STATE_VARIABLE_RI_30_30);
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(HeadVar__1_1, Goals0_19, &Goals_21, HeadVar__4_4, HeadVar__5_5, &InstMapDeltas_26, STATE_VARIABLE_RI_30_30, STATE_VARIABLE_RI_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapDelta_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMapDeltas_26));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
  MR_Word RecomputeAtomic_11,
  MR_Word Var_12,
  MR_Word Cases0_13,
  MR_Word * Cases_14,
  MR_Word VarTypes_15,
  MR_Word InstMap0_16,
  MR_Word NonLocals_17,
  MR_Word * InstMapDelta_18,
  MR_Word STATE_VARIABLE_RI_0_23,
  MR_Word * STATE_VARIABLE_RI_24)
{
  {
    MR_Word InstMapDeltas_20;
    MR_Word STATE_VARIABLE_RI_25_25;

    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(RecomputeAtomic_11, Var_12, Cases0_13, Cases_14, VarTypes_15, InstMap0_16, &InstMapDeltas_20, STATE_VARIABLE_RI_0_23, &STATE_VARIABLE_RI_25_25);
    if ((InstMapDeltas_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_18);
      *STATE_VARIABLE_RI_24 = STATE_VARIABLE_RI_25_25;
    }
    else
    {
      MR_Word ModuleInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
      MR_Word ModuleInfo_38;
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
      MR_Word Var_42;
      MR_Word Var_41;

      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_16, NonLocals_17, VarTypes_15, InstMapDeltas_20, InstMapDelta_18, ModuleInfo0_37, &ModuleInfo_38);
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_RI_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_38));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word Goals0_11,
  MR_Word * Goals_12,
  MR_Word VarTypes_13,
  MR_Word InstMap_14,
  MR_Word NonLocals_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_21,
  MR_Word * STATE_VARIABLE_RI_22)
{
  {
    MR_Word InstMapDeltas_18;
    MR_Word STATE_VARIABLE_RI_23_23;

    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(RecomputeAtomic_10, Goals0_11, Goals_12, VarTypes_13, InstMap_14, &InstMapDeltas_18, STATE_VARIABLE_RI_0_21, &STATE_VARIABLE_RI_23_23);
    if ((InstMapDeltas_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_16);
      *STATE_VARIABLE_RI_22 = STATE_VARIABLE_RI_23_23;
    }
    else
    {
      MR_Word ModuleInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
      MR_Word ModuleInfo_36;
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
      MR_Word Var_40;
      MR_Word Var_39;

      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap_14, NonLocals_15, VarTypes_13, InstMapDeltas_18, InstMapDelta_16, ModuleInfo0_35, &ModuleInfo_36);
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_RI_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_36));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
  MR_Word RecomputeAtomic_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word VarTypes_4,
  MR_Word InstMap0_5,
  MR_Word * InstMapDelta_6,
  MR_Word STATE_VARIABLE_RI_0_7,
  MR_Word * STATE_VARIABLE_RI_8)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__instmap__instmap_delta_init_reachable_1_p_0(InstMapDelta_6);
    *STATE_VARIABLE_RI_8 = STATE_VARIABLE_RI_0_7;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word InstMapDelta0_25;
    MR_Word InstMap1_26;
    MR_Word InstMapDelta1_27;
    MR_Word STATE_VARIABLE_RI_30_30;

    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_1, Goal0_17, &Goal_19, VarTypes_4, InstMap0_5, &InstMapDelta0_25, STATE_VARIABLE_RI_0_7, &STATE_VARIABLE_RI_30_30);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_5, InstMapDelta0_25, &InstMap1_26);
    check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(RecomputeAtomic_1, Goals0_18, &Goals_20, VarTypes_4, InstMap1_26, &InstMapDelta1_27, STATE_VARIABLE_RI_30_30, STATE_VARIABLE_RI_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDelta0_25, InstMapDelta1_27, (MR_Integer) 1, InstMapDelta_6);
  }
}

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word VarTypes_14,
  MR_Word InstMap0_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_105,
  MR_Word * STATE_VARIABLE_RI_106)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_26 = (MR_Word) MR_body(((MR_Word) GoalExpr0_11), (MR_Integer) 0);
          MR_Word InstMapDelta0_27;
          MR_Word SubGoal_28;
          MR_Word Var_29;

          InstMapDelta0_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta0_27);
          if (succeeded)
            hlds__instmap__instmap_delta_init_reachable_1_p_0(InstMapDelta_16);
          else
            hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_16);
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, SubGoal0_26, &SubGoal_28, VarTypes_14, InstMap0_15, &Var_29, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
          *GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_28);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 0)));
          MR_Word RHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 1)));
          MR_Word UniMode0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 2)));
          MR_Word Uni_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 3)));
          MR_Word Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 4)));
          MR_Word RHS_64;
          MR_Word UniMode_65;
          MR_Word STATE_VARIABLE_RI_120_120;

          switch (MR_tag((MR_Word) RHS0_60)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                RHS_64 = RHS0_60;
                STATE_VARIABLE_RI_120_120 = STATE_VARIABLE_RI_0_105;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Purity_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word Groundness_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word PorF_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word LambdaVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 3)));
                MR_Word Goal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 6)));
                MR_Word ModuleInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
                MR_Word InstMap_73;
                MR_Word Goal_74;
                MR_Word Det_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 5)));
                MR_Word NonLocals_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 2)));
                MR_Word Modes_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_60, (MR_Integer) 4)));
                MR_Word Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));
                MR_Word Var_75;

                hlds__instmap__pre_lambda_update_5_p_0(ModuleInfo0_72, LambdaVars_70, Modes_152, InstMap0_15, &InstMap_73);
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, Goal0_71, &Goal_74, VarTypes_14, InstMap_73, &Var_75, STATE_VARIABLE_RI_0_105, &STATE_VARIABLE_RI_120_120);
                {
                  RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_64, 0) = ((MR_Box) ((Purity_66 | ((((Groundness_67 << (MR_Integer) 2)) | ((PorF_68 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), RHS_64, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), RHS_64, 2) = ((MR_Box) (NonLocals_151));
                  MR_hl_field(MR_mktag(2), RHS_64, 3) = ((MR_Box) (LambdaVars_70));
                  MR_hl_field(MR_mktag(2), RHS_64, 4) = ((MR_Box) (Modes_152));
                  MR_hl_field(MR_mktag(2), RHS_64, 5) = ((MR_Box) (Det_150));
                  MR_hl_field(MR_mktag(2), RHS_64, 6) = ((MR_Box) (Goal_74));
                }
              }
              break;
          }
          switch (RecomputeAtomic_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                UniMode_65 = UniMode0_61;
                *InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
                *STATE_VARIABLE_RI_106 = STATE_VARIABLE_RI_120_120;
              }
              break;
            case (MR_Integer) 0:
              check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(Uni_62, UniMode0_61, &UniMode_65, GoalInfo_13, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_120_120, STATE_VARIABLE_RI_106);
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_59));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_64));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UniMode_65));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Uni_62));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_63));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 0)));
          MR_Integer ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 1)));
          MR_Word Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 2)));
          MR_Word _BI_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 3)));
          MR_Word _UC_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 4)));
          MR_Word _Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 5)));

          check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(PredId_53, ProcId_54, Args_55, VarTypes_14, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
          *GoalExpr_12 = GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Modes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
              MR_Word Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5)));
              MR_Word Vars_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Word _Details_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
              MR_Word Var_191;
              MR_Word Var_51;

              parse_tree__prog_data__determinism_components_3_p_0(Detism_50, &Var_51, &Var_191);
              succeeded = ((MR_Integer) 0 == Var_191);
              if (succeeded)
                hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_16);
              else
              {
                MR_Word ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
                MR_Word Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));

                hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo_52, Vars_149, Modes_48, InstMapDelta_16);
              }
              *GoalExpr_12 = GoalExpr0_11;
              *STATE_VARIABLE_RI_106 = STATE_VARIABLE_RI_0_105;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
              MR_Word TypeInfo_185_185 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
              MR_Word ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5)));
              MR_Word ArgVars_84;
              MR_Word InstMapDelta0_159;
              MR_Word PredId_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Integer ProcId_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
              MR_Word Args_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
              MR_Word _Attr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word _MTRC_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 6)));
              MR_Word _Impl_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 7)));

              ArgVars_84 = mercury__list__map_2_f_0(TypeCtorInfo_184_184, TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[2], Args_162);
              check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(PredId_160, ProcId_161, ArgVars_84, VarTypes_14, InstMap0_15, &InstMapDelta0_159, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
              if ((ExtraArgs_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *InstMapDelta_16 = InstMapDelta0_159;
              else
              {
                MR_Word OldInstMapDelta_87;
                MR_Word ExtraArgVars_88;
                MR_Word ExtraArgsInstMapDelta_89;
                MR_Word Var_118;

                OldInstMapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
                ExtraArgVars_88 = mercury__list__map_2_f_0(TypeCtorInfo_184_184, TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[3], ExtraArgs_81);
                Var_118 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ExtraArgVars_88);
                hlds__instmap__instmap_delta_restrict_3_p_0(Var_118, OldInstMapDelta_87, &ExtraArgsInstMapDelta_89);
                hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDelta0_159, ExtraArgsInstMapDelta_89, (MR_Integer) 0, InstMapDelta_16);
              }
              *GoalExpr_12 = GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Word Goals_25;

              check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(RecomputeAtomic_10, Goals0_24, &Goals_25, VarTypes_14, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_23));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_25));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word Goals_145;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_13, (MR_Integer) 16);
              if (succeeded)
              {
                Goals_145 = Goals0_144;
                *InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
                *STATE_VARIABLE_RI_106 = STATE_VARIABLE_RI_0_105;
              }
              else
              {
                MR_Word NonLocals_141;

                NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
                check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(RecomputeAtomic_10, Goals0_144, &Goals_145, VarTypes_14, InstMap0_15, NonLocals_141, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_145));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word Det_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Word Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
              MR_Word Cases_21;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_13, (MR_Integer) 16);
              if (succeeded)
              {
                Cases_21 = Cases0_20;
                *InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
                *STATE_VARIABLE_RI_106 = STATE_VARIABLE_RI_0_105;
              }
              else
              {
                MR_Word NonLocals_22;

                NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
                check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(RecomputeAtomic_10, Var_18, Cases0_20, &Cases_21, VarTypes_14, InstMap0_15, NonLocals_22, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Det_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word SubGoal0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Word SubGoal_148;
              MR_Word FGT_44;
              MR_Word Var_43;

              succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 1)));
                FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 2)));
                switch (FGT_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoalInfo_46;
                      MR_Word Var_45;

                      SubGoal_148 = SubGoal0_147;
                      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_148, (MR_Integer) 0)));
                      SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_148, (MR_Integer) 1)));
                      *InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_46);
                      *STATE_VARIABLE_RI_106 = STATE_VARIABLE_RI_0_105;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "from_ground_term_initial");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, SubGoal0_147, &SubGoal_148, VarTypes_14, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
                    break;
                }
              }
              else
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, SubGoal0_147, &SubGoal_148, VarTypes_14, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_42));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_148));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word Cond0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
              MR_Word Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
              MR_Word Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
              MR_Word Cond_34;
              MR_Word InstMapDeltaCond_35;
              MR_Word InstMapCond_36;
              MR_Word Then_37;
              MR_Word InstMapDeltaThen_38;
              MR_Word Else_39;
              MR_Word InstMapDeltaElse_40;
              MR_Word InstMapDeltaCondThen_41;
              MR_Word STATE_VARIABLE_RI_129_129;
              MR_Word STATE_VARIABLE_RI_130_130;
              MR_Word STATE_VARIABLE_RI_131_131;
              MR_Word NonLocals_146;

              check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, Cond0_31, &Cond_34, VarTypes_14, InstMap0_15, &InstMapDeltaCond_35, STATE_VARIABLE_RI_0_105, &STATE_VARIABLE_RI_129_129);
              hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_15, InstMapDeltaCond_35, &InstMapCond_36);
              check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, Then0_32, &Then_37, VarTypes_14, InstMapCond_36, &InstMapDeltaThen_38, STATE_VARIABLE_RI_129_129, &STATE_VARIABLE_RI_130_130);
              check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, Else0_33, &Else_39, VarTypes_14, InstMap0_15, &InstMapDeltaElse_40, STATE_VARIABLE_RI_130_130, &STATE_VARIABLE_RI_131_131);
              hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDeltaCond_35, InstMapDeltaThen_38, (MR_Integer) 2, &InstMapDeltaCondThen_41);
              NonLocals_146 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
              check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(InstMap0_15, NonLocals_146, VarTypes_14, InstMapDeltaElse_40, InstMapDeltaCondThen_41, InstMapDelta_16, STATE_VARIABLE_RI_131_131, STATE_VARIABLE_RI_106);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_34));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_37));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_39));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ShortHand_100;

              switch (MR_tag((MR_Word) ShortHand0_90)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 0)));
                    MR_Word Outer_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 1)));
                    MR_Word Inner_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 2)));
                    MR_Word MaybeOutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 3)));
                    MR_Word MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 4)));
                    MR_Word OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 5)));
                    MR_Word OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 6)));
                    MR_Word MainGoal_98;
                    MR_Word OrElseGoals_99;
                    MR_Word NonLocals_163;
                    MR_Word Goals0_164;
                    MR_Word Goals_165;

                    {
                      Goals0_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Goals0_164, 0) = ((MR_Box) (MainGoal0_95));
                      MR_hl_field(MR_mktag(1), Goals0_164, 1) = ((MR_Box) (OrElseGoals0_96));
                    }
                    NonLocals_163 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
                    check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(RecomputeAtomic_10, Goals0_164, &Goals_165, VarTypes_14, InstMap0_15, NonLocals_163, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
                    if ((Goals_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "Goals = []");
                        return;
                      }
                    }
                    else
                    {
                      MainGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_165, (MR_Integer) 0)));
                      OrElseGoals_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_165, (MR_Integer) 1)));
                    }
                    {
                      ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 0) = ((MR_Box) (GoalType_91));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 1) = ((MR_Box) (Outer_92));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 2) = ((MR_Box) (Inner_93));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 3) = ((MR_Box) (MaybeOutputVars_94));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 4) = ((MR_Box) (MainGoal_98));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 5) = ((MR_Box) (OrElseGoals_99));
                      MR_hl_field(MR_mktag(1), ShortHand_100, 6) = ((MR_Box) (OrElseInners_97));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 0)));
                    MR_Word ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 1)));
                    MR_Word SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 2)));
                    MR_Word SubGoal_167;

                    check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_10, SubGoal0_166, &SubGoal_167, VarTypes_14, InstMap0_15, InstMapDelta_16, STATE_VARIABLE_RI_0_105, STATE_VARIABLE_RI_106);
                    {
                      ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_100, 0) = ((MR_Box) (MaybeIO_101));
                      MR_hl_field(MR_mktag(2), ShortHand_100, 1) = ((MR_Box) (ResultVar_102));
                      MR_hl_field(MR_mktag(2), ShortHand_100, 2) = ((MR_Box) (SubGoal_167));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_100));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstMap0_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_39,
  MR_Word * STATE_VARIABLE_RI_40)
{
  {
    MR_bool succeeded = (RecomputeAtomic_9 == (MR_Integer) 1);
    MR_Word GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0)));
    MR_Word GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1)));
    MR_Word GoalExpr_32;
    MR_Word GoalInfo1_33;
    MR_Word GoalInfo_38;
    MR_Word Var_41;
    MR_Word RHS_19;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      Var_41 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_16);
      succeeded = (Var_41 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 0)));
          RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 1)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 3)));
          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 4)));
          succeeded = ((MR_tag((MR_Word) RHS_19)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 0)))) & (MR_Integer) 3);
            Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 2)));
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 3)));
            Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 4)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 5)));
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_19, (MR_Integer) 6)));
          }
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      GoalExpr_32 = GoalExpr0_16;
      GoalInfo1_33 = GoalInfo0_17;
      *STATE_VARIABLE_RI_40 = STATE_VARIABLE_RI_0_39;
    }
    else
    {
      MR_Word InstMapDelta0_34;
      MR_Word NonLocals_35;
      MR_Word InstMapDelta1_36;

      check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(RecomputeAtomic_9, GoalExpr0_16, &GoalExpr_32, GoalInfo0_17, VarTypes_12, InstMap0_13, &InstMapDelta0_34, STATE_VARIABLE_RI_0_39, STATE_VARIABLE_RI_40);
      NonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
      hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_35, InstMapDelta0_34, &InstMapDelta1_36);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta1_36, GoalInfo0_17, &GoalInfo1_33);
    }
    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap0_13);
    if (succeeded)
    {
      MR_Word UnreachableInstMapDelta_37;

      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&UnreachableInstMapDelta_37);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(UnreachableInstMapDelta_37, GoalInfo1_33, &GoalInfo_38);
    }
    else
      GoalInfo_38 = GoalInfo1_33;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
    }
    *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_38);
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word * R_6,
  MR_Word STATE_VARIABLE_RI_0_10,
  MR_Word * STATE_VARIABLE_RI_11)
{
  {
    MR_Word ModuleInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
    MR_Word ModuleInfo_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
    MR_Word Var_15;
    MR_Word Var_14;

    hlds__instmap__merge_instmap_delta_8_p_0(Var_17, Var_18, Var_19, Var_20, Var_21, R_6, ModuleInfo0_8, &ModuleInfo_9);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_65;

    check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_65);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_65));
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
  MR_Word Unification_9,
  MR_Word UniMode0_10,
  MR_Word * UniMode_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_55,
  MR_Word * STATE_VARIABLE_RI_56)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_55, (MR_Integer) 0)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_55, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) Unification_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 0)));
          MR_Word ConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 1)));
          MR_Word Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 2)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 3)));
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 4)));
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 5)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 6)));
          MR_Word Inst_46;
          MR_Word TypeInfo_80_80;
          MR_Word NonLocals_43;
          MR_Word MaybeInst_45;
          MR_Integer Var_57;
          MR_Word OldInstMapDelta_71;
          MR_Word Var_44;

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_43, Var_36);
          if (succeeded)
          {
            OldInstMapDelta_71 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
            succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OldInstMapDelta_71, Var_36, &Var_44);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_80_80 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
              Var_57 = mercury__list__length_1_f_0(TypeInfo_80_80, Args_38);
              MaybeInst_45 = check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(ModuleInfo0_16, ConsId_37, Var_57);
              succeeded = ((MR_tag((MR_Word) MaybeInst_45)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                Inst_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_45, (MR_Integer) 0)));
            }
          }
          if (succeeded)
          {
            MR_Word InstMapDelta0_47;

            *UniMode_11 = UniMode0_10;
            hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_47);
            hlds__instmap__instmap_delta_set_var_4_p_0(Var_36, Inst_46, InstMapDelta0_47, InstMapDelta_14);
          }
          else
          {
            *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
            *UniMode_11 = UniMode0_10;
          }
          *STATE_VARIABLE_RI_56 = STATE_VARIABLE_RI_0_55;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 0)));
          MR_Word RHSVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 2)));
          MR_Word ArgModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 3)));
          MR_Word OldInstMapDelta_23;
          MR_Word LHSInitialInst_24;
          MR_Word LHSFinalInst_29;
          MR_Word ModuleInfo_30;
          MR_Word RHSFromToInsts_35;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word _ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 1)));
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 4)));
          MR_Word _CanCGC_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 5)));
          MR_Word DeltaInst_25;

          OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap_13, LHSVar_17, &LHSInitialInst_24);
          succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OldInstMapDelta_23, LHSVar_17, &DeltaInst_25);
          if (succeeded)
          {
            MR_Word LHSFinalInstPrime_26;
            MR_Word ModuleInfo1_28;
            MR_Word _Detism_27;

            succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, LHSInitialInst_24, DeltaInst_25, (MR_Integer) 1, &LHSFinalInstPrime_26, &_Detism_27, ModuleInfo0_16, &ModuleInfo1_28);
            if (succeeded)
            {
              MR_Word Var_76;
              MR_Word Var_75;

              LHSFinalInst_29 = LHSFinalInstPrime_26;
              ModuleInfo_30 = ModuleInfo1_28;
              Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_55, (MR_Integer) 0)));
              Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_55, (MR_Integer) 1)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_RI_56 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_30));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_76));
              }
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_unify\'/8", (MR_String) "abstractly_unify_inst failed");
                return;
              }
            }
          }
          else
          {
            LHSFinalInst_29 = LHSInitialInst_24;
            ModuleInfo_30 = ModuleInfo0_16;
            *STATE_VARIABLE_RI_56 = STATE_VARIABLE_RI_0_55;
          }
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0, (MR_Word) &check_hlds__mode_util_scalar_common_3[1], ArgModes_20, &RHSFromToInsts_35);
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LHSVar_17));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (RHSVars_19));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (LHSInitialInst_24));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (LHSFinalInst_29));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (RHSFromToInsts_35));
          }
          hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(ModuleInfo_30, Var_66, Var_67, InstMapDelta_14);
          *UniMode_11 = UniMode0_10;
        }
        break;
      case (MR_Integer) 2:
        {
          *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          *UniMode_11 = UniMode0_10;
          *STATE_VARIABLE_RI_56 = STATE_VARIABLE_RI_0_55;
        }
        break;
      case (MR_Integer) 3:
        {
          *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          *UniMode_11 = UniMode0_10;
          *STATE_VARIABLE_RI_56 = STATE_VARIABLE_RI_0_55;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Integer NumArgs_7)
{
  {
    MR_Word MaybeInst_8;

    switch (MR_tag((MR_Word) ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_4[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_4[0]);
        }
        break;
      case (MR_Integer) 2:
        {
          MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_4[0]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
            {
              MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_4[0]);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredProcId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));
              MR_Word PredInfo_27;
              MR_Word ProcInfo_28;
              MR_Word PorF_29;
              MR_Word Det_30;
              MR_Word ProcArgModes_31;
              MR_Word Modes_32;
              MR_Word Inst_33;
              MR_Word Var_52;
              MR_Word Var_54;
              MR_Word Var_55;

              Var_52 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(PredProcId_25);
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, Var_52, &PredInfo_27, &ProcInfo_28);
              PorF_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Det_30);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &ProcArgModes_31);
              mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, NumArgs_7, ProcArgModes_31, &Modes_32);
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (PorF_29));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Modes_32));
                MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Det_30));
              }
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_55);
              {
                Inst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Inst_33, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Inst_33, 2) = ((MR_Box) (Var_54));
              }
              {
                MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeInst_8, 0) = ((MR_Box) (Inst_33));
              }
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              MR_Word Var_60;
              MR_Word Var_63;
              MR_Word Var_64;

              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (ConsId_6));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), Var_60, 3) = ((MR_Box) (Var_63));
              }
              {
                MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeInst_8, 0) = ((MR_Box) (Var_60));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
            }
            break;
        }
        break;
    }
    return MaybeInst_8;
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Args_11,
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_34,
  MR_Word * STATE_VARIABLE_RI_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
    MR_Word ProcInfo_18;
    MR_Word Detism_19;
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
    MR_Word Var_17;
    MR_Word Var_52;
    MR_Word Var_20;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_16, PredId_9, ProcId_10, &Var_17, &ProcInfo_18);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &Detism_19);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &Var_20, &Var_52);
    succeeded = ((MR_Integer) 0 == Var_52);
    if (succeeded)
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_14);
      *STATE_VARIABLE_RI_35 = STATE_VARIABLE_RI_0_34;
    }
    else
    {
      MR_Word ArgModes0_21;
      MR_Word ProcInstVarSet_22;
      MR_Word InstVarSet0_23;
      MR_Word InstVarSet_24;
      MR_Word ArgModes1_25;
      MR_Word InitialInsts_26;
      MR_Word ArgModes_31;
      MR_Word ModuleInfo_32;
      MR_Word STATE_VARIABLE_RI_37_37;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ArgModes0_21);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_18, &ProcInstVarSet_22);
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
      InstVarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_23, ProcInstVarSet_22, &InstVarSet_24, ArgModes0_21, &ArgModes1_25);
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
      {
        STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (InstVarSet_24));
      }
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_16, ArgModes1_25, &InitialInsts_26);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_13);
      if (succeeded)
      {
        MR_Word InstVarSub0_27;
        MR_Word InstVarSub_28;
        MR_Word ModuleInfo1_29;
        MR_Word ArgModes2_30;
        MR_Word Var_47;
        MR_Word Var_46;

        mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &InstVarSub0_27);
        check_hlds__mode_util__compute_inst_var_sub_8_p_0(Args_11, VarTypes_12, InstMap_13, InitialInsts_26, InstVarSub0_27, &InstVarSub_28, ModuleInfo0_16, &ModuleInfo1_29);
        parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(InstVarSub_28, ArgModes1_25, &ArgModes2_30);
        check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(Args_11, InstMap_13, ArgModes2_30, &ArgModes_31, ModuleInfo1_29, &ModuleInfo_32);
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, (MR_Integer) 0)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_RI_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_Integer NumArgs_33;

        mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[2], Args_11, &NumArgs_33);
        mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, NumArgs_33, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[7])), &ArgModes_31);
        ModuleInfo_32 = ModuleInfo0_16;
        *STATE_VARIABLE_RI_35 = STATE_VARIABLE_RI_37_37;
      }
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo_32, Args_11, ArgModes_31, InstMapDelta_14);
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Mode_36;
        MR_Word Modes_37;
        MR_Word ArgInst0_39;
        MR_Word FinalInst_41;
        MR_Word STATE_VARIABLE_ModuleInfo_52_52;
        MR_Word Var_40;
        MR_Word UnifyInst_42;
        MR_Word STATE_VARIABLE_ModuleInfo_48_48;
        MR_Word Var_43;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, Var_55, &ArgInst0_39);
        check_hlds__mode_util__mode_get_insts_4_p_0(STATE_VARIABLE_ModuleInfo_0_5, Mode0_34, &Var_40, &FinalInst_41);
        succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, ArgInst0_39, FinalInst_41, (MR_Integer) 1, &UnifyInst_42, &Var_43, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_48_48);
        if (succeeded)
        {
          STATE_VARIABLE_ModuleInfo_52_52 = STATE_VARIABLE_ModuleInfo_48_48;
          {
            Mode_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Mode_36, 0) = ((MR_Box) (ArgInst0_39));
            MR_hl_field(MR_mktag(0), Mode_36, 1) = ((MR_Box) (UnifyInst_42));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "unify_inst failed");
            return;
          }
        }
        check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(Var_54, InstMap_2, Modes0_35, &Modes_37, STATE_VARIABLE_ModuleInfo_52_52, STATE_VARIABLE_ModuleInfo_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_37));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Sub_0_5,
  MR_Word * STATE_VARIABLE_Sub_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
        *STATE_VARIABLE_Sub_6 = STATE_VARIABLE_Sub_0_5;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Inst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        MR_Word Insts_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ArgInst_53;
        MR_Word Type_54;
        MR_Word STATE_VARIABLE_ModuleInfo_61_61;
        MR_Word STATE_VARIABLE_Sub_62_62;
        MR_Word STATE_VARIABLE_ModuleInfo_59_59;
        MR_Word STATE_VARIABLE_Sub_60_60;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Sub_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_3, Var_66, &ArgInst_53);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_66, &Type_54);
        succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(ArgInst_53, Inst_47, Type_54, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_59_59, STATE_VARIABLE_Sub_0_5, &STATE_VARIABLE_Sub_60_60);
        if (succeeded)
        {
          STATE_VARIABLE_ModuleInfo_61_61 = STATE_VARIABLE_ModuleInfo_59_59;
          STATE_VARIABLE_Sub_62_62 = STATE_VARIABLE_Sub_60_60;
        }
        else
        {
          STATE_VARIABLE_ModuleInfo_61_61 = STATE_VARIABLE_ModuleInfo_0_7;
          STATE_VARIABLE_Sub_62_62 = STATE_VARIABLE_Sub_0_5;
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_65;
        next_value_of_HeadVar__4_4 = Insts_48;
        next_value_of_STATE_VARIABLE_Sub_0_5 = STATE_VARIABLE_Sub_62_62;
        next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_61_61;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Sub_0_5 = next_value_of_STATE_VARIABLE_Sub_0_5;
        STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_final_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Inst_8;
    MR_Word Insts_9;
    MR_Word Var_10;

    check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Mode_6, &Var_10, &Inst_8);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(HeadVar__1_1, Modes_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Inst_8;
    MR_Word Insts_9;
    MR_Word Var_10;

    check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Mode_6, &Inst_8, &Var_10);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(HeadVar__1_1, Modes_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_final_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  {
    MR_Word Inst_6;
    MR_Word Var_7;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_5, &Var_7, &Inst_6);
    return Inst_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_initial_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  {
    MR_Word Inst_6;
    MR_Word Var_7;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_5, &Inst_6, &Var_7);
    return Inst_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__select_output_things_4_f_0(
  MR_Word TypeInfo_for_Thing_28,
  MR_Word ModuleInfo_6,
  MR_Word HeadThings_7,
  MR_Word HeadModes_8,
  MR_Word ThingTypes_9)
{
  while (MR_TRUE)
  {
    MR_Word OutputThings_10;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadThings_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
      }
    else
    {
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadThings_7, (MR_Integer) 1)));
      MR_Box Var_31 = (MR_hl_field(MR_mktag(1), HeadThings_7, (MR_Integer) 0));

      if ((HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
      }
      else
      {
        MR_Word Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadModes_8, (MR_Integer) 0)));
        MR_Word Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadModes_8, (MR_Integer) 1)));
        MR_Word ThingType_15;
        MR_Word Top_16;
        MR_Word InitialInst_36;
        MR_Word FinalInst_37;
        MR_Box conv0_ThingType_15;

        mercury__map__lookup_3_p_0(TypeInfo_for_Thing_28, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ThingTypes_9, Var_31, &conv0_ThingType_15);
        ThingType_15 = ((MR_Word) conv0_ThingType_15);
        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_6, Mode_13, &InitialInst_36, &FinalInst_37);
        check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_6, ThingType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InitialInst_36, FinalInst_37, &Top_16);
        switch (Top_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadThings_7 = Var_30;
              MR_Word next_value_of_HeadModes_8 = Modes_14;

              // direct tailcall eliminated
              HeadThings_7 = next_value_of_HeadThings_7;
              HeadModes_8 = next_value_of_HeadModes_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OutputThings1_17;

              OutputThings1_17 = check_hlds__mode_util__select_output_things_4_f_0(TypeInfo_for_Thing_28, ModuleInfo_6, Var_30, Modes_14, ThingTypes_9);
              {
                OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), OutputThings_10, 0) = Var_31;
                MR_hl_field(MR_mktag(1), OutputThings_10, 1) = ((MR_Box) (OutputThings1_17));
              }
            }
            break;
        }
      }
    }
    return OutputThings_10;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__select_output_vars_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVars_7,
  MR_Word HeadModes_8,
  MR_Word VarTypes_9)
{
  while (MR_TRUE)
  {
    MR_Word OutputVars_10;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
      }
    else
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVars_7, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVars_7, (MR_Integer) 0)));

      if ((HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
      }
      else
      {
        MR_Word Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadModes_8, (MR_Integer) 0)));
        MR_Word Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadModes_8, (MR_Integer) 1)));
        MR_Word VarType_15;
        MR_Word Top_16;
        MR_Word InitialInst_34;
        MR_Word FinalInst_35;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, Var_29, &VarType_15);
        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_6, Mode_13, &InitialInst_34, &FinalInst_35);
        check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_6, VarType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InitialInst_34, FinalInst_35, &Top_16);
        switch (Top_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVars_7 = Var_28;
              MR_Word next_value_of_HeadModes_8 = Modes_14;

              // direct tailcall eliminated
              HeadVars_7 = next_value_of_HeadVars_7;
              HeadModes_8 = next_value_of_HeadModes_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OutputVars1_17;

              OutputVars1_17 = check_hlds__mode_util__select_output_vars_4_f_0(ModuleInfo_6, Var_28, Modes_14, VarTypes_9);
              {
                OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), OutputVars_10, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), OutputVars_10, 1) = ((MR_Box) (OutputVars1_17));
              }
            }
            break;
        }
      }
    }
    return OutputVars_10;
    break;
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FromToInsts_6,
  MR_Word Type_7,
  MR_Word * TopFunctorMode_8)
{
  {
    MR_Word InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_6, (MR_Integer) 0)));
    MR_Word FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_6, (MR_Integer) 1)));

    check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_5, Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InitialInst_9, FinalInst_10, TopFunctorMode_8);
  }
}

void MR_CALL 
check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Mode_6,
  MR_Word Type_7,
  MR_Word * TopFunctorMode_8)
{
  {
    MR_Word InitialInst_9;
    MR_Word FinalInst_10;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode_6, &InitialInst_9, &FinalInst_10);
    check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_5, Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InitialInst_9, FinalInst_10, TopFunctorMode_8);
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word TopFunctorMode_25;
      MR_Word TopFunctorModes_26;
      MR_Word InitialInst_33;
      MR_Word FinalInst_34;

      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Var_28, &InitialInst_33, &FinalInst_34);
      check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(HeadVar__1_1, Type_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InitialInst_33, FinalInst_34, &TopFunctorMode_25);
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(HeadVar__1_1, Var_27, Types_24, &TopFunctorModes_26);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TopFunctorMode_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TopFunctorModes_26));
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word ContainingTypes_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * TopFunctorMode_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FunctorName_13;
    MR_Word ArgType_14;
    MR_Word TypeCtor_15;
    MR_Word TypeCtorInfo_21_21;

    // setup for model_det tailcalls optimized into a loop
    succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_7, Type_8, &FunctorName_13, &ArgType_14);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_8, &TypeCtor_15);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (TypeCtor_15)), ContainingTypes_9);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ConsId_16;
      MR_Word InitialArgInst_17;
      MR_Word FinalArgInst_18;
      MR_Word Var_20;
      MR_Word next_value_of_Type_8;
      MR_Word next_value_of_ContainingTypes_9;
      MR_Word next_value_of_InitialInst_10;
      MR_Word next_value_of_FinalInst_11;

      {
        ConsId_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_16, 1) = ((MR_Box) (FunctorName_13));
        MR_hl_field(MR_mktag(3), ConsId_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ConsId_16, 3) = ((MR_Box) (TypeCtor_15));
      }
      check_hlds__mode_util__get_single_arg_inst_4_p_0(ModuleInfo_7, InitialInst_10, ConsId_16, &InitialArgInst_17);
      check_hlds__mode_util__get_single_arg_inst_4_p_0(ModuleInfo_7, FinalInst_11, ConsId_16, &FinalArgInst_18);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (TypeCtor_15));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (ContainingTypes_9));
      }
      // direct tailcall eliminated
      next_value_of_Type_8 = ArgType_14;
      next_value_of_ContainingTypes_9 = Var_20;
      next_value_of_InitialInst_10 = InitialArgInst_17;
      next_value_of_FinalInst_11 = FinalArgInst_18;
      Type_8 = next_value_of_Type_8;
      ContainingTypes_9 = next_value_of_ContainingTypes_9;
      InitialInst_10 = next_value_of_InitialInst_10;
      FinalInst_11 = next_value_of_FinalInst_11;
      continue;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_7, InitialInst_10);
      if (succeeded)
        *TopFunctorMode_12 = (MR_Integer) 0;
      else
      {
        succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_7, FinalInst_11);
        if (succeeded)
          *TopFunctorMode_12 = (MR_Integer) 1;
        else
          *TopFunctorMode_12 = (MR_Integer) 2;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word ConsId_7,
  MR_Word * ArgInst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        *ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ArgInst_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Uniq_32));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word List_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3)));
              MR_Word _Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1)));
              MR_Word _InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2)));
              MR_Word ArgInst0_16;

              succeeded = check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(List_15, ConsId_7, &ArgInst0_16);
              if (succeeded)
                *ArgInst_8 = ArgInst0_16;
              else
                *ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1)));
              MR_Word _PredInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ArgInst_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "inst_var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InsideInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2)));
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1)));
              MR_Word next_value_of_Inst_6 = InsideInst_23;

              // direct tailcall eliminated
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1)));
              MR_Word NamedInst_10;
              MR_Word next_value_of_Inst_6;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_9, &NamedInst_10);
              // direct tailcall eliminated
              next_value_of_Inst_6 = NamedInst_10;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "abstract insts not supported");
                return;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInst_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word BoundInst_4;
    MR_Word BoundInsts_5;
    MR_Word ArgInst0_9;
    MR_Word InstConsId_8;
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      InstConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 0)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1)));
        succeeded = (Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_6, InstConsId_8);
      }
      if (succeeded)
      {
        *ArgInst_7 = ArgInst0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundInsts_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(ModuleInfo_6, Subst_7, Type_8, Inst0_9, Inst_10);
}

void MR_CALL 
check_hlds__mode_util__inst_lookup_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstName_5,
  MR_Word * Inst_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstName_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_5, (MR_Integer) 0)));
          MR_Word Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_5, (MR_Integer) 1)));
          MR_Word UserInstTable_33;
          MR_Integer Arity_34;
          MR_Word InstTable_66;
          MR_Word InstDefn_35;
          MR_Word Var_48;
          MR_Box conv0_InstDefn_35;

          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_66);
          hlds__hlds_data__inst_table_get_user_insts_2_p_0(InstTable_66, &UserInstTable_33);
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Args_32, &Arity_34);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Name_31));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Arity_34));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, UserInstTable_33, ((MR_Box) (Var_48)), &conv0_InstDefn_35);
          if (succeeded)
          {
            InstDefn_35 = ((MR_Word) conv0_InstDefn_35);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Params_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 1)));
            MR_Word InstBody_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 2)));
            MR_Word _VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 0)));
            MR_Word _MMTC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 3)));
            MR_Word _Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 4)));
            MR_Word _Status_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_35, (MR_Integer) 5)));

            check_hlds__mode_util__inst_lookup_subst_args_5_p_0(InstBody_38, Params_37, Name_31, Args_32, Inst_6);
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_31));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_32));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_5, (MR_Integer) 0)));
          MR_Word Real_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_5, (MR_Integer) 1)));
          MR_Word InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_5, (MR_Integer) 2)));
          MR_Word InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_5, (MR_Integer) 3)));
          MR_Word UnifyInstInfo_11;
          MR_Word InstTable_12;
          MR_Word UnifyInstTable_13;
          MR_Word MaybeInstDet_14;

          {
            UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnifyInstInfo_11, 0) = ((MR_Box) (Live_7));
            MR_hl_field(MR_mktag(0), UnifyInstInfo_11, 1) = ((MR_Box) (Real_8));
            MR_hl_field(MR_mktag(0), UnifyInstInfo_11, 2) = ((MR_Box) (InstA_9));
            MR_hl_field(MR_mktag(0), UnifyInstInfo_11, 3) = ((MR_Box) (InstB_10));
          }
          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_12);
          hlds__hlds_data__inst_table_get_unify_insts_2_p_0(InstTable_12, &UnifyInstTable_13);
          hlds__hlds_data__lookup_unify_inst_3_p_0(UnifyInstTable_13, UnifyInstInfo_11, &MaybeInstDet_14);
          if ((MaybeInstDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
            }
          else
          {
            MR_Word Var_15;

            *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_14, (MR_Integer) 0)));
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_14, (MR_Integer) 1)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MergeInstInfo_16;
          MR_Word MergeInstTable_17;
          MR_Word MaybeInst_18;
          MR_Word InstA_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_5, (MR_Integer) 0)));
          MR_Word InstB_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_5, (MR_Integer) 1)));
          MR_Word InstTable_51;

          {
            MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MergeInstInfo_16, 0) = ((MR_Box) (InstA_49));
            MR_hl_field(MR_mktag(0), MergeInstInfo_16, 1) = ((MR_Box) (InstB_50));
          }
          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_51);
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(InstTable_51, &MergeInstTable_17);
          hlds__hlds_data__lookup_merge_inst_3_p_0(MergeInstTable_17, MergeInstInfo_16, &MaybeInst_18);
          if ((MaybeInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
            }
          else
            *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_18, (MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));
              MR_Word Uniq_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word GroundInstInfo_21;
              MR_Word GroundInstTable_22;
              MR_Word Live_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Real_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word InstTable_54;
              MR_Word MaybeInstDet_55;

              {
                GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundInstInfo_21, 0) = ((MR_Box) (SubInstName_19));
                MR_hl_field(MR_mktag(0), GroundInstInfo_21, 1) = ((MR_Box) ((Uniq_20 | ((((Live_52 << (MR_Integer) 3)) | ((Real_53 << (MR_Integer) 4)))))));
              }
              hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_54);
              hlds__hlds_data__inst_table_get_ground_insts_2_p_0(InstTable_54, &GroundInstTable_22);
              hlds__hlds_data__lookup_ground_inst_3_p_0(GroundInstTable_22, GroundInstInfo_21, &MaybeInstDet_55);
              if ((MaybeInstDet_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
                }
              else
              {
                MR_Word Var_23;

                *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_55, (MR_Integer) 0)));
                Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_55, (MR_Integer) 1)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AnyInstInfo_24;
              MR_Word AnyInstTable_25;
              MR_Word Live_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Real_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word InstTable_58;
              MR_Word MaybeInstDet_59;
              MR_Word SubInstName_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));
              MR_Word Uniq_61 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);

              {
                AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AnyInstInfo_24, 0) = ((MR_Box) (SubInstName_60));
                MR_hl_field(MR_mktag(0), AnyInstInfo_24, 1) = ((MR_Box) ((Uniq_61 | ((((Live_56 << (MR_Integer) 3)) | ((Real_57 << (MR_Integer) 4)))))));
              }
              hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_58);
              hlds__hlds_data__inst_table_get_any_insts_2_p_0(InstTable_58, &AnyInstTable_25);
              hlds__hlds_data__lookup_any_inst_3_p_0(AnyInstTable_25, AnyInstInfo_24, &MaybeInstDet_59);
              if ((MaybeInstDet_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
                }
              else
              {
                MR_Word Var_26;

                *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_59, (MR_Integer) 0)));
                Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_59, (MR_Integer) 1)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SharedInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));
              MR_Word SharedInstTable_28;
              MR_Word InstTable_62;
              MR_Word MaybeInst_63;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_62);
              hlds__hlds_data__inst_table_get_shared_insts_2_p_0(InstTable_62, &SharedInstTable_28);
              hlds__hlds_data__lookup_shared_inst_3_p_0(SharedInstTable_28, SharedInstName_27, &MaybeInst_63);
              if ((MaybeInst_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
                }
              else
                *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_63, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word NondetLiveInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));
              MR_Word MostlyUniqInstTable_30;
              MR_Word InstTable_64;
              MR_Word MaybeInst_65;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_64);
              hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_64, &MostlyUniqInstTable_30);
              hlds__hlds_data__lookup_mostly_uniq_inst_3_p_0(MostlyUniqInstTable_30, NondetLiveInstName_29, &MaybeInst_65);
              if ((MaybeInst_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_5));
                }
              else
                *Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_65, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)));
              MR_Word Subst_43;
              MR_Word Var_46;
              MR_Word Uniq_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));

              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &Subst_43);
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Uniq_67));
                MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              succeeded = mercury__builtin__semidet_fail_0_p_0();
              if (succeeded)
              {
                MR_Word Type_82;
                MR_Word Constructors_83;

                check_hlds__mode_util__apply_type_subst_3_p_0(Type_42, Subst_43, &Type_82);
                succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_4, Type_82, &Constructors_83);
                if (succeeded)
                  check_hlds__mode_util__propagate_ctor_info_5_p_0(ModuleInfo_4, Type_82, Constructors_83, Var_46, Inst_6);
                else
                  *Inst_6 = Var_46;
              }
              else
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(ModuleInfo_4, Subst_43, Type_42, Var_46, Inst_6);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypedInstName_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 2)));
              MR_Word Inst0_45;
              MR_Word Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_5, (MR_Integer) 1)));
              MR_Word Subst_69;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, TypedInstName_44, &Inst0_45);
              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &Subst_69);
              succeeded = mercury__builtin__semidet_fail_0_p_0();
              if (succeeded)
              {
                MR_Word Type_89;
                MR_Word Constructors_90;

                check_hlds__mode_util__apply_type_subst_3_p_0(Type_68, Subst_69, &Type_89);
                succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_4, Type_89, &Constructors_90);
                if (succeeded)
                  check_hlds__mode_util__propagate_ctor_info_5_p_0(ModuleInfo_4, Type_89, Constructors_90, Inst0_45, Inst_6);
                else
                  *Inst_6 = Inst0_45;
              }
              else
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(ModuleInfo_4, Subst_69, Type_68, Inst0_45, Inst_6);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type0_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_ctor_info_lazily\'/5", (MR_String) "typeinfo already present");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0)));

          if ((Var_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word Type_63;
            MR_Word ArgTypes_60;
            MR_Word Var_88;
            MR_Word Var_18;

            check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_63);
            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_63, &Var_18, &Var_88, &ArgTypes_60);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_88);
            if (succeeded)
            {
              MR_Word Var_50;
              MR_Word HOInstInfo_59;

              check_hlds__mode_util__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_60, &HOInstInfo_59);
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) HOInstInfo_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_50));
              }
            }
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
          else
          {
            MR_Word Var_45;
            MR_Word Type_72;
            MR_Word PredInstInfo0_74 = (MR_Word) MR_body(((MR_Word) Var_91), (MR_Integer) 1);
            MR_Word PredOrFunc_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_74, (MR_Integer) 0)));
            MR_Word Modes0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_74, (MR_Integer) 1)));
            MR_Word MaybeArgRegs_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_74, (MR_Integer) 2)));
            MR_Word Det_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_74, (MR_Integer) 3)));
            MR_Word Modes_79;
            MR_Word PredInstInfo_80;
            MR_Word ArgTypes_70;
            MR_Word TypeCtorInfo_85_85;
            MR_Word TypeCtorInfo_86_86;
            MR_Word Var_90;
            MR_Word Var_29;

            check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_72);
            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_72, &Var_29, &Var_90, &ArgTypes_70);
            if (succeeded)
            {
              succeeded = (PredOrFunc_75 == Var_90);
              if (succeeded)
              {
                TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_85_85, TypeCtorInfo_86_86, ArgTypes_70, Modes0_76);
              }
            }
            if (succeeded)
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_70, Modes0_76, &Modes_79);
            else
              Modes_79 = Modes0_76;
            {
              PredInstInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_80, 0) = ((MR_Box) (PredOrFunc_75));
              MR_hl_field(MR_mktag(0), PredInstInfo_80, 1) = ((MR_Box) (Modes_79));
              MR_hl_field(MR_mktag(0), PredInstInfo_80, 2) = ((MR_Box) (MaybeArgRegs_77));
              MR_hl_field(MR_mktag(0), PredInstInfo_80, 3) = ((MR_Box) (Det_78));
            }
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) PredInstInfo_80);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_45));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_81;

              check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_81);
              check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(ModuleInfo_6, Type_81, Inst0_9, Inst_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2)));
              MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));

              if ((Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Type_13;
                MR_Word ArgTypes_16;
                MR_Word Var_87;
                MR_Word Var_14;

                check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_13);
                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_13, &Var_14, &Var_87, &ArgTypes_16);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_87);
                if (succeeded)
                {
                  MR_Word HOInstInfo_17;
                  MR_Word Var_54;

                  check_hlds__mode_util__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_16, &HOInstInfo_17);
                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) HOInstInfo_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_54));
                  }
                }
                else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              else
              {
                MR_Word PredInstInfo0_20 = (MR_Word) MR_body(((MR_Word) Var_93), (MR_Integer) 1);
                MR_Word PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 0)));
                MR_Word Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 1)));
                MR_Word MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 2)));
                MR_Word Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 3)));
                MR_Word Modes_27;
                MR_Word PredInstInfo_28;
                MR_Word Var_47;
                MR_Word Type_68;
                MR_Word ArgTypes_66;
                MR_Word TypeCtorInfo_83_83;
                MR_Word TypeCtorInfo_84_84;
                MR_Word Var_89;
                MR_Word Var_25;

                check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_68);
                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_68, &Var_25, &Var_89, &ArgTypes_66);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_21 == Var_89);
                  if (succeeded)
                  {
                    TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_83_83, TypeCtorInfo_84_84, ArgTypes_66, Modes0_22);
                  }
                }
                if (succeeded)
                  check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_66, Modes0_22, &Modes_27);
                else
                  Modes_27 = Modes0_22;
                {
                  PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 0) = ((MR_Box) (PredOrFunc_21));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 1) = ((MR_Box) (Modes_27));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 2) = ((MR_Box) (MaybeArgRegs_23));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 3) = ((MR_Box) (Det_24));
                }
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) PredInstInfo_28);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_47));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word V_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));
              MR_Word SubInst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2)));
              MR_Word SubInst_37;

              check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(ModuleInfo_6, Subst_7, Type0_8, SubInst0_36, &SubInst_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (V_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));
              MR_Word InstName_43;
              MR_Word Type_82;
              MR_Word Var_41;
              MR_Word Var_42;

              check_hlds__mode_util__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_82);
              succeeded = ((((MR_tag((MR_Word) InstName0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstName0_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName0_40, (MR_Integer) 1)));
                Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName0_40, (MR_Integer) 2)));
                InstName_43 = InstName0_40;
              }
              else
                {
                  InstName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), InstName_43, 1) = ((MR_Box) (Type_82));
                  MR_hl_field(MR_mktag(3), InstName_43, 2) = ((MR_Box) (InstName0_40));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_43));
              }
            }
            break;
          case (MR_Integer) 5:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Constructors_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_ctor_info\'/5", (MR_String) "type info already present");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1)));
          MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0)));

          if ((Var_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ArgTypes_80;
            MR_Word Var_118;
            MR_Word Var_21;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_21, &Var_118, &ArgTypes_80);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_118);
            if (succeeded)
            {
              MR_Word PredInstInfo_23;
              MR_Word Var_51;

              check_hlds__mode_util__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_80, &PredInstInfo_23);
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) PredInstInfo_23);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_51));
              }
            }
            else
            {
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word TypeCtor_76;
              MR_Word BoundInsts0_77;
              MR_Word BoundInsts_78;
              MR_Word InstResults_79;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_76);
              check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Var_122, TypeCtor_76, Constructors_8, &BoundInsts0_77);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, BoundInsts0_77, &BoundInsts_78);
              Var_55 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              }
              Var_57 = mercury__set__init_0_f_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1]);
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
              }
              Var_59 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              }
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) TypeCtor_76);
              {
                InstResults_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InstResults_79, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), InstResults_79, 1) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), InstResults_79, 2) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), InstResults_79, 3) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), InstResults_79, 4) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), InstResults_79, 5) = ((MR_Box) (Var_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_79));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_78));
              }
            }
          }
          else
          {
            MR_Word Var_46;
            MR_Word PredInstInfo_98;
            MR_Word PredInstInfo0_99 = (MR_Word) MR_body(((MR_Word) Var_121), (MR_Integer) 1);
            MR_Word PredOrFunc_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_99, (MR_Integer) 0)));
            MR_Word Modes0_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_99, (MR_Integer) 1)));
            MR_Word MaybeArgRegs_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_99, (MR_Integer) 2)));
            MR_Word Det_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_99, (MR_Integer) 3)));
            MR_Word Modes_104;
            MR_Word ArgTypes_95;
            MR_Word TypeCtorInfo_115_115;
            MR_Word TypeCtorInfo_116_116;
            MR_Word Var_120;
            MR_Word Var_32;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_32, &Var_120, &ArgTypes_95);
            if (succeeded)
            {
              succeeded = (PredOrFunc_100 == Var_120);
              if (succeeded)
              {
                TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_115_115, TypeCtorInfo_116_116, ArgTypes_95, Modes0_101);
              }
            }
            if (succeeded)
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_95, Modes0_101, &Modes_104);
            else
              Modes_104 = Modes0_101;
            {
              PredInstInfo_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_98, 0) = ((MR_Box) (PredOrFunc_100));
              MR_hl_field(MR_mktag(0), PredInstInfo_98, 1) = ((MR_Box) (Modes_104));
              MR_hl_field(MR_mktag(0), PredInstInfo_98, 2) = ((MR_Box) (MaybeArgRegs_102));
              MR_hl_field(MR_mktag(0), PredInstInfo_98, 3) = ((MR_Box) (Det_103));
            }
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) PredInstInfo_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_46));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(ModuleInfo_6, Type_7, Inst0_9, Inst_10);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2)));
              MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));

              if ((Var_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgTypes_15;
                MR_Word Var_117;
                MR_Word Var_13;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_13, &Var_117, &ArgTypes_15);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_117);
                if (succeeded)
                {
                  MR_Word HigherOrderInstInfo_16;
                  MR_Word Var_63;

                  check_hlds__mode_util__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_15, &HigherOrderInstInfo_16);
                  Var_63 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) HigherOrderInstInfo_16);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_124));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_63));
                  }
                }
                else
                {
                  MR_Word TypeCtor_17;
                  MR_Word BoundInsts0_18;
                  MR_Word BoundInsts_19;
                  MR_Word InstResults_20;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_72;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_17);
                  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Var_124, TypeCtor_17, Constructors_8, &BoundInsts0_18);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, BoundInsts0_18, &BoundInsts_19);
                  Var_67 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                  {
                    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                  }
                  Var_69 = mercury__set__init_0_f_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1]);
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                  }
                  Var_71 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                  }
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) TypeCtor_17);
                  {
                    InstResults_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), InstResults_20, 0) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(1), InstResults_20, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), InstResults_20, 2) = ((MR_Box) (Var_66));
                    MR_hl_field(MR_mktag(1), InstResults_20, 3) = ((MR_Box) (Var_68));
                    MR_hl_field(MR_mktag(1), InstResults_20, 4) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), InstResults_20, 5) = ((MR_Box) (Var_72));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_124));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_20));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_19));
                  }
                }
              }
              else
              {
                MR_Word PredInstInfo0_24 = (MR_Word) MR_body(((MR_Word) Var_123), (MR_Integer) 1);
                MR_Word PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 0)));
                MR_Word Modes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 1)));
                MR_Word MaybeArgRegs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 2)));
                MR_Word Det_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 3)));
                MR_Word Modes_31;
                MR_Word Var_48;
                MR_Word PredInstInfo_94;
                MR_Word ArgTypes_91;
                MR_Word TypeCtorInfo_113_113;
                MR_Word TypeCtorInfo_114_114;
                MR_Word Var_119;
                MR_Word Var_29;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_29, &Var_119, &ArgTypes_91);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_25 == Var_119);
                  if (succeeded)
                  {
                    TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_113_113, TypeCtorInfo_114_114, ArgTypes_91, Modes0_26);
                  }
                }
                if (succeeded)
                  check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_91, Modes0_26, &Modes_31);
                else
                  Modes_31 = Modes0_26;
                {
                  PredInstInfo_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_94, 0) = ((MR_Box) (PredOrFunc_25));
                  MR_hl_field(MR_mktag(0), PredInstInfo_94, 1) = ((MR_Box) (Modes_31));
                  MR_hl_field(MR_mktag(0), PredInstInfo_94, 2) = ((MR_Box) (MaybeArgRegs_27));
                  MR_hl_field(MR_mktag(0), PredInstInfo_94, 3) = ((MR_Box) (Det_28));
                }
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) PredInstInfo_94);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_48));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word V_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));
              MR_Word SubInst0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2)));
              MR_Word SubInst_40;

              check_hlds__mode_util__propagate_ctor_info_5_p_0(ModuleInfo_6, Type_7, Constructors_8, SubInst0_39, &SubInst_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (V_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_40));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1)));
              MR_Word NamedInst_44;
              MR_Word next_value_of_Inst0_9;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_6, InstName_43, &NamedInst_44);
              // direct tailcall eliminated
              next_value_of_Inst0_9 = NamedInst_44;
              Inst0_9 = next_value_of_Inst0_9;
              continue;
            }
            break;
          case (MR_Integer) 5:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word TypeCtor_3,
  MR_Word TypeModule_4,
  MR_Word Constructors_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word BoundInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
      MR_Word BoundInsts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
      MR_Word BoundInst_20;
      MR_Word BoundInsts_21;
      MR_Word ConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 0)));
      MR_Word ArgInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 1)));
      MR_Word ConsId_27;
      MR_String Name_24;
      MR_Integer ConsArity_25;
      MR_Word Var_40;
      MR_Word _ConsTypeCtor_26;
      MR_Word MatchingConstructor_31;
      MR_Word ConsName_28;
      MR_Integer Arity_29;
      MR_Word Var_30;

      succeeded = ((((MR_tag((MR_Word) ConsId0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 1)));
        ConsArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 2)));
        _ConsTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 3)));
        succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (TypeModule_4));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Name_24));
        }
        {
          ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_27, 1) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(3), ConsId_27, 2) = ((MR_Box) (ConsArity_25));
          MR_hl_field(MR_mktag(3), ConsId_27, 3) = ((MR_Box) (TypeCtor_3));
        }
      }
      else
        ConsId_27 = ConsId0_22;
      succeeded = ((((MR_tag((MR_Word) ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ConsName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 1)));
        Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 2)));
        Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 3)));
        succeeded = check_hlds__mode_util__find_first_matching_constructor_4_p_0(ConsName_28, Arity_29, Constructors_5, &MatchingConstructor_31);
      }
      if (succeeded)
      {
        MR_Word Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 3)));
        MR_Word ArgTypes_38;
        MR_Word ArgInsts_39;
        MR_Word _ExistQVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 0)));
        MR_Word _Constraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 1)));
        MR_Word _Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 2)));
        MR_Integer _Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 4)));
        MR_Word _Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 5)));

        check_hlds__mode_util__get_constructor_arg_types_2_p_0(Args_35, &ArgTypes_38);
        check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(ModuleInfo_1, Subst_2, ArgTypes_38, ArgInsts0_23, &ArgInsts_39);
        {
          BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_27));
          MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts_39));
        }
      }
      else
        {
          BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_27));
          MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts0_23));
        }
      check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(ModuleInfo_1, Subst_2, TypeCtor_3, TypeModule_4, Constructors_5, BoundInsts0_19, &BoundInsts_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_21));
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredArgTypes_5,
  MR_Word * PredInstInfo_6)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Integer NumPredArgs_10;
    MR_Integer NumFuncArgs_11;
    MR_Word FuncArgModes_12;
    MR_Word PredArgModes0_14;
    MR_Word PredArgModes_15;

    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, PredArgTypes_5, &NumPredArgs_10);
    NumFuncArgs_11 = (NumPredArgs_10 - (MR_Integer) 1);
    TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    mercury__list__duplicate_3_p_0(TypeCtorInfo_27_27, NumFuncArgs_11, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[4])), &FuncArgModes_12);
    mercury__list__append_3_p_1(TypeCtorInfo_27_27, FuncArgModes_12, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_1[6]), &PredArgModes0_14);
    check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_4, PredArgTypes_5, PredArgModes0_14, &PredArgModes_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *PredInstInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredArgModes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_8;

    check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_BoundInst_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_8));
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  {
    MR_bool succeeded;
    MR_Word Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1)));
    MR_Word InstResults0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2)));
    MR_Word BoundInsts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 3)));
    MR_Word BoundInsts_13;
    MR_Word PropagatedResult_14;
    MR_Word ConstructNewInst_15;
    MR_Word TupleArgTypes_12;

    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_6, &TupleArgTypes_12);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_64_64;
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (TupleArgTypes_12));
      }
      TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
      mercury__list__map_3_p_0(TypeCtorInfo_64_64, TypeCtorInfo_64_64, Var_44, BoundInsts0_11, &BoundInsts_13);
      PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ConstructNewInst_15 = (MR_Integer) 1;
    }
    else
    {
      MR_Word TypeCtor_16;
      MR_Word TypeArgs_17;
      MR_Word TypeModule_18;
      MR_Word TypeParams_23;
      MR_Word Constructors_25;
      MR_Word TypeTable_21;
      MR_Word TypeDefn_22;
      MR_Word TypeBody_24;
      MR_Word Var_45;
      MR_Integer Var_20;
      MR_String Var_19;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_16, &TypeArgs_17);
      if (succeeded)
      {
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 0)));
        Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0)));
          Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1)));
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_21);
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_21, TypeCtor_16, &TypeDefn_22);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_22, &TypeParams_23);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_22, &TypeBody_24);
            succeeded = ((MR_tag((MR_Word) TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Constructors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
              Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
              Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));
              Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 4)));
              Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 5)));
              Var_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
              Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 7)));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word PropagatedResult0_31;
        MR_Word PropagatedTypeCtor_32;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;

        succeeded = ((MR_tag((MR_Word) InstResults0_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 1)));
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 2)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 3)));
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 4)));
          PropagatedResult0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 5)));
          succeeded = ((MR_tag((MR_Word) PropagatedResult0_31)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PropagatedTypeCtor_32 = (MR_Word) MR_body(((MR_Word) PropagatedResult0_31), (MR_Integer) 1);
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor_32, TypeCtor_16);
            if (succeeded)
              succeeded = (TypeParams_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          BoundInsts_13 = BoundInsts0_11;
          PropagatedResult_14 = PropagatedResult0_31;
          ConstructNewInst_15 = (MR_Integer) 0;
        }
        else
        {
          MR_Word ArgSubst_33;
          MR_Word BoundInsts1_34;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_23, TypeArgs_17, &ArgSubst_33);
          check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(ModuleInfo_5, ArgSubst_33, TypeCtor_16, TypeModule_18, Constructors_25, BoundInsts0_11, &BoundInsts1_34);
          mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, BoundInsts1_34, &BoundInsts_13);
          PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) TypeCtor_16);
          ConstructNewInst_15 = (MR_Integer) 1;
        }
      }
      else
      {
        BoundInsts_13 = BoundInsts0_11;
        PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ConstructNewInst_15 = (MR_Integer) 0;
      }
    }
    switch (ConstructNewInst_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Inst_8 = Inst0_7;
        break;
      case (MR_Integer) 1:
        if ((BoundInsts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *Inst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        else
        {
          MR_Word InstResults_37;

          switch (MR_tag((MR_Word) InstResults0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults0_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), InstResults_37, 0) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(1), InstResults_37, 1) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(1), InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), InstResults_37, 5) = ((MR_Box) (PropagatedResult_14));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  InstResults_37 = InstResults0_10;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word GroundNessResult0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 0)));
                MR_Word ContainsAnyResult_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 1)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 2)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 3)));
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 4)));
                MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 5)));

                {
                  InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), InstResults_37, 0) = ((MR_Box) (GroundNessResult0_38));
                  MR_hl_field(MR_mktag(1), InstResults_37, 1) = ((MR_Box) (ContainsAnyResult_39));
                  MR_hl_field(MR_mktag(1), InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), InstResults_37, 5) = ((MR_Box) (PropagatedResult_14));
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Inst_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_9));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_37));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_13));
          }
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        MR_Word Insts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        MR_Word Inst_14;
        MR_Word Insts_15;

        succeeded = mercury__builtin__semidet_fail_0_p_0();
        if (succeeded)
        {
          MR_Word Type_37;
          MR_Word Constructors_38;

          check_hlds__mode_util__apply_type_subst_3_p_0(Var_31, Subst_2, &Type_37);
          succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_1, Type_37, &Constructors_38);
          if (succeeded)
            check_hlds__mode_util__propagate_ctor_info_5_p_0(ModuleInfo_1, Type_37, Constructors_38, Inst0_12, &Inst_14);
          else
            Inst_14 = Inst0_12;
        }
        else
          check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(ModuleInfo_1, Subst_2, Var_31, Inst0_12, &Inst_14);
        check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(ModuleInfo_1, Subst_2, Var_30, Insts0_13, &Insts_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_15));
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Modes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Mode_11;
      MR_Word Modes_12;
      MR_Word InitialInst0_31;
      MR_Word FinalInst0_32;
      MR_Word Subst_33;
      MR_Word InitialInst_34;
      MR_Word FinalInst_35;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode0_9, &InitialInst0_31, &FinalInst0_32);
      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &Subst_33);
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(ModuleInfo_1, Subst_33, Var_26, InitialInst0_31, &InitialInst_34);
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(ModuleInfo_1, Subst_33, Var_26, FinalInst0_32, &FinalInst_35);
      {
        Mode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mode_11, 0) = ((MR_Box) (InitialInst_34));
        MR_hl_field(MR_mktag(0), Mode_11, 1) = ((MR_Box) (FinalInst_35));
      }
      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_1, Var_25, Modes0_10, &Modes_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_12));
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__inst_lookup_subst_args_5_p_0(
  MR_Word InstBody_6,
  MR_Word Params_7,
  MR_Word Name_8,
  MR_Word Args_9,
  MR_Word * Inst_10)
{
  if ((InstBody_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *Inst_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_9));
    }
  else
  {
    MR_Word Inst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstBody_6, (MR_Integer) 0)));

    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_7, Args_9, Inst0_11, Inst_10);
  }
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Uniq_7));
      MR_hl_field(MR_mktag(2), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_8, Constructors_9, Var_11, BoundInsts_10);
  }
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Uniq_7));
      MR_hl_field(MR_mktag(3), Var_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_8, Constructors_9, Var_11, BoundInsts_10);
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgInst_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word BoundInst_17;
    MR_Word BoundInsts_18;
    MR_Word Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
    MR_Word Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
    MR_Word Insts_25;
    MR_Integer Arity_26;
    MR_Word Var_27;
    MR_Word _ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
    MR_Word _Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
    MR_Integer _Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));
    MR_Word _Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 5)));

    check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(Args_22, ArgInst_5, &Insts_25);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Insts_25, &Arity_26);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Name_21));
      MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (Arity_26));
      MR_hl_field(MR_mktag(3), Var_27, 3) = ((MR_Box) (TypeCtor_3));
    }
    {
      BoundInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_17, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), BoundInst_17, 1) = ((MR_Box) (Insts_25));
    }
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_3, Ctors_15, ArgInst_5, &BoundInsts_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_18));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inst_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Insts_8;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(Args_6, Inst_2, &Insts_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_2));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_8));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ArgType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1)));
    MR_Word ArgTypes_6;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 3)));

    check_hlds__mode_util__get_constructor_arg_types_2_p_0(Args_4, &ArgTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgType_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgTypes_6));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Ctor_10;
    MR_Word Ctors_11;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3)));
      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 5)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(HeadVar__1_1, Var_17);
      if (succeeded)
        succeeded = (HeadVar__2_2 == Var_18);
      if (succeeded)
      {
        *HeadVar__4_4 = Ctor_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Ctors_11;

        // direct tailcall eliminated
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
  MR_Word Type0_4,
  MR_Word Subst_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Subst_5);
    if (succeeded)
      *Type_6 = Type0_4;
    else
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_5, Type0_4, Type_6);
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word FromToInstsY_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word FromToInstsYs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word UnifyMode_20;
      MR_Word UnifyModes_21;

      {
        UnifyMode_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_20, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), UnifyMode_20, 1) = ((MR_Box) (FromToInstsY_18));
      }
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(Var_22, FromToInstsYs_19, &UnifyModes_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifyMode_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyModes_21));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_modes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ModeY_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ModeYs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word UnifyMode_25;
      MR_Word UnifyModes_26;
      MR_Word InitialX_33;
      MR_Word FinalX_34;
      MR_Word InitialY_35;
      MR_Word FinalY_36;
      MR_Word Var_37;
      MR_Word Var_38;

      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Var_28, &InitialX_33, &FinalX_34);
      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, ModeY_23, &InitialY_35, &FinalY_36);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (InitialX_33));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (FinalX_34));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (InitialY_35));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (FinalY_36));
      }
      {
        UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_25, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 1) = ((MR_Box) (Var_38));
      }
      check_hlds__mode_util__modes_to_unify_modes_4_p_0(HeadVar__1_1, Var_27, ModeYs_24, &UnifyModes_26);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifyMode_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyModes_26));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_mode_3_p_0(
  MR_Word FromToInstsX_4,
  MR_Word FromToInstsY_5,
  MR_Word * UnifyMode_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
    *UnifyMode_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FromToInstsX_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FromToInstsY_5));
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ModeX_6,
  MR_Word ModeY_7,
  MR_Word * UnifyMode_8)
{
  {
    MR_Word InitialX_9;
    MR_Word FinalX_10;
    MR_Word InitialY_11;
    MR_Word FinalY_12;
    MR_Word Var_13;
    MR_Word Var_14;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, ModeX_6, &InitialX_9, &FinalX_10);
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, ModeY_7, &InitialY_11, &FinalY_12);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (InitialX_9));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (FinalX_10));
    }
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (InitialY_11));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (FinalY_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *UnifyMode_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_rhs_from_to_insts_1_f_0(
  MR_Word UnifyMode_3)
{
  {
    MR_Word RHSFromToInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 1)));
    MR_Word _LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 0)));

    return RHSFromToInsts_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_lhs_from_to_insts_1_f_0(
  MR_Word UnifyMode_3)
{
  {
    MR_Word LHSFromToInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 0)));
    MR_Word _RHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 1)));

    return LHSFromToInsts_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_rhs_mode_1_f_0(
  MR_Word UnifyMode_3)
{
  {
    MR_Word RHSMode_4;
    MR_Word RHSFromToInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 1)));
    MR_Word RHSInitInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHSFromToInsts_6, (MR_Integer) 0)));
    MR_Word RHSFinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHSFromToInsts_6, (MR_Integer) 1)));
    MR_Word _LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 0)));

    {
      RHSMode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSMode_4, 0) = ((MR_Box) (RHSInitInst_7));
      MR_hl_field(MR_mktag(0), RHSMode_4, 1) = ((MR_Box) (RHSFinalInst_8));
    }
    return RHSMode_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_lhs_mode_1_f_0(
  MR_Word UnifyMode_3)
{
  {
    MR_Word LHSMode_4;
    MR_Word LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 0)));
    MR_Word LHSInitInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHSFromToInsts_5, (MR_Integer) 0)));
    MR_Word LHSFinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHSFromToInsts_5, (MR_Integer) 1)));
    MR_Word _RHSFromToInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 1)));

    {
      LHSMode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHSMode_4, 0) = ((MR_Box) (LHSInitInst_7));
      MR_hl_field(MR_mktag(0), LHSMode_4, 1) = ((MR_Box) (LHSFinalInst_8));
    }
    return LHSMode_4;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_unused_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word FromToInsts_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 0)));
    MR_Word FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_unused_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;
    MR_Word FinalInst_6;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_fully_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word FromToInsts_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 0)));
    MR_Word FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;
    MR_Word FinalInst_6;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word FromToInsts_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 0)));
    MR_Word FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;
    MR_Word FinalInst_6;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, FinalInst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_fully_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word FromToInsts_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 0)));
    MR_Word _FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitialInst_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;
    MR_Word _FinalInst_6;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &_FinalInst_6);
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitialInst_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word FromToInsts_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 0)));
    MR_Word _FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_4, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, InitialInst_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;
    MR_Word _FinalInst_6;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &_FinalInst_6);
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, InitialInst_5);
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_util__mode_get_from_to_insts_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5,
  MR_Word * FromToInsts_6)
{
  {
    MR_Word InitInst_7;
    MR_Word FinalInst_8;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_5, &InitInst_7, &FinalInst_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FromToInsts_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitInst_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalInst_8));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(
  MR_Word UnifyMode_4,
  MR_Word * LHSInsts_5,
  MR_Word * RHSInsts_6)
{
  {
    *LHSInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0)));
    *RHSInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1)));
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_final_inst_1_f_0(
  MR_Word FromToInsts_3)
{
  {
    MR_Word Final_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 1)));
    MR_Word _Init_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 0)));

    return Final_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(
  MR_Word FromToInsts_3)
{
  {
    MR_Word Init_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 0)));
    MR_Word _Final_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 1)));

    return Init_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_to_from_to_insts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  {
    MR_Word FromToInsts_6;
    MR_Word Init_7;
    MR_Word Final_8;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_5, &Init_7, &Final_8);
    {
      FromToInsts_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromToInsts_6, 0) = ((MR_Box) (Init_7));
      MR_hl_field(MR_mktag(0), FromToInsts_6, 1) = ((MR_Box) (Final_8));
    }
    return FromToInsts_6;
  }
}

void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Mode_6,
  MR_Word * InitInst_7,
  MR_Word * FinalInst_8)
{
  {
    MR_bool succeeded;
    MR_Word InitInstPrime_9;
    MR_Word FinalInstPrime_10;

    succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, Mode_6, &InitInstPrime_9, &FinalInstPrime_10);
    if (succeeded)
    {
      *InitInst_7 = InitInstPrime_9;
      *FinalInst_8 = FinalInstPrime_10;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      *HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      *HeadVar__4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Arity_13;
      MR_Word Modes_14;
      MR_Word ModeDefns_15;
      MR_Word HLDS_Mode_17;
      MR_Word Params_21;
      MR_Word ModeDefn_22;
      MR_Word Mode0_25;
      MR_Word Mode_26;
      MR_Word HLDS_Mode0_16;
      MR_Word Var_27;
      MR_Box conv0_HLDS_Mode0_16;
      MR_Word _VarSet_20;
      MR_Word _Context_23;
      MR_Word _Status_24;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Args_10, &Arity_13);
      hlds__hlds_module__module_info_get_mode_table_2_p_0(HeadVar__1_1, &Modes_14);
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(Modes_14, &ModeDefns_15);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_9));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_13));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, ModeDefns_15, ((MR_Box) (Var_27)), &conv0_HLDS_Mode0_16);
      if (succeeded)
      {
        HLDS_Mode0_16 = ((MR_Word) conv0_HLDS_Mode0_16);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        HLDS_Mode_17 = HLDS_Mode0_16;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_33_33;
        MR_Word TypeCtorInfo_34_34;
        MR_String String_18;
        MR_Word BuiltinName_19;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Box conv1_HLDS_Mode_17;

        succeeded = ((MR_tag((MR_Word) Name_9)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 0)));
          Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0;
          TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
          {
            BuiltinName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), BuiltinName_19, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), BuiltinName_19, 1) = ((MR_Box) (String_18));
          }
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (BuiltinName_19));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Arity_13));
          }
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_33_33, TypeCtorInfo_34_34, ModeDefns_15, ((MR_Box) (Var_29)), &conv1_HLDS_Mode_17);
          if (succeeded)
          {
            HLDS_Mode_17 = ((MR_Word) conv1_HLDS_Mode_17);
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        _VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDS_Mode_17, (MR_Integer) 0)));
        Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDS_Mode_17, (MR_Integer) 1)));
        ModeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDS_Mode_17, (MR_Integer) 2)));
        _Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDS_Mode_17, (MR_Integer) 3)));
        _Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDS_Mode_17, (MR_Integer) 4)));
        Mode0_25 = (MR_Word) ModeDefn_22;
        parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(Mode0_25, Params_21, Args_10, &Mode_26);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Mode_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_mode_1_f_0(
  MR_Word FromToInsts_3)
{
  {
    MR_Word Mode_4;
    MR_Word Init_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 0)));
    MR_Word Final_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInsts_3, (MR_Integer) 1)));

    {
      Mode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mode_4, 0) = ((MR_Box) (Init_5));
      MR_hl_field(MR_mktag(0), Mode_4, 1) = ((MR_Box) (Final_6));
    }
    return Mode_4;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_util____Unify____recompute_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_util____Compare____recompute_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__mode_util__init(void)
{
}

void mercury__check_hlds__mode_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0);
	MR_register_type_ctor_info(&check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_info_0);
}

void mercury__check_hlds__mode_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_util.
