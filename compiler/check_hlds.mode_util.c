/*
** Automatically generated from `mode_util.m'
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


/* :- module check_hlds.mode_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_util__init
ENDINIT
*/

#include "check_hlds.mode_util.mih"


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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 145 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0;

#line 151 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1;

#line 154 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2];

#line 157 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2];

#line 160 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2];

#line 163 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 166 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2];

#line 169 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2];

#line 172 "check_hlds.mode_util.c"
static const MR_DuFunctorDesc check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0;

#line 175 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1];

#line 178 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1];

#line 181 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1];

#line 184 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1];

#line 187 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 190 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 192 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 195 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 198 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 200 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 202 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 205 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 208 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 210 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 213 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 216 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 218 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 220 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 1176 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1176 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1176 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11);

#line 1436 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10);

#line 1400 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9);

#line 929 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 929 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6);

#line 1610 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1610__1_2_p_0(
#line 1610 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_65,
#line 1610 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_66);

#line 1024 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1024__1_2_p_0(
#line 1024 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_53,
#line 1024 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_54);

#line 1016 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1016__1_3_p_0(
#line 1016 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsName_28,
#line 1016 "mode_util.m"
  MR_Integer check_hlds__mode_util__Arity_29,
#line 1016 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_50);

#line 1166 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1166 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3);

#line 1166 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2);

#line 1651 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1651 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1651 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1651 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7);

#line 1610 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1610 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1610 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1610 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

#line 1563 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57);

#line 1534 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1534 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1534 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);

#line 1504 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1504 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1504 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8);

#line 1460 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1460 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1460 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1460 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35);

#line 1417 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24);

#line 1381 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22);

#line 1363 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8);

#line 1324 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1324 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1324 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1315 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1315 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1315 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1185 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106);

#line 1129 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40);

#line 1052 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__inst_lookup_subst_args_5_p_0(
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__InstBody_6,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Params_7,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Name_8,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_9,
#line 1052 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 1040 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1040 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1040 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1040 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6);

#line 1023 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0_2(
#line 1023 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1023 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1023 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

#line 1016 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0_1(
#line 1016 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1016 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1000 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0(
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1000 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7);

#line 977 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 977 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8);

#line 957 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_2_4_p_0_1(
#line 957 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 957 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 957 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

#line 950 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_2_4_p_0(
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInsts0_7,
#line 950 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_8);

#line 943 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 943 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3);

#line 903 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 903 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 903 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 903 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6);

#line 781 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 781 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 639 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 639 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 636 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 636 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 600 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 600 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8);

#line 452 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_2_3_p_0(
#line 452 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 452 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 452 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7);

#line 409 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 409 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8);

#line 295 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 295 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10);


static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[7][3];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[9][2];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[1][7];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[3][5];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_6[1][1];




static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[7][3] = {
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
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_3_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_1[1])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[1][7] = {
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

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_1[2])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 950 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 958 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 966 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
  (MR_String) "recompute_atomic_instmap_deltas",
  (MR_Integer) 0
};

#line 972 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
  (MR_String) "do_not_recompute_atomic_instmap_deltas",
  (MR_Integer) 1
};

#line 978 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

#line 984 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

#line 990 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 996 "check_hlds.mode_util.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001)),
  ((MR_Box) (check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001)),
  (MR_String) "check_hlds.mode_util",
  (MR_String) "recompute_atomic_instmap_deltas",
  {
    check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0
  },
  {
    check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0
};

#line 1017 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1025 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
};

#line 1031 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2] = {
  (MR_String) "ri_module_info",
  (MR_String) "ri_inst_varset"
};

#line 1037 "check_hlds.mode_util.c"
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
  NULL
};

#line 1052 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 1057 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0
  }
};

#line 1066 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 1071 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1] = {
  (MR_Integer) 0
};

#line 1076 "check_hlds.mode_util.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_util____Unify____recompute_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_util____Compare____recompute_info_0_0_10001)),
  (MR_String) "check_hlds.mode_util",
  (MR_String) "recompute_info",
  {
    check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0
  },
  {
    check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0
};

#line 1097 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 1100 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1102 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1104 "check_hlds.mode_util.c"
{
#line 1106 "check_hlds.mode_util.c"
  {
#line 1108 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1111 "check_hlds.mode_util.c"
    {
#line 1113 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1116 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1118 "check_hlds.mode_util.c"
  }
#line 1120 "check_hlds.mode_util.c"
}

#line 1123 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 1126 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1128 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1130 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1132 "check_hlds.mode_util.c"
{
#line 1134 "check_hlds.mode_util.c"
  {
#line 1136 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1139 "check_hlds.mode_util.c"
    {
#line 1141 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1144 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1146 "check_hlds.mode_util.c"
  }
#line 1148 "check_hlds.mode_util.c"
}

#line 1151 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 1154 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1156 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1158 "check_hlds.mode_util.c"
{
#line 1160 "check_hlds.mode_util.c"
  {
#line 1162 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1165 "check_hlds.mode_util.c"
    {
#line 1167 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_info_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1170 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1172 "check_hlds.mode_util.c"
  }
#line 1174 "check_hlds.mode_util.c"
}

#line 1177 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 1180 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1182 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1184 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1186 "check_hlds.mode_util.c"
{
#line 1188 "check_hlds.mode_util.c"
  {
#line 1190 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1193 "check_hlds.mode_util.c"
    {
#line 1195 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_info_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1198 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1200 "check_hlds.mode_util.c"
  }
#line 1202 "check_hlds.mode_util.c"
}

#line 1176 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1176 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1176 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1176 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11)
#line 1176 "mode_util.m"
{
#line 1180 "mode_util.m"
  {
#line 1180 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1180 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1180 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo_9;
#line 1181 "mode_util.m"
    MR_Word check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1183 "mode_util.m"
    MR_Word check_hlds__mode_util__V_15_15;
#line 1183 "mode_util.m"
    MR_Word check_hlds__mode_util__V_14_14;

#line 1182 "mode_util.m"
    {
#line 1182 "mode_util.m"
      hlds__instmap__merge_instmap_delta_8_p_0(check_hlds__mode_util__V_17_17, check_hlds__mode_util__V_18_18, check_hlds__mode_util__V_19_19, check_hlds__mode_util__V_20_20, check_hlds__mode_util__V_21_21, check_hlds__mode_util__R_6, check_hlds__mode_util__ModuleInfo0_8, &check_hlds__mode_util__ModuleInfo_9);
    }
#line 1183 "mode_util.m"
    check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1183 "mode_util.m"
    check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1183 "mode_util.m"
    {
#line 1183 "mode_util.m"
      MR_Word base;
#line 1183 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "mode_util.m"
      *check_hlds__mode_util__STATE_VARIABLE_RI_11 = base;
#line 1183 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_9));
#line 1183 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_15_15));
#line 1183 "mode_util.m"
    }
#line 1180 "mode_util.m"
  }
#line 1176 "mode_util.m"
}

#line 1436 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1436 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1436 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10)
#line 1436 "mode_util.m"
{
#line 1441 "mode_util.m"
  {
#line 1441 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1441 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1441 "mode_util.m"
      {
#line 1441 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "mode_util.m"
        *check_hlds__mode_util__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_10 = check_hlds__mode_util__STATE_VARIABLE_RI_0_9;
#line 1441 "mode_util.m"
      }
#line 1441 "mode_util.m"
    else
#line 1445 "mode_util.m"
      {
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Case_23;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases_24;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_28;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_29;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 0)));
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 1)));
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 2)));
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Type_34;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_35;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_36;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_37;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_41_41;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_42_42;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_44_44;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_59;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_60;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_71;
#line 1445 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_72;
#line 1181 "mode_util.m"
        MR_Word check_hlds__mode_util__V_62_62;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_64_64;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_63_63;
#line 1181 "mode_util.m"
        MR_Word check_hlds__mode_util__V_74_74;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_76_76;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_75_75;

#line 1447 "mode_util.m"
        {
#line 1447 "mode_util.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__2_2, &check_hlds__mode_util__Type_34);
        }
#line 1181 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1181 "mode_util.m"
        check_hlds__mode_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1182 "mode_util.m"
        {
#line 1182 "mode_util.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMap1_35, check_hlds__mode_util__ModuleInfo0_59, &check_hlds__mode_util__ModuleInfo_60);
        }
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        {
#line 1183 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_60));
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 1) = ((MR_Box) (check_hlds__mode_util__V_64_64));
#line 1183 "mode_util.m"
        }
#line 1450 "mode_util.m"
        {
#line 1450 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_33, &check_hlds__mode_util__Goal_36, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__InstMap1_35, &check_hlds__mode_util__InstMapDelta0_37, check_hlds__mode_util__STATE_VARIABLE_RI_41_41, &check_hlds__mode_util__STATE_VARIABLE_RI_42_42);
        }
#line 1181 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1181 "mode_util.m"
        check_hlds__mode_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1182 "mode_util.m"
        {
#line 1182 "mode_util.m"
          hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, check_hlds__mode_util__InstMapDelta0_37, &check_hlds__mode_util__InstMapDelta_28, check_hlds__mode_util__ModuleInfo0_71, &check_hlds__mode_util__ModuleInfo_72);
        }
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        {
#line 1183 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_72));
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (check_hlds__mode_util__V_76_76));
#line 1183 "mode_util.m"
        }
#line 1454 "mode_util.m"
        {
#line 1454 "mode_util.m"
          check_hlds__mode_util__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 0) = ((MR_Box) (check_hlds__mode_util__MainConsId_31));
#line 1454 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 1) = ((MR_Box) (check_hlds__mode_util__OtherConsIds_32));
#line 1454 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 2) = ((MR_Box) (check_hlds__mode_util__Goal_36));
#line 1454 "mode_util.m"
        }
#line 1455 "mode_util.m"
        {
#line 1455 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Cases0_22, &check_hlds__mode_util__Cases_24, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMapDeltas_29, check_hlds__mode_util__STATE_VARIABLE_RI_44_44, check_hlds__mode_util__STATE_VARIABLE_RI_10);
        }
#line 1444 "mode_util.m"
        {
#line 1444 "mode_util.m"
          MR_Word base;
#line 1444 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1444 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Case_23));
#line 1444 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Cases_24));
#line 1444 "mode_util.m"
        }
#line 1445 "mode_util.m"
        {
#line 1445 "mode_util.m"
          MR_Word base;
#line 1445 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "mode_util.m"
          *check_hlds__mode_util__HeadVar__8_8 = base;
#line 1445 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_28));
#line 1445 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_29));
#line 1445 "mode_util.m"
        }
#line 1445 "mode_util.m"
      }
#line 1441 "mode_util.m"
  }
#line 1436 "mode_util.m"
}

#line 1400 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1400 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1400 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9)
#line 1400 "mode_util.m"
{
#line 1405 "mode_util.m"
  {
#line 1405 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1405 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1405 "mode_util.m"
      {
#line 1405 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1406 "mode_util.m"
        *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1406 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_9 = check_hlds__mode_util__STATE_VARIABLE_RI_0_8;
#line 1405 "mode_util.m"
      }
#line 1405 "mode_util.m"
    else
#line 1409 "mode_util.m"
      {
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_20;
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_21;
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_25;
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_26;
#line 1409 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1410 "mode_util.m"
        {
#line 1410 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_18, &check_hlds__mode_util__Goal_20, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDelta_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_8, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1412 "mode_util.m"
        {
#line 1412 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goals0_19, &check_hlds__mode_util__Goals_21, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDeltas_26, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_9);
        }
#line 1408 "mode_util.m"
        {
#line 1408 "mode_util.m"
          MR_Word base;
#line 1408 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1408 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_20));
#line 1408 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_21));
#line 1408 "mode_util.m"
        }
#line 1409 "mode_util.m"
        {
#line 1409 "mode_util.m"
          MR_Word base;
#line 1409 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1409 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_25));
#line 1409 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_26));
#line 1409 "mode_util.m"
        }
#line 1409 "mode_util.m"
      }
#line 1405 "mode_util.m"
  }
#line 1400 "mode_util.m"
}

#line 929 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 929 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 929 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6)
#line 929 "mode_util.m"
{
#line 933 "mode_util.m"
  {
#line 933 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 933 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "mode_util.m"
      *check_hlds__mode_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 933 "mode_util.m"
    else
#line 935 "mode_util.m"
      {
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_17;
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_18;
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 2)));
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 3)));
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_24;
#line 935 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_25;
#line 935 "mode_util.m"
        MR_Word check_hlds__mode_util__V_26_26;
#line 936 "mode_util.m"
        MR_Word check_hlds__mode_util___ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 0)));
#line 936 "mode_util.m"
        MR_Word check_hlds__mode_util___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 1)));
#line 936 "mode_util.m"
        MR_Word check_hlds__mode_util___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 4)));

#line 937 "mode_util.m"
        {
#line 937 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_22, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__Insts_24);
        }
#line 938 "mode_util.m"
        {
#line 938 "mode_util.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Insts_24, &check_hlds__mode_util__Arity_25);
        }
#line 939 "mode_util.m"
        {
#line 939 "mode_util.m"
          check_hlds__mode_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_26_26, 1) = ((MR_Box) (check_hlds__mode_util__Name_21));
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_26_26, 2) = ((MR_Box) (check_hlds__mode_util__Arity_25));
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_26_26, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 939 "mode_util.m"
        }
#line 939 "mode_util.m"
        {
#line 939 "mode_util.m"
          check_hlds__mode_util__BoundInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 0) = ((MR_Box) (check_hlds__mode_util__V_26_26));
#line 939 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 1) = ((MR_Box) (check_hlds__mode_util__Insts_24));
#line 939 "mode_util.m"
        }
#line 940 "mode_util.m"
        {
#line 940 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__Ctors_15, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__BoundInsts_18);
        }
#line 935 "mode_util.m"
        {
#line 935 "mode_util.m"
          MR_Word base;
#line 935 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "mode_util.m"
          *check_hlds__mode_util__HeadVar__6_6 = base;
#line 935 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_17));
#line 935 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_18));
#line 935 "mode_util.m"
        }
#line 935 "mode_util.m"
      }
#line 933 "mode_util.m"
  }
#line 929 "mode_util.m"
}

#line 163 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 163 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 163 "mode_util.m"
{
#line 925 "mode_util.m"
  {
#line 925 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 925 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 927 "mode_util.m"
    {
#line 927 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "mode_util.m"
    }
#line 926 "mode_util.m"
    {
#line 926 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
#line 926 "mode_util.m"
      return;
    }
#line 925 "mode_util.m"
  }
#line 163 "mode_util.m"
}

#line 155 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 155 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 155 "mode_util.m"
{
#line 920 "mode_util.m"
  {
#line 920 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 920 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 922 "mode_util.m"
    {
#line 922 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 922 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 922 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 922 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "mode_util.m"
    }
#line 921 "mode_util.m"
    {
#line 921 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
#line 921 "mode_util.m"
      return;
    }
#line 920 "mode_util.m"
  }
#line 155 "mode_util.m"
}

#line 1610 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1610__1_2_p_0(
#line 1610 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_65,
#line 1610 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_66)
#line 1610 "mode_util.m"
{
#line 1610 "mode_util.m"
  {
#line 1610 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1610 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_35;
#line 1610 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_37;
#line 1610 "mode_util.m"
    MR_Word check_hlds__mode_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_65, (MR_Integer) 0)));
#line 1610 "mode_util.m"
    MR_Word check_hlds__mode_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_65, (MR_Integer) 1)));
#line 1612 "mode_util.m"
    MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 0)));
#line 1612 "mode_util.m"
    MR_Word check_hlds__mode_util__V_36_36;

#line 1612 "mode_util.m"
    check_hlds__mode_util__Inst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 1)));
#line 1612 "mode_util.m"
    check_hlds__mode_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 0)));
#line 1612 "mode_util.m"
    check_hlds__mode_util__Inst_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 1)));
#line 1613 "mode_util.m"
    {
#line 1613 "mode_util.m"
      MR_Word base;
#line 1613 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "mode_util.m"
      *check_hlds__mode_util__HeadVar__2_66 = base;
#line 1613 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst0_35));
#line 1613 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__Inst_37));
#line 1613 "mode_util.m"
    }
#line 1610 "mode_util.m"
  }
#line 1610 "mode_util.m"
}

#line 1024 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1024__1_2_p_0(
#line 1024 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_53,
#line 1024 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_54)
#line 1024 "mode_util.m"
{
#line 1024 "mode_util.m"
  {
#line 1024 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1024 "mode_util.m"
    MR_Word check_hlds__mode_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_53, (MR_Integer) 0)));
#line 1024 "mode_util.m"
    MR_Word check_hlds__mode_util__V_59_59;
#line 1024 "mode_util.m"
    MR_Word check_hlds__mode_util__V_60_60;

#line 1024 "mode_util.m"
    *check_hlds__mode_util__HeadVar__2_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_53, (MR_Integer) 1)));
#line 1024 "mode_util.m"
    check_hlds__mode_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_53, (MR_Integer) 2)));
#line 1024 "mode_util.m"
    check_hlds__mode_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_53, (MR_Integer) 3)));
#line 1024 "mode_util.m"
  }
#line 1024 "mode_util.m"
}

#line 1016 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1016__1_3_p_0(
#line 1016 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsName_28,
#line 1016 "mode_util.m"
  MR_Integer check_hlds__mode_util__Arity_29,
#line 1016 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_50)
#line 1016 "mode_util.m"
{
#line 1016 "mode_util.m"
  {
#line 1016 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1016 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_61_61;
#line 1016 "mode_util.m"
    MR_Word check_hlds__mode_util__CtorArgs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_50, (MR_Integer) 3)));
#line 1016 "mode_util.m"
    MR_Word check_hlds__mode_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_50, (MR_Integer) 2)));
#line 1016 "mode_util.m"
    MR_Integer check_hlds__mode_util__V_66_66;
#line 1017 "mode_util.m"
    MR_Word check_hlds__mode_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_50, (MR_Integer) 0)));
#line 1017 "mode_util.m"
    MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_50, (MR_Integer) 1)));
#line 1017 "mode_util.m"
    MR_Word check_hlds__mode_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_50, (MR_Integer) 4)));

#line 1017 "mode_util.m"
    {
#line 1017 "mode_util.m"
      check_hlds__mode_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__mode_util__ConsName_28, check_hlds__mode_util__V_65_65);
    }
#line 1016 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1016 "mode_util.m"
      {
#line 1894 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1018 "mode_util.m"
        {
#line 1018 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_61_61, check_hlds__mode_util__CtorArgs_35, &check_hlds__mode_util__V_66_66);
        }
#line 1018 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__Arity_29 == check_hlds__mode_util__V_66_66);
#line 1016 "mode_util.m"
      }
#line 1016 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 1016 "mode_util.m"
  }
#line 1016 "mode_util.m"
}

#line 1166 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1166 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3)
#line 1166 "mode_util.m"
{
#line 1166 "mode_util.m"
  {
#line 1166 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1166 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_9 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
#line 1166 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_10 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

#line 1166 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_9 == check_hlds__mode_util__CastY_10);
#line 1166 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1936 "check_hlds.mode_util.c"
      *check_hlds__mode_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1166 "mode_util.m"
    else
#line 1166 "mode_util.m"
      {
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_8_8;

#line 1166 "mode_util.m"
        {
#line 1166 "mode_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_util__V_8_8, check_hlds__mode_util__V_4_4, check_hlds__mode_util__V_6_6);
        }
#line 1958 "check_hlds.mode_util.c"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_8_8 == (MR_Integer) 0);
#line 1166 "mode_util.m"
        check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1166 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1166 "mode_util.m"
          *check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__V_8_8;
#line 1166 "mode_util.m"
        else
#line 1166 "mode_util.m"
          {
#line 1166 "mode_util.m"
            {
#line 1166 "mode_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[3], check_hlds__mode_util__HeadVar__1_1, ((MR_Box) (check_hlds__mode_util__V_5_5)), ((MR_Box) (check_hlds__mode_util__V_7_7)));
#line 1166 "mode_util.m"
              return;
            }
#line 1166 "mode_util.m"
          }
#line 1166 "mode_util.m"
      }
#line 1166 "mode_util.m"
  }
#line 1166 "mode_util.m"
}

#line 1166 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1166 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2)
#line 1166 "mode_util.m"
{
#line 1166 "mode_util.m"
  {
#line 1166 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1166 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_7 = (MR_Integer) check_hlds__mode_util__HeadVar__1_1;
#line 1166 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_8 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;

#line 1166 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_7 == check_hlds__mode_util__CastY_8);
#line 1166 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1166 "mode_util.m"
      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1166 "mode_util.m"
    else
#line 1166 "mode_util.m"
      {
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeInfo_10_10;
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1166 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));

#line 2025 "check_hlds.mode_util.c"
        {
#line 2027 "check_hlds.mode_util.c"
          check_hlds__mode_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_util__V_3_3, check_hlds__mode_util__V_5_5);
        }
#line 1166 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1166 "mode_util.m"
          {
#line 2034 "check_hlds.mode_util.c"
            check_hlds__mode_util__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_util_scalar_common_2[3];
#line 2036 "check_hlds.mode_util.c"
            {
#line 2038 "check_hlds.mode_util.c"
              return check_hlds__mode_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_util__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_util__V_4_4)), ((MR_Box) (check_hlds__mode_util__V_6_6)));
            }
#line 1166 "mode_util.m"
          }
#line 1166 "mode_util.m"
      }
#line 1166 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 1166 "mode_util.m"
  }
#line 1166 "mode_util.m"
}

#line 116 "mode_util.m"
void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(
#line 116 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 116 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 116 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3)
#line 116 "mode_util.m"
{
#line 116 "mode_util.m"
  {
#line 116 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 116 "mode_util.m"
    MR_Integer check_hlds__mode_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
#line 116 "mode_util.m"
    MR_Integer check_hlds__mode_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

#line 116 "mode_util.m"
    {
#line 116 "mode_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Cast_HeadVar1_4, check_hlds__mode_util__Cast_HeadVar2_5);
#line 116 "mode_util.m"
      return;
    }
#line 116 "mode_util.m"
  }
#line 116 "mode_util.m"
}

#line 116 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(
#line 116 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_1,
#line 116 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2)
#line 116 "mode_util.m"
{
#line 2093 "check_hlds.mode_util.c"
  {
#line 2095 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_1 == check_hlds__mode_util__HeadVar__2_2);

#line 2098 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 2100 "check_hlds.mode_util.c"
  }
#line 116 "mode_util.m"
}

#line 1651 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1651 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1651 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1651 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7)
#line 1651 "mode_util.m"
{
#line 1657 "mode_util.m"
  {
#line 1657 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1657 "mode_util.m"
    MR_Word check_hlds__mode_util__MaybeInst_8;

#line 1657 "mode_util.m"
    if (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1673 "mode_util.m"
      {
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__PredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 1)));
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__PredInfo_20;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__ProcInfo_21;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__PorF_22;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__Det_23;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__ProcArgModes_24;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_25;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_26;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__V_47_47;
#line 1673 "mode_util.m"
        MR_Word check_hlds__mode_util__V_48_48;

#line 1675 "mode_util.m"
        {
#line 1675 "mode_util.m"
          check_hlds__mode_util__V_45_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__mode_util__PredProcId_18);
        }
#line 1674 "mode_util.m"
        {
#line 1674 "mode_util.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__V_45_45, &check_hlds__mode_util__PredInfo_20, &check_hlds__mode_util__ProcInfo_21);
        }
#line 1676 "mode_util.m"
        {
#line 1676 "mode_util.m"
          check_hlds__mode_util__PorF_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__mode_util__PredInfo_20);
        }
#line 1677 "mode_util.m"
        {
#line 1677 "mode_util.m"
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__Det_23);
        }
#line 1678 "mode_util.m"
        {
#line 1678 "mode_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__ProcArgModes_24);
        }
#line 1679 "mode_util.m"
        {
#line 1679 "mode_util.m"
          mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_7, check_hlds__mode_util__ProcArgModes_24, &check_hlds__mode_util__Modes_25);
        }
#line 1680 "mode_util.m"
        {
#line 1680 "mode_util.m"
          check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__PorF_22));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Modes_25));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 3) = ((MR_Box) (check_hlds__mode_util__Det_23));
#line 1680 "mode_util.m"
        }
#line 1680 "mode_util.m"
        check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__V_48_48);
#line 1680 "mode_util.m"
        {
#line 1680 "mode_util.m"
          check_hlds__mode_util__Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1680 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1680 "mode_util.m"
        }
#line 1682 "mode_util.m"
        {
#line 1682 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "mode_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__Inst_26));
#line 1682 "mode_util.m"
        }
#line 1673 "mode_util.m"
      }
#line 1657 "mode_util.m"
    else
#line 1657 "mode_util.m"
      if (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1670 "mode_util.m"
        {
#line 1671 "mode_util.m"
          {
#line 1671 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
          }
#line 1670 "mode_util.m"
        }
#line 1657 "mode_util.m"
      else
#line 1657 "mode_util.m"
        if (((((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1658 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1657 "mode_util.m"
        else
#line 1657 "mode_util.m"
          if (((((((((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1666 "mode_util.m"
            {
#line 1666 "mode_util.m"
              MR_Word check_hlds__mode_util__V_53_53;
#line 1666 "mode_util.m"
              MR_Word check_hlds__mode_util__V_56_56;
#line 1666 "mode_util.m"
              MR_Word check_hlds__mode_util__V_57_57;

#line 1668 "mode_util.m"
              {
#line 1668 "mode_util.m"
                check_hlds__mode_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1668 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_6));
#line 1668 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1668 "mode_util.m"
              }
#line 1668 "mode_util.m"
              {
#line 1668 "mode_util.m"
                check_hlds__mode_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 0) = ((MR_Box) (check_hlds__mode_util__V_57_57));
#line 1668 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1668 "mode_util.m"
              }
#line 1667 "mode_util.m"
              {
#line 1667 "mode_util.m"
                check_hlds__mode_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1667 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1667 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1667 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 3) = ((MR_Box) (check_hlds__mode_util__V_56_56));
#line 1667 "mode_util.m"
              }
#line 1667 "mode_util.m"
              {
#line 1667 "mode_util.m"
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__V_53_53));
#line 1667 "mode_util.m"
              }
#line 1666 "mode_util.m"
            }
#line 1657 "mode_util.m"
          else
#line 1694 "mode_util.m"
            {
#line 1695 "mode_util.m"
              check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_6[0]);
#line 1694 "mode_util.m"
            }
#line 1657 "mode_util.m"
    return check_hlds__mode_util__MaybeInst_8;
#line 1657 "mode_util.m"
  }
#line 1651 "mode_util.m"
}

#line 1610 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1610 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1610 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1610 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 1610 "mode_util.m"
{
#line 1610 "mode_util.m"
  {
#line 1610 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1610 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_66;

#line 1610 "mode_util.m"
    {
#line 1610 "mode_util.m"
      check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1610__1_2_p_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_HeadVar__2_66);
    }
#line 1610 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_66));
#line 1610 "mode_util.m"
  }
#line 1610 "mode_util.m"
}

#line 1563 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57)
#line 1563 "mode_util.m"
{
#line 1568 "mode_util.m"
  {
#line 1568 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1568 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1574 "mode_util.m"
    MR_Word check_hlds__mode_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));

#line 1620 "mode_util.m"
    if (((MR_tag((MR_Word) check_hlds__mode_util__Uni_9)) == (MR_mktag((MR_Integer) 0))))
#line 1621 "mode_util.m"
      {
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1621 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 6)));
#line 1634 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_76;
#line 1623 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeInfo_86_86;
#line 1623 "mode_util.m"
        MR_Word check_hlds__mode_util__NonLocals_45;
#line 1623 "mode_util.m"
        MR_Word check_hlds__mode_util__MaybeInst_47;
#line 1623 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_58_58;
#line 1623 "mode_util.m"
        MR_Word check_hlds__mode_util__OldInstMapDelta_74;
#line 1626 "mode_util.m"
        MR_Word check_hlds__mode_util__V_46_46;

#line 1623 "mode_util.m"
        {
#line 1623 "mode_util.m"
          check_hlds__mode_util__NonLocals_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_12);
        }
#line 1624 "mode_util.m"
        {
#line 1624 "mode_util.m"
          check_hlds__mode_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__NonLocals_45, check_hlds__mode_util__Var_77);
        }
#line 1623 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1623 "mode_util.m"
          {
#line 1625 "mode_util.m"
            {
#line 1625 "mode_util.m"
              check_hlds__mode_util__OldInstMapDelta_74 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
            }
#line 1626 "mode_util.m"
            {
#line 1626 "mode_util.m"
              check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_74, check_hlds__mode_util__Var_77, &check_hlds__mode_util__V_46_46);
            }
#line 1626 "mode_util.m"
            check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1623 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1623 "mode_util.m"
              {
#line 2432 "check_hlds.mode_util.c"
                check_hlds__mode_util__TypeInfo_86_86 = (MR_Word) &check_hlds__mode_util_scalar_common_2[1];
#line 1628 "mode_util.m"
                {
#line 1628 "mode_util.m"
                  check_hlds__mode_util__V_58_58 = mercury__list__length_1_f_0(check_hlds__mode_util__TypeInfo_86_86, check_hlds__mode_util__Args_40);
                }
#line 1627 "mode_util.m"
                {
#line 1627 "mode_util.m"
                  check_hlds__mode_util__MaybeInst_47 = check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ConsId_39, check_hlds__mode_util__V_58_58);
                }
#line 1629 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_47)) == (MR_mktag((MR_Integer) 1)));
#line 1629 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1629 "mode_util.m"
                  check_hlds__mode_util__Inst_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_47, (MR_Integer) 0)));
#line 1623 "mode_util.m"
              }
#line 1623 "mode_util.m"
          }
#line 1634 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1631 "mode_util.m"
          {
#line 1631 "mode_util.m"
            MR_Word check_hlds__mode_util__InstMapDelta0_48;

#line 1631 "mode_util.m"
            *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1632 "mode_util.m"
            {
#line 1632 "mode_util.m"
              hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__mode_util__InstMapDelta0_48);
            }
#line 1633 "mode_util.m"
            {
#line 1633 "mode_util.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_77, check_hlds__mode_util__Inst_76, check_hlds__mode_util__InstMapDelta0_48, check_hlds__mode_util__InstMapDelta_14);
            }
#line 1631 "mode_util.m"
          }
#line 1634 "mode_util.m"
        else
#line 1635 "mode_util.m"
          {
#line 1635 "mode_util.m"
            {
#line 1635 "mode_util.m"
              *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
            }
#line 1636 "mode_util.m"
            *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1635 "mode_util.m"
          }
#line 1621 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1621 "mode_util.m"
      }
#line 1620 "mode_util.m"
    else
#line 1620 "mode_util.m"
      if (((MR_tag((MR_Word) check_hlds__mode_util__Uni_9)) == (MR_mktag((MR_Integer) 1))))
#line 1576 "mode_util.m"
        {
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__UniModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__OldInstMapDelta_23;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__InitialInst_24;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__FinalInst_29;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__ModuleInfo_30;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__Modes_38;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__V_69_69;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__V_70_70;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__V_71_71;
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1576 "mode_util.m"
          MR_Word check_hlds__mode_util___CanCGC_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1605 "mode_util.m"
          MR_Word check_hlds__mode_util__DeltaInst_25;

#line 1581 "mode_util.m"
          {
#line 1581 "mode_util.m"
            check_hlds__mode_util__OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1582 "mode_util.m"
          {
#line 1582 "mode_util.m"
            hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_13, check_hlds__mode_util__Var_17, &check_hlds__mode_util__InitialInst_24);
          }
#line 1583 "mode_util.m"
          {
#line 1583 "mode_util.m"
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_23, check_hlds__mode_util__Var_17, &check_hlds__mode_util__DeltaInst_25);
          }
#line 1605 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1602 "mode_util.m"
            {
#line 1602 "mode_util.m"
              MR_Word check_hlds__mode_util__FinalInstPrime_26;
#line 1602 "mode_util.m"
              MR_Word check_hlds__mode_util__ModuleInfo1_28;
#line 1595 "mode_util.m"
              MR_Word check_hlds__mode_util___Detism_27;

#line 1595 "mode_util.m"
              {
#line 1595 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__InitialInst_24, check_hlds__mode_util__DeltaInst_25, (MR_Integer) 1, &check_hlds__mode_util__FinalInstPrime_26, &check_hlds__mode_util___Detism_27, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_28);
              }
#line 1602 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1599 "mode_util.m"
                {
#line 1601 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_82_82;
#line 1601 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_81_81;

#line 1599 "mode_util.m"
                  check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__FinalInstPrime_26;
#line 1600 "mode_util.m"
                  check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo1_28;
#line 1601 "mode_util.m"
                  check_hlds__mode_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1601 "mode_util.m"
                  check_hlds__mode_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));
#line 1601 "mode_util.m"
                  {
#line 1601 "mode_util.m"
                    MR_Word base;
#line 1601 "mode_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "mode_util.m"
                    *check_hlds__mode_util__STATE_VARIABLE_RI_57 = base;
#line 1601 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_30));
#line 1601 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_82_82));
#line 1601 "mode_util.m"
                  }
#line 1599 "mode_util.m"
                }
#line 1602 "mode_util.m"
              else
#line 1603 "mode_util.m"
                {
#line 1603 "mode_util.m"
                  {
#line 1603 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_unify\'/8", (MR_String) "abstractly_unify_inst failed");
#line 1603 "mode_util.m"
                    return;
                  }
#line 1603 "mode_util.m"
                }
#line 1602 "mode_util.m"
            }
#line 1605 "mode_util.m"
          else
#line 1607 "mode_util.m"
            {
#line 1607 "mode_util.m"
              check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__InitialInst_24;
#line 1608 "mode_util.m"
              check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo0_16;
#line 1607 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1607 "mode_util.m"
            }
#line 1615 "mode_util.m"
          {
#line 1615 "mode_util.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__mode_util_scalar_common_1[6], check_hlds__mode_util__UniModes_20, &check_hlds__mode_util__Modes_38);
          }
#line 1616 "mode_util.m"
          {
#line 1616 "mode_util.m"
            check_hlds__mode_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 0) = ((MR_Box) (check_hlds__mode_util__Var_17));
#line 1616 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 1) = ((MR_Box) (check_hlds__mode_util__Vars_19));
#line 1616 "mode_util.m"
          }
#line 1617 "mode_util.m"
          {
#line 1617 "mode_util.m"
            check_hlds__mode_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1617 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_24));
#line 1617 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_29));
#line 1617 "mode_util.m"
          }
#line 1617 "mode_util.m"
          {
#line 1617 "mode_util.m"
            check_hlds__mode_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1617 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 0) = ((MR_Box) (check_hlds__mode_util__V_71_71));
#line 1617 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 1) = ((MR_Box) (check_hlds__mode_util__Modes_38));
#line 1617 "mode_util.m"
          }
#line 1616 "mode_util.m"
          {
#line 1616 "mode_util.m"
            hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__V_69_69, check_hlds__mode_util__V_70_70, check_hlds__mode_util__ModuleInfo_30, check_hlds__mode_util__InstMapDelta_14);
          }
#line 1619 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1576 "mode_util.m"
        }
#line 1620 "mode_util.m"
      else
#line 1642 "mode_util.m"
        {
#line 1643 "mode_util.m"
          {
#line 1643 "mode_util.m"
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1644 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1642 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1642 "mode_util.m"
        }
#line 1568 "mode_util.m"
  }
#line 1563 "mode_util.m"
}

#line 1534 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1534 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1534 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1534 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6)
#line 1534 "mode_util.m"
{
#line 1538 "mode_util.m"
  {
#line 1538 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1538 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1538 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1538 "mode_util.m"
        {
#line 1538 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1538 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 1538 "mode_util.m"
        }
#line 1538 "mode_util.m"
      else
#line 1541 "mode_util.m"
        {
#line 1542 "mode_util.m"
          {
#line 1542 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1542 "mode_util.m"
            return;
          }
#line 1541 "mode_util.m"
        }
#line 1538 "mode_util.m"
    else
#line 1538 "mode_util.m"
      {
#line 1538 "mode_util.m"
        MR_Word check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1538 "mode_util.m"
        MR_Word check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1538 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1539 "mode_util.m"
          {
#line 1540 "mode_util.m"
            {
#line 1540 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1540 "mode_util.m"
              return;
            }
#line 1539 "mode_util.m"
          }
#line 1538 "mode_util.m"
        else
#line 1544 "mode_util.m"
          {
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_36;
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_37;
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInst0_39;
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_41;
#line 1544 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52;
#line 1547 "mode_util.m"
            MR_Word check_hlds__mode_util__V_40_40;
#line 1557 "mode_util.m"
            MR_Word check_hlds__mode_util__UnifyInst_42;
#line 1557 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1553 "mode_util.m"
            MR_Word check_hlds__mode_util__V_43_43;

#line 1546 "mode_util.m"
            {
#line 1546 "mode_util.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_2, check_hlds__mode_util__V_55_55, &check_hlds__mode_util__ArgInst0_39);
            }
#line 1547 "mode_util.m"
            {
#line 1547 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__mode_util__Mode0_34, &check_hlds__mode_util__V_40_40, &check_hlds__mode_util__FinalInst_41);
            }
#line 1553 "mode_util.m"
            {
#line 1553 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__ArgInst0_39, check_hlds__mode_util__FinalInst_41, (MR_Integer) 1, &check_hlds__mode_util__UnifyInst_42, &check_hlds__mode_util__V_43_43, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48);
            }
#line 1557 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1556 "mode_util.m"
              {
#line 1556 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1556 "mode_util.m"
                {
#line 1556 "mode_util.m"
                  check_hlds__mode_util__Mode_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1556 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 0) = ((MR_Box) (check_hlds__mode_util__ArgInst0_39));
#line 1556 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 1) = ((MR_Box) (check_hlds__mode_util__UnifyInst_42));
#line 1556 "mode_util.m"
                }
#line 1556 "mode_util.m"
              }
#line 1557 "mode_util.m"
            else
#line 1558 "mode_util.m"
              {
#line 1558 "mode_util.m"
                {
#line 1558 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "unify_inst failed");
#line 1558 "mode_util.m"
                  return;
                }
#line 1558 "mode_util.m"
              }
#line 1560 "mode_util.m"
            {
#line 1560 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__V_54_54, check_hlds__mode_util__InstMap_2, check_hlds__mode_util__Modes0_35, &check_hlds__mode_util__Modes_37, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);
            }
#line 1544 "mode_util.m"
            {
#line 1544 "mode_util.m"
              MR_Word base;
#line 1544 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1544 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_36));
#line 1544 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_37));
#line 1544 "mode_util.m"
            }
#line 1544 "mode_util.m"
          }
#line 1538 "mode_util.m"
      }
#line 1538 "mode_util.m"
  }
#line 1534 "mode_util.m"
}

#line 1504 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1504 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1504 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1504 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8)
#line 1504 "mode_util.m"
{
#line 1508 "mode_util.m"
  while (MR_TRUE)
#line 1508 "mode_util.m"
    {
#line 1508 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1508 "mode_util.m"
      {
#line 1508 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1508 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "mode_util.m"
          if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "mode_util.m"
            {
#line 1508 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1508 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_Sub_6 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1508 "mode_util.m"
            }
#line 1508 "mode_util.m"
          else
#line 1511 "mode_util.m"
            {
#line 1512 "mode_util.m"
              {
#line 1512 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1512 "mode_util.m"
                return;
              }
#line 1511 "mode_util.m"
            }
#line 1508 "mode_util.m"
        else
#line 1508 "mode_util.m"
          {
#line 1508 "mode_util.m"
            MR_Word check_hlds__mode_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1508 "mode_util.m"
            MR_Word check_hlds__mode_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1508 "mode_util.m"
            if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "mode_util.m"
              {
#line 1510 "mode_util.m"
                {
#line 1510 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1510 "mode_util.m"
                  return;
                }
#line 1509 "mode_util.m"
              }
#line 1508 "mode_util.m"
            else
#line 1514 "mode_util.m"
              {
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__Inst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__Insts_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgInst_53;
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__Type_54;
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;
#line 1514 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1522 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1522 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;

#line 1518 "mode_util.m"
                {
#line 1518 "mode_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_3, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__ArgInst_53);
                }
#line 1519 "mode_util.m"
                {
#line 1519 "mode_util.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_2, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__Type_54);
                }
#line 1520 "mode_util.m"
                {
#line 1520 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__mode_util__ArgInst_53, check_hlds__mode_util__Inst_47, check_hlds__mode_util__Type_54, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59, check_hlds__mode_util__STATE_VARIABLE_Sub_0_5, &check_hlds__mode_util__STATE_VARIABLE_Sub_60_60);
                }
#line 1522 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1521 "mode_util.m"
                  {
#line 1521 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1521 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;
#line 1521 "mode_util.m"
                  }
#line 1522 "mode_util.m"
                else
#line 1529 "mode_util.m"
                  {
#line 1529 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1530 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1529 "mode_util.m"
                  }
#line 1532 "mode_util.m"
                /* direct tailcall eliminated */
#line 1532 "mode_util.m"
                {
#line 1532 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__V_65_65;
#line 1532 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__4__tmp_copy_4 = check_hlds__mode_util__Insts_48;
#line 1532 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1532 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;

#line 1532 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1532 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_Sub_0_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5;
#line 1532 "mode_util.m"
                  check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__HeadVar__4__tmp_copy_4;
#line 1532 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 1532 "mode_util.m"
                }
#line 1532 "mode_util.m"
                continue;
#line 1514 "mode_util.m"
              }
#line 1508 "mode_util.m"
          }
#line 1508 "mode_util.m"
      }
#line 1508 "mode_util.m"
      break;
#line 1508 "mode_util.m"
    }
#line 1504 "mode_util.m"
}

#line 1460 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1460 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1460 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1460 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1460 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35)
#line 1460 "mode_util.m"
{
#line 1465 "mode_util.m"
  {
#line 1465 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1465 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1465 "mode_util.m"
    MR_Word check_hlds__mode_util__ProcInfo_18;
#line 1465 "mode_util.m"
    MR_Word check_hlds__mode_util__Detism_19;
#line 1466 "mode_util.m"
    MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1467 "mode_util.m"
    MR_Word check_hlds__mode_util__V_17_17;
#line 1469 "mode_util.m"
    MR_Word check_hlds__mode_util__V_52_52;
#line 1469 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1467 "mode_util.m"
    {
#line 1467 "mode_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__PredId_9, check_hlds__mode_util__ProcId_10, &check_hlds__mode_util__V_17_17, &check_hlds__mode_util__ProcInfo_18);
    }
#line 1468 "mode_util.m"
    {
#line 1468 "mode_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__Detism_19);
    }
#line 1469 "mode_util.m"
    {
#line 1469 "mode_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_19, &check_hlds__mode_util__V_20_20, &check_hlds__mode_util__V_52_52);
    }
#line 1469 "mode_util.m"
    check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_52_52);
#line 1471 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1470 "mode_util.m"
      {
#line 1470 "mode_util.m"
        {
#line 1470 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_14);
        }
#line 1470 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_0_34;
#line 1470 "mode_util.m"
      }
#line 1471 "mode_util.m"
    else
#line 1472 "mode_util.m"
      {
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes0_21;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__ProcInstVarSet_22;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet0_23;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet_24;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes1_25;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__InitialInsts_26;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes_31;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_32;
#line 1472 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1474 "mode_util.m"
        MR_Word check_hlds__mode_util__V_43_43;
#line 1477 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44;
#line 1477 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;

#line 1472 "mode_util.m"
        {
#line 1472 "mode_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ArgModes0_21);
        }
#line 1473 "mode_util.m"
        {
#line 1473 "mode_util.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ProcInstVarSet_22);
        }
#line 1474 "mode_util.m"
        check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1474 "mode_util.m"
        check_hlds__mode_util__InstVarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1475 "mode_util.m"
        {
#line 1475 "mode_util.m"
          parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__mode_util__InstVarSet0_23, check_hlds__mode_util__ProcInstVarSet_22, &check_hlds__mode_util__InstVarSet_24, check_hlds__mode_util__ArgModes0_21, &check_hlds__mode_util__ArgModes1_25);
        }
#line 1477 "mode_util.m"
        check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1477 "mode_util.m"
        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1477 "mode_util.m"
        {
#line 1477 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1477 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (check_hlds__mode_util__V_44_44));
#line 1477 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_24));
#line 1477 "mode_util.m"
        }
#line 1478 "mode_util.m"
        {
#line 1478 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__InitialInsts_26);
        }
#line 1482 "mode_util.m"
        {
#line 1482 "mode_util.m"
          check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_util__InstMap_13);
        }
#line 1496 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1483 "mode_util.m"
          {
#line 1483 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub0_27;
#line 1483 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub_28;
#line 1483 "mode_util.m"
            MR_Word check_hlds__mode_util__ModuleInfo1_29;
#line 1483 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes2_30;
#line 1495 "mode_util.m"
            MR_Word check_hlds__mode_util__V_47_47;
#line 1495 "mode_util.m"
            MR_Word check_hlds__mode_util__V_46_46;

#line 1483 "mode_util.m"
            {
#line 1483 "mode_util.m"
              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__mode_util__InstVarSub0_27);
            }
#line 1484 "mode_util.m"
            {
#line 1484 "mode_util.m"
              check_hlds__mode_util__compute_inst_var_sub_8_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__InitialInsts_26, check_hlds__mode_util__InstVarSub0_27, &check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_29);
            }
#line 1488 "mode_util.m"
            {
#line 1488 "mode_util.m"
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__ArgModes2_30);
            }
#line 1493 "mode_util.m"
            {
#line 1493 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__ArgModes2_30, &check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo1_29, &check_hlds__mode_util__ModuleInfo_32);
            }
#line 1495 "mode_util.m"
            check_hlds__mode_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 0)));
#line 1495 "mode_util.m"
            check_hlds__mode_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 1)));
#line 1495 "mode_util.m"
            {
#line 1495 "mode_util.m"
              MR_Word base;
#line 1495 "mode_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_35 = base;
#line 1495 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_32));
#line 1495 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1495 "mode_util.m"
            }
#line 1483 "mode_util.m"
          }
#line 1496 "mode_util.m"
        else
#line 1497 "mode_util.m"
          {
#line 1497 "mode_util.m"
            MR_Integer check_hlds__mode_util__NumArgs_33;

#line 1497 "mode_util.m"
            {
#line 1497 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[1], check_hlds__mode_util__Args_11, &check_hlds__mode_util__NumArgs_33);
            }
#line 1498 "mode_util.m"
            {
#line 1498 "mode_util.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_33, ((MR_Box) (&check_hlds__mode_util_scalar_common_2[8])), &check_hlds__mode_util__ArgModes_31);
            }
#line 1499 "mode_util.m"
            check_hlds__mode_util__ModuleInfo_32 = check_hlds__mode_util__ModuleInfo0_16;
#line 1497 "mode_util.m"
            *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1497 "mode_util.m"
          }
#line 1501 "mode_util.m"
        {
#line 1501 "mode_util.m"
          hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo_32, check_hlds__mode_util__InstMapDelta_14);
#line 1501 "mode_util.m"
          return;
        }
#line 1472 "mode_util.m"
      }
#line 1465 "mode_util.m"
  }
#line 1460 "mode_util.m"
}

#line 1417 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1417 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1417 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24)
#line 1417 "mode_util.m"
{
#line 1423 "mode_util.m"
  {
#line 1423 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1423 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_20;
#line 1423 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_25_25;

#line 1424 "mode_util.m"
    {
#line 1424 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__RecomputeAtomic_11, check_hlds__mode_util__Var_12, check_hlds__mode_util__Cases0_13, check_hlds__mode_util__Cases_14, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMap0_16, &check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__STATE_VARIABLE_RI_0_23, &check_hlds__mode_util__STATE_VARIABLE_RI_25_25);
    }
#line 1429 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1427 "mode_util.m"
      {
#line 1428 "mode_util.m"
        {
#line 1428 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_18);
        }
#line 1427 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_24 = check_hlds__mode_util__STATE_VARIABLE_RI_25_25;
#line 1427 "mode_util.m"
      }
#line 1429 "mode_util.m"
    else
#line 1430 "mode_util.m"
      {
#line 1430 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1430 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_38;
#line 1181 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_42_42;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_41_41;

#line 1182 "mode_util.m"
        {
#line 1182 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap0_16, check_hlds__mode_util__NonLocals_17, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__InstMapDelta_18, check_hlds__mode_util__ModuleInfo0_37, &check_hlds__mode_util__ModuleInfo_38);
        }
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        {
#line 1183 "mode_util.m"
          MR_Word base;
#line 1183 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_24 = base;
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_38));
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_42_42));
#line 1183 "mode_util.m"
        }
#line 1430 "mode_util.m"
      }
#line 1423 "mode_util.m"
  }
#line 1417 "mode_util.m"
}

#line 1381 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1381 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1381 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22)
#line 1381 "mode_util.m"
{
#line 1387 "mode_util.m"
  {
#line 1387 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1387 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_18;
#line 1387 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_23_23;

#line 1388 "mode_util.m"
    {
#line 1388 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_11, check_hlds__mode_util__Goals_12, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMap_14, &check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__STATE_VARIABLE_RI_0_21, &check_hlds__mode_util__STATE_VARIABLE_RI_23_23);
    }
#line 1393 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "mode_util.m"
      {
#line 1392 "mode_util.m"
        {
#line 1392 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
        }
#line 1391 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_22 = check_hlds__mode_util__STATE_VARIABLE_RI_23_23;
#line 1391 "mode_util.m"
      }
#line 1393 "mode_util.m"
    else
#line 1394 "mode_util.m"
      {
#line 1394 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1394 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_36;
#line 1181 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40;
#line 1183 "mode_util.m"
        MR_Word check_hlds__mode_util__V_39_39;

#line 1182 "mode_util.m"
        {
#line 1182 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap_14, check_hlds__mode_util__NonLocals_15, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__ModuleInfo0_35, &check_hlds__mode_util__ModuleInfo_36);
        }
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1183 "mode_util.m"
        check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1183 "mode_util.m"
        {
#line 1183 "mode_util.m"
          MR_Word base;
#line 1183 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_22 = base;
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_36));
#line 1183 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_40_40));
#line 1183 "mode_util.m"
        }
#line 1394 "mode_util.m"
      }
#line 1387 "mode_util.m"
  }
#line 1381 "mode_util.m"
}

#line 1363 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1363 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1363 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8)
#line 1363 "mode_util.m"
{
#line 1367 "mode_util.m"
  {
#line 1367 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1367 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1367 "mode_util.m"
      {
#line 1367 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1368 "mode_util.m"
        {
#line 1368 "mode_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_6);
        }
#line 1367 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_8 = check_hlds__mode_util__STATE_VARIABLE_RI_0_7;
#line 1367 "mode_util.m"
      }
#line 1367 "mode_util.m"
    else
#line 1370 "mode_util.m"
      {
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_19;
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_20;
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_25;
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_26;
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_27;
#line 1370 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1371 "mode_util.m"
        {
#line 1371 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goal0_17, &check_hlds__mode_util__Goal_19, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap0_5, &check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_7, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1373 "mode_util.m"
        {
#line 1373 "mode_util.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_5, check_hlds__mode_util__InstMapDelta0_25, &check_hlds__mode_util__InstMap1_26);
        }
#line 1374 "mode_util.m"
        {
#line 1374 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goals0_18, &check_hlds__mode_util__Goals_20, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap1_26, &check_hlds__mode_util__InstMapDelta1_27, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_8);
        }
#line 1369 "mode_util.m"
        {
#line 1369 "mode_util.m"
          MR_Word base;
#line 1369 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1369 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_19));
#line 1369 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_20));
#line 1369 "mode_util.m"
        }
#line 1376 "mode_util.m"
        {
#line 1376 "mode_util.m"
          hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__InstMapDelta1_27, (MR_Integer) 1, check_hlds__mode_util__InstMapDelta_6);
#line 1376 "mode_util.m"
          return;
        }
#line 1370 "mode_util.m"
      }
#line 1367 "mode_util.m"
  }
#line 1363 "mode_util.m"
}

#line 1324 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1324 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1324 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1324 "mode_util.m"
{
#line 1324 "mode_util.m"
  {
#line 1324 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1324 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1324 "mode_util.m"
    MR_Word check_hlds__mode_util__conv1_HeadVar__2_2;

#line 1324 "mode_util.m"
    {
#line 1324 "mode_util.m"
      check_hlds__mode_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1324 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv1_HeadVar__2_2));
#line 1324 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1324 "mode_util.m"
  }
#line 1324 "mode_util.m"
}

#line 1315 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1315 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1315 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1315 "mode_util.m"
{
#line 1315 "mode_util.m"
  {
#line 1315 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1315 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1315 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_2;

#line 1315 "mode_util.m"
    {
#line 1315 "mode_util.m"
      check_hlds__mode_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1315 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_2));
#line 1315 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1315 "mode_util.m"
  }
#line 1315 "mode_util.m"
}

#line 1185 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1185 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1185 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106)
#line 1185 "mode_util.m"
{
#line 1193 "mode_util.m"
  {
#line 1193 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1193 "mode_util.m"
    if (((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 0))))
#line 1220 "mode_util.m"
      {
#line 1220 "mode_util.m"
        MR_Word check_hlds__mode_util__SubGoal0_26 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__GoalExpr0_11), (MR_Integer) 0);
#line 1220 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_27;
#line 1220 "mode_util.m"
        MR_Word check_hlds__mode_util__SubGoal_28;
#line 1227 "mode_util.m"
        MR_Word check_hlds__mode_util__V_29_29;

#line 1221 "mode_util.m"
        {
#line 1221 "mode_util.m"
          check_hlds__mode_util__InstMapDelta0_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
        }
#line 1222 "mode_util.m"
        {
#line 1222 "mode_util.m"
          check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__mode_util__InstMapDelta0_27);
        }
#line 1224 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1223 "mode_util.m"
          {
#line 1223 "mode_util.m"
            hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
          }
#line 1224 "mode_util.m"
        else
#line 1225 "mode_util.m"
          {
#line 1225 "mode_util.m"
            hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
          }
#line 1227 "mode_util.m"
        {
#line 1227 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_26, &check_hlds__mode_util__SubGoal_28, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
        }
#line 1229 "mode_util.m"
        *check_hlds__mode_util__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_util__SubGoal_28);
#line 1220 "mode_util.m"
      }
#line 1193 "mode_util.m"
    else
#line 1193 "mode_util.m"
      if (((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 2))))
#line 1280 "mode_util.m"
        {
#line 1280 "mode_util.m"
          MR_Word check_hlds__mode_util__PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1280 "mode_util.m"
          MR_Integer check_hlds__mode_util__ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1280 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1280 "mode_util.m"
          MR_Word check_hlds__mode_util___BI_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1280 "mode_util.m"
          MR_Word check_hlds__mode_util___UC_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1280 "mode_util.m"
          MR_Word check_hlds__mode_util___Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));

#line 1281 "mode_util.m"
          {
#line 1281 "mode_util.m"
            check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_53, check_hlds__mode_util__ProcId_54, check_hlds__mode_util__Args_55, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
#line 1283 "mode_util.m"
          *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1280 "mode_util.m"
        }
#line 1193 "mode_util.m"
      else
#line 1193 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 1))))
#line 1285 "mode_util.m"
          {
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__LHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__RHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__UniMode0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__Uni_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__RHS_64;
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__UniMode_65;
#line 1285 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_120_120;

#line 1297 "mode_util.m"
            if (((MR_tag((MR_Word) check_hlds__mode_util__RHS0_60)) == (MR_mktag((MR_Integer) 2))))
#line 1289 "mode_util.m"
              {
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Purity_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Groundness_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__PorF_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__LambdaVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 3)));
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 6)));
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__ModuleInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__InstMap_73;
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal_74;
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Det_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 5)));
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__NonLocals_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 2)));
#line 1289 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 4)));
#line 1290 "mode_util.m"
                MR_Word check_hlds__mode_util__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));
#line 1293 "mode_util.m"
                MR_Word check_hlds__mode_util__V_75_75;

#line 1291 "mode_util.m"
                {
#line 1291 "mode_util.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__mode_util__ModuleInfo0_72, check_hlds__mode_util__LambdaVars_70, check_hlds__mode_util__Modes_152, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMap_73);
                }
#line 1293 "mode_util.m"
                {
#line 1293 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goal0_71, &check_hlds__mode_util__Goal_74, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap_73, &check_hlds__mode_util__V_75_75, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_120_120);
                }
#line 1295 "mode_util.m"
                {
#line 1295 "mode_util.m"
                  check_hlds__mode_util__RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 0) = ((MR_Box) ((check_hlds__mode_util__Purity_66 | ((((check_hlds__mode_util__Groundness_67 << (MR_Integer) 2)) | ((check_hlds__mode_util__PorF_68 << (MR_Integer) 3)))))));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 1) = (MR_Integer) 0;
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 2) = ((MR_Box) (check_hlds__mode_util__NonLocals_151));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 3) = ((MR_Box) (check_hlds__mode_util__LambdaVars_70));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 4) = ((MR_Box) (check_hlds__mode_util__Modes_152));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 5) = ((MR_Box) (check_hlds__mode_util__Det_150));
#line 1295 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 6) = ((MR_Box) (check_hlds__mode_util__Goal_74));
#line 1295 "mode_util.m"
                }
#line 1289 "mode_util.m"
              }
#line 1297 "mode_util.m"
            else
#line 1300 "mode_util.m"
              {
#line 1301 "mode_util.m"
                check_hlds__mode_util__RHS_64 = check_hlds__mode_util__RHS0_60;
#line 1300 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_RI_120_120 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1300 "mode_util.m"
              }
#line 1307 "mode_util.m"
            if ((check_hlds__mode_util__RecomputeAtomic_10 == (MR_Integer) 1))
#line 1308 "mode_util.m"
              {
#line 1309 "mode_util.m"
                check_hlds__mode_util__UniMode_65 = check_hlds__mode_util__UniMode0_61;
#line 1310 "mode_util.m"
                {
#line 1310 "mode_util.m"
                  *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                }
#line 1308 "mode_util.m"
                *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_120_120;
#line 1308 "mode_util.m"
              }
#line 1307 "mode_util.m"
            else
#line 1305 "mode_util.m"
              {
#line 1305 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(check_hlds__mode_util__Uni_62, check_hlds__mode_util__UniMode0_61, &check_hlds__mode_util__UniMode_65, check_hlds__mode_util__GoalInfo_13, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_120_120, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1286 "mode_util.m"
            {
#line 1286 "mode_util.m"
              MR_Word base;
#line 1286 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = base;
#line 1286 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__LHS_59));
#line 1286 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__RHS_64));
#line 1286 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_util__UniMode_65));
#line 1286 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_util__Uni_62));
#line 1286 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_util__Context_63));
#line 1286 "mode_util.m"
            }
#line 1285 "mode_util.m"
          }
#line 1193 "mode_util.m"
        else
#line 1193 "mode_util.m"
          if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1314 "mode_util.m"
            {
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeInfo_185_185 = (MR_Word) &check_hlds__mode_util_scalar_common_2[1];
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgVars_84;
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDelta0_159;
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__PredId_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1314 "mode_util.m"
              MR_Integer check_hlds__mode_util__ProcId_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1314 "mode_util.m"
              MR_Word check_hlds__mode_util__Args_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1313 "mode_util.m"
              MR_Word check_hlds__mode_util___Attr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1313 "mode_util.m"
              MR_Word check_hlds__mode_util___MTRC_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 6)));
#line 1313 "mode_util.m"
              MR_Word check_hlds__mode_util___Impl_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 7)));

#line 1315 "mode_util.m"
              {
#line 1315 "mode_util.m"
                check_hlds__mode_util__ArgVars_84 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_1[4], check_hlds__mode_util__Args_162);
              }
#line 1316 "mode_util.m"
              {
#line 1316 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_160, check_hlds__mode_util__ProcId_161, check_hlds__mode_util__ArgVars_84, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1321 "mode_util.m"
              if ((check_hlds__mode_util__ExtraArgs_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "mode_util.m"
                *check_hlds__mode_util__InstMapDelta_16 = check_hlds__mode_util__InstMapDelta0_159;
#line 1321 "mode_util.m"
              else
#line 1322 "mode_util.m"
                {
#line 1322 "mode_util.m"
                  MR_Word check_hlds__mode_util__OldInstMapDelta_87;
#line 1322 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgVars_88;
#line 1322 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgsInstMapDelta_89;
#line 1322 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_118_118;

#line 1323 "mode_util.m"
                  {
#line 1323 "mode_util.m"
                    check_hlds__mode_util__OldInstMapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1324 "mode_util.m"
                  {
#line 1324 "mode_util.m"
                    check_hlds__mode_util__ExtraArgVars_88 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_1[5], check_hlds__mode_util__ExtraArgs_81);
                  }
#line 1325 "mode_util.m"
                  {
#line 1325 "mode_util.m"
                    check_hlds__mode_util__V_118_118 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__ExtraArgVars_88);
                  }
#line 1325 "mode_util.m"
                  {
#line 1325 "mode_util.m"
                    hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__V_118_118, check_hlds__mode_util__OldInstMapDelta_87, &check_hlds__mode_util__ExtraArgsInstMapDelta_89);
                  }
#line 1327 "mode_util.m"
                  {
#line 1327 "mode_util.m"
                    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__ExtraArgsInstMapDelta_89, (MR_Integer) 0, check_hlds__mode_util__InstMapDelta_16);
                  }
#line 1322 "mode_util.m"
                }
#line 1330 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1314 "mode_util.m"
            }
#line 1193 "mode_util.m"
          else
#line 1193 "mode_util.m"
            if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1204 "mode_util.m"
              {
#line 1204 "mode_util.m"
                MR_Word check_hlds__mode_util__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1204 "mode_util.m"
                MR_Word check_hlds__mode_util__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1204 "mode_util.m"
                MR_Word check_hlds__mode_util__Goals_25;

#line 1205 "mode_util.m"
                {
#line 1205 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_24, &check_hlds__mode_util__Goals_25, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                }
#line 1207 "mode_util.m"
                {
#line 1207 "mode_util.m"
                  MR_Word base;
#line 1207 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "mode_util.m"
                  *check_hlds__mode_util__GoalExpr_12 = base;
#line 1207 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1207 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ConjType_23));
#line 1207 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Goals_25));
#line 1207 "mode_util.m"
                }
#line 1204 "mode_util.m"
              }
#line 1193 "mode_util.m"
            else
#line 1193 "mode_util.m"
              if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1209 "mode_util.m"
                {
#line 1209 "mode_util.m"
                  MR_Word check_hlds__mode_util__Goals0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1209 "mode_util.m"
                  MR_Word check_hlds__mode_util__Goals_145;

#line 1210 "mode_util.m"
                  {
#line 1210 "mode_util.m"
                    check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
                  }
#line 1213 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1211 "mode_util.m"
                    {
#line 1211 "mode_util.m"
                      check_hlds__mode_util__Goals_145 = check_hlds__mode_util__Goals0_144;
#line 1212 "mode_util.m"
                      {
#line 1212 "mode_util.m"
                        *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                      }
#line 1211 "mode_util.m"
                      *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1211 "mode_util.m"
                    }
#line 1213 "mode_util.m"
                  else
#line 1214 "mode_util.m"
                    {
#line 1214 "mode_util.m"
                      MR_Word check_hlds__mode_util__NonLocals_141;

#line 1214 "mode_util.m"
                      {
#line 1214 "mode_util.m"
                        check_hlds__mode_util__NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                      }
#line 1215 "mode_util.m"
                      {
#line 1215 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_144, &check_hlds__mode_util__Goals_145, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_141, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                      }
#line 1214 "mode_util.m"
                    }
#line 1218 "mode_util.m"
                  {
#line 1218 "mode_util.m"
                    MR_Word base;
#line 1218 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "mode_util.m"
                    *check_hlds__mode_util__GoalExpr_12 = base;
#line 1218 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1218 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_145));
#line 1218 "mode_util.m"
                  }
#line 1209 "mode_util.m"
                }
#line 1193 "mode_util.m"
              else
#line 1193 "mode_util.m"
                if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1271 "mode_util.m"
                  {
#line 1271 "mode_util.m"
                    MR_Word check_hlds__mode_util__Modes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1271 "mode_util.m"
                    MR_Word check_hlds__mode_util__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1271 "mode_util.m"
                    MR_Word check_hlds__mode_util__Vars_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1271 "mode_util.m"
                    MR_Word check_hlds__mode_util___Details_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1271 "mode_util.m"
                    MR_Word check_hlds__mode_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1272 "mode_util.m"
                    MR_Word check_hlds__mode_util__V_191_191;
#line 1272 "mode_util.m"
                    MR_Word check_hlds__mode_util__V_51_51;

#line 1272 "mode_util.m"
                    {
#line 1272 "mode_util.m"
                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_50, &check_hlds__mode_util__V_51_51, &check_hlds__mode_util__V_191_191);
                    }
#line 1272 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_191_191);
#line 1274 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 1273 "mode_util.m"
                      {
#line 1273 "mode_util.m"
                        hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
                      }
#line 1274 "mode_util.m"
                    else
#line 1275 "mode_util.m"
                      {
#line 1275 "mode_util.m"
                        MR_Word check_hlds__mode_util__ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1275 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));

#line 1276 "mode_util.m"
                        {
#line 1276 "mode_util.m"
                          hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Vars_149, check_hlds__mode_util__Modes_48, check_hlds__mode_util__ModuleInfo_52, check_hlds__mode_util__InstMapDelta_16);
                        }
#line 1275 "mode_util.m"
                      }
#line 1278 "mode_util.m"
                    *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1271 "mode_util.m"
                    *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1271 "mode_util.m"
                  }
#line 1193 "mode_util.m"
                else
#line 1193 "mode_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1231 "mode_util.m"
                    {
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Cond0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Cond_34;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstMapDeltaCond_35;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstMapCond_36;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Then_37;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstMapDeltaThen_38;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__Else_39;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstMapDeltaElse_40;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstMapDeltaCondThen_41;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_129_129;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_130_130;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_131_131;
#line 1231 "mode_util.m"
                      MR_Word check_hlds__mode_util__NonLocals_146;

#line 1232 "mode_util.m"
                      {
#line 1232 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Cond0_31, &check_hlds__mode_util__Cond_34, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_129_129);
                      }
#line 1234 "mode_util.m"
                      {
#line 1234 "mode_util.m"
                        hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDeltaCond_35, &check_hlds__mode_util__InstMapCond_36);
                      }
#line 1235 "mode_util.m"
                      {
#line 1235 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Then0_32, &check_hlds__mode_util__Then_37, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapCond_36, &check_hlds__mode_util__InstMapDeltaThen_38, check_hlds__mode_util__STATE_VARIABLE_RI_129_129, &check_hlds__mode_util__STATE_VARIABLE_RI_130_130);
                      }
#line 1237 "mode_util.m"
                      {
#line 1237 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Else0_33, &check_hlds__mode_util__Else_39, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__STATE_VARIABLE_RI_130_130, &check_hlds__mode_util__STATE_VARIABLE_RI_131_131);
                      }
#line 1239 "mode_util.m"
                      {
#line 1239 "mode_util.m"
                        hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__InstMapDeltaThen_38, (MR_Integer) 2, &check_hlds__mode_util__InstMapDeltaCondThen_41);
                      }
#line 1241 "mode_util.m"
                      {
#line 1241 "mode_util.m"
                        check_hlds__mode_util__NonLocals_146 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                      }
#line 1242 "mode_util.m"
                      {
#line 1242 "mode_util.m"
                        check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_146, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__InstMapDeltaCondThen_41, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_131_131, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                      }
#line 1246 "mode_util.m"
                      {
#line 1246 "mode_util.m"
                        MR_Word base;
#line 1246 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "mode_util.m"
                        *check_hlds__mode_util__GoalExpr_12 = base;
#line 1246 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1246 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Vars_30));
#line 1246 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Cond_34));
#line 1246 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Then_37));
#line 1246 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_util__Else_39));
#line 1246 "mode_util.m"
                      }
#line 1231 "mode_util.m"
                    }
#line 1193 "mode_util.m"
                  else
#line 1193 "mode_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1248 "mode_util.m"
                      {
#line 1248 "mode_util.m"
                        MR_Word check_hlds__mode_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1248 "mode_util.m"
                        MR_Word check_hlds__mode_util__SubGoal0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1248 "mode_util.m"
                        MR_Word check_hlds__mode_util__SubGoal_148;
#line 1265 "mode_util.m"
                        MR_Word check_hlds__mode_util__FGT_44;
#line 1249 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_43_43;

#line 1249 "mode_util.m"
                        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1249 "mode_util.m"
                        if (check_hlds__mode_util__succeeded)
#line 1249 "mode_util.m"
                          {
#line 1249 "mode_util.m"
                            check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 1)));
#line 1249 "mode_util.m"
                            check_hlds__mode_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 2)));
#line 1257 "mode_util.m"
                            if ((check_hlds__mode_util__FGT_44 == (MR_Integer) 0))
#line 1258 "mode_util.m"
                              {
#line 1259 "mode_util.m"
                                {
#line 1259 "mode_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "from_ground_term_initial");
#line 1259 "mode_util.m"
                                  return;
                                }
#line 1258 "mode_util.m"
                              }
#line 1257 "mode_util.m"
                            else
#line 1257 "mode_util.m"
                              if ((check_hlds__mode_util__FGT_44 == (MR_Integer) 3))
#line 1262 "mode_util.m"
                                {
#line 1262 "mode_util.m"
                                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                                }
#line 1257 "mode_util.m"
                              else
#line 1253 "mode_util.m"
                                {
#line 1253 "mode_util.m"
                                  MR_Word check_hlds__mode_util__SubGoalInfo_46;
#line 1255 "mode_util.m"
                                  MR_Word check_hlds__mode_util__V_45_45;

#line 1254 "mode_util.m"
                                  check_hlds__mode_util__SubGoal_148 = check_hlds__mode_util__SubGoal0_147;
#line 1255 "mode_util.m"
                                  check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 0)));
#line 1255 "mode_util.m"
                                  check_hlds__mode_util__SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 1)));
#line 1256 "mode_util.m"
                                  {
#line 1256 "mode_util.m"
                                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__SubGoalInfo_46);
                                  }
#line 1253 "mode_util.m"
                                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1253 "mode_util.m"
                                }
#line 1249 "mode_util.m"
                          }
#line 1249 "mode_util.m"
                        else
#line 1266 "mode_util.m"
                          {
#line 1266 "mode_util.m"
                            check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                          }
#line 1269 "mode_util.m"
                        {
#line 1269 "mode_util.m"
                          MR_Word base;
#line 1269 "mode_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "mode_util.m"
                          *check_hlds__mode_util__GoalExpr_12 = base;
#line 1269 "mode_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1269 "mode_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Reason_42));
#line 1269 "mode_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_148));
#line 1269 "mode_util.m"
                        }
#line 1248 "mode_util.m"
                      }
#line 1193 "mode_util.m"
                    else
#line 1193 "mode_util.m"
                      if (((((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1332 "mode_util.m"
                        {
#line 1332 "mode_util.m"
                          MR_Word check_hlds__mode_util__ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1332 "mode_util.m"
                          MR_Word check_hlds__mode_util__ShortHand_100;

#line 1348 "mode_util.m"
                          if (((MR_tag((MR_Word) check_hlds__mode_util__ShortHand0_90)) == (MR_mktag((MR_Integer) 1))))
#line 1335 "mode_util.m"
                            {
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__GoalType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__Outer_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__Inner_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__MaybeOutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 3)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 4)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 5)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 6)));
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__MainGoal_98;
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__OrElseGoals_99;
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__NonLocals_163;
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__Goals0_164;
#line 1335 "mode_util.m"
                              MR_Word check_hlds__mode_util__Goals_165;

#line 1336 "mode_util.m"
                              {
#line 1336 "mode_util.m"
                                check_hlds__mode_util__Goals0_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 0) = ((MR_Box) (check_hlds__mode_util__MainGoal0_95));
#line 1336 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 1) = ((MR_Box) (check_hlds__mode_util__OrElseGoals0_96));
#line 1336 "mode_util.m"
                              }
#line 1337 "mode_util.m"
                              {
#line 1337 "mode_util.m"
                                check_hlds__mode_util__NonLocals_163 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                              }
#line 1338 "mode_util.m"
                              {
#line 1338 "mode_util.m"
                                check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_164, &check_hlds__mode_util__Goals_165, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_163, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                              }
#line 1343 "mode_util.m"
                              if ((check_hlds__mode_util__Goals_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "mode_util.m"
                                {
#line 1342 "mode_util.m"
                                  {
#line 1342 "mode_util.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "Goals = []");
#line 1342 "mode_util.m"
                                    return;
                                  }
#line 1341 "mode_util.m"
                                }
#line 1343 "mode_util.m"
                              else
#line 1344 "mode_util.m"
                                {
#line 1344 "mode_util.m"
                                  check_hlds__mode_util__MainGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 0)));
#line 1344 "mode_util.m"
                                  check_hlds__mode_util__OrElseGoals_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 1)));
#line 1344 "mode_util.m"
                                }
#line 1346 "mode_util.m"
                              {
#line 1346 "mode_util.m"
                                check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__GoalType_91));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__Outer_92));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__Inner_93));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 3) = ((MR_Box) (check_hlds__mode_util__MaybeOutputVars_94));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 4) = ((MR_Box) (check_hlds__mode_util__MainGoal_98));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 5) = ((MR_Box) (check_hlds__mode_util__OrElseGoals_99));
#line 1346 "mode_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 6) = ((MR_Box) (check_hlds__mode_util__OrElseInners_97));
#line 1346 "mode_util.m"
                              }
#line 1335 "mode_util.m"
                            }
#line 1348 "mode_util.m"
                          else
#line 1348 "mode_util.m"
                            if (((MR_tag((MR_Word) check_hlds__mode_util__ShortHand0_90)) == (MR_mktag((MR_Integer) 0))))
#line 1354 "mode_util.m"
                              {
#line 1356 "mode_util.m"
                                {
#line 1356 "mode_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "bi_implication");
#line 1356 "mode_util.m"
                                  return;
                                }
#line 1354 "mode_util.m"
                              }
#line 1348 "mode_util.m"
                            else
#line 1349 "mode_util.m"
                              {
#line 1349 "mode_util.m"
                                MR_Word check_hlds__mode_util__MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1349 "mode_util.m"
                                MR_Word check_hlds__mode_util__ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1349 "mode_util.m"
                                MR_Word check_hlds__mode_util__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1349 "mode_util.m"
                                MR_Word check_hlds__mode_util__SubGoal_167;

#line 1350 "mode_util.m"
                                {
#line 1350 "mode_util.m"
                                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_166, &check_hlds__mode_util__SubGoal_167, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                                }
#line 1352 "mode_util.m"
                                {
#line 1352 "mode_util.m"
                                  check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "mode_util.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__MaybeIO_101));
#line 1352 "mode_util.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__ResultVar_102));
#line 1352 "mode_util.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_167));
#line 1352 "mode_util.m"
                                }
#line 1349 "mode_util.m"
                              }
#line 1358 "mode_util.m"
                          {
#line 1358 "mode_util.m"
                            MR_Word base;
#line 1358 "mode_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "mode_util.m"
                            *check_hlds__mode_util__GoalExpr_12 = base;
#line 1358 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1358 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ShortHand_100));
#line 1358 "mode_util.m"
                          }
#line 1332 "mode_util.m"
                        }
#line 1193 "mode_util.m"
                      else
#line 1193 "mode_util.m"
                        {
#line 1193 "mode_util.m"
                          MR_Word check_hlds__mode_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1193 "mode_util.m"
                          MR_Word check_hlds__mode_util__Det_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1193 "mode_util.m"
                          MR_Word check_hlds__mode_util__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1193 "mode_util.m"
                          MR_Word check_hlds__mode_util__Cases_21;

#line 1194 "mode_util.m"
                          {
#line 1194 "mode_util.m"
                            check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
                          }
#line 1197 "mode_util.m"
                          if (check_hlds__mode_util__succeeded)
#line 1195 "mode_util.m"
                            {
#line 1195 "mode_util.m"
                              check_hlds__mode_util__Cases_21 = check_hlds__mode_util__Cases0_20;
#line 1196 "mode_util.m"
                              {
#line 1196 "mode_util.m"
                                *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                              }
#line 1195 "mode_util.m"
                              *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1195 "mode_util.m"
                            }
#line 1197 "mode_util.m"
                          else
#line 1198 "mode_util.m"
                            {
#line 1198 "mode_util.m"
                              MR_Word check_hlds__mode_util__NonLocals_22;

#line 1198 "mode_util.m"
                              {
#line 1198 "mode_util.m"
                                check_hlds__mode_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                              }
#line 1199 "mode_util.m"
                              {
#line 1199 "mode_util.m"
                                check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Var_18, check_hlds__mode_util__Cases0_20, &check_hlds__mode_util__Cases_21, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_22, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                              }
#line 1198 "mode_util.m"
                            }
#line 1202 "mode_util.m"
                          {
#line 1202 "mode_util.m"
                            MR_Word base;
#line 1202 "mode_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "mode_util.m"
                            *check_hlds__mode_util__GoalExpr_12 = base;
#line 1202 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1202 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Var_18));
#line 1202 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Det_19));
#line 1202 "mode_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Cases_21));
#line 1202 "mode_util.m"
                          }
#line 1193 "mode_util.m"
                        }
#line 1193 "mode_util.m"
  }
#line 1185 "mode_util.m"
}

#line 1129 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1129 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1129 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40)
#line 1129 "mode_util.m"
{
#line 1134 "mode_util.m"
  {
#line 1134 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__RecomputeAtomic_9 == (MR_Integer) 1);
#line 1134 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 0)));
#line 1134 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 1)));
#line 1134 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_32;
#line 1134 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo1_33;
#line 1134 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_38;
#line 1137 "mode_util.m"
    MR_Word check_hlds__mode_util__V_41_41;
#line 1140 "mode_util.m"
    MR_Word check_hlds__mode_util__RHS_19;
#line 1140 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1140 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;
#line 1140 "mode_util.m"
    MR_Word check_hlds__mode_util__V_21_21;
#line 1140 "mode_util.m"
    MR_Word check_hlds__mode_util__V_22_22;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_23_23;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_24_24;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_25_25;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_27_27;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_28_28;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_30_30;
#line 1141 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1137 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1137 "mode_util.m"
      {
#line 1138 "mode_util.m"
        {
#line 1138 "mode_util.m"
          check_hlds__mode_util__V_41_41 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(check_hlds__mode_util__GoalExpr0_16);
        }
#line 1138 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_41_41 == (MR_Integer) 1);
#line 1137 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1137 "mode_util.m"
          {
#line 1140 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
#line 1140 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1140 "mode_util.m"
              {
#line 1140 "mode_util.m"
                check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 0)));
#line 1140 "mode_util.m"
                check_hlds__mode_util__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 1)));
#line 1140 "mode_util.m"
                check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 2)));
#line 1140 "mode_util.m"
                check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 3)));
#line 1140 "mode_util.m"
                check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 4)));
#line 1141 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__RHS_19)) == (MR_mktag((MR_Integer) 2)));
#line 1141 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1141 "mode_util.m"
                  {
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 2)));
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 3)));
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 4)));
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 5)));
#line 1141 "mode_util.m"
                    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 6)));
#line 1141 "mode_util.m"
                  }
#line 1140 "mode_util.m"
              }
#line 1139 "mode_util.m"
            check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1137 "mode_util.m"
          }
#line 1137 "mode_util.m"
      }
#line 1147 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1145 "mode_util.m"
      {
#line 1145 "mode_util.m"
        check_hlds__mode_util__GoalExpr_32 = check_hlds__mode_util__GoalExpr0_16;
#line 1146 "mode_util.m"
        check_hlds__mode_util__GoalInfo1_33 = check_hlds__mode_util__GoalInfo0_17;
#line 1145 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_40 = check_hlds__mode_util__STATE_VARIABLE_RI_0_39;
#line 1145 "mode_util.m"
      }
#line 1147 "mode_util.m"
    else
#line 1149 "mode_util.m"
      {
#line 1149 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_34;
#line 1149 "mode_util.m"
        MR_Word check_hlds__mode_util__NonLocals_35;
#line 1149 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_36;

#line 1148 "mode_util.m"
        {
#line 1148 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__GoalExpr0_16, &check_hlds__mode_util__GoalExpr_32, check_hlds__mode_util__GoalInfo0_17, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_13, &check_hlds__mode_util__InstMapDelta0_34, check_hlds__mode_util__STATE_VARIABLE_RI_0_39, check_hlds__mode_util__STATE_VARIABLE_RI_40);
        }
#line 1150 "mode_util.m"
        {
#line 1150 "mode_util.m"
          check_hlds__mode_util__NonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo0_17);
        }
#line 1151 "mode_util.m"
        {
#line 1151 "mode_util.m"
          hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__NonLocals_35, check_hlds__mode_util__InstMapDelta0_34, &check_hlds__mode_util__InstMapDelta1_36);
        }
#line 1152 "mode_util.m"
        {
#line 1152 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta1_36, check_hlds__mode_util__GoalInfo0_17, &check_hlds__mode_util__GoalInfo1_33);
        }
#line 1149 "mode_util.m"
      }
#line 1156 "mode_util.m"
    {
#line 1156 "mode_util.m"
      check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_util__InstMap0_13);
    }
#line 1160 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1157 "mode_util.m"
      {
#line 1157 "mode_util.m"
        MR_Word check_hlds__mode_util__UnreachableInstMapDelta_37;

#line 1157 "mode_util.m"
        {
#line 1157 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__mode_util__UnreachableInstMapDelta_37);
        }
#line 1158 "mode_util.m"
        {
#line 1158 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__UnreachableInstMapDelta_37, check_hlds__mode_util__GoalInfo1_33, &check_hlds__mode_util__GoalInfo_38);
        }
#line 1157 "mode_util.m"
      }
#line 1160 "mode_util.m"
    else
#line 1161 "mode_util.m"
      check_hlds__mode_util__GoalInfo_38 = check_hlds__mode_util__GoalInfo1_33;
#line 1163 "mode_util.m"
    {
#line 1163 "mode_util.m"
      MR_Word base;
#line 1163 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "mode_util.m"
      *check_hlds__mode_util__Goal_11 = base;
#line 1163 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_32));
#line 1163 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_38));
#line 1163 "mode_util.m"
    }
#line 1164 "mode_util.m"
    {
#line 1164 "mode_util.m"
      *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_38);
    }
#line 1134 "mode_util.m"
  }
#line 1129 "mode_util.m"
}

#line 1052 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__inst_lookup_subst_args_5_p_0(
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__InstBody_6,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Params_7,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Name_8,
#line 1052 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_9,
#line 1052 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 1052 "mode_util.m"
{
#line 1057 "mode_util.m"
  {
#line 1057 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1057 "mode_util.m"
    if ((check_hlds__mode_util__InstBody_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1061 "mode_util.m"
      {
#line 1061 "mode_util.m"
        MR_Word base;
#line 1061 "mode_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "mode_util.m"
        *check_hlds__mode_util__Inst_10 = base;
#line 1061 "mode_util.m"
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1061 "mode_util.m"
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_8));
#line 1061 "mode_util.m"
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_9));
#line 1061 "mode_util.m"
      }
#line 1057 "mode_util.m"
    else
#line 1057 "mode_util.m"
      {
#line 1057 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstBody_6, (MR_Integer) 0)));

#line 1058 "mode_util.m"
        {
#line 1058 "mode_util.m"
          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(check_hlds__mode_util__Params_7, check_hlds__mode_util__Args_9, check_hlds__mode_util__Inst0_11, check_hlds__mode_util__Inst_10);
#line 1058 "mode_util.m"
          return;
        }
#line 1057 "mode_util.m"
      }
#line 1057 "mode_util.m"
  }
#line 1052 "mode_util.m"
}

#line 1040 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1040 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1040 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1040 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6)
#line 1040 "mode_util.m"
{
#line 1046 "mode_util.m"
  {
#line 1046 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1044 "mode_util.m"
    {
#line 1044 "mode_util.m"
      check_hlds__mode_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__Subst_5);
    }
#line 1046 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1045 "mode_util.m"
      *check_hlds__mode_util__Type_6 = check_hlds__mode_util__Type0_4;
#line 1046 "mode_util.m"
    else
#line 1047 "mode_util.m"
      {
#line 1047 "mode_util.m"
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__mode_util__Subst_5, check_hlds__mode_util__Type0_4, check_hlds__mode_util__Type_6);
#line 1047 "mode_util.m"
        return;
      }
#line 1046 "mode_util.m"
  }
#line 1040 "mode_util.m"
}

#line 1023 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0_2(
#line 1023 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1023 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1023 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 1023 "mode_util.m"
{
#line 1023 "mode_util.m"
  {
#line 1023 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1023 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_54;

#line 1023 "mode_util.m"
    {
#line 1023 "mode_util.m"
      check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1024__1_2_p_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_HeadVar__2_54);
    }
#line 1023 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_54));
#line 1023 "mode_util.m"
  }
#line 1023 "mode_util.m"
}

#line 1016 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0_1(
#line 1016 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1016 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1016 "mode_util.m"
{
#line 1016 "mode_util.m"
  {
#line 1016 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1016 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;

#line 1016 "mode_util.m"
    {
#line 1016 "mode_util.m"
      return check_hlds__mode_util__succeeded = check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__1016__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1016 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 1016 "mode_util.m"
  }
#line 1016 "mode_util.m"
}

#line 1000 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_3_7_p_0(
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1000 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1000 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7)
#line 1000 "mode_util.m"
{
#line 1004 "mode_util.m"
  {
#line 1004 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1004 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "mode_util.m"
      *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "mode_util.m"
    else
#line 1006 "mode_util.m"
      {
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 0)));
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 1)));
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_20;
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_21;
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 0)));
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 1)));
#line 1006 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId_27;
#line 1011 "mode_util.m"
        MR_String check_hlds__mode_util__Name_24;
#line 1011 "mode_util.m"
        MR_Integer check_hlds__mode_util__ConsArity_25;
#line 1008 "mode_util.m"
        MR_Word check_hlds__mode_util__V_48_48;
#line 1008 "mode_util.m"
        MR_Word check_hlds__mode_util___ConsTypeCtor_26;
#line 1030 "mode_util.m"
        MR_Word check_hlds__mode_util__Constructor_37;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_62_62;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeInfo_69_69;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsName_28;
#line 1015 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_29;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__GetCons_31;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__V_51_51;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__V_52_52;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__V_67_67;
#line 1015 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30;

#line 1008 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1008 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1008 "mode_util.m"
          {
#line 1008 "mode_util.m"
            check_hlds__mode_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 1)));
#line 1008 "mode_util.m"
            check_hlds__mode_util__ConsArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 2)));
#line 1008 "mode_util.m"
            check_hlds__mode_util___ConsTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 3)));
#line 1008 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 1008 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1008 "mode_util.m"
              check_hlds__mode_util__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, (MR_Integer) 0)));
#line 1008 "mode_util.m"
          }
#line 1011 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1010 "mode_util.m"
          {
#line 1010 "mode_util.m"
            MR_Word check_hlds__mode_util__V_49_49;

#line 1010 "mode_util.m"
            {
#line 1010 "mode_util.m"
              check_hlds__mode_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_49_49, 0) = ((MR_Box) (check_hlds__mode_util__TypeModule_4));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_49_49, 1) = ((MR_Box) (check_hlds__mode_util__Name_24));
#line 1010 "mode_util.m"
            }
#line 1010 "mode_util.m"
            {
#line 1010 "mode_util.m"
              check_hlds__mode_util__ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 1) = ((MR_Box) (check_hlds__mode_util__V_49_49));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 2) = ((MR_Box) (check_hlds__mode_util__ConsArity_25));
#line 1010 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 1010 "mode_util.m"
            }
#line 1010 "mode_util.m"
          }
#line 1011 "mode_util.m"
        else
#line 1012 "mode_util.m"
          check_hlds__mode_util__ConsId_27 = check_hlds__mode_util__ConsId0_22;
#line 1015 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1015 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1015 "mode_util.m"
          {
#line 1015 "mode_util.m"
            check_hlds__mode_util__ConsName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 1)));
#line 1015 "mode_util.m"
            check_hlds__mode_util__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 2)));
#line 1015 "mode_util.m"
            check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 3)));
#line 1020 "mode_util.m"
            check_hlds__mode_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5079 "check_hlds.mode_util.c"
            check_hlds__mode_util__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 1016 "mode_util.m"
            {
#line 1016 "mode_util.m"
              check_hlds__mode_util__GetCons_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__GetCons_31, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_4[0]));
#line 1016 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__GetCons_31, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_3_7_p_0_1));
#line 1016 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__GetCons_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1016 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__GetCons_31, 3) = ((MR_Box) (check_hlds__mode_util__ConsName_28));
#line 1016 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__GetCons_31, 4) = ((MR_Box) (check_hlds__mode_util__Arity_29));
#line 1016 "mode_util.m"
            }
#line 1020 "mode_util.m"
            {
#line 1020 "mode_util.m"
              mercury__list__filter_3_p_0(check_hlds__mode_util__TypeCtorInfo_62_62, check_hlds__mode_util__GetCons_31, check_hlds__mode_util__Constructors_5, &check_hlds__mode_util__V_51_51);
            }
#line 1020 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 1020 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1020 "mode_util.m"
              {
#line 1020 "mode_util.m"
                check_hlds__mode_util__Constructor_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_51_51, (MR_Integer) 0)));
#line 1020 "mode_util.m"
                check_hlds__mode_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_51_51, (MR_Integer) 1)));
#line 5112 "check_hlds.mode_util.c"
                check_hlds__mode_util__TypeInfo_69_69 = (MR_Word) &check_hlds__mode_util_scalar_common_2[6];
#line 1020 "mode_util.m"
                {
#line 1020 "mode_util.m"
                  check_hlds__mode_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_util__TypeInfo_69_69, ((MR_Box) (check_hlds__mode_util__V_52_52)), ((MR_Box) (check_hlds__mode_util__V_67_67)));
                }
#line 1020 "mode_util.m"
              }
#line 1015 "mode_util.m"
          }
#line 1030 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1022 "mode_util.m"
          {
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Constructor_37, (MR_Integer) 3)));
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgTypes_46;
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInsts_47;
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util___ExistQVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Constructor_37, (MR_Integer) 0)));
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util___Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Constructor_37, (MR_Integer) 1)));
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util___Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Constructor_37, (MR_Integer) 2)));
#line 1022 "mode_util.m"
            MR_Word check_hlds__mode_util___Ctxt_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Constructor_37, (MR_Integer) 4)));

#line 1026 "mode_util.m"
            {
#line 1026 "mode_util.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__mode_util_scalar_common_1[3], check_hlds__mode_util__Args_41, &check_hlds__mode_util__ArgTypes_46);
            }
#line 1027 "mode_util.m"
            {
#line 1027 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__ArgTypes_46, check_hlds__mode_util__ArgInsts0_23, &check_hlds__mode_util__ArgInsts_47);
            }
#line 1029 "mode_util.m"
            {
#line 1029 "mode_util.m"
              check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1029 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_47));
#line 1029 "mode_util.m"
            }
#line 1022 "mode_util.m"
          }
#line 1030 "mode_util.m"
        else
#line 1035 "mode_util.m"
          {
#line 1035 "mode_util.m"
            check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1035 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts0_23));
#line 1035 "mode_util.m"
          }
#line 1037 "mode_util.m"
        {
#line 1037 "mode_util.m"
          check_hlds__mode_util__propagate_ctor_info_3_7_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__TypeModule_4, check_hlds__mode_util__Constructors_5, check_hlds__mode_util__BoundInsts0_19, &check_hlds__mode_util__BoundInsts_21);
        }
#line 1006 "mode_util.m"
        {
#line 1006 "mode_util.m"
          MR_Word base;
#line 1006 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1006 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_20));
#line 1006 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_21));
#line 1006 "mode_util.m"
        }
#line 1006 "mode_util.m"
      }
#line 1004 "mode_util.m"
  }
#line 1000 "mode_util.m"
}

#line 977 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 977 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 977 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8)
#line 977 "mode_util.m"
{
#line 980 "mode_util.m"
  {
#line 980 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 980 "mode_util.m"
    MR_Word check_hlds__mode_util__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 0)));
#line 980 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 1)));
#line 980 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts_15;
#line 983 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_16_16;
#line 983 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_17_17;
#line 983 "mode_util.m"
    MR_Integer check_hlds__mode_util__ArgInstsLen_12;
#line 983 "mode_util.m"
    MR_Integer check_hlds__mode_util__TupleArgTypesLen_13;
#line 983 "mode_util.m"
    MR_Integer check_hlds__mode_util__V_11_11;

#line 983 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Functor_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 983 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 983 "mode_util.m"
      {
#line 983 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 1)));
#line 5244 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 984 "mode_util.m"
        {
#line 984 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_16_16, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInstsLen_12);
        }
#line 5251 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 985 "mode_util.m"
        {
#line 985 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_17_17, check_hlds__mode_util__TupleArgTypes_6, &check_hlds__mode_util__TupleArgTypesLen_13);
        }
#line 986 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__ArgInstsLen_12 == check_hlds__mode_util__TupleArgTypesLen_13);
#line 983 "mode_util.m"
      }
#line 991 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 988 "mode_util.m"
      {
#line 988 "mode_util.m"
        MR_Word check_hlds__mode_util__Subst_14;

#line 988 "mode_util.m"
        {
#line 988 "mode_util.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_14);
        }
#line 989 "mode_util.m"
        {
#line 989 "mode_util.m"
          check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_14, check_hlds__mode_util__TupleArgTypes_6, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInsts_15);
        }
#line 988 "mode_util.m"
      }
#line 991 "mode_util.m"
    else
#line 996 "mode_util.m"
      check_hlds__mode_util__ArgInsts_15 = check_hlds__mode_util__ArgInsts0_10;
#line 998 "mode_util.m"
    {
#line 998 "mode_util.m"
      MR_Word base;
#line 998 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "mode_util.m"
      *check_hlds__mode_util__BoundInst_8 = base;
#line 998 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Functor_9));
#line 998 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_15));
#line 998 "mode_util.m"
    }
#line 980 "mode_util.m"
  }
#line 977 "mode_util.m"
}

#line 957 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_2_4_p_0_1(
#line 957 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 957 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 957 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 957 "mode_util.m"
{
#line 957 "mode_util.m"
  {
#line 957 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 957 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_BoundInst_8;

#line 957 "mode_util.m"
    {
#line 957 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_BoundInst_8);
    }
#line 957 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_BoundInst_8));
#line 957 "mode_util.m"
  }
#line 957 "mode_util.m"
}

#line 950 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_2_4_p_0(
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 950 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInsts0_7,
#line 950 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_8)
#line 950 "mode_util.m"
{
#line 959 "mode_util.m"
  {
#line 959 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 959 "mode_util.m"
    MR_Word check_hlds__mode_util__TupleArgTypes_9;

#line 955 "mode_util.m"
    {
#line 955 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TupleArgTypes_9);
    }
#line 959 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 957 "mode_util.m"
      {
#line 957 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_34_34;
#line 957 "mode_util.m"
        MR_Word check_hlds__mode_util__V_22_22;

#line 957 "mode_util.m"
        {
#line 957 "mode_util.m"
          check_hlds__mode_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_22_22, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_3[0]));
#line 957 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_22_22, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_2_4_p_0_1));
#line 957 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 957 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_22_22, 3) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_5));
#line 957 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_22_22, 4) = ((MR_Box) (check_hlds__mode_util__TupleArgTypes_9));
#line 957 "mode_util.m"
        }
#line 5384 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 957 "mode_util.m"
        {
#line 957 "mode_util.m"
          mercury__list__map_3_p_0(check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__V_22_22, check_hlds__mode_util__BoundInsts0_7, check_hlds__mode_util__BoundInsts_8);
#line 957 "mode_util.m"
          return;
        }
#line 957 "mode_util.m"
      }
#line 959 "mode_util.m"
    else
#line 972 "mode_util.m"
      {
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_10;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeArgs_11;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeModule_12;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeParams_17;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__Constructors_19;
#line 960 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeTable_15;
#line 960 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeDefn_16;
#line 960 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeBody_18;
#line 960 "mode_util.m"
        MR_Word check_hlds__mode_util__V_23_23;
#line 961 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_14_14;
#line 961 "mode_util.m"
        MR_String check_hlds__mode_util__V_13_13;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_24_24;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_25_25;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_26_26;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_29_29;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30;
#line 966 "mode_util.m"
        MR_Word check_hlds__mode_util__V_31_31;

#line 960 "mode_util.m"
        {
#line 960 "mode_util.m"
          check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TypeCtor_10, &check_hlds__mode_util__TypeArgs_11);
        }
#line 960 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 960 "mode_util.m"
          {
#line 961 "mode_util.m"
            check_hlds__mode_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_10, (MR_Integer) 0)));
#line 961 "mode_util.m"
            check_hlds__mode_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_10, (MR_Integer) 1)));
#line 961 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 961 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 961 "mode_util.m"
              {
#line 961 "mode_util.m"
                check_hlds__mode_util__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_23_23, (MR_Integer) 0)));
#line 961 "mode_util.m"
                check_hlds__mode_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_23_23, (MR_Integer) 1)));
#line 962 "mode_util.m"
                {
#line 962 "mode_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__mode_util__ModuleInfo_5, &check_hlds__mode_util__TypeTable_15);
                }
#line 963 "mode_util.m"
                {
#line 963 "mode_util.m"
                  check_hlds__mode_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__mode_util__TypeTable_15, check_hlds__mode_util__TypeCtor_10, &check_hlds__mode_util__TypeDefn_16);
                }
#line 960 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 960 "mode_util.m"
                  {
#line 964 "mode_util.m"
                    {
#line 964 "mode_util.m"
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__mode_util__TypeDefn_16, &check_hlds__mode_util__TypeParams_17);
                    }
#line 965 "mode_util.m"
                    {
#line 965 "mode_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__mode_util__TypeDefn_16, &check_hlds__mode_util__TypeBody_18);
                    }
#line 966 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__TypeBody_18)) == (MR_mktag((MR_Integer) 1)));
#line 966 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 966 "mode_util.m"
                      {
#line 966 "mode_util.m"
                        check_hlds__mode_util__Constructors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 0)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 1)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 2)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 3)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 4)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 5)));
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 966 "mode_util.m"
                        check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_18, (MR_Integer) 7)));
#line 966 "mode_util.m"
                      }
#line 960 "mode_util.m"
                  }
#line 961 "mode_util.m"
              }
#line 960 "mode_util.m"
          }
#line 972 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 968 "mode_util.m"
          {
#line 968 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgSubst_20;
#line 968 "mode_util.m"
            MR_Word check_hlds__mode_util__BoundInsts1_21;

#line 968 "mode_util.m"
            {
#line 968 "mode_util.m"
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__TypeParams_17, check_hlds__mode_util__TypeArgs_11, &check_hlds__mode_util__ArgSubst_20);
            }
#line 969 "mode_util.m"
            {
#line 969 "mode_util.m"
              check_hlds__mode_util__propagate_ctor_info_3_7_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ArgSubst_20, check_hlds__mode_util__TypeCtor_10, check_hlds__mode_util__TypeModule_12, check_hlds__mode_util__Constructors_19, check_hlds__mode_util__BoundInsts0_7, &check_hlds__mode_util__BoundInsts1_21);
            }
#line 971 "mode_util.m"
            {
#line 971 "mode_util.m"
              mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts1_21, check_hlds__mode_util__BoundInsts_8);
#line 971 "mode_util.m"
              return;
            }
#line 968 "mode_util.m"
          }
#line 972 "mode_util.m"
        else
#line 974 "mode_util.m"
          *check_hlds__mode_util__BoundInsts_8 = check_hlds__mode_util__BoundInsts0_7;
#line 972 "mode_util.m"
      }
#line 959 "mode_util.m"
  }
#line 950 "mode_util.m"
}

#line 943 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 943 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 943 "mode_util.m"
{
#line 946 "mode_util.m"
  {
#line 946 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 946 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "mode_util.m"
    else
#line 947 "mode_util.m"
      {
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_8;
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 948 "mode_util.m"
        {
#line 948 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_6, check_hlds__mode_util__Inst_2, &check_hlds__mode_util__Insts_8);
        }
#line 947 "mode_util.m"
        {
#line 947 "mode_util.m"
          MR_Word base;
#line 947 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 947 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_2));
#line 947 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_8));
#line 947 "mode_util.m"
        }
#line 947 "mode_util.m"
      }
#line 946 "mode_util.m"
  }
#line 943 "mode_util.m"
}

#line 903 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 903 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 903 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 903 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6)
#line 903 "mode_util.m"
{
#line 906 "mode_util.m"
  {
#line 906 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 906 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_32_32;
#line 906 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumPredArgs_9;
#line 906 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumFuncArgs_10;
#line 906 "mode_util.m"
    MR_Word check_hlds__mode_util__FuncArgModes_11;
#line 906 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes0_13;
#line 906 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes_14;

#line 909 "mode_util.m"
    {
#line 909 "mode_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__PredArgTypes_5, &check_hlds__mode_util__NumPredArgs_9);
    }
#line 910 "mode_util.m"
    check_hlds__mode_util__NumFuncArgs_10 = (check_hlds__mode_util__NumPredArgs_9 - (MR_Integer) 1);
#line 5648 "check_hlds.mode_util.c"
    check_hlds__mode_util__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 911 "mode_util.m"
    {
#line 911 "mode_util.m"
      mercury__list__duplicate_3_p_0(check_hlds__mode_util__TypeCtorInfo_32_32, check_hlds__mode_util__NumFuncArgs_10, ((MR_Box) (&check_hlds__mode_util_scalar_common_2[4])), &check_hlds__mode_util__FuncArgModes_11);
    }
#line 913 "mode_util.m"
    {
#line 913 "mode_util.m"
      mercury__list__append_3_p_1(check_hlds__mode_util__TypeCtorInfo_32_32, check_hlds__mode_util__FuncArgModes_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_2[7]), &check_hlds__mode_util__PredArgModes0_13);
    }
#line 914 "mode_util.m"
    {
#line 914 "mode_util.m"
      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__PredArgTypes_5, check_hlds__mode_util__PredArgModes0_13, &check_hlds__mode_util__PredArgModes_14);
    }
#line 916 "mode_util.m"
    {
#line 916 "mode_util.m"
      MR_Word base;
#line 916 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "mode_util.m"
      *check_hlds__mode_util__PredInstInfo_6 = base;
#line 916 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 916 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__PredArgModes_14));
#line 916 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 916 "mode_util.m"
    }
#line 906 "mode_util.m"
  }
#line 903 "mode_util.m"
}

#line 781 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 781 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 781 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 781 "mode_util.m"
{
#line 786 "mode_util.m"
  {
#line 786 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 786 "mode_util.m"
    if ((check_hlds__mode_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "mode_util.m"
      *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "mode_util.m"
    else
#line 786 "mode_util.m"
      if ((check_hlds__mode_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 866 "mode_util.m"
        *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 786 "mode_util.m"
      else
#line 786 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 786 "mode_util.m"
          {
#line 786 "mode_util.m"
            MR_Word check_hlds__mode_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 786 "mode_util.m"
            MR_Word check_hlds__mode_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)));

#line 786 "mode_util.m"
            if ((check_hlds__mode_util__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "mode_util.m"
              {
#line 806 "mode_util.m"
                MR_Word check_hlds__mode_util__Type_66;
#line 811 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgTypes_63;
#line 808 "mode_util.m"
                MR_Word check_hlds__mode_util__V_92_92;
#line 808 "mode_util.m"
                MR_Word check_hlds__mode_util__V_18_18;

#line 807 "mode_util.m"
                {
#line 807 "mode_util.m"
                  check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_66);
                }
#line 808 "mode_util.m"
                {
#line 808 "mode_util.m"
                  check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_66, &check_hlds__mode_util__V_18_18, &check_hlds__mode_util__V_92_92, &check_hlds__mode_util__ArgTypes_63);
                }
#line 808 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 808 "mode_util.m"
                  check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_92_92);
#line 811 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 809 "mode_util.m"
                  {
#line 809 "mode_util.m"
                    MR_Word check_hlds__mode_util__V_53_53;
#line 809 "mode_util.m"
                    MR_Word check_hlds__mode_util__HOInstInfo_62;

#line 809 "mode_util.m"
                    {
#line 809 "mode_util.m"
                      check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_63, &check_hlds__mode_util__HOInstInfo_62);
                    }
#line 810 "mode_util.m"
                    check_hlds__mode_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_62);
#line 810 "mode_util.m"
                    {
#line 810 "mode_util.m"
                      MR_Word base;
#line 810 "mode_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "mode_util.m"
                      *check_hlds__mode_util__Inst_10 = base;
#line 810 "mode_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_96_96));
#line 810 "mode_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_53_53));
#line 810 "mode_util.m"
                    }
#line 809 "mode_util.m"
                  }
#line 811 "mode_util.m"
                else
#line 812 "mode_util.m"
                  {
#line 812 "mode_util.m"
                    {
#line 812 "mode_util.m"
                      MR_Word base;
#line 812 "mode_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "mode_util.m"
                      *check_hlds__mode_util__Inst_10 = base;
#line 812 "mode_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_96_96));
#line 812 "mode_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 812 "mode_util.m"
                    }
#line 812 "mode_util.m"
                  }
#line 806 "mode_util.m"
              }
#line 786 "mode_util.m"
            else
#line 833 "mode_util.m"
              {
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__V_48_48;
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__Type_75;
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__PredInstInfo0_77 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_95_95), (MR_Integer) 1);
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__PredOrFunc_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_77, (MR_Integer) 0)));
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_77, (MR_Integer) 1)));
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__MaybeArgRegs_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_77, (MR_Integer) 2)));
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__Det_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_77, (MR_Integer) 3)));
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_82;
#line 833 "mode_util.m"
                MR_Word check_hlds__mode_util__PredInstInfo_83;
#line 841 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgTypes_73;
#line 837 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_89_89;
#line 837 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_90_90;
#line 837 "mode_util.m"
                MR_Word check_hlds__mode_util__V_94_94;
#line 837 "mode_util.m"
                MR_Word check_hlds__mode_util__V_29_29;

#line 835 "mode_util.m"
                {
#line 835 "mode_util.m"
                  check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_75);
                }
#line 837 "mode_util.m"
                {
#line 837 "mode_util.m"
                  check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_75, &check_hlds__mode_util__V_29_29, &check_hlds__mode_util__V_94_94, &check_hlds__mode_util__ArgTypes_73);
                }
#line 837 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 837 "mode_util.m"
                  {
#line 837 "mode_util.m"
                    check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_78 == check_hlds__mode_util__V_94_94);
#line 837 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 837 "mode_util.m"
                      {
#line 5863 "check_hlds.mode_util.c"
                        check_hlds__mode_util__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 5865 "check_hlds.mode_util.c"
                        check_hlds__mode_util__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 838 "mode_util.m"
                        {
#line 838 "mode_util.m"
                          check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_89_89, check_hlds__mode_util__TypeCtorInfo_90_90, check_hlds__mode_util__ArgTypes_73, check_hlds__mode_util__Modes0_79);
                        }
#line 837 "mode_util.m"
                      }
#line 837 "mode_util.m"
                  }
#line 841 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 840 "mode_util.m"
                  {
#line 840 "mode_util.m"
                    check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_73, check_hlds__mode_util__Modes0_79, &check_hlds__mode_util__Modes_82);
                  }
#line 841 "mode_util.m"
                else
#line 846 "mode_util.m"
                  check_hlds__mode_util__Modes_82 = check_hlds__mode_util__Modes0_79;
#line 848 "mode_util.m"
                {
#line 848 "mode_util.m"
                  check_hlds__mode_util__PredInstInfo_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 848 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_83, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_78));
#line 848 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_83, 1) = ((MR_Box) (check_hlds__mode_util__Modes_82));
#line 848 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_83, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_80));
#line 848 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_83, 3) = ((MR_Box) (check_hlds__mode_util__Det_81));
#line 848 "mode_util.m"
                }
#line 849 "mode_util.m"
                check_hlds__mode_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_83);
#line 849 "mode_util.m"
                {
#line 849 "mode_util.m"
                  MR_Word base;
#line 849 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "mode_util.m"
                  *check_hlds__mode_util__Inst_10 = base;
#line 849 "mode_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_96_96));
#line 849 "mode_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_48_48));
#line 849 "mode_util.m"
                }
#line 833 "mode_util.m"
              }
#line 786 "mode_util.m"
          }
#line 786 "mode_util.m"
        else
#line 786 "mode_util.m"
          if (((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 790 "mode_util.m"
            {
#line 791 "mode_util.m"
              {
#line 791 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_ctor_info_lazily\'/5", (MR_String) "typeinfo already present");
#line 791 "mode_util.m"
                return;
              }
#line 790 "mode_util.m"
            }
#line 786 "mode_util.m"
          else
#line 786 "mode_util.m"
            if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 878 "mode_util.m"
              *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 786 "mode_util.m"
            else
#line 786 "mode_util.m"
              if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 851 "mode_util.m"
                {
#line 851 "mode_util.m"
                  MR_Word check_hlds__mode_util__BoundInsts0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 3)));
#line 851 "mode_util.m"
                  MR_Word check_hlds__mode_util__BoundInsts_33;
#line 851 "mode_util.m"
                  MR_Word check_hlds__mode_util__Uniq_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 851 "mode_util.m"
                  MR_Word check_hlds__mode_util__Type_85;
#line 851 "mode_util.m"
                  MR_Word check_hlds__mode_util___InstResult_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));

#line 852 "mode_util.m"
                  {
#line 852 "mode_util.m"
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_85);
                  }
#line 853 "mode_util.m"
                  {
#line 853 "mode_util.m"
                    check_hlds__mode_util__propagate_ctor_info_2_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_85, check_hlds__mode_util__BoundInsts0_32, &check_hlds__mode_util__BoundInsts_33);
                  }
#line 857 "mode_util.m"
                  if ((check_hlds__mode_util__BoundInsts_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 857 "mode_util.m"
                  else
#line 858 "mode_util.m"
                    {
#line 863 "mode_util.m"
                      {
#line 863 "mode_util.m"
                        MR_Word base;
#line 863 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 863 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 863 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 863 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_84));
#line 863 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_33));
#line 863 "mode_util.m"
                      }
#line 858 "mode_util.m"
                    }
#line 851 "mode_util.m"
                }
#line 786 "mode_util.m"
              else
#line 786 "mode_util.m"
                if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 872 "mode_util.m"
                  {
#line 872 "mode_util.m"
                    MR_Word check_hlds__mode_util__V_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 872 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubInst0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 872 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubInst_39;

#line 873 "mode_util.m"
                    {
#line 873 "mode_util.m"
                      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, check_hlds__mode_util__SubInst0_38, &check_hlds__mode_util__SubInst_39);
                    }
#line 875 "mode_util.m"
                    {
#line 875 "mode_util.m"
                      MR_Word base;
#line 875 "mode_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 875 "mode_util.m"
                      *check_hlds__mode_util__Inst_10 = base;
#line 875 "mode_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 875 "mode_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_37));
#line 875 "mode_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubInst_39));
#line 875 "mode_util.m"
                    }
#line 872 "mode_util.m"
                  }
#line 786 "mode_util.m"
                else
#line 786 "mode_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 880 "mode_util.m"
                    {
#line 880 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstName0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 880 "mode_util.m"
                      MR_Word check_hlds__mode_util__InstName_45;
#line 880 "mode_util.m"
                      MR_Word check_hlds__mode_util__Type_86;
#line 882 "mode_util.m"
                      MR_Word check_hlds__mode_util__V_43_43;
#line 882 "mode_util.m"
                      MR_Word check_hlds__mode_util__V_44_44;

#line 881 "mode_util.m"
                      {
#line 881 "mode_util.m"
                        check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_86);
                      }
#line 882 "mode_util.m"
                      check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__InstName0_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 882 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 882 "mode_util.m"
                        {
#line 882 "mode_util.m"
                          check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_42, (MR_Integer) 1)));
#line 882 "mode_util.m"
                          check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_42, (MR_Integer) 2)));
#line 888 "mode_util.m"
                          check_hlds__mode_util__InstName_45 = check_hlds__mode_util__InstName0_42;
#line 882 "mode_util.m"
                        }
#line 882 "mode_util.m"
                      else
#line 890 "mode_util.m"
                        {
#line 890 "mode_util.m"
                          check_hlds__mode_util__InstName_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 890 "mode_util.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 890 "mode_util.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_45, 1) = ((MR_Box) (check_hlds__mode_util__Type_86));
#line 890 "mode_util.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_45, 2) = ((MR_Box) (check_hlds__mode_util__InstName0_42));
#line 890 "mode_util.m"
                        }
#line 892 "mode_util.m"
                      {
#line 892 "mode_util.m"
                        MR_Word base;
#line 892 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 892 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 892 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_45));
#line 892 "mode_util.m"
                      }
#line 880 "mode_util.m"
                    }
#line 786 "mode_util.m"
                  else
#line 786 "mode_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 786 "mode_util.m"
                      {
#line 786 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 786 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));

#line 786 "mode_util.m"
                        if ((check_hlds__mode_util__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "mode_util.m"
                          {
#line 793 "mode_util.m"
                            MR_Word check_hlds__mode_util__Type_13;
#line 798 "mode_util.m"
                            MR_Word check_hlds__mode_util__ArgTypes_16;
#line 795 "mode_util.m"
                            MR_Word check_hlds__mode_util__V_91_91;
#line 795 "mode_util.m"
                            MR_Word check_hlds__mode_util__V_14_14;

#line 794 "mode_util.m"
                            {
#line 794 "mode_util.m"
                              check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_13);
                            }
#line 795 "mode_util.m"
                            {
#line 795 "mode_util.m"
                              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_13, &check_hlds__mode_util__V_14_14, &check_hlds__mode_util__V_91_91, &check_hlds__mode_util__ArgTypes_16);
                            }
#line 795 "mode_util.m"
                            if (check_hlds__mode_util__succeeded)
#line 795 "mode_util.m"
                              check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_91_91);
#line 798 "mode_util.m"
                            if (check_hlds__mode_util__succeeded)
#line 796 "mode_util.m"
                              {
#line 796 "mode_util.m"
                                MR_Word check_hlds__mode_util__HOInstInfo_17;
#line 796 "mode_util.m"
                                MR_Word check_hlds__mode_util__V_57_57;

#line 796 "mode_util.m"
                                {
#line 796 "mode_util.m"
                                  check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_16, &check_hlds__mode_util__HOInstInfo_17);
                                }
#line 797 "mode_util.m"
                                check_hlds__mode_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_17);
#line 797 "mode_util.m"
                                {
#line 797 "mode_util.m"
                                  MR_Word base;
#line 797 "mode_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "mode_util.m"
                                  *check_hlds__mode_util__Inst_10 = base;
#line 797 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 797 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_98_98));
#line 797 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_57_57));
#line 797 "mode_util.m"
                                }
#line 796 "mode_util.m"
                              }
#line 798 "mode_util.m"
                            else
#line 803 "mode_util.m"
                              {
#line 803 "mode_util.m"
                                {
#line 803 "mode_util.m"
                                  MR_Word base;
#line 803 "mode_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 803 "mode_util.m"
                                  *check_hlds__mode_util__Inst_10 = base;
#line 803 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 803 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_98_98));
#line 803 "mode_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "mode_util.m"
                                }
#line 803 "mode_util.m"
                              }
#line 793 "mode_util.m"
                          }
#line 786 "mode_util.m"
                        else
#line 815 "mode_util.m"
                          {
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__PredInstInfo0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_97_97), (MR_Integer) 1);
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 0)));
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 1)));
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 2)));
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 3)));
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__Modes_27;
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__PredInstInfo_28;
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__V_50_50;
#line 815 "mode_util.m"
                            MR_Word check_hlds__mode_util__Type_71;
#line 823 "mode_util.m"
                            MR_Word check_hlds__mode_util__ArgTypes_69;
#line 819 "mode_util.m"
                            MR_Word check_hlds__mode_util__TypeCtorInfo_87_87;
#line 819 "mode_util.m"
                            MR_Word check_hlds__mode_util__TypeCtorInfo_88_88;
#line 819 "mode_util.m"
                            MR_Word check_hlds__mode_util__V_93_93;
#line 819 "mode_util.m"
                            MR_Word check_hlds__mode_util__V_25_25;

#line 817 "mode_util.m"
                            {
#line 817 "mode_util.m"
                              check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_71);
                            }
#line 819 "mode_util.m"
                            {
#line 819 "mode_util.m"
                              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_71, &check_hlds__mode_util__V_25_25, &check_hlds__mode_util__V_93_93, &check_hlds__mode_util__ArgTypes_69);
                            }
#line 819 "mode_util.m"
                            if (check_hlds__mode_util__succeeded)
#line 819 "mode_util.m"
                              {
#line 819 "mode_util.m"
                                check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_21 == check_hlds__mode_util__V_93_93);
#line 819 "mode_util.m"
                                if (check_hlds__mode_util__succeeded)
#line 819 "mode_util.m"
                                  {
#line 6250 "check_hlds.mode_util.c"
                                    check_hlds__mode_util__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 6252 "check_hlds.mode_util.c"
                                    check_hlds__mode_util__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 820 "mode_util.m"
                                    {
#line 820 "mode_util.m"
                                      check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_87_87, check_hlds__mode_util__TypeCtorInfo_88_88, check_hlds__mode_util__ArgTypes_69, check_hlds__mode_util__Modes0_22);
                                    }
#line 819 "mode_util.m"
                                  }
#line 819 "mode_util.m"
                              }
#line 823 "mode_util.m"
                            if (check_hlds__mode_util__succeeded)
#line 822 "mode_util.m"
                              {
#line 822 "mode_util.m"
                                check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_69, check_hlds__mode_util__Modes0_22, &check_hlds__mode_util__Modes_27);
                              }
#line 823 "mode_util.m"
                            else
#line 828 "mode_util.m"
                              check_hlds__mode_util__Modes_27 = check_hlds__mode_util__Modes0_22;
#line 830 "mode_util.m"
                            {
#line 830 "mode_util.m"
                              check_hlds__mode_util__PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 830 "mode_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_21));
#line 830 "mode_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 1) = ((MR_Box) (check_hlds__mode_util__Modes_27));
#line 830 "mode_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_23));
#line 830 "mode_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 3) = ((MR_Box) (check_hlds__mode_util__Det_24));
#line 830 "mode_util.m"
                            }
#line 831 "mode_util.m"
                            check_hlds__mode_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_28);
#line 831 "mode_util.m"
                            {
#line 831 "mode_util.m"
                              MR_Word base;
#line 831 "mode_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 831 "mode_util.m"
                              *check_hlds__mode_util__Inst_10 = base;
#line 831 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 831 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_98_98));
#line 831 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_50_50));
#line 831 "mode_util.m"
                            }
#line 815 "mode_util.m"
                          }
#line 786 "mode_util.m"
                      }
#line 786 "mode_util.m"
                    else
#line 870 "mode_util.m"
                      *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 786 "mode_util.m"
  }
#line 781 "mode_util.m"
}

#line 639 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 639 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 639 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 639 "mode_util.m"
{
#line 659 "mode_util.m"
  {
#line 659 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 659 "mode_util.m"
    {
#line 659 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
#line 659 "mode_util.m"
      return;
    }
#line 659 "mode_util.m"
  }
#line 639 "mode_util.m"
}

#line 636 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 636 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 636 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 636 "mode_util.m"
{
#line 656 "mode_util.m"
  {
#line 656 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 656 "mode_util.m"
    {
#line 656 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
#line 656 "mode_util.m"
      return;
    }
#line 656 "mode_util.m"
  }
#line 636 "mode_util.m"
}

#line 600 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 600 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 600 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8)
#line 600 "mode_util.m"
{
#line 603 "mode_util.m"
  {
#line 603 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 603 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst0_9;
#line 603 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst0_10;
#line 603 "mode_util.m"
    MR_Word check_hlds__mode_util__Subst_11;
#line 603 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_12;
#line 603 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_13;

#line 604 "mode_util.m"
    {
#line 604 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode0_7, &check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__FinalInst0_10);
    }
#line 605 "mode_util.m"
    {
#line 605 "mode_util.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_11);
    }
#line 606 "mode_util.m"
    {
#line 606 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__InitialInst_12);
    }
#line 608 "mode_util.m"
    {
#line 608 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__FinalInst0_10, &check_hlds__mode_util__FinalInst_13);
    }
#line 610 "mode_util.m"
    {
#line 610 "mode_util.m"
      MR_Word base;
#line 610 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "mode_util.m"
      *check_hlds__mode_util__Mode_8 = base;
#line 610 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_12));
#line 610 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_13));
#line 610 "mode_util.m"
    }
#line 603 "mode_util.m"
  }
#line 600 "mode_util.m"
}

#line 452 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_2_3_p_0(
#line 452 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 452 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 452 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7)
#line 452 "mode_util.m"
{
#line 455 "mode_util.m"
  while (MR_TRUE)
#line 455 "mode_util.m"
    {
#line 455 "mode_util.m"
      /* tailcall optimized into a loop */
#line 455 "mode_util.m"
      {
#line 455 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 455 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_4;
#line 455 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_5;
#line 463 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInst0_9;
#line 457 "mode_util.m"
        MR_Word check_hlds__mode_util__InstConsId_8;
#line 457 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;
#line 457 "mode_util.m"
        MR_Word check_hlds__mode_util__V_11_11;

#line 455 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 455 "mode_util.m"
          {
#line 455 "mode_util.m"
            check_hlds__mode_util__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "mode_util.m"
            check_hlds__mode_util__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 457 "mode_util.m"
            check_hlds__mode_util__InstConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 0)));
#line 457 "mode_util.m"
            check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 1)));
#line 457 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 457 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 457 "mode_util.m"
              {
#line 457 "mode_util.m"
                check_hlds__mode_util__ArgInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 0)));
#line 457 "mode_util.m"
                check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 1)));
#line 457 "mode_util.m"
                check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 460 "mode_util.m"
                  {
#line 460 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__mode_util__ConsId_6, check_hlds__mode_util__InstConsId_8);
                  }
#line 457 "mode_util.m"
              }
#line 463 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 462 "mode_util.m"
              {
#line 462 "mode_util.m"
                *check_hlds__mode_util__ArgInst_7 = check_hlds__mode_util__ArgInst0_9;
#line 462 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 462 "mode_util.m"
              }
#line 463 "mode_util.m"
            else
#line 464 "mode_util.m"
              {
#line 464 "mode_util.m"
                /* direct tailcall eliminated */
#line 464 "mode_util.m"
                {
#line 464 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__BoundInsts_5;

#line 464 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 464 "mode_util.m"
                }
#line 464 "mode_util.m"
                continue;
#line 464 "mode_util.m"
              }
#line 455 "mode_util.m"
          }
#line 455 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 455 "mode_util.m"
      }
#line 455 "mode_util.m"
      break;
#line 455 "mode_util.m"
    }
#line 452 "mode_util.m"
}

#line 409 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 409 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 409 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8)
#line 409 "mode_util.m"
{
#line 415 "mode_util.m"
  while (MR_TRUE)
#line 415 "mode_util.m"
    {
#line 415 "mode_util.m"
      /* tailcall optimized into a loop */
#line 415 "mode_util.m"
      {
#line 415 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 415 "mode_util.m"
        if ((check_hlds__mode_util__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "mode_util.m"
          *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "mode_util.m"
        else
#line 415 "mode_util.m"
          if ((check_hlds__mode_util__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "mode_util.m"
            *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 415 "mode_util.m"
          else
#line 415 "mode_util.m"
            if (((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 439 "mode_util.m"
              {
#line 439 "mode_util.m"
                MR_Word check_hlds__mode_util__Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 0)));
#line 439 "mode_util.m"
                MR_Word check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 440 "mode_util.m"
                {
#line 440 "mode_util.m"
                  MR_Word base;
#line 440 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "mode_util.m"
                  *check_hlds__mode_util__ArgInst_8 = base;
#line 440 "mode_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_32));
#line 440 "mode_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "mode_util.m"
                }
#line 439 "mode_util.m"
              }
#line 415 "mode_util.m"
            else
#line 415 "mode_util.m"
              if (((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 1))))
#line 437 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "mode_util.m"
              else
#line 415 "mode_util.m"
                if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 442 "mode_util.m"
                  {
#line 443 "mode_util.m"
                    {
#line 443 "mode_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "abstract insts not supported");
#line 443 "mode_util.m"
                      return;
                    }
#line 442 "mode_util.m"
                  }
#line 415 "mode_util.m"
                else
#line 415 "mode_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 425 "mode_util.m"
                    {
#line 425 "mode_util.m"
                      MR_Word check_hlds__mode_util__List_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 3)));
#line 425 "mode_util.m"
                      MR_Word check_hlds__mode_util___Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 425 "mode_util.m"
                      MR_Word check_hlds__mode_util___InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 428 "mode_util.m"
                      MR_Word check_hlds__mode_util__ArgInst0_16;

#line 426 "mode_util.m"
                      {
#line 426 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__mode_util__get_single_arg_inst_2_3_p_0(check_hlds__mode_util__List_15, check_hlds__mode_util__ConsId_7, &check_hlds__mode_util__ArgInst0_16);
                      }
#line 428 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 427 "mode_util.m"
                        *check_hlds__mode_util__ArgInst_8 = check_hlds__mode_util__ArgInst0_16;
#line 428 "mode_util.m"
                      else
#line 430 "mode_util.m"
                        *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 425 "mode_util.m"
                    }
#line 415 "mode_util.m"
                  else
#line 415 "mode_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 448 "mode_util.m"
                      {
#line 448 "mode_util.m"
                        MR_Word check_hlds__mode_util__InsideInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 448 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 449 "mode_util.m"
                        /* direct tailcall eliminated */
#line 449 "mode_util.m"
                        {
#line 449 "mode_util.m"
                          MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__InsideInst_23;

#line 449 "mode_util.m"
                          check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 449 "mode_util.m"
                        }
#line 449 "mode_util.m"
                        continue;
#line 448 "mode_util.m"
                      }
#line 415 "mode_util.m"
                    else
#line 415 "mode_util.m"
                      if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 415 "mode_util.m"
                        {
#line 415 "mode_util.m"
                          MR_Word check_hlds__mode_util__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 415 "mode_util.m"
                          MR_Word check_hlds__mode_util__NamedInst_10;

#line 416 "mode_util.m"
                          {
#line 416 "mode_util.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__InstName_9, &check_hlds__mode_util__NamedInst_10);
                          }
#line 417 "mode_util.m"
                          /* direct tailcall eliminated */
#line 417 "mode_util.m"
                          {
#line 417 "mode_util.m"
                            MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__NamedInst_10;

#line 417 "mode_util.m"
                            check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 417 "mode_util.m"
                          }
#line 417 "mode_util.m"
                          continue;
#line 415 "mode_util.m"
                        }
#line 415 "mode_util.m"
                      else
#line 415 "mode_util.m"
                        if (((((MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 422 "mode_util.m"
                          {
#line 422 "mode_util.m"
                            MR_Word check_hlds__mode_util__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 422 "mode_util.m"
                            MR_Word check_hlds__mode_util___PredInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));

#line 423 "mode_util.m"
                            {
#line 423 "mode_util.m"
                              MR_Word base;
#line 423 "mode_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 423 "mode_util.m"
                              *check_hlds__mode_util__ArgInst_8 = base;
#line 423 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_11));
#line 423 "mode_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "mode_util.m"
                            }
#line 422 "mode_util.m"
                          }
#line 415 "mode_util.m"
                        else
#line 445 "mode_util.m"
                          {
#line 446 "mode_util.m"
                            {
#line 446 "mode_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "inst_var");
#line 446 "mode_util.m"
                              return;
                            }
#line 445 "mode_util.m"
                          }
#line 415 "mode_util.m"
      }
#line 415 "mode_util.m"
      break;
#line 415 "mode_util.m"
    }
#line 409 "mode_util.m"
}

#line 295 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 295 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 295 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10)
#line 295 "mode_util.m"
{
#line 321 "mode_util.m"
  while (MR_TRUE)
#line 321 "mode_util.m"
    {
#line 321 "mode_util.m"
      /* tailcall optimized into a loop */
#line 321 "mode_util.m"
      {
#line 321 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 321 "mode_util.m"
        MR_Word check_hlds__mode_util__FunctorName_11;
#line 321 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgType_12;
#line 321 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_13;
#line 308 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_22_22;

#line 305 "mode_util.m"
        {
#line 305 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_8, &check_hlds__mode_util__FunctorName_11, &check_hlds__mode_util__ArgType_12);
        }
#line 305 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 305 "mode_util.m"
          {
#line 307 "mode_util.m"
            {
#line 307 "mode_util.m"
              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__mode_util__Type_8, &check_hlds__mode_util__TypeCtor_13);
            }
#line 305 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 305 "mode_util.m"
              {
#line 6831 "check_hlds.mode_util.c"
                check_hlds__mode_util__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 308 "mode_util.m"
                {
#line 308 "mode_util.m"
                  check_hlds__mode_util__succeeded = mercury__list__member_2_p_0(check_hlds__mode_util__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__mode_util__TypeCtor_13)), check_hlds__mode_util__ContainingTypes_9);
                }
#line 308 "mode_util.m"
                check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 305 "mode_util.m"
              }
#line 305 "mode_util.m"
          }
#line 321 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 314 "mode_util.m"
          {
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_14;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_15;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__ConsId_16;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialArgInst_17;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalArgInst_18;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeOfArg_19;
#line 314 "mode_util.m"
            MR_Word check_hlds__mode_util__V_21_21;

#line 314 "mode_util.m"
            {
#line 314 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_14, &check_hlds__mode_util__FinalInst_15);
            }
#line 315 "mode_util.m"
            {
#line 315 "mode_util.m"
              check_hlds__mode_util__ConsId_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 315 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 315 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 1) = ((MR_Box) (check_hlds__mode_util__FunctorName_11));
#line 315 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 2) = ((MR_Box) ((MR_Integer) 1));
#line 315 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 315 "mode_util.m"
            }
#line 316 "mode_util.m"
            {
#line 316 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_14, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__InitialArgInst_17);
            }
#line 317 "mode_util.m"
            {
#line 317 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_15, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__FinalArgInst_18);
            }
#line 318 "mode_util.m"
            {
#line 318 "mode_util.m"
              check_hlds__mode_util__ModeOfArg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 0) = ((MR_Box) (check_hlds__mode_util__InitialArgInst_17));
#line 318 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 1) = ((MR_Box) (check_hlds__mode_util__FinalArgInst_18));
#line 318 "mode_util.m"
            }
#line 320 "mode_util.m"
            {
#line 320 "mode_util.m"
              check_hlds__mode_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 0) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 320 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 1) = ((MR_Box) (check_hlds__mode_util__ContainingTypes_9));
#line 320 "mode_util.m"
            }
#line 319 "mode_util.m"
            /* direct tailcall eliminated */
#line 319 "mode_util.m"
            {
#line 319 "mode_util.m"
              MR_Word check_hlds__mode_util__Mode__tmp_copy_7 = check_hlds__mode_util__ModeOfArg_19;
#line 319 "mode_util.m"
              MR_Word check_hlds__mode_util__Type__tmp_copy_8 = check_hlds__mode_util__ArgType_12;
#line 319 "mode_util.m"
              MR_Word check_hlds__mode_util__ContainingTypes__tmp_copy_9 = check_hlds__mode_util__V_21_21;

#line 319 "mode_util.m"
              check_hlds__mode_util__ContainingTypes_9 = check_hlds__mode_util__ContainingTypes__tmp_copy_9;
#line 319 "mode_util.m"
              check_hlds__mode_util__Type_8 = check_hlds__mode_util__Type__tmp_copy_8;
#line 319 "mode_util.m"
              check_hlds__mode_util__Mode_7 = check_hlds__mode_util__Mode__tmp_copy_7;
#line 319 "mode_util.m"
            }
#line 319 "mode_util.m"
            continue;
#line 314 "mode_util.m"
          }
#line 321 "mode_util.m"
        else
#line 328 "mode_util.m"
          {
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_26;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_27;

#line 329 "mode_util.m"
            {
#line 329 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_26, &check_hlds__mode_util__FinalInst_27);
            }
#line 330 "mode_util.m"
            {
#line 330 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_26);
            }
#line 332 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 331 "mode_util.m"
              *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 0;
#line 332 "mode_util.m"
            else
#line 334 "mode_util.m"
              {
#line 332 "mode_util.m"
                {
#line 332 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_27);
                }
#line 334 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 333 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 1;
#line 334 "mode_util.m"
                else
#line 335 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 2;
#line 334 "mode_util.m"
              }
#line 328 "mode_util.m"
          }
#line 321 "mode_util.m"
      }
#line 321 "mode_util.m"
      break;
#line 321 "mode_util.m"
    }
#line 295 "mode_util.m"
}

#line 192 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__partition_args_5_p_0(
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeInfo_for_T_36,
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 192 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 192 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
#line 192 "mode_util.m"
{
#line 1783 "mode_util.m"
  {
#line 1783 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1783 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1783 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1787 "mode_util.m"
        {
#line 1787 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1787 "mode_util.m"
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1787 "mode_util.m"
        }
#line 1783 "mode_util.m"
      else
#line 1783 "mode_util.m"
        {
#line 1784 "mode_util.m"
          {
#line 1784 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1784 "mode_util.m"
            return;
          }
#line 1783 "mode_util.m"
        }
#line 1783 "mode_util.m"
    else
#line 1783 "mode_util.m"
      {
#line 1783 "mode_util.m"
        MR_Word check_hlds__mode_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1783 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1783 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1785 "mode_util.m"
          {
#line 1786 "mode_util.m"
            {
#line 1786 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1786 "mode_util.m"
              return;
            }
#line 1785 "mode_util.m"
          }
#line 1783 "mode_util.m"
        else
#line 1789 "mode_util.m"
          {
#line 1789 "mode_util.m"
            MR_Box check_hlds__mode_util__Arg_26 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0));
#line 1789 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1789 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1789 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 245 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_41;
#line 246 "mode_util.m"
            MR_Word check_hlds__mode_util___FinalInst_42;

#line 1790 "mode_util.m"
            {
#line 1790 "mode_util.m"
              check_hlds__mode_util__partition_args_5_p_0(check_hlds__mode_util__TypeInfo_for_T_36, check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_37_37, check_hlds__mode_util__Args_27, &check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32, &check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33);
            }
#line 246 "mode_util.m"
            {
#line 246 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_38_38, &check_hlds__mode_util__InitialInst_41, &check_hlds__mode_util___FinalInst_42);
            }
#line 247 "mode_util.m"
            {
#line 247 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__InitialInst_41);
            }
#line 1793 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1792 "mode_util.m"
              {
#line 1792 "mode_util.m"
                {
#line 1792 "mode_util.m"
                  MR_Word base;
#line 1792 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1792 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1792 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32));
#line 1792 "mode_util.m"
                }
#line 1792 "mode_util.m"
                *check_hlds__mode_util__HeadVar__5_5 = check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 1792 "mode_util.m"
              }
#line 1793 "mode_util.m"
            else
#line 1794 "mode_util.m"
              {
#line 1794 "mode_util.m"
                {
#line 1794 "mode_util.m"
                  MR_Word base;
#line 1794 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__5_5 = base;
#line 1794 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1794 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33));
#line 1794 "mode_util.m"
                }
#line 1794 "mode_util.m"
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1794 "mode_util.m"
              }
#line 1789 "mode_util.m"
          }
#line 1783 "mode_util.m"
      }
#line 1783 "mode_util.m"
  }
#line 192 "mode_util.m"
}

#line 184 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_inst_4_p_0(
#line 184 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 184 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 184 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_7,
#line 184 "mode_util.m"
  MR_Word * check_hlds__mode_util__NormalisedInst_8)
#line 184 "mode_util.m"
{
#line 1741 "mode_util.m"
  {
#line 1741 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1741 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_9;
#line 1748 "mode_util.m"
    MR_Word check_hlds__mode_util__V_10_10;
#line 1748 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;
#line 1748 "mode_util.m"
    MR_Word check_hlds__mode_util__V_12_12;

#line 1747 "mode_util.m"
    {
#line 1747 "mode_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst0_7, &check_hlds__mode_util__Inst_9);
    }
#line 1748 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Inst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1748 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1748 "mode_util.m"
      {
#line 1748 "mode_util.m"
        check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 1)));
#line 1748 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 2)));
#line 1748 "mode_util.m"
        check_hlds__mode_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 3)));
#line 1766 "mode_util.m"
        {
#line 1766 "mode_util.m"
          MR_Word check_hlds__mode_util__Uniq_13;

#line 1753 "mode_util.m"
          {
#line 1753 "mode_util.m"
            check_hlds__mode_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__mode_util__Type_6);
          }
#line 1753 "mode_util.m"
          check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1753 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1753 "mode_util.m"
            {
#line 1755 "mode_util.m"
              {
#line 1755 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1753 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1753 "mode_util.m"
                {
#line 1756 "mode_util.m"
                  {
#line 1756 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1758 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1757 "mode_util.m"
                    {
#line 1757 "mode_util.m"
                      check_hlds__mode_util__Uniq_13 = (MR_Integer) 1;
#line 1757 "mode_util.m"
                      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1757 "mode_util.m"
                    }
#line 1758 "mode_util.m"
                  else
#line 1760 "mode_util.m"
                    {
#line 1758 "mode_util.m"
                      {
#line 1758 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1760 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 1760 "mode_util.m"
                        {
#line 1759 "mode_util.m"
                          check_hlds__mode_util__Uniq_13 = (MR_Integer) 2;
#line 1759 "mode_util.m"
                          check_hlds__mode_util__succeeded = MR_TRUE;
#line 1760 "mode_util.m"
                        }
#line 1760 "mode_util.m"
                    }
#line 1753 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1753 "mode_util.m"
                    {
#line 1763 "mode_util.m"
                      {
#line 1763 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1763 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1753 "mode_util.m"
                    }
#line 1753 "mode_util.m"
                }
#line 1753 "mode_util.m"
            }
#line 1766 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1765 "mode_util.m"
            {
#line 1765 "mode_util.m"
              {
#line 1765 "mode_util.m"
                MR_Word base;
#line 1765 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1765 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = base;
#line 1765 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1765 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_13));
#line 1765 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1765 "mode_util.m"
              }
#line 1765 "mode_util.m"
            }
#line 1766 "mode_util.m"
          else
#line 1772 "mode_util.m"
            {
#line 1767 "mode_util.m"
              {
#line 1767 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1767 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1767 "mode_util.m"
                {
#line 1768 "mode_util.m"
                  {
#line 1768 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1768 "mode_util.m"
                  check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1767 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1767 "mode_util.m"
                    {
#line 1769 "mode_util.m"
                      {
#line 1769 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1769 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1767 "mode_util.m"
                    }
#line 1767 "mode_util.m"
                }
#line 1772 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1771 "mode_util.m"
                {
#line 1771 "mode_util.m"
                  *check_hlds__mode_util__NormalisedInst_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_1[2]);
#line 1771 "mode_util.m"
                }
#line 1772 "mode_util.m"
              else
#line 1775 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1772 "mode_util.m"
            }
#line 1766 "mode_util.m"
        }
#line 1748 "mode_util.m"
      }
#line 1748 "mode_util.m"
    else
#line 1778 "mode_util.m"
      *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1741 "mode_util.m"
  }
#line 184 "mode_util.m"
}

#line 181 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_insts_4_p_0(
#line 181 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 181 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 181 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 181 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 181 "mode_util.m"
{
#line 1731 "mode_util.m"
  {
#line 1731 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1731 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1731 "mode_util.m"
      else
#line 1732 "mode_util.m"
        {
#line 1733 "mode_util.m"
          {
#line 1733 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1733 "mode_util.m"
            return;
          }
#line 1732 "mode_util.m"
        }
#line 1731 "mode_util.m"
    else
#line 1731 "mode_util.m"
      {
#line 1731 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1731 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1731 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1734 "mode_util.m"
          {
#line 1735 "mode_util.m"
            {
#line 1735 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1735 "mode_util.m"
              return;
            }
#line 1734 "mode_util.m"
          }
#line 1731 "mode_util.m"
        else
#line 1737 "mode_util.m"
          {
#line 1737 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1737 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1737 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_25;
#line 1737 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_26;

#line 1738 "mode_util.m"
            {
#line 1738 "mode_util.m"
              check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Inst0_23, &check_hlds__mode_util__Inst_25);
            }
#line 1739 "mode_util.m"
            {
#line 1739 "mode_util.m"
              check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Insts0_24, &check_hlds__mode_util__Insts_26);
            }
#line 1737 "mode_util.m"
            {
#line 1737 "mode_util.m"
              MR_Word base;
#line 1737 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1737 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_25));
#line 1737 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_26));
#line 1737 "mode_util.m"
            }
#line 1737 "mode_util.m"
          }
#line 1731 "mode_util.m"
      }
#line 1731 "mode_util.m"
  }
#line 181 "mode_util.m"
}

#line 176 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(
#line 176 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_6,
#line 176 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_7,
#line 176 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_8,
#line 176 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_9,
#line 176 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_10)
#line 176 "mode_util.m"
{
#line 1715 "mode_util.m"
  {
#line 1715 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 0)));
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 1)));
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDelta0_13;
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_14;
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_15;
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_16;

#line 1717 "mode_util.m"
    {
#line 1717 "mode_util.m"
      check_hlds__mode_util__InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo0_12);
    }
#line 1718 "mode_util.m"
    {
#line 1718 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap0_7, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst0_14);
    }
#line 1719 "mode_util.m"
    {
#line 1719 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_8, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst_15);
    }
#line 1720 "mode_util.m"
    {
#line 1720 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_util__Inst_15, check_hlds__mode_util__Inst0_14);
    }
#line 1722 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1721 "mode_util.m"
      check_hlds__mode_util__GoalInfo_16 = check_hlds__mode_util__GoalInfo0_12;
#line 1722 "mode_util.m"
    else
#line 1723 "mode_util.m"
      {
#line 1723 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_17;

#line 1723 "mode_util.m"
        {
#line 1723 "mode_util.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_6, check_hlds__mode_util__Inst_15, check_hlds__mode_util__InstMapDelta0_13, &check_hlds__mode_util__InstMapDelta_17);
        }
#line 1724 "mode_util.m"
        {
#line 1724 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta_17, check_hlds__mode_util__GoalInfo0_12, &check_hlds__mode_util__GoalInfo_16);
        }
#line 1723 "mode_util.m"
      }
#line 1726 "mode_util.m"
    {
#line 1726 "mode_util.m"
      MR_Word base;
#line 1726 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1726 "mode_util.m"
      *check_hlds__mode_util__Goal_10 = base;
#line 1726 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_11));
#line 1726 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_16));
#line 1726 "mode_util.m"
    }
#line 1715 "mode_util.m"
  }
#line 176 "mode_util.m"
}

#line 169 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
#line 169 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 169 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 169 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 169 "mode_util.m"
{
#line 1703 "mode_util.m"
  {
#line 1703 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1703 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1703 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1703 "mode_util.m"
    else
#line 1704 "mode_util.m"
      {
#line 1704 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1704 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1704 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLive_8;
#line 1704 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLives_9;
#line 1704 "mode_util.m"
        MR_Word check_hlds__mode_util__FinalInst_11;
#line 1705 "mode_util.m"
        MR_Word check_hlds__mode_util___InitialInst_10;

#line 1705 "mode_util.m"
        {
#line 1705 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util___InitialInst_10, &check_hlds__mode_util__FinalInst_11);
        }
#line 1706 "mode_util.m"
        {
#line 1706 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__FinalInst_11);
        }
#line 1708 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1707 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 1;
#line 1708 "mode_util.m"
        else
#line 1709 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 0;
#line 1711 "mode_util.m"
        {
#line 1711 "mode_util.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__IsLives_9);
        }
#line 1704 "mode_util.m"
        {
#line 1704 "mode_util.m"
          MR_Word base;
#line 1704 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1704 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1704 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__IsLive_8));
#line 1704 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__IsLives_9));
#line 1704 "mode_util.m"
        }
#line 1704 "mode_util.m"
      }
#line 1703 "mode_util.m"
  }
#line 169 "mode_util.m"
}

#line 163 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 163 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 163 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 163 "mode_util.m"
{
#line 925 "mode_util.m"
  {
#line 925 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 925 "mode_util.m"
    {
#line 925 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
#line 925 "mode_util.m"
      return;
    }
#line 925 "mode_util.m"
  }
#line 163 "mode_util.m"
}

#line 155 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__constructors_to_bound_insts_5_p_0(
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 155 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 155 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 155 "mode_util.m"
{
#line 920 "mode_util.m"
  {
#line 920 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 920 "mode_util.m"
    {
#line 920 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
#line 920 "mode_util.m"
      return;
    }
#line 920 "mode_util.m"
  }
#line 155 "mode_util.m"
}

#line 147 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(
#line 147 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 147 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 147 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 147 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 147 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
#line 147 "mode_util.m"
{
#line 587 "mode_util.m"
  {
#line 587 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 587 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "mode_util.m"
        *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "mode_util.m"
      else
#line 592 "mode_util.m"
        {
#line 592 "mode_util.m"
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "mode_util.m"
          {
#line 593 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
#line 593 "mode_util.m"
            return;
          }
#line 592 "mode_util.m"
        }
#line 587 "mode_util.m"
    else
#line 587 "mode_util.m"
      {
#line 587 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 587 "mode_util.m"
        MR_Word check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));

#line 587 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "mode_util.m"
          {
#line 594 "mode_util.m"
            *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "mode_util.m"
            {
#line 595 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
#line 595 "mode_util.m"
              return;
            }
#line 594 "mode_util.m"
          }
#line 587 "mode_util.m"
        else
#line 589 "mode_util.m"
          {
#line 589 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 589 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 589 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_14;
#line 589 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_15;

#line 590 "mode_util.m"
            {
#line 590 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_31_31, check_hlds__mode_util__Inst0_12, &check_hlds__mode_util__Inst_14);
            }
#line 591 "mode_util.m"
            {
#line 591 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Insts0_13, &check_hlds__mode_util__Insts_15);
            }
#line 589 "mode_util.m"
            {
#line 589 "mode_util.m"
              MR_Word base;
#line 589 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "mode_util.m"
              *check_hlds__mode_util__HeadVar__5_5 = base;
#line 589 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_14));
#line 589 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_15));
#line 589 "mode_util.m"
            }
#line 589 "mode_util.m"
          }
#line 587 "mode_util.m"
      }
#line 587 "mode_util.m"
  }
#line 147 "mode_util.m"
}

#line 140 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(
#line 140 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 140 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 140 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 140 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 140 "mode_util.m"
{
#line 577 "mode_util.m"
  {
#line 577 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 577 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "mode_util.m"
      else
#line 582 "mode_util.m"
        {
#line 582 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "mode_util.m"
          {
#line 583 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
#line 583 "mode_util.m"
            return;
          }
#line 582 "mode_util.m"
        }
#line 577 "mode_util.m"
    else
#line 577 "mode_util.m"
      {
#line 577 "mode_util.m"
        MR_Word check_hlds__mode_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "mode_util.m"
        MR_Word check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 577 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "mode_util.m"
          {
#line 584 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "mode_util.m"
            {
#line 585 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
#line 585 "mode_util.m"
              return;
            }
#line 584 "mode_util.m"
          }
#line 577 "mode_util.m"
        else
#line 579 "mode_util.m"
          {
#line 579 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 579 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 579 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_11;
#line 579 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_12;

#line 580 "mode_util.m"
            {
#line 580 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_mode_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_26_26, check_hlds__mode_util__Mode0_9, &check_hlds__mode_util__Mode_11);
            }
#line 581 "mode_util.m"
            {
#line 581 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_25_25, check_hlds__mode_util__Modes0_10, &check_hlds__mode_util__Modes_12);
            }
#line 579 "mode_util.m"
            {
#line 579 "mode_util.m"
              MR_Word base;
#line 579 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 579 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_11));
#line 579 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_12));
#line 579 "mode_util.m"
            }
#line 579 "mode_util.m"
          }
#line 577 "mode_util.m"
      }
#line 577 "mode_util.m"
  }
#line 140 "mode_util.m"
}

#line 132 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_8_p_0(
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 132 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__InstVarSet_13,
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_14,
#line 132 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo0_15,
#line 132 "mode_util.m"
  MR_Word * check_hlds__mode_util__ModuleInfo_16)
#line 132 "mode_util.m"
{
#line 1123 "mode_util.m"
  {
#line 1123 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1123 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_17;
#line 1123 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_19;
#line 1125 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1127 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1124 "mode_util.m"
    {
#line 1124 "mode_util.m"
      check_hlds__mode_util__RI0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo0_15));
#line 1124 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_13));
#line 1124 "mode_util.m"
    }
#line 1125 "mode_util.m"
    {
#line 1125 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__Goal0_10, check_hlds__mode_util__Goal_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_14, &check_hlds__mode_util__V_18_18, check_hlds__mode_util__RI0_17, &check_hlds__mode_util__RI_19);
    }
#line 1127 "mode_util.m"
    *check_hlds__mode_util__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 0)));
#line 1127 "mode_util.m"
    check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 1)));
#line 1123 "mode_util.m"
  }
#line 132 "mode_util.m"
}

#line 129 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0(
#line 129 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_6,
#line 129 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14,
#line 129 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15,
#line 129 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16,
#line 129 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17)
#line 129 "mode_util.m"
{
#line 1113 "mode_util.m"
  {
#line 1113 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMap0_9;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__VarTypes_10;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal0_11;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__InstVarSet_12;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal_13;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_28;
#line 1113 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_30;
#line 1125 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1127 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1114 "mode_util.m"
    {
#line 1114 "mode_util.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__mode_util__InstMap0_9);
    }
#line 1115 "mode_util.m"
    {
#line 1115 "mode_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__VarTypes_10);
    }
#line 1116 "mode_util.m"
    {
#line 1116 "mode_util.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__Goal0_11);
    }
#line 1117 "mode_util.m"
    {
#line 1117 "mode_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__InstVarSet_12);
    }
#line 1124 "mode_util.m"
    {
#line 1124 "mode_util.m"
      check_hlds__mode_util__RI0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 0) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16));
#line 1124 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_12));
#line 1124 "mode_util.m"
    }
#line 1125 "mode_util.m"
    {
#line 1125 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_6, check_hlds__mode_util__Goal0_11, &check_hlds__mode_util__Goal_13, check_hlds__mode_util__VarTypes_10, check_hlds__mode_util__InstMap0_9, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__RI0_28, &check_hlds__mode_util__RI_30);
    }
#line 1127 "mode_util.m"
    *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 0)));
#line 1127 "mode_util.m"
    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 1)));
#line 1120 "mode_util.m"
    {
#line 1120 "mode_util.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_util__Goal_13, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15);
#line 1120 "mode_util.m"
      return;
    }
#line 1113 "mode_util.m"
  }
#line 129 "mode_util.m"
}

#line 114 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__inst_lookup_3_p_0(
#line 114 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 114 "mode_util.m"
  MR_Word check_hlds__mode_util__InstName_5,
#line 114 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_6)
#line 114 "mode_util.m"
{
#line 487 "mode_util.m"
  {
#line 487 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 487 "mode_util.m"
    if (((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 1))))
#line 497 "mode_util.m"
      {
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__A_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__B_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__MergeInstTable_18;
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__V_53_53;
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__InstTable_55;
#line 497 "mode_util.m"
        MR_Word check_hlds__mode_util__MaybeInst_56;
#line 500 "mode_util.m"
        MR_Box check_hlds__mode_util__conv0_MaybeInst_56;
#line 503 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst0_54;

#line 498 "mode_util.m"
        {
#line 498 "mode_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_55);
        }
#line 499 "mode_util.m"
        {
#line 499 "mode_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__mode_util__InstTable_55, &check_hlds__mode_util__MergeInstTable_18);
        }
#line 500 "mode_util.m"
        {
#line 500 "mode_util.m"
          check_hlds__mode_util__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_53_53, 0) = ((MR_Box) (check_hlds__mode_util__A_16));
#line 500 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_53_53, 1) = ((MR_Box) (check_hlds__mode_util__B_17));
#line 500 "mode_util.m"
        }
#line 500 "mode_util.m"
        {
#line 500 "mode_util.m"
          mercury__map__lookup_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__mode_util__MergeInstTable_18, ((MR_Box) (check_hlds__mode_util__V_53_53)), &check_hlds__mode_util__conv0_MaybeInst_56);
        }
#line 500 "mode_util.m"
        check_hlds__mode_util__MaybeInst_56 = ((MR_Word) check_hlds__mode_util__conv0_MaybeInst_56);
#line 501 "mode_util.m"
        check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_56)) == (MR_mktag((MR_Integer) 1)));
#line 501 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 501 "mode_util.m"
          {
#line 501 "mode_util.m"
            check_hlds__mode_util__Inst0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_56, (MR_Integer) 0)));
#line 502 "mode_util.m"
            *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_54;
#line 501 "mode_util.m"
          }
#line 501 "mode_util.m"
        else
#line 504 "mode_util.m"
          {
#line 504 "mode_util.m"
            MR_Word base;
#line 504 "mode_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "mode_util.m"
            *check_hlds__mode_util__Inst_6 = base;
#line 504 "mode_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 504 "mode_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 504 "mode_util.m"
          }
#line 497 "mode_util.m"
      }
#line 487 "mode_util.m"
    else
#line 487 "mode_util.m"
      if (((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 2))))
#line 487 "mode_util.m"
        {
#line 487 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_11;
#line 487 "mode_util.m"
          MR_Word check_hlds__mode_util__UnifyInstTable_12;
#line 487 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInst_13;
#line 490 "mode_util.m"
          MR_Box check_hlds__mode_util__conv1_MaybeInst_13;
#line 493 "mode_util.m"
          MR_Word check_hlds__mode_util__Inst0_14;
#line 491 "mode_util.m"
          MR_Word check_hlds__mode_util__V_15_15;

#line 488 "mode_util.m"
          {
#line 488 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_11);
          }
#line 489 "mode_util.m"
          {
#line 489 "mode_util.m"
            hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__mode_util__InstTable_11, &check_hlds__mode_util__UnifyInstTable_12);
          }
#line 490 "mode_util.m"
          {
#line 490 "mode_util.m"
            mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__mode_util__UnifyInstTable_12, ((MR_Box) (check_hlds__mode_util__InstName_5)), &check_hlds__mode_util__conv1_MaybeInst_13);
          }
#line 490 "mode_util.m"
          check_hlds__mode_util__MaybeInst_13 = ((MR_Word) check_hlds__mode_util__conv1_MaybeInst_13);
#line 491 "mode_util.m"
          check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_13)) == (MR_mktag((MR_Integer) 1)));
#line 491 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 491 "mode_util.m"
            {
#line 491 "mode_util.m"
              check_hlds__mode_util__Inst0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_13, (MR_Integer) 0)));
#line 491 "mode_util.m"
              check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_13, (MR_Integer) 1)));
#line 492 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_14;
#line 491 "mode_util.m"
            }
#line 491 "mode_util.m"
          else
#line 494 "mode_util.m"
            {
#line 494 "mode_util.m"
              MR_Word base;
#line 494 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 494 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 494 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 494 "mode_util.m"
            }
#line 487 "mode_util.m"
        }
#line 487 "mode_util.m"
      else
#line 487 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 0))))
#line 548 "mode_util.m"
          {
#line 548 "mode_util.m"
            MR_Word check_hlds__mode_util__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 548 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 548 "mode_util.m"
            MR_Word check_hlds__mode_util__UserInstTable_37;
#line 548 "mode_util.m"
            MR_Word check_hlds__mode_util__InstDefns_38;
#line 548 "mode_util.m"
            MR_Integer check_hlds__mode_util__Arity_39;
#line 548 "mode_util.m"
            MR_Word check_hlds__mode_util__InstTable_74;
#line 556 "mode_util.m"
            MR_Word check_hlds__mode_util__InstDefn_40;
#line 553 "mode_util.m"
            MR_Word check_hlds__mode_util__V_52_52;
#line 553 "mode_util.m"
            MR_Box check_hlds__mode_util__conv2_InstDefn_40;

#line 549 "mode_util.m"
            {
#line 549 "mode_util.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_74);
            }
#line 550 "mode_util.m"
            {
#line 550 "mode_util.m"
              hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__mode_util__InstTable_74, &check_hlds__mode_util__UserInstTable_37);
            }
#line 551 "mode_util.m"
            {
#line 551 "mode_util.m"
              hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(check_hlds__mode_util__UserInstTable_37, &check_hlds__mode_util__InstDefns_38);
            }
#line 552 "mode_util.m"
            {
#line 552 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_36, &check_hlds__mode_util__Arity_39);
            }
#line 553 "mode_util.m"
            {
#line 553 "mode_util.m"
              check_hlds__mode_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_52_52, 0) = ((MR_Box) (check_hlds__mode_util__Name_35));
#line 553 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_52_52, 1) = ((MR_Box) (check_hlds__mode_util__Arity_39));
#line 553 "mode_util.m"
            }
#line 553 "mode_util.m"
            {
#line 553 "mode_util.m"
              check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__mode_util__InstDefns_38, ((MR_Box) (check_hlds__mode_util__V_52_52)), &check_hlds__mode_util__conv2_InstDefn_40);
            }
#line 553 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 553 "mode_util.m"
              {
#line 553 "mode_util.m"
                check_hlds__mode_util__InstDefn_40 = ((MR_Word) check_hlds__mode_util__conv2_InstDefn_40);
#line 553 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 553 "mode_util.m"
              }
#line 556 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 554 "mode_util.m"
              {
#line 554 "mode_util.m"
                MR_Word check_hlds__mode_util__Params_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_40, (MR_Integer) 1)));
#line 554 "mode_util.m"
                MR_Word check_hlds__mode_util__InstBody_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_40, (MR_Integer) 2)));
#line 554 "mode_util.m"
                MR_Word check_hlds__mode_util___VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_40, (MR_Integer) 0)));
#line 554 "mode_util.m"
                MR_Word check_hlds__mode_util___C_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_40, (MR_Integer) 3)));
#line 554 "mode_util.m"
                MR_Word check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_40, (MR_Integer) 4)));

#line 555 "mode_util.m"
                {
#line 555 "mode_util.m"
                  check_hlds__mode_util__inst_lookup_subst_args_5_p_0(check_hlds__mode_util__InstBody_43, check_hlds__mode_util__Params_42, check_hlds__mode_util__Name_35, check_hlds__mode_util__Args_36, check_hlds__mode_util__Inst_6);
#line 555 "mode_util.m"
                  return;
                }
#line 554 "mode_util.m"
              }
#line 556 "mode_util.m"
            else
#line 557 "mode_util.m"
              {
#line 557 "mode_util.m"
                MR_Word base;
#line 557 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "mode_util.m"
                *check_hlds__mode_util__Inst_6 = base;
#line 557 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 557 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_35));
#line 557 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_36));
#line 557 "mode_util.m"
              }
#line 548 "mode_util.m"
          }
#line 487 "mode_util.m"
        else
#line 487 "mode_util.m"
          if (((((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 517 "mode_util.m"
            {
#line 517 "mode_util.m"
              MR_Word check_hlds__mode_util__AnyInstTable_29;
#line 517 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_63;
#line 517 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInst_64;
#line 520 "mode_util.m"
              MR_Box check_hlds__mode_util__conv3_MaybeInst_64;
#line 523 "mode_util.m"
              MR_Word check_hlds__mode_util__Inst0_62;
#line 521 "mode_util.m"
              MR_Word check_hlds__mode_util__V_30_30;

#line 518 "mode_util.m"
              {
#line 518 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_63);
              }
#line 519 "mode_util.m"
              {
#line 519 "mode_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__mode_util__InstTable_63, &check_hlds__mode_util__AnyInstTable_29);
              }
#line 520 "mode_util.m"
              {
#line 520 "mode_util.m"
                mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__mode_util__AnyInstTable_29, ((MR_Box) (check_hlds__mode_util__InstName_5)), &check_hlds__mode_util__conv3_MaybeInst_64);
              }
#line 520 "mode_util.m"
              check_hlds__mode_util__MaybeInst_64 = ((MR_Word) check_hlds__mode_util__conv3_MaybeInst_64);
#line 521 "mode_util.m"
              check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_64)) == (MR_mktag((MR_Integer) 1)));
#line 521 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 521 "mode_util.m"
                {
#line 521 "mode_util.m"
                  check_hlds__mode_util__Inst0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_64, (MR_Integer) 0)));
#line 521 "mode_util.m"
                  check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_64, (MR_Integer) 1)));
#line 522 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_62;
#line 521 "mode_util.m"
                }
#line 521 "mode_util.m"
              else
#line 524 "mode_util.m"
                {
#line 524 "mode_util.m"
                  MR_Word base;
#line 524 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 524 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 524 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 524 "mode_util.m"
                }
#line 517 "mode_util.m"
            }
#line 487 "mode_util.m"
          else
#line 487 "mode_util.m"
            if (((((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 507 "mode_util.m"
              {
#line 507 "mode_util.m"
                MR_Word check_hlds__mode_util__GroundInstTable_23;
#line 507 "mode_util.m"
                MR_Word check_hlds__mode_util__InstTable_59;
#line 507 "mode_util.m"
                MR_Word check_hlds__mode_util__MaybeInst_60;
#line 510 "mode_util.m"
                MR_Box check_hlds__mode_util__conv4_MaybeInst_60;
#line 513 "mode_util.m"
                MR_Word check_hlds__mode_util__Inst0_58;
#line 511 "mode_util.m"
                MR_Word check_hlds__mode_util__V_24_24;

#line 508 "mode_util.m"
                {
#line 508 "mode_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_59);
                }
#line 509 "mode_util.m"
                {
#line 509 "mode_util.m"
                  hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__mode_util__InstTable_59, &check_hlds__mode_util__GroundInstTable_23);
                }
#line 510 "mode_util.m"
                {
#line 510 "mode_util.m"
                  mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__mode_util__GroundInstTable_23, ((MR_Box) (check_hlds__mode_util__InstName_5)), &check_hlds__mode_util__conv4_MaybeInst_60);
                }
#line 510 "mode_util.m"
                check_hlds__mode_util__MaybeInst_60 = ((MR_Word) check_hlds__mode_util__conv4_MaybeInst_60);
#line 511 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_60)) == (MR_mktag((MR_Integer) 1)));
#line 511 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 511 "mode_util.m"
                  {
#line 511 "mode_util.m"
                    check_hlds__mode_util__Inst0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_60, (MR_Integer) 0)));
#line 511 "mode_util.m"
                    check_hlds__mode_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_60, (MR_Integer) 1)));
#line 512 "mode_util.m"
                    *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_58;
#line 511 "mode_util.m"
                  }
#line 511 "mode_util.m"
                else
#line 514 "mode_util.m"
                  {
#line 514 "mode_util.m"
                    MR_Word base;
#line 514 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "mode_util.m"
                    *check_hlds__mode_util__Inst_6 = base;
#line 514 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 514 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 514 "mode_util.m"
                  }
#line 507 "mode_util.m"
              }
#line 487 "mode_util.m"
            else
#line 487 "mode_util.m"
              if (((((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 537 "mode_util.m"
                {
#line 537 "mode_util.m"
                  MR_Word check_hlds__mode_util__NondetLiveInstName_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 537 "mode_util.m"
                  MR_Word check_hlds__mode_util__NondetLiveInstTable_34;
#line 537 "mode_util.m"
                  MR_Word check_hlds__mode_util__InstTable_71;
#line 537 "mode_util.m"
                  MR_Word check_hlds__mode_util__MaybeInst_72;
#line 541 "mode_util.m"
                  MR_Box check_hlds__mode_util__conv5_MaybeInst_72;
#line 544 "mode_util.m"
                  MR_Word check_hlds__mode_util__Inst0_70;

#line 538 "mode_util.m"
                  {
#line 538 "mode_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_71);
                  }
#line 539 "mode_util.m"
                  {
#line 539 "mode_util.m"
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__mode_util__InstTable_71, &check_hlds__mode_util__NondetLiveInstTable_34);
                  }
#line 541 "mode_util.m"
                  {
#line 541 "mode_util.m"
                    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__mode_util__NondetLiveInstTable_34, ((MR_Box) (check_hlds__mode_util__NondetLiveInstName_33)), &check_hlds__mode_util__conv5_MaybeInst_72);
                  }
#line 541 "mode_util.m"
                  check_hlds__mode_util__MaybeInst_72 = ((MR_Word) check_hlds__mode_util__conv5_MaybeInst_72);
#line 542 "mode_util.m"
                  check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_72)) == (MR_mktag((MR_Integer) 1)));
#line 542 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 542 "mode_util.m"
                    {
#line 542 "mode_util.m"
                      check_hlds__mode_util__Inst0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_72, (MR_Integer) 0)));
#line 543 "mode_util.m"
                      *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_70;
#line 542 "mode_util.m"
                    }
#line 542 "mode_util.m"
                  else
#line 545 "mode_util.m"
                    {
#line 545 "mode_util.m"
                      MR_Word base;
#line 545 "mode_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "mode_util.m"
                      *check_hlds__mode_util__Inst_6 = base;
#line 545 "mode_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 545 "mode_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 545 "mode_util.m"
                    }
#line 537 "mode_util.m"
                }
#line 487 "mode_util.m"
              else
#line 487 "mode_util.m"
                if (((((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 527 "mode_util.m"
                  {
#line 527 "mode_util.m"
                    MR_Word check_hlds__mode_util__SharedInstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 527 "mode_util.m"
                    MR_Word check_hlds__mode_util__SharedInstTable_32;
#line 527 "mode_util.m"
                    MR_Word check_hlds__mode_util__InstTable_67;
#line 527 "mode_util.m"
                    MR_Word check_hlds__mode_util__MaybeInst_68;
#line 530 "mode_util.m"
                    MR_Box check_hlds__mode_util__conv6_MaybeInst_68;
#line 533 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inst0_66;

#line 528 "mode_util.m"
                    {
#line 528 "mode_util.m"
                      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_67);
                    }
#line 529 "mode_util.m"
                    {
#line 529 "mode_util.m"
                      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__mode_util__InstTable_67, &check_hlds__mode_util__SharedInstTable_32);
                    }
#line 530 "mode_util.m"
                    {
#line 530 "mode_util.m"
                      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__mode_util__SharedInstTable_32, ((MR_Box) (check_hlds__mode_util__SharedInstName_31)), &check_hlds__mode_util__conv6_MaybeInst_68);
                    }
#line 530 "mode_util.m"
                    check_hlds__mode_util__MaybeInst_68 = ((MR_Word) check_hlds__mode_util__conv6_MaybeInst_68);
#line 531 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_68)) == (MR_mktag((MR_Integer) 1)));
#line 531 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 531 "mode_util.m"
                      {
#line 531 "mode_util.m"
                        check_hlds__mode_util__Inst0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_68, (MR_Integer) 0)));
#line 532 "mode_util.m"
                        *check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst0_66;
#line 531 "mode_util.m"
                      }
#line 531 "mode_util.m"
                    else
#line 534 "mode_util.m"
                      {
#line 534 "mode_util.m"
                        MR_Word base;
#line 534 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "mode_util.m"
                        *check_hlds__mode_util__Inst_6 = base;
#line 534 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 534 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 534 "mode_util.m"
                      }
#line 527 "mode_util.m"
                  }
#line 487 "mode_util.m"
                else
#line 487 "mode_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 560 "mode_util.m"
                    {
#line 560 "mode_util.m"
                      MR_Word check_hlds__mode_util__Uniq_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 560 "mode_util.m"
                      MR_Word check_hlds__mode_util__Type_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 560 "mode_util.m"
                      MR_Word check_hlds__mode_util__Subst_48;
#line 560 "mode_util.m"
                      MR_Word check_hlds__mode_util__V_50_50;

#line 561 "mode_util.m"
                      {
#line 561 "mode_util.m"
                        mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_48);
                      }
#line 563 "mode_util.m"
                      {
#line 563 "mode_util.m"
                        check_hlds__mode_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "mode_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 563 "mode_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_50_50, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_46));
#line 563 "mode_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_50_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "mode_util.m"
                      }
#line 562 "mode_util.m"
                      {
#line 562 "mode_util.m"
                        check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_48, check_hlds__mode_util__Type_47, check_hlds__mode_util__V_50_50, check_hlds__mode_util__Inst_6);
#line 562 "mode_util.m"
                        return;
                      }
#line 560 "mode_util.m"
                    }
#line 487 "mode_util.m"
                  else
#line 565 "mode_util.m"
                    {
#line 565 "mode_util.m"
                      MR_Word check_hlds__mode_util__TypedInstName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 565 "mode_util.m"
                      MR_Word check_hlds__mode_util__Inst0_75;
#line 565 "mode_util.m"
                      MR_Word check_hlds__mode_util__Type_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 565 "mode_util.m"
                      MR_Word check_hlds__mode_util__Subst_77;

#line 566 "mode_util.m"
                      {
#line 566 "mode_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__TypedInstName_49, &check_hlds__mode_util__Inst0_75);
                      }
#line 567 "mode_util.m"
                      {
#line 567 "mode_util.m"
                        mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_77);
                      }
#line 568 "mode_util.m"
                      {
#line 568 "mode_util.m"
                        check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_77, check_hlds__mode_util__Type_76, check_hlds__mode_util__Inst0_75, check_hlds__mode_util__Inst_6);
#line 568 "mode_util.m"
                        return;
                      }
#line 565 "mode_util.m"
                    }
#line 487 "mode_util.m"
  }
#line 114 "mode_util.m"
}

#line 108 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__modes_to_uni_modes_4_p_0(
#line 108 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 108 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 108 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 108 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 108 "mode_util.m"
{
#line 472 "mode_util.m"
  {
#line 472 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 472 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "mode_util.m"
      else
#line 473 "mode_util.m"
        {
#line 474 "mode_util.m"
          {
#line 474 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", (MR_String) "length mismatch");
#line 474 "mode_util.m"
            return;
          }
#line 473 "mode_util.m"
        }
#line 472 "mode_util.m"
    else
#line 472 "mode_util.m"
      {
#line 472 "mode_util.m"
        MR_Word check_hlds__mode_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 472 "mode_util.m"
        MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 472 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "mode_util.m"
          {
#line 476 "mode_util.m"
            {
#line 476 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", (MR_String) "length mismatch");
#line 476 "mode_util.m"
              return;
            }
#line 475 "mode_util.m"
          }
#line 472 "mode_util.m"
        else
#line 477 "mode_util.m"
          {
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__Y_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__Ys_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__A_25;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__As_26;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialX_27;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalX_28;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialY_29;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalY_30;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__V_31_31;
#line 477 "mode_util.m"
            MR_Word check_hlds__mode_util__V_32_32;

#line 478 "mode_util.m"
            {
#line 478 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_34_34, &check_hlds__mode_util__InitialX_27, &check_hlds__mode_util__FinalX_28);
            }
#line 479 "mode_util.m"
            {
#line 479 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Y_23, &check_hlds__mode_util__InitialY_29, &check_hlds__mode_util__FinalY_30);
            }
#line 480 "mode_util.m"
            {
#line 480 "mode_util.m"
              check_hlds__mode_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 0) = ((MR_Box) (check_hlds__mode_util__InitialX_27));
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 1) = ((MR_Box) (check_hlds__mode_util__InitialY_29));
#line 480 "mode_util.m"
            }
#line 480 "mode_util.m"
            {
#line 480 "mode_util.m"
              check_hlds__mode_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 0) = ((MR_Box) (check_hlds__mode_util__FinalX_28));
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 1) = ((MR_Box) (check_hlds__mode_util__FinalY_30));
#line 480 "mode_util.m"
            }
#line 480 "mode_util.m"
            {
#line 480 "mode_util.m"
              check_hlds__mode_util__A_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 0) = ((MR_Box) (check_hlds__mode_util__V_31_31));
#line 480 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 1) = ((MR_Box) (check_hlds__mode_util__V_32_32));
#line 480 "mode_util.m"
            }
#line 481 "mode_util.m"
            {
#line 481 "mode_util.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_33_33, check_hlds__mode_util__Ys_24, &check_hlds__mode_util__As_26);
            }
#line 477 "mode_util.m"
            {
#line 477 "mode_util.m"
              MR_Word base;
#line 477 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 477 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__A_25));
#line 477 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__As_26));
#line 477 "mode_util.m"
            }
#line 477 "mode_util.m"
          }
#line 472 "mode_util.m"
      }
#line 472 "mode_util.m"
  }
#line 108 "mode_util.m"
}

#line 105 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_list_get_final_insts_3_p_0(
#line 105 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 105 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 105 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 105 "mode_util.m"
{
#line 236 "mode_util.m"
  {
#line 236 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 236 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "mode_util.m"
    else
#line 237 "mode_util.m"
      {
#line 237 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 237 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 238 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 238 "mode_util.m"
        {
#line 238 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__V_10_10, &check_hlds__mode_util__Inst_8);
        }
#line 239 "mode_util.m"
        {
#line 239 "mode_util.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 237 "mode_util.m"
        {
#line 237 "mode_util.m"
          MR_Word base;
#line 237 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 237 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 237 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 237 "mode_util.m"
        }
#line 237 "mode_util.m"
      }
#line 236 "mode_util.m"
  }
#line 105 "mode_util.m"
}

#line 102 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(
#line 102 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 102 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 102 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 102 "mode_util.m"
{
#line 231 "mode_util.m"
  {
#line 231 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 231 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "mode_util.m"
    else
#line 232 "mode_util.m"
      {
#line 232 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 232 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 233 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 233 "mode_util.m"
        {
#line 233 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__Inst_8, &check_hlds__mode_util__V_10_10);
        }
#line 234 "mode_util.m"
        {
#line 234 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 232 "mode_util.m"
        {
#line 232 "mode_util.m"
          MR_Word base;
#line 232 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 232 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 232 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 232 "mode_util.m"
        }
#line 232 "mode_util.m"
      }
#line 231 "mode_util.m"
  }
#line 102 "mode_util.m"
}

#line 100 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__mode_get_final_inst_2_f_0(
#line 100 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 100 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_5)
#line 100 "mode_util.m"
{
#line 229 "mode_util.m"
  {
#line 229 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 229 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 229 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 229 "mode_util.m"
    {
#line 229 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__V_7_7, &check_hlds__mode_util__Inst_6);
    }
#line 229 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 229 "mode_util.m"
  }
#line 100 "mode_util.m"
}

#line 98 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__mode_get_initial_inst_2_f_0(
#line 98 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 98 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_5)
#line 98 "mode_util.m"
{
#line 226 "mode_util.m"
  {
#line 226 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 226 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 226 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 226 "mode_util.m"
    {
#line 226 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__Inst_6, &check_hlds__mode_util__V_7_7);
    }
#line 226 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 226 "mode_util.m"
  }
#line 98 "mode_util.m"
}

#line 95 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__select_output_things_4_f_0(
#line 95 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeInfo_for_Thing_28,
#line 95 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 95 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadThings_7,
#line 95 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadModes_8,
#line 95 "mode_util.m"
  MR_Word check_hlds__mode_util__ThingTypes_9)
#line 95 "mode_util.m"
{
#line 375 "mode_util.m"
  while (MR_TRUE)
#line 375 "mode_util.m"
    {
#line 375 "mode_util.m"
      /* tailcall optimized into a loop */
#line 375 "mode_util.m"
      {
#line 375 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 375 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputThings_10;

#line 375 "mode_util.m"
        if ((check_hlds__mode_util__HeadThings_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "mode_util.m"
            check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "mode_util.m"
          else
#line 393 "mode_util.m"
            {
#line 395 "mode_util.m"
              {
#line 395 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
              }
#line 393 "mode_util.m"
            }
#line 375 "mode_util.m"
        else
#line 375 "mode_util.m"
          {
#line 375 "mode_util.m"
            MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 1)));
#line 375 "mode_util.m"
            MR_Box check_hlds__mode_util__V_31_31 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 0));

#line 375 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "mode_util.m"
              {
#line 399 "mode_util.m"
                {
#line 399 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
                }
#line 397 "mode_util.m"
              }
#line 375 "mode_util.m"
            else
#line 376 "mode_util.m"
              {
#line 376 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 376 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 376 "mode_util.m"
                MR_Word check_hlds__mode_util__ThingType_15;
#line 376 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;
#line 378 "mode_util.m"
                MR_Box check_hlds__mode_util__conv0_ThingType_15;

#line 378 "mode_util.m"
                {
#line 378 "mode_util.m"
                  mercury__map__lookup_3_p_0(check_hlds__mode_util__TypeInfo_for_Thing_28, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__ThingTypes_9, check_hlds__mode_util__V_31_31, &check_hlds__mode_util__conv0_ThingType_15);
                }
#line 378 "mode_util.m"
                check_hlds__mode_util__ThingType_15 = ((MR_Word) check_hlds__mode_util__conv0_ThingType_15);
#line 293 "mode_util.m"
                {
#line 293 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__ThingType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 385 "mode_util.m"
                if ((check_hlds__mode_util__Top_16 == (MR_Integer) 1))
#line 381 "mode_util.m"
                  {
#line 381 "mode_util.m"
                    MR_Word check_hlds__mode_util__OutputThings1_17;

#line 382 "mode_util.m"
                    {
#line 382 "mode_util.m"
                      check_hlds__mode_util__OutputThings1_17 = check_hlds__mode_util__select_output_things_4_f_0(check_hlds__mode_util__TypeInfo_for_Thing_28, check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Modes_14, check_hlds__mode_util__ThingTypes_9);
                    }
#line 384 "mode_util.m"
                    {
#line 384 "mode_util.m"
                      check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 0) = check_hlds__mode_util__V_31_31;
#line 384 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputThings1_17));
#line 384 "mode_util.m"
                    }
#line 381 "mode_util.m"
                  }
#line 385 "mode_util.m"
                else
#line 388 "mode_util.m"
                  {
#line 388 "mode_util.m"
                    /* direct tailcall eliminated */
#line 388 "mode_util.m"
                    {
#line 388 "mode_util.m"
                      MR_Word check_hlds__mode_util__HeadThings__tmp_copy_7 = check_hlds__mode_util__V_30_30;
#line 388 "mode_util.m"
                      MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 388 "mode_util.m"
                      check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 388 "mode_util.m"
                      check_hlds__mode_util__HeadThings_7 = check_hlds__mode_util__HeadThings__tmp_copy_7;
#line 388 "mode_util.m"
                    }
#line 388 "mode_util.m"
                    continue;
#line 388 "mode_util.m"
                  }
#line 376 "mode_util.m"
              }
#line 375 "mode_util.m"
          }
#line 375 "mode_util.m"
        return check_hlds__mode_util__OutputThings_10;
#line 375 "mode_util.m"
      }
#line 375 "mode_util.m"
      break;
#line 375 "mode_util.m"
    }
#line 95 "mode_util.m"
}

#line 93 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__select_output_vars_4_f_0(
#line 93 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 93 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVars_7,
#line 93 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadModes_8,
#line 93 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_9)
#line 93 "mode_util.m"
{
#line 340 "mode_util.m"
  while (MR_TRUE)
#line 340 "mode_util.m"
    {
#line 340 "mode_util.m"
      /* tailcall optimized into a loop */
#line 340 "mode_util.m"
      {
#line 340 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 340 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputVars_10;

#line 340 "mode_util.m"
        if ((check_hlds__mode_util__HeadVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "mode_util.m"
            check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "mode_util.m"
          else
#line 360 "mode_util.m"
            {
#line 362 "mode_util.m"
              {
#line 362 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
              }
#line 360 "mode_util.m"
            }
#line 340 "mode_util.m"
        else
#line 340 "mode_util.m"
          {
#line 340 "mode_util.m"
            MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 1)));
#line 340 "mode_util.m"
            MR_Word check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 0)));

#line 340 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "mode_util.m"
              {
#line 366 "mode_util.m"
                {
#line 366 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
                }
#line 364 "mode_util.m"
              }
#line 340 "mode_util.m"
            else
#line 344 "mode_util.m"
              {
#line 344 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 344 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 344 "mode_util.m"
                MR_Word check_hlds__mode_util__VarType_15;
#line 344 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;

#line 346 "mode_util.m"
                {
#line 346 "mode_util.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_9, check_hlds__mode_util__V_29_29, &check_hlds__mode_util__VarType_15);
                }
#line 293 "mode_util.m"
                {
#line 293 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__VarType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 353 "mode_util.m"
                if ((check_hlds__mode_util__Top_16 == (MR_Integer) 1))
#line 349 "mode_util.m"
                  {
#line 349 "mode_util.m"
                    MR_Word check_hlds__mode_util__OutputVars1_17;

#line 350 "mode_util.m"
                    {
#line 350 "mode_util.m"
                      check_hlds__mode_util__OutputVars1_17 = check_hlds__mode_util__select_output_vars_4_f_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Modes_14, check_hlds__mode_util__VarTypes_9);
                    }
#line 352 "mode_util.m"
                    {
#line 352 "mode_util.m"
                      check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 0) = ((MR_Box) (check_hlds__mode_util__V_29_29));
#line 352 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputVars1_17));
#line 352 "mode_util.m"
                    }
#line 349 "mode_util.m"
                  }
#line 353 "mode_util.m"
                else
#line 356 "mode_util.m"
                  {
#line 356 "mode_util.m"
                    /* direct tailcall eliminated */
#line 356 "mode_util.m"
                    {
#line 356 "mode_util.m"
                      MR_Word check_hlds__mode_util__HeadVars__tmp_copy_7 = check_hlds__mode_util__V_28_28;
#line 356 "mode_util.m"
                      MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 356 "mode_util.m"
                      check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 356 "mode_util.m"
                      check_hlds__mode_util__HeadVars_7 = check_hlds__mode_util__HeadVars__tmp_copy_7;
#line 356 "mode_util.m"
                    }
#line 356 "mode_util.m"
                    continue;
#line 356 "mode_util.m"
                  }
#line 344 "mode_util.m"
              }
#line 340 "mode_util.m"
          }
#line 340 "mode_util.m"
        return check_hlds__mode_util__OutputVars_10;
#line 340 "mode_util.m"
      }
#line 340 "mode_util.m"
      break;
#line 340 "mode_util.m"
    }
#line 93 "mode_util.m"
}

#line 87 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__modes_to_arg_modes_4_p_0(
#line 87 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 87 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 87 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 87 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 87 "mode_util.m"
{
#line 282 "mode_util.m"
  {
#line 282 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 282 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "mode_util.m"
      else
#line 283 "mode_util.m"
        {
#line 284 "mode_util.m"
          {
#line 284 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", (MR_String) "length mismatch");
#line 284 "mode_util.m"
            return;
          }
#line 283 "mode_util.m"
        }
#line 282 "mode_util.m"
    else
#line 282 "mode_util.m"
      {
#line 282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 282 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "mode_util.m"
          {
#line 286 "mode_util.m"
            {
#line 286 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", (MR_String) "length mismatch");
#line 286 "mode_util.m"
              return;
            }
#line 285 "mode_util.m"
          }
#line 282 "mode_util.m"
        else
#line 288 "mode_util.m"
          {
#line 288 "mode_util.m"
            MR_Word check_hlds__mode_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 288 "mode_util.m"
            MR_Word check_hlds__mode_util__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 288 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgMode_25;
#line 288 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes_26;

#line 293 "mode_util.m"
            {
#line 293 "mode_util.m"
              check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Type_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__ArgMode_25);
            }
#line 290 "mode_util.m"
            {
#line 290 "mode_util.m"
              check_hlds__mode_util__modes_to_arg_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Types_24, &check_hlds__mode_util__ArgModes_26);
            }
#line 288 "mode_util.m"
            {
#line 288 "mode_util.m"
              MR_Word base;
#line 288 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 288 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgMode_25));
#line 288 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgModes_26));
#line 288 "mode_util.m"
            }
#line 288 "mode_util.m"
          }
#line 282 "mode_util.m"
      }
#line 282 "mode_util.m"
  }
#line 87 "mode_util.m"
}

#line 84 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_4_p_0(
#line 84 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 84 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_6,
#line 84 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_7,
#line 84 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_8)
#line 84 "mode_util.m"
{
#line 292 "mode_util.m"
  {
#line 292 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 293 "mode_util.m"
    {
#line 293 "mode_util.m"
      check_hlds__mode_util__mode_to_arg_mode_2_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, check_hlds__mode_util__Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__ArgMode_8);
#line 293 "mode_util.m"
      return;
    }
#line 292 "mode_util.m"
  }
#line 84 "mode_util.m"
}

#line 73 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_undefined_2_p_0(
#line 73 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 73 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 73 "mode_util.m"
{
#line 278 "mode_util.m"
  {
#line 278 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 278 "mode_util.m"
    MR_Word check_hlds__mode_util__V_5_5;
#line 278 "mode_util.m"
    MR_Word check_hlds__mode_util__V_6_6;

#line 278 "mode_util.m"
    {
#line 278 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__V_5_5, &check_hlds__mode_util__V_6_6);
    }
#line 278 "mode_util.m"
    check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 278 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 278 "mode_util.m"
  }
#line 73 "mode_util.m"
}

#line 69 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_unused_2_p_0(
#line 69 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 69 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 69 "mode_util.m"
{
#line 272 "mode_util.m"
  {
#line 272 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 272 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 272 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 273 "mode_util.m"
    {
#line 273 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 274 "mode_util.m"
    {
#line 274 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 272 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 275 "mode_util.m"
      {
#line 275 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 272 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 272 "mode_util.m"
  }
#line 69 "mode_util.m"
}

#line 64 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_output_2_p_0(
#line 64 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 64 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 64 "mode_util.m"
{
#line 265 "mode_util.m"
  {
#line 265 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 265 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 265 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 266 "mode_util.m"
    {
#line 266 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 267 "mode_util.m"
    {
#line 267 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 265 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 268 "mode_util.m"
      {
#line 268 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 265 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 265 "mode_util.m"
  }
#line 64 "mode_util.m"
}

#line 58 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_output_2_p_0(
#line 58 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 58 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 58 "mode_util.m"
{
#line 257 "mode_util.m"
  {
#line 257 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 257 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 257 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 258 "mode_util.m"
    {
#line 258 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 259 "mode_util.m"
    {
#line 259 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 257 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 260 "mode_util.m"
      {
#line 260 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 257 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 257 "mode_util.m"
  }
#line 58 "mode_util.m"
}

#line 52 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_input_2_p_0(
#line 52 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 52 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 52 "mode_util.m"
{
#line 251 "mode_util.m"
  {
#line 251 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 251 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 252 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 252 "mode_util.m"
    {
#line 252 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 253 "mode_util.m"
    {
#line 253 "mode_util.m"
      return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 251 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 251 "mode_util.m"
  }
#line 52 "mode_util.m"
}

#line 47 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_input_2_p_0(
#line 47 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 47 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 47 "mode_util.m"
{
#line 245 "mode_util.m"
  {
#line 245 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 245 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 246 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 246 "mode_util.m"
    {
#line 246 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 247 "mode_util.m"
    {
#line 247 "mode_util.m"
      return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 245 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 245 "mode_util.m"
  }
#line 47 "mode_util.m"
}

#line 41 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
#line 41 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 41 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 41 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 41 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 41 "mode_util.m"
{
#line 1069 "mode_util.m"
  while (MR_TRUE)
#line 1069 "mode_util.m"
    {
#line 1069 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1069 "mode_util.m"
      {
#line 1069 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1069 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1069 "mode_util.m"
          {
#line 1069 "mode_util.m"
            *check_hlds__mode_util__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1069 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1069 "mode_util.m"
            check_hlds__mode_util__succeeded = MR_TRUE;
#line 1069 "mode_util.m"
          }
#line 1069 "mode_util.m"
        else
#line 1072 "mode_util.m"
          {
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1072 "mode_util.m"
            MR_Integer check_hlds__mode_util__Arity_13;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_14;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefns_15;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode_17;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Params_21;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefn_22;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_25;
#line 1072 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_26;
#line 1083 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode0_16;
#line 1081 "mode_util.m"
            MR_Word check_hlds__mode_util__V_27_27;
#line 1081 "mode_util.m"
            MR_Box check_hlds__mode_util__conv0_HLDS_Mode0_16;
#line 1088 "mode_util.m"
            MR_Word check_hlds__mode_util___VarSet_20;
#line 1088 "mode_util.m"
            MR_Word check_hlds__mode_util___Context_23;
#line 1088 "mode_util.m"
            MR_Word check_hlds__mode_util___Status_24;

#line 1073 "mode_util.m"
            {
#line 1073 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Arity_13);
            }
#line 1074 "mode_util.m"
            {
#line 1074 "mode_util.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_util__HeadVar__1_1, &check_hlds__mode_util__Modes_14);
            }
#line 1075 "mode_util.m"
            {
#line 1075 "mode_util.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(check_hlds__mode_util__Modes_14, &check_hlds__mode_util__ModeDefns_15);
            }
#line 1081 "mode_util.m"
            {
#line 1081 "mode_util.m"
              check_hlds__mode_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (check_hlds__mode_util__Name_9));
#line 1081 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1081 "mode_util.m"
            }
#line 1081 "mode_util.m"
            {
#line 1081 "mode_util.m"
              check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_27_27)), &check_hlds__mode_util__conv0_HLDS_Mode0_16);
            }
#line 1081 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1081 "mode_util.m"
              {
#line 1081 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode0_16 = ((MR_Word) check_hlds__mode_util__conv0_HLDS_Mode0_16);
#line 1081 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1081 "mode_util.m"
              }
#line 1083 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1082 "mode_util.m"
              {
#line 1082 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode_17 = check_hlds__mode_util__HLDS_Mode0_16;
#line 1082 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1082 "mode_util.m"
              }
#line 1083 "mode_util.m"
            else
#line 1084 "mode_util.m"
              {
#line 1084 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_33_33;
#line 1084 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_34_34;
#line 1084 "mode_util.m"
                MR_String check_hlds__mode_util__String_18;
#line 1084 "mode_util.m"
                MR_Word check_hlds__mode_util__BuiltinName_19;
#line 1084 "mode_util.m"
                MR_Word check_hlds__mode_util__V_28_28;
#line 1084 "mode_util.m"
                MR_Word check_hlds__mode_util__V_29_29;
#line 1086 "mode_util.m"
                MR_Box check_hlds__mode_util__conv1_HLDS_Mode_17;

#line 1084 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__Name_9)) == (MR_mktag((MR_Integer) 0)));
#line 1084 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1084 "mode_util.m"
                  {
#line 1084 "mode_util.m"
                    check_hlds__mode_util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Name_9, (MR_Integer) 0)));
#line 1085 "mode_util.m"
                    {
#line 1085 "mode_util.m"
                      check_hlds__mode_util__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 9844 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0;
#line 9846 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
#line 1085 "mode_util.m"
                    {
#line 1085 "mode_util.m"
                      check_hlds__mode_util__BuiltinName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 0) = ((MR_Box) (check_hlds__mode_util__V_28_28));
#line 1085 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 1) = ((MR_Box) (check_hlds__mode_util__String_18));
#line 1085 "mode_util.m"
                    }
#line 1086 "mode_util.m"
                    {
#line 1086 "mode_util.m"
                      check_hlds__mode_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 0) = ((MR_Box) (check_hlds__mode_util__BuiltinName_19));
#line 1086 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1086 "mode_util.m"
                    }
#line 1086 "mode_util.m"
                    {
#line 1086 "mode_util.m"
                      check_hlds__mode_util__succeeded = mercury__map__search_3_p_0(check_hlds__mode_util__TypeCtorInfo_33_33, check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_29_29)), &check_hlds__mode_util__conv1_HLDS_Mode_17);
                    }
#line 1086 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 1086 "mode_util.m"
                      {
#line 1086 "mode_util.m"
                        check_hlds__mode_util__HLDS_Mode_17 = ((MR_Word) check_hlds__mode_util__conv1_HLDS_Mode_17);
#line 1086 "mode_util.m"
                        check_hlds__mode_util__succeeded = MR_TRUE;
#line 1086 "mode_util.m"
                      }
#line 1084 "mode_util.m"
                  }
#line 1084 "mode_util.m"
              }
#line 1072 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1072 "mode_util.m"
              {
#line 1088 "mode_util.m"
                check_hlds__mode_util___VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 0)));
#line 1088 "mode_util.m"
                check_hlds__mode_util__Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 1)));
#line 1088 "mode_util.m"
                check_hlds__mode_util__ModeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 2)));
#line 1088 "mode_util.m"
                check_hlds__mode_util___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 3)));
#line 1088 "mode_util.m"
                check_hlds__mode_util___Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 4)));
#line 1089 "mode_util.m"
                check_hlds__mode_util__Mode0_25 = (MR_Word) check_hlds__mode_util__ModeDefn_22;
#line 1090 "mode_util.m"
                {
#line 1090 "mode_util.m"
                  parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(check_hlds__mode_util__Mode0_25, check_hlds__mode_util__Params_21, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Mode_26);
                }
#line 1091 "mode_util.m"
                /* direct tailcall eliminated */
#line 1091 "mode_util.m"
                {
#line 1091 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__2__tmp_copy_2 = check_hlds__mode_util__Mode_26;

#line 1091 "mode_util.m"
                  check_hlds__mode_util__HeadVar__2_2 = check_hlds__mode_util__HeadVar__2__tmp_copy_2;
#line 1091 "mode_util.m"
                }
#line 1091 "mode_util.m"
                continue;
#line 1072 "mode_util.m"
              }
#line 1072 "mode_util.m"
          }
#line 1069 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 1069 "mode_util.m"
      }
#line 1069 "mode_util.m"
      break;
#line 1069 "mode_util.m"
    }
#line 41 "mode_util.m"
}

#line 36 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
#line 36 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 36 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_6,
#line 36 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstA_7,
#line 36 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstB_8)
#line 36 "mode_util.m"
{
#line 1097 "mode_util.m"
  {
#line 1097 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1097 "mode_util.m"
    MR_Word check_hlds__mode_util__InstA0_9;
#line 1097 "mode_util.m"
    MR_Word check_hlds__mode_util__InstB0_10;

#line 1094 "mode_util.m"
    {
#line 1094 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__InstA0_9, &check_hlds__mode_util__InstB0_10);
    }
#line 1097 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1095 "mode_util.m"
      {
#line 1095 "mode_util.m"
        *check_hlds__mode_util__InstA_7 = check_hlds__mode_util__InstA0_9;
#line 1096 "mode_util.m"
        *check_hlds__mode_util__InstB_8 = check_hlds__mode_util__InstB0_10;
#line 1095 "mode_util.m"
      }
#line 1097 "mode_util.m"
    else
#line 1098 "mode_util.m"
      {
#line 1098 "mode_util.m"
        {
#line 1098 "mode_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
#line 1098 "mode_util.m"
          return;
        }
#line 1098 "mode_util.m"
      }
#line 1097 "mode_util.m"
  }
#line 36 "mode_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mode_util. */
