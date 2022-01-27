/*
** Automatically generated from `mode_util.m'
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




#line 147 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 150 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0;

#line 156 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1;

#line 159 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2];

#line 162 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2];

#line 165 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2];

#line 168 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 171 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2];

#line 174 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2];

#line 177 "check_hlds.mode_util.c"
static const MR_DuFunctorDesc check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0;

#line 180 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1];

#line 183 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1];

#line 186 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1];

#line 189 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1];

#line 192 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 195 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 197 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 200 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 203 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 205 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 207 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 210 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 213 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 215 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 218 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 221 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 223 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 225 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 1272 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1272 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1272 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11);

#line 1536 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10);

#line 1500 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9);

#line 940 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 940 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6);

#line 1710 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1710__1_2_p_0(
#line 1710 "mode_util.m"
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_65,
#line 1710 "mode_util.m"
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_66);

#line 1262 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1262 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3);

#line 1262 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2);

#line 1751 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1751 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1751 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1751 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7);

#line 1710 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1710 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1710 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1710 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

#line 1663 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57);

#line 1634 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1634 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1634 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);

#line 1604 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1604 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1604 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8);

#line 1560 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1560 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1560 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1560 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35);

#line 1517 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24);

#line 1481 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22);

#line 1463 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8);

#line 1424 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1424 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1424 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1415 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1415 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1415 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1281 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106);

#line 1225 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40);

#line 1136 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1136 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1136 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1136 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6);

#line 1128 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
#line 1128 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1128 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_2);

#line 1115 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
#line 1115 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1115 "mode_util.m"
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
#line 1115 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1115 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4);

#line 1074 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1074 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7);

#line 1051 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 1051 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8);

#line 954 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 954 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 954 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 954 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3);

#line 914 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 914 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 914 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 914 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6);

#line 799 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 799 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 660 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 660 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 657 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 657 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 623 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 623 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8);

#line 464 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
#line 464 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 464 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 464 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7);

#line 421 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 421 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8);

#line 306 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 306 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10);

#line 966 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
#line 966 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 966 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 966 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__mode_util_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_3[1][7];

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
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_2[0])))
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

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__mode_util_scalar_common_4[1])),
    ((MR_Box) (check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_util_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_2[1])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 866 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 874 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 882 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
  (MR_String) "recompute_atomic_instmap_deltas",
  (MR_Integer) 0
};

#line 888 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
  (MR_String) "do_not_recompute_atomic_instmap_deltas",
  (MR_Integer) 1
};

#line 894 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

#line 900 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

#line 906 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 912 "check_hlds.mode_util.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 929 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 937 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
};

#line 943 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2] = {
  (MR_String) "ri_module_info",
  (MR_String) "ri_inst_varset"
};

#line 949 "check_hlds.mode_util.c"
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

#line 964 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 969 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0
  }
};

#line 978 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 983 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1] = {
  (MR_Integer) 0
};

#line 988 "check_hlds.mode_util.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_util__check_hlds__mode_util__type_ctor_info_recompute_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1005 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 1008 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1010 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1012 "check_hlds.mode_util.c"
{
#line 1014 "check_hlds.mode_util.c"
  {
#line 1016 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1019 "check_hlds.mode_util.c"
    {
#line 1021 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1024 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1026 "check_hlds.mode_util.c"
  }
#line 1028 "check_hlds.mode_util.c"
}

#line 1031 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 1034 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1036 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1038 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1040 "check_hlds.mode_util.c"
{
#line 1042 "check_hlds.mode_util.c"
  {
#line 1044 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1047 "check_hlds.mode_util.c"
    {
#line 1049 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1052 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1054 "check_hlds.mode_util.c"
  }
#line 1056 "check_hlds.mode_util.c"
}

#line 1059 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 1062 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1064 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1066 "check_hlds.mode_util.c"
{
#line 1068 "check_hlds.mode_util.c"
  {
#line 1070 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1073 "check_hlds.mode_util.c"
    {
#line 1075 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_info_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1078 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1080 "check_hlds.mode_util.c"
  }
#line 1082 "check_hlds.mode_util.c"
}

#line 1085 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 1088 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1090 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1092 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1094 "check_hlds.mode_util.c"
{
#line 1096 "check_hlds.mode_util.c"
  {
#line 1098 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1101 "check_hlds.mode_util.c"
    {
#line 1103 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_info_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1106 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1108 "check_hlds.mode_util.c"
  }
#line 1110 "check_hlds.mode_util.c"
}

#line 1272 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1272 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1272 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1272 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11)
#line 1272 "mode_util.m"
{
#line 1276 "mode_util.m"
  {
#line 1276 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1276 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1276 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo_9;
#line 1277 "mode_util.m"
    MR_Word check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1279 "mode_util.m"
    MR_Word check_hlds__mode_util__V_15_15;
#line 1279 "mode_util.m"
    MR_Word check_hlds__mode_util__V_14_14;

#line 1278 "mode_util.m"
    {
#line 1278 "mode_util.m"
      hlds__instmap__merge_instmap_delta_8_p_0(check_hlds__mode_util__V_17_17, check_hlds__mode_util__V_18_18, check_hlds__mode_util__V_19_19, check_hlds__mode_util__V_20_20, check_hlds__mode_util__V_21_21, check_hlds__mode_util__R_6, check_hlds__mode_util__ModuleInfo0_8, &check_hlds__mode_util__ModuleInfo_9);
    }
#line 1279 "mode_util.m"
    check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1279 "mode_util.m"
    check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1279 "mode_util.m"
    {
#line 1279 "mode_util.m"
      MR_Word base;
#line 1279 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "mode_util.m"
      *check_hlds__mode_util__STATE_VARIABLE_RI_11 = base;
#line 1279 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_9));
#line 1279 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_15_15));
#line 1279 "mode_util.m"
    }
#line 1276 "mode_util.m"
  }
#line 1272 "mode_util.m"
}

#line 1536 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1536 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1536 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10)
#line 1536 "mode_util.m"
{
#line 1541 "mode_util.m"
  {
#line 1541 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1541 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "mode_util.m"
      {
#line 1541 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "mode_util.m"
        *check_hlds__mode_util__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_10 = check_hlds__mode_util__STATE_VARIABLE_RI_0_9;
#line 1541 "mode_util.m"
      }
#line 1541 "mode_util.m"
    else
#line 1545 "mode_util.m"
      {
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Case_23;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases_24;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_28;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_29;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 0)));
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 1)));
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 2)));
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Type_34;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_35;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_36;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_37;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_41_41;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_42_42;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_44_44;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_58;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_59;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_70;
#line 1545 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_71;
#line 1277 "mode_util.m"
        MR_Word check_hlds__mode_util__V_61_61;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_63_63;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_62_62;
#line 1277 "mode_util.m"
        MR_Word check_hlds__mode_util__V_73_73;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_75_75;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_74_74;

#line 1547 "mode_util.m"
        {
#line 1547 "mode_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__2_2, &check_hlds__mode_util__Type_34);
        }
#line 1277 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1277 "mode_util.m"
        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1278 "mode_util.m"
        {
#line 1278 "mode_util.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMap1_35, check_hlds__mode_util__ModuleInfo0_58, &check_hlds__mode_util__ModuleInfo_59);
        }
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        {
#line 1279 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_59));
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 1) = ((MR_Box) (check_hlds__mode_util__V_63_63));
#line 1279 "mode_util.m"
        }
#line 1550 "mode_util.m"
        {
#line 1550 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_33, &check_hlds__mode_util__Goal_36, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__InstMap1_35, &check_hlds__mode_util__InstMapDelta0_37, check_hlds__mode_util__STATE_VARIABLE_RI_41_41, &check_hlds__mode_util__STATE_VARIABLE_RI_42_42);
        }
#line 1277 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1277 "mode_util.m"
        check_hlds__mode_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1278 "mode_util.m"
        {
#line 1278 "mode_util.m"
          hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, check_hlds__mode_util__InstMapDelta0_37, &check_hlds__mode_util__InstMapDelta_28, check_hlds__mode_util__ModuleInfo0_70, &check_hlds__mode_util__ModuleInfo_71);
        }
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        {
#line 1279 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_71));
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (check_hlds__mode_util__V_75_75));
#line 1279 "mode_util.m"
        }
#line 1554 "mode_util.m"
        {
#line 1554 "mode_util.m"
          check_hlds__mode_util__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 0) = ((MR_Box) (check_hlds__mode_util__MainConsId_31));
#line 1554 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 1) = ((MR_Box) (check_hlds__mode_util__OtherConsIds_32));
#line 1554 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 2) = ((MR_Box) (check_hlds__mode_util__Goal_36));
#line 1554 "mode_util.m"
        }
#line 1555 "mode_util.m"
        {
#line 1555 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Cases0_22, &check_hlds__mode_util__Cases_24, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMapDeltas_29, check_hlds__mode_util__STATE_VARIABLE_RI_44_44, check_hlds__mode_util__STATE_VARIABLE_RI_10);
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Case_23));
#line 1544 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Cases_24));
#line 1544 "mode_util.m"
        }
#line 1545 "mode_util.m"
        {
#line 1545 "mode_util.m"
          MR_Word base;
#line 1545 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "mode_util.m"
          *check_hlds__mode_util__HeadVar__8_8 = base;
#line 1545 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_28));
#line 1545 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_29));
#line 1545 "mode_util.m"
        }
#line 1545 "mode_util.m"
      }
#line 1541 "mode_util.m"
  }
#line 1536 "mode_util.m"
}

#line 1500 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1500 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1500 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9)
#line 1500 "mode_util.m"
{
#line 1505 "mode_util.m"
  {
#line 1505 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1505 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1505 "mode_util.m"
      {
#line 1505 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1506 "mode_util.m"
        *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1506 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_9 = check_hlds__mode_util__STATE_VARIABLE_RI_0_8;
#line 1505 "mode_util.m"
      }
#line 1505 "mode_util.m"
    else
#line 1509 "mode_util.m"
      {
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_20;
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_21;
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_25;
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_26;
#line 1509 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1510 "mode_util.m"
        {
#line 1510 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_18, &check_hlds__mode_util__Goal_20, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDelta_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_8, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1512 "mode_util.m"
        {
#line 1512 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goals0_19, &check_hlds__mode_util__Goals_21, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDeltas_26, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_9);
        }
#line 1508 "mode_util.m"
        {
#line 1508 "mode_util.m"
          MR_Word base;
#line 1508 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1508 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_20));
#line 1508 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_21));
#line 1508 "mode_util.m"
        }
#line 1509 "mode_util.m"
        {
#line 1509 "mode_util.m"
          MR_Word base;
#line 1509 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1509 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_25));
#line 1509 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_26));
#line 1509 "mode_util.m"
        }
#line 1509 "mode_util.m"
      }
#line 1505 "mode_util.m"
  }
#line 1500 "mode_util.m"
}

#line 940 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 940 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 940 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6)
#line 940 "mode_util.m"
{
#line 944 "mode_util.m"
  {
#line 944 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 944 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "mode_util.m"
      *check_hlds__mode_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "mode_util.m"
    else
#line 946 "mode_util.m"
      {
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_17;
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_18;
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 2)));
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 3)));
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_25;
#line 946 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_26;
#line 946 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27;
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util___ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 0)));
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 1)));
#line 947 "mode_util.m"
        MR_Integer check_hlds__mode_util___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 4)));
#line 947 "mode_util.m"
        MR_Word check_hlds__mode_util___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 5)));

#line 948 "mode_util.m"
        {
#line 948 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_22, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__Insts_25);
        }
#line 949 "mode_util.m"
        {
#line 949 "mode_util.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Insts_25, &check_hlds__mode_util__Arity_26);
        }
#line 950 "mode_util.m"
        {
#line 950 "mode_util.m"
          check_hlds__mode_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Name_21));
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 2) = ((MR_Box) (check_hlds__mode_util__Arity_26));
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 950 "mode_util.m"
        }
#line 950 "mode_util.m"
        {
#line 950 "mode_util.m"
          check_hlds__mode_util__BoundInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 0) = ((MR_Box) (check_hlds__mode_util__V_27_27));
#line 950 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 1) = ((MR_Box) (check_hlds__mode_util__Insts_25));
#line 950 "mode_util.m"
        }
#line 951 "mode_util.m"
        {
#line 951 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__Ctors_15, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__BoundInsts_18);
        }
#line 946 "mode_util.m"
        {
#line 946 "mode_util.m"
          MR_Word base;
#line 946 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "mode_util.m"
          *check_hlds__mode_util__HeadVar__6_6 = base;
#line 946 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_17));
#line 946 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_18));
#line 946 "mode_util.m"
        }
#line 946 "mode_util.m"
      }
#line 944 "mode_util.m"
  }
#line 940 "mode_util.m"
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
#line 936 "mode_util.m"
  {
#line 936 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 936 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 938 "mode_util.m"
    {
#line 938 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 938 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "mode_util.m"
    }
#line 937 "mode_util.m"
    {
#line 937 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
#line 937 "mode_util.m"
      return;
    }
#line 936 "mode_util.m"
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
#line 931 "mode_util.m"
  {
#line 931 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 931 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 933 "mode_util.m"
    {
#line 933 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 933 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 933 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 933 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "mode_util.m"
    }
#line 932 "mode_util.m"
    {
#line 932 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
#line 932 "mode_util.m"
      return;
    }
#line 931 "mode_util.m"
  }
#line 155 "mode_util.m"
}

#line 1710 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1710__1_2_p_0(
#line 1710 "mode_util.m"
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_65,
#line 1710 "mode_util.m"
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_66)
#line 1710 "mode_util.m"
{
#line 1710 "mode_util.m"
  {
#line 1710 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1710 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_35;
#line 1710 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_37;
#line 1710 "mode_util.m"
    MR_Word check_hlds__mode_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_65, (MR_Integer) 0)));
#line 1710 "mode_util.m"
    MR_Word check_hlds__mode_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_65, (MR_Integer) 1)));
#line 1712 "mode_util.m"
    MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 0)));
#line 1712 "mode_util.m"
    MR_Word check_hlds__mode_util__V_36_36;

#line 1712 "mode_util.m"
    check_hlds__mode_util__Inst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 1)));
#line 1712 "mode_util.m"
    check_hlds__mode_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 0)));
#line 1712 "mode_util.m"
    check_hlds__mode_util__Inst_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 1)));
#line 1713 "mode_util.m"
    {
#line 1713 "mode_util.m"
      MR_Word base;
#line 1713 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1713 "mode_util.m"
      *check_hlds__mode_util__LambdaHeadVar__2_66 = base;
#line 1713 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst0_35));
#line 1713 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__Inst_37));
#line 1713 "mode_util.m"
    }
#line 1710 "mode_util.m"
  }
#line 1710 "mode_util.m"
}

#line 1262 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1262 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3)
#line 1262 "mode_util.m"
{
#line 1262 "mode_util.m"
  {
#line 1262 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1262 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_9 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
#line 1262 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_10 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

#line 1262 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_9 == check_hlds__mode_util__CastY_10);
#line 1262 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1758 "check_hlds.mode_util.c"
      *check_hlds__mode_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1262 "mode_util.m"
    else
#line 1262 "mode_util.m"
      {
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_8_8;

#line 1262 "mode_util.m"
        {
#line 1262 "mode_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_util__V_8_8, check_hlds__mode_util__V_4_4, check_hlds__mode_util__V_6_6);
        }
#line 1780 "check_hlds.mode_util.c"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_8_8 == (MR_Integer) 0);
#line 1262 "mode_util.m"
        check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1262 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1262 "mode_util.m"
          *check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__V_8_8;
#line 1262 "mode_util.m"
        else
#line 1262 "mode_util.m"
          {
#line 1262 "mode_util.m"
            {
#line 1262 "mode_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[3], check_hlds__mode_util__HeadVar__1_1, ((MR_Box) (check_hlds__mode_util__V_5_5)), ((MR_Box) (check_hlds__mode_util__V_7_7)));
#line 1262 "mode_util.m"
              return;
            }
#line 1262 "mode_util.m"
          }
#line 1262 "mode_util.m"
      }
#line 1262 "mode_util.m"
  }
#line 1262 "mode_util.m"
}

#line 1262 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1262 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2)
#line 1262 "mode_util.m"
{
#line 1262 "mode_util.m"
  {
#line 1262 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1262 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_7 = (MR_Integer) check_hlds__mode_util__HeadVar__1_1;
#line 1262 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_8 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;

#line 1262 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_7 == check_hlds__mode_util__CastY_8);
#line 1262 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1262 "mode_util.m"
      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1262 "mode_util.m"
    else
#line 1262 "mode_util.m"
      {
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeInfo_10_10;
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1262 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));

#line 1847 "check_hlds.mode_util.c"
        {
#line 1849 "check_hlds.mode_util.c"
          check_hlds__mode_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_util__V_3_3, check_hlds__mode_util__V_5_5);
        }
#line 1262 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1262 "mode_util.m"
          {
#line 1856 "check_hlds.mode_util.c"
            check_hlds__mode_util__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_util_scalar_common_1[3];
#line 1858 "check_hlds.mode_util.c"
            {
#line 1860 "check_hlds.mode_util.c"
              return check_hlds__mode_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_util__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_util__V_4_4)), ((MR_Box) (check_hlds__mode_util__V_6_6)));
            }
#line 1262 "mode_util.m"
          }
#line 1262 "mode_util.m"
      }
#line 1262 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 1262 "mode_util.m"
  }
#line 1262 "mode_util.m"
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
#line 1915 "check_hlds.mode_util.c"
  {
#line 1917 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_1 == check_hlds__mode_util__HeadVar__2_2);

#line 1920 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1922 "check_hlds.mode_util.c"
  }
#line 116 "mode_util.m"
}

#line 1751 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1751 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1751 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1751 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7)
#line 1751 "mode_util.m"
{
#line 1757 "mode_util.m"
  {
#line 1757 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1757 "mode_util.m"
    MR_Word check_hlds__mode_util__MaybeInst_8;

#line 1757 "mode_util.m"
#line 1757 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) {
#line 1757 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1757 "mode_util.m"
      case (MR_Integer) 0:
#line 1794 "mode_util.m"
        {
#line 1795 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1794 "mode_util.m"
        }
#line 1757 "mode_util.m"
        break;
#line 1757 "mode_util.m"
      case (MR_Integer) 1:
#line 1794 "mode_util.m"
        {
#line 1795 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1794 "mode_util.m"
        }
#line 1757 "mode_util.m"
        break;
#line 1757 "mode_util.m"
      case (MR_Integer) 2:
#line 1794 "mode_util.m"
        {
#line 1795 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1794 "mode_util.m"
        }
#line 1757 "mode_util.m"
        break;
#line 1757 "mode_util.m"
      case (MR_Integer) 3:
#line 1757 "mode_util.m"
#line 1757 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) {
#line 1757 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1757 "mode_util.m"
          case (MR_Integer) 0:
#line 1757 "mode_util.m"
          case (MR_Integer) 1:
#line 1757 "mode_util.m"
          case (MR_Integer) 10:
#line 1757 "mode_util.m"
          case (MR_Integer) 11:
#line 1757 "mode_util.m"
          case (MR_Integer) 12:
#line 1757 "mode_util.m"
          case (MR_Integer) 13:
#line 1757 "mode_util.m"
          case (MR_Integer) 14:
#line 1794 "mode_util.m"
            {
#line 1795 "mode_util.m"
              check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1794 "mode_util.m"
            }
#line 1757 "mode_util.m"
            break;
#line 1757 "mode_util.m"
          case (MR_Integer) 2:
#line 1757 "mode_util.m"
          case (MR_Integer) 3:
#line 1758 "mode_util.m"
            check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1757 "mode_util.m"
            break;
#line 1757 "mode_util.m"
          case (MR_Integer) 4:
#line 1773 "mode_util.m"
            {
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__PredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 1)));
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInfo_20;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__ProcInfo_21;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__PorF_22;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_23;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__ProcArgModes_24;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_25;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__Inst_26;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__V_45_45;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__V_47_47;
#line 1773 "mode_util.m"
              MR_Word check_hlds__mode_util__V_48_48;

#line 1775 "mode_util.m"
              {
#line 1775 "mode_util.m"
                check_hlds__mode_util__V_45_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__mode_util__PredProcId_18);
              }
#line 1774 "mode_util.m"
              {
#line 1774 "mode_util.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__V_45_45, &check_hlds__mode_util__PredInfo_20, &check_hlds__mode_util__ProcInfo_21);
              }
#line 1776 "mode_util.m"
              {
#line 1776 "mode_util.m"
                check_hlds__mode_util__PorF_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__mode_util__PredInfo_20);
              }
#line 1777 "mode_util.m"
              {
#line 1777 "mode_util.m"
                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__Det_23);
              }
#line 1778 "mode_util.m"
              {
#line 1778 "mode_util.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__ProcArgModes_24);
              }
#line 1779 "mode_util.m"
              {
#line 1779 "mode_util.m"
                mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_7, check_hlds__mode_util__ProcArgModes_24, &check_hlds__mode_util__Modes_25);
              }
#line 1780 "mode_util.m"
              {
#line 1780 "mode_util.m"
                check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__PorF_22));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Modes_25));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 3) = ((MR_Box) (check_hlds__mode_util__Det_23));
#line 1780 "mode_util.m"
              }
#line 1780 "mode_util.m"
              check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__V_48_48);
#line 1780 "mode_util.m"
              {
#line 1780 "mode_util.m"
                check_hlds__mode_util__Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1780 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1780 "mode_util.m"
              }
#line 1782 "mode_util.m"
              {
#line 1782 "mode_util.m"
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1782 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__Inst_26));
#line 1782 "mode_util.m"
              }
#line 1773 "mode_util.m"
            }
#line 1757 "mode_util.m"
            break;
#line 1757 "mode_util.m"
          case (MR_Integer) 5:
#line 1757 "mode_util.m"
          case (MR_Integer) 6:
#line 1757 "mode_util.m"
          case (MR_Integer) 7:
#line 1757 "mode_util.m"
          case (MR_Integer) 8:
#line 1766 "mode_util.m"
            {
#line 1766 "mode_util.m"
              MR_Word check_hlds__mode_util__V_53_53;
#line 1766 "mode_util.m"
              MR_Word check_hlds__mode_util__V_56_56;
#line 1766 "mode_util.m"
              MR_Word check_hlds__mode_util__V_57_57;

#line 1768 "mode_util.m"
              {
#line 1768 "mode_util.m"
                check_hlds__mode_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1768 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_6));
#line 1768 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "mode_util.m"
              }
#line 1768 "mode_util.m"
              {
#line 1768 "mode_util.m"
                check_hlds__mode_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 0) = ((MR_Box) (check_hlds__mode_util__V_57_57));
#line 1768 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "mode_util.m"
              }
#line 1767 "mode_util.m"
              {
#line 1767 "mode_util.m"
                check_hlds__mode_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1767 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1767 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1767 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 3) = ((MR_Box) (check_hlds__mode_util__V_56_56));
#line 1767 "mode_util.m"
              }
#line 1767 "mode_util.m"
              {
#line 1767 "mode_util.m"
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__V_53_53));
#line 1767 "mode_util.m"
              }
#line 1766 "mode_util.m"
            }
#line 1757 "mode_util.m"
            break;
#line 1757 "mode_util.m"
          case (MR_Integer) 9:
#line 1770 "mode_util.m"
            {
#line 1771 "mode_util.m"
              {
#line 1771 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
              }
#line 1770 "mode_util.m"
            }
#line 1757 "mode_util.m"
            break;
#line 1757 "mode_util.m"
        }
#line 1757 "mode_util.m"
        break;
#line 1757 "mode_util.m"
    }
#line 1757 "mode_util.m"
    return check_hlds__mode_util__MaybeInst_8;
#line 1757 "mode_util.m"
  }
#line 1751 "mode_util.m"
}

#line 1710 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1710 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1710 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1710 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 1710 "mode_util.m"
{
#line 1710 "mode_util.m"
  {
#line 1710 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1710 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_LambdaHeadVar__2_66;

#line 1710 "mode_util.m"
    {
#line 1710 "mode_util.m"
      check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1710__1_2_p_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_LambdaHeadVar__2_66);
    }
#line 1710 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_LambdaHeadVar__2_66));
#line 1710 "mode_util.m"
  }
#line 1710 "mode_util.m"
}

#line 1663 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1663 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1663 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57)
#line 1663 "mode_util.m"
{
#line 1668 "mode_util.m"
  {
#line 1668 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1668 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1674 "mode_util.m"
    MR_Word check_hlds__mode_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));

#line 1720 "mode_util.m"
#line 1720 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__Uni_9)) {
#line 1720 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1720 "mode_util.m"
      case (MR_Integer) 0:
#line 1721 "mode_util.m"
        {
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__ConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1721 "mode_util.m"
          MR_Word check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 6)));
#line 1734 "mode_util.m"
          MR_Word check_hlds__mode_util__Inst_76;
#line 1723 "mode_util.m"
          MR_Word check_hlds__mode_util__TypeInfo_86_86;
#line 1723 "mode_util.m"
          MR_Word check_hlds__mode_util__NonLocals_45;
#line 1723 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInst_47;
#line 1723 "mode_util.m"
          MR_Integer check_hlds__mode_util__V_58_58;
#line 1723 "mode_util.m"
          MR_Word check_hlds__mode_util__OldInstMapDelta_74;
#line 1726 "mode_util.m"
          MR_Word check_hlds__mode_util__V_46_46;

#line 1723 "mode_util.m"
          {
#line 1723 "mode_util.m"
            check_hlds__mode_util__NonLocals_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1724 "mode_util.m"
          {
#line 1724 "mode_util.m"
            check_hlds__mode_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__NonLocals_45, check_hlds__mode_util__Var_77);
          }
#line 1723 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1723 "mode_util.m"
            {
#line 1725 "mode_util.m"
              {
#line 1725 "mode_util.m"
                check_hlds__mode_util__OldInstMapDelta_74 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
#line 1726 "mode_util.m"
              {
#line 1726 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_74, check_hlds__mode_util__Var_77, &check_hlds__mode_util__V_46_46);
              }
#line 1726 "mode_util.m"
              check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1723 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1723 "mode_util.m"
                {
#line 2331 "check_hlds.mode_util.c"
                  check_hlds__mode_util__TypeInfo_86_86 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
#line 1728 "mode_util.m"
                  {
#line 1728 "mode_util.m"
                    check_hlds__mode_util__V_58_58 = mercury__list__length_1_f_0(check_hlds__mode_util__TypeInfo_86_86, check_hlds__mode_util__Args_40);
                  }
#line 1727 "mode_util.m"
                  {
#line 1727 "mode_util.m"
                    check_hlds__mode_util__MaybeInst_47 = check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ConsId_39, check_hlds__mode_util__V_58_58);
                  }
#line 1729 "mode_util.m"
                  check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_47)) == (MR_mktag((MR_Integer) 1)));
#line 1729 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1729 "mode_util.m"
                    check_hlds__mode_util__Inst_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_47, (MR_Integer) 0)));
#line 1723 "mode_util.m"
                }
#line 1723 "mode_util.m"
            }
#line 1734 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1731 "mode_util.m"
            {
#line 1731 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDelta0_48;

#line 1731 "mode_util.m"
              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1732 "mode_util.m"
              {
#line 1732 "mode_util.m"
                hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__mode_util__InstMapDelta0_48);
              }
#line 1733 "mode_util.m"
              {
#line 1733 "mode_util.m"
                hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_77, check_hlds__mode_util__Inst_76, check_hlds__mode_util__InstMapDelta0_48, check_hlds__mode_util__InstMapDelta_14);
              }
#line 1731 "mode_util.m"
            }
#line 1734 "mode_util.m"
          else
#line 1735 "mode_util.m"
            {
#line 1735 "mode_util.m"
              {
#line 1735 "mode_util.m"
                *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
#line 1736 "mode_util.m"
              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1735 "mode_util.m"
            }
#line 1721 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1721 "mode_util.m"
        }
#line 1720 "mode_util.m"
        break;
#line 1720 "mode_util.m"
      case (MR_Integer) 1:
#line 1676 "mode_util.m"
        {
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__UniModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__OldInstMapDelta_23;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__InitialInst_24;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__FinalInst_29;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__ModuleInfo_30;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__Modes_38;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__V_69_69;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__V_70_70;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__V_71_71;
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1676 "mode_util.m"
          MR_Word check_hlds__mode_util___CanCGC_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1705 "mode_util.m"
          MR_Word check_hlds__mode_util__DeltaInst_25;

#line 1681 "mode_util.m"
          {
#line 1681 "mode_util.m"
            check_hlds__mode_util__OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1682 "mode_util.m"
          {
#line 1682 "mode_util.m"
            hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_13, check_hlds__mode_util__Var_17, &check_hlds__mode_util__InitialInst_24);
          }
#line 1683 "mode_util.m"
          {
#line 1683 "mode_util.m"
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_23, check_hlds__mode_util__Var_17, &check_hlds__mode_util__DeltaInst_25);
          }
#line 1705 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1702 "mode_util.m"
            {
#line 1702 "mode_util.m"
              MR_Word check_hlds__mode_util__FinalInstPrime_26;
#line 1702 "mode_util.m"
              MR_Word check_hlds__mode_util__ModuleInfo1_28;
#line 1695 "mode_util.m"
              MR_Word check_hlds__mode_util___Detism_27;

#line 1695 "mode_util.m"
              {
#line 1695 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__InitialInst_24, check_hlds__mode_util__DeltaInst_25, (MR_Integer) 1, &check_hlds__mode_util__FinalInstPrime_26, &check_hlds__mode_util___Detism_27, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_28);
              }
#line 1702 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1699 "mode_util.m"
                {
#line 1701 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_82_82;
#line 1701 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_81_81;

#line 1699 "mode_util.m"
                  check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__FinalInstPrime_26;
#line 1700 "mode_util.m"
                  check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo1_28;
#line 1701 "mode_util.m"
                  check_hlds__mode_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1701 "mode_util.m"
                  check_hlds__mode_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));
#line 1701 "mode_util.m"
                  {
#line 1701 "mode_util.m"
                    MR_Word base;
#line 1701 "mode_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1701 "mode_util.m"
                    *check_hlds__mode_util__STATE_VARIABLE_RI_57 = base;
#line 1701 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_30));
#line 1701 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_82_82));
#line 1701 "mode_util.m"
                  }
#line 1699 "mode_util.m"
                }
#line 1702 "mode_util.m"
              else
#line 1703 "mode_util.m"
                {
#line 1703 "mode_util.m"
                  {
#line 1703 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_unify\'/8", (MR_String) "abstractly_unify_inst failed");
#line 1703 "mode_util.m"
                    return;
                  }
#line 1703 "mode_util.m"
                }
#line 1702 "mode_util.m"
            }
#line 1705 "mode_util.m"
          else
#line 1707 "mode_util.m"
            {
#line 1707 "mode_util.m"
              check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__InitialInst_24;
#line 1708 "mode_util.m"
              check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo0_16;
#line 1707 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1707 "mode_util.m"
            }
#line 1715 "mode_util.m"
          {
#line 1715 "mode_util.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__mode_util_scalar_common_2[4], check_hlds__mode_util__UniModes_20, &check_hlds__mode_util__Modes_38);
          }
#line 1716 "mode_util.m"
          {
#line 1716 "mode_util.m"
            check_hlds__mode_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 0) = ((MR_Box) (check_hlds__mode_util__Var_17));
#line 1716 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 1) = ((MR_Box) (check_hlds__mode_util__Vars_19));
#line 1716 "mode_util.m"
          }
#line 1717 "mode_util.m"
          {
#line 1717 "mode_util.m"
            check_hlds__mode_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1717 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_24));
#line 1717 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_29));
#line 1717 "mode_util.m"
          }
#line 1717 "mode_util.m"
          {
#line 1717 "mode_util.m"
            check_hlds__mode_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 0) = ((MR_Box) (check_hlds__mode_util__V_71_71));
#line 1717 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 1) = ((MR_Box) (check_hlds__mode_util__Modes_38));
#line 1717 "mode_util.m"
          }
#line 1716 "mode_util.m"
          {
#line 1716 "mode_util.m"
            hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__V_69_69, check_hlds__mode_util__V_70_70, check_hlds__mode_util__ModuleInfo_30, check_hlds__mode_util__InstMapDelta_14);
          }
#line 1719 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1676 "mode_util.m"
        }
#line 1720 "mode_util.m"
        break;
#line 1720 "mode_util.m"
      case (MR_Integer) 2:
#line 1742 "mode_util.m"
        {
#line 1743 "mode_util.m"
          {
#line 1743 "mode_util.m"
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1744 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1742 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1742 "mode_util.m"
        }
#line 1720 "mode_util.m"
        break;
#line 1720 "mode_util.m"
      case (MR_Integer) 3:
#line 1742 "mode_util.m"
        {
#line 1743 "mode_util.m"
          {
#line 1743 "mode_util.m"
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1744 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1742 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1742 "mode_util.m"
        }
#line 1720 "mode_util.m"
        break;
#line 1720 "mode_util.m"
    }
#line 1668 "mode_util.m"
  }
#line 1663 "mode_util.m"
}

#line 1634 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1634 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1634 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1634 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6)
#line 1634 "mode_util.m"
{
#line 1638 "mode_util.m"
  {
#line 1638 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1638 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1638 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1638 "mode_util.m"
        {
#line 1638 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1638 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 1638 "mode_util.m"
        }
#line 1638 "mode_util.m"
      else
#line 1641 "mode_util.m"
        {
#line 1642 "mode_util.m"
          {
#line 1642 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1642 "mode_util.m"
            return;
          }
#line 1641 "mode_util.m"
        }
#line 1638 "mode_util.m"
    else
#line 1638 "mode_util.m"
      {
#line 1638 "mode_util.m"
        MR_Word check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1638 "mode_util.m"
        MR_Word check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1638 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1639 "mode_util.m"
          {
#line 1640 "mode_util.m"
            {
#line 1640 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1640 "mode_util.m"
              return;
            }
#line 1639 "mode_util.m"
          }
#line 1638 "mode_util.m"
        else
#line 1644 "mode_util.m"
          {
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_36;
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_37;
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInst0_39;
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_41;
#line 1644 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52;
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__V_40_40;
#line 1657 "mode_util.m"
            MR_Word check_hlds__mode_util__UnifyInst_42;
#line 1657 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1653 "mode_util.m"
            MR_Word check_hlds__mode_util__V_43_43;

#line 1646 "mode_util.m"
            {
#line 1646 "mode_util.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_2, check_hlds__mode_util__V_55_55, &check_hlds__mode_util__ArgInst0_39);
            }
#line 1647 "mode_util.m"
            {
#line 1647 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__mode_util__Mode0_34, &check_hlds__mode_util__V_40_40, &check_hlds__mode_util__FinalInst_41);
            }
#line 1653 "mode_util.m"
            {
#line 1653 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__ArgInst0_39, check_hlds__mode_util__FinalInst_41, (MR_Integer) 1, &check_hlds__mode_util__UnifyInst_42, &check_hlds__mode_util__V_43_43, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48);
            }
#line 1657 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1656 "mode_util.m"
              {
#line 1656 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1656 "mode_util.m"
                {
#line 1656 "mode_util.m"
                  check_hlds__mode_util__Mode_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 0) = ((MR_Box) (check_hlds__mode_util__ArgInst0_39));
#line 1656 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 1) = ((MR_Box) (check_hlds__mode_util__UnifyInst_42));
#line 1656 "mode_util.m"
                }
#line 1656 "mode_util.m"
              }
#line 1657 "mode_util.m"
            else
#line 1658 "mode_util.m"
              {
#line 1658 "mode_util.m"
                {
#line 1658 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "unify_inst failed");
#line 1658 "mode_util.m"
                  return;
                }
#line 1658 "mode_util.m"
              }
#line 1660 "mode_util.m"
            {
#line 1660 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__V_54_54, check_hlds__mode_util__InstMap_2, check_hlds__mode_util__Modes0_35, &check_hlds__mode_util__Modes_37, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);
            }
#line 1644 "mode_util.m"
            {
#line 1644 "mode_util.m"
              MR_Word base;
#line 1644 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1644 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_36));
#line 1644 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_37));
#line 1644 "mode_util.m"
            }
#line 1644 "mode_util.m"
          }
#line 1638 "mode_util.m"
      }
#line 1638 "mode_util.m"
  }
#line 1634 "mode_util.m"
}

#line 1604 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1604 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1604 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1604 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8)
#line 1604 "mode_util.m"
{
#line 1608 "mode_util.m"
  while (MR_TRUE)
#line 1608 "mode_util.m"
    {
#line 1608 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1608 "mode_util.m"
      {
#line 1608 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1608 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1608 "mode_util.m"
          if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1608 "mode_util.m"
            {
#line 1608 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1608 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_Sub_6 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1608 "mode_util.m"
            }
#line 1608 "mode_util.m"
          else
#line 1611 "mode_util.m"
            {
#line 1612 "mode_util.m"
              {
#line 1612 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1612 "mode_util.m"
                return;
              }
#line 1611 "mode_util.m"
            }
#line 1608 "mode_util.m"
        else
#line 1608 "mode_util.m"
          {
#line 1608 "mode_util.m"
            MR_Word check_hlds__mode_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1608 "mode_util.m"
            MR_Word check_hlds__mode_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1608 "mode_util.m"
            if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1609 "mode_util.m"
              {
#line 1610 "mode_util.m"
                {
#line 1610 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1610 "mode_util.m"
                  return;
                }
#line 1609 "mode_util.m"
              }
#line 1608 "mode_util.m"
            else
#line 1614 "mode_util.m"
              {
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__Inst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__Insts_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgInst_53;
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__Type_54;
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;
#line 1614 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1622 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1622 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;

#line 1618 "mode_util.m"
                {
#line 1618 "mode_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_3, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__ArgInst_53);
                }
#line 1619 "mode_util.m"
                {
#line 1619 "mode_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_2, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__Type_54);
                }
#line 1620 "mode_util.m"
                {
#line 1620 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__mode_util__ArgInst_53, check_hlds__mode_util__Inst_47, check_hlds__mode_util__Type_54, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59, check_hlds__mode_util__STATE_VARIABLE_Sub_0_5, &check_hlds__mode_util__STATE_VARIABLE_Sub_60_60);
                }
#line 1622 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1621 "mode_util.m"
                  {
#line 1621 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1621 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;
#line 1621 "mode_util.m"
                  }
#line 1622 "mode_util.m"
                else
#line 1629 "mode_util.m"
                  {
#line 1629 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1630 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1629 "mode_util.m"
                  }
#line 1632 "mode_util.m"
                /* direct tailcall eliminated */
#line 1632 "mode_util.m"
                {
#line 1632 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__V_65_65;
#line 1632 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__4__tmp_copy_4 = check_hlds__mode_util__Insts_48;
#line 1632 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1632 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;

#line 1632 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1632 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_Sub_0_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5;
#line 1632 "mode_util.m"
                  check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__HeadVar__4__tmp_copy_4;
#line 1632 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 1632 "mode_util.m"
                }
#line 1632 "mode_util.m"
                continue;
#line 1614 "mode_util.m"
              }
#line 1608 "mode_util.m"
          }
#line 1608 "mode_util.m"
      }
#line 1608 "mode_util.m"
      break;
#line 1608 "mode_util.m"
    }
#line 1604 "mode_util.m"
}

#line 1560 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1560 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1560 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1560 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1560 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35)
#line 1560 "mode_util.m"
{
#line 1565 "mode_util.m"
  {
#line 1565 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1565 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1565 "mode_util.m"
    MR_Word check_hlds__mode_util__ProcInfo_18;
#line 1565 "mode_util.m"
    MR_Word check_hlds__mode_util__Detism_19;
#line 1566 "mode_util.m"
    MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1567 "mode_util.m"
    MR_Word check_hlds__mode_util__V_17_17;
#line 1569 "mode_util.m"
    MR_Word check_hlds__mode_util__V_52_52;
#line 1569 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1567 "mode_util.m"
    {
#line 1567 "mode_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__PredId_9, check_hlds__mode_util__ProcId_10, &check_hlds__mode_util__V_17_17, &check_hlds__mode_util__ProcInfo_18);
    }
#line 1568 "mode_util.m"
    {
#line 1568 "mode_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__Detism_19);
    }
#line 1569 "mode_util.m"
    {
#line 1569 "mode_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_19, &check_hlds__mode_util__V_20_20, &check_hlds__mode_util__V_52_52);
    }
#line 1569 "mode_util.m"
    check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_52_52);
#line 1571 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1570 "mode_util.m"
      {
#line 1570 "mode_util.m"
        {
#line 1570 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_14);
        }
#line 1570 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_0_34;
#line 1570 "mode_util.m"
      }
#line 1571 "mode_util.m"
    else
#line 1572 "mode_util.m"
      {
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes0_21;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__ProcInstVarSet_22;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet0_23;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet_24;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes1_25;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__InitialInsts_26;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes_31;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_32;
#line 1572 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1574 "mode_util.m"
        MR_Word check_hlds__mode_util__V_43_43;
#line 1577 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44;
#line 1577 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;

#line 1572 "mode_util.m"
        {
#line 1572 "mode_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ArgModes0_21);
        }
#line 1573 "mode_util.m"
        {
#line 1573 "mode_util.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ProcInstVarSet_22);
        }
#line 1574 "mode_util.m"
        check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1574 "mode_util.m"
        check_hlds__mode_util__InstVarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1575 "mode_util.m"
        {
#line 1575 "mode_util.m"
          parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__mode_util__InstVarSet0_23, check_hlds__mode_util__ProcInstVarSet_22, &check_hlds__mode_util__InstVarSet_24, check_hlds__mode_util__ArgModes0_21, &check_hlds__mode_util__ArgModes1_25);
        }
#line 1577 "mode_util.m"
        check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1577 "mode_util.m"
        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1577 "mode_util.m"
        {
#line 1577 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (check_hlds__mode_util__V_44_44));
#line 1577 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_24));
#line 1577 "mode_util.m"
        }
#line 1578 "mode_util.m"
        {
#line 1578 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__InitialInsts_26);
        }
#line 1582 "mode_util.m"
        {
#line 1582 "mode_util.m"
          check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_util__InstMap_13);
        }
#line 1596 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1583 "mode_util.m"
          {
#line 1583 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub0_27;
#line 1583 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub_28;
#line 1583 "mode_util.m"
            MR_Word check_hlds__mode_util__ModuleInfo1_29;
#line 1583 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes2_30;
#line 1595 "mode_util.m"
            MR_Word check_hlds__mode_util__V_47_47;
#line 1595 "mode_util.m"
            MR_Word check_hlds__mode_util__V_46_46;

#line 1583 "mode_util.m"
            {
#line 1583 "mode_util.m"
              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__mode_util__InstVarSub0_27);
            }
#line 1584 "mode_util.m"
            {
#line 1584 "mode_util.m"
              check_hlds__mode_util__compute_inst_var_sub_8_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__InitialInsts_26, check_hlds__mode_util__InstVarSub0_27, &check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_29);
            }
#line 1588 "mode_util.m"
            {
#line 1588 "mode_util.m"
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__ArgModes2_30);
            }
#line 1593 "mode_util.m"
            {
#line 1593 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__ArgModes2_30, &check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo1_29, &check_hlds__mode_util__ModuleInfo_32);
            }
#line 1595 "mode_util.m"
            check_hlds__mode_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 0)));
#line 1595 "mode_util.m"
            check_hlds__mode_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 1)));
#line 1595 "mode_util.m"
            {
#line 1595 "mode_util.m"
              MR_Word base;
#line 1595 "mode_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1595 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_35 = base;
#line 1595 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_32));
#line 1595 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1595 "mode_util.m"
            }
#line 1583 "mode_util.m"
          }
#line 1596 "mode_util.m"
        else
#line 1597 "mode_util.m"
          {
#line 1597 "mode_util.m"
            MR_Integer check_hlds__mode_util__NumArgs_33;

#line 1597 "mode_util.m"
            {
#line 1597 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[2], check_hlds__mode_util__Args_11, &check_hlds__mode_util__NumArgs_33);
            }
#line 1598 "mode_util.m"
            {
#line 1598 "mode_util.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_33, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[7])), &check_hlds__mode_util__ArgModes_31);
            }
#line 1599 "mode_util.m"
            check_hlds__mode_util__ModuleInfo_32 = check_hlds__mode_util__ModuleInfo0_16;
#line 1597 "mode_util.m"
            *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1597 "mode_util.m"
          }
#line 1601 "mode_util.m"
        {
#line 1601 "mode_util.m"
          hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo_32, check_hlds__mode_util__InstMapDelta_14);
#line 1601 "mode_util.m"
          return;
        }
#line 1572 "mode_util.m"
      }
#line 1565 "mode_util.m"
  }
#line 1560 "mode_util.m"
}

#line 1517 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1517 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1517 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24)
#line 1517 "mode_util.m"
{
#line 1523 "mode_util.m"
  {
#line 1523 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1523 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_20;
#line 1523 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_25_25;

#line 1524 "mode_util.m"
    {
#line 1524 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__RecomputeAtomic_11, check_hlds__mode_util__Var_12, check_hlds__mode_util__Cases0_13, check_hlds__mode_util__Cases_14, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMap0_16, &check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__STATE_VARIABLE_RI_0_23, &check_hlds__mode_util__STATE_VARIABLE_RI_25_25);
    }
#line 1529 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "mode_util.m"
      {
#line 1528 "mode_util.m"
        {
#line 1528 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_18);
        }
#line 1527 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_24 = check_hlds__mode_util__STATE_VARIABLE_RI_25_25;
#line 1527 "mode_util.m"
      }
#line 1529 "mode_util.m"
    else
#line 1530 "mode_util.m"
      {
#line 1530 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1530 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_38;
#line 1277 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_42_42;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_41_41;

#line 1278 "mode_util.m"
        {
#line 1278 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap0_16, check_hlds__mode_util__NonLocals_17, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__InstMapDelta_18, check_hlds__mode_util__ModuleInfo0_37, &check_hlds__mode_util__ModuleInfo_38);
        }
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        {
#line 1279 "mode_util.m"
          MR_Word base;
#line 1279 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_24 = base;
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_38));
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_42_42));
#line 1279 "mode_util.m"
        }
#line 1530 "mode_util.m"
      }
#line 1523 "mode_util.m"
  }
#line 1517 "mode_util.m"
}

#line 1481 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1481 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1481 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22)
#line 1481 "mode_util.m"
{
#line 1487 "mode_util.m"
  {
#line 1487 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1487 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_18;
#line 1487 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_23_23;

#line 1488 "mode_util.m"
    {
#line 1488 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_11, check_hlds__mode_util__Goals_12, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMap_14, &check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__STATE_VARIABLE_RI_0_21, &check_hlds__mode_util__STATE_VARIABLE_RI_23_23);
    }
#line 1493 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1491 "mode_util.m"
      {
#line 1492 "mode_util.m"
        {
#line 1492 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
        }
#line 1491 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_22 = check_hlds__mode_util__STATE_VARIABLE_RI_23_23;
#line 1491 "mode_util.m"
      }
#line 1493 "mode_util.m"
    else
#line 1494 "mode_util.m"
      {
#line 1494 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1494 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_36;
#line 1277 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40;
#line 1279 "mode_util.m"
        MR_Word check_hlds__mode_util__V_39_39;

#line 1278 "mode_util.m"
        {
#line 1278 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap_14, check_hlds__mode_util__NonLocals_15, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__ModuleInfo0_35, &check_hlds__mode_util__ModuleInfo_36);
        }
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1279 "mode_util.m"
        check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1279 "mode_util.m"
        {
#line 1279 "mode_util.m"
          MR_Word base;
#line 1279 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_22 = base;
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_36));
#line 1279 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_40_40));
#line 1279 "mode_util.m"
        }
#line 1494 "mode_util.m"
      }
#line 1487 "mode_util.m"
  }
#line 1481 "mode_util.m"
}

#line 1463 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1463 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1463 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8)
#line 1463 "mode_util.m"
{
#line 1467 "mode_util.m"
  {
#line 1467 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1467 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "mode_util.m"
      {
#line 1467 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "mode_util.m"
        {
#line 1468 "mode_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_6);
        }
#line 1467 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_8 = check_hlds__mode_util__STATE_VARIABLE_RI_0_7;
#line 1467 "mode_util.m"
      }
#line 1467 "mode_util.m"
    else
#line 1470 "mode_util.m"
      {
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_19;
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_20;
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_25;
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_26;
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_27;
#line 1470 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1471 "mode_util.m"
        {
#line 1471 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goal0_17, &check_hlds__mode_util__Goal_19, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap0_5, &check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_7, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1473 "mode_util.m"
        {
#line 1473 "mode_util.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_5, check_hlds__mode_util__InstMapDelta0_25, &check_hlds__mode_util__InstMap1_26);
        }
#line 1474 "mode_util.m"
        {
#line 1474 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goals0_18, &check_hlds__mode_util__Goals_20, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap1_26, &check_hlds__mode_util__InstMapDelta1_27, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_8);
        }
#line 1469 "mode_util.m"
        {
#line 1469 "mode_util.m"
          MR_Word base;
#line 1469 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1469 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_19));
#line 1469 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_20));
#line 1469 "mode_util.m"
        }
#line 1476 "mode_util.m"
        {
#line 1476 "mode_util.m"
          hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__InstMapDelta1_27, (MR_Integer) 1, check_hlds__mode_util__InstMapDelta_6);
#line 1476 "mode_util.m"
          return;
        }
#line 1470 "mode_util.m"
      }
#line 1467 "mode_util.m"
  }
#line 1463 "mode_util.m"
}

#line 1424 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1424 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1424 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1424 "mode_util.m"
{
#line 1424 "mode_util.m"
  {
#line 1424 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1424 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1424 "mode_util.m"
    MR_Word check_hlds__mode_util__conv1_HeadVar__2_2;

#line 1424 "mode_util.m"
    {
#line 1424 "mode_util.m"
      check_hlds__mode_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1424 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv1_HeadVar__2_2));
#line 1424 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1424 "mode_util.m"
  }
#line 1424 "mode_util.m"
}

#line 1415 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1415 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1415 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1415 "mode_util.m"
{
#line 1415 "mode_util.m"
  {
#line 1415 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1415 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1415 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_2;

#line 1415 "mode_util.m"
    {
#line 1415 "mode_util.m"
      check_hlds__mode_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1415 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_2));
#line 1415 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1415 "mode_util.m"
  }
#line 1415 "mode_util.m"
}

#line 1281 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1281 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1281 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106)
#line 1281 "mode_util.m"
{
#line 1289 "mode_util.m"
  {
#line 1289 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1289 "mode_util.m"
#line 1289 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) {
#line 1289 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "mode_util.m"
      case (MR_Integer) 0:
#line 1320 "mode_util.m"
        {
#line 1320 "mode_util.m"
          MR_Word check_hlds__mode_util__SubGoal0_26 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__GoalExpr0_11), (MR_Integer) 0);
#line 1320 "mode_util.m"
          MR_Word check_hlds__mode_util__InstMapDelta0_27;
#line 1320 "mode_util.m"
          MR_Word check_hlds__mode_util__SubGoal_28;
#line 1327 "mode_util.m"
          MR_Word check_hlds__mode_util__V_29_29;

#line 1321 "mode_util.m"
          {
#line 1321 "mode_util.m"
            check_hlds__mode_util__InstMapDelta0_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
          }
#line 1322 "mode_util.m"
          {
#line 1322 "mode_util.m"
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__mode_util__InstMapDelta0_27);
          }
#line 1324 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1323 "mode_util.m"
            {
#line 1323 "mode_util.m"
              hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
#line 1324 "mode_util.m"
          else
#line 1325 "mode_util.m"
            {
#line 1325 "mode_util.m"
              hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
#line 1327 "mode_util.m"
          {
#line 1327 "mode_util.m"
            check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_26, &check_hlds__mode_util__SubGoal_28, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
#line 1329 "mode_util.m"
          *check_hlds__mode_util__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_util__SubGoal_28);
#line 1320 "mode_util.m"
        }
#line 1289 "mode_util.m"
        break;
#line 1289 "mode_util.m"
      case (MR_Integer) 1:
#line 1385 "mode_util.m"
        {
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__LHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__RHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__UniMode0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__Uni_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__RHS_64;
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__UniMode_65;
#line 1385 "mode_util.m"
          MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_120_120;

#line 1397 "mode_util.m"
#line 1397 "mode_util.m"
          switch (MR_tag((MR_Word) check_hlds__mode_util__RHS0_60)) {
#line 1397 "mode_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1397 "mode_util.m"
            case (MR_Integer) 0:
#line 1397 "mode_util.m"
            case (MR_Integer) 1:
#line 1400 "mode_util.m"
              {
#line 1401 "mode_util.m"
                check_hlds__mode_util__RHS_64 = check_hlds__mode_util__RHS0_60;
#line 1400 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_RI_120_120 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1400 "mode_util.m"
              }
#line 1397 "mode_util.m"
              break;
#line 1397 "mode_util.m"
            case (MR_Integer) 2:
#line 1389 "mode_util.m"
              {
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Purity_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Groundness_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__PorF_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__LambdaVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 3)));
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 6)));
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__ModuleInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__InstMap_73;
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal_74;
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Det_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 5)));
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__NonLocals_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 2)));
#line 1389 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 4)));
#line 1390 "mode_util.m"
                MR_Word check_hlds__mode_util__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));
#line 1393 "mode_util.m"
                MR_Word check_hlds__mode_util__V_75_75;

#line 1391 "mode_util.m"
                {
#line 1391 "mode_util.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__mode_util__ModuleInfo0_72, check_hlds__mode_util__LambdaVars_70, check_hlds__mode_util__Modes_152, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMap_73);
                }
#line 1393 "mode_util.m"
                {
#line 1393 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goal0_71, &check_hlds__mode_util__Goal_74, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap_73, &check_hlds__mode_util__V_75_75, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_120_120);
                }
#line 1395 "mode_util.m"
                {
#line 1395 "mode_util.m"
                  check_hlds__mode_util__RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 0) = ((MR_Box) ((check_hlds__mode_util__Purity_66 | ((((check_hlds__mode_util__Groundness_67 << (MR_Integer) 2)) | ((check_hlds__mode_util__PorF_68 << (MR_Integer) 3)))))));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 1) = (MR_Integer) 0;
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 2) = ((MR_Box) (check_hlds__mode_util__NonLocals_151));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 3) = ((MR_Box) (check_hlds__mode_util__LambdaVars_70));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 4) = ((MR_Box) (check_hlds__mode_util__Modes_152));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 5) = ((MR_Box) (check_hlds__mode_util__Det_150));
#line 1395 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 6) = ((MR_Box) (check_hlds__mode_util__Goal_74));
#line 1395 "mode_util.m"
                }
#line 1389 "mode_util.m"
              }
#line 1397 "mode_util.m"
              break;
#line 1397 "mode_util.m"
          }
#line 1407 "mode_util.m"
#line 1407 "mode_util.m"
          switch (check_hlds__mode_util__RecomputeAtomic_10) {
#line 1407 "mode_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1407 "mode_util.m"
            case (MR_Integer) 1:
#line 1408 "mode_util.m"
              {
#line 1409 "mode_util.m"
                check_hlds__mode_util__UniMode_65 = check_hlds__mode_util__UniMode0_61;
#line 1410 "mode_util.m"
                {
#line 1410 "mode_util.m"
                  *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                }
#line 1408 "mode_util.m"
                *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_120_120;
#line 1408 "mode_util.m"
              }
#line 1407 "mode_util.m"
              break;
#line 1407 "mode_util.m"
            case (MR_Integer) 0:
#line 1405 "mode_util.m"
              {
#line 1405 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(check_hlds__mode_util__Uni_62, check_hlds__mode_util__UniMode0_61, &check_hlds__mode_util__UniMode_65, check_hlds__mode_util__GoalInfo_13, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_120_120, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1407 "mode_util.m"
              break;
#line 1407 "mode_util.m"
          }
#line 1386 "mode_util.m"
          {
#line 1386 "mode_util.m"
            MR_Word base;
#line 1386 "mode_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "mode_util.m"
            *check_hlds__mode_util__GoalExpr_12 = base;
#line 1386 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__LHS_59));
#line 1386 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__RHS_64));
#line 1386 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_util__UniMode_65));
#line 1386 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_util__Uni_62));
#line 1386 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_util__Context_63));
#line 1386 "mode_util.m"
          }
#line 1385 "mode_util.m"
        }
#line 1289 "mode_util.m"
        break;
#line 1289 "mode_util.m"
      case (MR_Integer) 2:
#line 1380 "mode_util.m"
        {
#line 1380 "mode_util.m"
          MR_Word check_hlds__mode_util__PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1380 "mode_util.m"
          MR_Integer check_hlds__mode_util__ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1380 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1380 "mode_util.m"
          MR_Word check_hlds__mode_util___BI_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1380 "mode_util.m"
          MR_Word check_hlds__mode_util___UC_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1380 "mode_util.m"
          MR_Word check_hlds__mode_util___Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));

#line 1381 "mode_util.m"
          {
#line 1381 "mode_util.m"
            check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_53, check_hlds__mode_util__ProcId_54, check_hlds__mode_util__Args_55, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
#line 1383 "mode_util.m"
          *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1380 "mode_util.m"
        }
#line 1289 "mode_util.m"
        break;
#line 1289 "mode_util.m"
      case (MR_Integer) 3:
#line 1289 "mode_util.m"
#line 1289 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) {
#line 1289 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "mode_util.m"
          case (MR_Integer) 0:
#line 1371 "mode_util.m"
            {
#line 1371 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1371 "mode_util.m"
              MR_Word check_hlds__mode_util__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1371 "mode_util.m"
              MR_Word check_hlds__mode_util__Vars_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1371 "mode_util.m"
              MR_Word check_hlds__mode_util___Details_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1371 "mode_util.m"
              MR_Word check_hlds__mode_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1372 "mode_util.m"
              MR_Word check_hlds__mode_util__V_191_191;
#line 1372 "mode_util.m"
              MR_Word check_hlds__mode_util__V_51_51;

#line 1372 "mode_util.m"
              {
#line 1372 "mode_util.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_50, &check_hlds__mode_util__V_51_51, &check_hlds__mode_util__V_191_191);
              }
#line 1372 "mode_util.m"
              check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_191_191);
#line 1374 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1373 "mode_util.m"
                {
#line 1373 "mode_util.m"
                  hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
                }
#line 1374 "mode_util.m"
              else
#line 1375 "mode_util.m"
                {
#line 1375 "mode_util.m"
                  MR_Word check_hlds__mode_util__ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1375 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));

#line 1376 "mode_util.m"
                  {
#line 1376 "mode_util.m"
                    hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Vars_149, check_hlds__mode_util__Modes_48, check_hlds__mode_util__ModuleInfo_52, check_hlds__mode_util__InstMapDelta_16);
                  }
#line 1375 "mode_util.m"
                }
#line 1378 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1371 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1371 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 1:
#line 1414 "mode_util.m"
            {
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeInfo_185_185 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgVars_84;
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDelta0_159;
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__PredId_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1414 "mode_util.m"
              MR_Integer check_hlds__mode_util__ProcId_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1414 "mode_util.m"
              MR_Word check_hlds__mode_util__Args_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1413 "mode_util.m"
              MR_Word check_hlds__mode_util___Attr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1413 "mode_util.m"
              MR_Word check_hlds__mode_util___MTRC_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 6)));
#line 1413 "mode_util.m"
              MR_Word check_hlds__mode_util___Impl_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 7)));

#line 1415 "mode_util.m"
              {
#line 1415 "mode_util.m"
                check_hlds__mode_util__ArgVars_84 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_2[2], check_hlds__mode_util__Args_162);
              }
#line 1416 "mode_util.m"
              {
#line 1416 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_160, check_hlds__mode_util__ProcId_161, check_hlds__mode_util__ArgVars_84, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1421 "mode_util.m"
              if ((check_hlds__mode_util__ExtraArgs_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1420 "mode_util.m"
                *check_hlds__mode_util__InstMapDelta_16 = check_hlds__mode_util__InstMapDelta0_159;
#line 1421 "mode_util.m"
              else
#line 1422 "mode_util.m"
                {
#line 1422 "mode_util.m"
                  MR_Word check_hlds__mode_util__OldInstMapDelta_87;
#line 1422 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgVars_88;
#line 1422 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgsInstMapDelta_89;
#line 1422 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_118_118;

#line 1423 "mode_util.m"
                  {
#line 1423 "mode_util.m"
                    check_hlds__mode_util__OldInstMapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1424 "mode_util.m"
                  {
#line 1424 "mode_util.m"
                    check_hlds__mode_util__ExtraArgVars_88 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_2[3], check_hlds__mode_util__ExtraArgs_81);
                  }
#line 1425 "mode_util.m"
                  {
#line 1425 "mode_util.m"
                    check_hlds__mode_util__V_118_118 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__ExtraArgVars_88);
                  }
#line 1425 "mode_util.m"
                  {
#line 1425 "mode_util.m"
                    hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__V_118_118, check_hlds__mode_util__OldInstMapDelta_87, &check_hlds__mode_util__ExtraArgsInstMapDelta_89);
                  }
#line 1427 "mode_util.m"
                  {
#line 1427 "mode_util.m"
                    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__ExtraArgsInstMapDelta_89, (MR_Integer) 0, check_hlds__mode_util__InstMapDelta_16);
                  }
#line 1422 "mode_util.m"
                }
#line 1430 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1414 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 2:
#line 1302 "mode_util.m"
            {
#line 1302 "mode_util.m"
              MR_Word check_hlds__mode_util__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1302 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1302 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals_25;

#line 1303 "mode_util.m"
              {
#line 1303 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_24, &check_hlds__mode_util__Goals_25, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1305 "mode_util.m"
              {
#line 1305 "mode_util.m"
                MR_Word base;
#line 1305 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1305 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1305 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ConjType_23));
#line 1305 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Goals_25));
#line 1305 "mode_util.m"
              }
#line 1302 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 3:
#line 1307 "mode_util.m"
            {
#line 1307 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1307 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals_145;

#line 1309 "mode_util.m"
              {
#line 1309 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
#line 1313 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1311 "mode_util.m"
                {
#line 1311 "mode_util.m"
                  check_hlds__mode_util__Goals_145 = check_hlds__mode_util__Goals0_144;
#line 1312 "mode_util.m"
                  {
#line 1312 "mode_util.m"
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1311 "mode_util.m"
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1311 "mode_util.m"
                }
#line 1313 "mode_util.m"
              else
#line 1314 "mode_util.m"
                {
#line 1314 "mode_util.m"
                  MR_Word check_hlds__mode_util__NonLocals_141;

#line 1314 "mode_util.m"
                  {
#line 1314 "mode_util.m"
                    check_hlds__mode_util__NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1315 "mode_util.m"
                  {
#line 1315 "mode_util.m"
                    check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_144, &check_hlds__mode_util__Goals_145, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_141, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
#line 1314 "mode_util.m"
                }
#line 1318 "mode_util.m"
              {
#line 1318 "mode_util.m"
                MR_Word base;
#line 1318 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1318 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1318 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_145));
#line 1318 "mode_util.m"
              }
#line 1307 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 4:
#line 1289 "mode_util.m"
            {
#line 1289 "mode_util.m"
              MR_Word check_hlds__mode_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1289 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1289 "mode_util.m"
              MR_Word check_hlds__mode_util__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1289 "mode_util.m"
              MR_Word check_hlds__mode_util__Cases_21;

#line 1291 "mode_util.m"
              {
#line 1291 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
#line 1295 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1293 "mode_util.m"
                {
#line 1293 "mode_util.m"
                  check_hlds__mode_util__Cases_21 = check_hlds__mode_util__Cases0_20;
#line 1294 "mode_util.m"
                  {
#line 1294 "mode_util.m"
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1293 "mode_util.m"
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1293 "mode_util.m"
                }
#line 1295 "mode_util.m"
              else
#line 1296 "mode_util.m"
                {
#line 1296 "mode_util.m"
                  MR_Word check_hlds__mode_util__NonLocals_22;

#line 1296 "mode_util.m"
                  {
#line 1296 "mode_util.m"
                    check_hlds__mode_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1297 "mode_util.m"
                  {
#line 1297 "mode_util.m"
                    check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Var_18, check_hlds__mode_util__Cases0_20, &check_hlds__mode_util__Cases_21, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_22, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
#line 1296 "mode_util.m"
                }
#line 1300 "mode_util.m"
              {
#line 1300 "mode_util.m"
                MR_Word base;
#line 1300 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1300 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1300 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Var_18));
#line 1300 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Det_19));
#line 1300 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Cases_21));
#line 1300 "mode_util.m"
              }
#line 1289 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 5:
#line 1348 "mode_util.m"
            {
#line 1348 "mode_util.m"
              MR_Word check_hlds__mode_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1348 "mode_util.m"
              MR_Word check_hlds__mode_util__SubGoal0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1348 "mode_util.m"
              MR_Word check_hlds__mode_util__SubGoal_148;
#line 1365 "mode_util.m"
              MR_Word check_hlds__mode_util__FGT_44;
#line 1349 "mode_util.m"
              MR_Word check_hlds__mode_util__V_43_43;

#line 1349 "mode_util.m"
              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1349 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1349 "mode_util.m"
                {
#line 1349 "mode_util.m"
                  check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 1)));
#line 1349 "mode_util.m"
                  check_hlds__mode_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 2)));
#line 1357 "mode_util.m"
#line 1357 "mode_util.m"
                  switch (check_hlds__mode_util__FGT_44) {
#line 1357 "mode_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1357 "mode_util.m"
                    case (MR_Integer) 1:
#line 1357 "mode_util.m"
                    case (MR_Integer) 2:
#line 1353 "mode_util.m"
                      {
#line 1353 "mode_util.m"
                        MR_Word check_hlds__mode_util__SubGoalInfo_46;
#line 1355 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_45_45;

#line 1354 "mode_util.m"
                        check_hlds__mode_util__SubGoal_148 = check_hlds__mode_util__SubGoal0_147;
#line 1355 "mode_util.m"
                        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 0)));
#line 1355 "mode_util.m"
                        check_hlds__mode_util__SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 1)));
#line 1356 "mode_util.m"
                        {
#line 1356 "mode_util.m"
                          *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__SubGoalInfo_46);
                        }
#line 1353 "mode_util.m"
                        *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1353 "mode_util.m"
                      }
#line 1357 "mode_util.m"
                      break;
#line 1357 "mode_util.m"
                    case (MR_Integer) 0:
#line 1358 "mode_util.m"
                      {
#line 1359 "mode_util.m"
                        {
#line 1359 "mode_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "from_ground_term_initial");
#line 1359 "mode_util.m"
                          return;
                        }
#line 1358 "mode_util.m"
                      }
#line 1357 "mode_util.m"
                      break;
#line 1357 "mode_util.m"
                    case (MR_Integer) 3:
#line 1362 "mode_util.m"
                      {
#line 1362 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                      }
#line 1357 "mode_util.m"
                      break;
#line 1357 "mode_util.m"
                  }
#line 1349 "mode_util.m"
                }
#line 1349 "mode_util.m"
              else
#line 1366 "mode_util.m"
                {
#line 1366 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                }
#line 1369 "mode_util.m"
              {
#line 1369 "mode_util.m"
                MR_Word base;
#line 1369 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1369 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1369 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Reason_42));
#line 1369 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_148));
#line 1369 "mode_util.m"
              }
#line 1348 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 6:
#line 1331 "mode_util.m"
            {
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Cond0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Cond_34;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaCond_35;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapCond_36;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Then_37;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaThen_38;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__Else_39;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaElse_40;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaCondThen_41;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_129_129;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_130_130;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_131_131;
#line 1331 "mode_util.m"
              MR_Word check_hlds__mode_util__NonLocals_146;

#line 1332 "mode_util.m"
              {
#line 1332 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Cond0_31, &check_hlds__mode_util__Cond_34, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_129_129);
              }
#line 1334 "mode_util.m"
              {
#line 1334 "mode_util.m"
                hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDeltaCond_35, &check_hlds__mode_util__InstMapCond_36);
              }
#line 1335 "mode_util.m"
              {
#line 1335 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Then0_32, &check_hlds__mode_util__Then_37, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapCond_36, &check_hlds__mode_util__InstMapDeltaThen_38, check_hlds__mode_util__STATE_VARIABLE_RI_129_129, &check_hlds__mode_util__STATE_VARIABLE_RI_130_130);
              }
#line 1337 "mode_util.m"
              {
#line 1337 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Else0_33, &check_hlds__mode_util__Else_39, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__STATE_VARIABLE_RI_130_130, &check_hlds__mode_util__STATE_VARIABLE_RI_131_131);
              }
#line 1339 "mode_util.m"
              {
#line 1339 "mode_util.m"
                hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__InstMapDeltaThen_38, (MR_Integer) 2, &check_hlds__mode_util__InstMapDeltaCondThen_41);
              }
#line 1341 "mode_util.m"
              {
#line 1341 "mode_util.m"
                check_hlds__mode_util__NonLocals_146 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
              }
#line 1342 "mode_util.m"
              {
#line 1342 "mode_util.m"
                check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_146, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__InstMapDeltaCondThen_41, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_131_131, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1346 "mode_util.m"
              {
#line 1346 "mode_util.m"
                MR_Word base;
#line 1346 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1346 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1346 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Vars_30));
#line 1346 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Cond_34));
#line 1346 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Then_37));
#line 1346 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_util__Else_39));
#line 1346 "mode_util.m"
              }
#line 1331 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
          case (MR_Integer) 7:
#line 1432 "mode_util.m"
            {
#line 1432 "mode_util.m"
              MR_Word check_hlds__mode_util__ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1432 "mode_util.m"
              MR_Word check_hlds__mode_util__ShortHand_100;

#line 1448 "mode_util.m"
#line 1448 "mode_util.m"
              switch (MR_tag((MR_Word) check_hlds__mode_util__ShortHand0_90)) {
#line 1448 "mode_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1448 "mode_util.m"
                case (MR_Integer) 0:
#line 1454 "mode_util.m"
                  {
#line 1456 "mode_util.m"
                    {
#line 1456 "mode_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "bi_implication");
#line 1456 "mode_util.m"
                      return;
                    }
#line 1454 "mode_util.m"
                  }
#line 1448 "mode_util.m"
                  break;
#line 1448 "mode_util.m"
                case (MR_Integer) 1:
#line 1435 "mode_util.m"
                  {
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__GoalType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__Outer_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inner_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__MaybeOutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 3)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 4)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 5)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 6)));
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__MainGoal_98;
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseGoals_99;
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__NonLocals_163;
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__Goals0_164;
#line 1435 "mode_util.m"
                    MR_Word check_hlds__mode_util__Goals_165;

#line 1436 "mode_util.m"
                    {
#line 1436 "mode_util.m"
                      check_hlds__mode_util__Goals0_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 0) = ((MR_Box) (check_hlds__mode_util__MainGoal0_95));
#line 1436 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 1) = ((MR_Box) (check_hlds__mode_util__OrElseGoals0_96));
#line 1436 "mode_util.m"
                    }
#line 1437 "mode_util.m"
                    {
#line 1437 "mode_util.m"
                      check_hlds__mode_util__NonLocals_163 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                    }
#line 1438 "mode_util.m"
                    {
#line 1438 "mode_util.m"
                      check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_164, &check_hlds__mode_util__Goals_165, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_163, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
#line 1443 "mode_util.m"
                    if ((check_hlds__mode_util__Goals_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1441 "mode_util.m"
                      {
#line 1442 "mode_util.m"
                        {
#line 1442 "mode_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "Goals = []");
#line 1442 "mode_util.m"
                          return;
                        }
#line 1441 "mode_util.m"
                      }
#line 1443 "mode_util.m"
                    else
#line 1444 "mode_util.m"
                      {
#line 1444 "mode_util.m"
                        check_hlds__mode_util__MainGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 0)));
#line 1444 "mode_util.m"
                        check_hlds__mode_util__OrElseGoals_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 1)));
#line 1444 "mode_util.m"
                      }
#line 1446 "mode_util.m"
                    {
#line 1446 "mode_util.m"
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__GoalType_91));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__Outer_92));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__Inner_93));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 3) = ((MR_Box) (check_hlds__mode_util__MaybeOutputVars_94));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 4) = ((MR_Box) (check_hlds__mode_util__MainGoal_98));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 5) = ((MR_Box) (check_hlds__mode_util__OrElseGoals_99));
#line 1446 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 6) = ((MR_Box) (check_hlds__mode_util__OrElseInners_97));
#line 1446 "mode_util.m"
                    }
#line 1435 "mode_util.m"
                  }
#line 1448 "mode_util.m"
                  break;
#line 1448 "mode_util.m"
                case (MR_Integer) 2:
#line 1449 "mode_util.m"
                  {
#line 1449 "mode_util.m"
                    MR_Word check_hlds__mode_util__MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1449 "mode_util.m"
                    MR_Word check_hlds__mode_util__ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1449 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1449 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubGoal_167;

#line 1450 "mode_util.m"
                    {
#line 1450 "mode_util.m"
                      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_166, &check_hlds__mode_util__SubGoal_167, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
#line 1452 "mode_util.m"
                    {
#line 1452 "mode_util.m"
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__MaybeIO_101));
#line 1452 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__ResultVar_102));
#line 1452 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_167));
#line 1452 "mode_util.m"
                    }
#line 1449 "mode_util.m"
                  }
#line 1448 "mode_util.m"
                  break;
#line 1448 "mode_util.m"
              }
#line 1458 "mode_util.m"
              {
#line 1458 "mode_util.m"
                MR_Word base;
#line 1458 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1458 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1458 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ShortHand_100));
#line 1458 "mode_util.m"
              }
#line 1432 "mode_util.m"
            }
#line 1289 "mode_util.m"
            break;
#line 1289 "mode_util.m"
        }
#line 1289 "mode_util.m"
        break;
#line 1289 "mode_util.m"
    }
#line 1289 "mode_util.m"
  }
#line 1281 "mode_util.m"
}

#line 1225 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1225 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1225 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40)
#line 1225 "mode_util.m"
{
#line 1230 "mode_util.m"
  {
#line 1230 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__RecomputeAtomic_9 == (MR_Integer) 1);
#line 1230 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 0)));
#line 1230 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 1)));
#line 1230 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_32;
#line 1230 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo1_33;
#line 1230 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_38;
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__V_41_41;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__RHS_19;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__V_21_21;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__V_22_22;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_23_23;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_24_24;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_25_25;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_27_27;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_28_28;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_30_30;
#line 1237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1233 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1233 "mode_util.m"
      {
#line 1234 "mode_util.m"
        {
#line 1234 "mode_util.m"
          check_hlds__mode_util__V_41_41 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(check_hlds__mode_util__GoalExpr0_16);
        }
#line 1234 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_41_41 == (MR_Integer) 1);
#line 1233 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1233 "mode_util.m"
          {
#line 1236 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
#line 1236 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1236 "mode_util.m"
              {
#line 1236 "mode_util.m"
                check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 0)));
#line 1236 "mode_util.m"
                check_hlds__mode_util__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 1)));
#line 1236 "mode_util.m"
                check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 2)));
#line 1236 "mode_util.m"
                check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 3)));
#line 1236 "mode_util.m"
                check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 4)));
#line 1237 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__RHS_19)) == (MR_mktag((MR_Integer) 2)));
#line 1237 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1237 "mode_util.m"
                  {
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 2)));
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 3)));
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 4)));
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 5)));
#line 1237 "mode_util.m"
                    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 6)));
#line 1237 "mode_util.m"
                  }
#line 1236 "mode_util.m"
              }
#line 1235 "mode_util.m"
            check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1233 "mode_util.m"
          }
#line 1233 "mode_util.m"
      }
#line 1243 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1241 "mode_util.m"
      {
#line 1241 "mode_util.m"
        check_hlds__mode_util__GoalExpr_32 = check_hlds__mode_util__GoalExpr0_16;
#line 1242 "mode_util.m"
        check_hlds__mode_util__GoalInfo1_33 = check_hlds__mode_util__GoalInfo0_17;
#line 1241 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_40 = check_hlds__mode_util__STATE_VARIABLE_RI_0_39;
#line 1241 "mode_util.m"
      }
#line 1243 "mode_util.m"
    else
#line 1245 "mode_util.m"
      {
#line 1245 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_34;
#line 1245 "mode_util.m"
        MR_Word check_hlds__mode_util__NonLocals_35;
#line 1245 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_36;

#line 1244 "mode_util.m"
        {
#line 1244 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__GoalExpr0_16, &check_hlds__mode_util__GoalExpr_32, check_hlds__mode_util__GoalInfo0_17, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_13, &check_hlds__mode_util__InstMapDelta0_34, check_hlds__mode_util__STATE_VARIABLE_RI_0_39, check_hlds__mode_util__STATE_VARIABLE_RI_40);
        }
#line 1246 "mode_util.m"
        {
#line 1246 "mode_util.m"
          check_hlds__mode_util__NonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo0_17);
        }
#line 1247 "mode_util.m"
        {
#line 1247 "mode_util.m"
          hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__NonLocals_35, check_hlds__mode_util__InstMapDelta0_34, &check_hlds__mode_util__InstMapDelta1_36);
        }
#line 1248 "mode_util.m"
        {
#line 1248 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta1_36, check_hlds__mode_util__GoalInfo0_17, &check_hlds__mode_util__GoalInfo1_33);
        }
#line 1245 "mode_util.m"
      }
#line 1252 "mode_util.m"
    {
#line 1252 "mode_util.m"
      check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_util__InstMap0_13);
    }
#line 1256 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1253 "mode_util.m"
      {
#line 1253 "mode_util.m"
        MR_Word check_hlds__mode_util__UnreachableInstMapDelta_37;

#line 1253 "mode_util.m"
        {
#line 1253 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__mode_util__UnreachableInstMapDelta_37);
        }
#line 1254 "mode_util.m"
        {
#line 1254 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__UnreachableInstMapDelta_37, check_hlds__mode_util__GoalInfo1_33, &check_hlds__mode_util__GoalInfo_38);
        }
#line 1253 "mode_util.m"
      }
#line 1256 "mode_util.m"
    else
#line 1257 "mode_util.m"
      check_hlds__mode_util__GoalInfo_38 = check_hlds__mode_util__GoalInfo1_33;
#line 1259 "mode_util.m"
    {
#line 1259 "mode_util.m"
      MR_Word base;
#line 1259 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "mode_util.m"
      *check_hlds__mode_util__Goal_11 = base;
#line 1259 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_32));
#line 1259 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_38));
#line 1259 "mode_util.m"
    }
#line 1260 "mode_util.m"
    {
#line 1260 "mode_util.m"
      *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_38);
    }
#line 1230 "mode_util.m"
  }
#line 1225 "mode_util.m"
}

#line 1136 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1136 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1136 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1136 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6)
#line 1136 "mode_util.m"
{
#line 1142 "mode_util.m"
  {
#line 1142 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1140 "mode_util.m"
    {
#line 1140 "mode_util.m"
      check_hlds__mode_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__Subst_5);
    }
#line 1142 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1141 "mode_util.m"
      *check_hlds__mode_util__Type_6 = check_hlds__mode_util__Type0_4;
#line 1142 "mode_util.m"
    else
#line 1143 "mode_util.m"
      {
#line 1143 "mode_util.m"
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__mode_util__Subst_5, check_hlds__mode_util__Type0_4, check_hlds__mode_util__Type_6);
#line 1143 "mode_util.m"
        return;
      }
#line 1142 "mode_util.m"
  }
#line 1136 "mode_util.m"
}

#line 1128 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
#line 1128 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1128 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_2)
#line 1128 "mode_util.m"
{
#line 1131 "mode_util.m"
  {
#line 1131 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1131 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "mode_util.m"
      *check_hlds__mode_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "mode_util.m"
    else
#line 1132 "mode_util.m"
      {
#line 1132 "mode_util.m"
        MR_Word check_hlds__mode_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1132 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1132 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 1)));
#line 1132 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgTypes_6;
#line 1133 "mode_util.m"
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 0)));
#line 1133 "mode_util.m"
        MR_Word check_hlds__mode_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 2)));
#line 1133 "mode_util.m"
        MR_Word check_hlds__mode_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 3)));

#line 1134 "mode_util.m"
        {
#line 1134 "mode_util.m"
          check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_4, &check_hlds__mode_util__ArgTypes_6);
        }
#line 1132 "mode_util.m"
        {
#line 1132 "mode_util.m"
          MR_Word base;
#line 1132 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "mode_util.m"
          *check_hlds__mode_util__HeadVar__2_2 = base;
#line 1132 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgType_5));
#line 1132 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgTypes_6));
#line 1132 "mode_util.m"
        }
#line 1132 "mode_util.m"
      }
#line 1131 "mode_util.m"
  }
#line 1128 "mode_util.m"
}

#line 1115 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
#line 1115 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1115 "mode_util.m"
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
#line 1115 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1115 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 1115 "mode_util.m"
{
#line 4884 "check_hlds.mode_util.c"
  while (MR_TRUE)
#line 4886 "check_hlds.mode_util.c"
    {
#line 4888 "check_hlds.mode_util.c"
      /* tailcall optimized into a loop */
#line 4890 "check_hlds.mode_util.c"
      {
#line 4892 "check_hlds.mode_util.c"
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 4894 "check_hlds.mode_util.c"
        MR_Word check_hlds__mode_util__Ctor_10;
#line 4896 "check_hlds.mode_util.c"
        MR_Word check_hlds__mode_util__Ctors_11;
#line 1122 "mode_util.m"
        MR_Word check_hlds__mode_util__V_17_17;
#line 1122 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_18_18;
#line 1122 "mode_util.m"
        MR_Word check_hlds__mode_util__V_13_13;
#line 1122 "mode_util.m"
        MR_Word check_hlds__mode_util__V_14_14;
#line 1122 "mode_util.m"
        MR_Word check_hlds__mode_util__V_15_15;
#line 1122 "mode_util.m"
        MR_Word check_hlds__mode_util__V_16_16;

#line 4911 "check_hlds.mode_util.c"
        if (check_hlds__mode_util__succeeded)
#line 4913 "check_hlds.mode_util.c"
          {
#line 4915 "check_hlds.mode_util.c"
            check_hlds__mode_util__Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 4917 "check_hlds.mode_util.c"
            check_hlds__mode_util__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 0)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 1)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 2)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 3)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 4)));
#line 1122 "mode_util.m"
            check_hlds__mode_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 5)));
#line 1122 "mode_util.m"
            {
#line 1122 "mode_util.m"
              check_hlds__mode_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_17_17);
            }
#line 1122 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1122 "mode_util.m"
              check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_2 == check_hlds__mode_util__V_18_18);
#line 1124 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1123 "mode_util.m"
              {
#line 1123 "mode_util.m"
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__Ctor_10;
#line 1123 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1123 "mode_util.m"
              }
#line 1124 "mode_util.m"
            else
#line 1125 "mode_util.m"
              {
#line 1125 "mode_util.m"
                /* direct tailcall eliminated */
#line 1125 "mode_util.m"
                {
#line 1125 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__3__tmp_copy_3 = check_hlds__mode_util__Ctors_11;

#line 1125 "mode_util.m"
                  check_hlds__mode_util__HeadVar__3_3 = check_hlds__mode_util__HeadVar__3__tmp_copy_3;
#line 1125 "mode_util.m"
                }
#line 1125 "mode_util.m"
                continue;
#line 1125 "mode_util.m"
              }
#line 4969 "check_hlds.mode_util.c"
          }
#line 4971 "check_hlds.mode_util.c"
        return check_hlds__mode_util__succeeded;
#line 4973 "check_hlds.mode_util.c"
      }
#line 4975 "check_hlds.mode_util.c"
      break;
#line 4977 "check_hlds.mode_util.c"
    }
#line 1115 "mode_util.m"
}

#line 1074 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1074 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1074 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7)
#line 1074 "mode_util.m"
{
#line 1078 "mode_util.m"
  {
#line 1078 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1078 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "mode_util.m"
      *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1078 "mode_util.m"
    else
#line 1081 "mode_util.m"
      {
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 0)));
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 1)));
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_20;
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_21;
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 0)));
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 1)));
#line 1081 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId_27;
#line 1086 "mode_util.m"
        MR_String check_hlds__mode_util__Name_24;
#line 1086 "mode_util.m"
        MR_Integer check_hlds__mode_util__ConsArity_25;
#line 1083 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40;
#line 1083 "mode_util.m"
        MR_Word check_hlds__mode_util___ConsTypeCtor_26;
#line 1100 "mode_util.m"
        MR_Word check_hlds__mode_util__MatchingConstructor_31;
#line 1090 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsName_28;
#line 1090 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_29;
#line 1090 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30;

#line 1083 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1083 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1083 "mode_util.m"
          {
#line 1083 "mode_util.m"
            check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 1)));
#line 1083 "mode_util.m"
            check_hlds__mode_util__ConsArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 2)));
#line 1083 "mode_util.m"
            check_hlds__mode_util___ConsTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 3)));
#line 1083 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 1083 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1083 "mode_util.m"
              check_hlds__mode_util__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_40_40, (MR_Integer) 0)));
#line 1083 "mode_util.m"
          }
#line 1086 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1085 "mode_util.m"
          {
#line 1085 "mode_util.m"
            MR_Word check_hlds__mode_util__V_41_41;

#line 1085 "mode_util.m"
            {
#line 1085 "mode_util.m"
              check_hlds__mode_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 0) = ((MR_Box) (check_hlds__mode_util__TypeModule_4));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 1) = ((MR_Box) (check_hlds__mode_util__Name_24));
#line 1085 "mode_util.m"
            }
#line 1085 "mode_util.m"
            {
#line 1085 "mode_util.m"
              check_hlds__mode_util__ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 1) = ((MR_Box) (check_hlds__mode_util__V_41_41));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 2) = ((MR_Box) (check_hlds__mode_util__ConsArity_25));
#line 1085 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 1085 "mode_util.m"
            }
#line 1085 "mode_util.m"
          }
#line 1086 "mode_util.m"
        else
#line 1087 "mode_util.m"
          check_hlds__mode_util__ConsId_27 = check_hlds__mode_util__ConsId0_22;
#line 1090 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1090 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1090 "mode_util.m"
          {
#line 1090 "mode_util.m"
            check_hlds__mode_util__ConsName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 1)));
#line 1090 "mode_util.m"
            check_hlds__mode_util__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 2)));
#line 1090 "mode_util.m"
            check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 3)));
#line 1091 "mode_util.m"
            {
#line 1091 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__mode_util__find_first_matching_constructor_4_p_0(check_hlds__mode_util__ConsName_28, check_hlds__mode_util__Arity_29, check_hlds__mode_util__Constructors_5, &check_hlds__mode_util__MatchingConstructor_31);
            }
#line 1090 "mode_util.m"
          }
#line 1100 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1095 "mode_util.m"
          {
#line 1095 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 3)));
#line 1095 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgTypes_38;
#line 1095 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInsts_39;
#line 1094 "mode_util.m"
            MR_Word check_hlds__mode_util___ExistQVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 0)));
#line 1094 "mode_util.m"
            MR_Word check_hlds__mode_util___Constraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 1)));
#line 1094 "mode_util.m"
            MR_Word check_hlds__mode_util___Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 2)));
#line 1094 "mode_util.m"
            MR_Integer check_hlds__mode_util___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 4)));
#line 1094 "mode_util.m"
            MR_Word check_hlds__mode_util___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 5)));

#line 1096 "mode_util.m"
            {
#line 1096 "mode_util.m"
              check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_35, &check_hlds__mode_util__ArgTypes_38);
            }
#line 1097 "mode_util.m"
            {
#line 1097 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__ArgTypes_38, check_hlds__mode_util__ArgInsts0_23, &check_hlds__mode_util__ArgInsts_39);
            }
#line 1099 "mode_util.m"
            {
#line 1099 "mode_util.m"
              check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1099 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_39));
#line 1099 "mode_util.m"
            }
#line 1095 "mode_util.m"
          }
#line 1100 "mode_util.m"
        else
#line 1105 "mode_util.m"
          {
#line 1105 "mode_util.m"
            check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1105 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts0_23));
#line 1105 "mode_util.m"
          }
#line 1107 "mode_util.m"
        {
#line 1107 "mode_util.m"
          check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__TypeModule_4, check_hlds__mode_util__Constructors_5, check_hlds__mode_util__BoundInsts0_19, &check_hlds__mode_util__BoundInsts_21);
        }
#line 1081 "mode_util.m"
        {
#line 1081 "mode_util.m"
          MR_Word base;
#line 1081 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1081 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_20));
#line 1081 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_21));
#line 1081 "mode_util.m"
        }
#line 1081 "mode_util.m"
      }
#line 1078 "mode_util.m"
  }
#line 1074 "mode_util.m"
}

#line 1051 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 1051 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 1051 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8)
#line 1051 "mode_util.m"
{
#line 1054 "mode_util.m"
  {
#line 1054 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1054 "mode_util.m"
    MR_Word check_hlds__mode_util__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 0)));
#line 1054 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 1)));
#line 1054 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts_15;
#line 1057 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_16_16;
#line 1057 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_17_17;
#line 1057 "mode_util.m"
    MR_Integer check_hlds__mode_util__ArgInstsLen_12;
#line 1057 "mode_util.m"
    MR_Integer check_hlds__mode_util__TupleArgTypesLen_13;
#line 1057 "mode_util.m"
    MR_Integer check_hlds__mode_util__V_11_11;

#line 1057 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Functor_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1057 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1057 "mode_util.m"
      {
#line 1057 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 1)));
#line 5244 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1058 "mode_util.m"
        {
#line 1058 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_16_16, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInstsLen_12);
        }
#line 5251 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1059 "mode_util.m"
        {
#line 1059 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_17_17, check_hlds__mode_util__TupleArgTypes_6, &check_hlds__mode_util__TupleArgTypesLen_13);
        }
#line 1060 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__ArgInstsLen_12 == check_hlds__mode_util__TupleArgTypesLen_13);
#line 1057 "mode_util.m"
      }
#line 1065 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1062 "mode_util.m"
      {
#line 1062 "mode_util.m"
        MR_Word check_hlds__mode_util__Subst_14;

#line 1062 "mode_util.m"
        {
#line 1062 "mode_util.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_14);
        }
#line 1063 "mode_util.m"
        {
#line 1063 "mode_util.m"
          check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_14, check_hlds__mode_util__TupleArgTypes_6, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInsts_15);
        }
#line 1062 "mode_util.m"
      }
#line 1065 "mode_util.m"
    else
#line 1070 "mode_util.m"
      check_hlds__mode_util__ArgInsts_15 = check_hlds__mode_util__ArgInsts0_10;
#line 1072 "mode_util.m"
    {
#line 1072 "mode_util.m"
      MR_Word base;
#line 1072 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "mode_util.m"
      *check_hlds__mode_util__BoundInst_8 = base;
#line 1072 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Functor_9));
#line 1072 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_15));
#line 1072 "mode_util.m"
    }
#line 1054 "mode_util.m"
  }
#line 1051 "mode_util.m"
}

#line 954 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 954 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 954 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 954 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 954 "mode_util.m"
{
#line 957 "mode_util.m"
  {
#line 957 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 957 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "mode_util.m"
    else
#line 958 "mode_util.m"
      {
#line 958 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 958 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_8;
#line 958 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 959 "mode_util.m"
        {
#line 959 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_6, check_hlds__mode_util__Inst_2, &check_hlds__mode_util__Insts_8);
        }
#line 958 "mode_util.m"
        {
#line 958 "mode_util.m"
          MR_Word base;
#line 958 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 958 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_2));
#line 958 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_8));
#line 958 "mode_util.m"
        }
#line 958 "mode_util.m"
      }
#line 957 "mode_util.m"
  }
#line 954 "mode_util.m"
}

#line 914 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 914 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 914 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 914 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6)
#line 914 "mode_util.m"
{
#line 917 "mode_util.m"
  {
#line 917 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 917 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_32_32;
#line 917 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumPredArgs_9;
#line 917 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumFuncArgs_10;
#line 917 "mode_util.m"
    MR_Word check_hlds__mode_util__FuncArgModes_11;
#line 917 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes0_13;
#line 917 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes_14;

#line 920 "mode_util.m"
    {
#line 920 "mode_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__PredArgTypes_5, &check_hlds__mode_util__NumPredArgs_9);
    }
#line 921 "mode_util.m"
    check_hlds__mode_util__NumFuncArgs_10 = (check_hlds__mode_util__NumPredArgs_9 - (MR_Integer) 1);
#line 5396 "check_hlds.mode_util.c"
    check_hlds__mode_util__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 922 "mode_util.m"
    {
#line 922 "mode_util.m"
      mercury__list__duplicate_3_p_0(check_hlds__mode_util__TypeCtorInfo_32_32, check_hlds__mode_util__NumFuncArgs_10, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[4])), &check_hlds__mode_util__FuncArgModes_11);
    }
#line 924 "mode_util.m"
    {
#line 924 "mode_util.m"
      mercury__list__append_3_p_1(check_hlds__mode_util__TypeCtorInfo_32_32, check_hlds__mode_util__FuncArgModes_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_1[6]), &check_hlds__mode_util__PredArgModes0_13);
    }
#line 925 "mode_util.m"
    {
#line 925 "mode_util.m"
      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__PredArgTypes_5, check_hlds__mode_util__PredArgModes0_13, &check_hlds__mode_util__PredArgModes_14);
    }
#line 927 "mode_util.m"
    {
#line 927 "mode_util.m"
      MR_Word base;
#line 927 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 927 "mode_util.m"
      *check_hlds__mode_util__PredInstInfo_6 = base;
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__PredArgModes_14));
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 927 "mode_util.m"
    }
#line 917 "mode_util.m"
  }
#line 914 "mode_util.m"
}

#line 799 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 799 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 799 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 799 "mode_util.m"
{
#line 804 "mode_util.m"
  {
#line 804 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 804 "mode_util.m"
#line 804 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) {
#line 804 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 804 "mode_util.m"
      case (MR_Integer) 0:
#line 804 "mode_util.m"
#line 804 "mode_util.m"
        switch (MR_unmkbody(check_hlds__mode_util__Inst0_9)) {
#line 804 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 804 "mode_util.m"
          case (MR_Integer) 0:
#line 804 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 1:
#line 877 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
        }
#line 804 "mode_util.m"
        break;
#line 804 "mode_util.m"
      case (MR_Integer) 1:
#line 808 "mode_util.m"
        {
#line 809 "mode_util.m"
          {
#line 809 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_ctor_info_lazily\'/5", (MR_String) "typeinfo already present");
#line 809 "mode_util.m"
            return;
          }
#line 808 "mode_util.m"
        }
#line 804 "mode_util.m"
        break;
#line 804 "mode_util.m"
      case (MR_Integer) 2:
#line 804 "mode_util.m"
        {
#line 804 "mode_util.m"
          MR_Word check_hlds__mode_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 804 "mode_util.m"
          MR_Word check_hlds__mode_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)));

#line 804 "mode_util.m"
          if ((check_hlds__mode_util__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "mode_util.m"
            {
#line 826 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_63;
#line 833 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgTypes_60;
#line 829 "mode_util.m"
              MR_Word check_hlds__mode_util__V_88_88;
#line 829 "mode_util.m"
              MR_Word check_hlds__mode_util__V_18_18;

#line 827 "mode_util.m"
              {
#line 827 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_63);
              }
#line 829 "mode_util.m"
              {
#line 829 "mode_util.m"
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_63, &check_hlds__mode_util__V_18_18, &check_hlds__mode_util__V_88_88, &check_hlds__mode_util__ArgTypes_60);
              }
#line 829 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 829 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_88_88);
#line 833 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 831 "mode_util.m"
                {
#line 831 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_50_50;
#line 831 "mode_util.m"
                  MR_Word check_hlds__mode_util__HOInstInfo_59;

#line 831 "mode_util.m"
                  {
#line 831 "mode_util.m"
                    check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_60, &check_hlds__mode_util__HOInstInfo_59);
                  }
#line 832 "mode_util.m"
                  check_hlds__mode_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_59);
#line 832 "mode_util.m"
                  {
#line 832 "mode_util.m"
                    MR_Word base;
#line 832 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = base;
#line 832 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
#line 832 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_50_50));
#line 832 "mode_util.m"
                  }
#line 831 "mode_util.m"
                }
#line 833 "mode_util.m"
              else
#line 834 "mode_util.m"
                {
#line 834 "mode_util.m"
                  {
#line 834 "mode_util.m"
                    MR_Word base;
#line 834 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = base;
#line 834 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
#line 834 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "mode_util.m"
                  }
#line 834 "mode_util.m"
                }
#line 826 "mode_util.m"
            }
#line 804 "mode_util.m"
          else
#line 855 "mode_util.m"
            {
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__V_45_45;
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_72;
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInstInfo0_74 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_91_91), (MR_Integer) 1);
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__PredOrFunc_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 0)));
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 1)));
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeArgRegs_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 2)));
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 3)));
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_79;
#line 855 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInstInfo_80;
#line 863 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgTypes_70;
#line 859 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_85_85;
#line 859 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_86_86;
#line 859 "mode_util.m"
              MR_Word check_hlds__mode_util__V_90_90;
#line 859 "mode_util.m"
              MR_Word check_hlds__mode_util__V_29_29;

#line 857 "mode_util.m"
              {
#line 857 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_72);
              }
#line 859 "mode_util.m"
              {
#line 859 "mode_util.m"
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_72, &check_hlds__mode_util__V_29_29, &check_hlds__mode_util__V_90_90, &check_hlds__mode_util__ArgTypes_70);
              }
#line 859 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 859 "mode_util.m"
                {
#line 859 "mode_util.m"
                  check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_75 == check_hlds__mode_util__V_90_90);
#line 859 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 859 "mode_util.m"
                    {
#line 5642 "check_hlds.mode_util.c"
                      check_hlds__mode_util__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 5644 "check_hlds.mode_util.c"
                      check_hlds__mode_util__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 860 "mode_util.m"
                      {
#line 860 "mode_util.m"
                        check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_85_85, check_hlds__mode_util__TypeCtorInfo_86_86, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76);
                      }
#line 859 "mode_util.m"
                    }
#line 859 "mode_util.m"
                }
#line 863 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 862 "mode_util.m"
                {
#line 862 "mode_util.m"
                  check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76, &check_hlds__mode_util__Modes_79);
                }
#line 863 "mode_util.m"
              else
#line 868 "mode_util.m"
                check_hlds__mode_util__Modes_79 = check_hlds__mode_util__Modes0_76;
#line 870 "mode_util.m"
              {
#line 870 "mode_util.m"
                check_hlds__mode_util__PredInstInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 870 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_75));
#line 870 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 1) = ((MR_Box) (check_hlds__mode_util__Modes_79));
#line 870 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_77));
#line 870 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 3) = ((MR_Box) (check_hlds__mode_util__Det_78));
#line 870 "mode_util.m"
              }
#line 871 "mode_util.m"
              check_hlds__mode_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_80);
#line 871 "mode_util.m"
              {
#line 871 "mode_util.m"
                MR_Word base;
#line 871 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 871 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
#line 871 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_45_45));
#line 871 "mode_util.m"
              }
#line 855 "mode_util.m"
            }
#line 804 "mode_util.m"
        }
#line 804 "mode_util.m"
        break;
#line 804 "mode_util.m"
      case (MR_Integer) 3:
#line 804 "mode_util.m"
#line 804 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) {
#line 804 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 804 "mode_util.m"
          case (MR_Integer) 0:
#line 873 "mode_util.m"
            {
#line 873 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_81;

#line 874 "mode_util.m"
              {
#line 874 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_81);
              }
#line 875 "mode_util.m"
              {
#line 875 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_81, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
#line 875 "mode_util.m"
                return;
              }
#line 873 "mode_util.m"
            }
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 1:
#line 804 "mode_util.m"
            {
#line 804 "mode_util.m"
              MR_Word check_hlds__mode_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 804 "mode_util.m"
              MR_Word check_hlds__mode_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));

#line 804 "mode_util.m"
              if ((check_hlds__mode_util__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "mode_util.m"
                {
#line 811 "mode_util.m"
                  MR_Word check_hlds__mode_util__Type_13;
#line 818 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgTypes_16;
#line 814 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_87_87;
#line 814 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_14_14;

#line 812 "mode_util.m"
                  {
#line 812 "mode_util.m"
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_13);
                  }
#line 814 "mode_util.m"
                  {
#line 814 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_13, &check_hlds__mode_util__V_14_14, &check_hlds__mode_util__V_87_87, &check_hlds__mode_util__ArgTypes_16);
                  }
#line 814 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 814 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_87_87);
#line 818 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 816 "mode_util.m"
                    {
#line 816 "mode_util.m"
                      MR_Word check_hlds__mode_util__HOInstInfo_17;
#line 816 "mode_util.m"
                      MR_Word check_hlds__mode_util__V_54_54;

#line 816 "mode_util.m"
                      {
#line 816 "mode_util.m"
                        check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_16, &check_hlds__mode_util__HOInstInfo_17);
                      }
#line 817 "mode_util.m"
                      check_hlds__mode_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_17);
#line 817 "mode_util.m"
                      {
#line 817 "mode_util.m"
                        MR_Word base;
#line 817 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 817 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 817 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 817 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 817 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_54_54));
#line 817 "mode_util.m"
                      }
#line 816 "mode_util.m"
                    }
#line 818 "mode_util.m"
                  else
#line 823 "mode_util.m"
                    {
#line 823 "mode_util.m"
                      {
#line 823 "mode_util.m"
                        MR_Word base;
#line 823 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 823 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 823 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 823 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 823 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "mode_util.m"
                      }
#line 823 "mode_util.m"
                    }
#line 811 "mode_util.m"
                }
#line 804 "mode_util.m"
              else
#line 837 "mode_util.m"
                {
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredInstInfo0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_93_93), (MR_Integer) 1);
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 0)));
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 1)));
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 2)));
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 3)));
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__Modes_27;
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredInstInfo_28;
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_47_47;
#line 837 "mode_util.m"
                  MR_Word check_hlds__mode_util__Type_68;
#line 845 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgTypes_66;
#line 841 "mode_util.m"
                  MR_Word check_hlds__mode_util__TypeCtorInfo_83_83;
#line 841 "mode_util.m"
                  MR_Word check_hlds__mode_util__TypeCtorInfo_84_84;
#line 841 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_89_89;
#line 841 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_25_25;

#line 839 "mode_util.m"
                  {
#line 839 "mode_util.m"
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_68);
                  }
#line 841 "mode_util.m"
                  {
#line 841 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_68, &check_hlds__mode_util__V_25_25, &check_hlds__mode_util__V_89_89, &check_hlds__mode_util__ArgTypes_66);
                  }
#line 841 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 841 "mode_util.m"
                    {
#line 841 "mode_util.m"
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_21 == check_hlds__mode_util__V_89_89);
#line 841 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 841 "mode_util.m"
                        {
#line 5879 "check_hlds.mode_util.c"
                          check_hlds__mode_util__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 5881 "check_hlds.mode_util.c"
                          check_hlds__mode_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 842 "mode_util.m"
                          {
#line 842 "mode_util.m"
                            check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_83_83, check_hlds__mode_util__TypeCtorInfo_84_84, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22);
                          }
#line 841 "mode_util.m"
                        }
#line 841 "mode_util.m"
                    }
#line 845 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 844 "mode_util.m"
                    {
#line 844 "mode_util.m"
                      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22, &check_hlds__mode_util__Modes_27);
                    }
#line 845 "mode_util.m"
                  else
#line 850 "mode_util.m"
                    check_hlds__mode_util__Modes_27 = check_hlds__mode_util__Modes0_22;
#line 852 "mode_util.m"
                  {
#line 852 "mode_util.m"
                    check_hlds__mode_util__PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 852 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_21));
#line 852 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 1) = ((MR_Box) (check_hlds__mode_util__Modes_27));
#line 852 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_23));
#line 852 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 3) = ((MR_Box) (check_hlds__mode_util__Det_24));
#line 852 "mode_util.m"
                  }
#line 853 "mode_util.m"
                  check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_28);
#line 853 "mode_util.m"
                  {
#line 853 "mode_util.m"
                    MR_Word base;
#line 853 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 853 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = base;
#line 853 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 853 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 853 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 853 "mode_util.m"
                  }
#line 837 "mode_util.m"
                }
#line 804 "mode_util.m"
            }
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 2:
#line 881 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 3:
#line 883 "mode_util.m"
            {
#line 883 "mode_util.m"
              MR_Word check_hlds__mode_util__V_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 883 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 883 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInst_37;

#line 884 "mode_util.m"
              {
#line 884 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, check_hlds__mode_util__SubInst0_36, &check_hlds__mode_util__SubInst_37);
              }
#line 886 "mode_util.m"
              {
#line 886 "mode_util.m"
                MR_Word base;
#line 886 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 886 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 886 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 886 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_35));
#line 886 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubInst_37));
#line 886 "mode_util.m"
              }
#line 883 "mode_util.m"
            }
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 4:
#line 891 "mode_util.m"
            {
#line 891 "mode_util.m"
              MR_Word check_hlds__mode_util__InstName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 891 "mode_util.m"
              MR_Word check_hlds__mode_util__InstName_43;
#line 891 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_82;
#line 893 "mode_util.m"
              MR_Word check_hlds__mode_util__V_41_41;
#line 893 "mode_util.m"
              MR_Word check_hlds__mode_util__V_42_42;

#line 892 "mode_util.m"
              {
#line 892 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_82);
              }
#line 893 "mode_util.m"
              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__InstName0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 893 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 893 "mode_util.m"
                {
#line 893 "mode_util.m"
                  check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 1)));
#line 893 "mode_util.m"
                  check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 2)));
#line 899 "mode_util.m"
                  check_hlds__mode_util__InstName_43 = check_hlds__mode_util__InstName0_40;
#line 893 "mode_util.m"
                }
#line 893 "mode_util.m"
              else
#line 901 "mode_util.m"
                {
#line 901 "mode_util.m"
                  check_hlds__mode_util__InstName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 901 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 901 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 1) = ((MR_Box) (check_hlds__mode_util__Type_82));
#line 901 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 2) = ((MR_Box) (check_hlds__mode_util__InstName0_40));
#line 901 "mode_util.m"
                }
#line 903 "mode_util.m"
              {
#line 903 "mode_util.m"
                MR_Word base;
#line 903 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 903 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 903 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_43));
#line 903 "mode_util.m"
              }
#line 891 "mode_util.m"
            }
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
          case (MR_Integer) 5:
#line 889 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 804 "mode_util.m"
            break;
#line 804 "mode_util.m"
        }
#line 804 "mode_util.m"
        break;
#line 804 "mode_util.m"
    }
#line 804 "mode_util.m"
  }
#line 799 "mode_util.m"
}

#line 660 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 660 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 660 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 660 "mode_util.m"
{
#line 680 "mode_util.m"
  {
#line 680 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 680 "mode_util.m"
    {
#line 680 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
#line 680 "mode_util.m"
      return;
    }
#line 680 "mode_util.m"
  }
#line 660 "mode_util.m"
}

#line 657 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 657 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 657 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 657 "mode_util.m"
{
#line 677 "mode_util.m"
  {
#line 677 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 677 "mode_util.m"
    {
#line 677 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
#line 677 "mode_util.m"
      return;
    }
#line 677 "mode_util.m"
  }
#line 657 "mode_util.m"
}

#line 623 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 623 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 623 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8)
#line 623 "mode_util.m"
{
#line 626 "mode_util.m"
  {
#line 626 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 626 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst0_9;
#line 626 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst0_10;
#line 626 "mode_util.m"
    MR_Word check_hlds__mode_util__Subst_11;
#line 626 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_12;
#line 626 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_13;

#line 627 "mode_util.m"
    {
#line 627 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode0_7, &check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__FinalInst0_10);
    }
#line 628 "mode_util.m"
    {
#line 628 "mode_util.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_11);
    }
#line 629 "mode_util.m"
    {
#line 629 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__InitialInst_12);
    }
#line 631 "mode_util.m"
    {
#line 631 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__FinalInst0_10, &check_hlds__mode_util__FinalInst_13);
    }
#line 633 "mode_util.m"
    {
#line 633 "mode_util.m"
      MR_Word base;
#line 633 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "mode_util.m"
      *check_hlds__mode_util__Mode_8 = base;
#line 633 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_12));
#line 633 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_13));
#line 633 "mode_util.m"
    }
#line 626 "mode_util.m"
  }
#line 623 "mode_util.m"
}

#line 464 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
#line 464 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 464 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 464 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7)
#line 464 "mode_util.m"
{
#line 468 "mode_util.m"
  while (MR_TRUE)
#line 468 "mode_util.m"
    {
#line 468 "mode_util.m"
      /* tailcall optimized into a loop */
#line 468 "mode_util.m"
      {
#line 468 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 468 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_4;
#line 468 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_5;
#line 476 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInst0_9;
#line 470 "mode_util.m"
        MR_Word check_hlds__mode_util__InstConsId_8;
#line 470 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;
#line 470 "mode_util.m"
        MR_Word check_hlds__mode_util__V_11_11;

#line 467 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 467 "mode_util.m"
          {
#line 467 "mode_util.m"
            check_hlds__mode_util__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 467 "mode_util.m"
            check_hlds__mode_util__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 470 "mode_util.m"
            check_hlds__mode_util__InstConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 0)));
#line 470 "mode_util.m"
            check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 1)));
#line 470 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 470 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 470 "mode_util.m"
              {
#line 470 "mode_util.m"
                check_hlds__mode_util__ArgInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 0)));
#line 470 "mode_util.m"
                check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 1)));
#line 470 "mode_util.m"
                check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 473 "mode_util.m"
                  {
#line 473 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__mode_util__ConsId_6, check_hlds__mode_util__InstConsId_8);
                  }
#line 470 "mode_util.m"
              }
#line 476 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 475 "mode_util.m"
              {
#line 475 "mode_util.m"
                *check_hlds__mode_util__ArgInst_7 = check_hlds__mode_util__ArgInst0_9;
#line 475 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 475 "mode_util.m"
              }
#line 476 "mode_util.m"
            else
#line 477 "mode_util.m"
              {
#line 477 "mode_util.m"
                /* direct tailcall eliminated */
#line 477 "mode_util.m"
                {
#line 477 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__BoundInsts_5;

#line 477 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 477 "mode_util.m"
                }
#line 477 "mode_util.m"
                continue;
#line 477 "mode_util.m"
              }
#line 467 "mode_util.m"
          }
#line 468 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 468 "mode_util.m"
      }
#line 468 "mode_util.m"
      break;
#line 468 "mode_util.m"
    }
#line 464 "mode_util.m"
}

#line 421 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 421 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 421 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8)
#line 421 "mode_util.m"
{
#line 427 "mode_util.m"
  while (MR_TRUE)
#line 427 "mode_util.m"
    {
#line 427 "mode_util.m"
      /* tailcall optimized into a loop */
#line 427 "mode_util.m"
      {
#line 427 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 427 "mode_util.m"
#line 427 "mode_util.m"
        switch (MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) {
#line 427 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 427 "mode_util.m"
          case (MR_Integer) 0:
#line 427 "mode_util.m"
#line 427 "mode_util.m"
            switch (MR_unmkbody(check_hlds__mode_util__Inst_6)) {
#line 427 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 427 "mode_util.m"
              case (MR_Integer) 0:
#line 446 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 1:
#line 432 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
            }
#line 427 "mode_util.m"
            break;
#line 427 "mode_util.m"
          case (MR_Integer) 1:
#line 449 "mode_util.m"
            *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "mode_util.m"
            break;
#line 427 "mode_util.m"
          case (MR_Integer) 2:
#line 451 "mode_util.m"
            {
#line 451 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 0)));
#line 451 "mode_util.m"
              MR_Word check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 452 "mode_util.m"
              {
#line 452 "mode_util.m"
                MR_Word base;
#line 452 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = base;
#line 452 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_32));
#line 452 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "mode_util.m"
              }
#line 451 "mode_util.m"
            }
#line 427 "mode_util.m"
            break;
#line 427 "mode_util.m"
          case (MR_Integer) 3:
#line 427 "mode_util.m"
#line 427 "mode_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) {
#line 427 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 427 "mode_util.m"
              case (MR_Integer) 0:
#line 437 "mode_util.m"
                {
#line 437 "mode_util.m"
                  MR_Word check_hlds__mode_util__List_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 3)));
#line 437 "mode_util.m"
                  MR_Word check_hlds__mode_util___Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 437 "mode_util.m"
                  MR_Word check_hlds__mode_util___InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 440 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgInst0_16;

#line 438 "mode_util.m"
                  {
#line 438 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(check_hlds__mode_util__List_15, check_hlds__mode_util__ConsId_7, &check_hlds__mode_util__ArgInst0_16);
                  }
#line 440 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 439 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = check_hlds__mode_util__ArgInst0_16;
#line 440 "mode_util.m"
                  else
#line 442 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 437 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 1:
#line 434 "mode_util.m"
                {
#line 434 "mode_util.m"
                  MR_Word check_hlds__mode_util__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 434 "mode_util.m"
                  MR_Word check_hlds__mode_util___PredInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));

#line 435 "mode_util.m"
                  {
#line 435 "mode_util.m"
                    MR_Word base;
#line 435 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 435 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = base;
#line 435 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_11));
#line 435 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "mode_util.m"
                  }
#line 434 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 2:
#line 457 "mode_util.m"
                {
#line 458 "mode_util.m"
                  {
#line 458 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "inst_var");
#line 458 "mode_util.m"
                    return;
                  }
#line 457 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 3:
#line 460 "mode_util.m"
                {
#line 460 "mode_util.m"
                  MR_Word check_hlds__mode_util__InsideInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 460 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 461 "mode_util.m"
                  /* direct tailcall eliminated */
#line 461 "mode_util.m"
                  {
#line 461 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__InsideInst_23;

#line 461 "mode_util.m"
                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 461 "mode_util.m"
                  }
#line 461 "mode_util.m"
                  continue;
#line 460 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 4:
#line 427 "mode_util.m"
                {
#line 427 "mode_util.m"
                  MR_Word check_hlds__mode_util__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 427 "mode_util.m"
                  MR_Word check_hlds__mode_util__NamedInst_10;

#line 428 "mode_util.m"
                  {
#line 428 "mode_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__InstName_9, &check_hlds__mode_util__NamedInst_10);
                  }
#line 429 "mode_util.m"
                  /* direct tailcall eliminated */
#line 429 "mode_util.m"
                  {
#line 429 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__NamedInst_10;

#line 429 "mode_util.m"
                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 429 "mode_util.m"
                  }
#line 429 "mode_util.m"
                  continue;
#line 427 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
              case (MR_Integer) 5:
#line 454 "mode_util.m"
                {
#line 455 "mode_util.m"
                  {
#line 455 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "abstract insts not supported");
#line 455 "mode_util.m"
                    return;
                  }
#line 454 "mode_util.m"
                }
#line 427 "mode_util.m"
                break;
#line 427 "mode_util.m"
            }
#line 427 "mode_util.m"
            break;
#line 427 "mode_util.m"
        }
#line 427 "mode_util.m"
      }
#line 427 "mode_util.m"
      break;
#line 427 "mode_util.m"
    }
#line 421 "mode_util.m"
}

#line 306 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 306 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 306 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10)
#line 306 "mode_util.m"
{
#line 333 "mode_util.m"
  while (MR_TRUE)
#line 333 "mode_util.m"
    {
#line 333 "mode_util.m"
      /* tailcall optimized into a loop */
#line 333 "mode_util.m"
      {
#line 333 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 333 "mode_util.m"
        MR_Word check_hlds__mode_util__FunctorName_11;
#line 333 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgType_12;
#line 333 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_13;
#line 320 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_22_22;

#line 317 "mode_util.m"
        {
#line 317 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_8, &check_hlds__mode_util__FunctorName_11, &check_hlds__mode_util__ArgType_12);
        }
#line 317 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 317 "mode_util.m"
          {
#line 319 "mode_util.m"
            {
#line 319 "mode_util.m"
              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__mode_util__Type_8, &check_hlds__mode_util__TypeCtor_13);
            }
#line 317 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 317 "mode_util.m"
              {
#line 6611 "check_hlds.mode_util.c"
                check_hlds__mode_util__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 320 "mode_util.m"
                {
#line 320 "mode_util.m"
                  check_hlds__mode_util__succeeded = mercury__list__member_2_p_0(check_hlds__mode_util__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__mode_util__TypeCtor_13)), check_hlds__mode_util__ContainingTypes_9);
                }
#line 320 "mode_util.m"
                check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 317 "mode_util.m"
              }
#line 317 "mode_util.m"
          }
#line 333 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 326 "mode_util.m"
          {
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_14;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_15;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__ConsId_16;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialArgInst_17;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalArgInst_18;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeOfArg_19;
#line 326 "mode_util.m"
            MR_Word check_hlds__mode_util__V_21_21;

#line 326 "mode_util.m"
            {
#line 326 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_14, &check_hlds__mode_util__FinalInst_15);
            }
#line 327 "mode_util.m"
            {
#line 327 "mode_util.m"
              check_hlds__mode_util__ConsId_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 327 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 327 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 1) = ((MR_Box) (check_hlds__mode_util__FunctorName_11));
#line 327 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 2) = ((MR_Box) ((MR_Integer) 1));
#line 327 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 327 "mode_util.m"
            }
#line 328 "mode_util.m"
            {
#line 328 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_14, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__InitialArgInst_17);
            }
#line 329 "mode_util.m"
            {
#line 329 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_15, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__FinalArgInst_18);
            }
#line 330 "mode_util.m"
            {
#line 330 "mode_util.m"
              check_hlds__mode_util__ModeOfArg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 0) = ((MR_Box) (check_hlds__mode_util__InitialArgInst_17));
#line 330 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 1) = ((MR_Box) (check_hlds__mode_util__FinalArgInst_18));
#line 330 "mode_util.m"
            }
#line 332 "mode_util.m"
            {
#line 332 "mode_util.m"
              check_hlds__mode_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 0) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 332 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 1) = ((MR_Box) (check_hlds__mode_util__ContainingTypes_9));
#line 332 "mode_util.m"
            }
#line 331 "mode_util.m"
            /* direct tailcall eliminated */
#line 331 "mode_util.m"
            {
#line 331 "mode_util.m"
              MR_Word check_hlds__mode_util__Mode__tmp_copy_7 = check_hlds__mode_util__ModeOfArg_19;
#line 331 "mode_util.m"
              MR_Word check_hlds__mode_util__Type__tmp_copy_8 = check_hlds__mode_util__ArgType_12;
#line 331 "mode_util.m"
              MR_Word check_hlds__mode_util__ContainingTypes__tmp_copy_9 = check_hlds__mode_util__V_21_21;

#line 331 "mode_util.m"
              check_hlds__mode_util__ContainingTypes_9 = check_hlds__mode_util__ContainingTypes__tmp_copy_9;
#line 331 "mode_util.m"
              check_hlds__mode_util__Type_8 = check_hlds__mode_util__Type__tmp_copy_8;
#line 331 "mode_util.m"
              check_hlds__mode_util__Mode_7 = check_hlds__mode_util__Mode__tmp_copy_7;
#line 331 "mode_util.m"
            }
#line 331 "mode_util.m"
            continue;
#line 326 "mode_util.m"
          }
#line 333 "mode_util.m"
        else
#line 340 "mode_util.m"
          {
#line 340 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_26;
#line 340 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_27;

#line 341 "mode_util.m"
            {
#line 341 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_26, &check_hlds__mode_util__FinalInst_27);
            }
#line 342 "mode_util.m"
            {
#line 342 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_26);
            }
#line 344 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 343 "mode_util.m"
              *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 0;
#line 344 "mode_util.m"
            else
#line 346 "mode_util.m"
              {
#line 344 "mode_util.m"
                {
#line 344 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_27);
                }
#line 346 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 345 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 1;
#line 346 "mode_util.m"
                else
#line 347 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 2;
#line 346 "mode_util.m"
              }
#line 340 "mode_util.m"
          }
#line 333 "mode_util.m"
      }
#line 333 "mode_util.m"
      break;
#line 333 "mode_util.m"
    }
#line 306 "mode_util.m"
}

#line 203 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__partition_args_5_p_0(
#line 203 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeInfo_for_T_36,
#line 203 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 203 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 203 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 203 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 203 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
#line 203 "mode_util.m"
{
#line 1882 "mode_util.m"
  {
#line 1882 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1882 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1882 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1886 "mode_util.m"
        {
#line 1886 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1886 "mode_util.m"
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1886 "mode_util.m"
        }
#line 1882 "mode_util.m"
      else
#line 1882 "mode_util.m"
        {
#line 1883 "mode_util.m"
          {
#line 1883 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1883 "mode_util.m"
            return;
          }
#line 1882 "mode_util.m"
        }
#line 1882 "mode_util.m"
    else
#line 1882 "mode_util.m"
      {
#line 1882 "mode_util.m"
        MR_Word check_hlds__mode_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1882 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1882 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1884 "mode_util.m"
          {
#line 1885 "mode_util.m"
            {
#line 1885 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1885 "mode_util.m"
              return;
            }
#line 1884 "mode_util.m"
          }
#line 1882 "mode_util.m"
        else
#line 1888 "mode_util.m"
          {
#line 1888 "mode_util.m"
            MR_Box check_hlds__mode_util__Arg_26 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0));
#line 1888 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1888 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1888 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 256 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_41;
#line 257 "mode_util.m"
            MR_Word check_hlds__mode_util___FinalInst_42;

#line 1889 "mode_util.m"
            {
#line 1889 "mode_util.m"
              check_hlds__mode_util__partition_args_5_p_0(check_hlds__mode_util__TypeInfo_for_T_36, check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_37_37, check_hlds__mode_util__Args_27, &check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32, &check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33);
            }
#line 257 "mode_util.m"
            {
#line 257 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_38_38, &check_hlds__mode_util__InitialInst_41, &check_hlds__mode_util___FinalInst_42);
            }
#line 258 "mode_util.m"
            {
#line 258 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__InitialInst_41);
            }
#line 1892 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1891 "mode_util.m"
              {
#line 1891 "mode_util.m"
                {
#line 1891 "mode_util.m"
                  MR_Word base;
#line 1891 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1891 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1891 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32));
#line 1891 "mode_util.m"
                }
#line 1891 "mode_util.m"
                *check_hlds__mode_util__HeadVar__5_5 = check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 1891 "mode_util.m"
              }
#line 1892 "mode_util.m"
            else
#line 1893 "mode_util.m"
              {
#line 1893 "mode_util.m"
                {
#line 1893 "mode_util.m"
                  MR_Word base;
#line 1893 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__5_5 = base;
#line 1893 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1893 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33));
#line 1893 "mode_util.m"
                }
#line 1893 "mode_util.m"
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1893 "mode_util.m"
              }
#line 1888 "mode_util.m"
          }
#line 1882 "mode_util.m"
      }
#line 1882 "mode_util.m"
  }
#line 203 "mode_util.m"
}

#line 195 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_inst_4_p_0(
#line 195 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 195 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 195 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_7,
#line 195 "mode_util.m"
  MR_Word * check_hlds__mode_util__NormalisedInst_8)
#line 195 "mode_util.m"
{
#line 1840 "mode_util.m"
  {
#line 1840 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1840 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_9;
#line 1847 "mode_util.m"
    MR_Word check_hlds__mode_util__V_10_10;
#line 1847 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;
#line 1847 "mode_util.m"
    MR_Word check_hlds__mode_util__V_12_12;

#line 1846 "mode_util.m"
    {
#line 1846 "mode_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst0_7, &check_hlds__mode_util__Inst_9);
    }
#line 1847 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Inst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1847 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1847 "mode_util.m"
      {
#line 1847 "mode_util.m"
        check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 1)));
#line 1847 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 2)));
#line 1847 "mode_util.m"
        check_hlds__mode_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 3)));
#line 1865 "mode_util.m"
        {
#line 1865 "mode_util.m"
          MR_Word check_hlds__mode_util__Uniq_13;

#line 1852 "mode_util.m"
          {
#line 1852 "mode_util.m"
            check_hlds__mode_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__mode_util__Type_6);
          }
#line 1852 "mode_util.m"
          check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1852 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1852 "mode_util.m"
            {
#line 1854 "mode_util.m"
              {
#line 1854 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1852 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1852 "mode_util.m"
                {
#line 1855 "mode_util.m"
                  {
#line 1855 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1857 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1856 "mode_util.m"
                    {
#line 1856 "mode_util.m"
                      check_hlds__mode_util__Uniq_13 = (MR_Integer) 1;
#line 1856 "mode_util.m"
                      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1856 "mode_util.m"
                    }
#line 1857 "mode_util.m"
                  else
#line 1859 "mode_util.m"
                    {
#line 1857 "mode_util.m"
                      {
#line 1857 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1859 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 1859 "mode_util.m"
                        {
#line 1858 "mode_util.m"
                          check_hlds__mode_util__Uniq_13 = (MR_Integer) 2;
#line 1858 "mode_util.m"
                          check_hlds__mode_util__succeeded = MR_TRUE;
#line 1859 "mode_util.m"
                        }
#line 1859 "mode_util.m"
                    }
#line 1852 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1852 "mode_util.m"
                    {
#line 1862 "mode_util.m"
                      {
#line 1862 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1862 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1852 "mode_util.m"
                    }
#line 1852 "mode_util.m"
                }
#line 1852 "mode_util.m"
            }
#line 1865 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1864 "mode_util.m"
            {
#line 1864 "mode_util.m"
              {
#line 1864 "mode_util.m"
                MR_Word base;
#line 1864 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = base;
#line 1864 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1864 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_13));
#line 1864 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1864 "mode_util.m"
              }
#line 1864 "mode_util.m"
            }
#line 1865 "mode_util.m"
          else
#line 1871 "mode_util.m"
            {
#line 1866 "mode_util.m"
              {
#line 1866 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1866 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1866 "mode_util.m"
                {
#line 1867 "mode_util.m"
                  {
#line 1867 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1867 "mode_util.m"
                  check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1866 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1866 "mode_util.m"
                    {
#line 1868 "mode_util.m"
                      {
#line 1868 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1868 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1866 "mode_util.m"
                    }
#line 1866 "mode_util.m"
                }
#line 1871 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1870 "mode_util.m"
                {
#line 1870 "mode_util.m"
                  *check_hlds__mode_util__NormalisedInst_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_2[1]);
#line 1870 "mode_util.m"
                }
#line 1871 "mode_util.m"
              else
#line 1874 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1871 "mode_util.m"
            }
#line 1865 "mode_util.m"
        }
#line 1847 "mode_util.m"
      }
#line 1847 "mode_util.m"
    else
#line 1877 "mode_util.m"
      *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1840 "mode_util.m"
  }
#line 195 "mode_util.m"
}

#line 192 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_insts_4_p_0(
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 192 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 192 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 192 "mode_util.m"
{
#line 1830 "mode_util.m"
  {
#line 1830 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1830 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1830 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1830 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1830 "mode_util.m"
      else
#line 1831 "mode_util.m"
        {
#line 1832 "mode_util.m"
          {
#line 1832 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1832 "mode_util.m"
            return;
          }
#line 1831 "mode_util.m"
        }
#line 1830 "mode_util.m"
    else
#line 1830 "mode_util.m"
      {
#line 1830 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1830 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1830 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1833 "mode_util.m"
          {
#line 1834 "mode_util.m"
            {
#line 1834 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1834 "mode_util.m"
              return;
            }
#line 1833 "mode_util.m"
          }
#line 1830 "mode_util.m"
        else
#line 1836 "mode_util.m"
          {
#line 1836 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1836 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1836 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_25;
#line 1836 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_26;

#line 1837 "mode_util.m"
            {
#line 1837 "mode_util.m"
              check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Inst0_23, &check_hlds__mode_util__Inst_25);
            }
#line 1838 "mode_util.m"
            {
#line 1838 "mode_util.m"
              check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Insts0_24, &check_hlds__mode_util__Insts_26);
            }
#line 1836 "mode_util.m"
            {
#line 1836 "mode_util.m"
              MR_Word base;
#line 1836 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1836 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_25));
#line 1836 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_26));
#line 1836 "mode_util.m"
            }
#line 1836 "mode_util.m"
          }
#line 1830 "mode_util.m"
      }
#line 1830 "mode_util.m"
  }
#line 192 "mode_util.m"
}

#line 187 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(
#line 187 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_6,
#line 187 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_7,
#line 187 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_8,
#line 187 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_9,
#line 187 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_10)
#line 187 "mode_util.m"
{
#line 1814 "mode_util.m"
  {
#line 1814 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 0)));
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 1)));
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDelta0_13;
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_14;
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_15;
#line 1814 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_16;

#line 1816 "mode_util.m"
    {
#line 1816 "mode_util.m"
      check_hlds__mode_util__InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo0_12);
    }
#line 1817 "mode_util.m"
    {
#line 1817 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap0_7, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst0_14);
    }
#line 1818 "mode_util.m"
    {
#line 1818 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_8, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst_15);
    }
#line 1819 "mode_util.m"
    {
#line 1819 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_util__Inst_15, check_hlds__mode_util__Inst0_14);
    }
#line 1821 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1820 "mode_util.m"
      check_hlds__mode_util__GoalInfo_16 = check_hlds__mode_util__GoalInfo0_12;
#line 1821 "mode_util.m"
    else
#line 1822 "mode_util.m"
      {
#line 1822 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_17;

#line 1822 "mode_util.m"
        {
#line 1822 "mode_util.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_6, check_hlds__mode_util__Inst_15, check_hlds__mode_util__InstMapDelta0_13, &check_hlds__mode_util__InstMapDelta_17);
        }
#line 1823 "mode_util.m"
        {
#line 1823 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta_17, check_hlds__mode_util__GoalInfo0_12, &check_hlds__mode_util__GoalInfo_16);
        }
#line 1822 "mode_util.m"
      }
#line 1825 "mode_util.m"
    {
#line 1825 "mode_util.m"
      MR_Word base;
#line 1825 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1825 "mode_util.m"
      *check_hlds__mode_util__Goal_10 = base;
#line 1825 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_11));
#line 1825 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_16));
#line 1825 "mode_util.m"
    }
#line 1814 "mode_util.m"
  }
#line 187 "mode_util.m"
}

#line 180 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
#line 180 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 180 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 180 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 180 "mode_util.m"
{
#line 1800 "mode_util.m"
  {
#line 1800 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1800 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1800 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1800 "mode_util.m"
    else
#line 1801 "mode_util.m"
      {
#line 1801 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1801 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1801 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLive_8;
#line 1801 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLives_9;
#line 1801 "mode_util.m"
        MR_Word check_hlds__mode_util__FinalInst_11;
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util___InitialInst_10;

#line 1804 "mode_util.m"
        {
#line 1804 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util___InitialInst_10, &check_hlds__mode_util__FinalInst_11);
        }
#line 1805 "mode_util.m"
        {
#line 1805 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__FinalInst_11);
        }
#line 1807 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1806 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 1;
#line 1807 "mode_util.m"
        else
#line 1808 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 0;
#line 1810 "mode_util.m"
        {
#line 1810 "mode_util.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__IsLives_9);
        }
#line 1801 "mode_util.m"
        {
#line 1801 "mode_util.m"
          MR_Word base;
#line 1801 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1801 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1801 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__IsLive_8));
#line 1801 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__IsLives_9));
#line 1801 "mode_util.m"
        }
#line 1801 "mode_util.m"
      }
#line 1800 "mode_util.m"
  }
#line 180 "mode_util.m"
}

#line 966 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
#line 966 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 966 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 966 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 966 "mode_util.m"
{
#line 966 "mode_util.m"
  {
#line 966 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 966 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_BoundInst_8;

#line 966 "mode_util.m"
    {
#line 966 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_BoundInst_8);
    }
#line 966 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_BoundInst_8));
#line 966 "mode_util.m"
  }
#line 966 "mode_util.m"
}

#line 174 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(
#line 174 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 174 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 174 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_7,
#line 174 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_8)
#line 174 "mode_util.m"
{
#line 961 "mode_util.m"
  {
#line 961 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 1)));
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__InstResults0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 2)));
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__BoundInsts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 3)));
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__BoundInsts_13;
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__PropagatedResult_14;
#line 961 "mode_util.m"
    MR_Word check_hlds__mode_util__ConstructNewInst_15;
#line 971 "mode_util.m"
    MR_Word check_hlds__mode_util__TupleArgTypes_12;

#line 964 "mode_util.m"
    {
#line 964 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TupleArgTypes_12);
    }
#line 971 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 967 "mode_util.m"
      {
#line 967 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_64_64;
#line 967 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44;

#line 966 "mode_util.m"
        {
#line 966 "mode_util.m"
          check_hlds__mode_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_3[0]));
#line 966 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1));
#line 966 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 966 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 3) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_5));
#line 966 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 4) = ((MR_Box) (check_hlds__mode_util__TupleArgTypes_12));
#line 966 "mode_util.m"
        }
#line 7499 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 966 "mode_util.m"
        {
#line 966 "mode_util.m"
          mercury__list__map_3_p_0(check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__V_44_44, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts_13);
        }
#line 969 "mode_util.m"
        check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "mode_util.m"
        check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
#line 967 "mode_util.m"
      }
#line 971 "mode_util.m"
    else
#line 998 "mode_util.m"
      {
#line 998 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_16;
#line 998 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeArgs_17;
#line 998 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeModule_18;
#line 998 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeParams_23;
#line 998 "mode_util.m"
        MR_Word check_hlds__mode_util__Constructors_25;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeTable_21;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeDefn_22;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeBody_24;
#line 972 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;
#line 973 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_20_20;
#line 973 "mode_util.m"
        MR_String check_hlds__mode_util__V_19_19;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_54_54;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_55_55;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_56_56;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_57_57;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_58_58;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_59_59;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_60_60;
#line 978 "mode_util.m"
        MR_Word check_hlds__mode_util__V_61_61;

#line 972 "mode_util.m"
        {
#line 972 "mode_util.m"
          check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeArgs_17);
        }
#line 972 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 972 "mode_util.m"
          {
#line 973 "mode_util.m"
            check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 0)));
#line 973 "mode_util.m"
            check_hlds__mode_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 1)));
#line 973 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 973 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 973 "mode_util.m"
              {
#line 973 "mode_util.m"
                check_hlds__mode_util__TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 0)));
#line 973 "mode_util.m"
                check_hlds__mode_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 1)));
#line 974 "mode_util.m"
                {
#line 974 "mode_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__mode_util__ModuleInfo_5, &check_hlds__mode_util__TypeTable_21);
                }
#line 975 "mode_util.m"
                {
#line 975 "mode_util.m"
                  check_hlds__mode_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__mode_util__TypeTable_21, check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeDefn_22);
                }
#line 972 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 972 "mode_util.m"
                  {
#line 976 "mode_util.m"
                    {
#line 976 "mode_util.m"
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeParams_23);
                    }
#line 977 "mode_util.m"
                    {
#line 977 "mode_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeBody_24);
                    }
#line 978 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 978 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 978 "mode_util.m"
                      {
#line 978 "mode_util.m"
                        check_hlds__mode_util__Constructors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 0)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 1)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 2)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 3)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 4)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 5)));
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 978 "mode_util.m"
                        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 7)));
#line 978 "mode_util.m"
                      }
#line 972 "mode_util.m"
                  }
#line 973 "mode_util.m"
              }
#line 972 "mode_util.m"
          }
#line 998 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 990 "mode_util.m"
          {
#line 990 "mode_util.m"
            MR_Word check_hlds__mode_util__PropagatedResult0_31;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__PropagatedTypeCtor_32;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__V_26_26;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__V_27_27;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__V_28_28;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__V_29_29;
#line 981 "mode_util.m"
            MR_Word check_hlds__mode_util__V_30_30;

#line 981 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) == (MR_mktag((MR_Integer) 1)));
#line 981 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 981 "mode_util.m"
              {
#line 981 "mode_util.m"
                check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
#line 981 "mode_util.m"
                check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
#line 981 "mode_util.m"
                check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
#line 981 "mode_util.m"
                check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
#line 981 "mode_util.m"
                check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
#line 981 "mode_util.m"
                check_hlds__mode_util__PropagatedResult0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));
#line 982 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__PropagatedResult0_31)) == (MR_mktag((MR_Integer) 1)));
#line 982 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 982 "mode_util.m"
                  {
#line 982 "mode_util.m"
                    check_hlds__mode_util__PropagatedTypeCtor_32 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__PropagatedResult0_31), (MR_Integer) 1);
#line 984 "mode_util.m"
                    {
#line 984 "mode_util.m"
                      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__mode_util__PropagatedTypeCtor_32, check_hlds__mode_util__TypeCtor_16);
                    }
#line 981 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 985 "mode_util.m"
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__TypeParams_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "mode_util.m"
                  }
#line 981 "mode_util.m"
              }
#line 990 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 987 "mode_util.m"
              {
#line 987 "mode_util.m"
                check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
#line 988 "mode_util.m"
                check_hlds__mode_util__PropagatedResult_14 = check_hlds__mode_util__PropagatedResult0_31;
#line 989 "mode_util.m"
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
#line 987 "mode_util.m"
              }
#line 990 "mode_util.m"
            else
#line 991 "mode_util.m"
              {
#line 991 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgSubst_33;
#line 991 "mode_util.m"
                MR_Word check_hlds__mode_util__BoundInsts1_34;

#line 991 "mode_util.m"
                {
#line 991 "mode_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__TypeParams_23, check_hlds__mode_util__TypeArgs_17, &check_hlds__mode_util__ArgSubst_33);
                }
#line 992 "mode_util.m"
                {
#line 992 "mode_util.m"
                  check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ArgSubst_33, check_hlds__mode_util__TypeCtor_16, check_hlds__mode_util__TypeModule_18, check_hlds__mode_util__Constructors_25, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts1_34);
                }
#line 994 "mode_util.m"
                {
#line 994 "mode_util.m"
                  mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts1_34, &check_hlds__mode_util__BoundInsts_13);
                }
#line 995 "mode_util.m"
                check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__TypeCtor_16);
#line 996 "mode_util.m"
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
#line 991 "mode_util.m"
              }
#line 990 "mode_util.m"
          }
#line 998 "mode_util.m"
        else
#line 1000 "mode_util.m"
          {
#line 1000 "mode_util.m"
            check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
#line 1001 "mode_util.m"
            check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "mode_util.m"
            check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
#line 1000 "mode_util.m"
          }
#line 998 "mode_util.m"
      }
#line 1012 "mode_util.m"
#line 1012 "mode_util.m"
    switch (check_hlds__mode_util__ConstructNewInst_15) {
#line 1012 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "mode_util.m"
      case (MR_Integer) 0:
#line 1011 "mode_util.m"
        *check_hlds__mode_util__Inst_8 = check_hlds__mode_util__Inst0_7;
#line 1012 "mode_util.m"
        break;
#line 1012 "mode_util.m"
      case (MR_Integer) 1:
#line 1017 "mode_util.m"
        if ((check_hlds__mode_util__BoundInsts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "mode_util.m"
          *check_hlds__mode_util__Inst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1017 "mode_util.m"
        else
#line 1018 "mode_util.m"
          {
#line 1018 "mode_util.m"
            MR_Word check_hlds__mode_util__InstResults_37;

#line 1022 "mode_util.m"
#line 1022 "mode_util.m"
            switch (MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) {
#line 1022 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "mode_util.m"
              case (MR_Integer) 0:
#line 1022 "mode_util.m"
#line 1022 "mode_util.m"
                switch (MR_unmkbody(check_hlds__mode_util__InstResults0_10)) {
#line 1022 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "mode_util.m"
                  case (MR_Integer) 0:
#line 1023 "mode_util.m"
                    {
#line 1024 "mode_util.m"
                      {
#line 1024 "mode_util.m"
                        check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
#line 1024 "mode_util.m"
                      }
#line 1023 "mode_util.m"
                    }
#line 1022 "mode_util.m"
                    break;
#line 1022 "mode_util.m"
                  case (MR_Integer) 1:
#line 1021 "mode_util.m"
                    check_hlds__mode_util__InstResults_37 = check_hlds__mode_util__InstResults0_10;
#line 1022 "mode_util.m"
                    break;
#line 1022 "mode_util.m"
                }
#line 1022 "mode_util.m"
                break;
#line 1022 "mode_util.m"
              case (MR_Integer) 1:
#line 1031 "mode_util.m"
                {
#line 1031 "mode_util.m"
                  MR_Word check_hlds__mode_util__GroundNessResult0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
#line 1031 "mode_util.m"
                  MR_Word check_hlds__mode_util__ContainsAnyResult_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
#line 1030 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
#line 1030 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
#line 1030 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
#line 1030 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));

#line 1036 "mode_util.m"
                  {
#line 1036 "mode_util.m"
                    check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) (check_hlds__mode_util__GroundNessResult0_38));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) (check_hlds__mode_util__ContainsAnyResult_39));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
#line 1036 "mode_util.m"
                  }
#line 1031 "mode_util.m"
                }
#line 1022 "mode_util.m"
                break;
#line 1022 "mode_util.m"
            }
#line 1047 "mode_util.m"
            {
#line 1047 "mode_util.m"
              MR_Word base;
#line 1047 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "mode_util.m"
              *check_hlds__mode_util__Inst_8 = base;
#line 1047 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1047 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_9));
#line 1047 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__InstResults_37));
#line 1047 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_13));
#line 1047 "mode_util.m"
            }
#line 1018 "mode_util.m"
          }
#line 1012 "mode_util.m"
        break;
#line 1012 "mode_util.m"
    }
#line 961 "mode_util.m"
  }
#line 174 "mode_util.m"
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
#line 936 "mode_util.m"
  {
#line 936 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 936 "mode_util.m"
    {
#line 936 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
#line 936 "mode_util.m"
      return;
    }
#line 936 "mode_util.m"
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
#line 931 "mode_util.m"
  {
#line 931 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 931 "mode_util.m"
    {
#line 931 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
#line 931 "mode_util.m"
      return;
    }
#line 931 "mode_util.m"
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
#line 610 "mode_util.m"
  {
#line 610 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 610 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "mode_util.m"
        *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "mode_util.m"
      else
#line 615 "mode_util.m"
        {
#line 615 "mode_util.m"
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "mode_util.m"
          {
#line 616 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
#line 616 "mode_util.m"
            return;
          }
#line 615 "mode_util.m"
        }
#line 610 "mode_util.m"
    else
#line 610 "mode_util.m"
      {
#line 610 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 610 "mode_util.m"
        MR_Word check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));

#line 610 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "mode_util.m"
          {
#line 617 "mode_util.m"
            *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "mode_util.m"
            {
#line 618 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
#line 618 "mode_util.m"
              return;
            }
#line 617 "mode_util.m"
          }
#line 610 "mode_util.m"
        else
#line 612 "mode_util.m"
          {
#line 612 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 612 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 612 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_14;
#line 612 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_15;

#line 613 "mode_util.m"
            {
#line 613 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_31_31, check_hlds__mode_util__Inst0_12, &check_hlds__mode_util__Inst_14);
            }
#line 614 "mode_util.m"
            {
#line 614 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Insts0_13, &check_hlds__mode_util__Insts_15);
            }
#line 612 "mode_util.m"
            {
#line 612 "mode_util.m"
              MR_Word base;
#line 612 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "mode_util.m"
              *check_hlds__mode_util__HeadVar__5_5 = base;
#line 612 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_14));
#line 612 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_15));
#line 612 "mode_util.m"
            }
#line 612 "mode_util.m"
          }
#line 610 "mode_util.m"
      }
#line 610 "mode_util.m"
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
#line 600 "mode_util.m"
  {
#line 600 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 600 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "mode_util.m"
      else
#line 605 "mode_util.m"
        {
#line 605 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "mode_util.m"
          {
#line 606 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
#line 606 "mode_util.m"
            return;
          }
#line 605 "mode_util.m"
        }
#line 600 "mode_util.m"
    else
#line 600 "mode_util.m"
      {
#line 600 "mode_util.m"
        MR_Word check_hlds__mode_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 600 "mode_util.m"
        MR_Word check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 600 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "mode_util.m"
          {
#line 607 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "mode_util.m"
            {
#line 608 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
#line 608 "mode_util.m"
              return;
            }
#line 607 "mode_util.m"
          }
#line 600 "mode_util.m"
        else
#line 602 "mode_util.m"
          {
#line 602 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 602 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 602 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_11;
#line 602 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_12;

#line 603 "mode_util.m"
            {
#line 603 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_mode_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_26_26, check_hlds__mode_util__Mode0_9, &check_hlds__mode_util__Mode_11);
            }
#line 604 "mode_util.m"
            {
#line 604 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_25_25, check_hlds__mode_util__Modes0_10, &check_hlds__mode_util__Modes_12);
            }
#line 602 "mode_util.m"
            {
#line 602 "mode_util.m"
              MR_Word base;
#line 602 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 602 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_11));
#line 602 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_12));
#line 602 "mode_util.m"
            }
#line 602 "mode_util.m"
          }
#line 600 "mode_util.m"
      }
#line 600 "mode_util.m"
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
#line 1219 "mode_util.m"
  {
#line 1219 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1219 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_17;
#line 1219 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_19;
#line 1221 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1223 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1220 "mode_util.m"
    {
#line 1220 "mode_util.m"
      check_hlds__mode_util__RI0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo0_15));
#line 1220 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_13));
#line 1220 "mode_util.m"
    }
#line 1221 "mode_util.m"
    {
#line 1221 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__Goal0_10, check_hlds__mode_util__Goal_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_14, &check_hlds__mode_util__V_18_18, check_hlds__mode_util__RI0_17, &check_hlds__mode_util__RI_19);
    }
#line 1223 "mode_util.m"
    *check_hlds__mode_util__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 0)));
#line 1223 "mode_util.m"
    check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 1)));
#line 1219 "mode_util.m"
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
#line 1209 "mode_util.m"
  {
#line 1209 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMap0_9;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__VarTypes_10;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal0_11;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__InstVarSet_12;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal_13;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_28;
#line 1209 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_30;
#line 1221 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1223 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1210 "mode_util.m"
    {
#line 1210 "mode_util.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__mode_util__InstMap0_9);
    }
#line 1211 "mode_util.m"
    {
#line 1211 "mode_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__VarTypes_10);
    }
#line 1212 "mode_util.m"
    {
#line 1212 "mode_util.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__Goal0_11);
    }
#line 1213 "mode_util.m"
    {
#line 1213 "mode_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__InstVarSet_12);
    }
#line 1220 "mode_util.m"
    {
#line 1220 "mode_util.m"
      check_hlds__mode_util__RI0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 0) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16));
#line 1220 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_12));
#line 1220 "mode_util.m"
    }
#line 1221 "mode_util.m"
    {
#line 1221 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_6, check_hlds__mode_util__Goal0_11, &check_hlds__mode_util__Goal_13, check_hlds__mode_util__VarTypes_10, check_hlds__mode_util__InstMap0_9, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__RI0_28, &check_hlds__mode_util__RI_30);
    }
#line 1223 "mode_util.m"
    *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 0)));
#line 1223 "mode_util.m"
    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 1)));
#line 1216 "mode_util.m"
    {
#line 1216 "mode_util.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_util__Goal_13, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15);
#line 1216 "mode_util.m"
      return;
    }
#line 1209 "mode_util.m"
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
#line 500 "mode_util.m"
  {
#line 500 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 500 "mode_util.m"
#line 500 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) {
#line 500 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 500 "mode_util.m"
      case (MR_Integer) 0:
#line 571 "mode_util.m"
        {
#line 571 "mode_util.m"
          MR_Word check_hlds__mode_util__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 571 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 571 "mode_util.m"
          MR_Word check_hlds__mode_util__UserInstTable_33;
#line 571 "mode_util.m"
          MR_Integer check_hlds__mode_util__Arity_34;
#line 571 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_66;
#line 579 "mode_util.m"
          MR_Word check_hlds__mode_util__InstDefn_35;
#line 575 "mode_util.m"
          MR_Word check_hlds__mode_util__V_48_48;
#line 575 "mode_util.m"
          MR_Box check_hlds__mode_util__conv0_InstDefn_35;

#line 572 "mode_util.m"
          {
#line 572 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_66);
          }
#line 573 "mode_util.m"
          {
#line 573 "mode_util.m"
            hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__mode_util__InstTable_66, &check_hlds__mode_util__UserInstTable_33);
          }
#line 574 "mode_util.m"
          {
#line 574 "mode_util.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_32, &check_hlds__mode_util__Arity_34);
          }
#line 575 "mode_util.m"
          {
#line 575 "mode_util.m"
            check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 575 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Arity_34));
#line 575 "mode_util.m"
          }
#line 575 "mode_util.m"
          {
#line 575 "mode_util.m"
            check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__mode_util__UserInstTable_33, ((MR_Box) (check_hlds__mode_util__V_48_48)), &check_hlds__mode_util__conv0_InstDefn_35);
          }
#line 575 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 575 "mode_util.m"
            {
#line 575 "mode_util.m"
              check_hlds__mode_util__InstDefn_35 = ((MR_Word) check_hlds__mode_util__conv0_InstDefn_35);
#line 575 "mode_util.m"
              check_hlds__mode_util__succeeded = MR_TRUE;
#line 575 "mode_util.m"
            }
#line 579 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 577 "mode_util.m"
            {
#line 577 "mode_util.m"
              MR_Word check_hlds__mode_util__Params_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 1)));
#line 577 "mode_util.m"
              MR_Word check_hlds__mode_util__InstBody_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 2)));
#line 576 "mode_util.m"
              MR_Word check_hlds__mode_util___VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 0)));
#line 576 "mode_util.m"
              MR_Word check_hlds__mode_util___MMTC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 3)));
#line 576 "mode_util.m"
              MR_Word check_hlds__mode_util___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 4)));
#line 576 "mode_util.m"
              MR_Word check_hlds__mode_util___Status_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 5)));

#line 1153 "mode_util.m"
              if ((check_hlds__mode_util__InstBody_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "mode_util.m"
                {
#line 1157 "mode_util.m"
                  MR_Word base;
#line 1157 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 1157 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1157 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 1157 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
#line 1157 "mode_util.m"
                }
#line 1153 "mode_util.m"
              else
#line 1153 "mode_util.m"
                {
#line 1153 "mode_util.m"
                  MR_Word check_hlds__mode_util__Inst0_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstBody_38, (MR_Integer) 0)));

#line 1154 "mode_util.m"
                  {
#line 1154 "mode_util.m"
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(check_hlds__mode_util__Params_37, check_hlds__mode_util__Args_32, check_hlds__mode_util__Inst0_92, check_hlds__mode_util__Inst_6);
#line 1154 "mode_util.m"
                    return;
                  }
#line 1153 "mode_util.m"
                }
#line 577 "mode_util.m"
            }
#line 579 "mode_util.m"
          else
#line 580 "mode_util.m"
            {
#line 580 "mode_util.m"
              MR_Word base;
#line 580 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 580 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 580 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 580 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
#line 580 "mode_util.m"
            }
#line 571 "mode_util.m"
        }
#line 500 "mode_util.m"
        break;
#line 500 "mode_util.m"
      case (MR_Integer) 1:
#line 500 "mode_util.m"
        {
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__Real_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 3)));
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__UnifyInstInfo_11;
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_12;
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__UnifyInstTable_13;
#line 500 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInstDet_14;

#line 501 "mode_util.m"
          {
#line 501 "mode_util.m"
            check_hlds__mode_util__UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 501 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 0) = ((MR_Box) (check_hlds__mode_util__Live_7));
#line 501 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 1) = ((MR_Box) (check_hlds__mode_util__Real_8));
#line 501 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 2) = ((MR_Box) (check_hlds__mode_util__InstA_9));
#line 501 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 3) = ((MR_Box) (check_hlds__mode_util__InstB_10));
#line 501 "mode_util.m"
          }
#line 502 "mode_util.m"
          {
#line 502 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_12);
          }
#line 503 "mode_util.m"
          {
#line 503 "mode_util.m"
            hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__mode_util__InstTable_12, &check_hlds__mode_util__UnifyInstTable_13);
          }
#line 504 "mode_util.m"
          {
#line 504 "mode_util.m"
            hlds__hlds_data__lookup_unify_inst_3_p_0(check_hlds__mode_util__UnifyInstTable_13, check_hlds__mode_util__UnifyInstInfo_11, &check_hlds__mode_util__MaybeInstDet_14);
          }
#line 507 "mode_util.m"
          if ((check_hlds__mode_util__MaybeInstDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "mode_util.m"
            {
#line 509 "mode_util.m"
              MR_Word base;
#line 509 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 509 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 509 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 509 "mode_util.m"
            }
#line 507 "mode_util.m"
          else
#line 506 "mode_util.m"
            {
#line 506 "mode_util.m"
              MR_Word check_hlds__mode_util__V_15_15;

#line 506 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 0)));
#line 506 "mode_util.m"
              check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 1)));
#line 506 "mode_util.m"
            }
#line 500 "mode_util.m"
        }
#line 500 "mode_util.m"
        break;
#line 500 "mode_util.m"
      case (MR_Integer) 2:
#line 512 "mode_util.m"
        {
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__MergeInstInfo_16;
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__MergeInstTable_17;
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInst_18;
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__InstA_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__InstB_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 512 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_51;

#line 513 "mode_util.m"
          {
#line 513 "mode_util.m"
            check_hlds__mode_util__MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 0) = ((MR_Box) (check_hlds__mode_util__InstA_49));
#line 513 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 1) = ((MR_Box) (check_hlds__mode_util__InstB_50));
#line 513 "mode_util.m"
          }
#line 514 "mode_util.m"
          {
#line 514 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_51);
          }
#line 515 "mode_util.m"
          {
#line 515 "mode_util.m"
            hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__mode_util__InstTable_51, &check_hlds__mode_util__MergeInstTable_17);
          }
#line 516 "mode_util.m"
          {
#line 516 "mode_util.m"
            hlds__hlds_data__lookup_merge_inst_3_p_0(check_hlds__mode_util__MergeInstTable_17, check_hlds__mode_util__MergeInstInfo_16, &check_hlds__mode_util__MaybeInst_18);
          }
#line 519 "mode_util.m"
          if ((check_hlds__mode_util__MaybeInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "mode_util.m"
            {
#line 521 "mode_util.m"
              MR_Word base;
#line 521 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 521 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 521 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 521 "mode_util.m"
            }
#line 519 "mode_util.m"
          else
#line 518 "mode_util.m"
            *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_18, (MR_Integer) 0)));
#line 512 "mode_util.m"
        }
#line 500 "mode_util.m"
        break;
#line 500 "mode_util.m"
      case (MR_Integer) 3:
#line 500 "mode_util.m"
#line 500 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) {
#line 500 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 500 "mode_util.m"
          case (MR_Integer) 0:
#line 524 "mode_util.m"
            {
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__GroundInstInfo_21;
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__GroundInstTable_22;
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__Live_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__Real_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_54;
#line 524 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInstDet_55;

#line 525 "mode_util.m"
              {
#line 525 "mode_util.m"
                check_hlds__mode_util__GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_19));
#line 525 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_20 | ((((check_hlds__mode_util__Live_52 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_53 << (MR_Integer) 4)))))));
#line 525 "mode_util.m"
              }
#line 526 "mode_util.m"
              {
#line 526 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_54);
              }
#line 527 "mode_util.m"
              {
#line 527 "mode_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__mode_util__InstTable_54, &check_hlds__mode_util__GroundInstTable_22);
              }
#line 528 "mode_util.m"
              {
#line 528 "mode_util.m"
                hlds__hlds_data__lookup_ground_inst_3_p_0(check_hlds__mode_util__GroundInstTable_22, check_hlds__mode_util__GroundInstInfo_21, &check_hlds__mode_util__MaybeInstDet_55);
              }
#line 531 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInstDet_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "mode_util.m"
                {
#line 533 "mode_util.m"
                  MR_Word base;
#line 533 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 533 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 533 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 533 "mode_util.m"
                }
#line 531 "mode_util.m"
              else
#line 530 "mode_util.m"
                {
#line 530 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_23_23;

#line 530 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 0)));
#line 530 "mode_util.m"
                  check_hlds__mode_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 1)));
#line 530 "mode_util.m"
                }
#line 524 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
          case (MR_Integer) 1:
#line 536 "mode_util.m"
            {
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__AnyInstInfo_24;
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__AnyInstTable_25;
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__Live_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__Real_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_58;
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInstDet_59;
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInstName_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 536 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_61 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);

#line 537 "mode_util.m"
              {
#line 537 "mode_util.m"
                check_hlds__mode_util__AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_60));
#line 537 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_61 | ((((check_hlds__mode_util__Live_56 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_57 << (MR_Integer) 4)))))));
#line 537 "mode_util.m"
              }
#line 538 "mode_util.m"
              {
#line 538 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_58);
              }
#line 539 "mode_util.m"
              {
#line 539 "mode_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__mode_util__InstTable_58, &check_hlds__mode_util__AnyInstTable_25);
              }
#line 540 "mode_util.m"
              {
#line 540 "mode_util.m"
                hlds__hlds_data__lookup_any_inst_3_p_0(check_hlds__mode_util__AnyInstTable_25, check_hlds__mode_util__AnyInstInfo_24, &check_hlds__mode_util__MaybeInstDet_59);
              }
#line 543 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInstDet_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 543 "mode_util.m"
              else
#line 542 "mode_util.m"
                {
#line 542 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_26_26;

#line 542 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 0)));
#line 542 "mode_util.m"
                  check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 1)));
#line 542 "mode_util.m"
                }
#line 536 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
          case (MR_Integer) 2:
#line 548 "mode_util.m"
            {
#line 548 "mode_util.m"
              MR_Word check_hlds__mode_util__SharedInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 548 "mode_util.m"
              MR_Word check_hlds__mode_util__SharedInstTable_28;
#line 548 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_62;
#line 548 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInst_63;

#line 549 "mode_util.m"
              {
#line 549 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_62);
              }
#line 550 "mode_util.m"
              {
#line 550 "mode_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__mode_util__InstTable_62, &check_hlds__mode_util__SharedInstTable_28);
              }
#line 551 "mode_util.m"
              {
#line 551 "mode_util.m"
                hlds__hlds_data__lookup_shared_inst_3_p_0(check_hlds__mode_util__SharedInstTable_28, check_hlds__mode_util__SharedInstName_27, &check_hlds__mode_util__MaybeInst_63);
              }
#line 554 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInst_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "mode_util.m"
                {
#line 556 "mode_util.m"
                  MR_Word base;
#line 556 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 556 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 556 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 556 "mode_util.m"
                }
#line 554 "mode_util.m"
              else
#line 553 "mode_util.m"
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_63, (MR_Integer) 0)));
#line 548 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
          case (MR_Integer) 3:
#line 559 "mode_util.m"
            {
#line 559 "mode_util.m"
              MR_Word check_hlds__mode_util__NondetLiveInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 559 "mode_util.m"
              MR_Word check_hlds__mode_util__MostlyUniqInstTable_30;
#line 559 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_64;
#line 559 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInst_65;

#line 560 "mode_util.m"
              {
#line 560 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_64);
              }
#line 561 "mode_util.m"
              {
#line 561 "mode_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__mode_util__InstTable_64, &check_hlds__mode_util__MostlyUniqInstTable_30);
              }
#line 562 "mode_util.m"
              {
#line 562 "mode_util.m"
                hlds__hlds_data__lookup_mostly_uniq_inst_3_p_0(check_hlds__mode_util__MostlyUniqInstTable_30, check_hlds__mode_util__NondetLiveInstName_29, &check_hlds__mode_util__MaybeInst_65);
              }
#line 566 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInst_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "mode_util.m"
                {
#line 568 "mode_util.m"
                  MR_Word base;
#line 568 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 568 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 568 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 568 "mode_util.m"
                }
#line 566 "mode_util.m"
              else
#line 565 "mode_util.m"
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_65, (MR_Integer) 0)));
#line 559 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
          case (MR_Integer) 4:
#line 583 "mode_util.m"
            {
#line 583 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 583 "mode_util.m"
              MR_Word check_hlds__mode_util__Subst_43;
#line 583 "mode_util.m"
              MR_Word check_hlds__mode_util__V_46_46;
#line 583 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));

#line 584 "mode_util.m"
              {
#line 584 "mode_util.m"
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_43);
              }
#line 586 "mode_util.m"
              {
#line 586 "mode_util.m"
                check_hlds__mode_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 586 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 586 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_67));
#line 586 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "mode_util.m"
              }
#line 677 "mode_util.m"
              {
#line 677 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_43, check_hlds__mode_util__Type_42, check_hlds__mode_util__V_46_46, check_hlds__mode_util__Inst_6);
#line 677 "mode_util.m"
                return;
              }
#line 583 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
          case (MR_Integer) 5:
#line 588 "mode_util.m"
            {
#line 588 "mode_util.m"
              MR_Word check_hlds__mode_util__TypedInstName_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 588 "mode_util.m"
              MR_Word check_hlds__mode_util__Inst0_45;
#line 588 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 588 "mode_util.m"
              MR_Word check_hlds__mode_util__Subst_69;

#line 589 "mode_util.m"
              {
#line 589 "mode_util.m"
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__TypedInstName_44, &check_hlds__mode_util__Inst0_45);
              }
#line 590 "mode_util.m"
              {
#line 590 "mode_util.m"
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_69);
              }
#line 677 "mode_util.m"
              {
#line 677 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_69, check_hlds__mode_util__Type_68, check_hlds__mode_util__Inst0_45, check_hlds__mode_util__Inst_6);
#line 677 "mode_util.m"
                return;
              }
#line 588 "mode_util.m"
            }
#line 500 "mode_util.m"
            break;
#line 500 "mode_util.m"
        }
#line 500 "mode_util.m"
        break;
#line 500 "mode_util.m"
    }
#line 500 "mode_util.m"
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
#line 485 "mode_util.m"
  {
#line 485 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 485 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "mode_util.m"
      else
#line 486 "mode_util.m"
        {
#line 487 "mode_util.m"
          {
#line 487 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", (MR_String) "length mismatch");
#line 487 "mode_util.m"
            return;
          }
#line 486 "mode_util.m"
        }
#line 485 "mode_util.m"
    else
#line 485 "mode_util.m"
      {
#line 485 "mode_util.m"
        MR_Word check_hlds__mode_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "mode_util.m"
        MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 485 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "mode_util.m"
          {
#line 489 "mode_util.m"
            {
#line 489 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", (MR_String) "length mismatch");
#line 489 "mode_util.m"
              return;
            }
#line 488 "mode_util.m"
          }
#line 485 "mode_util.m"
        else
#line 490 "mode_util.m"
          {
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__Y_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__Ys_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__A_25;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__As_26;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialX_27;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalX_28;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialY_29;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalY_30;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__V_31_31;
#line 490 "mode_util.m"
            MR_Word check_hlds__mode_util__V_32_32;

#line 491 "mode_util.m"
            {
#line 491 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_34_34, &check_hlds__mode_util__InitialX_27, &check_hlds__mode_util__FinalX_28);
            }
#line 492 "mode_util.m"
            {
#line 492 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Y_23, &check_hlds__mode_util__InitialY_29, &check_hlds__mode_util__FinalY_30);
            }
#line 493 "mode_util.m"
            {
#line 493 "mode_util.m"
              check_hlds__mode_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 0) = ((MR_Box) (check_hlds__mode_util__InitialX_27));
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 1) = ((MR_Box) (check_hlds__mode_util__InitialY_29));
#line 493 "mode_util.m"
            }
#line 493 "mode_util.m"
            {
#line 493 "mode_util.m"
              check_hlds__mode_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 0) = ((MR_Box) (check_hlds__mode_util__FinalX_28));
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 1) = ((MR_Box) (check_hlds__mode_util__FinalY_30));
#line 493 "mode_util.m"
            }
#line 493 "mode_util.m"
            {
#line 493 "mode_util.m"
              check_hlds__mode_util__A_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 0) = ((MR_Box) (check_hlds__mode_util__V_31_31));
#line 493 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 1) = ((MR_Box) (check_hlds__mode_util__V_32_32));
#line 493 "mode_util.m"
            }
#line 494 "mode_util.m"
            {
#line 494 "mode_util.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_33_33, check_hlds__mode_util__Ys_24, &check_hlds__mode_util__As_26);
            }
#line 490 "mode_util.m"
            {
#line 490 "mode_util.m"
              MR_Word base;
#line 490 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 490 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__A_25));
#line 490 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__As_26));
#line 490 "mode_util.m"
            }
#line 490 "mode_util.m"
          }
#line 485 "mode_util.m"
      }
#line 485 "mode_util.m"
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
#line 247 "mode_util.m"
  {
#line 247 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 247 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "mode_util.m"
    else
#line 248 "mode_util.m"
      {
#line 248 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 248 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 249 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 249 "mode_util.m"
        {
#line 249 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__V_10_10, &check_hlds__mode_util__Inst_8);
        }
#line 250 "mode_util.m"
        {
#line 250 "mode_util.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 248 "mode_util.m"
        {
#line 248 "mode_util.m"
          MR_Word base;
#line 248 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 248 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 248 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 248 "mode_util.m"
        }
#line 248 "mode_util.m"
      }
#line 247 "mode_util.m"
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
#line 242 "mode_util.m"
  {
#line 242 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 242 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "mode_util.m"
    else
#line 243 "mode_util.m"
      {
#line 243 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 243 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 244 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 244 "mode_util.m"
        {
#line 244 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__Inst_8, &check_hlds__mode_util__V_10_10);
        }
#line 245 "mode_util.m"
        {
#line 245 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 243 "mode_util.m"
        {
#line 243 "mode_util.m"
          MR_Word base;
#line 243 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 243 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 243 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 243 "mode_util.m"
        }
#line 243 "mode_util.m"
      }
#line 242 "mode_util.m"
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
#line 240 "mode_util.m"
  {
#line 240 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 240 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 240 "mode_util.m"
    {
#line 240 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__V_7_7, &check_hlds__mode_util__Inst_6);
    }
#line 240 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 240 "mode_util.m"
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
#line 237 "mode_util.m"
  {
#line 237 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 237 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 237 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 237 "mode_util.m"
    {
#line 237 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__Inst_6, &check_hlds__mode_util__V_7_7);
    }
#line 237 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 237 "mode_util.m"
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
#line 387 "mode_util.m"
  while (MR_TRUE)
#line 387 "mode_util.m"
    {
#line 387 "mode_util.m"
      /* tailcall optimized into a loop */
#line 387 "mode_util.m"
      {
#line 387 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 387 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputThings_10;

#line 387 "mode_util.m"
        if ((check_hlds__mode_util__HeadThings_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "mode_util.m"
            check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "mode_util.m"
          else
#line 405 "mode_util.m"
            {
#line 407 "mode_util.m"
              {
#line 407 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
              }
#line 405 "mode_util.m"
            }
#line 387 "mode_util.m"
        else
#line 387 "mode_util.m"
          {
#line 387 "mode_util.m"
            MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 1)));
#line 387 "mode_util.m"
            MR_Box check_hlds__mode_util__V_31_31 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 0));

#line 387 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "mode_util.m"
              {
#line 411 "mode_util.m"
                {
#line 411 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
                }
#line 409 "mode_util.m"
              }
#line 387 "mode_util.m"
            else
#line 388 "mode_util.m"
              {
#line 388 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 388 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 388 "mode_util.m"
                MR_Word check_hlds__mode_util__ThingType_15;
#line 388 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;
#line 390 "mode_util.m"
                MR_Box check_hlds__mode_util__conv0_ThingType_15;

#line 390 "mode_util.m"
                {
#line 390 "mode_util.m"
                  mercury__map__lookup_3_p_0(check_hlds__mode_util__TypeInfo_for_Thing_28, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__ThingTypes_9, check_hlds__mode_util__V_31_31, &check_hlds__mode_util__conv0_ThingType_15);
                }
#line 390 "mode_util.m"
                check_hlds__mode_util__ThingType_15 = ((MR_Word) check_hlds__mode_util__conv0_ThingType_15);
#line 304 "mode_util.m"
                {
#line 304 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__ThingType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 397 "mode_util.m"
#line 397 "mode_util.m"
                switch (check_hlds__mode_util__Top_16) {
#line 397 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 397 "mode_util.m"
                  case (MR_Integer) 0:
#line 397 "mode_util.m"
                  case (MR_Integer) 2:
#line 400 "mode_util.m"
                    {
#line 400 "mode_util.m"
                      /* direct tailcall eliminated */
#line 400 "mode_util.m"
                      {
#line 400 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadThings__tmp_copy_7 = check_hlds__mode_util__V_30_30;
#line 400 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 400 "mode_util.m"
                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 400 "mode_util.m"
                        check_hlds__mode_util__HeadThings_7 = check_hlds__mode_util__HeadThings__tmp_copy_7;
#line 400 "mode_util.m"
                      }
#line 400 "mode_util.m"
                      continue;
#line 400 "mode_util.m"
                    }
#line 397 "mode_util.m"
                    break;
#line 397 "mode_util.m"
                  case (MR_Integer) 1:
#line 393 "mode_util.m"
                    {
#line 393 "mode_util.m"
                      MR_Word check_hlds__mode_util__OutputThings1_17;

#line 394 "mode_util.m"
                      {
#line 394 "mode_util.m"
                        check_hlds__mode_util__OutputThings1_17 = check_hlds__mode_util__select_output_things_4_f_0(check_hlds__mode_util__TypeInfo_for_Thing_28, check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Modes_14, check_hlds__mode_util__ThingTypes_9);
                      }
#line 396 "mode_util.m"
                      {
#line 396 "mode_util.m"
                        check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 0) = check_hlds__mode_util__V_31_31;
#line 396 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputThings1_17));
#line 396 "mode_util.m"
                      }
#line 393 "mode_util.m"
                    }
#line 397 "mode_util.m"
                    break;
#line 397 "mode_util.m"
                }
#line 388 "mode_util.m"
              }
#line 387 "mode_util.m"
          }
#line 387 "mode_util.m"
        return check_hlds__mode_util__OutputThings_10;
#line 387 "mode_util.m"
      }
#line 387 "mode_util.m"
      break;
#line 387 "mode_util.m"
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
#line 352 "mode_util.m"
  while (MR_TRUE)
#line 352 "mode_util.m"
    {
#line 352 "mode_util.m"
      /* tailcall optimized into a loop */
#line 352 "mode_util.m"
      {
#line 352 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 352 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputVars_10;

#line 352 "mode_util.m"
        if ((check_hlds__mode_util__HeadVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "mode_util.m"
            check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "mode_util.m"
          else
#line 372 "mode_util.m"
            {
#line 374 "mode_util.m"
              {
#line 374 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
              }
#line 372 "mode_util.m"
            }
#line 352 "mode_util.m"
        else
#line 352 "mode_util.m"
          {
#line 352 "mode_util.m"
            MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 1)));
#line 352 "mode_util.m"
            MR_Word check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 0)));

#line 352 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "mode_util.m"
              {
#line 378 "mode_util.m"
                {
#line 378 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
                }
#line 376 "mode_util.m"
              }
#line 352 "mode_util.m"
            else
#line 356 "mode_util.m"
              {
#line 356 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 356 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 356 "mode_util.m"
                MR_Word check_hlds__mode_util__VarType_15;
#line 356 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;

#line 358 "mode_util.m"
                {
#line 358 "mode_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_9, check_hlds__mode_util__V_29_29, &check_hlds__mode_util__VarType_15);
                }
#line 304 "mode_util.m"
                {
#line 304 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__VarType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 365 "mode_util.m"
#line 365 "mode_util.m"
                switch (check_hlds__mode_util__Top_16) {
#line 365 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 365 "mode_util.m"
                  case (MR_Integer) 0:
#line 365 "mode_util.m"
                  case (MR_Integer) 2:
#line 368 "mode_util.m"
                    {
#line 368 "mode_util.m"
                      /* direct tailcall eliminated */
#line 368 "mode_util.m"
                      {
#line 368 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadVars__tmp_copy_7 = check_hlds__mode_util__V_28_28;
#line 368 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 368 "mode_util.m"
                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 368 "mode_util.m"
                        check_hlds__mode_util__HeadVars_7 = check_hlds__mode_util__HeadVars__tmp_copy_7;
#line 368 "mode_util.m"
                      }
#line 368 "mode_util.m"
                      continue;
#line 368 "mode_util.m"
                    }
#line 365 "mode_util.m"
                    break;
#line 365 "mode_util.m"
                  case (MR_Integer) 1:
#line 361 "mode_util.m"
                    {
#line 361 "mode_util.m"
                      MR_Word check_hlds__mode_util__OutputVars1_17;

#line 362 "mode_util.m"
                      {
#line 362 "mode_util.m"
                        check_hlds__mode_util__OutputVars1_17 = check_hlds__mode_util__select_output_vars_4_f_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Modes_14, check_hlds__mode_util__VarTypes_9);
                      }
#line 364 "mode_util.m"
                      {
#line 364 "mode_util.m"
                        check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 0) = ((MR_Box) (check_hlds__mode_util__V_29_29));
#line 364 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputVars1_17));
#line 364 "mode_util.m"
                      }
#line 361 "mode_util.m"
                    }
#line 365 "mode_util.m"
                    break;
#line 365 "mode_util.m"
                }
#line 356 "mode_util.m"
              }
#line 352 "mode_util.m"
          }
#line 352 "mode_util.m"
        return check_hlds__mode_util__OutputVars_10;
#line 352 "mode_util.m"
      }
#line 352 "mode_util.m"
      break;
#line 352 "mode_util.m"
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
#line 293 "mode_util.m"
  {
#line 293 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 293 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "mode_util.m"
      else
#line 294 "mode_util.m"
        {
#line 295 "mode_util.m"
          {
#line 295 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", (MR_String) "length mismatch");
#line 295 "mode_util.m"
            return;
          }
#line 294 "mode_util.m"
        }
#line 293 "mode_util.m"
    else
#line 293 "mode_util.m"
      {
#line 293 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 293 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "mode_util.m"
          {
#line 297 "mode_util.m"
            {
#line 297 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", (MR_String) "length mismatch");
#line 297 "mode_util.m"
              return;
            }
#line 296 "mode_util.m"
          }
#line 293 "mode_util.m"
        else
#line 299 "mode_util.m"
          {
#line 299 "mode_util.m"
            MR_Word check_hlds__mode_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "mode_util.m"
            MR_Word check_hlds__mode_util__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgMode_25;
#line 299 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes_26;

#line 304 "mode_util.m"
            {
#line 304 "mode_util.m"
              check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Type_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__ArgMode_25);
            }
#line 301 "mode_util.m"
            {
#line 301 "mode_util.m"
              check_hlds__mode_util__modes_to_arg_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Types_24, &check_hlds__mode_util__ArgModes_26);
            }
#line 299 "mode_util.m"
            {
#line 299 "mode_util.m"
              MR_Word base;
#line 299 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 299 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgMode_25));
#line 299 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgModes_26));
#line 299 "mode_util.m"
            }
#line 299 "mode_util.m"
          }
#line 293 "mode_util.m"
      }
#line 293 "mode_util.m"
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
#line 303 "mode_util.m"
  {
#line 303 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 304 "mode_util.m"
    {
#line 304 "mode_util.m"
      check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, check_hlds__mode_util__Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__ArgMode_8);
#line 304 "mode_util.m"
      return;
    }
#line 303 "mode_util.m"
  }
#line 84 "mode_util.m"
}

#line 74 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_undefined_2_p_0(
#line 74 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 74 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 74 "mode_util.m"
{
#line 289 "mode_util.m"
  {
#line 289 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 289 "mode_util.m"
    MR_Word check_hlds__mode_util__V_5_5;
#line 289 "mode_util.m"
    MR_Word check_hlds__mode_util__V_6_6;

#line 289 "mode_util.m"
    {
#line 289 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__V_5_5, &check_hlds__mode_util__V_6_6);
    }
#line 289 "mode_util.m"
    check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 289 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 289 "mode_util.m"
  }
#line 74 "mode_util.m"
}

#line 70 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_unused_2_p_0(
#line 70 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 70 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 70 "mode_util.m"
{
#line 283 "mode_util.m"
  {
#line 283 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 283 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 283 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 284 "mode_util.m"
    {
#line 284 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 285 "mode_util.m"
    {
#line 285 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 283 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 286 "mode_util.m"
      {
#line 286 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 283 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 283 "mode_util.m"
  }
#line 70 "mode_util.m"
}

#line 65 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_output_2_p_0(
#line 65 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 65 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 65 "mode_util.m"
{
#line 276 "mode_util.m"
  {
#line 276 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 276 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 276 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 277 "mode_util.m"
    {
#line 277 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 278 "mode_util.m"
    {
#line 278 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 276 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 279 "mode_util.m"
      {
#line 279 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 276 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 276 "mode_util.m"
  }
#line 65 "mode_util.m"
}

#line 59 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_output_2_p_0(
#line 59 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 59 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 59 "mode_util.m"
{
#line 268 "mode_util.m"
  {
#line 268 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 268 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 268 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 269 "mode_util.m"
    {
#line 269 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 270 "mode_util.m"
    {
#line 270 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 268 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 271 "mode_util.m"
      {
#line 271 "mode_util.m"
        return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 268 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 268 "mode_util.m"
  }
#line 59 "mode_util.m"
}

#line 53 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_input_2_p_0(
#line 53 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 53 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 53 "mode_util.m"
{
#line 262 "mode_util.m"
  {
#line 262 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 262 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 263 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 263 "mode_util.m"
    {
#line 263 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 264 "mode_util.m"
    {
#line 264 "mode_util.m"
      return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 262 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 262 "mode_util.m"
  }
#line 53 "mode_util.m"
}

#line 48 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_input_2_p_0(
#line 48 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 48 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 48 "mode_util.m"
{
#line 256 "mode_util.m"
  {
#line 256 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 256 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 257 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 257 "mode_util.m"
    {
#line 257 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 258 "mode_util.m"
    {
#line 258 "mode_util.m"
      return check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 256 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 256 "mode_util.m"
  }
#line 48 "mode_util.m"
}

#line 42 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
#line 42 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 42 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 42 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 42 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 42 "mode_util.m"
{
#line 1165 "mode_util.m"
  while (MR_TRUE)
#line 1165 "mode_util.m"
    {
#line 1165 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1165 "mode_util.m"
      {
#line 1165 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1165 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1165 "mode_util.m"
          {
#line 1165 "mode_util.m"
            *check_hlds__mode_util__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1165 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1165 "mode_util.m"
            check_hlds__mode_util__succeeded = MR_TRUE;
#line 1165 "mode_util.m"
          }
#line 1165 "mode_util.m"
        else
#line 1168 "mode_util.m"
          {
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1168 "mode_util.m"
            MR_Integer check_hlds__mode_util__Arity_13;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_14;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefns_15;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode_17;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Params_21;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefn_22;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_25;
#line 1168 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_26;
#line 1179 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode0_16;
#line 1177 "mode_util.m"
            MR_Word check_hlds__mode_util__V_27_27;
#line 1177 "mode_util.m"
            MR_Box check_hlds__mode_util__conv0_HLDS_Mode0_16;
#line 1184 "mode_util.m"
            MR_Word check_hlds__mode_util___VarSet_20;
#line 1184 "mode_util.m"
            MR_Word check_hlds__mode_util___Context_23;
#line 1184 "mode_util.m"
            MR_Word check_hlds__mode_util___Status_24;

#line 1169 "mode_util.m"
            {
#line 1169 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Arity_13);
            }
#line 1170 "mode_util.m"
            {
#line 1170 "mode_util.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_util__HeadVar__1_1, &check_hlds__mode_util__Modes_14);
            }
#line 1171 "mode_util.m"
            {
#line 1171 "mode_util.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(check_hlds__mode_util__Modes_14, &check_hlds__mode_util__ModeDefns_15);
            }
#line 1177 "mode_util.m"
            {
#line 1177 "mode_util.m"
              check_hlds__mode_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (check_hlds__mode_util__Name_9));
#line 1177 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1177 "mode_util.m"
            }
#line 1177 "mode_util.m"
            {
#line 1177 "mode_util.m"
              check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_27_27)), &check_hlds__mode_util__conv0_HLDS_Mode0_16);
            }
#line 1177 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1177 "mode_util.m"
              {
#line 1177 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode0_16 = ((MR_Word) check_hlds__mode_util__conv0_HLDS_Mode0_16);
#line 1177 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1177 "mode_util.m"
              }
#line 1179 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1178 "mode_util.m"
              {
#line 1178 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode_17 = check_hlds__mode_util__HLDS_Mode0_16;
#line 1178 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1178 "mode_util.m"
              }
#line 1179 "mode_util.m"
            else
#line 1180 "mode_util.m"
              {
#line 1180 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_33_33;
#line 1180 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_34_34;
#line 1180 "mode_util.m"
                MR_String check_hlds__mode_util__String_18;
#line 1180 "mode_util.m"
                MR_Word check_hlds__mode_util__BuiltinName_19;
#line 1180 "mode_util.m"
                MR_Word check_hlds__mode_util__V_28_28;
#line 1180 "mode_util.m"
                MR_Word check_hlds__mode_util__V_29_29;
#line 1182 "mode_util.m"
                MR_Box check_hlds__mode_util__conv1_HLDS_Mode_17;

#line 1180 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__Name_9)) == (MR_mktag((MR_Integer) 0)));
#line 1180 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1180 "mode_util.m"
                  {
#line 1180 "mode_util.m"
                    check_hlds__mode_util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Name_9, (MR_Integer) 0)));
#line 1181 "mode_util.m"
                    {
#line 1181 "mode_util.m"
                      check_hlds__mode_util__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 10174 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0;
#line 10176 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
#line 1181 "mode_util.m"
                    {
#line 1181 "mode_util.m"
                      check_hlds__mode_util__BuiltinName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 0) = ((MR_Box) (check_hlds__mode_util__V_28_28));
#line 1181 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 1) = ((MR_Box) (check_hlds__mode_util__String_18));
#line 1181 "mode_util.m"
                    }
#line 1182 "mode_util.m"
                    {
#line 1182 "mode_util.m"
                      check_hlds__mode_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 0) = ((MR_Box) (check_hlds__mode_util__BuiltinName_19));
#line 1182 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1182 "mode_util.m"
                    }
#line 1182 "mode_util.m"
                    {
#line 1182 "mode_util.m"
                      check_hlds__mode_util__succeeded = mercury__map__search_3_p_0(check_hlds__mode_util__TypeCtorInfo_33_33, check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_29_29)), &check_hlds__mode_util__conv1_HLDS_Mode_17);
                    }
#line 1182 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 1182 "mode_util.m"
                      {
#line 1182 "mode_util.m"
                        check_hlds__mode_util__HLDS_Mode_17 = ((MR_Word) check_hlds__mode_util__conv1_HLDS_Mode_17);
#line 1182 "mode_util.m"
                        check_hlds__mode_util__succeeded = MR_TRUE;
#line 1182 "mode_util.m"
                      }
#line 1180 "mode_util.m"
                  }
#line 1180 "mode_util.m"
              }
#line 1168 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1168 "mode_util.m"
              {
#line 1184 "mode_util.m"
                check_hlds__mode_util___VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 0)));
#line 1184 "mode_util.m"
                check_hlds__mode_util__Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 1)));
#line 1184 "mode_util.m"
                check_hlds__mode_util__ModeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 2)));
#line 1184 "mode_util.m"
                check_hlds__mode_util___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 3)));
#line 1184 "mode_util.m"
                check_hlds__mode_util___Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 4)));
#line 1185 "mode_util.m"
                check_hlds__mode_util__Mode0_25 = (MR_Word) check_hlds__mode_util__ModeDefn_22;
#line 1186 "mode_util.m"
                {
#line 1186 "mode_util.m"
                  parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(check_hlds__mode_util__Mode0_25, check_hlds__mode_util__Params_21, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Mode_26);
                }
#line 1187 "mode_util.m"
                /* direct tailcall eliminated */
#line 1187 "mode_util.m"
                {
#line 1187 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__2__tmp_copy_2 = check_hlds__mode_util__Mode_26;

#line 1187 "mode_util.m"
                  check_hlds__mode_util__HeadVar__2_2 = check_hlds__mode_util__HeadVar__2__tmp_copy_2;
#line 1187 "mode_util.m"
                }
#line 1187 "mode_util.m"
                continue;
#line 1168 "mode_util.m"
              }
#line 1168 "mode_util.m"
          }
#line 1165 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 1165 "mode_util.m"
      }
#line 1165 "mode_util.m"
      break;
#line 1165 "mode_util.m"
    }
#line 42 "mode_util.m"
}

#line 37 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
#line 37 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 37 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_6,
#line 37 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstA_7,
#line 37 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstB_8)
#line 37 "mode_util.m"
{
#line 1193 "mode_util.m"
  {
#line 1193 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1193 "mode_util.m"
    MR_Word check_hlds__mode_util__InstAPrime_9;
#line 1193 "mode_util.m"
    MR_Word check_hlds__mode_util__InstBPrime_10;

#line 1190 "mode_util.m"
    {
#line 1190 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__InstAPrime_9, &check_hlds__mode_util__InstBPrime_10);
    }
#line 1193 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1191 "mode_util.m"
      {
#line 1191 "mode_util.m"
        *check_hlds__mode_util__InstA_7 = check_hlds__mode_util__InstAPrime_9;
#line 1192 "mode_util.m"
        *check_hlds__mode_util__InstB_8 = check_hlds__mode_util__InstBPrime_10;
#line 1191 "mode_util.m"
      }
#line 1193 "mode_util.m"
    else
#line 1194 "mode_util.m"
      {
#line 1194 "mode_util.m"
        {
#line 1194 "mode_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
#line 1194 "mode_util.m"
          return;
        }
#line 1194 "mode_util.m"
      }
#line 1193 "mode_util.m"
  }
#line 37 "mode_util.m"
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
