/*
** Automatically generated from `mode_util.m'
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


/* :- module check_hlds.mode_util. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2,
  MR_Box check_hlds__mode_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2,
  MR_Box check_hlds__mode_util__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
  MR_Word check_hlds__mode_util__V_17_17,
  MR_Word check_hlds__mode_util__V_18_18,
  MR_Word check_hlds__mode_util__V_19_19,
  MR_Word check_hlds__mode_util__V_20_20,
  MR_Word check_hlds__mode_util__V_21_21,
  MR_Word * check_hlds__mode_util__R_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__HeadVar__5_5,
  MR_Word check_hlds__mode_util__HeadVar__6_6,
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__HeadVar__5_5,
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9);

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word check_hlds__mode_util__TypeCtor_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__ArgInst_5,
  MR_Word * check_hlds__mode_util__HeadVar__6_6);

static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_64,
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_65);

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__ConsId_6,
  MR_Integer check_hlds__mode_util__NumArgs_7);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
  MR_Word check_hlds__mode_util__Unification_9,
  MR_Word check_hlds__mode_util__UniMode0_10,
  MR_Word * check_hlds__mode_util__UniMode_11,
  MR_Word check_hlds__mode_util__GoalInfo_12,
  MR_Word check_hlds__mode_util__InstMap_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_55,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_56);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__InstMap_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__VarTypes_2,
  MR_Word check_hlds__mode_util__InstMap_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
  MR_Word check_hlds__mode_util__PredId_9,
  MR_Integer check_hlds__mode_util__ProcId_10,
  MR_Word check_hlds__mode_util__Args_11,
  MR_Word check_hlds__mode_util__VarTypes_12,
  MR_Word check_hlds__mode_util__InstMap_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
  MR_Word check_hlds__mode_util__Var_12,
  MR_Word check_hlds__mode_util__Cases0_13,
  MR_Word * check_hlds__mode_util__Cases_14,
  MR_Word check_hlds__mode_util__VarTypes_15,
  MR_Word check_hlds__mode_util__InstMap0_16,
  MR_Word check_hlds__mode_util__NonLocals_17,
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
  MR_Word check_hlds__mode_util__Goals0_11,
  MR_Word * check_hlds__mode_util__Goals_12,
  MR_Word check_hlds__mode_util__VarTypes_13,
  MR_Word check_hlds__mode_util__InstMap_14,
  MR_Word check_hlds__mode_util__NonLocals_15,
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
  MR_Word check_hlds__mode_util__VarTypes_4,
  MR_Word check_hlds__mode_util__InstMap0_5,
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8);

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
  MR_Word check_hlds__mode_util__GoalExpr0_11,
  MR_Word * check_hlds__mode_util__GoalExpr_12,
  MR_Word check_hlds__mode_util__GoalInfo_13,
  MR_Word check_hlds__mode_util__VarTypes_14,
  MR_Word check_hlds__mode_util__InstMap0_15,
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106);

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
  MR_Word check_hlds__mode_util__Goal0_10,
  MR_Word * check_hlds__mode_util__Goal_11,
  MR_Word check_hlds__mode_util__VarTypes_12,
  MR_Word check_hlds__mode_util__InstMap0_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40);

static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
  MR_Word check_hlds__mode_util__Type0_4,
  MR_Word check_hlds__mode_util__Subst_5,
  MR_Word * check_hlds__mode_util__Type_6);

static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word * check_hlds__mode_util__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__Subst_2,
  MR_Word check_hlds__mode_util__TypeCtor_3,
  MR_Word check_hlds__mode_util__TypeModule_4,
  MR_Word check_hlds__mode_util__Constructors_5,
  MR_Word check_hlds__mode_util__HeadVar__6_6,
  MR_Word * check_hlds__mode_util__HeadVar__7_7);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
  MR_Word check_hlds__mode_util__BoundInst0_7,
  MR_Word * check_hlds__mode_util__BoundInst_8);

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__Inst_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3);

static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__PredArgTypes_5,
  MR_Word * check_hlds__mode_util__PredInstInfo_6);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type0_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Type_7,
  MR_Word check_hlds__mode_util__Constructors_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type0_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10);

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Type_6,
  MR_Word check_hlds__mode_util__Mode0_7,
  MR_Word * check_hlds__mode_util__Mode_8);

static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__ConsId_6,
  MR_Word * check_hlds__mode_util__ArgInst_7);

static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Inst_6,
  MR_Word check_hlds__mode_util__ConsId_7,
  MR_Word * check_hlds__mode_util__ArgInst_8);

static void MR_CALL 
check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_7,
  MR_Word check_hlds__mode_util__Type_8,
  MR_Word check_hlds__mode_util__ContainingTypes_9,
  MR_Word check_hlds__mode_util__InitialInst_10,
  MR_Word check_hlds__mode_util__FinalInst_11,
  MR_Word * check_hlds__mode_util__TopFunctorMode_12);

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box * check_hlds__mode_util__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[1][7];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[4][3];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[1][1];




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
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0])))
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0,
  check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
    return check_hlds__mode_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2,
  MR_Box check_hlds__mode_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

    {
      check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_info_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
    return check_hlds__mode_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
  MR_Box check_hlds__mode_util__wrapper_arg_2,
  MR_Box check_hlds__mode_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

    {
      check_hlds__mode_util____Compare____recompute_info_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
  MR_Word check_hlds__mode_util__V_17_17,
  MR_Word check_hlds__mode_util__V_18_18,
  MR_Word check_hlds__mode_util__V_19_19,
  MR_Word check_hlds__mode_util__V_20_20,
  MR_Word check_hlds__mode_util__V_21_21,
  MR_Word * check_hlds__mode_util__R_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__ModuleInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__ModuleInfo_9;
    MR_Word check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__V_15_15;
    MR_Word check_hlds__mode_util__V_14_14;

    {
      hlds__instmap__merge_instmap_delta_8_p_0(check_hlds__mode_util__V_17_17, check_hlds__mode_util__V_18_18, check_hlds__mode_util__V_19_19, check_hlds__mode_util__V_20_20, check_hlds__mode_util__V_21_21, check_hlds__mode_util__R_6, check_hlds__mode_util__ModuleInfo0_8, &check_hlds__mode_util__ModuleInfo_9);
    }
    check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
    check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__STATE_VARIABLE_RI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_15_15));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__HeadVar__5_5,
  MR_Word check_hlds__mode_util__HeadVar__6_6,
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__mode_util__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__mode_util__STATE_VARIABLE_RI_10 = check_hlds__mode_util__STATE_VARIABLE_RI_0_9;
      }
    else
      {
        MR_Word check_hlds__mode_util__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Case_23;
        MR_Word check_hlds__mode_util__Cases_24;
        MR_Word check_hlds__mode_util__InstMapDelta_28;
        MR_Word check_hlds__mode_util__InstMapDeltas_29;
        MR_Word check_hlds__mode_util__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 2)));
        MR_Word check_hlds__mode_util__Type_34;
        MR_Word check_hlds__mode_util__InstMap1_35;
        MR_Word check_hlds__mode_util__Goal_36;
        MR_Word check_hlds__mode_util__InstMapDelta0_37;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_41_41;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_42_42;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_44_44;
        MR_Word check_hlds__mode_util__ModuleInfo0_58;
        MR_Word check_hlds__mode_util__ModuleInfo_59;
        MR_Word check_hlds__mode_util__ModuleInfo0_70;
        MR_Word check_hlds__mode_util__ModuleInfo_71;
        MR_Word check_hlds__mode_util__V_61_61;
        MR_Word check_hlds__mode_util__V_63_63;
        MR_Word check_hlds__mode_util__V_62_62;
        MR_Word check_hlds__mode_util__V_73_73;
        MR_Word check_hlds__mode_util__V_75_75;
        MR_Word check_hlds__mode_util__V_74_74;

        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__2_2, &check_hlds__mode_util__Type_34);
        }
        check_hlds__mode_util__ModuleInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
        {
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMap1_35, check_hlds__mode_util__ModuleInfo0_58, &check_hlds__mode_util__ModuleInfo_59);
        }
        check_hlds__mode_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
        check_hlds__mode_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
        {
          check_hlds__mode_util__STATE_VARIABLE_RI_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_59));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 1) = ((MR_Box) (check_hlds__mode_util__V_63_63));
        }
        {
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_33, &check_hlds__mode_util__Goal_36, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__InstMap1_35, &check_hlds__mode_util__InstMapDelta0_37, check_hlds__mode_util__STATE_VARIABLE_RI_41_41, &check_hlds__mode_util__STATE_VARIABLE_RI_42_42);
        }
        check_hlds__mode_util__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
        check_hlds__mode_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
        {
          hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, check_hlds__mode_util__InstMapDelta0_37, &check_hlds__mode_util__InstMapDelta_28, check_hlds__mode_util__ModuleInfo0_70, &check_hlds__mode_util__ModuleInfo_71);
        }
        check_hlds__mode_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
        check_hlds__mode_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
        {
          check_hlds__mode_util__STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_71));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (check_hlds__mode_util__V_75_75));
        }
        {
          check_hlds__mode_util__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 0) = ((MR_Box) (check_hlds__mode_util__MainConsId_31));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 1) = ((MR_Box) (check_hlds__mode_util__OtherConsIds_32));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 2) = ((MR_Box) (check_hlds__mode_util__Goal_36));
        }
        {
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Cases0_22, &check_hlds__mode_util__Cases_24, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMapDeltas_29, check_hlds__mode_util__STATE_VARIABLE_RI_44_44, check_hlds__mode_util__STATE_VARIABLE_RI_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Case_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Cases_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_29));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__HeadVar__5_5,
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__mode_util__STATE_VARIABLE_RI_9 = check_hlds__mode_util__STATE_VARIABLE_RI_0_8;
      }
    else
      {
        MR_Word check_hlds__mode_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Goal_20;
        MR_Word check_hlds__mode_util__Goals_21;
        MR_Word check_hlds__mode_util__InstMapDelta_25;
        MR_Word check_hlds__mode_util__InstMapDeltas_26;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

        {
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_18, &check_hlds__mode_util__Goal_20, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDelta_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_8, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
        {
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goals0_19, &check_hlds__mode_util__Goals_21, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDeltas_26, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_26));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word check_hlds__mode_util__TypeCtor_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__ArgInst_5,
  MR_Word * check_hlds__mode_util__HeadVar__6_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__BoundInst_17;
        MR_Word check_hlds__mode_util__BoundInsts_18;
        MR_Word check_hlds__mode_util__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 2)));
        MR_Word check_hlds__mode_util__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 3)));
        MR_Word check_hlds__mode_util__Insts_25;
        MR_Integer check_hlds__mode_util__Arity_26;
        MR_Word check_hlds__mode_util__V_27_27;
        MR_Word check_hlds__mode_util___ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 1)));
        MR_Integer check_hlds__mode_util___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 4)));
        MR_Word check_hlds__mode_util___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 5)));

        {
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_22, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__Insts_25);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Insts_25, &check_hlds__mode_util__Arity_26);
        }
        {
          check_hlds__mode_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Name_21));
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 2) = ((MR_Box) (check_hlds__mode_util__Arity_26));
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
        }
        {
          check_hlds__mode_util__BoundInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 0) = ((MR_Box) (check_hlds__mode_util__V_27_27));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 1) = ((MR_Box) (check_hlds__mode_util__Insts_25));
        }
        {
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__Ctors_15, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__BoundInsts_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_18));
        }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__mode_util__Uniq_7,
  MR_Word check_hlds__mode_util__TypeCtor_8,
  MR_Word check_hlds__mode_util__Constructors_9,
  MR_Word * check_hlds__mode_util__BoundInsts_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__V_11_11;

    {
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__mode_util__Uniq_7,
  MR_Word check_hlds__mode_util__TypeCtor_8,
  MR_Word check_hlds__mode_util__Constructors_9,
  MR_Word * check_hlds__mode_util__BoundInsts_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__V_11_11;

    {
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_64,
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_65)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util___LHSInsts_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_64, (MR_Integer) 0)));

    *check_hlds__mode_util__LambdaHeadVar__2_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_64, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Integer check_hlds__mode_util__CastX_9 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
    MR_Integer check_hlds__mode_util__CastY_10 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_9 == check_hlds__mode_util__CastY_10);
    if (check_hlds__mode_util__succeeded)
      *check_hlds__mode_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_8_8;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_util__V_8_8, check_hlds__mode_util__V_4_4, check_hlds__mode_util__V_6_6);
        }
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_8_8 == (MR_Integer) 0);
        check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
        if (check_hlds__mode_util__succeeded)
          *check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[3], check_hlds__mode_util__HeadVar__1_1, ((MR_Box) (check_hlds__mode_util__V_5_5)), ((MR_Box) (check_hlds__mode_util__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Integer check_hlds__mode_util__CastX_7 = (MR_Integer) check_hlds__mode_util__HeadVar__1_1;
    MR_Integer check_hlds__mode_util__CastY_8 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;

    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_7 == check_hlds__mode_util__CastY_8);
    if (check_hlds__mode_util__succeeded)
      check_hlds__mode_util__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_util__TypeInfo_10_10;
        MR_Word check_hlds__mode_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__mode_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_util__V_3_3, check_hlds__mode_util__V_5_5);
        }
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_util_scalar_common_1[3];
            {
              check_hlds__mode_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_util__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_util__V_4_4)), ((MR_Box) (check_hlds__mode_util__V_6_6)));
            }
          }
      }
    return check_hlds__mode_util__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Integer check_hlds__mode_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
    MR_Integer check_hlds__mode_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Cast_HeadVar1_4, check_hlds__mode_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(
  MR_Word check_hlds__mode_util__HeadVar__2_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_1 == check_hlds__mode_util__HeadVar__2_2);

    return check_hlds__mode_util__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__ConsId_6,
  MR_Integer check_hlds__mode_util__NumArgs_7)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__MaybeInst_8;

    switch (MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__mode_util__PredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__PredInfo_20;
              MR_Word check_hlds__mode_util__ProcInfo_21;
              MR_Word check_hlds__mode_util__PorF_22;
              MR_Word check_hlds__mode_util__Det_23;
              MR_Word check_hlds__mode_util__ProcArgModes_24;
              MR_Word check_hlds__mode_util__Modes_25;
              MR_Word check_hlds__mode_util__Inst_26;
              MR_Word check_hlds__mode_util__V_45_45;
              MR_Word check_hlds__mode_util__V_47_47;
              MR_Word check_hlds__mode_util__V_48_48;

              {
                check_hlds__mode_util__V_45_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__mode_util__PredProcId_18);
              }
              {
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__V_45_45, &check_hlds__mode_util__PredInfo_20, &check_hlds__mode_util__ProcInfo_21);
              }
              {
                check_hlds__mode_util__PorF_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__mode_util__PredInfo_20);
              }
              {
                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__Det_23);
              }
              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__ProcArgModes_24);
              }
              {
                mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_7, check_hlds__mode_util__ProcArgModes_24, &check_hlds__mode_util__Modes_25);
              }
              {
                check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__PorF_22));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Modes_25));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 3) = ((MR_Box) (check_hlds__mode_util__Det_23));
              }
              check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__V_48_48);
              {
                check_hlds__mode_util__Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
              }
              {
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__Inst_26));
              }
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word check_hlds__mode_util__V_53_53;
              MR_Word check_hlds__mode_util__V_56_56;
              MR_Word check_hlds__mode_util__V_57_57;

              {
                check_hlds__mode_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_6));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__mode_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 0) = ((MR_Box) (check_hlds__mode_util__V_57_57));
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__mode_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 3) = ((MR_Box) (check_hlds__mode_util__V_56_56));
              }
              {
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__V_53_53));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
              }
            }
            break;
        }
        break;
    }
    return check_hlds__mode_util__MaybeInst_8;
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
    MR_Word check_hlds__mode_util__conv0_LambdaHeadVar__2_65;

    {
      check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1846__1_2_p_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_LambdaHeadVar__2_65);
    }
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_LambdaHeadVar__2_65));
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
  MR_Word check_hlds__mode_util__Unification_9,
  MR_Word check_hlds__mode_util__UniMode0_10,
  MR_Word * check_hlds__mode_util__UniMode_11,
  MR_Word check_hlds__mode_util__GoalInfo_12,
  MR_Word check_hlds__mode_util__InstMap_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_55,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_56)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_55, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_55, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__mode_util__Unification_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mode_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__ConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 2)));
          MR_Word check_hlds__mode_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 3)));
          MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 4)));
          MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 5)));
          MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Unification_9, (MR_Integer) 6)));
          MR_Word check_hlds__mode_util__Inst_46;
          MR_Word check_hlds__mode_util__TypeInfo_80_80;
          MR_Word check_hlds__mode_util__NonLocals_43;
          MR_Word check_hlds__mode_util__MaybeInst_45;
          MR_Integer check_hlds__mode_util__V_57_57;
          MR_Word check_hlds__mode_util__OldInstMapDelta_71;
          MR_Word check_hlds__mode_util__V_44_44;

          {
            check_hlds__mode_util__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
          {
            check_hlds__mode_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__NonLocals_43, check_hlds__mode_util__Var_36);
          }
          if (check_hlds__mode_util__succeeded)
            {
              {
                check_hlds__mode_util__OldInstMapDelta_71 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
              {
                check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_71, check_hlds__mode_util__Var_36, &check_hlds__mode_util__V_44_44);
              }
              check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__TypeInfo_80_80 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
                  {
                    check_hlds__mode_util__V_57_57 = mercury__list__length_1_f_0(check_hlds__mode_util__TypeInfo_80_80, check_hlds__mode_util__Args_38);
                  }
                  {
                    check_hlds__mode_util__MaybeInst_45 = check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ConsId_37, check_hlds__mode_util__V_57_57);
                  }
                  check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_45)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__mode_util__succeeded)
                    check_hlds__mode_util__Inst_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_45, (MR_Integer) 0)));
                }
            }
          if (check_hlds__mode_util__succeeded)
            {
              MR_Word check_hlds__mode_util__InstMapDelta0_47;

              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
              {
                hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__mode_util__InstMapDelta0_47);
              }
              {
                hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_36, check_hlds__mode_util__Inst_46, check_hlds__mode_util__InstMapDelta0_47, check_hlds__mode_util__InstMapDelta_14);
              }
            }
          else
            {
              {
                *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
            }
          *check_hlds__mode_util__STATE_VARIABLE_RI_56 = check_hlds__mode_util__STATE_VARIABLE_RI_0_55;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mode_util__LHSVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__RHSVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 2)));
          MR_Word check_hlds__mode_util__ArgModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 3)));
          MR_Word check_hlds__mode_util__OldInstMapDelta_23;
          MR_Word check_hlds__mode_util__LHSInitialInst_24;
          MR_Word check_hlds__mode_util__LHSFinalInst_29;
          MR_Word check_hlds__mode_util__ModuleInfo_30;
          MR_Word check_hlds__mode_util__RHSFromToInsts_35;
          MR_Word check_hlds__mode_util__V_66_66;
          MR_Word check_hlds__mode_util__V_67_67;
          MR_Word check_hlds__mode_util__V_68_68;
          MR_Word check_hlds__mode_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 4)));
          MR_Word check_hlds__mode_util___CanCGC_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Unification_9, (MR_Integer) 5)));
          MR_Word check_hlds__mode_util__DeltaInst_25;

          {
            check_hlds__mode_util__OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
          {
            hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_13, check_hlds__mode_util__LHSVar_17, &check_hlds__mode_util__LHSInitialInst_24);
          }
          {
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_23, check_hlds__mode_util__LHSVar_17, &check_hlds__mode_util__DeltaInst_25);
          }
          if (check_hlds__mode_util__succeeded)
            {
              MR_Word check_hlds__mode_util__LHSFinalInstPrime_26;
              MR_Word check_hlds__mode_util__ModuleInfo1_28;
              MR_Word check_hlds__mode_util___Detism_27;

              {
                check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__LHSInitialInst_24, check_hlds__mode_util__DeltaInst_25, (MR_Integer) 1, &check_hlds__mode_util__LHSFinalInstPrime_26, &check_hlds__mode_util___Detism_27, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_28);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  MR_Word check_hlds__mode_util__V_76_76;
                  MR_Word check_hlds__mode_util__V_75_75;

                  check_hlds__mode_util__LHSFinalInst_29 = check_hlds__mode_util__LHSFinalInstPrime_26;
                  check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo1_28;
                  check_hlds__mode_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_55, (MR_Integer) 0)));
                  check_hlds__mode_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_55, (MR_Integer) 1)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__mode_util__STATE_VARIABLE_RI_56 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_30));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_76_76));
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
              check_hlds__mode_util__LHSFinalInst_29 = check_hlds__mode_util__LHSInitialInst_24;
              check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo0_16;
              *check_hlds__mode_util__STATE_VARIABLE_RI_56 = check_hlds__mode_util__STATE_VARIABLE_RI_0_55;
            }
          {
            mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0, (MR_Word) &check_hlds__mode_util_scalar_common_3[3], check_hlds__mode_util__ArgModes_20, &check_hlds__mode_util__RHSFromToInsts_35);
          }
          {
            check_hlds__mode_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_66_66, 0) = ((MR_Box) (check_hlds__mode_util__LHSVar_17));
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_66_66, 1) = ((MR_Box) (check_hlds__mode_util__RHSVars_19));
          }
          {
            check_hlds__mode_util__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, 0) = ((MR_Box) (check_hlds__mode_util__LHSInitialInst_24));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, 1) = ((MR_Box) (check_hlds__mode_util__LHSFinalInst_29));
          }
          {
            check_hlds__mode_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_67_67, 0) = ((MR_Box) (check_hlds__mode_util__V_68_68));
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_67_67, 1) = ((MR_Box) (check_hlds__mode_util__RHSFromToInsts_35));
          }
          {
            hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(check_hlds__mode_util__ModuleInfo_30, check_hlds__mode_util__V_66_66, check_hlds__mode_util__V_67_67, check_hlds__mode_util__InstMapDelta_14);
          }
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
          *check_hlds__mode_util__STATE_VARIABLE_RI_56 = check_hlds__mode_util__STATE_VARIABLE_RI_0_55;
        }
        break;
      case (MR_Integer) 3:
        {
          {
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
          *check_hlds__mode_util__STATE_VARIABLE_RI_56 = check_hlds__mode_util__STATE_VARIABLE_RI_0_55;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__InstMap_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5;
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
        MR_Word check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__Mode0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__Mode_36;
            MR_Word check_hlds__mode_util__Modes_37;
            MR_Word check_hlds__mode_util__ArgInst0_39;
            MR_Word check_hlds__mode_util__FinalInst_41;
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52;
            MR_Word check_hlds__mode_util__V_40_40;
            MR_Word check_hlds__mode_util__UnifyInst_42;
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
            MR_Word check_hlds__mode_util__V_43_43;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_2, check_hlds__mode_util__V_55_55, &check_hlds__mode_util__ArgInst0_39);
            }
            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__mode_util__Mode0_34, &check_hlds__mode_util__V_40_40, &check_hlds__mode_util__FinalInst_41);
            }
            {
              check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__ArgInst0_39, check_hlds__mode_util__FinalInst_41, (MR_Integer) 1, &check_hlds__mode_util__UnifyInst_42, &check_hlds__mode_util__V_43_43, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48);
            }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
                {
                  check_hlds__mode_util__Mode_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 0) = ((MR_Box) (check_hlds__mode_util__ArgInst0_39));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 1) = ((MR_Box) (check_hlds__mode_util__UnifyInst_42));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "unify_inst failed");
                  return;
                }
              }
            {
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__V_54_54, check_hlds__mode_util__InstMap_2, check_hlds__mode_util__Modes0_35, &check_hlds__mode_util__Modes_37, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_36));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_37));
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__VarTypes_2,
  MR_Word check_hlds__mode_util__InstMap_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;

        if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
              *check_hlds__mode_util__STATE_VARIABLE_Sub_6 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
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
            MR_Word check_hlds__mode_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__mode_util__Inst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
                MR_Word check_hlds__mode_util__Insts_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word check_hlds__mode_util__ArgInst_53;
                MR_Word check_hlds__mode_util__Type_54;
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;

                {
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_3, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__ArgInst_53);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_2, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__Type_54);
                }
                {
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__mode_util__ArgInst_53, check_hlds__mode_util__Inst_47, check_hlds__mode_util__Type_54, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59, check_hlds__mode_util__STATE_VARIABLE_Sub_0_5, &check_hlds__mode_util__STATE_VARIABLE_Sub_60_60);
                }
                if (check_hlds__mode_util__succeeded)
                  {
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;
                  }
                else
                  {
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__V_65_65;
                  MR_Word check_hlds__mode_util__HeadVar__4__tmp_copy_4 = check_hlds__mode_util__Insts_48;
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;

                  check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
                  check_hlds__mode_util__STATE_VARIABLE_Sub_0_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5;
                  check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__HeadVar__4__tmp_copy_4;
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
  MR_Word check_hlds__mode_util__PredId_9,
  MR_Integer check_hlds__mode_util__ProcId_10,
  MR_Word check_hlds__mode_util__Args_11,
  MR_Word check_hlds__mode_util__VarTypes_12,
  MR_Word check_hlds__mode_util__InstMap_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__ProcInfo_18;
    MR_Word check_hlds__mode_util__Detism_19;
    MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__V_17_17;
    MR_Word check_hlds__mode_util__V_52_52;
    MR_Word check_hlds__mode_util__V_20_20;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__PredId_9, check_hlds__mode_util__ProcId_10, &check_hlds__mode_util__V_17_17, &check_hlds__mode_util__ProcInfo_18);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__Detism_19);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_19, &check_hlds__mode_util__V_20_20, &check_hlds__mode_util__V_52_52);
    }
    check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_52_52);
    if (check_hlds__mode_util__succeeded)
      {
        {
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_14);
        }
        *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_0_34;
      }
    else
      {
        MR_Word check_hlds__mode_util__ArgModes0_21;
        MR_Word check_hlds__mode_util__ProcInstVarSet_22;
        MR_Word check_hlds__mode_util__InstVarSet0_23;
        MR_Word check_hlds__mode_util__InstVarSet_24;
        MR_Word check_hlds__mode_util__ArgModes1_25;
        MR_Word check_hlds__mode_util__InitialInsts_26;
        MR_Word check_hlds__mode_util__ArgModes_31;
        MR_Word check_hlds__mode_util__ModuleInfo_32;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
        MR_Word check_hlds__mode_util__V_43_43;
        MR_Word check_hlds__mode_util__V_44_44;
        MR_Word check_hlds__mode_util__V_45_45;

        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ArgModes0_21);
        }
        {
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ProcInstVarSet_22);
        }
        check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
        check_hlds__mode_util__InstVarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
        {
          parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__mode_util__InstVarSet0_23, check_hlds__mode_util__ProcInstVarSet_22, &check_hlds__mode_util__InstVarSet_24, check_hlds__mode_util__ArgModes0_21, &check_hlds__mode_util__ArgModes1_25);
        }
        check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
        {
          check_hlds__mode_util__STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (check_hlds__mode_util__V_44_44));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_24));
        }
        {
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__InitialInsts_26);
        }
        {
          check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_util__InstMap_13);
        }
        if (check_hlds__mode_util__succeeded)
          {
            MR_Word check_hlds__mode_util__InstVarSub0_27;
            MR_Word check_hlds__mode_util__InstVarSub_28;
            MR_Word check_hlds__mode_util__ModuleInfo1_29;
            MR_Word check_hlds__mode_util__ArgModes2_30;
            MR_Word check_hlds__mode_util__V_47_47;
            MR_Word check_hlds__mode_util__V_46_46;

            {
              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__mode_util__InstVarSub0_27);
            }
            {
              check_hlds__mode_util__compute_inst_var_sub_8_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__InitialInsts_26, check_hlds__mode_util__InstVarSub0_27, &check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_29);
            }
            {
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__ArgModes2_30);
            }
            {
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__ArgModes2_30, &check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo1_29, &check_hlds__mode_util__ModuleInfo_32);
            }
            check_hlds__mode_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 0)));
            check_hlds__mode_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mode_util__STATE_VARIABLE_RI_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_32));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_47_47));
            }
          }
        else
          {
            MR_Integer check_hlds__mode_util__NumArgs_33;

            {
              mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[2], check_hlds__mode_util__Args_11, &check_hlds__mode_util__NumArgs_33);
            }
            {
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_33, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[7])), &check_hlds__mode_util__ArgModes_31);
            }
            check_hlds__mode_util__ModuleInfo_32 = check_hlds__mode_util__ModuleInfo0_16;
            *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
          }
        {
          hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_32, check_hlds__mode_util__Args_11, check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__InstMapDelta_14);
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
  MR_Word check_hlds__mode_util__Var_12,
  MR_Word check_hlds__mode_util__Cases0_13,
  MR_Word * check_hlds__mode_util__Cases_14,
  MR_Word check_hlds__mode_util__VarTypes_15,
  MR_Word check_hlds__mode_util__InstMap0_16,
  MR_Word check_hlds__mode_util__NonLocals_17,
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InstMapDeltas_20;
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_25_25;

    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__RecomputeAtomic_11, check_hlds__mode_util__Var_12, check_hlds__mode_util__Cases0_13, check_hlds__mode_util__Cases_14, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMap0_16, &check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__STATE_VARIABLE_RI_0_23, &check_hlds__mode_util__STATE_VARIABLE_RI_25_25);
    }
    if ((check_hlds__mode_util__InstMapDeltas_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_18);
        }
        *check_hlds__mode_util__STATE_VARIABLE_RI_24 = check_hlds__mode_util__STATE_VARIABLE_RI_25_25;
      }
    else
      {
        MR_Word check_hlds__mode_util__ModuleInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__ModuleInfo_38;
        MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_42_42;
        MR_Word check_hlds__mode_util__V_41_41;

        {
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap0_16, check_hlds__mode_util__NonLocals_17, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__InstMapDelta_18, check_hlds__mode_util__ModuleInfo0_37, &check_hlds__mode_util__ModuleInfo_38);
        }
        check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
        check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__mode_util__STATE_VARIABLE_RI_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_38));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_42_42));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
  MR_Word check_hlds__mode_util__Goals0_11,
  MR_Word * check_hlds__mode_util__Goals_12,
  MR_Word check_hlds__mode_util__VarTypes_13,
  MR_Word check_hlds__mode_util__InstMap_14,
  MR_Word check_hlds__mode_util__NonLocals_15,
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InstMapDeltas_18;
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_23_23;

    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_11, check_hlds__mode_util__Goals_12, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMap_14, &check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__STATE_VARIABLE_RI_0_21, &check_hlds__mode_util__STATE_VARIABLE_RI_23_23);
    }
    if ((check_hlds__mode_util__InstMapDeltas_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
        }
        *check_hlds__mode_util__STATE_VARIABLE_RI_22 = check_hlds__mode_util__STATE_VARIABLE_RI_23_23;
      }
    else
      {
        MR_Word check_hlds__mode_util__ModuleInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__ModuleInfo_36;
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_40_40;
        MR_Word check_hlds__mode_util__V_39_39;

        {
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap_14, check_hlds__mode_util__NonLocals_15, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__ModuleInfo0_35, &check_hlds__mode_util__ModuleInfo_36);
        }
        check_hlds__mode_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
        check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__mode_util__STATE_VARIABLE_RI_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_36));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_40_40));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
  MR_Word check_hlds__mode_util__VarTypes_4,
  MR_Word check_hlds__mode_util__InstMap0_5,
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_6);
        }
        *check_hlds__mode_util__STATE_VARIABLE_RI_8 = check_hlds__mode_util__STATE_VARIABLE_RI_0_7;
      }
    else
      {
        MR_Word check_hlds__mode_util__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Goal_19;
        MR_Word check_hlds__mode_util__Goals_20;
        MR_Word check_hlds__mode_util__InstMapDelta0_25;
        MR_Word check_hlds__mode_util__InstMap1_26;
        MR_Word check_hlds__mode_util__InstMapDelta1_27;
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

        {
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goal0_17, &check_hlds__mode_util__Goal_19, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap0_5, &check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_7, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
        {
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_5, check_hlds__mode_util__InstMapDelta0_25, &check_hlds__mode_util__InstMap1_26);
        }
        {
          check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goals0_18, &check_hlds__mode_util__Goals_20, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap1_26, &check_hlds__mode_util__InstMapDelta1_27, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_20));
        }
        {
          hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__InstMapDelta1_27, (MR_Integer) 1, check_hlds__mode_util__InstMapDelta_6);
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_util__wrapper_arg_2;
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
    MR_Word check_hlds__mode_util__conv1_HeadVar__2_2;

    {
      check_hlds__mode_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv1_HeadVar__2_2));
    return check_hlds__mode_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_util__wrapper_arg_2;
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_2;

    {
      check_hlds__mode_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_2));
    return check_hlds__mode_util__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
  MR_Word check_hlds__mode_util__GoalExpr0_11,
  MR_Word * check_hlds__mode_util__GoalExpr_12,
  MR_Word check_hlds__mode_util__GoalInfo_13,
  MR_Word check_hlds__mode_util__VarTypes_14,
  MR_Word check_hlds__mode_util__InstMap0_15,
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mode_util__SubGoal0_26 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__GoalExpr0_11), (MR_Integer) 0);
          MR_Word check_hlds__mode_util__InstMapDelta0_27;
          MR_Word check_hlds__mode_util__SubGoal_28;
          MR_Word check_hlds__mode_util__V_29_29;

          {
            check_hlds__mode_util__InstMapDelta0_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
          }
          {
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__mode_util__InstMapDelta0_27);
          }
          if (check_hlds__mode_util__succeeded)
            {
              hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
          else
            {
              hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
          {
            check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_26, &check_hlds__mode_util__SubGoal_28, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
          *check_hlds__mode_util__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_util__SubGoal_28);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mode_util__LHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__RHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__UniMode0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
          MR_Word check_hlds__mode_util__Uni_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
          MR_Word check_hlds__mode_util__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
          MR_Word check_hlds__mode_util__RHS_64;
          MR_Word check_hlds__mode_util__UniMode_65;
          MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_120_120;

          switch (MR_tag((MR_Word) check_hlds__mode_util__RHS0_60)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                check_hlds__mode_util__RHS_64 = check_hlds__mode_util__RHS0_60;
                check_hlds__mode_util__STATE_VARIABLE_RI_120_120 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__mode_util__Purity_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word check_hlds__mode_util__Groundness_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word check_hlds__mode_util__PorF_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word check_hlds__mode_util__LambdaVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 3)));
                MR_Word check_hlds__mode_util__Goal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 6)));
                MR_Word check_hlds__mode_util__ModuleInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
                MR_Word check_hlds__mode_util__InstMap_73;
                MR_Word check_hlds__mode_util__Goal_74;
                MR_Word check_hlds__mode_util__Det_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 5)));
                MR_Word check_hlds__mode_util__NonLocals_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 2)));
                MR_Word check_hlds__mode_util__Modes_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 4)));
                MR_Word check_hlds__mode_util__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));
                MR_Word check_hlds__mode_util__V_75_75;

                {
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__mode_util__ModuleInfo0_72, check_hlds__mode_util__LambdaVars_70, check_hlds__mode_util__Modes_152, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMap_73);
                }
                {
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goal0_71, &check_hlds__mode_util__Goal_74, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap_73, &check_hlds__mode_util__V_75_75, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_120_120);
                }
                {
                  check_hlds__mode_util__RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 0) = ((MR_Box) ((check_hlds__mode_util__Purity_66 | ((((check_hlds__mode_util__Groundness_67 << (MR_Integer) 2)) | ((check_hlds__mode_util__PorF_68 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 2) = ((MR_Box) (check_hlds__mode_util__NonLocals_151));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 3) = ((MR_Box) (check_hlds__mode_util__LambdaVars_70));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 4) = ((MR_Box) (check_hlds__mode_util__Modes_152));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 5) = ((MR_Box) (check_hlds__mode_util__Det_150));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 6) = ((MR_Box) (check_hlds__mode_util__Goal_74));
                }
              }
              break;
          }
          switch (check_hlds__mode_util__RecomputeAtomic_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__mode_util__UniMode_65 = check_hlds__mode_util__UniMode0_61;
                {
                  *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                }
                *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_120_120;
              }
              break;
            case (MR_Integer) 0:
              {
                check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(check_hlds__mode_util__Uni_62, check_hlds__mode_util__UniMode0_61, &check_hlds__mode_util__UniMode_65, check_hlds__mode_util__GoalInfo_13, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_120_120, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__mode_util__GoalExpr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__LHS_59));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__RHS_64));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_util__UniMode_65));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_util__Uni_62));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_util__Context_63));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mode_util__PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
          MR_Integer check_hlds__mode_util__ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
          MR_Word check_hlds__mode_util___BI_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
          MR_Word check_hlds__mode_util___UC_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
          MR_Word check_hlds__mode_util___Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));

          {
            check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_53, check_hlds__mode_util__ProcId_54, check_hlds__mode_util__Args_55, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
          *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__mode_util__Modes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
              MR_Word check_hlds__mode_util__Vars_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util___Details_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word check_hlds__mode_util__V_191_191;
              MR_Word check_hlds__mode_util__V_51_51;

              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_50, &check_hlds__mode_util__V_51_51, &check_hlds__mode_util__V_191_191);
              }
              check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_191_191);
              if (check_hlds__mode_util__succeeded)
                {
                  hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
                }
              else
                {
                  MR_Word check_hlds__mode_util__ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
                  MR_Word check_hlds__mode_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));

                  {
                    hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_52, check_hlds__mode_util__Vars_149, check_hlds__mode_util__Modes_48, check_hlds__mode_util__InstMapDelta_16);
                  }
                }
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
              *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__mode_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
              MR_Word check_hlds__mode_util__TypeInfo_185_185 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
              MR_Word check_hlds__mode_util__ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
              MR_Word check_hlds__mode_util__ArgVars_84;
              MR_Word check_hlds__mode_util__InstMapDelta0_159;
              MR_Word check_hlds__mode_util__PredId_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Integer check_hlds__mode_util__ProcId_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util__Args_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word check_hlds__mode_util___Attr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util___MTRC_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 6)));
              MR_Word check_hlds__mode_util___Impl_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 7)));

              {
                check_hlds__mode_util__ArgVars_84 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[1], check_hlds__mode_util__Args_162);
              }
              {
                check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_160, check_hlds__mode_util__ProcId_161, check_hlds__mode_util__ArgVars_84, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
              if ((check_hlds__mode_util__ExtraArgs_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *check_hlds__mode_util__InstMapDelta_16 = check_hlds__mode_util__InstMapDelta0_159;
              else
                {
                  MR_Word check_hlds__mode_util__OldInstMapDelta_87;
                  MR_Word check_hlds__mode_util__ExtraArgVars_88;
                  MR_Word check_hlds__mode_util__ExtraArgsInstMapDelta_89;
                  MR_Word check_hlds__mode_util__V_118_118;

                  {
                    check_hlds__mode_util__OldInstMapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
                  {
                    check_hlds__mode_util__ExtraArgVars_88 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[2], check_hlds__mode_util__ExtraArgs_81);
                  }
                  {
                    check_hlds__mode_util__V_118_118 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__ExtraArgVars_88);
                  }
                  {
                    hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__V_118_118, check_hlds__mode_util__OldInstMapDelta_87, &check_hlds__mode_util__ExtraArgsInstMapDelta_89);
                  }
                  {
                    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__ExtraArgsInstMapDelta_89, (MR_Integer) 0, check_hlds__mode_util__InstMapDelta_16);
                  }
                }
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__mode_util__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Goals_25;

              {
                check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_24, &check_hlds__mode_util__Goals_25, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ConjType_23));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Goals_25));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__mode_util__Goals0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Goals_145;

              {
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__Goals_145 = check_hlds__mode_util__Goals0_144;
                  {
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
                }
              else
                {
                  MR_Word check_hlds__mode_util__NonLocals_141;

                  {
                    check_hlds__mode_util__NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
                  {
                    check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_144, &check_hlds__mode_util__Goals_145, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_141, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_145));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__mode_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Det_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util__Cases_21;

              {
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__Cases_21 = check_hlds__mode_util__Cases0_20;
                  {
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
                }
              else
                {
                  MR_Word check_hlds__mode_util__NonLocals_22;

                  {
                    check_hlds__mode_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
                  {
                    check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Var_18, check_hlds__mode_util__Cases0_20, &check_hlds__mode_util__Cases_21, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_22, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Var_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Det_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Cases_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__mode_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__SubGoal0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__SubGoal_148;
              MR_Word check_hlds__mode_util__FGT_44;
              MR_Word check_hlds__mode_util__V_43_43;

              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 1)));
                  check_hlds__mode_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 2)));
                  switch (check_hlds__mode_util__FGT_44) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__mode_util__SubGoalInfo_46;
                        MR_Word check_hlds__mode_util__V_45_45;

                        check_hlds__mode_util__SubGoal_148 = check_hlds__mode_util__SubGoal0_147;
                        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 0)));
                        check_hlds__mode_util__SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 1)));
                        {
                          *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__SubGoalInfo_46);
                        }
                        *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
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
                      {
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                      }
                      break;
                  }
                }
              else
                {
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Reason_42));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_148));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__mode_util__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Cond0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util__Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word check_hlds__mode_util__Cond_34;
              MR_Word check_hlds__mode_util__InstMapDeltaCond_35;
              MR_Word check_hlds__mode_util__InstMapCond_36;
              MR_Word check_hlds__mode_util__Then_37;
              MR_Word check_hlds__mode_util__InstMapDeltaThen_38;
              MR_Word check_hlds__mode_util__Else_39;
              MR_Word check_hlds__mode_util__InstMapDeltaElse_40;
              MR_Word check_hlds__mode_util__InstMapDeltaCondThen_41;
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_129_129;
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_130_130;
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_131_131;
              MR_Word check_hlds__mode_util__NonLocals_146;

              {
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Cond0_31, &check_hlds__mode_util__Cond_34, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_129_129);
              }
              {
                hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDeltaCond_35, &check_hlds__mode_util__InstMapCond_36);
              }
              {
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Then0_32, &check_hlds__mode_util__Then_37, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapCond_36, &check_hlds__mode_util__InstMapDeltaThen_38, check_hlds__mode_util__STATE_VARIABLE_RI_129_129, &check_hlds__mode_util__STATE_VARIABLE_RI_130_130);
              }
              {
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Else0_33, &check_hlds__mode_util__Else_39, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__STATE_VARIABLE_RI_130_130, &check_hlds__mode_util__STATE_VARIABLE_RI_131_131);
              }
              {
                hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__InstMapDeltaThen_38, (MR_Integer) 2, &check_hlds__mode_util__InstMapDeltaCondThen_41);
              }
              {
                check_hlds__mode_util__NonLocals_146 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
              }
              {
                check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_146, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__InstMapDeltaCondThen_41, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_131_131, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Vars_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Cond_34));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Then_37));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_util__Else_39));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__mode_util__ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__ShortHand_100;

              switch (MR_tag((MR_Word) check_hlds__mode_util__ShortHand0_90)) {
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
                    MR_Word check_hlds__mode_util__GoalType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
                    MR_Word check_hlds__mode_util__Outer_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
                    MR_Word check_hlds__mode_util__Inner_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
                    MR_Word check_hlds__mode_util__MaybeOutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 3)));
                    MR_Word check_hlds__mode_util__MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 4)));
                    MR_Word check_hlds__mode_util__OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 5)));
                    MR_Word check_hlds__mode_util__OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 6)));
                    MR_Word check_hlds__mode_util__MainGoal_98;
                    MR_Word check_hlds__mode_util__OrElseGoals_99;
                    MR_Word check_hlds__mode_util__NonLocals_163;
                    MR_Word check_hlds__mode_util__Goals0_164;
                    MR_Word check_hlds__mode_util__Goals_165;

                    {
                      check_hlds__mode_util__Goals0_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 0) = ((MR_Box) (check_hlds__mode_util__MainGoal0_95));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 1) = ((MR_Box) (check_hlds__mode_util__OrElseGoals0_96));
                    }
                    {
                      check_hlds__mode_util__NonLocals_163 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                    }
                    {
                      check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_164, &check_hlds__mode_util__Goals_165, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_163, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
                    if ((check_hlds__mode_util__Goals_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "Goals = []");
                          return;
                        }
                      }
                    else
                      {
                        check_hlds__mode_util__MainGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 0)));
                        check_hlds__mode_util__OrElseGoals_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 1)));
                      }
                    {
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__GoalType_91));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__Outer_92));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__Inner_93));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 3) = ((MR_Box) (check_hlds__mode_util__MaybeOutputVars_94));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 4) = ((MR_Box) (check_hlds__mode_util__MainGoal_98));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 5) = ((MR_Box) (check_hlds__mode_util__OrElseGoals_99));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 6) = ((MR_Box) (check_hlds__mode_util__OrElseInners_97));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__mode_util__MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
                    MR_Word check_hlds__mode_util__ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
                    MR_Word check_hlds__mode_util__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
                    MR_Word check_hlds__mode_util__SubGoal_167;

                    {
                      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_166, &check_hlds__mode_util__SubGoal_167, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
                    {
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__MaybeIO_101));
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__ResultVar_102));
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_167));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ShortHand_100));
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
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
  MR_Word check_hlds__mode_util__Goal0_10,
  MR_Word * check_hlds__mode_util__Goal_11,
  MR_Word check_hlds__mode_util__VarTypes_12,
  MR_Word check_hlds__mode_util__InstMap0_13,
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40)
{
  {
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__RecomputeAtomic_9 == (MR_Integer) 1);
    MR_Word check_hlds__mode_util__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__GoalExpr_32;
    MR_Word check_hlds__mode_util__GoalInfo1_33;
    MR_Word check_hlds__mode_util__GoalInfo_38;
    MR_Word check_hlds__mode_util__V_41_41;
    MR_Word check_hlds__mode_util__RHS_19;
    MR_Word check_hlds__mode_util__V_18_18;
    MR_Word check_hlds__mode_util__V_20_20;
    MR_Word check_hlds__mode_util__V_21_21;
    MR_Word check_hlds__mode_util__V_22_22;
    MR_Word check_hlds__mode_util__V_23_23;
    MR_Word check_hlds__mode_util__V_24_24;
    MR_Word check_hlds__mode_util__V_25_25;
    MR_Word check_hlds__mode_util__V_27_27;
    MR_Word check_hlds__mode_util__V_28_28;
    MR_Word check_hlds__mode_util__V_29_29;
    MR_Word check_hlds__mode_util__V_30_30;
    MR_Word check_hlds__mode_util__V_31_31;

    if (check_hlds__mode_util__succeeded)
      {
        {
          check_hlds__mode_util__V_41_41 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(check_hlds__mode_util__GoalExpr0_16);
        }
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_41_41 == (MR_Integer) 1);
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 0)));
                check_hlds__mode_util__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 1)));
                check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 2)));
                check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 3)));
                check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 4)));
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__RHS_19)) == (MR_mktag((MR_Integer) 2)));
                if (check_hlds__mode_util__succeeded)
                  {
                    check_hlds__mode_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) & (MR_Integer) 3);
                    check_hlds__mode_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    check_hlds__mode_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 2)));
                    check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 3)));
                    check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 4)));
                    check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 5)));
                    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 6)));
                  }
              }
            check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
          }
      }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__GoalExpr_32 = check_hlds__mode_util__GoalExpr0_16;
        check_hlds__mode_util__GoalInfo1_33 = check_hlds__mode_util__GoalInfo0_17;
        *check_hlds__mode_util__STATE_VARIABLE_RI_40 = check_hlds__mode_util__STATE_VARIABLE_RI_0_39;
      }
    else
      {
        MR_Word check_hlds__mode_util__InstMapDelta0_34;
        MR_Word check_hlds__mode_util__NonLocals_35;
        MR_Word check_hlds__mode_util__InstMapDelta1_36;

        {
          check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__GoalExpr0_16, &check_hlds__mode_util__GoalExpr_32, check_hlds__mode_util__GoalInfo0_17, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_13, &check_hlds__mode_util__InstMapDelta0_34, check_hlds__mode_util__STATE_VARIABLE_RI_0_39, check_hlds__mode_util__STATE_VARIABLE_RI_40);
        }
        {
          check_hlds__mode_util__NonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo0_17);
        }
        {
          hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__NonLocals_35, check_hlds__mode_util__InstMapDelta0_34, &check_hlds__mode_util__InstMapDelta1_36);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta1_36, check_hlds__mode_util__GoalInfo0_17, &check_hlds__mode_util__GoalInfo1_33);
        }
      }
    {
      check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_util__InstMap0_13);
    }
    if (check_hlds__mode_util__succeeded)
      {
        MR_Word check_hlds__mode_util__UnreachableInstMapDelta_37;

        {
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__mode_util__UnreachableInstMapDelta_37);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__UnreachableInstMapDelta_37, check_hlds__mode_util__GoalInfo1_33, &check_hlds__mode_util__GoalInfo_38);
        }
      }
    else
      check_hlds__mode_util__GoalInfo_38 = check_hlds__mode_util__GoalInfo1_33;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__Goal_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_38));
    }
    {
      *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_38);
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
  MR_Word check_hlds__mode_util__Type0_4,
  MR_Word check_hlds__mode_util__Subst_5,
  MR_Word * check_hlds__mode_util__Type_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__Subst_5);
    }
    if (check_hlds__mode_util__succeeded)
      *check_hlds__mode_util__Type_6 = check_hlds__mode_util__Type0_4;
    else
      {
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__mode_util__Subst_5, check_hlds__mode_util__Type0_4, check_hlds__mode_util__Type_6);
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word * check_hlds__mode_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__ArgType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__ArgTypes_6;
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 3)));

        {
          check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_4, &check_hlds__mode_util__ArgTypes_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgType_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgTypes_6));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Ctor_10;
        MR_Word check_hlds__mode_util__Ctors_11;
        MR_Word check_hlds__mode_util__V_17_17;
        MR_Integer check_hlds__mode_util__V_18_18;
        MR_Word check_hlds__mode_util__V_13_13;
        MR_Word check_hlds__mode_util__V_14_14;
        MR_Word check_hlds__mode_util__V_15_15;
        MR_Word check_hlds__mode_util__V_16_16;

        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            check_hlds__mode_util__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 0)));
            check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 1)));
            check_hlds__mode_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 2)));
            check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 3)));
            check_hlds__mode_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 4)));
            check_hlds__mode_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 5)));
            {
              check_hlds__mode_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_17_17);
            }
            if (check_hlds__mode_util__succeeded)
              check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_2 == check_hlds__mode_util__V_18_18);
            if (check_hlds__mode_util__succeeded)
              {
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__Ctor_10;
                check_hlds__mode_util__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__mode_util__HeadVar__3__tmp_copy_3 = check_hlds__mode_util__Ctors_11;

                  check_hlds__mode_util__HeadVar__3_3 = check_hlds__mode_util__HeadVar__3__tmp_copy_3;
                }
                continue;
              }
          }
        return check_hlds__mode_util__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__Subst_2,
  MR_Word check_hlds__mode_util__TypeCtor_3,
  MR_Word check_hlds__mode_util__TypeModule_4,
  MR_Word check_hlds__mode_util__Constructors_5,
  MR_Word check_hlds__mode_util__HeadVar__6_6,
  MR_Word * check_hlds__mode_util__HeadVar__7_7)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__BoundInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__BoundInsts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__BoundInst_20;
        MR_Word check_hlds__mode_util__BoundInsts_21;
        MR_Word check_hlds__mode_util__ConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__ArgInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__ConsId_27;
        MR_String check_hlds__mode_util__Name_24;
        MR_Integer check_hlds__mode_util__ConsArity_25;
        MR_Word check_hlds__mode_util__V_40_40;
        MR_Word check_hlds__mode_util___ConsTypeCtor_26;
        MR_Word check_hlds__mode_util__MatchingConstructor_31;
        MR_Word check_hlds__mode_util__ConsName_28;
        MR_Integer check_hlds__mode_util__Arity_29;
        MR_Word check_hlds__mode_util__V_30_30;

        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 1)));
            check_hlds__mode_util__ConsArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 2)));
            check_hlds__mode_util___ConsTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 3)));
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__mode_util__succeeded)
              check_hlds__mode_util__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_40_40, (MR_Integer) 0)));
          }
        if (check_hlds__mode_util__succeeded)
          {
            MR_Word check_hlds__mode_util__V_41_41;

            {
              check_hlds__mode_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 0) = ((MR_Box) (check_hlds__mode_util__TypeModule_4));
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 1) = ((MR_Box) (check_hlds__mode_util__Name_24));
            }
            {
              check_hlds__mode_util__ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 1) = ((MR_Box) (check_hlds__mode_util__V_41_41));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 2) = ((MR_Box) (check_hlds__mode_util__ConsArity_25));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
            }
          }
        else
          check_hlds__mode_util__ConsId_27 = check_hlds__mode_util__ConsId0_22;
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__ConsName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 1)));
            check_hlds__mode_util__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 2)));
            check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 3)));
            {
              check_hlds__mode_util__succeeded = check_hlds__mode_util__find_first_matching_constructor_4_p_0(check_hlds__mode_util__ConsName_28, check_hlds__mode_util__Arity_29, check_hlds__mode_util__Constructors_5, &check_hlds__mode_util__MatchingConstructor_31);
            }
          }
        if (check_hlds__mode_util__succeeded)
          {
            MR_Word check_hlds__mode_util__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 3)));
            MR_Word check_hlds__mode_util__ArgTypes_38;
            MR_Word check_hlds__mode_util__ArgInsts_39;
            MR_Word check_hlds__mode_util___ExistQVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util___Constraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util___Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 2)));
            MR_Integer check_hlds__mode_util___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 4)));
            MR_Word check_hlds__mode_util___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 5)));

            {
              check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_35, &check_hlds__mode_util__ArgTypes_38);
            }
            {
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__ArgTypes_38, check_hlds__mode_util__ArgInsts0_23, &check_hlds__mode_util__ArgInsts_39);
            }
            {
              check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_39));
            }
          }
        else
          {
            check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts0_23));
          }
        {
          check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__TypeModule_4, check_hlds__mode_util__Constructors_5, check_hlds__mode_util__BoundInsts0_19, &check_hlds__mode_util__BoundInsts_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_21));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
  MR_Word check_hlds__mode_util__BoundInst0_7,
  MR_Word * check_hlds__mode_util__BoundInst_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__ArgInsts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__ArgInsts_15;
    MR_Word check_hlds__mode_util__TypeCtorInfo_16_16;
    MR_Word check_hlds__mode_util__TypeCtorInfo_17_17;
    MR_Integer check_hlds__mode_util__ArgInstsLen_12;
    MR_Integer check_hlds__mode_util__TupleArgTypesLen_13;
    MR_Integer check_hlds__mode_util__V_11_11;

    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Functor_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 1)));
        check_hlds__mode_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        {
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_16_16, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInstsLen_12);
        }
        check_hlds__mode_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_17_17, check_hlds__mode_util__TupleArgTypes_6, &check_hlds__mode_util__TupleArgTypesLen_13);
        }
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__ArgInstsLen_12 == check_hlds__mode_util__TupleArgTypesLen_13);
      }
    if (check_hlds__mode_util__succeeded)
      {
        MR_Word check_hlds__mode_util__Subst_14;

        {
          mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_14);
        }
        {
          check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_14, check_hlds__mode_util__TupleArgTypes_6, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInsts_15);
        }
      }
    else
      check_hlds__mode_util__ArgInsts_15 = check_hlds__mode_util__ArgInsts0_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__BoundInst_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Functor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_15));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__Inst_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Insts_8;
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_6, check_hlds__mode_util__Inst_2, &check_hlds__mode_util__Insts_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_2));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_8));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__PredArgTypes_5,
  MR_Word * check_hlds__mode_util__PredInstInfo_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__TypeCtorInfo_27_27;
    MR_Integer check_hlds__mode_util__NumPredArgs_10;
    MR_Integer check_hlds__mode_util__NumFuncArgs_11;
    MR_Word check_hlds__mode_util__FuncArgModes_12;
    MR_Word check_hlds__mode_util__PredArgModes0_14;
    MR_Word check_hlds__mode_util__PredArgModes_15;

    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__PredArgTypes_5, &check_hlds__mode_util__NumPredArgs_10);
    }
    check_hlds__mode_util__NumFuncArgs_11 = (check_hlds__mode_util__NumPredArgs_10 - (MR_Integer) 1);
    check_hlds__mode_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      mercury__list__duplicate_3_p_0(check_hlds__mode_util__TypeCtorInfo_27_27, check_hlds__mode_util__NumFuncArgs_11, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[4])), &check_hlds__mode_util__FuncArgModes_12);
    }
    {
      mercury__list__append_3_p_1(check_hlds__mode_util__TypeCtorInfo_27_27, check_hlds__mode_util__FuncArgModes_12, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_1[6]), &check_hlds__mode_util__PredArgModes0_14);
    }
    {
      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__PredArgTypes_5, check_hlds__mode_util__PredArgModes0_14, &check_hlds__mode_util__PredArgModes_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__PredInstInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__PredArgModes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type0_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__mode_util__Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
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
          MR_Word check_hlds__mode_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)));

          if ((check_hlds__mode_util__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word check_hlds__mode_util__Type_63;
              MR_Word check_hlds__mode_util__ArgTypes_60;
              MR_Word check_hlds__mode_util__V_88_88;
              MR_Word check_hlds__mode_util__V_18_18;

              {
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_63);
              }
              {
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_63, &check_hlds__mode_util__V_18_18, &check_hlds__mode_util__V_88_88, &check_hlds__mode_util__ArgTypes_60);
              }
              if (check_hlds__mode_util__succeeded)
                check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_88_88);
              if (check_hlds__mode_util__succeeded)
                {
                  MR_Word check_hlds__mode_util__V_50_50;
                  MR_Word check_hlds__mode_util__HOInstInfo_59;

                  {
                    check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_60, &check_hlds__mode_util__HOInstInfo_59);
                  }
                  check_hlds__mode_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_50_50));
                  }
                }
              else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
          else
            {
              MR_Word check_hlds__mode_util__V_45_45;
              MR_Word check_hlds__mode_util__Type_72;
              MR_Word check_hlds__mode_util__PredInstInfo0_74 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_91_91), (MR_Integer) 1);
              MR_Word check_hlds__mode_util__PredOrFunc_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 0)));
              MR_Word check_hlds__mode_util__Modes0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__MaybeArgRegs_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Det_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util__Modes_79;
              MR_Word check_hlds__mode_util__PredInstInfo_80;
              MR_Word check_hlds__mode_util__ArgTypes_70;
              MR_Word check_hlds__mode_util__TypeCtorInfo_85_85;
              MR_Word check_hlds__mode_util__TypeCtorInfo_86_86;
              MR_Word check_hlds__mode_util__V_90_90;
              MR_Word check_hlds__mode_util__V_29_29;

              {
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_72);
              }
              {
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_72, &check_hlds__mode_util__V_29_29, &check_hlds__mode_util__V_90_90, &check_hlds__mode_util__ArgTypes_70);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_75 == check_hlds__mode_util__V_90_90);
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                      check_hlds__mode_util__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                      {
                        check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_85_85, check_hlds__mode_util__TypeCtorInfo_86_86, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76);
                      }
                    }
                }
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76, &check_hlds__mode_util__Modes_79);
                }
              else
                check_hlds__mode_util__Modes_79 = check_hlds__mode_util__Modes0_76;
              {
                check_hlds__mode_util__PredInstInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_75));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 1) = ((MR_Box) (check_hlds__mode_util__Modes_79));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_77));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 3) = ((MR_Box) (check_hlds__mode_util__Det_78));
              }
              check_hlds__mode_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_80);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_45_45));
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__mode_util__Type_81;

              {
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_81);
              }
              {
                check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_81, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__mode_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));

              if ((check_hlds__mode_util__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__mode_util__Type_13;
                  MR_Word check_hlds__mode_util__ArgTypes_16;
                  MR_Word check_hlds__mode_util__V_87_87;
                  MR_Word check_hlds__mode_util__V_14_14;

                  {
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_13);
                  }
                  {
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_13, &check_hlds__mode_util__V_14_14, &check_hlds__mode_util__V_87_87, &check_hlds__mode_util__ArgTypes_16);
                  }
                  if (check_hlds__mode_util__succeeded)
                    check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_87_87);
                  if (check_hlds__mode_util__succeeded)
                    {
                      MR_Word check_hlds__mode_util__HOInstInfo_17;
                      MR_Word check_hlds__mode_util__V_54_54;

                      {
                        check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_16, &check_hlds__mode_util__HOInstInfo_17);
                      }
                      check_hlds__mode_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_17);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__mode_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_54_54));
                      }
                    }
                  else
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__mode_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                }
              else
                {
                  MR_Word check_hlds__mode_util__PredInstInfo0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_93_93), (MR_Integer) 1);
                  MR_Word check_hlds__mode_util__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 0)));
                  MR_Word check_hlds__mode_util__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 3)));
                  MR_Word check_hlds__mode_util__Modes_27;
                  MR_Word check_hlds__mode_util__PredInstInfo_28;
                  MR_Word check_hlds__mode_util__V_47_47;
                  MR_Word check_hlds__mode_util__Type_68;
                  MR_Word check_hlds__mode_util__ArgTypes_66;
                  MR_Word check_hlds__mode_util__TypeCtorInfo_83_83;
                  MR_Word check_hlds__mode_util__TypeCtorInfo_84_84;
                  MR_Word check_hlds__mode_util__V_89_89;
                  MR_Word check_hlds__mode_util__V_25_25;

                  {
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_68);
                  }
                  {
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_68, &check_hlds__mode_util__V_25_25, &check_hlds__mode_util__V_89_89, &check_hlds__mode_util__ArgTypes_66);
                  }
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_21 == check_hlds__mode_util__V_89_89);
                      if (check_hlds__mode_util__succeeded)
                        {
                          check_hlds__mode_util__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                          check_hlds__mode_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                          {
                            check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_83_83, check_hlds__mode_util__TypeCtorInfo_84_84, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22);
                          }
                        }
                    }
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22, &check_hlds__mode_util__Modes_27);
                    }
                  else
                    check_hlds__mode_util__Modes_27 = check_hlds__mode_util__Modes0_22;
                  {
                    check_hlds__mode_util__PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_21));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 1) = ((MR_Box) (check_hlds__mode_util__Modes_27));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_23));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 3) = ((MR_Box) (check_hlds__mode_util__Det_24));
                  }
                  check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_28);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__mode_util__V_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__SubInst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__SubInst_37;

              {
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, check_hlds__mode_util__SubInst0_36, &check_hlds__mode_util__SubInst_37);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubInst_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__mode_util__InstName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__InstName_43;
              MR_Word check_hlds__mode_util__Type_82;
              MR_Word check_hlds__mode_util__V_41_41;
              MR_Word check_hlds__mode_util__V_42_42;

              {
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_82);
              }
              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__InstName0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (check_hlds__mode_util__succeeded)
                {
                  check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 1)));
                  check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 2)));
                  check_hlds__mode_util__InstName_43 = check_hlds__mode_util__InstName0_40;
                }
              else
                {
                  check_hlds__mode_util__InstName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 1) = ((MR_Box) (check_hlds__mode_util__Type_82));
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 2) = ((MR_Box) (check_hlds__mode_util__InstName0_40));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_43));
              }
            }
            break;
          case (MR_Integer) 5:
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Type_7,
  MR_Word check_hlds__mode_util__Constructors_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__mode_util__Inst0_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
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
              MR_Word check_hlds__mode_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)));

              if ((check_hlds__mode_util__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__mode_util__ArgTypes_80;
                  MR_Word check_hlds__mode_util__V_118_118;
                  MR_Word check_hlds__mode_util__V_21_21;

                  {
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__V_21_21, &check_hlds__mode_util__V_118_118, &check_hlds__mode_util__ArgTypes_80);
                  }
                  if (check_hlds__mode_util__succeeded)
                    check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_118_118);
                  if (check_hlds__mode_util__succeeded)
                    {
                      MR_Word check_hlds__mode_util__PredInstInfo_23;
                      MR_Word check_hlds__mode_util__V_51_51;

                      {
                        check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_80, &check_hlds__mode_util__PredInstInfo_23);
                      }
                      check_hlds__mode_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_23);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__mode_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_122_122));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_51_51));
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__mode_util__V_54_54;
                      MR_Word check_hlds__mode_util__V_55_55;
                      MR_Word check_hlds__mode_util__V_56_56;
                      MR_Word check_hlds__mode_util__V_57_57;
                      MR_Word check_hlds__mode_util__V_58_58;
                      MR_Word check_hlds__mode_util__V_59_59;
                      MR_Word check_hlds__mode_util__V_60_60;
                      MR_Word check_hlds__mode_util__TypeCtor_76;
                      MR_Word check_hlds__mode_util__BoundInsts0_77;
                      MR_Word check_hlds__mode_util__BoundInsts_78;
                      MR_Word check_hlds__mode_util__InstResults_79;

                      {
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__TypeCtor_76);
                      }
                      {
                        check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__V_122_122, check_hlds__mode_util__TypeCtor_76, check_hlds__mode_util__Constructors_8, &check_hlds__mode_util__BoundInsts0_77);
                      }
                      {
                        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts0_77, &check_hlds__mode_util__BoundInsts_78);
                      }
                      {
                        check_hlds__mode_util__V_55_55 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                      }
                      {
                        check_hlds__mode_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_54_54, 0) = ((MR_Box) (check_hlds__mode_util__V_55_55));
                      }
                      {
                        check_hlds__mode_util__V_57_57 = mercury__set__init_0_f_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1]);
                      }
                      {
                        check_hlds__mode_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 0) = ((MR_Box) (check_hlds__mode_util__V_57_57));
                      }
                      {
                        check_hlds__mode_util__V_59_59 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                      }
                      {
                        check_hlds__mode_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_58_58, 0) = ((MR_Box) (check_hlds__mode_util__V_59_59));
                      }
                      check_hlds__mode_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__TypeCtor_76);
                      {
                        check_hlds__mode_util__InstResults_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 0) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 1) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 2) = ((MR_Box) (check_hlds__mode_util__V_54_54));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 3) = ((MR_Box) (check_hlds__mode_util__V_56_56));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 4) = ((MR_Box) (check_hlds__mode_util__V_58_58));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_79, 5) = ((MR_Box) (check_hlds__mode_util__V_60_60));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__mode_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_122_122));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__InstResults_79));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_78));
                      }
                    }
                }
              else
                {
                  MR_Word check_hlds__mode_util__V_46_46;
                  MR_Word check_hlds__mode_util__PredInstInfo_98;
                  MR_Word check_hlds__mode_util__PredInstInfo0_99 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_121_121), (MR_Integer) 1);
                  MR_Word check_hlds__mode_util__PredOrFunc_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_99, (MR_Integer) 0)));
                  MR_Word check_hlds__mode_util__Modes0_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_99, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__MaybeArgRegs_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_99, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__Det_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_99, (MR_Integer) 3)));
                  MR_Word check_hlds__mode_util__Modes_104;
                  MR_Word check_hlds__mode_util__ArgTypes_95;
                  MR_Word check_hlds__mode_util__TypeCtorInfo_115_115;
                  MR_Word check_hlds__mode_util__TypeCtorInfo_116_116;
                  MR_Word check_hlds__mode_util__V_120_120;
                  MR_Word check_hlds__mode_util__V_32_32;

                  {
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__V_32_32, &check_hlds__mode_util__V_120_120, &check_hlds__mode_util__ArgTypes_95);
                  }
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_100 == check_hlds__mode_util__V_120_120);
                      if (check_hlds__mode_util__succeeded)
                        {
                          check_hlds__mode_util__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                          check_hlds__mode_util__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                          {
                            check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_115_115, check_hlds__mode_util__TypeCtorInfo_116_116, check_hlds__mode_util__ArgTypes_95, check_hlds__mode_util__Modes0_101);
                          }
                        }
                    }
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_95, check_hlds__mode_util__Modes0_101, &check_hlds__mode_util__Modes_104);
                    }
                  else
                    check_hlds__mode_util__Modes_104 = check_hlds__mode_util__Modes0_101;
                  {
                    check_hlds__mode_util__PredInstInfo_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_98, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_100));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_98, 1) = ((MR_Box) (check_hlds__mode_util__Modes_104));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_98, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_102));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_98, 3) = ((MR_Box) (check_hlds__mode_util__Det_103));
                  }
                  check_hlds__mode_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_98);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_122_122));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_46_46));
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_7, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mode_util__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));

                  if ((check_hlds__mode_util__V_123_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word check_hlds__mode_util__ArgTypes_15;
                      MR_Word check_hlds__mode_util__V_117_117;
                      MR_Word check_hlds__mode_util__V_13_13;

                      {
                        check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__V_13_13, &check_hlds__mode_util__V_117_117, &check_hlds__mode_util__ArgTypes_15);
                      }
                      if (check_hlds__mode_util__succeeded)
                        check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_117_117);
                      if (check_hlds__mode_util__succeeded)
                        {
                          MR_Word check_hlds__mode_util__HigherOrderInstInfo_16;
                          MR_Word check_hlds__mode_util__V_63_63;

                          {
                            check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_15, &check_hlds__mode_util__HigherOrderInstInfo_16);
                          }
                          check_hlds__mode_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HigherOrderInstInfo_16);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__mode_util__Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_124_124));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_63_63));
                          }
                        }
                      else
                        {
                          MR_Word check_hlds__mode_util__TypeCtor_17;
                          MR_Word check_hlds__mode_util__BoundInsts0_18;
                          MR_Word check_hlds__mode_util__BoundInsts_19;
                          MR_Word check_hlds__mode_util__InstResults_20;
                          MR_Word check_hlds__mode_util__V_66_66;
                          MR_Word check_hlds__mode_util__V_67_67;
                          MR_Word check_hlds__mode_util__V_68_68;
                          MR_Word check_hlds__mode_util__V_69_69;
                          MR_Word check_hlds__mode_util__V_70_70;
                          MR_Word check_hlds__mode_util__V_71_71;
                          MR_Word check_hlds__mode_util__V_72_72;

                          {
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__TypeCtor_17);
                          }
                          {
                            check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__V_124_124, check_hlds__mode_util__TypeCtor_17, check_hlds__mode_util__Constructors_8, &check_hlds__mode_util__BoundInsts0_18);
                          }
                          {
                            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts0_18, &check_hlds__mode_util__BoundInsts_19);
                          }
                          {
                            check_hlds__mode_util__V_67_67 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                          }
                          {
                            check_hlds__mode_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_66_66, 0) = ((MR_Box) (check_hlds__mode_util__V_67_67));
                          }
                          {
                            check_hlds__mode_util__V_69_69 = mercury__set__init_0_f_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1]);
                          }
                          {
                            check_hlds__mode_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_68_68, 0) = ((MR_Box) (check_hlds__mode_util__V_69_69));
                          }
                          {
                            check_hlds__mode_util__V_71_71 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                          }
                          {
                            check_hlds__mode_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 0) = ((MR_Box) (check_hlds__mode_util__V_71_71));
                          }
                          check_hlds__mode_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__TypeCtor_17);
                          {
                            check_hlds__mode_util__InstResults_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 0) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 2) = ((MR_Box) (check_hlds__mode_util__V_66_66));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 3) = ((MR_Box) (check_hlds__mode_util__V_68_68));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 4) = ((MR_Box) (check_hlds__mode_util__V_70_70));
                            MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_20, 5) = ((MR_Box) (check_hlds__mode_util__V_72_72));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__mode_util__Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_124_124));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__InstResults_20));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_19));
                          }
                        }
                    }
                  else
                    {
                      MR_Word check_hlds__mode_util__PredInstInfo0_24 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_123_123), (MR_Integer) 1);
                      MR_Word check_hlds__mode_util__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_24, (MR_Integer) 0)));
                      MR_Word check_hlds__mode_util__Modes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_24, (MR_Integer) 1)));
                      MR_Word check_hlds__mode_util__MaybeArgRegs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_24, (MR_Integer) 2)));
                      MR_Word check_hlds__mode_util__Det_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_24, (MR_Integer) 3)));
                      MR_Word check_hlds__mode_util__Modes_31;
                      MR_Word check_hlds__mode_util__V_48_48;
                      MR_Word check_hlds__mode_util__PredInstInfo_94;
                      MR_Word check_hlds__mode_util__ArgTypes_91;
                      MR_Word check_hlds__mode_util__TypeCtorInfo_113_113;
                      MR_Word check_hlds__mode_util__TypeCtorInfo_114_114;
                      MR_Word check_hlds__mode_util__V_119_119;
                      MR_Word check_hlds__mode_util__V_29_29;

                      {
                        check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_7, &check_hlds__mode_util__V_29_29, &check_hlds__mode_util__V_119_119, &check_hlds__mode_util__ArgTypes_91);
                      }
                      if (check_hlds__mode_util__succeeded)
                        {
                          check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_25 == check_hlds__mode_util__V_119_119);
                          if (check_hlds__mode_util__succeeded)
                            {
                              check_hlds__mode_util__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                              check_hlds__mode_util__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                              {
                                check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_113_113, check_hlds__mode_util__TypeCtorInfo_114_114, check_hlds__mode_util__ArgTypes_91, check_hlds__mode_util__Modes0_26);
                              }
                            }
                        }
                      if (check_hlds__mode_util__succeeded)
                        {
                          check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_91, check_hlds__mode_util__Modes0_26, &check_hlds__mode_util__Modes_31);
                        }
                      else
                        check_hlds__mode_util__Modes_31 = check_hlds__mode_util__Modes0_26;
                      {
                        check_hlds__mode_util__PredInstInfo_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_94, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_25));
                        MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_94, 1) = ((MR_Box) (check_hlds__mode_util__Modes_31));
                        MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_94, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_27));
                        MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_94, 3) = ((MR_Box) (check_hlds__mode_util__Det_28));
                      }
                      check_hlds__mode_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_94);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__mode_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_124_124));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_48_48));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__mode_util__V_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__SubInst0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__SubInst_40;

                  {
                    check_hlds__mode_util__propagate_ctor_info_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_7, check_hlds__mode_util__Constructors_8, check_hlds__mode_util__SubInst0_39, &check_hlds__mode_util__SubInst_40);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_38));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubInst_40));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__mode_util__InstName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__NamedInst_44;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InstName_43, &check_hlds__mode_util__NamedInst_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__mode_util__Inst0__tmp_copy_9 = check_hlds__mode_util__NamedInst_44;

                    check_hlds__mode_util__Inst0_9 = check_hlds__mode_util__Inst0__tmp_copy_9;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Subst_7,
  MR_Word check_hlds__mode_util__Type0_8,
  MR_Word check_hlds__mode_util__Inst0_9,
  MR_Word * check_hlds__mode_util__Inst_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
    if (check_hlds__mode_util__succeeded)
      {
        MR_Word check_hlds__mode_util__Type_11;
        MR_Word check_hlds__mode_util__Constructors_12;

        {
          check_hlds__mode_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__Subst_7);
        }
        if (check_hlds__mode_util__succeeded)
          check_hlds__mode_util__Type_11 = check_hlds__mode_util__Type0_8;
        else
          {
            parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, &check_hlds__mode_util__Type_11);
          }
        {
          check_hlds__mode_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_11, &check_hlds__mode_util__Constructors_12);
        }
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__propagate_ctor_info_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_11, check_hlds__mode_util__Constructors_12, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
          }
        else
          *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
      }
    else
      {
        check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Type_6,
  MR_Word check_hlds__mode_util__Mode0_7,
  MR_Word * check_hlds__mode_util__Mode_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst0_9;
    MR_Word check_hlds__mode_util__FinalInst0_10;
    MR_Word check_hlds__mode_util__Subst_11;
    MR_Word check_hlds__mode_util__InitialInst_12;
    MR_Word check_hlds__mode_util__FinalInst_13;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode0_7, &check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__FinalInst0_10);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_11);
    }
    {
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__InitialInst_12);
    }
    {
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__FinalInst0_10, &check_hlds__mode_util__FinalInst_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__Mode_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_13));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__ConsId_6,
  MR_Word * check_hlds__mode_util__ArgInst_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__mode_util__BoundInst_4;
        MR_Word check_hlds__mode_util__BoundInsts_5;
        MR_Word check_hlds__mode_util__ArgInst0_9;
        MR_Word check_hlds__mode_util__InstConsId_8;
        MR_Word check_hlds__mode_util__V_10_10;
        MR_Word check_hlds__mode_util__V_11_11;

        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__mode_util__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__mode_util__InstConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 0)));
            check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 1)));
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_10_10)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__ArgInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 0)));
                check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 1)));
                check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__mode_util__succeeded)
                  {
                    check_hlds__mode_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__mode_util__ConsId_6, check_hlds__mode_util__InstConsId_8);
                  }
              }
            if (check_hlds__mode_util__succeeded)
              {
                *check_hlds__mode_util__ArgInst_7 = check_hlds__mode_util__ArgInst0_9;
                check_hlds__mode_util__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__BoundInsts_5;

                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__mode_util__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Inst_6,
  MR_Word check_hlds__mode_util__ConsId_7,
  MR_Word * check_hlds__mode_util__ArgInst_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__mode_util__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
            }
            break;
          case (MR_Integer) 1:
            *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__mode_util__Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 0)));
              MR_Word check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__ArgInst_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_32));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__mode_util__List_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__mode_util___Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util___InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__ArgInst0_16;

                  {
                    check_hlds__mode_util__succeeded = check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(check_hlds__mode_util__List_15, check_hlds__mode_util__ConsId_7, &check_hlds__mode_util__ArgInst0_16);
                  }
                  if (check_hlds__mode_util__succeeded)
                    *check_hlds__mode_util__ArgInst_8 = check_hlds__mode_util__ArgInst0_16;
                  else
                    *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mode_util__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util___PredInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__mode_util__ArgInst_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_11));
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
                  MR_Word check_hlds__mode_util__InsideInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__InsideInst_23;

                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__mode_util__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__NamedInst_10;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__InstName_9, &check_hlds__mode_util__NamedInst_10);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__NamedInst_10;

                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
                  }
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
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_7,
  MR_Word check_hlds__mode_util__Type_8,
  MR_Word check_hlds__mode_util__ContainingTypes_9,
  MR_Word check_hlds__mode_util__InitialInst_10,
  MR_Word check_hlds__mode_util__FinalInst_11,
  MR_Word * check_hlds__mode_util__TopFunctorMode_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;
        MR_Word check_hlds__mode_util__FunctorName_13;
        MR_Word check_hlds__mode_util__ArgType_14;
        MR_Word check_hlds__mode_util__TypeCtor_15;
        MR_Word check_hlds__mode_util__TypeCtorInfo_21_21;

        {
          check_hlds__mode_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__mode_util__ModuleInfo_7, check_hlds__mode_util__Type_8, &check_hlds__mode_util__FunctorName_13, &check_hlds__mode_util__ArgType_14);
        }
        if (check_hlds__mode_util__succeeded)
          {
            {
              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__mode_util__Type_8, &check_hlds__mode_util__TypeCtor_15);
            }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                {
                  check_hlds__mode_util__succeeded = mercury__list__member_2_p_0(check_hlds__mode_util__TypeCtorInfo_21_21, ((MR_Box) (check_hlds__mode_util__TypeCtor_15)), check_hlds__mode_util__ContainingTypes_9);
                }
                check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
              }
          }
        if (check_hlds__mode_util__succeeded)
          {
            MR_Word check_hlds__mode_util__ConsId_16;
            MR_Word check_hlds__mode_util__InitialArgInst_17;
            MR_Word check_hlds__mode_util__FinalArgInst_18;
            MR_Word check_hlds__mode_util__V_20_20;

            {
              check_hlds__mode_util__ConsId_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 1) = ((MR_Box) (check_hlds__mode_util__FunctorName_13));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_15));
            }
            {
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_7, check_hlds__mode_util__InitialInst_10, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__InitialArgInst_17);
            }
            {
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_7, check_hlds__mode_util__FinalInst_11, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__FinalArgInst_18);
            }
            {
              check_hlds__mode_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_20_20, 0) = ((MR_Box) (check_hlds__mode_util__TypeCtor_15));
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_20_20, 1) = ((MR_Box) (check_hlds__mode_util__ContainingTypes_9));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__mode_util__Type__tmp_copy_8 = check_hlds__mode_util__ArgType_14;
              MR_Word check_hlds__mode_util__ContainingTypes__tmp_copy_9 = check_hlds__mode_util__V_20_20;
              MR_Word check_hlds__mode_util__InitialInst__tmp_copy_10 = check_hlds__mode_util__InitialArgInst_17;
              MR_Word check_hlds__mode_util__FinalInst__tmp_copy_11 = check_hlds__mode_util__FinalArgInst_18;

              check_hlds__mode_util__FinalInst_11 = check_hlds__mode_util__FinalInst__tmp_copy_11;
              check_hlds__mode_util__InitialInst_10 = check_hlds__mode_util__InitialInst__tmp_copy_10;
              check_hlds__mode_util__ContainingTypes_9 = check_hlds__mode_util__ContainingTypes__tmp_copy_9;
              check_hlds__mode_util__Type_8 = check_hlds__mode_util__Type__tmp_copy_8;
            }
            continue;
          }
        else
          {
            {
              check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_7, check_hlds__mode_util__InitialInst_10);
            }
            if (check_hlds__mode_util__succeeded)
              *check_hlds__mode_util__TopFunctorMode_12 = (MR_Integer) 0;
            else
              {
                {
                  check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_7, check_hlds__mode_util__FinalInst_11);
                }
                if (check_hlds__mode_util__succeeded)
                  *check_hlds__mode_util__TopFunctorMode_12 = (MR_Integer) 1;
                else
                  *check_hlds__mode_util__TopFunctorMode_12 = (MR_Integer) 2;
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__mode_util__partition_args_5_p_0(
  MR_Word check_hlds__mode_util__TypeInfo_for_T_36,
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word check_hlds__mode_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Box check_hlds__mode_util__Arg_26 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0));
            MR_Word check_hlds__mode_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
            MR_Word check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
            MR_Word check_hlds__mode_util__InitialInst_41;
            MR_Word check_hlds__mode_util___FinalInst_42;

            {
              check_hlds__mode_util__partition_args_5_p_0(check_hlds__mode_util__TypeInfo_for_T_36, check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_37_37, check_hlds__mode_util__Args_27, &check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32, &check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33);
            }
            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_38_38, &check_hlds__mode_util__InitialInst_41, &check_hlds__mode_util___FinalInst_42);
            }
            {
              check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__InitialInst_41);
            }
            if (check_hlds__mode_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32));
                }
                *check_hlds__mode_util__HeadVar__5_5 = check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33));
                }
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
              }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__normalise_inst_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Type_6,
  MR_Word check_hlds__mode_util__Inst0_7,
  MR_Word * check_hlds__mode_util__NormalisedInst_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Inst_9;
    MR_Word check_hlds__mode_util__V_10_10;
    MR_Word check_hlds__mode_util__V_11_11;
    MR_Word check_hlds__mode_util__V_12_12;

    {
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst0_7, &check_hlds__mode_util__Inst_9);
    }
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Inst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 1)));
        check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 2)));
        check_hlds__mode_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 3)));
        {
          MR_Word check_hlds__mode_util__Uniq_13;

          {
            check_hlds__mode_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__mode_util__Type_6);
          }
          check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
          if (check_hlds__mode_util__succeeded)
            {
              {
                check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  {
                    check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
                  if (check_hlds__mode_util__succeeded)
                    {
                      check_hlds__mode_util__Uniq_13 = (MR_Integer) 1;
                      check_hlds__mode_util__succeeded = MR_TRUE;
                    }
                  else
                    {
                      {
                        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
                      if (check_hlds__mode_util__succeeded)
                        {
                          check_hlds__mode_util__Uniq_13 = (MR_Integer) 2;
                          check_hlds__mode_util__succeeded = MR_TRUE;
                        }
                    }
                  if (check_hlds__mode_util__succeeded)
                    {
                      {
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
                    }
                }
            }
          if (check_hlds__mode_util__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_util__NormalisedInst_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          else
            {
              {
                check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
              if (check_hlds__mode_util__succeeded)
                {
                  {
                    check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
                  check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
                  if (check_hlds__mode_util__succeeded)
                    {
                      {
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
                    }
                }
              if (check_hlds__mode_util__succeeded)
                {
                  *check_hlds__mode_util__NormalisedInst_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0]);
                }
              else
                *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
            }
        }
      }
    else
      *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
  }
}

void MR_CALL 
check_hlds__mode_util__normalise_insts_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Insts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__Inst_25;
            MR_Word check_hlds__mode_util__Insts_26;

            {
              check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Inst0_23, &check_hlds__mode_util__Inst_25);
            }
            {
              check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Insts0_24, &check_hlds__mode_util__Insts_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_26));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(
  MR_Word check_hlds__mode_util__Var_6,
  MR_Word check_hlds__mode_util__InstMap0_7,
  MR_Word check_hlds__mode_util__InstMap_8,
  MR_Word check_hlds__mode_util__Goal0_9,
  MR_Word * check_hlds__mode_util__Goal_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__InstMapDelta0_13;
    MR_Word check_hlds__mode_util__Inst0_14;
    MR_Word check_hlds__mode_util__Inst_15;
    MR_Word check_hlds__mode_util__GoalInfo_16;

    {
      check_hlds__mode_util__InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo0_12);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap0_7, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst0_14);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_8, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst_15);
    }
    {
      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_util__Inst_15, check_hlds__mode_util__Inst0_14);
    }
    if (check_hlds__mode_util__succeeded)
      check_hlds__mode_util__GoalInfo_16 = check_hlds__mode_util__GoalInfo0_12;
    else
      {
        MR_Word check_hlds__mode_util__InstMapDelta_17;

        {
          hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_6, check_hlds__mode_util__Inst_15, check_hlds__mode_util__InstMapDelta0_13, &check_hlds__mode_util__InstMapDelta_17);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta_17, check_hlds__mode_util__GoalInfo0_12, &check_hlds__mode_util__GoalInfo_16);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_16));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__IsLive_8;
        MR_Word check_hlds__mode_util__IsLives_9;
        MR_Word check_hlds__mode_util__FinalInst_11;
        MR_Word check_hlds__mode_util___InitialInst_10;

        {
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util___InitialInst_10, &check_hlds__mode_util__FinalInst_11);
        }
        {
          check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__FinalInst_11);
        }
        if (check_hlds__mode_util__succeeded)
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 1;
        else
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 0;
        {
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__IsLives_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__IsLive_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__IsLives_9));
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box check_hlds__mode_util__closure_arg,
  MR_Box check_hlds__mode_util__wrapper_arg_1,
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
    MR_Word check_hlds__mode_util__conv0_BoundInst_8;

    {
      check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_BoundInst_8);
    }
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_BoundInst_8));
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Type_6,
  MR_Word check_hlds__mode_util__Inst0_7,
  MR_Word * check_hlds__mode_util__Inst_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__InstResults0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 2)));
    MR_Word check_hlds__mode_util__BoundInsts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 3)));
    MR_Word check_hlds__mode_util__BoundInsts_13;
    MR_Word check_hlds__mode_util__PropagatedResult_14;
    MR_Word check_hlds__mode_util__ConstructNewInst_15;
    MR_Word check_hlds__mode_util__TupleArgTypes_12;

    {
      check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TupleArgTypes_12);
    }
    if (check_hlds__mode_util__succeeded)
      {
        MR_Word check_hlds__mode_util__TypeCtorInfo_64_64;
        MR_Word check_hlds__mode_util__V_44_44;

        {
          check_hlds__mode_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 3) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_5));
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 4) = ((MR_Box) (check_hlds__mode_util__TupleArgTypes_12));
        }
        check_hlds__mode_util__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
        {
          mercury__list__map_3_p_0(check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__V_44_44, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts_13);
        }
        check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
      }
    else
      {
        MR_Word check_hlds__mode_util__TypeCtor_16;
        MR_Word check_hlds__mode_util__TypeArgs_17;
        MR_Word check_hlds__mode_util__TypeModule_18;
        MR_Word check_hlds__mode_util__TypeParams_23;
        MR_Word check_hlds__mode_util__Constructors_25;
        MR_Word check_hlds__mode_util__TypeTable_21;
        MR_Word check_hlds__mode_util__TypeDefn_22;
        MR_Word check_hlds__mode_util__TypeBody_24;
        MR_Word check_hlds__mode_util__V_45_45;
        MR_Integer check_hlds__mode_util__V_20_20;
        MR_String check_hlds__mode_util__V_19_19;
        MR_Word check_hlds__mode_util__V_54_54;
        MR_Word check_hlds__mode_util__V_55_55;
        MR_Word check_hlds__mode_util__V_56_56;
        MR_Word check_hlds__mode_util__V_57_57;
        MR_Word check_hlds__mode_util__V_58_58;
        MR_Word check_hlds__mode_util__V_59_59;
        MR_Word check_hlds__mode_util__V_60_60;
        MR_Word check_hlds__mode_util__V_61_61;

        {
          check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeArgs_17);
        }
        if (check_hlds__mode_util__succeeded)
          {
            check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 0)));
            check_hlds__mode_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 1)));
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 0)));
                check_hlds__mode_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 1)));
                {
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__mode_util__ModuleInfo_5, &check_hlds__mode_util__TypeTable_21);
                }
                {
                  check_hlds__mode_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__mode_util__TypeTable_21, check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeDefn_22);
                }
                if (check_hlds__mode_util__succeeded)
                  {
                    {
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeParams_23);
                    }
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeBody_24);
                    }
                    check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__mode_util__succeeded)
                      {
                        check_hlds__mode_util__Constructors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 0)));
                        check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 1)));
                        check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 2)));
                        check_hlds__mode_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 3)));
                        check_hlds__mode_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 4)));
                        check_hlds__mode_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 5)));
                        check_hlds__mode_util__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
                        check_hlds__mode_util__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 7)));
                      }
                  }
              }
          }
        if (check_hlds__mode_util__succeeded)
          {
            MR_Word check_hlds__mode_util__PropagatedResult0_31;
            MR_Word check_hlds__mode_util__PropagatedTypeCtor_32;
            MR_Word check_hlds__mode_util__V_26_26;
            MR_Word check_hlds__mode_util__V_27_27;
            MR_Word check_hlds__mode_util__V_28_28;
            MR_Word check_hlds__mode_util__V_29_29;
            MR_Word check_hlds__mode_util__V_30_30;

            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
                check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
                check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
                check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
                check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
                check_hlds__mode_util__PropagatedResult0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__PropagatedResult0_31)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__mode_util__succeeded)
                  {
                    check_hlds__mode_util__PropagatedTypeCtor_32 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__PropagatedResult0_31), (MR_Integer) 1);
                    {
                      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__mode_util__PropagatedTypeCtor_32, check_hlds__mode_util__TypeCtor_16);
                    }
                    if (check_hlds__mode_util__succeeded)
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__TypeParams_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
                check_hlds__mode_util__PropagatedResult_14 = check_hlds__mode_util__PropagatedResult0_31;
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
              }
            else
              {
                MR_Word check_hlds__mode_util__ArgSubst_33;
                MR_Word check_hlds__mode_util__BoundInsts1_34;

                {
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__TypeParams_23, check_hlds__mode_util__TypeArgs_17, &check_hlds__mode_util__ArgSubst_33);
                }
                {
                  check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ArgSubst_33, check_hlds__mode_util__TypeCtor_16, check_hlds__mode_util__TypeModule_18, check_hlds__mode_util__Constructors_25, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts1_34);
                }
                {
                  mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts1_34, &check_hlds__mode_util__BoundInsts_13);
                }
                check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__TypeCtor_16);
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
              }
          }
        else
          {
            check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
            check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
          }
      }
    switch (check_hlds__mode_util__ConstructNewInst_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__mode_util__Inst_8 = check_hlds__mode_util__Inst0_7;
        break;
      case (MR_Integer) 1:
        if ((check_hlds__mode_util__BoundInsts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__mode_util__Inst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        else
          {
            MR_Word check_hlds__mode_util__InstResults_37;

            switch (MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__mode_util__InstResults0_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    check_hlds__mode_util__InstResults_37 = check_hlds__mode_util__InstResults0_10;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mode_util__GroundNessResult0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
                  MR_Word check_hlds__mode_util__ContainsAnyResult_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
                  MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
                  MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
                  MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));

                  {
                    check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) (check_hlds__mode_util__GroundNessResult0_38));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) (check_hlds__mode_util__ContainsAnyResult_39));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__Inst_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_9));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__InstResults_37));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_13));
            }
          }
        break;
    }
  }
}

void MR_CALL 
check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Uniq_7,
  MR_Word check_hlds__mode_util__TypeCtor_8,
  MR_Word check_hlds__mode_util__Constructors_9,
  MR_Word * check_hlds__mode_util__BoundInsts_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__constructors_to_bound_insts_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__Uniq_7,
  MR_Word check_hlds__mode_util__TypeCtor_8,
  MR_Word check_hlds__mode_util__Constructors_9,
  MR_Word * check_hlds__mode_util__BoundInsts_10)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__Subst_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word check_hlds__mode_util__HeadVar__4_4,
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Insts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__Inst_14;
            MR_Word check_hlds__mode_util__Insts_15;

            {
              check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_31_31, check_hlds__mode_util__Inst0_12, &check_hlds__mode_util__Inst_14);
            }
            {
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Insts0_13, &check_hlds__mode_util__Insts_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_15));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__Mode0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Modes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__Mode_11;
            MR_Word check_hlds__mode_util__Modes_12;

            {
              check_hlds__mode_util__propagate_type_into_mode_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_26_26, check_hlds__mode_util__Mode0_9, &check_hlds__mode_util__Mode_11);
            }
            {
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_25_25, check_hlds__mode_util__Modes0_10, &check_hlds__mode_util__Modes_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_12));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_8_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
  MR_Word check_hlds__mode_util__Goal0_10,
  MR_Word * check_hlds__mode_util__Goal_11,
  MR_Word check_hlds__mode_util__VarTypes_12,
  MR_Word check_hlds__mode_util__InstVarSet_13,
  MR_Word check_hlds__mode_util__InstMap0_14,
  MR_Word check_hlds__mode_util__ModuleInfo0_15,
  MR_Word * check_hlds__mode_util__ModuleInfo_16)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__RI0_17;
    MR_Word check_hlds__mode_util__RI_19;
    MR_Word check_hlds__mode_util__V_18_18;
    MR_Word check_hlds__mode_util__V_20_20;

    {
      check_hlds__mode_util__RI0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo0_15));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_13));
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__Goal0_10, check_hlds__mode_util__Goal_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_14, &check_hlds__mode_util__V_18_18, check_hlds__mode_util__RI0_17, &check_hlds__mode_util__RI_19);
    }
    *check_hlds__mode_util__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 0)));
    check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 1)));
  }
}

void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0(
  MR_Word check_hlds__mode_util__RecomputeAtomic_6,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15,
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InstMap0_9;
    MR_Word check_hlds__mode_util__VarTypes_10;
    MR_Word check_hlds__mode_util__Goal0_11;
    MR_Word check_hlds__mode_util__InstVarSet_12;
    MR_Word check_hlds__mode_util__Goal_13;
    MR_Word check_hlds__mode_util__RI0_28;
    MR_Word check_hlds__mode_util__RI_30;
    MR_Word check_hlds__mode_util__V_29_29;
    MR_Word check_hlds__mode_util__V_31_31;

    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__mode_util__InstMap0_9);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__VarTypes_10);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__Goal0_11);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__InstVarSet_12);
    }
    {
      check_hlds__mode_util__RI0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 0) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_12));
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_6, check_hlds__mode_util__Goal0_11, &check_hlds__mode_util__Goal_13, check_hlds__mode_util__VarTypes_10, check_hlds__mode_util__InstMap0_9, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__RI0_28, &check_hlds__mode_util__RI_30);
    }
    *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 0)));
    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_util__Goal_13, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__inst_lookup_3_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__InstName_5,
  MR_Word * check_hlds__mode_util__Inst_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mode_util__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__UserInstTable_33;
          MR_Integer check_hlds__mode_util__Arity_34;
          MR_Word check_hlds__mode_util__InstTable_66;
          MR_Word check_hlds__mode_util__InstDefn_35;
          MR_Word check_hlds__mode_util__V_48_48;
          MR_Box check_hlds__mode_util__conv0_InstDefn_35;

          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_66);
          }
          {
            hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__mode_util__InstTable_66, &check_hlds__mode_util__UserInstTable_33);
          }
          {
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_32, &check_hlds__mode_util__Arity_34);
          }
          {
            check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__Name_31));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Arity_34));
          }
          {
            check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__mode_util__UserInstTable_33, ((MR_Box) (check_hlds__mode_util__V_48_48)), &check_hlds__mode_util__conv0_InstDefn_35);
          }
          if (check_hlds__mode_util__succeeded)
            {
              check_hlds__mode_util__InstDefn_35 = ((MR_Word) check_hlds__mode_util__conv0_InstDefn_35);
              check_hlds__mode_util__succeeded = MR_TRUE;
            }
          if (check_hlds__mode_util__succeeded)
            {
              MR_Word check_hlds__mode_util__Params_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__InstBody_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util___VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 0)));
              MR_Word check_hlds__mode_util___MMTC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 3)));
              MR_Word check_hlds__mode_util___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 4)));
              MR_Word check_hlds__mode_util___Status_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 5)));

              if ((check_hlds__mode_util__InstBody_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
                }
              else
                {
                  MR_Word check_hlds__mode_util__Inst0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstBody_38, (MR_Integer) 0)));

                  {
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(check_hlds__mode_util__Params_37, check_hlds__mode_util__Args_32, check_hlds__mode_util__Inst0_82, check_hlds__mode_util__Inst_6);
                  }
                }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mode_util__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__Real_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
          MR_Word check_hlds__mode_util__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 3)));
          MR_Word check_hlds__mode_util__UnifyInstInfo_11;
          MR_Word check_hlds__mode_util__InstTable_12;
          MR_Word check_hlds__mode_util__UnifyInstTable_13;
          MR_Word check_hlds__mode_util__MaybeInstDet_14;

          {
            check_hlds__mode_util__UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 0) = ((MR_Box) (check_hlds__mode_util__Live_7));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 1) = ((MR_Box) (check_hlds__mode_util__Real_8));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 2) = ((MR_Box) (check_hlds__mode_util__InstA_9));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 3) = ((MR_Box) (check_hlds__mode_util__InstB_10));
          }
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_12);
          }
          {
            hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__mode_util__InstTable_12, &check_hlds__mode_util__UnifyInstTable_13);
          }
          {
            hlds__hlds_data__lookup_unify_inst_3_p_0(check_hlds__mode_util__UnifyInstTable_13, check_hlds__mode_util__UnifyInstInfo_11, &check_hlds__mode_util__MaybeInstDet_14);
          }
          if ((check_hlds__mode_util__MaybeInstDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
            }
          else
            {
              MR_Word check_hlds__mode_util__V_15_15;

              *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 0)));
              check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 1)));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mode_util__MergeInstInfo_16;
          MR_Word check_hlds__mode_util__MergeInstTable_17;
          MR_Word check_hlds__mode_util__MaybeInst_18;
          MR_Word check_hlds__mode_util__InstA_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
          MR_Word check_hlds__mode_util__InstB_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
          MR_Word check_hlds__mode_util__InstTable_51;

          {
            check_hlds__mode_util__MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 0) = ((MR_Box) (check_hlds__mode_util__InstA_49));
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 1) = ((MR_Box) (check_hlds__mode_util__InstB_50));
          }
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_51);
          }
          {
            hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__mode_util__InstTable_51, &check_hlds__mode_util__MergeInstTable_17);
          }
          {
            hlds__hlds_data__lookup_merge_inst_3_p_0(check_hlds__mode_util__MergeInstTable_17, check_hlds__mode_util__MergeInstInfo_16, &check_hlds__mode_util__MaybeInst_18);
          }
          if ((check_hlds__mode_util__MaybeInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
            }
          else
            *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_18, (MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__mode_util__SubInstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Uniq_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word check_hlds__mode_util__GroundInstInfo_21;
              MR_Word check_hlds__mode_util__GroundInstTable_22;
              MR_Word check_hlds__mode_util__Live_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word check_hlds__mode_util__Real_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word check_hlds__mode_util__InstTable_54;
              MR_Word check_hlds__mode_util__MaybeInstDet_55;

              {
                check_hlds__mode_util__GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_19));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_20 | ((((check_hlds__mode_util__Live_52 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_53 << (MR_Integer) 4)))))));
              }
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_54);
              }
              {
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__mode_util__InstTable_54, &check_hlds__mode_util__GroundInstTable_22);
              }
              {
                hlds__hlds_data__lookup_ground_inst_3_p_0(check_hlds__mode_util__GroundInstTable_22, check_hlds__mode_util__GroundInstInfo_21, &check_hlds__mode_util__MaybeInstDet_55);
              }
              if ((check_hlds__mode_util__MaybeInstDet_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
                }
              else
                {
                  MR_Word check_hlds__mode_util__V_23_23;

                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 0)));
                  check_hlds__mode_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 1)));
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__mode_util__AnyInstInfo_24;
              MR_Word check_hlds__mode_util__AnyInstTable_25;
              MR_Word check_hlds__mode_util__Live_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word check_hlds__mode_util__Real_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word check_hlds__mode_util__InstTable_58;
              MR_Word check_hlds__mode_util__MaybeInstDet_59;
              MR_Word check_hlds__mode_util__SubInstName_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Uniq_61 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);

              {
                check_hlds__mode_util__AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_60));
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_61 | ((((check_hlds__mode_util__Live_56 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_57 << (MR_Integer) 4)))))));
              }
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_58);
              }
              {
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__mode_util__InstTable_58, &check_hlds__mode_util__AnyInstTable_25);
              }
              {
                hlds__hlds_data__lookup_any_inst_3_p_0(check_hlds__mode_util__AnyInstTable_25, check_hlds__mode_util__AnyInstInfo_24, &check_hlds__mode_util__MaybeInstDet_59);
              }
              if ((check_hlds__mode_util__MaybeInstDet_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
                }
              else
                {
                  MR_Word check_hlds__mode_util__V_26_26;

                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 0)));
                  check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 1)));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__mode_util__SharedInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__SharedInstTable_28;
              MR_Word check_hlds__mode_util__InstTable_62;
              MR_Word check_hlds__mode_util__MaybeInst_63;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_62);
              }
              {
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__mode_util__InstTable_62, &check_hlds__mode_util__SharedInstTable_28);
              }
              {
                hlds__hlds_data__lookup_shared_inst_3_p_0(check_hlds__mode_util__SharedInstTable_28, check_hlds__mode_util__SharedInstName_27, &check_hlds__mode_util__MaybeInst_63);
              }
              if ((check_hlds__mode_util__MaybeInst_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
                }
              else
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_63, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__mode_util__NondetLiveInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__MostlyUniqInstTable_30;
              MR_Word check_hlds__mode_util__InstTable_64;
              MR_Word check_hlds__mode_util__MaybeInst_65;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_64);
              }
              {
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__mode_util__InstTable_64, &check_hlds__mode_util__MostlyUniqInstTable_30);
              }
              {
                hlds__hlds_data__lookup_mostly_uniq_inst_3_p_0(check_hlds__mode_util__MostlyUniqInstTable_30, check_hlds__mode_util__NondetLiveInstName_29, &check_hlds__mode_util__MaybeInst_65);
              }
              if ((check_hlds__mode_util__MaybeInst_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__mode_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
                }
              else
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_65, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__mode_util__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Subst_43;
              MR_Word check_hlds__mode_util__V_46_46;
              MR_Word check_hlds__mode_util__Uniq_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));

              {
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_43);
              }
              {
                check_hlds__mode_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_67));
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_43, check_hlds__mode_util__Type_42, check_hlds__mode_util__V_46_46, check_hlds__mode_util__Inst_6);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__mode_util__TypedInstName_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
              MR_Word check_hlds__mode_util__Inst0_45;
              MR_Word check_hlds__mode_util__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
              MR_Word check_hlds__mode_util__Subst_69;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__TypedInstName_44, &check_hlds__mode_util__Inst0_45);
              }
              {
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_69);
              }
              {
                check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_69, check_hlds__mode_util__Type_68, check_hlds__mode_util__Inst0_45, check_hlds__mode_util__Inst_6);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_final_insts_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Inst_8;
        MR_Word check_hlds__mode_util__Insts_9;
        MR_Word check_hlds__mode_util__V_10_10;

        {
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__V_10_10, &check_hlds__mode_util__Inst_8);
        }
        {
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
        }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__Inst_8;
        MR_Word check_hlds__mode_util__Insts_9;
        MR_Word check_hlds__mode_util__V_10_10;

        {
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__Inst_8, &check_hlds__mode_util__V_10_10);
        }
        {
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
        }
      }
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_final_inst_2_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__Mode_5)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Inst_6;
    MR_Word check_hlds__mode_util__V_7_7;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__V_7_7, &check_hlds__mode_util__Inst_6);
    }
    return check_hlds__mode_util__Inst_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_initial_inst_2_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__Mode_5)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Inst_6;
    MR_Word check_hlds__mode_util__V_7_7;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__Inst_6, &check_hlds__mode_util__V_7_7);
    }
    return check_hlds__mode_util__Inst_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__select_output_things_4_f_0(
  MR_Word check_hlds__mode_util__TypeInfo_for_Thing_28,
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__HeadThings_7,
  MR_Word check_hlds__mode_util__HeadModes_8,
  MR_Word check_hlds__mode_util__ThingTypes_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;
        MR_Word check_hlds__mode_util__OutputThings_10;

        if ((check_hlds__mode_util__HeadThings_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
              }
            }
        else
          {
            MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 1)));
            MR_Box check_hlds__mode_util__V_31_31 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 0));

            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
                }
              }
            else
              {
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
                MR_Word check_hlds__mode_util__ThingType_15;
                MR_Word check_hlds__mode_util__Top_16;
                MR_Word check_hlds__mode_util__InitialInst_36;
                MR_Word check_hlds__mode_util__FinalInst_37;
                MR_Box check_hlds__mode_util__conv0_ThingType_15;

                {
                  mercury__map__lookup_3_p_0(check_hlds__mode_util__TypeInfo_for_Thing_28, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__ThingTypes_9, check_hlds__mode_util__V_31_31, &check_hlds__mode_util__conv0_ThingType_15);
                }
                check_hlds__mode_util__ThingType_15 = ((MR_Word) check_hlds__mode_util__conv0_ThingType_15);
                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, &check_hlds__mode_util__InitialInst_36, &check_hlds__mode_util__FinalInst_37);
                }
                {
                  check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ThingType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__InitialInst_36, check_hlds__mode_util__FinalInst_37, &check_hlds__mode_util__Top_16);
                }
                switch (check_hlds__mode_util__Top_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__mode_util__HeadThings__tmp_copy_7 = check_hlds__mode_util__V_30_30;
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
                        check_hlds__mode_util__HeadThings_7 = check_hlds__mode_util__HeadThings__tmp_copy_7;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__mode_util__OutputThings1_17;

                      {
                        check_hlds__mode_util__OutputThings1_17 = check_hlds__mode_util__select_output_things_4_f_0(check_hlds__mode_util__TypeInfo_for_Thing_28, check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Modes_14, check_hlds__mode_util__ThingTypes_9);
                      }
                      {
                        check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 0) = check_hlds__mode_util__V_31_31;
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputThings1_17));
                      }
                    }
                    break;
                }
              }
          }
        return check_hlds__mode_util__OutputThings_10;
      }
      break;
    }
}

MR_Word MR_CALL 
check_hlds__mode_util__select_output_vars_4_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_6,
  MR_Word check_hlds__mode_util__HeadVars_7,
  MR_Word check_hlds__mode_util__HeadModes_8,
  MR_Word check_hlds__mode_util__VarTypes_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;
        MR_Word check_hlds__mode_util__OutputVars_10;

        if ((check_hlds__mode_util__HeadVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
              }
            }
        else
          {
            MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 0)));

            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
                }
              }
            else
              {
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
                MR_Word check_hlds__mode_util__VarType_15;
                MR_Word check_hlds__mode_util__Top_16;
                MR_Word check_hlds__mode_util__InitialInst_34;
                MR_Word check_hlds__mode_util__FinalInst_35;

                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_9, check_hlds__mode_util__V_29_29, &check_hlds__mode_util__VarType_15);
                }
                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, &check_hlds__mode_util__InitialInst_34, &check_hlds__mode_util__FinalInst_35);
                }
                {
                  check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__VarType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__InitialInst_34, check_hlds__mode_util__FinalInst_35, &check_hlds__mode_util__Top_16);
                }
                switch (check_hlds__mode_util__Top_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__mode_util__HeadVars__tmp_copy_7 = check_hlds__mode_util__V_28_28;
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
                        check_hlds__mode_util__HeadVars_7 = check_hlds__mode_util__HeadVars__tmp_copy_7;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__mode_util__OutputVars1_17;

                      {
                        check_hlds__mode_util__OutputVars1_17 = check_hlds__mode_util__select_output_vars_4_f_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Modes_14, check_hlds__mode_util__VarTypes_9);
                      }
                      {
                        check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 0) = ((MR_Box) (check_hlds__mode_util__V_29_29));
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputVars1_17));
                      }
                    }
                    break;
                }
              }
          }
        return check_hlds__mode_util__OutputVars_10;
      }
      break;
    }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__FromToInsts_6,
  MR_Word check_hlds__mode_util__Type_7,
  MR_Word * check_hlds__mode_util__TopFunctorMode_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_6, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_6, (MR_Integer) 1)));

    {
      check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__InitialInst_9, check_hlds__mode_util__FinalInst_10, check_hlds__mode_util__TopFunctorMode_8);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Mode_6,
  MR_Word check_hlds__mode_util__Type_7,
  MR_Word * check_hlds__mode_util__TopFunctorMode_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_9;
    MR_Word check_hlds__mode_util__FinalInst_10;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__InitialInst_9, &check_hlds__mode_util__FinalInst_10);
    }
    {
      check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__InitialInst_9, check_hlds__mode_util__FinalInst_10, check_hlds__mode_util__TopFunctorMode_8);
    }
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__TopFunctorMode_25;
            MR_Word check_hlds__mode_util__TopFunctorModes_26;
            MR_Word check_hlds__mode_util__InitialInst_33;
            MR_Word check_hlds__mode_util__FinalInst_34;

            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_28_28, &check_hlds__mode_util__InitialInst_33, &check_hlds__mode_util__FinalInst_34);
            }
            {
              check_hlds__mode_util__find_top_functor_mode_loop_over_notags_6_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Type_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__InitialInst_33, check_hlds__mode_util__FinalInst_34, &check_hlds__mode_util__TopFunctorMode_25);
            }
            {
              check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Types_24, &check_hlds__mode_util__TopFunctorModes_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__TopFunctorMode_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__TopFunctorModes_26));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__FromToInstsY_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__FromToInstsYs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__UnifyMode_20;
            MR_Word check_hlds__mode_util__UnifyModes_21;

            {
              check_hlds__mode_util__UnifyMode_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_20, 0) = ((MR_Box) (check_hlds__mode_util__V_23_23));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_20, 1) = ((MR_Box) (check_hlds__mode_util__FromToInstsY_18));
            }
            {
              check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(check_hlds__mode_util__V_22_22, check_hlds__mode_util__FromToInstsYs_19, &check_hlds__mode_util__UnifyModes_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__UnifyMode_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__UnifyModes_21));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_modes_4_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_util__ModeY_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__ModeYs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__mode_util__UnifyMode_25;
            MR_Word check_hlds__mode_util__UnifyModes_26;
            MR_Word check_hlds__mode_util__InitialX_33;
            MR_Word check_hlds__mode_util__FinalX_34;
            MR_Word check_hlds__mode_util__InitialY_35;
            MR_Word check_hlds__mode_util__FinalY_36;
            MR_Word check_hlds__mode_util__V_37_37;
            MR_Word check_hlds__mode_util__V_38_38;

            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_28_28, &check_hlds__mode_util__InitialX_33, &check_hlds__mode_util__FinalX_34);
            }
            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__ModeY_23, &check_hlds__mode_util__InitialY_35, &check_hlds__mode_util__FinalY_36);
            }
            {
              check_hlds__mode_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_37_37, 0) = ((MR_Box) (check_hlds__mode_util__InitialX_33));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_37_37, 1) = ((MR_Box) (check_hlds__mode_util__FinalX_34));
            }
            {
              check_hlds__mode_util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_38_38, 0) = ((MR_Box) (check_hlds__mode_util__InitialY_35));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_38_38, 1) = ((MR_Box) (check_hlds__mode_util__FinalY_36));
            }
            {
              check_hlds__mode_util__UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_25, 0) = ((MR_Box) (check_hlds__mode_util__V_37_37));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_25, 1) = ((MR_Box) (check_hlds__mode_util__V_38_38));
            }
            {
              check_hlds__mode_util__modes_to_unify_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__ModeYs_24, &check_hlds__mode_util__UnifyModes_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__mode_util__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__UnifyMode_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__UnifyModes_26));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_mode_3_p_0(
  MR_Word check_hlds__mode_util__FromToInstsX_4,
  MR_Word check_hlds__mode_util__FromToInstsY_5,
  MR_Word * check_hlds__mode_util__UnifyMode_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__UnifyMode_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__FromToInstsX_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FromToInstsY_5));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_mode_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__ModeX_6,
  MR_Word check_hlds__mode_util__ModeY_7,
  MR_Word * check_hlds__mode_util__UnifyMode_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialX_9;
    MR_Word check_hlds__mode_util__FinalX_10;
    MR_Word check_hlds__mode_util__InitialY_11;
    MR_Word check_hlds__mode_util__FinalY_12;
    MR_Word check_hlds__mode_util__V_13_13;
    MR_Word check_hlds__mode_util__V_14_14;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ModeX_6, &check_hlds__mode_util__InitialX_9, &check_hlds__mode_util__FinalX_10);
    }
    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ModeY_7, &check_hlds__mode_util__InitialY_11, &check_hlds__mode_util__FinalY_12);
    }
    {
      check_hlds__mode_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_13_13, 0) = ((MR_Box) (check_hlds__mode_util__InitialX_9));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_13_13, 1) = ((MR_Box) (check_hlds__mode_util__FinalX_10));
    }
    {
      check_hlds__mode_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_14_14, 0) = ((MR_Box) (check_hlds__mode_util__InitialY_11));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_14_14, 1) = ((MR_Box) (check_hlds__mode_util__FinalY_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__UnifyMode_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__V_13_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_14_14));
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_rhs_from_to_insts_1_f_0(
  MR_Word check_hlds__mode_util__UnifyMode_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__RHSFromToInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util___LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 0)));

    return check_hlds__mode_util__RHSFromToInsts_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_lhs_from_to_insts_1_f_0(
  MR_Word check_hlds__mode_util__UnifyMode_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__LHSFromToInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util___RHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 1)));

    return check_hlds__mode_util__LHSFromToInsts_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_rhs_mode_1_f_0(
  MR_Word check_hlds__mode_util__UnifyMode_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__RHSMode_4;
    MR_Word check_hlds__mode_util__RHSFromToInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util__RHSInitInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RHSFromToInsts_6, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__RHSFinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RHSFromToInsts_6, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util___LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 0)));

    {
      check_hlds__mode_util__RHSMode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RHSMode_4, 0) = ((MR_Box) (check_hlds__mode_util__RHSInitInst_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RHSMode_4, 1) = ((MR_Box) (check_hlds__mode_util__RHSFinalInst_8));
    }
    return check_hlds__mode_util__RHSMode_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_modes_to_lhs_mode_1_f_0(
  MR_Word check_hlds__mode_util__UnifyMode_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__LHSMode_4;
    MR_Word check_hlds__mode_util__LHSFromToInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__LHSInitInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LHSFromToInsts_5, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__LHSFinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LHSFromToInsts_5, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util___RHSFromToInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_3, (MR_Integer) 1)));

    {
      check_hlds__mode_util__LHSMode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__LHSMode_4, 0) = ((MR_Box) (check_hlds__mode_util__LHSInitInst_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__LHSMode_4, 1) = ((MR_Box) (check_hlds__mode_util__LHSFinalInst_8));
    }
    return check_hlds__mode_util__LHSMode_4;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_unused_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__FromToInsts_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 1)));

    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_unused_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__Mode_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5;
    MR_Word check_hlds__mode_util__FinalInst_6;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_fully_output_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__FromToInsts_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 1)));

    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_output_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__Mode_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5;
    MR_Word check_hlds__mode_util__FinalInst_6;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_output_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__FromToInsts_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 1)));

    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_output_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__Mode_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5;
    MR_Word check_hlds__mode_util__FinalInst_6;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    if (check_hlds__mode_util__succeeded)
      {
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_fully_input_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__FromToInsts_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util___FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 1)));

    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_input_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__Mode_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5;
    MR_Word check_hlds__mode_util___FinalInst_6;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__from_to_insts_is_input_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__FromToInsts_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util___FinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_4, (MR_Integer) 1)));

    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_is_input_2_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_3,
  MR_Word check_hlds__mode_util__Mode_4)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitialInst_5;
    MR_Word check_hlds__mode_util___FinalInst_6;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
    {
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
    return check_hlds__mode_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
  MR_Word check_hlds__mode_util__HeadVar__1_1,
  MR_Word check_hlds__mode_util__HeadVar__2_2,
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_util__succeeded;

        if (((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
          {
            *check_hlds__mode_util__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
            *check_hlds__mode_util__HeadVar__4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__mode_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__mode_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__mode_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer check_hlds__mode_util__Arity_13;
            MR_Word check_hlds__mode_util__Modes_14;
            MR_Word check_hlds__mode_util__ModeDefns_15;
            MR_Word check_hlds__mode_util__HLDS_Mode_17;
            MR_Word check_hlds__mode_util__Params_21;
            MR_Word check_hlds__mode_util__ModeDefn_22;
            MR_Word check_hlds__mode_util__Mode0_25;
            MR_Word check_hlds__mode_util__Mode_26;
            MR_Word check_hlds__mode_util__HLDS_Mode0_16;
            MR_Word check_hlds__mode_util__V_27_27;
            MR_Box check_hlds__mode_util__conv0_HLDS_Mode0_16;
            MR_Word check_hlds__mode_util___VarSet_20;
            MR_Word check_hlds__mode_util___Context_23;
            MR_Word check_hlds__mode_util___Status_24;

            {
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Arity_13);
            }
            {
              hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_util__HeadVar__1_1, &check_hlds__mode_util__Modes_14);
            }
            {
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(check_hlds__mode_util__Modes_14, &check_hlds__mode_util__ModeDefns_15);
            }
            {
              check_hlds__mode_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (check_hlds__mode_util__Name_9));
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
            }
            {
              check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_27_27)), &check_hlds__mode_util__conv0_HLDS_Mode0_16);
            }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__HLDS_Mode0_16 = ((MR_Word) check_hlds__mode_util__conv0_HLDS_Mode0_16);
                check_hlds__mode_util__succeeded = MR_TRUE;
              }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util__HLDS_Mode_17 = check_hlds__mode_util__HLDS_Mode0_16;
                check_hlds__mode_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__mode_util__TypeCtorInfo_33_33;
                MR_Word check_hlds__mode_util__TypeCtorInfo_34_34;
                MR_String check_hlds__mode_util__String_18;
                MR_Word check_hlds__mode_util__BuiltinName_19;
                MR_Word check_hlds__mode_util__V_28_28;
                MR_Word check_hlds__mode_util__V_29_29;
                MR_Box check_hlds__mode_util__conv1_HLDS_Mode_17;

                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__Name_9)) == (MR_mktag((MR_Integer) 0)));
                if (check_hlds__mode_util__succeeded)
                  {
                    check_hlds__mode_util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Name_9, (MR_Integer) 0)));
                    {
                      check_hlds__mode_util__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    check_hlds__mode_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0;
                    check_hlds__mode_util__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
                    {
                      check_hlds__mode_util__BuiltinName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 0) = ((MR_Box) (check_hlds__mode_util__V_28_28));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 1) = ((MR_Box) (check_hlds__mode_util__String_18));
                    }
                    {
                      check_hlds__mode_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 0) = ((MR_Box) (check_hlds__mode_util__BuiltinName_19));
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
                    }
                    {
                      check_hlds__mode_util__succeeded = mercury__map__search_3_p_0(check_hlds__mode_util__TypeCtorInfo_33_33, check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_29_29)), &check_hlds__mode_util__conv1_HLDS_Mode_17);
                    }
                    if (check_hlds__mode_util__succeeded)
                      {
                        check_hlds__mode_util__HLDS_Mode_17 = ((MR_Word) check_hlds__mode_util__conv1_HLDS_Mode_17);
                        check_hlds__mode_util__succeeded = MR_TRUE;
                      }
                  }
              }
            if (check_hlds__mode_util__succeeded)
              {
                check_hlds__mode_util___VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 0)));
                check_hlds__mode_util__Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 1)));
                check_hlds__mode_util__ModeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 2)));
                check_hlds__mode_util___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 3)));
                check_hlds__mode_util___Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 4)));
                check_hlds__mode_util__Mode0_25 = (MR_Word) check_hlds__mode_util__ModeDefn_22;
                {
                  parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(check_hlds__mode_util__Mode0_25, check_hlds__mode_util__Params_21, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Mode_26);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__mode_util__HeadVar__2__tmp_copy_2 = check_hlds__mode_util__Mode_26;

                  check_hlds__mode_util__HeadVar__2_2 = check_hlds__mode_util__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return check_hlds__mode_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
check_hlds__mode_util__mode_get_from_to_insts_3_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__Mode_5,
  MR_Word * check_hlds__mode_util__FromToInsts_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitInst_7;
    MR_Word check_hlds__mode_util__FinalInst_8;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__InitInst_7, &check_hlds__mode_util__FinalInst_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_util__FromToInsts_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__InitInst_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_8));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
  MR_Word check_hlds__mode_util__ModuleInfo_5,
  MR_Word check_hlds__mode_util__Mode_6,
  MR_Word * check_hlds__mode_util__InitInst_7,
  MR_Word * check_hlds__mode_util__FinalInst_8)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__InitInstPrime_9;
    MR_Word check_hlds__mode_util__FinalInstPrime_10;

    {
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__InitInstPrime_9, &check_hlds__mode_util__FinalInstPrime_10);
    }
    if (check_hlds__mode_util__succeeded)
      {
        *check_hlds__mode_util__InitInst_7 = check_hlds__mode_util__InitInstPrime_9;
        *check_hlds__mode_util__FinalInst_8 = check_hlds__mode_util__FinalInstPrime_10;
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

void MR_CALL 
check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(
  MR_Word check_hlds__mode_util__UnifyMode_4,
  MR_Word * check_hlds__mode_util__LHSInsts_5,
  MR_Word * check_hlds__mode_util__RHSInsts_6)
{
  {
    MR_bool check_hlds__mode_util__succeeded;

    *check_hlds__mode_util__LHSInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_4, (MR_Integer) 0)));
    *check_hlds__mode_util__RHSInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyMode_4, (MR_Integer) 1)));
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_final_inst_1_f_0(
  MR_Word check_hlds__mode_util__FromToInsts_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Final_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 1)));
    MR_Word check_hlds__mode_util___Init_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 0)));

    return check_hlds__mode_util__Final_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(
  MR_Word check_hlds__mode_util__FromToInsts_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Init_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util___Final_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 1)));

    return check_hlds__mode_util__Init_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_to_from_to_insts_2_f_0(
  MR_Word check_hlds__mode_util__ModuleInfo_4,
  MR_Word check_hlds__mode_util__Mode_5)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__FromToInsts_6;
    MR_Word check_hlds__mode_util__Init_7;
    MR_Word check_hlds__mode_util__Final_8;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__Init_7, &check_hlds__mode_util__Final_8);
    }
    {
      check_hlds__mode_util__FromToInsts_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_6, 0) = ((MR_Box) (check_hlds__mode_util__Init_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_6, 1) = ((MR_Box) (check_hlds__mode_util__Final_8));
    }
    return check_hlds__mode_util__FromToInsts_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_mode_1_f_0(
  MR_Word check_hlds__mode_util__FromToInsts_3)
{
  {
    MR_bool check_hlds__mode_util__succeeded;
    MR_Word check_hlds__mode_util__Mode_4;
    MR_Word check_hlds__mode_util__Init_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_util__Final_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__FromToInsts_3, (MR_Integer) 1)));

    {
      check_hlds__mode_util__Mode_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_4, 0) = ((MR_Box) (check_hlds__mode_util__Init_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_4, 1) = ((MR_Box) (check_hlds__mode_util__Final_6));
    }
    return check_hlds__mode_util__Mode_4;
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

/* :- end_module check_hlds.mode_util. */
