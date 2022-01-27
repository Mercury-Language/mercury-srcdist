/*
** Automatically generated from `mode_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 150 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 153 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0;

#line 159 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1;

#line 162 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2];

#line 165 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2];

#line 168 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2];

#line 171 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 174 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2];

#line 177 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2];

#line 180 "check_hlds.mode_util.c"
static const MR_DuFunctorDesc check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0;

#line 183 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1];

#line 186 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1];

#line 189 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1];

#line 192 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1];

#line 195 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 198 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 200 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 203 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 206 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 208 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 210 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 213 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 216 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 218 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2);

#line 221 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 224 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 226 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 228 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3);

#line 1275 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1275 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1275 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11);

#line 1539 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10);

#line 1503 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9);

#line 943 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 943 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6);

#line 1713 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1713__1_2_p_0(
#line 1713 "mode_util.m"
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_65,
#line 1713 "mode_util.m"
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_66);

#line 1265 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1265 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3);

#line 1265 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2);

#line 1754 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1754 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1754 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1754 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7);

#line 1713 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1713 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1713 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1713 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2);

#line 1666 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57);

#line 1637 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1637 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1637 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);

#line 1607 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1607 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1607 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8);

#line 1563 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1563 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35);

#line 1520 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24);

#line 1484 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22);

#line 1466 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8);

#line 1427 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1427 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1427 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1418 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1418 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1418 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1);

#line 1284 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106);

#line 1228 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40);

#line 1139 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1139 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1139 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1139 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6);

#line 1131 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
#line 1131 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1131 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_2);

#line 1118 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
#line 1118 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1118 "mode_util.m"
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
#line 1118 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1118 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4);

#line 1077 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1077 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7);

#line 1054 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 1054 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8);

#line 957 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 957 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 957 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 957 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3);

#line 916 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 916 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 916 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 916 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6);

#line 801 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 801 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 662 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 662 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 659 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 659 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10);

#line 625 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 625 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8);

#line 466 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
#line 466 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 466 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 466 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7);

#line 423 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 423 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8);

#line 308 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 308 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10);

#line 969 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
#line 969 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 969 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 969 "mode_util.m"
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
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



#line 863 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 871 "check_hlds.mode_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 879 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
  (MR_String) "recompute_atomic_instmap_deltas",
  (MR_Integer) 0
};

#line 885 "check_hlds.mode_util.c"
static const MR_EnumFunctorDesc check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
  (MR_String) "do_not_recompute_atomic_instmap_deltas",
  (MR_Integer) 1
};

#line 891 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

#line 897 "check_hlds.mode_util.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
  &check_hlds__mode_util__check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

#line 903 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 909 "check_hlds.mode_util.c"
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

#line 926 "check_hlds.mode_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 934 "check_hlds.mode_util.c"
static const MR_PseudoTypeInfo check_hlds__mode_util__check_hlds__mode_util__field_types_recompute_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
};

#line 940 "check_hlds.mode_util.c"
static const MR_ConstString check_hlds__mode_util__check_hlds__mode_util__field_names_recompute_info_0_0[2] = {
  (MR_String) "ri_module_info",
  (MR_String) "ri_inst_varset"
};

#line 946 "check_hlds.mode_util.c"
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

#line 961 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 966 "check_hlds.mode_util.c"
static const MR_DuPtagLayout check_hlds__mode_util__check_hlds__mode_util__du_ptag_ordered_recompute_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_util__check_hlds__mode_util__du_stag_ordered_recompute_info_0_0
  }
};

#line 975 "check_hlds.mode_util.c"
static const MR_DuFunctorDescPtr check_hlds__mode_util__check_hlds__mode_util__du_name_ordered_recompute_info_0[1] = {
  &check_hlds__mode_util__check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

#line 980 "check_hlds.mode_util.c"
static const MR_Integer check_hlds__mode_util__check_hlds__mode_util__functor_number_map_recompute_info_0[1] = {
  (MR_Integer) 0
};

#line 985 "check_hlds.mode_util.c"
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

#line 1002 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0_10001(
#line 1005 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1007 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1009 "check_hlds.mode_util.c"
{
#line 1011 "check_hlds.mode_util.c"
  {
#line 1013 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1016 "check_hlds.mode_util.c"
    {
#line 1018 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1021 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1023 "check_hlds.mode_util.c"
  }
#line 1025 "check_hlds.mode_util.c"
}

#line 1028 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0_10001(
#line 1031 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1033 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1035 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1037 "check_hlds.mode_util.c"
{
#line 1039 "check_hlds.mode_util.c"
  {
#line 1041 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1044 "check_hlds.mode_util.c"
    {
#line 1046 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1049 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1051 "check_hlds.mode_util.c"
  }
#line 1053 "check_hlds.mode_util.c"
}

#line 1056 "check_hlds.mode_util.c"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0_10001(
#line 1059 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1061 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2)
#line 1063 "check_hlds.mode_util.c"
{
#line 1065 "check_hlds.mode_util.c"
  {
#line 1067 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded;

#line 1070 "check_hlds.mode_util.c"
    {
#line 1072 "check_hlds.mode_util.c"
      check_hlds__mode_util__succeeded = check_hlds__mode_util____Unify____recompute_info_0_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), ((MR_Word) check_hlds__mode_util__wrapper_arg_2));
    }
#line 1075 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1077 "check_hlds.mode_util.c"
  }
#line 1079 "check_hlds.mode_util.c"
}

#line 1082 "check_hlds.mode_util.c"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0_10001(
#line 1085 "check_hlds.mode_util.c"
  MR_Box * check_hlds__mode_util__wrapper_arg_1,
#line 1087 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_2,
#line 1089 "check_hlds.mode_util.c"
  MR_Box check_hlds__mode_util__wrapper_arg_3)
#line 1091 "check_hlds.mode_util.c"
{
#line 1093 "check_hlds.mode_util.c"
  {
#line 1095 "check_hlds.mode_util.c"
    MR_Word check_hlds__mode_util__conv0_HeadVar__1_1;

#line 1098 "check_hlds.mode_util.c"
    {
#line 1100 "check_hlds.mode_util.c"
      check_hlds__mode_util____Compare____recompute_info_0_0(&check_hlds__mode_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_util__wrapper_arg_2), ((MR_Word) check_hlds__mode_util__wrapper_arg_3));
    }
#line 1103 "check_hlds.mode_util.c"
    *check_hlds__mode_util__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__1_1));
#line 1105 "check_hlds.mode_util.c"
  }
#line 1107 "check_hlds.mode_util.c"
}

#line 1275 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_17_17,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_18_18,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_19_19,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_20_20,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__V_21_21,
#line 1275 "mode_util.m"
  MR_Word * check_hlds__mode_util__R_6,
#line 1275 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_10,
#line 1275 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_11)
#line 1275 "mode_util.m"
{
#line 1279 "mode_util.m"
  {
#line 1279 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1279 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1279 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo_9;
#line 1280 "mode_util.m"
    MR_Word check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1282 "mode_util.m"
    MR_Word check_hlds__mode_util__V_15_15;
#line 1282 "mode_util.m"
    MR_Word check_hlds__mode_util__V_14_14;

#line 1281 "mode_util.m"
    {
#line 1281 "mode_util.m"
      hlds__instmap__merge_instmap_delta_8_p_0(check_hlds__mode_util__V_17_17, check_hlds__mode_util__V_18_18, check_hlds__mode_util__V_19_19, check_hlds__mode_util__V_20_20, check_hlds__mode_util__V_21_21, check_hlds__mode_util__R_6, check_hlds__mode_util__ModuleInfo0_8, &check_hlds__mode_util__ModuleInfo_9);
    }
#line 1282 "mode_util.m"
    check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 0)));
#line 1282 "mode_util.m"
    check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_10, (MR_Integer) 1)));
#line 1282 "mode_util.m"
    {
#line 1282 "mode_util.m"
      MR_Word base;
#line 1282 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "mode_util.m"
      *check_hlds__mode_util__STATE_VARIABLE_RI_11 = base;
#line 1282 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_9));
#line 1282 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_15_15));
#line 1282 "mode_util.m"
    }
#line 1279 "mode_util.m"
  }
#line 1275 "mode_util.m"
}

#line 1539 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__8_8,
#line 1539 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_9,
#line 1539 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_10)
#line 1539 "mode_util.m"
{
#line 1544 "mode_util.m"
  {
#line 1544 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1544 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1544 "mode_util.m"
      {
#line 1544 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1545 "mode_util.m"
        *check_hlds__mode_util__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1545 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_10 = check_hlds__mode_util__STATE_VARIABLE_RI_0_9;
#line 1544 "mode_util.m"
      }
#line 1544 "mode_util.m"
    else
#line 1548 "mode_util.m"
      {
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Case_23;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Cases_24;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_28;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_29;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 0)));
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 1)));
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case0_21, (MR_Integer) 2)));
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Type_34;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_35;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_36;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_37;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_41_41;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_42_42;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_44_44;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_58;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_59;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_70;
#line 1548 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_71;
#line 1280 "mode_util.m"
        MR_Word check_hlds__mode_util__V_61_61;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_63_63;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_62_62;
#line 1280 "mode_util.m"
        MR_Word check_hlds__mode_util__V_73_73;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_75_75;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_74_74;

#line 1550 "mode_util.m"
        {
#line 1550 "mode_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__2_2, &check_hlds__mode_util__Type_34);
        }
#line 1280 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1280 "mode_util.m"
        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1281 "mode_util.m"
        {
#line 1281 "mode_util.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMap1_35, check_hlds__mode_util__ModuleInfo0_58, &check_hlds__mode_util__ModuleInfo_59);
        }
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 0)));
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_9, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        {
#line 1282 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_59));
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_41_41, 1) = ((MR_Box) (check_hlds__mode_util__V_63_63));
#line 1282 "mode_util.m"
        }
#line 1553 "mode_util.m"
        {
#line 1553 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_33, &check_hlds__mode_util__Goal_36, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__InstMap1_35, &check_hlds__mode_util__InstMapDelta0_37, check_hlds__mode_util__STATE_VARIABLE_RI_41_41, &check_hlds__mode_util__STATE_VARIABLE_RI_42_42);
        }
#line 1280 "mode_util.m"
        check_hlds__mode_util__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1280 "mode_util.m"
        check_hlds__mode_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1281 "mode_util.m"
        {
#line 1281 "mode_util.m"
          hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Type_34, check_hlds__mode_util__MainConsId_31, check_hlds__mode_util__OtherConsIds_32, check_hlds__mode_util__HeadVar__6_6, check_hlds__mode_util__InstMapDelta0_37, &check_hlds__mode_util__InstMapDelta_28, check_hlds__mode_util__ModuleInfo0_70, &check_hlds__mode_util__ModuleInfo_71);
        }
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 0)));
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_42_42, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        {
#line 1282 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_71));
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (check_hlds__mode_util__V_75_75));
#line 1282 "mode_util.m"
        }
#line 1557 "mode_util.m"
        {
#line 1557 "mode_util.m"
          check_hlds__mode_util__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1557 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 0) = ((MR_Box) (check_hlds__mode_util__MainConsId_31));
#line 1557 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 1) = ((MR_Box) (check_hlds__mode_util__OtherConsIds_32));
#line 1557 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__Case_23, 2) = ((MR_Box) (check_hlds__mode_util__Goal_36));
#line 1557 "mode_util.m"
        }
#line 1558 "mode_util.m"
        {
#line 1558 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__HeadVar__2_2, check_hlds__mode_util__Cases0_22, &check_hlds__mode_util__Cases_24, check_hlds__mode_util__HeadVar__5_5, check_hlds__mode_util__HeadVar__6_6, &check_hlds__mode_util__InstMapDeltas_29, check_hlds__mode_util__STATE_VARIABLE_RI_44_44, check_hlds__mode_util__STATE_VARIABLE_RI_10);
        }
#line 1547 "mode_util.m"
        {
#line 1547 "mode_util.m"
          MR_Word base;
#line 1547 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1547 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Case_23));
#line 1547 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Cases_24));
#line 1547 "mode_util.m"
        }
#line 1548 "mode_util.m"
        {
#line 1548 "mode_util.m"
          MR_Word base;
#line 1548 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "mode_util.m"
          *check_hlds__mode_util__HeadVar__8_8 = base;
#line 1548 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_28));
#line 1548 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_29));
#line 1548 "mode_util.m"
        }
#line 1548 "mode_util.m"
      }
#line 1544 "mode_util.m"
  }
#line 1539 "mode_util.m"
}

#line 1503 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__5_5,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7,
#line 1503 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_8,
#line 1503 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_9)
#line 1503 "mode_util.m"
{
#line 1508 "mode_util.m"
  {
#line 1508 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1508 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "mode_util.m"
      {
#line 1508 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "mode_util.m"
        *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_9 = check_hlds__mode_util__STATE_VARIABLE_RI_0_8;
#line 1508 "mode_util.m"
      }
#line 1508 "mode_util.m"
    else
#line 1512 "mode_util.m"
      {
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_20;
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_21;
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_25;
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDeltas_26;
#line 1512 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1513 "mode_util.m"
        {
#line 1513 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goal0_18, &check_hlds__mode_util__Goal_20, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDelta_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_8, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1515 "mode_util.m"
        {
#line 1515 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Goals0_19, &check_hlds__mode_util__Goals_21, check_hlds__mode_util__HeadVar__4_4, check_hlds__mode_util__HeadVar__5_5, &check_hlds__mode_util__InstMapDeltas_26, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_9);
        }
#line 1511 "mode_util.m"
        {
#line 1511 "mode_util.m"
          MR_Word base;
#line 1511 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1511 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_20));
#line 1511 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_21));
#line 1511 "mode_util.m"
        }
#line 1512 "mode_util.m"
        {
#line 1512 "mode_util.m"
          MR_Word base;
#line 1512 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1512 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__InstMapDelta_25));
#line 1512 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__InstMapDeltas_26));
#line 1512 "mode_util.m"
        }
#line 1512 "mode_util.m"
      }
#line 1508 "mode_util.m"
  }
#line 1503 "mode_util.m"
}

#line 943 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 943 "mode_util.m"
  MR_Word check_hlds__mode_util__ArgInst_5,
#line 943 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__6_6)
#line 943 "mode_util.m"
{
#line 947 "mode_util.m"
  {
#line 947 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 947 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "mode_util.m"
      *check_hlds__mode_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "mode_util.m"
    else
#line 949 "mode_util.m"
      {
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_17;
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_18;
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 2)));
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 3)));
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_25;
#line 949 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_26;
#line 949 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27;
#line 950 "mode_util.m"
        MR_Word check_hlds__mode_util___ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 0)));
#line 950 "mode_util.m"
        MR_Word check_hlds__mode_util___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 1)));
#line 950 "mode_util.m"
        MR_Integer check_hlds__mode_util___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 4)));
#line 950 "mode_util.m"
        MR_Word check_hlds__mode_util___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_14, (MR_Integer) 5)));

#line 951 "mode_util.m"
        {
#line 951 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_22, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__Insts_25);
        }
#line 952 "mode_util.m"
        {
#line 952 "mode_util.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Insts_25, &check_hlds__mode_util__Arity_26);
        }
#line 953 "mode_util.m"
        {
#line 953 "mode_util.m"
          check_hlds__mode_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Name_21));
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 2) = ((MR_Box) (check_hlds__mode_util__Arity_26));
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_27_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 953 "mode_util.m"
        }
#line 953 "mode_util.m"
        {
#line 953 "mode_util.m"
          check_hlds__mode_util__BoundInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 0) = ((MR_Box) (check_hlds__mode_util__V_27_27));
#line 953 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_17, 1) = ((MR_Box) (check_hlds__mode_util__Insts_25));
#line 953 "mode_util.m"
        }
#line 954 "mode_util.m"
        {
#line 954 "mode_util.m"
          check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__Ctors_15, check_hlds__mode_util__ArgInst_5, &check_hlds__mode_util__BoundInsts_18);
        }
#line 949 "mode_util.m"
        {
#line 949 "mode_util.m"
          MR_Word base;
#line 949 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "mode_util.m"
          *check_hlds__mode_util__HeadVar__6_6 = base;
#line 949 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_17));
#line 949 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_18));
#line 949 "mode_util.m"
        }
#line 949 "mode_util.m"
      }
#line 947 "mode_util.m"
  }
#line 943 "mode_util.m"
}

#line 164 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 164 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 164 "mode_util.m"
{
#line 939 "mode_util.m"
  {
#line 939 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 939 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 941 "mode_util.m"
    {
#line 941 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 941 "mode_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "mode_util.m"
    }
#line 940 "mode_util.m"
    {
#line 940 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
    }
#line 939 "mode_util.m"
  }
#line 164 "mode_util.m"
}

#line 156 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 156 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 156 "mode_util.m"
{
#line 934 "mode_util.m"
  {
#line 934 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 934 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;

#line 936 "mode_util.m"
    {
#line 936 "mode_util.m"
      check_hlds__mode_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 936 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 936 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_7));
#line 936 "mode_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_11_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "mode_util.m"
    }
#line 935 "mode_util.m"
    {
#line 935 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__V_11_11, check_hlds__mode_util__BoundInsts_10);
    }
#line 934 "mode_util.m"
  }
#line 156 "mode_util.m"
}

#line 1713 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1713__1_2_p_0(
#line 1713 "mode_util.m"
  MR_Word check_hlds__mode_util__LambdaHeadVar__1_65,
#line 1713 "mode_util.m"
  MR_Word * check_hlds__mode_util__LambdaHeadVar__2_66)
#line 1713 "mode_util.m"
{
#line 1713 "mode_util.m"
  {
#line 1713 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1713 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_35;
#line 1713 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_37;
#line 1713 "mode_util.m"
    MR_Word check_hlds__mode_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_65, (MR_Integer) 0)));
#line 1713 "mode_util.m"
    MR_Word check_hlds__mode_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__LambdaHeadVar__1_65, (MR_Integer) 1)));
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 0)));
#line 1715 "mode_util.m"
    MR_Word check_hlds__mode_util__V_36_36;

#line 1715 "mode_util.m"
    check_hlds__mode_util__Inst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_67_67, (MR_Integer) 1)));
#line 1715 "mode_util.m"
    check_hlds__mode_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 0)));
#line 1715 "mode_util.m"
    check_hlds__mode_util__Inst_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_68_68, (MR_Integer) 1)));
#line 1716 "mode_util.m"
    {
#line 1716 "mode_util.m"
      MR_Word base;
#line 1716 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1716 "mode_util.m"
      *check_hlds__mode_util__LambdaHeadVar__2_66 = base;
#line 1716 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst0_35));
#line 1716 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__Inst_37));
#line 1716 "mode_util.m"
    }
#line 1713 "mode_util.m"
  }
#line 1713 "mode_util.m"
}

#line 1265 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util____Compare____recompute_info_0_0(
#line 1265 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3)
#line 1265 "mode_util.m"
{
#line 1265 "mode_util.m"
  {
#line 1265 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1265 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_9 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
#line 1265 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_10 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

#line 1265 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_9 == check_hlds__mode_util__CastY_10);
#line 1265 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1751 "check_hlds.mode_util.c"
      *check_hlds__mode_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1265 "mode_util.m"
    else
#line 1265 "mode_util.m"
      {
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_8_8;

#line 1265 "mode_util.m"
        {
#line 1265 "mode_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_util__V_8_8, check_hlds__mode_util__V_4_4, check_hlds__mode_util__V_6_6);
        }
#line 1773 "check_hlds.mode_util.c"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_8_8 == (MR_Integer) 0);
#line 1265 "mode_util.m"
        check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1265 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1265 "mode_util.m"
          *check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__V_8_8;
#line 1265 "mode_util.m"
        else
#line 1265 "mode_util.m"
          {
#line 1265 "mode_util.m"
            {
#line 1265 "mode_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[3], check_hlds__mode_util__HeadVar__1_1, ((MR_Box) (check_hlds__mode_util__V_5_5)), ((MR_Box) (check_hlds__mode_util__V_7_7)));
            }
#line 1265 "mode_util.m"
          }
#line 1265 "mode_util.m"
      }
#line 1265 "mode_util.m"
  }
#line 1265 "mode_util.m"
}

#line 1265 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_info_0_0(
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1265 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2)
#line 1265 "mode_util.m"
{
#line 1265 "mode_util.m"
  {
#line 1265 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1265 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastX_7 = (MR_Integer) check_hlds__mode_util__HeadVar__1_1;
#line 1265 "mode_util.m"
    MR_Integer check_hlds__mode_util__CastY_8 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;

#line 1265 "mode_util.m"
    check_hlds__mode_util__succeeded = (check_hlds__mode_util__CastX_7 == check_hlds__mode_util__CastY_8);
#line 1265 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1265 "mode_util.m"
      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1265 "mode_util.m"
    else
#line 1265 "mode_util.m"
      {
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeInfo_10_10;
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1265 "mode_util.m"
        MR_Word check_hlds__mode_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));

#line 1838 "check_hlds.mode_util.c"
        {
#line 1840 "check_hlds.mode_util.c"
          check_hlds__mode_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_util__V_3_3, check_hlds__mode_util__V_5_5);
        }
#line 1265 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1265 "mode_util.m"
          {
#line 1847 "check_hlds.mode_util.c"
            check_hlds__mode_util__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_util_scalar_common_1[3];
#line 1849 "check_hlds.mode_util.c"
            {
#line 1851 "check_hlds.mode_util.c"
              check_hlds__mode_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_util__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_util__V_4_4)), ((MR_Box) (check_hlds__mode_util__V_6_6)));
            }
#line 1265 "mode_util.m"
          }
#line 1265 "mode_util.m"
      }
#line 1265 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 1265 "mode_util.m"
  }
#line 1265 "mode_util.m"
}

#line 117 "mode_util.m"
void MR_CALL 
check_hlds__mode_util____Compare____recompute_atomic_instmap_deltas_0_0(
#line 117 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__1_1,
#line 117 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 117 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3)
#line 117 "mode_util.m"
{
#line 117 "mode_util.m"
  {
#line 117 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 117 "mode_util.m"
    MR_Integer check_hlds__mode_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_util__HeadVar__2_2;
#line 117 "mode_util.m"
    MR_Integer check_hlds__mode_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_util__HeadVar__3_3;

#line 117 "mode_util.m"
    {
#line 117 "mode_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Cast_HeadVar1_4, check_hlds__mode_util__Cast_HeadVar2_5);
    }
#line 117 "mode_util.m"
  }
#line 117 "mode_util.m"
}

#line 117 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util____Unify____recompute_atomic_instmap_deltas_0_0(
#line 117 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_1,
#line 117 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2)
#line 117 "mode_util.m"
{
#line 1904 "check_hlds.mode_util.c"
  {
#line 1906 "check_hlds.mode_util.c"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_1 == check_hlds__mode_util__HeadVar__2_2);

#line 1909 "check_hlds.mode_util.c"
    return check_hlds__mode_util__succeeded;
#line 1911 "check_hlds.mode_util.c"
  }
#line 117 "mode_util.m"
}

#line 1754 "mode_util.m"
static MR_Word MR_CALL 
check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(
#line 1754 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1754 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 1754 "mode_util.m"
  MR_Integer check_hlds__mode_util__NumArgs_7)
#line 1754 "mode_util.m"
{
#line 1760 "mode_util.m"
  {
#line 1760 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1760 "mode_util.m"
    MR_Word check_hlds__mode_util__MaybeInst_8;

#line 1760 "mode_util.m"
#line 1760 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__ConsId_6)) {
#line 1760 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1760 "mode_util.m"
      case (MR_Integer) 0:
#line 1797 "mode_util.m"
        {
#line 1798 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1797 "mode_util.m"
        }
#line 1760 "mode_util.m"
        break;
#line 1760 "mode_util.m"
      case (MR_Integer) 1:
#line 1797 "mode_util.m"
        {
#line 1798 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1797 "mode_util.m"
        }
#line 1760 "mode_util.m"
        break;
#line 1760 "mode_util.m"
      case (MR_Integer) 2:
#line 1797 "mode_util.m"
        {
#line 1798 "mode_util.m"
          check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1797 "mode_util.m"
        }
#line 1760 "mode_util.m"
        break;
#line 1760 "mode_util.m"
      case (MR_Integer) 3:
#line 1760 "mode_util.m"
#line 1760 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 0)))) {
#line 1760 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1760 "mode_util.m"
          case (MR_Integer) 0:
#line 1760 "mode_util.m"
          case (MR_Integer) 1:
#line 1760 "mode_util.m"
          case (MR_Integer) 10:
#line 1760 "mode_util.m"
          case (MR_Integer) 11:
#line 1760 "mode_util.m"
          case (MR_Integer) 12:
#line 1760 "mode_util.m"
          case (MR_Integer) 13:
#line 1760 "mode_util.m"
          case (MR_Integer) 14:
#line 1797 "mode_util.m"
            {
#line 1798 "mode_util.m"
              check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_5[0]);
#line 1797 "mode_util.m"
            }
#line 1760 "mode_util.m"
            break;
#line 1760 "mode_util.m"
          case (MR_Integer) 2:
#line 1760 "mode_util.m"
          case (MR_Integer) 3:
#line 1761 "mode_util.m"
            check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1760 "mode_util.m"
            break;
#line 1760 "mode_util.m"
          case (MR_Integer) 4:
#line 1776 "mode_util.m"
            {
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__PredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_6, (MR_Integer) 1)));
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInfo_20;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__ProcInfo_21;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__PorF_22;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_23;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__ProcArgModes_24;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_25;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__Inst_26;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__V_45_45;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__V_47_47;
#line 1776 "mode_util.m"
              MR_Word check_hlds__mode_util__V_48_48;

#line 1778 "mode_util.m"
              {
#line 1778 "mode_util.m"
                check_hlds__mode_util__V_45_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__mode_util__PredProcId_18);
              }
#line 1777 "mode_util.m"
              {
#line 1777 "mode_util.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__V_45_45, &check_hlds__mode_util__PredInfo_20, &check_hlds__mode_util__ProcInfo_21);
              }
#line 1779 "mode_util.m"
              {
#line 1779 "mode_util.m"
                check_hlds__mode_util__PorF_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__mode_util__PredInfo_20);
              }
#line 1780 "mode_util.m"
              {
#line 1780 "mode_util.m"
                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__Det_23);
              }
#line 1781 "mode_util.m"
              {
#line 1781 "mode_util.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_21, &check_hlds__mode_util__ProcArgModes_24);
              }
#line 1782 "mode_util.m"
              {
#line 1782 "mode_util.m"
                mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_7, check_hlds__mode_util__ProcArgModes_24, &check_hlds__mode_util__Modes_25);
              }
#line 1783 "mode_util.m"
              {
#line 1783 "mode_util.m"
                check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__PorF_22));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Modes_25));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 3) = ((MR_Box) (check_hlds__mode_util__Det_23));
#line 1783 "mode_util.m"
              }
#line 1783 "mode_util.m"
              check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__V_48_48);
#line 1783 "mode_util.m"
              {
#line 1783 "mode_util.m"
                check_hlds__mode_util__Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1783 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_26, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1783 "mode_util.m"
              }
#line 1785 "mode_util.m"
              {
#line 1785 "mode_util.m"
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__Inst_26));
#line 1785 "mode_util.m"
              }
#line 1776 "mode_util.m"
            }
#line 1760 "mode_util.m"
            break;
#line 1760 "mode_util.m"
          case (MR_Integer) 5:
#line 1760 "mode_util.m"
          case (MR_Integer) 6:
#line 1760 "mode_util.m"
          case (MR_Integer) 7:
#line 1760 "mode_util.m"
          case (MR_Integer) 8:
#line 1769 "mode_util.m"
            {
#line 1769 "mode_util.m"
              MR_Word check_hlds__mode_util__V_53_53;
#line 1769 "mode_util.m"
              MR_Word check_hlds__mode_util__V_56_56;
#line 1769 "mode_util.m"
              MR_Word check_hlds__mode_util__V_57_57;

#line 1771 "mode_util.m"
              {
#line 1771 "mode_util.m"
                check_hlds__mode_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1771 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_6));
#line 1771 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "mode_util.m"
              }
#line 1771 "mode_util.m"
              {
#line 1771 "mode_util.m"
                check_hlds__mode_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 0) = ((MR_Box) (check_hlds__mode_util__V_57_57));
#line 1771 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "mode_util.m"
              }
#line 1770 "mode_util.m"
              {
#line 1770 "mode_util.m"
                check_hlds__mode_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1770 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1770 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1770 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_53_53, 3) = ((MR_Box) (check_hlds__mode_util__V_56_56));
#line 1770 "mode_util.m"
              }
#line 1770 "mode_util.m"
              {
#line 1770 "mode_util.m"
                check_hlds__mode_util__MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "mode_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_8, 0) = ((MR_Box) (check_hlds__mode_util__V_53_53));
#line 1770 "mode_util.m"
              }
#line 1769 "mode_util.m"
            }
#line 1760 "mode_util.m"
            break;
#line 1760 "mode_util.m"
          case (MR_Integer) 9:
#line 1773 "mode_util.m"
            {
#line 1774 "mode_util.m"
              {
#line 1774 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
              }
#line 1773 "mode_util.m"
            }
#line 1760 "mode_util.m"
            break;
#line 1760 "mode_util.m"
        }
#line 1760 "mode_util.m"
        break;
#line 1760 "mode_util.m"
    }
#line 1760 "mode_util.m"
    return check_hlds__mode_util__MaybeInst_8;
#line 1760 "mode_util.m"
  }
#line 1754 "mode_util.m"
}

#line 1713 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0_1(
#line 1713 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1713 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 1713 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 1713 "mode_util.m"
{
#line 1713 "mode_util.m"
  {
#line 1713 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1713 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_LambdaHeadVar__2_66;

#line 1713 "mode_util.m"
    {
#line 1713 "mode_util.m"
      check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1713__1_2_p_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_LambdaHeadVar__2_66);
    }
#line 1713 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_LambdaHeadVar__2_66));
#line 1713 "mode_util.m"
  }
#line 1713 "mode_util.m"
}

#line 1666 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__Uni_9,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__UniMode0_10,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__UniMode_11,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_12,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1666 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_56,
#line 1666 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_57)
#line 1666 "mode_util.m"
{
#line 1671 "mode_util.m"
  {
#line 1671 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1671 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1677 "mode_util.m"
    MR_Word check_hlds__mode_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));

#line 1723 "mode_util.m"
#line 1723 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__Uni_9)) {
#line 1723 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "mode_util.m"
      case (MR_Integer) 0:
#line 1724 "mode_util.m"
        {
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__ConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1724 "mode_util.m"
          MR_Word check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Uni_9, (MR_Integer) 6)));
#line 1725 "mode_util.m"
          MR_Word check_hlds__mode_util__Inst_76;
#line 1726 "mode_util.m"
          MR_Word check_hlds__mode_util__TypeInfo_86_86;
#line 1726 "mode_util.m"
          MR_Word check_hlds__mode_util__NonLocals_45;
#line 1726 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInst_47;
#line 1726 "mode_util.m"
          MR_Integer check_hlds__mode_util__V_58_58;
#line 1726 "mode_util.m"
          MR_Word check_hlds__mode_util__OldInstMapDelta_74;
#line 1729 "mode_util.m"
          MR_Word check_hlds__mode_util__V_46_46;

#line 1726 "mode_util.m"
          {
#line 1726 "mode_util.m"
            check_hlds__mode_util__NonLocals_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1727 "mode_util.m"
          {
#line 1727 "mode_util.m"
            check_hlds__mode_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__NonLocals_45, check_hlds__mode_util__Var_77);
          }
#line 1726 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1726 "mode_util.m"
            {
#line 1728 "mode_util.m"
              {
#line 1728 "mode_util.m"
                check_hlds__mode_util__OldInstMapDelta_74 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
#line 1729 "mode_util.m"
              {
#line 1729 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_74, check_hlds__mode_util__Var_77, &check_hlds__mode_util__V_46_46);
              }
#line 1729 "mode_util.m"
              check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1726 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1726 "mode_util.m"
                {
#line 2320 "check_hlds.mode_util.c"
                  check_hlds__mode_util__TypeInfo_86_86 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
#line 1731 "mode_util.m"
                  {
#line 1731 "mode_util.m"
                    check_hlds__mode_util__V_58_58 = mercury__list__length_1_f_0(check_hlds__mode_util__TypeInfo_86_86, check_hlds__mode_util__Args_40);
                  }
#line 1730 "mode_util.m"
                  {
#line 1730 "mode_util.m"
                    check_hlds__mode_util__MaybeInst_47 = check_hlds__mode_util__cons_id_to_shared_inst_3_f_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ConsId_39, check_hlds__mode_util__V_58_58);
                  }
#line 1732 "mode_util.m"
                  check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__MaybeInst_47)) == (MR_mktag((MR_Integer) 1)));
#line 1732 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1732 "mode_util.m"
                    check_hlds__mode_util__Inst_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_47, (MR_Integer) 0)));
#line 1726 "mode_util.m"
                }
#line 1726 "mode_util.m"
            }
#line 1725 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1734 "mode_util.m"
            {
#line 1734 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDelta0_48;

#line 1734 "mode_util.m"
              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1735 "mode_util.m"
              {
#line 1735 "mode_util.m"
                hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__mode_util__InstMapDelta0_48);
              }
#line 1736 "mode_util.m"
              {
#line 1736 "mode_util.m"
                hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_77, check_hlds__mode_util__Inst_76, check_hlds__mode_util__InstMapDelta0_48, check_hlds__mode_util__InstMapDelta_14);
              }
#line 1734 "mode_util.m"
            }
#line 1725 "mode_util.m"
          else
#line 1738 "mode_util.m"
            {
#line 1738 "mode_util.m"
              {
#line 1738 "mode_util.m"
                *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
              }
#line 1739 "mode_util.m"
              *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1738 "mode_util.m"
            }
#line 1724 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1724 "mode_util.m"
        }
#line 1723 "mode_util.m"
        break;
#line 1723 "mode_util.m"
      case (MR_Integer) 1:
#line 1679 "mode_util.m"
        {
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 0)));
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 2)));
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__UniModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 3)));
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__OldInstMapDelta_23;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__InitialInst_24;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__FinalInst_29;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__ModuleInfo_30;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__Modes_38;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__V_69_69;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__V_70_70;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__V_71_71;
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 1)));
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 4)));
#line 1679 "mode_util.m"
          MR_Word check_hlds__mode_util___CanCGC_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Uni_9, (MR_Integer) 5)));
#line 1686 "mode_util.m"
          MR_Word check_hlds__mode_util__DeltaInst_25;

#line 1684 "mode_util.m"
          {
#line 1684 "mode_util.m"
            check_hlds__mode_util__OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1685 "mode_util.m"
          {
#line 1685 "mode_util.m"
            hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_13, check_hlds__mode_util__Var_17, &check_hlds__mode_util__InitialInst_24);
          }
#line 1686 "mode_util.m"
          {
#line 1686 "mode_util.m"
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__mode_util__OldInstMapDelta_23, check_hlds__mode_util__Var_17, &check_hlds__mode_util__DeltaInst_25);
          }
#line 1686 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1697 "mode_util.m"
            {
#line 1697 "mode_util.m"
              MR_Word check_hlds__mode_util__FinalInstPrime_26;
#line 1697 "mode_util.m"
              MR_Word check_hlds__mode_util__ModuleInfo1_28;
#line 1698 "mode_util.m"
              MR_Word check_hlds__mode_util___Detism_27;

#line 1698 "mode_util.m"
              {
#line 1698 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__InitialInst_24, check_hlds__mode_util__DeltaInst_25, (MR_Integer) 1, &check_hlds__mode_util__FinalInstPrime_26, &check_hlds__mode_util___Detism_27, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_28);
              }
#line 1697 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1702 "mode_util.m"
                {
#line 1704 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_82_82;
#line 1704 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_81_81;

#line 1702 "mode_util.m"
                  check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__FinalInstPrime_26;
#line 1703 "mode_util.m"
                  check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo1_28;
#line 1704 "mode_util.m"
                  check_hlds__mode_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 0)));
#line 1704 "mode_util.m"
                  check_hlds__mode_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_56, (MR_Integer) 1)));
#line 1704 "mode_util.m"
                  {
#line 1704 "mode_util.m"
                    MR_Word base;
#line 1704 "mode_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1704 "mode_util.m"
                    *check_hlds__mode_util__STATE_VARIABLE_RI_57 = base;
#line 1704 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_30));
#line 1704 "mode_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_82_82));
#line 1704 "mode_util.m"
                  }
#line 1702 "mode_util.m"
                }
#line 1697 "mode_util.m"
              else
#line 1706 "mode_util.m"
                {
#line 1706 "mode_util.m"
                  {
#line 1706 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_unify\'/8", (MR_String) "abstractly_unify_inst failed");
#line 1706 "mode_util.m"
                    return;
                  }
#line 1706 "mode_util.m"
                }
#line 1697 "mode_util.m"
            }
#line 1686 "mode_util.m"
          else
#line 1710 "mode_util.m"
            {
#line 1710 "mode_util.m"
              check_hlds__mode_util__FinalInst_29 = check_hlds__mode_util__InitialInst_24;
#line 1711 "mode_util.m"
              check_hlds__mode_util__ModuleInfo_30 = check_hlds__mode_util__ModuleInfo0_16;
#line 1710 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1710 "mode_util.m"
            }
#line 1718 "mode_util.m"
          {
#line 1718 "mode_util.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__mode_util_scalar_common_3[3], check_hlds__mode_util__UniModes_20, &check_hlds__mode_util__Modes_38);
          }
#line 1719 "mode_util.m"
          {
#line 1719 "mode_util.m"
            check_hlds__mode_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 0) = ((MR_Box) (check_hlds__mode_util__Var_17));
#line 1719 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_69_69, 1) = ((MR_Box) (check_hlds__mode_util__Vars_19));
#line 1719 "mode_util.m"
          }
#line 1720 "mode_util.m"
          {
#line 1720 "mode_util.m"
            check_hlds__mode_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1720 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_24));
#line 1720 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_71_71, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_29));
#line 1720 "mode_util.m"
          }
#line 1720 "mode_util.m"
          {
#line 1720 "mode_util.m"
            check_hlds__mode_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1720 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 0) = ((MR_Box) (check_hlds__mode_util__V_71_71));
#line 1720 "mode_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_70_70, 1) = ((MR_Box) (check_hlds__mode_util__Modes_38));
#line 1720 "mode_util.m"
          }
#line 1719 "mode_util.m"
          {
#line 1719 "mode_util.m"
            hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__V_69_69, check_hlds__mode_util__V_70_70, check_hlds__mode_util__ModuleInfo_30, check_hlds__mode_util__InstMapDelta_14);
          }
#line 1722 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1679 "mode_util.m"
        }
#line 1723 "mode_util.m"
        break;
#line 1723 "mode_util.m"
      case (MR_Integer) 2:
#line 1745 "mode_util.m"
        {
#line 1746 "mode_util.m"
          {
#line 1746 "mode_util.m"
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1747 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1745 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1745 "mode_util.m"
        }
#line 1723 "mode_util.m"
        break;
#line 1723 "mode_util.m"
      case (MR_Integer) 3:
#line 1745 "mode_util.m"
        {
#line 1746 "mode_util.m"
          {
#line 1746 "mode_util.m"
            *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_12);
          }
#line 1747 "mode_util.m"
          *check_hlds__mode_util__UniMode_11 = check_hlds__mode_util__UniMode0_10;
#line 1745 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_57 = check_hlds__mode_util__STATE_VARIABLE_RI_0_56;
#line 1745 "mode_util.m"
        }
#line 1723 "mode_util.m"
        break;
#line 1723 "mode_util.m"
    }
#line 1671 "mode_util.m"
  }
#line 1666 "mode_util.m"
}

#line 1637 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_2,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1637 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 1637 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 1637 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6)
#line 1637 "mode_util.m"
{
#line 1641 "mode_util.m"
  {
#line 1641 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1641 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1641 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1641 "mode_util.m"
        {
#line 1641 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1641 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 1641 "mode_util.m"
        }
#line 1641 "mode_util.m"
      else
#line 1644 "mode_util.m"
        {
#line 1645 "mode_util.m"
          {
#line 1645 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1645 "mode_util.m"
            return;
          }
#line 1644 "mode_util.m"
        }
#line 1641 "mode_util.m"
    else
#line 1641 "mode_util.m"
      {
#line 1641 "mode_util.m"
        MR_Word check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1641 "mode_util.m"
        MR_Word check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1641 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1642 "mode_util.m"
          {
#line 1643 "mode_util.m"
            {
#line 1643 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "length mismatch");
#line 1643 "mode_util.m"
              return;
            }
#line 1642 "mode_util.m"
          }
#line 1641 "mode_util.m"
        else
#line 1647 "mode_util.m"
          {
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_36;
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_37;
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInst0_39;
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_41;
#line 1647 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52;
#line 1650 "mode_util.m"
            MR_Word check_hlds__mode_util__V_40_40;
#line 1651 "mode_util.m"
            MR_Word check_hlds__mode_util__UnifyInst_42;
#line 1651 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1656 "mode_util.m"
            MR_Word check_hlds__mode_util__V_43_43;

#line 1649 "mode_util.m"
            {
#line 1649 "mode_util.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_2, check_hlds__mode_util__V_55_55, &check_hlds__mode_util__ArgInst0_39);
            }
#line 1650 "mode_util.m"
            {
#line 1650 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__mode_util__Mode0_34, &check_hlds__mode_util__V_40_40, &check_hlds__mode_util__FinalInst_41);
            }
#line 1656 "mode_util.m"
            {
#line 1656 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__mode_util__ArgInst0_39, check_hlds__mode_util__FinalInst_41, (MR_Integer) 1, &check_hlds__mode_util__UnifyInst_42, &check_hlds__mode_util__V_43_43, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48);
            }
#line 1651 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1659 "mode_util.m"
              {
#line 1659 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1659 "mode_util.m"
                {
#line 1659 "mode_util.m"
                  check_hlds__mode_util__Mode_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 0) = ((MR_Box) (check_hlds__mode_util__ArgInst0_39));
#line 1659 "mode_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_util__Mode_36, 1) = ((MR_Box) (check_hlds__mode_util__UnifyInst_42));
#line 1659 "mode_util.m"
                }
#line 1659 "mode_util.m"
              }
#line 1651 "mode_util.m"
            else
#line 1661 "mode_util.m"
              {
#line 1661 "mode_util.m"
                {
#line 1661 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", (MR_String) "unify_inst failed");
#line 1661 "mode_util.m"
                  return;
                }
#line 1661 "mode_util.m"
              }
#line 1663 "mode_util.m"
            {
#line 1663 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__V_54_54, check_hlds__mode_util__InstMap_2, check_hlds__mode_util__Modes0_35, &check_hlds__mode_util__Modes_37, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_6);
            }
#line 1647 "mode_util.m"
            {
#line 1647 "mode_util.m"
              MR_Word base;
#line 1647 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1647 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_36));
#line 1647 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_37));
#line 1647 "mode_util.m"
            }
#line 1647 "mode_util.m"
          }
#line 1641 "mode_util.m"
      }
#line 1641 "mode_util.m"
  }
#line 1637 "mode_util.m"
}

#line 1607 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__compute_inst_var_sub_8_p_0(
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_2,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_3,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0_5,
#line 1607 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_Sub_6,
#line 1607 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1607 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8)
#line 1607 "mode_util.m"
{
#line 1611 "mode_util.m"
  while (MR_TRUE)
#line 1611 "mode_util.m"
    {
#line 1611 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1611 "mode_util.m"
      {
#line 1611 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1611 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1611 "mode_util.m"
          if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1611 "mode_util.m"
            {
#line 1611 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1611 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_Sub_6 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1611 "mode_util.m"
            }
#line 1611 "mode_util.m"
          else
#line 1614 "mode_util.m"
            {
#line 1615 "mode_util.m"
              {
#line 1615 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1615 "mode_util.m"
                return;
              }
#line 1614 "mode_util.m"
            }
#line 1611 "mode_util.m"
        else
#line 1611 "mode_util.m"
          {
#line 1611 "mode_util.m"
            MR_Word check_hlds__mode_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1611 "mode_util.m"
            MR_Word check_hlds__mode_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1611 "mode_util.m"
            if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1612 "mode_util.m"
              {
#line 1613 "mode_util.m"
                {
#line 1613 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
#line 1613 "mode_util.m"
                  return;
                }
#line 1612 "mode_util.m"
              }
#line 1611 "mode_util.m"
            else
#line 1617 "mode_util.m"
              {
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__Inst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__Insts_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgInst_53;
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__Type_54;
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;
#line 1617 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1623 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1623 "mode_util.m"
                MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;

#line 1621 "mode_util.m"
                {
#line 1621 "mode_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_3, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__ArgInst_53);
                }
#line 1622 "mode_util.m"
                {
#line 1622 "mode_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_2, check_hlds__mode_util__V_66_66, &check_hlds__mode_util__Type_54);
                }
#line 1623 "mode_util.m"
                {
#line 1623 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__mode_util__ArgInst_53, check_hlds__mode_util__Inst_47, check_hlds__mode_util__Type_54, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59, check_hlds__mode_util__STATE_VARIABLE_Sub_0_5, &check_hlds__mode_util__STATE_VARIABLE_Sub_60_60);
                }
#line 1623 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1624 "mode_util.m"
                  {
#line 1624 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_59_59;
#line 1624 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_60_60;
#line 1624 "mode_util.m"
                  }
#line 1623 "mode_util.m"
                else
#line 1632 "mode_util.m"
                  {
#line 1632 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1633 "mode_util.m"
                    check_hlds__mode_util__STATE_VARIABLE_Sub_62_62 = check_hlds__mode_util__STATE_VARIABLE_Sub_0_5;
#line 1632 "mode_util.m"
                  }
#line 1635 "mode_util.m"
                /* direct tailcall eliminated */
#line 1635 "mode_util.m"
                {
#line 1635 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__V_65_65;
#line 1635 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__4__tmp_copy_4 = check_hlds__mode_util__Insts_48;
#line 1635 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_62_62;
#line 1635 "mode_util.m"
                  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_61_61;

#line 1635 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_7 = check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1635 "mode_util.m"
                  check_hlds__mode_util__STATE_VARIABLE_Sub_0_5 = check_hlds__mode_util__STATE_VARIABLE_Sub_0__tmp_copy_5;
#line 1635 "mode_util.m"
                  check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__HeadVar__4__tmp_copy_4;
#line 1635 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 1635 "mode_util.m"
                }
#line 1635 "mode_util.m"
                continue;
#line 1617 "mode_util.m"
              }
#line 1611 "mode_util.m"
          }
#line 1611 "mode_util.m"
      }
#line 1611 "mode_util.m"
      break;
#line 1611 "mode_util.m"
    }
#line 1607 "mode_util.m"
}

#line 1563 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__PredId_9,
#line 1563 "mode_util.m"
  MR_Integer check_hlds__mode_util__ProcId_10,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__Args_11,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_13,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1563 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_34,
#line 1563 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_35)
#line 1563 "mode_util.m"
{
#line 1568 "mode_util.m"
  {
#line 1568 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1568 "mode_util.m"
    MR_Word check_hlds__mode_util__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1568 "mode_util.m"
    MR_Word check_hlds__mode_util__ProcInfo_18;
#line 1568 "mode_util.m"
    MR_Word check_hlds__mode_util__Detism_19;
#line 1569 "mode_util.m"
    MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1570 "mode_util.m"
    MR_Word check_hlds__mode_util__V_17_17;
#line 1572 "mode_util.m"
    MR_Word check_hlds__mode_util__V_52_52;
#line 1572 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1570 "mode_util.m"
    {
#line 1570 "mode_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__PredId_9, check_hlds__mode_util__ProcId_10, &check_hlds__mode_util__V_17_17, &check_hlds__mode_util__ProcInfo_18);
    }
#line 1571 "mode_util.m"
    {
#line 1571 "mode_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__Detism_19);
    }
#line 1572 "mode_util.m"
    {
#line 1572 "mode_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_19, &check_hlds__mode_util__V_20_20, &check_hlds__mode_util__V_52_52);
    }
#line 1572 "mode_util.m"
    check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_52_52);
#line 1572 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1573 "mode_util.m"
      {
#line 1573 "mode_util.m"
        {
#line 1573 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_14);
        }
#line 1573 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_0_34;
#line 1573 "mode_util.m"
      }
#line 1572 "mode_util.m"
    else
#line 1575 "mode_util.m"
      {
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes0_21;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__ProcInstVarSet_22;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet0_23;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__InstVarSet_24;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes1_25;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__InitialInsts_26;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgModes_31;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_32;
#line 1575 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1577 "mode_util.m"
        MR_Word check_hlds__mode_util__V_43_43;
#line 1580 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44;
#line 1580 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;

#line 1575 "mode_util.m"
        {
#line 1575 "mode_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ArgModes0_21);
        }
#line 1576 "mode_util.m"
        {
#line 1576 "mode_util.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__ProcInfo_18, &check_hlds__mode_util__ProcInstVarSet_22);
        }
#line 1577 "mode_util.m"
        check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1577 "mode_util.m"
        check_hlds__mode_util__InstVarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1578 "mode_util.m"
        {
#line 1578 "mode_util.m"
          parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__mode_util__InstVarSet0_23, check_hlds__mode_util__ProcInstVarSet_22, &check_hlds__mode_util__InstVarSet_24, check_hlds__mode_util__ArgModes0_21, &check_hlds__mode_util__ArgModes1_25);
        }
#line 1580 "mode_util.m"
        check_hlds__mode_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 0)));
#line 1580 "mode_util.m"
        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_34, (MR_Integer) 1)));
#line 1580 "mode_util.m"
        {
#line 1580 "mode_util.m"
          check_hlds__mode_util__STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (check_hlds__mode_util__V_44_44));
#line 1580 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_24));
#line 1580 "mode_util.m"
        }
#line 1581 "mode_util.m"
        {
#line 1581 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__ModuleInfo0_16, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__InitialInsts_26);
        }
#line 1585 "mode_util.m"
        {
#line 1585 "mode_util.m"
          check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_util__InstMap_13);
        }
#line 1585 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1586 "mode_util.m"
          {
#line 1586 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub0_27;
#line 1586 "mode_util.m"
            MR_Word check_hlds__mode_util__InstVarSub_28;
#line 1586 "mode_util.m"
            MR_Word check_hlds__mode_util__ModuleInfo1_29;
#line 1586 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes2_30;
#line 1598 "mode_util.m"
            MR_Word check_hlds__mode_util__V_47_47;
#line 1598 "mode_util.m"
            MR_Word check_hlds__mode_util__V_46_46;

#line 1586 "mode_util.m"
            {
#line 1586 "mode_util.m"
              mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__mode_util__InstVarSub0_27);
            }
#line 1587 "mode_util.m"
            {
#line 1587 "mode_util.m"
              check_hlds__mode_util__compute_inst_var_sub_8_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__InitialInsts_26, check_hlds__mode_util__InstVarSub0_27, &check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ModuleInfo0_16, &check_hlds__mode_util__ModuleInfo1_29);
            }
#line 1591 "mode_util.m"
            {
#line 1591 "mode_util.m"
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(check_hlds__mode_util__InstVarSub_28, check_hlds__mode_util__ArgModes1_25, &check_hlds__mode_util__ArgModes2_30);
            }
#line 1596 "mode_util.m"
            {
#line 1596 "mode_util.m"
              check_hlds__mode_util__recompute_instmap_delta_call_2_6_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__InstMap_13, check_hlds__mode_util__ArgModes2_30, &check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo1_29, &check_hlds__mode_util__ModuleInfo_32);
            }
#line 1598 "mode_util.m"
            check_hlds__mode_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 0)));
#line 1598 "mode_util.m"
            check_hlds__mode_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_37_37, (MR_Integer) 1)));
#line 1598 "mode_util.m"
            {
#line 1598 "mode_util.m"
              MR_Word base;
#line 1598 "mode_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_35 = base;
#line 1598 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_32));
#line 1598 "mode_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 1598 "mode_util.m"
            }
#line 1586 "mode_util.m"
          }
#line 1585 "mode_util.m"
        else
#line 1600 "mode_util.m"
          {
#line 1600 "mode_util.m"
            MR_Integer check_hlds__mode_util__NumArgs_33;

#line 1600 "mode_util.m"
            {
#line 1600 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[2], check_hlds__mode_util__Args_11, &check_hlds__mode_util__NumArgs_33);
            }
#line 1601 "mode_util.m"
            {
#line 1601 "mode_util.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__mode_util__NumArgs_33, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[7])), &check_hlds__mode_util__ArgModes_31);
            }
#line 1602 "mode_util.m"
            check_hlds__mode_util__ModuleInfo_32 = check_hlds__mode_util__ModuleInfo0_16;
#line 1600 "mode_util.m"
            *check_hlds__mode_util__STATE_VARIABLE_RI_35 = check_hlds__mode_util__STATE_VARIABLE_RI_37_37;
#line 1600 "mode_util.m"
          }
#line 1604 "mode_util.m"
        {
#line 1604 "mode_util.m"
          hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Args_11, check_hlds__mode_util__ArgModes_31, check_hlds__mode_util__ModuleInfo_32, check_hlds__mode_util__InstMapDelta_14);
        }
#line 1575 "mode_util.m"
      }
#line 1568 "mode_util.m"
  }
#line 1563 "mode_util.m"
}

#line 1520 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_11,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_12,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__Cases0_13,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__Cases_14,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_15,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_16,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_17,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_18,
#line 1520 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_23,
#line 1520 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_24)
#line 1520 "mode_util.m"
{
#line 1526 "mode_util.m"
  {
#line 1526 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1526 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_20;
#line 1526 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_25_25;

#line 1527 "mode_util.m"
    {
#line 1527 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_p_0(check_hlds__mode_util__RecomputeAtomic_11, check_hlds__mode_util__Var_12, check_hlds__mode_util__Cases0_13, check_hlds__mode_util__Cases_14, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMap0_16, &check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__STATE_VARIABLE_RI_0_23, &check_hlds__mode_util__STATE_VARIABLE_RI_25_25);
    }
#line 1532 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "mode_util.m"
      {
#line 1531 "mode_util.m"
        {
#line 1531 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_18);
        }
#line 1530 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_24 = check_hlds__mode_util__STATE_VARIABLE_RI_25_25;
#line 1530 "mode_util.m"
      }
#line 1532 "mode_util.m"
    else
#line 1533 "mode_util.m"
      {
#line 1533 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1533 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_38;
#line 1280 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_42_42;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_41_41;

#line 1281 "mode_util.m"
        {
#line 1281 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap0_16, check_hlds__mode_util__NonLocals_17, check_hlds__mode_util__VarTypes_15, check_hlds__mode_util__InstMapDeltas_20, check_hlds__mode_util__InstMapDelta_18, check_hlds__mode_util__ModuleInfo0_37, &check_hlds__mode_util__ModuleInfo_38);
        }
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 0)));
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_25_25, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        {
#line 1282 "mode_util.m"
          MR_Word base;
#line 1282 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_24 = base;
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_38));
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_42_42));
#line 1282 "mode_util.m"
        }
#line 1533 "mode_util.m"
      }
#line 1526 "mode_util.m"
  }
#line 1520 "mode_util.m"
}

#line 1484 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__Goals0_11,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goals_12,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_13,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_14,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__NonLocals_15,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1484 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_21,
#line 1484 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_22)
#line 1484 "mode_util.m"
{
#line 1490 "mode_util.m"
  {
#line 1490 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1490 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDeltas_18;
#line 1490 "mode_util.m"
    MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_23_23;

#line 1491 "mode_util.m"
    {
#line 1491 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_11, check_hlds__mode_util__Goals_12, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMap_14, &check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__STATE_VARIABLE_RI_0_21, &check_hlds__mode_util__STATE_VARIABLE_RI_23_23);
    }
#line 1496 "mode_util.m"
    if ((check_hlds__mode_util__InstMapDeltas_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1494 "mode_util.m"
      {
#line 1495 "mode_util.m"
        {
#line 1495 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
        }
#line 1494 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_22 = check_hlds__mode_util__STATE_VARIABLE_RI_23_23;
#line 1494 "mode_util.m"
      }
#line 1496 "mode_util.m"
    else
#line 1497 "mode_util.m"
      {
#line 1497 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1497 "mode_util.m"
        MR_Word check_hlds__mode_util__ModuleInfo_36;
#line 1280 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40;
#line 1282 "mode_util.m"
        MR_Word check_hlds__mode_util__V_39_39;

#line 1281 "mode_util.m"
        {
#line 1281 "mode_util.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__mode_util__InstMap_14, check_hlds__mode_util__NonLocals_15, check_hlds__mode_util__VarTypes_13, check_hlds__mode_util__InstMapDeltas_18, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__ModuleInfo0_35, &check_hlds__mode_util__ModuleInfo_36);
        }
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 0)));
#line 1282 "mode_util.m"
        check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_23_23, (MR_Integer) 1)));
#line 1282 "mode_util.m"
        {
#line 1282 "mode_util.m"
          MR_Word base;
#line 1282 "mode_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "mode_util.m"
          *check_hlds__mode_util__STATE_VARIABLE_RI_22 = base;
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_36));
#line 1282 "mode_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__V_40_40));
#line 1282 "mode_util.m"
        }
#line 1497 "mode_util.m"
      }
#line 1490 "mode_util.m"
  }
#line 1484 "mode_util.m"
}

#line 1466 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_1,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_4,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_5,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_6,
#line 1466 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_7,
#line 1466 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_8)
#line 1466 "mode_util.m"
{
#line 1470 "mode_util.m"
  {
#line 1470 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1470 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1470 "mode_util.m"
      {
#line 1470 "mode_util.m"
        *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1471 "mode_util.m"
        {
#line 1471 "mode_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_6);
        }
#line 1470 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_8 = check_hlds__mode_util__STATE_VARIABLE_RI_0_7;
#line 1470 "mode_util.m"
      }
#line 1470 "mode_util.m"
    else
#line 1473 "mode_util.m"
      {
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__Goal_19;
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__Goals_20;
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_25;
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMap1_26;
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_27;
#line 1473 "mode_util.m"
        MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_30_30;

#line 1474 "mode_util.m"
        {
#line 1474 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goal0_17, &check_hlds__mode_util__Goal_19, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap0_5, &check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__STATE_VARIABLE_RI_0_7, &check_hlds__mode_util__STATE_VARIABLE_RI_30_30);
        }
#line 1476 "mode_util.m"
        {
#line 1476 "mode_util.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_5, check_hlds__mode_util__InstMapDelta0_25, &check_hlds__mode_util__InstMap1_26);
        }
#line 1477 "mode_util.m"
        {
#line 1477 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_1, check_hlds__mode_util__Goals0_18, &check_hlds__mode_util__Goals_20, check_hlds__mode_util__VarTypes_4, check_hlds__mode_util__InstMap1_26, &check_hlds__mode_util__InstMapDelta1_27, check_hlds__mode_util__STATE_VARIABLE_RI_30_30, check_hlds__mode_util__STATE_VARIABLE_RI_8);
        }
#line 1472 "mode_util.m"
        {
#line 1472 "mode_util.m"
          MR_Word base;
#line 1472 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1472 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Goal_19));
#line 1472 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_20));
#line 1472 "mode_util.m"
        }
#line 1479 "mode_util.m"
        {
#line 1479 "mode_util.m"
          hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_25, check_hlds__mode_util__InstMapDelta1_27, (MR_Integer) 1, check_hlds__mode_util__InstMapDelta_6);
        }
#line 1473 "mode_util.m"
      }
#line 1470 "mode_util.m"
  }
#line 1466 "mode_util.m"
}

#line 1427 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_2(
#line 1427 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1427 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1427 "mode_util.m"
{
#line 1427 "mode_util.m"
  {
#line 1427 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1427 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1427 "mode_util.m"
    MR_Word check_hlds__mode_util__conv1_HeadVar__2_2;

#line 1427 "mode_util.m"
    {
#line 1427 "mode_util.m"
      check_hlds__mode_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1427 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv1_HeadVar__2_2));
#line 1427 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1427 "mode_util.m"
  }
#line 1427 "mode_util.m"
}

#line 1418 "mode_util.m"
static MR_Box MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0_1(
#line 1418 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 1418 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1)
#line 1418 "mode_util.m"
{
#line 1418 "mode_util.m"
  {
#line 1418 "mode_util.m"
    MR_Box check_hlds__mode_util__wrapper_arg_2;
#line 1418 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 1418 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_HeadVar__2_2;

#line 1418 "mode_util.m"
    {
#line 1418 "mode_util.m"
      check_hlds__mode_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__mode_util__wrapper_arg_1));
    }
#line 1418 "mode_util.m"
    check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_HeadVar__2_2));
#line 1418 "mode_util.m"
    return check_hlds__mode_util__wrapper_arg_2;
#line 1418 "mode_util.m"
  }
#line 1418 "mode_util.m"
}

#line 1284 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_10,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalExpr0_11,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__GoalExpr_12,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__GoalInfo_13,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_14,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_15,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_16,
#line 1284 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_105,
#line 1284 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_106)
#line 1284 "mode_util.m"
{
#line 1292 "mode_util.m"
  {
#line 1292 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1292 "mode_util.m"
#line 1292 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_11)) {
#line 1292 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "mode_util.m"
      case (MR_Integer) 0:
#line 1323 "mode_util.m"
        {
#line 1323 "mode_util.m"
          MR_Word check_hlds__mode_util__SubGoal0_26 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__GoalExpr0_11), (MR_Integer) 0);
#line 1323 "mode_util.m"
          MR_Word check_hlds__mode_util__InstMapDelta0_27;
#line 1323 "mode_util.m"
          MR_Word check_hlds__mode_util__SubGoal_28;
#line 1330 "mode_util.m"
          MR_Word check_hlds__mode_util__V_29_29;

#line 1324 "mode_util.m"
          {
#line 1324 "mode_util.m"
            check_hlds__mode_util__InstMapDelta0_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
          }
#line 1325 "mode_util.m"
          {
#line 1325 "mode_util.m"
            check_hlds__mode_util__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__mode_util__InstMapDelta0_27);
          }
#line 1325 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1326 "mode_util.m"
            {
#line 1326 "mode_util.m"
              hlds__instmap__instmap_delta_init_reachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
#line 1325 "mode_util.m"
          else
#line 1328 "mode_util.m"
            {
#line 1328 "mode_util.m"
              hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
            }
#line 1330 "mode_util.m"
          {
#line 1330 "mode_util.m"
            check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_26, &check_hlds__mode_util__SubGoal_28, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
#line 1332 "mode_util.m"
          *check_hlds__mode_util__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_util__SubGoal_28);
#line 1323 "mode_util.m"
        }
#line 1292 "mode_util.m"
        break;
#line 1292 "mode_util.m"
      case (MR_Integer) 1:
#line 1388 "mode_util.m"
        {
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__LHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__RHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__UniMode0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__Uni_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__RHS_64;
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__UniMode_65;
#line 1388 "mode_util.m"
          MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_120_120;

#line 1400 "mode_util.m"
#line 1400 "mode_util.m"
          switch (MR_tag((MR_Word) check_hlds__mode_util__RHS0_60)) {
#line 1400 "mode_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "mode_util.m"
            case (MR_Integer) 0:
#line 1400 "mode_util.m"
            case (MR_Integer) 1:
#line 1403 "mode_util.m"
              {
#line 1404 "mode_util.m"
                check_hlds__mode_util__RHS_64 = check_hlds__mode_util__RHS0_60;
#line 1403 "mode_util.m"
                check_hlds__mode_util__STATE_VARIABLE_RI_120_120 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1403 "mode_util.m"
              }
#line 1400 "mode_util.m"
              break;
#line 1400 "mode_util.m"
            case (MR_Integer) 2:
#line 1392 "mode_util.m"
              {
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Purity_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Groundness_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__PorF_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__LambdaVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 3)));
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 6)));
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__ModuleInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__InstMap_73;
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Goal_74;
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Det_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 5)));
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__NonLocals_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 2)));
#line 1392 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS0_60, (MR_Integer) 4)));
#line 1393 "mode_util.m"
                MR_Word check_hlds__mode_util__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));
#line 1396 "mode_util.m"
                MR_Word check_hlds__mode_util__V_75_75;

#line 1394 "mode_util.m"
                {
#line 1394 "mode_util.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__mode_util__ModuleInfo0_72, check_hlds__mode_util__LambdaVars_70, check_hlds__mode_util__Modes_152, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMap_73);
                }
#line 1396 "mode_util.m"
                {
#line 1396 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goal0_71, &check_hlds__mode_util__Goal_74, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap_73, &check_hlds__mode_util__V_75_75, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_120_120);
                }
#line 1398 "mode_util.m"
                {
#line 1398 "mode_util.m"
                  check_hlds__mode_util__RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 0) = ((MR_Box) ((check_hlds__mode_util__Purity_66 | ((((check_hlds__mode_util__Groundness_67 << (MR_Integer) 2)) | ((check_hlds__mode_util__PorF_68 << (MR_Integer) 3)))))));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 1) = (MR_Integer) 0;
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 2) = ((MR_Box) (check_hlds__mode_util__NonLocals_151));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 3) = ((MR_Box) (check_hlds__mode_util__LambdaVars_70));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 4) = ((MR_Box) (check_hlds__mode_util__Modes_152));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 5) = ((MR_Box) (check_hlds__mode_util__Det_150));
#line 1398 "mode_util.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_64, 6) = ((MR_Box) (check_hlds__mode_util__Goal_74));
#line 1398 "mode_util.m"
                }
#line 1392 "mode_util.m"
              }
#line 1400 "mode_util.m"
              break;
#line 1400 "mode_util.m"
          }
#line 1410 "mode_util.m"
#line 1410 "mode_util.m"
          switch (check_hlds__mode_util__RecomputeAtomic_10) {
#line 1410 "mode_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1410 "mode_util.m"
            case (MR_Integer) 1:
#line 1411 "mode_util.m"
              {
#line 1412 "mode_util.m"
                check_hlds__mode_util__UniMode_65 = check_hlds__mode_util__UniMode0_61;
#line 1413 "mode_util.m"
                {
#line 1413 "mode_util.m"
                  *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                }
#line 1411 "mode_util.m"
                *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_120_120;
#line 1411 "mode_util.m"
              }
#line 1410 "mode_util.m"
              break;
#line 1410 "mode_util.m"
            case (MR_Integer) 0:
#line 1408 "mode_util.m"
              {
#line 1408 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_unify_8_p_0(check_hlds__mode_util__Uni_62, check_hlds__mode_util__UniMode0_61, &check_hlds__mode_util__UniMode_65, check_hlds__mode_util__GoalInfo_13, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_120_120, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1410 "mode_util.m"
              break;
#line 1410 "mode_util.m"
          }
#line 1389 "mode_util.m"
          {
#line 1389 "mode_util.m"
            MR_Word base;
#line 1389 "mode_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "mode_util.m"
            *check_hlds__mode_util__GoalExpr_12 = base;
#line 1389 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__LHS_59));
#line 1389 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__RHS_64));
#line 1389 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_util__UniMode_65));
#line 1389 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_util__Uni_62));
#line 1389 "mode_util.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_util__Context_63));
#line 1389 "mode_util.m"
          }
#line 1388 "mode_util.m"
        }
#line 1292 "mode_util.m"
        break;
#line 1292 "mode_util.m"
      case (MR_Integer) 2:
#line 1383 "mode_util.m"
        {
#line 1383 "mode_util.m"
          MR_Word check_hlds__mode_util__PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)));
#line 1383 "mode_util.m"
          MR_Integer check_hlds__mode_util__ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1383 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1383 "mode_util.m"
          MR_Word check_hlds__mode_util___BI_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1383 "mode_util.m"
          MR_Word check_hlds__mode_util___UC_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1383 "mode_util.m"
          MR_Word check_hlds__mode_util___Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));

#line 1384 "mode_util.m"
          {
#line 1384 "mode_util.m"
            check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_53, check_hlds__mode_util__ProcId_54, check_hlds__mode_util__Args_55, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
          }
#line 1386 "mode_util.m"
          *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1383 "mode_util.m"
        }
#line 1292 "mode_util.m"
        break;
#line 1292 "mode_util.m"
      case (MR_Integer) 3:
#line 1292 "mode_util.m"
#line 1292 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 0)))) {
#line 1292 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "mode_util.m"
          case (MR_Integer) 0:
#line 1374 "mode_util.m"
            {
#line 1374 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1374 "mode_util.m"
              MR_Word check_hlds__mode_util__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1374 "mode_util.m"
              MR_Word check_hlds__mode_util__Vars_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1374 "mode_util.m"
              MR_Word check_hlds__mode_util___Details_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1374 "mode_util.m"
              MR_Word check_hlds__mode_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1375 "mode_util.m"
              MR_Word check_hlds__mode_util__V_191_191;
#line 1375 "mode_util.m"
              MR_Word check_hlds__mode_util__V_51_51;

#line 1375 "mode_util.m"
              {
#line 1375 "mode_util.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_util__Detism_50, &check_hlds__mode_util__V_51_51, &check_hlds__mode_util__V_191_191);
              }
#line 1375 "mode_util.m"
              check_hlds__mode_util__succeeded = ((MR_Integer) 0 == check_hlds__mode_util__V_191_191);
#line 1375 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1376 "mode_util.m"
                {
#line 1376 "mode_util.m"
                  hlds__instmap__instmap_delta_init_unreachable_1_p_0(check_hlds__mode_util__InstMapDelta_16);
                }
#line 1375 "mode_util.m"
              else
#line 1378 "mode_util.m"
                {
#line 1378 "mode_util.m"
                  MR_Word check_hlds__mode_util__ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 0)));
#line 1378 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__STATE_VARIABLE_RI_0_105, (MR_Integer) 1)));

#line 1379 "mode_util.m"
                  {
#line 1379 "mode_util.m"
                    hlds__instmap__instmap_delta_from_mode_list_4_p_0(check_hlds__mode_util__Vars_149, check_hlds__mode_util__Modes_48, check_hlds__mode_util__ModuleInfo_52, check_hlds__mode_util__InstMapDelta_16);
                  }
#line 1378 "mode_util.m"
                }
#line 1381 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1374 "mode_util.m"
              *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1374 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 1:
#line 1417 "mode_util.m"
            {
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeInfo_185_185 = (MR_Word) &check_hlds__mode_util_scalar_common_1[2];
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 5)));
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgVars_84;
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDelta0_159;
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__PredId_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1417 "mode_util.m"
              MR_Integer check_hlds__mode_util__ProcId_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1417 "mode_util.m"
              MR_Word check_hlds__mode_util__Args_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1416 "mode_util.m"
              MR_Word check_hlds__mode_util___Attr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1416 "mode_util.m"
              MR_Word check_hlds__mode_util___MTRC_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 6)));
#line 1416 "mode_util.m"
              MR_Word check_hlds__mode_util___Impl_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 7)));

#line 1418 "mode_util.m"
              {
#line 1418 "mode_util.m"
                check_hlds__mode_util__ArgVars_84 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[1], check_hlds__mode_util__Args_162);
              }
#line 1419 "mode_util.m"
              {
#line 1419 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_call_8_p_0(check_hlds__mode_util__PredId_160, check_hlds__mode_util__ProcId_161, check_hlds__mode_util__ArgVars_84, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1424 "mode_util.m"
              if ((check_hlds__mode_util__ExtraArgs_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "mode_util.m"
                *check_hlds__mode_util__InstMapDelta_16 = check_hlds__mode_util__InstMapDelta0_159;
#line 1424 "mode_util.m"
              else
#line 1425 "mode_util.m"
                {
#line 1425 "mode_util.m"
                  MR_Word check_hlds__mode_util__OldInstMapDelta_87;
#line 1425 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgVars_88;
#line 1425 "mode_util.m"
                  MR_Word check_hlds__mode_util__ExtraArgsInstMapDelta_89;
#line 1425 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_118_118;

#line 1426 "mode_util.m"
                  {
#line 1426 "mode_util.m"
                    check_hlds__mode_util__OldInstMapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1427 "mode_util.m"
                  {
#line 1427 "mode_util.m"
                    check_hlds__mode_util__ExtraArgVars_88 = mercury__list__map_2_f_0(check_hlds__mode_util__TypeCtorInfo_184_184, check_hlds__mode_util__TypeInfo_185_185, (MR_Word) &check_hlds__mode_util_scalar_common_3[2], check_hlds__mode_util__ExtraArgs_81);
                  }
#line 1428 "mode_util.m"
                  {
#line 1428 "mode_util.m"
                    check_hlds__mode_util__V_118_118 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_util__ExtraArgVars_88);
                  }
#line 1428 "mode_util.m"
                  {
#line 1428 "mode_util.m"
                    hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__V_118_118, check_hlds__mode_util__OldInstMapDelta_87, &check_hlds__mode_util__ExtraArgsInstMapDelta_89);
                  }
#line 1430 "mode_util.m"
                  {
#line 1430 "mode_util.m"
                    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDelta0_159, check_hlds__mode_util__ExtraArgsInstMapDelta_89, (MR_Integer) 0, check_hlds__mode_util__InstMapDelta_16);
                  }
#line 1425 "mode_util.m"
                }
#line 1433 "mode_util.m"
              *check_hlds__mode_util__GoalExpr_12 = check_hlds__mode_util__GoalExpr0_11;
#line 1417 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 2:
#line 1305 "mode_util.m"
            {
#line 1305 "mode_util.m"
              MR_Word check_hlds__mode_util__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1305 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1305 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals_25;

#line 1306 "mode_util.m"
              {
#line 1306 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_conj_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_24, &check_hlds__mode_util__Goals_25, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1308 "mode_util.m"
              {
#line 1308 "mode_util.m"
                MR_Word base;
#line 1308 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1308 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1308 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ConjType_23));
#line 1308 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Goals_25));
#line 1308 "mode_util.m"
              }
#line 1305 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 3:
#line 1310 "mode_util.m"
            {
#line 1310 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1310 "mode_util.m"
              MR_Word check_hlds__mode_util__Goals_145;

#line 1312 "mode_util.m"
              {
#line 1312 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
#line 1311 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1314 "mode_util.m"
                {
#line 1314 "mode_util.m"
                  check_hlds__mode_util__Goals_145 = check_hlds__mode_util__Goals0_144;
#line 1315 "mode_util.m"
                  {
#line 1315 "mode_util.m"
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1314 "mode_util.m"
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1314 "mode_util.m"
                }
#line 1311 "mode_util.m"
              else
#line 1317 "mode_util.m"
                {
#line 1317 "mode_util.m"
                  MR_Word check_hlds__mode_util__NonLocals_141;

#line 1317 "mode_util.m"
                  {
#line 1317 "mode_util.m"
                    check_hlds__mode_util__NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1318 "mode_util.m"
                  {
#line 1318 "mode_util.m"
                    check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_144, &check_hlds__mode_util__Goals_145, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_141, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
#line 1317 "mode_util.m"
                }
#line 1321 "mode_util.m"
              {
#line 1321 "mode_util.m"
                MR_Word base;
#line 1321 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1321 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1321 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Goals_145));
#line 1321 "mode_util.m"
              }
#line 1310 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 4:
#line 1292 "mode_util.m"
            {
#line 1292 "mode_util.m"
              MR_Word check_hlds__mode_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1292 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1292 "mode_util.m"
              MR_Word check_hlds__mode_util__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1292 "mode_util.m"
              MR_Word check_hlds__mode_util__Cases_21;

#line 1294 "mode_util.m"
              {
#line 1294 "mode_util.m"
                check_hlds__mode_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__mode_util__GoalInfo_13, (MR_Integer) 14);
              }
#line 1293 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1296 "mode_util.m"
                {
#line 1296 "mode_util.m"
                  check_hlds__mode_util__Cases_21 = check_hlds__mode_util__Cases0_20;
#line 1297 "mode_util.m"
                  {
#line 1297 "mode_util.m"
                    *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1296 "mode_util.m"
                  *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1296 "mode_util.m"
                }
#line 1293 "mode_util.m"
              else
#line 1299 "mode_util.m"
                {
#line 1299 "mode_util.m"
                  MR_Word check_hlds__mode_util__NonLocals_22;

#line 1299 "mode_util.m"
                  {
#line 1299 "mode_util.m"
                    check_hlds__mode_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                  }
#line 1300 "mode_util.m"
                  {
#line 1300 "mode_util.m"
                    check_hlds__mode_util__recompute_instmap_delta_cases_10_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Var_18, check_hlds__mode_util__Cases0_20, &check_hlds__mode_util__Cases_21, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_22, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                  }
#line 1299 "mode_util.m"
                }
#line 1303 "mode_util.m"
              {
#line 1303 "mode_util.m"
                MR_Word base;
#line 1303 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1303 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1303 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Var_18));
#line 1303 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Det_19));
#line 1303 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Cases_21));
#line 1303 "mode_util.m"
              }
#line 1292 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 5:
#line 1351 "mode_util.m"
            {
#line 1351 "mode_util.m"
              MR_Word check_hlds__mode_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1351 "mode_util.m"
              MR_Word check_hlds__mode_util__SubGoal0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1351 "mode_util.m"
              MR_Word check_hlds__mode_util__SubGoal_148;
#line 1352 "mode_util.m"
              MR_Word check_hlds__mode_util__FGT_44;
#line 1352 "mode_util.m"
              MR_Word check_hlds__mode_util__V_43_43;

#line 1352 "mode_util.m"
              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1352 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1352 "mode_util.m"
                {
#line 1352 "mode_util.m"
                  check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 1)));
#line 1352 "mode_util.m"
                  check_hlds__mode_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Reason_42, (MR_Integer) 2)));
#line 1360 "mode_util.m"
#line 1360 "mode_util.m"
                  switch (check_hlds__mode_util__FGT_44) {
#line 1360 "mode_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1360 "mode_util.m"
                    case (MR_Integer) 1:
#line 1360 "mode_util.m"
                    case (MR_Integer) 2:
#line 1356 "mode_util.m"
                      {
#line 1356 "mode_util.m"
                        MR_Word check_hlds__mode_util__SubGoalInfo_46;
#line 1358 "mode_util.m"
                        MR_Word check_hlds__mode_util__V_45_45;

#line 1357 "mode_util.m"
                        check_hlds__mode_util__SubGoal_148 = check_hlds__mode_util__SubGoal0_147;
#line 1358 "mode_util.m"
                        check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 0)));
#line 1358 "mode_util.m"
                        check_hlds__mode_util__SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__SubGoal_148, (MR_Integer) 1)));
#line 1359 "mode_util.m"
                        {
#line 1359 "mode_util.m"
                          *check_hlds__mode_util__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__SubGoalInfo_46);
                        }
#line 1356 "mode_util.m"
                        *check_hlds__mode_util__STATE_VARIABLE_RI_106 = check_hlds__mode_util__STATE_VARIABLE_RI_0_105;
#line 1356 "mode_util.m"
                      }
#line 1360 "mode_util.m"
                      break;
#line 1360 "mode_util.m"
                    case (MR_Integer) 0:
#line 1361 "mode_util.m"
                      {
#line 1362 "mode_util.m"
                        {
#line 1362 "mode_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "from_ground_term_initial");
#line 1362 "mode_util.m"
                          return;
                        }
#line 1361 "mode_util.m"
                      }
#line 1360 "mode_util.m"
                      break;
#line 1360 "mode_util.m"
                    case (MR_Integer) 3:
#line 1365 "mode_util.m"
                      {
#line 1365 "mode_util.m"
                        check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                      }
#line 1360 "mode_util.m"
                      break;
#line 1360 "mode_util.m"
                  }
#line 1352 "mode_util.m"
                }
#line 1352 "mode_util.m"
              else
#line 1369 "mode_util.m"
                {
#line 1369 "mode_util.m"
                  check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_147, &check_hlds__mode_util__SubGoal_148, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                }
#line 1372 "mode_util.m"
              {
#line 1372 "mode_util.m"
                MR_Word base;
#line 1372 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1372 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1372 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Reason_42));
#line 1372 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_148));
#line 1372 "mode_util.m"
              }
#line 1351 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 6:
#line 1334 "mode_util.m"
            {
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Cond0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 2)));
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 3)));
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 4)));
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Cond_34;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaCond_35;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapCond_36;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Then_37;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaThen_38;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__Else_39;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaElse_40;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__InstMapDeltaCondThen_41;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_129_129;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_130_130;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_131_131;
#line 1334 "mode_util.m"
              MR_Word check_hlds__mode_util__NonLocals_146;

#line 1335 "mode_util.m"
              {
#line 1335 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Cond0_31, &check_hlds__mode_util__Cond_34, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, &check_hlds__mode_util__STATE_VARIABLE_RI_129_129);
              }
#line 1337 "mode_util.m"
              {
#line 1337 "mode_util.m"
                hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDeltaCond_35, &check_hlds__mode_util__InstMapCond_36);
              }
#line 1338 "mode_util.m"
              {
#line 1338 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Then0_32, &check_hlds__mode_util__Then_37, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapCond_36, &check_hlds__mode_util__InstMapDeltaThen_38, check_hlds__mode_util__STATE_VARIABLE_RI_129_129, &check_hlds__mode_util__STATE_VARIABLE_RI_130_130);
              }
#line 1340 "mode_util.m"
              {
#line 1340 "mode_util.m"
                check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Else0_33, &check_hlds__mode_util__Else_39, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, &check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__STATE_VARIABLE_RI_130_130, &check_hlds__mode_util__STATE_VARIABLE_RI_131_131);
              }
#line 1342 "mode_util.m"
              {
#line 1342 "mode_util.m"
                hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__mode_util__InstMapDeltaCond_35, check_hlds__mode_util__InstMapDeltaThen_38, (MR_Integer) 2, &check_hlds__mode_util__InstMapDeltaCondThen_41);
              }
#line 1344 "mode_util.m"
              {
#line 1344 "mode_util.m"
                check_hlds__mode_util__NonLocals_146 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
              }
#line 1345 "mode_util.m"
              {
#line 1345 "mode_util.m"
                check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_52_95_95_91_54_93_95_48_4_p_0(check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_146, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMapDeltaElse_40, check_hlds__mode_util__InstMapDeltaCondThen_41, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_131_131, check_hlds__mode_util__STATE_VARIABLE_RI_106);
              }
#line 1349 "mode_util.m"
              {
#line 1349 "mode_util.m"
                MR_Word base;
#line 1349 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1349 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1349 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Vars_30));
#line 1349 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Cond_34));
#line 1349 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__Then_37));
#line 1349 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_util__Else_39));
#line 1349 "mode_util.m"
              }
#line 1334 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
          case (MR_Integer) 7:
#line 1435 "mode_util.m"
            {
#line 1435 "mode_util.m"
              MR_Word check_hlds__mode_util__ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__GoalExpr0_11, (MR_Integer) 1)));
#line 1435 "mode_util.m"
              MR_Word check_hlds__mode_util__ShortHand_100;

#line 1451 "mode_util.m"
#line 1451 "mode_util.m"
              switch (MR_tag((MR_Word) check_hlds__mode_util__ShortHand0_90)) {
#line 1451 "mode_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1451 "mode_util.m"
                case (MR_Integer) 0:
#line 1457 "mode_util.m"
                  {
#line 1459 "mode_util.m"
                    {
#line 1459 "mode_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "bi_implication");
#line 1459 "mode_util.m"
                      return;
                    }
#line 1457 "mode_util.m"
                  }
#line 1451 "mode_util.m"
                  break;
#line 1451 "mode_util.m"
                case (MR_Integer) 1:
#line 1438 "mode_util.m"
                  {
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__GoalType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__Outer_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inner_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__MaybeOutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 3)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 4)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 5)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 6)));
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__MainGoal_98;
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__OrElseGoals_99;
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__NonLocals_163;
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__Goals0_164;
#line 1438 "mode_util.m"
                    MR_Word check_hlds__mode_util__Goals_165;

#line 1439 "mode_util.m"
                    {
#line 1439 "mode_util.m"
                      check_hlds__mode_util__Goals0_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 0) = ((MR_Box) (check_hlds__mode_util__MainGoal0_95));
#line 1439 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals0_164, 1) = ((MR_Box) (check_hlds__mode_util__OrElseGoals0_96));
#line 1439 "mode_util.m"
                    }
#line 1440 "mode_util.m"
                    {
#line 1440 "mode_util.m"
                      check_hlds__mode_util__NonLocals_163 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo_13);
                    }
#line 1441 "mode_util.m"
                    {
#line 1441 "mode_util.m"
                      check_hlds__mode_util__recompute_instmap_delta_disj_9_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__Goals0_164, &check_hlds__mode_util__Goals_165, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__NonLocals_163, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
#line 1446 "mode_util.m"
                    if ((check_hlds__mode_util__Goals_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1444 "mode_util.m"
                      {
#line 1445 "mode_util.m"
                        {
#line 1445 "mode_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", (MR_String) "Goals = []");
#line 1445 "mode_util.m"
                          return;
                        }
#line 1444 "mode_util.m"
                      }
#line 1446 "mode_util.m"
                    else
#line 1447 "mode_util.m"
                      {
#line 1447 "mode_util.m"
                        check_hlds__mode_util__MainGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 0)));
#line 1447 "mode_util.m"
                        check_hlds__mode_util__OrElseGoals_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__Goals_165, (MR_Integer) 1)));
#line 1447 "mode_util.m"
                      }
#line 1449 "mode_util.m"
                    {
#line 1449 "mode_util.m"
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__GoalType_91));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__Outer_92));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__Inner_93));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 3) = ((MR_Box) (check_hlds__mode_util__MaybeOutputVars_94));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 4) = ((MR_Box) (check_hlds__mode_util__MainGoal_98));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 5) = ((MR_Box) (check_hlds__mode_util__OrElseGoals_99));
#line 1449 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__ShortHand_100, 6) = ((MR_Box) (check_hlds__mode_util__OrElseInners_97));
#line 1449 "mode_util.m"
                    }
#line 1438 "mode_util.m"
                  }
#line 1451 "mode_util.m"
                  break;
#line 1451 "mode_util.m"
                case (MR_Integer) 2:
#line 1452 "mode_util.m"
                  {
#line 1452 "mode_util.m"
                    MR_Word check_hlds__mode_util__MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 0)));
#line 1452 "mode_util.m"
                    MR_Word check_hlds__mode_util__ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 1)));
#line 1452 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand0_90, (MR_Integer) 2)));
#line 1452 "mode_util.m"
                    MR_Word check_hlds__mode_util__SubGoal_167;

#line 1453 "mode_util.m"
                    {
#line 1453 "mode_util.m"
                      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_10, check_hlds__mode_util__SubGoal0_166, &check_hlds__mode_util__SubGoal_167, check_hlds__mode_util__VarTypes_14, check_hlds__mode_util__InstMap0_15, check_hlds__mode_util__InstMapDelta_16, check_hlds__mode_util__STATE_VARIABLE_RI_0_105, check_hlds__mode_util__STATE_VARIABLE_RI_106);
                    }
#line 1455 "mode_util.m"
                    {
#line 1455 "mode_util.m"
                      check_hlds__mode_util__ShortHand_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 0) = ((MR_Box) (check_hlds__mode_util__MaybeIO_101));
#line 1455 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 1) = ((MR_Box) (check_hlds__mode_util__ResultVar_102));
#line 1455 "mode_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_util__ShortHand_100, 2) = ((MR_Box) (check_hlds__mode_util__SubGoal_167));
#line 1455 "mode_util.m"
                    }
#line 1452 "mode_util.m"
                  }
#line 1451 "mode_util.m"
                  break;
#line 1451 "mode_util.m"
              }
#line 1461 "mode_util.m"
              {
#line 1461 "mode_util.m"
                MR_Word base;
#line 1461 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "mode_util.m"
                *check_hlds__mode_util__GoalExpr_12 = base;
#line 1461 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1461 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__ShortHand_100));
#line 1461 "mode_util.m"
              }
#line 1435 "mode_util.m"
            }
#line 1292 "mode_util.m"
            break;
#line 1292 "mode_util.m"
        }
#line 1292 "mode_util.m"
        break;
#line 1292 "mode_util.m"
    }
#line 1292 "mode_util.m"
  }
#line 1284 "mode_util.m"
}

#line 1228 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_13,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstMapDelta_14,
#line 1228 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_RI_0_39,
#line 1228 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_RI_40)
#line 1228 "mode_util.m"
{
#line 1233 "mode_util.m"
  {
#line 1233 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded = (check_hlds__mode_util__RecomputeAtomic_9 == (MR_Integer) 1);
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 0)));
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_10, (MR_Integer) 1)));
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_32;
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo1_33;
#line 1233 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_38;
#line 1236 "mode_util.m"
    MR_Word check_hlds__mode_util__V_41_41;
#line 1239 "mode_util.m"
    MR_Word check_hlds__mode_util__RHS_19;
#line 1239 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1239 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;
#line 1239 "mode_util.m"
    MR_Word check_hlds__mode_util__V_21_21;
#line 1239 "mode_util.m"
    MR_Word check_hlds__mode_util__V_22_22;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_23_23;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_24_24;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_25_25;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_27_27;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_28_28;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_30_30;
#line 1240 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1236 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1236 "mode_util.m"
      {
#line 1237 "mode_util.m"
        {
#line 1237 "mode_util.m"
          check_hlds__mode_util__V_41_41 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(check_hlds__mode_util__GoalExpr0_16);
        }
#line 1237 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_41_41 == (MR_Integer) 1);
#line 1236 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1236 "mode_util.m"
          {
#line 1239 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
#line 1239 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1239 "mode_util.m"
              {
#line 1239 "mode_util.m"
                check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 0)));
#line 1239 "mode_util.m"
                check_hlds__mode_util__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 1)));
#line 1239 "mode_util.m"
                check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 2)));
#line 1239 "mode_util.m"
                check_hlds__mode_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 3)));
#line 1239 "mode_util.m"
                check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__GoalExpr0_16, (MR_Integer) 4)));
#line 1240 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__RHS_19)) == (MR_mktag((MR_Integer) 2)));
#line 1240 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1240 "mode_util.m"
                  {
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 2)));
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 3)));
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 4)));
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 5)));
#line 1240 "mode_util.m"
                    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__RHS_19, (MR_Integer) 6)));
#line 1240 "mode_util.m"
                  }
#line 1239 "mode_util.m"
              }
#line 1238 "mode_util.m"
            check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1236 "mode_util.m"
          }
#line 1236 "mode_util.m"
      }
#line 1235 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1244 "mode_util.m"
      {
#line 1244 "mode_util.m"
        check_hlds__mode_util__GoalExpr_32 = check_hlds__mode_util__GoalExpr0_16;
#line 1245 "mode_util.m"
        check_hlds__mode_util__GoalInfo1_33 = check_hlds__mode_util__GoalInfo0_17;
#line 1244 "mode_util.m"
        *check_hlds__mode_util__STATE_VARIABLE_RI_40 = check_hlds__mode_util__STATE_VARIABLE_RI_0_39;
#line 1244 "mode_util.m"
      }
#line 1235 "mode_util.m"
    else
#line 1248 "mode_util.m"
      {
#line 1248 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta0_34;
#line 1248 "mode_util.m"
        MR_Word check_hlds__mode_util__NonLocals_35;
#line 1248 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta1_36;

#line 1247 "mode_util.m"
        {
#line 1247 "mode_util.m"
          check_hlds__mode_util__recompute_instmap_delta_2_9_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__GoalExpr0_16, &check_hlds__mode_util__GoalExpr_32, check_hlds__mode_util__GoalInfo0_17, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_13, &check_hlds__mode_util__InstMapDelta0_34, check_hlds__mode_util__STATE_VARIABLE_RI_0_39, check_hlds__mode_util__STATE_VARIABLE_RI_40);
        }
#line 1249 "mode_util.m"
        {
#line 1249 "mode_util.m"
          check_hlds__mode_util__NonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__mode_util__GoalInfo0_17);
        }
#line 1250 "mode_util.m"
        {
#line 1250 "mode_util.m"
          hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__mode_util__NonLocals_35, check_hlds__mode_util__InstMapDelta0_34, &check_hlds__mode_util__InstMapDelta1_36);
        }
#line 1251 "mode_util.m"
        {
#line 1251 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta1_36, check_hlds__mode_util__GoalInfo0_17, &check_hlds__mode_util__GoalInfo1_33);
        }
#line 1248 "mode_util.m"
      }
#line 1255 "mode_util.m"
    {
#line 1255 "mode_util.m"
      check_hlds__mode_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_util__InstMap0_13);
    }
#line 1255 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1256 "mode_util.m"
      {
#line 1256 "mode_util.m"
        MR_Word check_hlds__mode_util__UnreachableInstMapDelta_37;

#line 1256 "mode_util.m"
        {
#line 1256 "mode_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__mode_util__UnreachableInstMapDelta_37);
        }
#line 1257 "mode_util.m"
        {
#line 1257 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__UnreachableInstMapDelta_37, check_hlds__mode_util__GoalInfo1_33, &check_hlds__mode_util__GoalInfo_38);
        }
#line 1256 "mode_util.m"
      }
#line 1255 "mode_util.m"
    else
#line 1260 "mode_util.m"
      check_hlds__mode_util__GoalInfo_38 = check_hlds__mode_util__GoalInfo1_33;
#line 1262 "mode_util.m"
    {
#line 1262 "mode_util.m"
      MR_Word base;
#line 1262 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "mode_util.m"
      *check_hlds__mode_util__Goal_11 = base;
#line 1262 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_32));
#line 1262 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_38));
#line 1262 "mode_util.m"
    }
#line 1263 "mode_util.m"
    {
#line 1263 "mode_util.m"
      *check_hlds__mode_util__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo_38);
    }
#line 1233 "mode_util.m"
  }
#line 1228 "mode_util.m"
}

#line 1139 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__apply_type_subst_3_p_0(
#line 1139 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_4,
#line 1139 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_5,
#line 1139 "mode_util.m"
  MR_Word * check_hlds__mode_util__Type_6)
#line 1139 "mode_util.m"
{
#line 1143 "mode_util.m"
  {
#line 1143 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1143 "mode_util.m"
    {
#line 1143 "mode_util.m"
      check_hlds__mode_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__Subst_5);
    }
#line 1143 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1144 "mode_util.m"
      *check_hlds__mode_util__Type_6 = check_hlds__mode_util__Type0_4;
#line 1143 "mode_util.m"
    else
#line 1146 "mode_util.m"
      {
#line 1146 "mode_util.m"
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__mode_util__Subst_5, check_hlds__mode_util__Type0_4, check_hlds__mode_util__Type_6);
      }
#line 1143 "mode_util.m"
  }
#line 1139 "mode_util.m"
}

#line 1131 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_constructor_arg_types_2_p_0(
#line 1131 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1131 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__2_2)
#line 1131 "mode_util.m"
{
#line 1134 "mode_util.m"
  {
#line 1134 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1134 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1134 "mode_util.m"
      *check_hlds__mode_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1134 "mode_util.m"
    else
#line 1135 "mode_util.m"
      {
#line 1135 "mode_util.m"
        MR_Word check_hlds__mode_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1135 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1135 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 1)));
#line 1135 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgTypes_6;
#line 1136 "mode_util.m"
        MR_Word check_hlds__mode_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 0)));
#line 1136 "mode_util.m"
        MR_Word check_hlds__mode_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 2)));
#line 1136 "mode_util.m"
        MR_Word check_hlds__mode_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Arg_3, (MR_Integer) 3)));

#line 1137 "mode_util.m"
        {
#line 1137 "mode_util.m"
          check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_4, &check_hlds__mode_util__ArgTypes_6);
        }
#line 1135 "mode_util.m"
        {
#line 1135 "mode_util.m"
          MR_Word base;
#line 1135 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "mode_util.m"
          *check_hlds__mode_util__HeadVar__2_2 = base;
#line 1135 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgType_5));
#line 1135 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgTypes_6));
#line 1135 "mode_util.m"
        }
#line 1135 "mode_util.m"
      }
#line 1134 "mode_util.m"
  }
#line 1131 "mode_util.m"
}

#line 1118 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__find_first_matching_constructor_4_p_0(
#line 1118 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 1118 "mode_util.m"
  MR_Integer check_hlds__mode_util__HeadVar__2_2,
#line 1118 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 1118 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 1118 "mode_util.m"
{
#line 4867 "check_hlds.mode_util.c"
  while (MR_TRUE)
#line 4869 "check_hlds.mode_util.c"
    {
#line 4871 "check_hlds.mode_util.c"
      /* tailcall optimized into a loop */
#line 4873 "check_hlds.mode_util.c"
      {
#line 4875 "check_hlds.mode_util.c"
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 4877 "check_hlds.mode_util.c"
        MR_Word check_hlds__mode_util__Ctor_10;
#line 4879 "check_hlds.mode_util.c"
        MR_Word check_hlds__mode_util__Ctors_11;
#line 1125 "mode_util.m"
        MR_Word check_hlds__mode_util__V_17_17;
#line 1125 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_18_18;
#line 1125 "mode_util.m"
        MR_Word check_hlds__mode_util__V_13_13;
#line 1125 "mode_util.m"
        MR_Word check_hlds__mode_util__V_14_14;
#line 1125 "mode_util.m"
        MR_Word check_hlds__mode_util__V_15_15;
#line 1125 "mode_util.m"
        MR_Word check_hlds__mode_util__V_16_16;

#line 4894 "check_hlds.mode_util.c"
        if (check_hlds__mode_util__succeeded)
#line 4896 "check_hlds.mode_util.c"
          {
#line 4898 "check_hlds.mode_util.c"
            check_hlds__mode_util__Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 4900 "check_hlds.mode_util.c"
            check_hlds__mode_util__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 0)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 1)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 2)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 3)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 4)));
#line 1125 "mode_util.m"
            check_hlds__mode_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Ctor_10, (MR_Integer) 5)));
#line 1125 "mode_util.m"
            {
#line 1125 "mode_util.m"
              check_hlds__mode_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_17_17);
            }
#line 1125 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1125 "mode_util.m"
              check_hlds__mode_util__succeeded = (check_hlds__mode_util__HeadVar__2_2 == check_hlds__mode_util__V_18_18);
#line 1125 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1126 "mode_util.m"
              {
#line 1126 "mode_util.m"
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__Ctor_10;
#line 1126 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1126 "mode_util.m"
              }
#line 1125 "mode_util.m"
            else
#line 1128 "mode_util.m"
              {
#line 1128 "mode_util.m"
                /* direct tailcall eliminated */
#line 1128 "mode_util.m"
                {
#line 1128 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__3__tmp_copy_3 = check_hlds__mode_util__Ctors_11;

#line 1128 "mode_util.m"
                  check_hlds__mode_util__HeadVar__3_3 = check_hlds__mode_util__HeadVar__3__tmp_copy_3;
#line 1128 "mode_util.m"
                }
#line 1128 "mode_util.m"
                continue;
#line 1128 "mode_util.m"
              }
#line 4952 "check_hlds.mode_util.c"
          }
#line 4954 "check_hlds.mode_util.c"
        return check_hlds__mode_util__succeeded;
#line 4956 "check_hlds.mode_util.c"
      }
#line 4958 "check_hlds.mode_util.c"
      break;
#line 4960 "check_hlds.mode_util.c"
    }
#line 1118 "mode_util.m"
}

#line 1077 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_3,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeModule_4,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_5,
#line 1077 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__6_6,
#line 1077 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__7_7)
#line 1077 "mode_util.m"
{
#line 1081 "mode_util.m"
  {
#line 1081 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1081 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "mode_util.m"
      *check_hlds__mode_util__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1081 "mode_util.m"
    else
#line 1084 "mode_util.m"
      {
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 0)));
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__6_6, (MR_Integer) 1)));
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_20;
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_21;
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 0)));
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_18, (MR_Integer) 1)));
#line 1084 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsId_27;
#line 1086 "mode_util.m"
        MR_String check_hlds__mode_util__Name_24;
#line 1086 "mode_util.m"
        MR_Integer check_hlds__mode_util__ConsArity_25;
#line 1086 "mode_util.m"
        MR_Word check_hlds__mode_util__V_40_40;
#line 1086 "mode_util.m"
        MR_Word check_hlds__mode_util___ConsTypeCtor_26;
#line 1092 "mode_util.m"
        MR_Word check_hlds__mode_util__MatchingConstructor_31;
#line 1093 "mode_util.m"
        MR_Word check_hlds__mode_util__ConsName_28;
#line 1093 "mode_util.m"
        MR_Integer check_hlds__mode_util__Arity_29;
#line 1093 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30;

#line 1086 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1086 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1086 "mode_util.m"
          {
#line 1086 "mode_util.m"
            check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 1)));
#line 1086 "mode_util.m"
            check_hlds__mode_util__ConsArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 2)));
#line 1086 "mode_util.m"
            check_hlds__mode_util___ConsTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId0_22, (MR_Integer) 3)));
#line 1086 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 1086 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1086 "mode_util.m"
              check_hlds__mode_util__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_40_40, (MR_Integer) 0)));
#line 1086 "mode_util.m"
          }
#line 1086 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1088 "mode_util.m"
          {
#line 1088 "mode_util.m"
            MR_Word check_hlds__mode_util__V_41_41;

#line 1088 "mode_util.m"
            {
#line 1088 "mode_util.m"
              check_hlds__mode_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 0) = ((MR_Box) (check_hlds__mode_util__TypeModule_4));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_41_41, 1) = ((MR_Box) (check_hlds__mode_util__Name_24));
#line 1088 "mode_util.m"
            }
#line 1088 "mode_util.m"
            {
#line 1088 "mode_util.m"
              check_hlds__mode_util__ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 1) = ((MR_Box) (check_hlds__mode_util__V_41_41));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 2) = ((MR_Box) (check_hlds__mode_util__ConsArity_25));
#line 1088 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_3));
#line 1088 "mode_util.m"
            }
#line 1088 "mode_util.m"
          }
#line 1086 "mode_util.m"
        else
#line 1090 "mode_util.m"
          check_hlds__mode_util__ConsId_27 = check_hlds__mode_util__ConsId0_22;
#line 1093 "mode_util.m"
        check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1093 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1093 "mode_util.m"
          {
#line 1093 "mode_util.m"
            check_hlds__mode_util__ConsName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 1)));
#line 1093 "mode_util.m"
            check_hlds__mode_util__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 2)));
#line 1093 "mode_util.m"
            check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_27, (MR_Integer) 3)));
#line 1094 "mode_util.m"
            {
#line 1094 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__mode_util__find_first_matching_constructor_4_p_0(check_hlds__mode_util__ConsName_28, check_hlds__mode_util__Arity_29, check_hlds__mode_util__Constructors_5, &check_hlds__mode_util__MatchingConstructor_31);
            }
#line 1093 "mode_util.m"
          }
#line 1092 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1098 "mode_util.m"
          {
#line 1098 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 3)));
#line 1098 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgTypes_38;
#line 1098 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgInsts_39;
#line 1097 "mode_util.m"
            MR_Word check_hlds__mode_util___ExistQVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 0)));
#line 1097 "mode_util.m"
            MR_Word check_hlds__mode_util___Constraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 1)));
#line 1097 "mode_util.m"
            MR_Word check_hlds__mode_util___Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 2)));
#line 1097 "mode_util.m"
            MR_Integer check_hlds__mode_util___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 4)));
#line 1097 "mode_util.m"
            MR_Word check_hlds__mode_util___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__MatchingConstructor_31, (MR_Integer) 5)));

#line 1099 "mode_util.m"
            {
#line 1099 "mode_util.m"
              check_hlds__mode_util__get_constructor_arg_types_2_p_0(check_hlds__mode_util__Args_35, &check_hlds__mode_util__ArgTypes_38);
            }
#line 1100 "mode_util.m"
            {
#line 1100 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__ArgTypes_38, check_hlds__mode_util__ArgInsts0_23, &check_hlds__mode_util__ArgInsts_39);
            }
#line 1102 "mode_util.m"
            {
#line 1102 "mode_util.m"
              check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1102 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_39));
#line 1102 "mode_util.m"
            }
#line 1098 "mode_util.m"
          }
#line 1092 "mode_util.m"
        else
#line 1108 "mode_util.m"
          {
#line 1108 "mode_util.m"
            check_hlds__mode_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__mode_util__ConsId_27));
#line 1108 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts0_23));
#line 1108 "mode_util.m"
          }
#line 1110 "mode_util.m"
        {
#line 1110 "mode_util.m"
          check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__TypeCtor_3, check_hlds__mode_util__TypeModule_4, check_hlds__mode_util__Constructors_5, check_hlds__mode_util__BoundInsts0_19, &check_hlds__mode_util__BoundInsts_21);
        }
#line 1084 "mode_util.m"
        {
#line 1084 "mode_util.m"
          MR_Word base;
#line 1084 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "mode_util.m"
          *check_hlds__mode_util__HeadVar__7_7 = base;
#line 1084 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__BoundInst_20));
#line 1084 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__BoundInsts_21));
#line 1084 "mode_util.m"
        }
#line 1084 "mode_util.m"
      }
#line 1081 "mode_util.m"
  }
#line 1077 "mode_util.m"
}

#line 1054 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__TupleArgTypes_6,
#line 1054 "mode_util.m"
  MR_Word check_hlds__mode_util__BoundInst0_7,
#line 1054 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInst_8)
#line 1054 "mode_util.m"
{
#line 1057 "mode_util.m"
  {
#line 1057 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1057 "mode_util.m"
    MR_Word check_hlds__mode_util__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 0)));
#line 1057 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst0_7, (MR_Integer) 1)));
#line 1057 "mode_util.m"
    MR_Word check_hlds__mode_util__ArgInsts_15;
#line 1060 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_16_16;
#line 1060 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_17_17;
#line 1060 "mode_util.m"
    MR_Integer check_hlds__mode_util__ArgInstsLen_12;
#line 1060 "mode_util.m"
    MR_Integer check_hlds__mode_util__TupleArgTypesLen_13;
#line 1060 "mode_util.m"
    MR_Integer check_hlds__mode_util__V_11_11;

#line 1060 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Functor_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1060 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1060 "mode_util.m"
      {
#line 1060 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Functor_9, (MR_Integer) 1)));
#line 5227 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1061 "mode_util.m"
        {
#line 1061 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_16_16, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInstsLen_12);
        }
#line 5234 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1062 "mode_util.m"
        {
#line 1062 "mode_util.m"
          mercury__list__length_2_p_0(check_hlds__mode_util__TypeCtorInfo_17_17, check_hlds__mode_util__TupleArgTypes_6, &check_hlds__mode_util__TupleArgTypesLen_13);
        }
#line 1063 "mode_util.m"
        check_hlds__mode_util__succeeded = (check_hlds__mode_util__ArgInstsLen_12 == check_hlds__mode_util__TupleArgTypesLen_13);
#line 1060 "mode_util.m"
      }
#line 1059 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1065 "mode_util.m"
      {
#line 1065 "mode_util.m"
        MR_Word check_hlds__mode_util__Subst_14;

#line 1065 "mode_util.m"
        {
#line 1065 "mode_util.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_14);
        }
#line 1066 "mode_util.m"
        {
#line 1066 "mode_util.m"
          check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_14, check_hlds__mode_util__TupleArgTypes_6, check_hlds__mode_util__ArgInsts0_10, &check_hlds__mode_util__ArgInsts_15);
        }
#line 1065 "mode_util.m"
      }
#line 1059 "mode_util.m"
    else
#line 1073 "mode_util.m"
      check_hlds__mode_util__ArgInsts_15 = check_hlds__mode_util__ArgInsts0_10;
#line 1075 "mode_util.m"
    {
#line 1075 "mode_util.m"
      MR_Word base;
#line 1075 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "mode_util.m"
      *check_hlds__mode_util__BoundInst_8 = base;
#line 1075 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__Functor_9));
#line 1075 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgInsts_15));
#line 1075 "mode_util.m"
    }
#line 1057 "mode_util.m"
  }
#line 1054 "mode_util.m"
}

#line 957 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
#line 957 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 957 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_2,
#line 957 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 957 "mode_util.m"
{
#line 960 "mode_util.m"
  {
#line 960 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 960 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 960 "mode_util.m"
    else
#line 961 "mode_util.m"
      {
#line 961 "mode_util.m"
        MR_Word check_hlds__mode_util__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 961 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_8;
#line 961 "mode_util.m"
        MR_Word check_hlds__mode_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));

#line 962 "mode_util.m"
        {
#line 962 "mode_util.m"
          check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(check_hlds__mode_util__Args_6, check_hlds__mode_util__Inst_2, &check_hlds__mode_util__Insts_8);
        }
#line 961 "mode_util.m"
        {
#line 961 "mode_util.m"
          MR_Word base;
#line 961 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 961 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_2));
#line 961 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_8));
#line 961 "mode_util.m"
        }
#line 961 "mode_util.m"
      }
#line 960 "mode_util.m"
  }
#line 957 "mode_util.m"
}

#line 916 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__default_higher_order_func_inst_3_p_0(
#line 916 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 916 "mode_util.m"
  MR_Word check_hlds__mode_util__PredArgTypes_5,
#line 916 "mode_util.m"
  MR_Word * check_hlds__mode_util__PredInstInfo_6)
#line 916 "mode_util.m"
{
#line 919 "mode_util.m"
  {
#line 919 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 919 "mode_util.m"
    MR_Word check_hlds__mode_util__TypeCtorInfo_27_27;
#line 919 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumPredArgs_10;
#line 919 "mode_util.m"
    MR_Integer check_hlds__mode_util__NumFuncArgs_11;
#line 919 "mode_util.m"
    MR_Word check_hlds__mode_util__FuncArgModes_12;
#line 919 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes0_14;
#line 919 "mode_util.m"
    MR_Word check_hlds__mode_util__PredArgModes_15;

#line 923 "mode_util.m"
    {
#line 923 "mode_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__PredArgTypes_5, &check_hlds__mode_util__NumPredArgs_10);
    }
#line 924 "mode_util.m"
    check_hlds__mode_util__NumFuncArgs_11 = (check_hlds__mode_util__NumPredArgs_10 - (MR_Integer) 1);
#line 5379 "check_hlds.mode_util.c"
    check_hlds__mode_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 925 "mode_util.m"
    {
#line 925 "mode_util.m"
      mercury__list__duplicate_3_p_0(check_hlds__mode_util__TypeCtorInfo_27_27, check_hlds__mode_util__NumFuncArgs_11, ((MR_Box) (&check_hlds__mode_util_scalar_common_1[4])), &check_hlds__mode_util__FuncArgModes_12);
    }
#line 927 "mode_util.m"
    {
#line 927 "mode_util.m"
      mercury__list__append_3_p_1(check_hlds__mode_util__TypeCtorInfo_27_27, check_hlds__mode_util__FuncArgModes_12, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__mode_util_scalar_common_1[6]), &check_hlds__mode_util__PredArgModes0_14);
    }
#line 928 "mode_util.m"
    {
#line 928 "mode_util.m"
      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__PredArgTypes_5, check_hlds__mode_util__PredArgModes0_14, &check_hlds__mode_util__PredArgModes_15);
    }
#line 930 "mode_util.m"
    {
#line 930 "mode_util.m"
      MR_Word base;
#line 930 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 930 "mode_util.m"
      *check_hlds__mode_util__PredInstInfo_6 = base;
#line 930 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 930 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__PredArgModes_15));
#line 930 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 930 "mode_util.m"
    }
#line 919 "mode_util.m"
  }
#line 916 "mode_util.m"
}

#line 801 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Type0_8,
#line 801 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 801 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 801 "mode_util.m"
{
#line 806 "mode_util.m"
  {
#line 806 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 806 "mode_util.m"
#line 806 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__Inst0_9)) {
#line 806 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 806 "mode_util.m"
      case (MR_Integer) 0:
#line 806 "mode_util.m"
#line 806 "mode_util.m"
        switch (MR_unmkbody(check_hlds__mode_util__Inst0_9)) {
#line 806 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 806 "mode_util.m"
          case (MR_Integer) 0:
#line 806 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 1:
#line 879 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
        }
#line 806 "mode_util.m"
        break;
#line 806 "mode_util.m"
      case (MR_Integer) 1:
#line 810 "mode_util.m"
        {
#line 811 "mode_util.m"
          {
#line 811 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_ctor_info_lazily\'/5", (MR_String) "typeinfo already present");
#line 811 "mode_util.m"
            return;
          }
#line 810 "mode_util.m"
        }
#line 806 "mode_util.m"
        break;
#line 806 "mode_util.m"
      case (MR_Integer) 2:
#line 806 "mode_util.m"
        {
#line 806 "mode_util.m"
          MR_Word check_hlds__mode_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 806 "mode_util.m"
          MR_Word check_hlds__mode_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)));

#line 806 "mode_util.m"
          if ((check_hlds__mode_util__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "mode_util.m"
            {
#line 828 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_63;
#line 830 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgTypes_60;
#line 831 "mode_util.m"
              MR_Word check_hlds__mode_util__V_88_88;
#line 831 "mode_util.m"
              MR_Word check_hlds__mode_util__V_18_18;

#line 829 "mode_util.m"
              {
#line 829 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_63);
              }
#line 831 "mode_util.m"
              {
#line 831 "mode_util.m"
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_63, &check_hlds__mode_util__V_18_18, &check_hlds__mode_util__V_88_88, &check_hlds__mode_util__ArgTypes_60);
              }
#line 831 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 831 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_88_88);
#line 830 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 833 "mode_util.m"
                {
#line 833 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_50_50;
#line 833 "mode_util.m"
                  MR_Word check_hlds__mode_util__HOInstInfo_59;

#line 833 "mode_util.m"
                  {
#line 833 "mode_util.m"
                    check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_60, &check_hlds__mode_util__HOInstInfo_59);
                  }
#line 834 "mode_util.m"
                  check_hlds__mode_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_59);
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
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_50_50));
#line 834 "mode_util.m"
                  }
#line 833 "mode_util.m"
                }
#line 830 "mode_util.m"
              else
#line 836 "mode_util.m"
                {
#line 836 "mode_util.m"
                  {
#line 836 "mode_util.m"
                    MR_Word base;
#line 836 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = base;
#line 836 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
#line 836 "mode_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "mode_util.m"
                  }
#line 836 "mode_util.m"
                }
#line 828 "mode_util.m"
            }
#line 806 "mode_util.m"
          else
#line 857 "mode_util.m"
            {
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__V_45_45;
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_72;
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInstInfo0_74 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_91_91), (MR_Integer) 1);
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__PredOrFunc_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 0)));
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 1)));
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeArgRegs_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 2)));
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__Det_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_74, (MR_Integer) 3)));
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__Modes_79;
#line 857 "mode_util.m"
              MR_Word check_hlds__mode_util__PredInstInfo_80;
#line 860 "mode_util.m"
              MR_Word check_hlds__mode_util__ArgTypes_70;
#line 861 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_85_85;
#line 861 "mode_util.m"
              MR_Word check_hlds__mode_util__TypeCtorInfo_86_86;
#line 861 "mode_util.m"
              MR_Word check_hlds__mode_util__V_90_90;
#line 861 "mode_util.m"
              MR_Word check_hlds__mode_util__V_29_29;

#line 859 "mode_util.m"
              {
#line 859 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_72);
              }
#line 861 "mode_util.m"
              {
#line 861 "mode_util.m"
                check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_72, &check_hlds__mode_util__V_29_29, &check_hlds__mode_util__V_90_90, &check_hlds__mode_util__ArgTypes_70);
              }
#line 861 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 861 "mode_util.m"
                {
#line 861 "mode_util.m"
                  check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_75 == check_hlds__mode_util__V_90_90);
#line 861 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 861 "mode_util.m"
                    {
#line 5625 "check_hlds.mode_util.c"
                      check_hlds__mode_util__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 5627 "check_hlds.mode_util.c"
                      check_hlds__mode_util__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 862 "mode_util.m"
                      {
#line 862 "mode_util.m"
                        check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_85_85, check_hlds__mode_util__TypeCtorInfo_86_86, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76);
                      }
#line 861 "mode_util.m"
                    }
#line 861 "mode_util.m"
                }
#line 860 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 864 "mode_util.m"
                {
#line 864 "mode_util.m"
                  check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_70, check_hlds__mode_util__Modes0_76, &check_hlds__mode_util__Modes_79);
                }
#line 860 "mode_util.m"
              else
#line 870 "mode_util.m"
                check_hlds__mode_util__Modes_79 = check_hlds__mode_util__Modes0_76;
#line 872 "mode_util.m"
              {
#line 872 "mode_util.m"
                check_hlds__mode_util__PredInstInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 872 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_75));
#line 872 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 1) = ((MR_Box) (check_hlds__mode_util__Modes_79));
#line 872 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_77));
#line 872 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_80, 3) = ((MR_Box) (check_hlds__mode_util__Det_78));
#line 872 "mode_util.m"
              }
#line 873 "mode_util.m"
              check_hlds__mode_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_80);
#line 873 "mode_util.m"
              {
#line 873 "mode_util.m"
                MR_Word base;
#line 873 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 873 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__V_92_92));
#line 873 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_util__V_45_45));
#line 873 "mode_util.m"
              }
#line 857 "mode_util.m"
            }
#line 806 "mode_util.m"
        }
#line 806 "mode_util.m"
        break;
#line 806 "mode_util.m"
      case (MR_Integer) 3:
#line 806 "mode_util.m"
#line 806 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 0)))) {
#line 806 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 806 "mode_util.m"
          case (MR_Integer) 0:
#line 875 "mode_util.m"
            {
#line 875 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_81;

#line 876 "mode_util.m"
              {
#line 876 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_81);
              }
#line 877 "mode_util.m"
              {
#line 877 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_81, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
              }
#line 875 "mode_util.m"
            }
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 1:
#line 806 "mode_util.m"
            {
#line 806 "mode_util.m"
              MR_Word check_hlds__mode_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 806 "mode_util.m"
              MR_Word check_hlds__mode_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));

#line 806 "mode_util.m"
              if ((check_hlds__mode_util__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "mode_util.m"
                {
#line 813 "mode_util.m"
                  MR_Word check_hlds__mode_util__Type_13;
#line 815 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgTypes_16;
#line 816 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_87_87;
#line 816 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_14_14;

#line 814 "mode_util.m"
                  {
#line 814 "mode_util.m"
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_13);
                  }
#line 816 "mode_util.m"
                  {
#line 816 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_13, &check_hlds__mode_util__V_14_14, &check_hlds__mode_util__V_87_87, &check_hlds__mode_util__ArgTypes_16);
                  }
#line 816 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 816 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_Integer) 1 == check_hlds__mode_util__V_87_87);
#line 815 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 818 "mode_util.m"
                    {
#line 818 "mode_util.m"
                      MR_Word check_hlds__mode_util__HOInstInfo_17;
#line 818 "mode_util.m"
                      MR_Word check_hlds__mode_util__V_54_54;

#line 818 "mode_util.m"
                      {
#line 818 "mode_util.m"
                        check_hlds__mode_util__default_higher_order_func_inst_3_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_16, &check_hlds__mode_util__HOInstInfo_17);
                      }
#line 819 "mode_util.m"
                      check_hlds__mode_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__HOInstInfo_17);
#line 819 "mode_util.m"
                      {
#line 819 "mode_util.m"
                        MR_Word base;
#line 819 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 819 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 819 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 819 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 819 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_54_54));
#line 819 "mode_util.m"
                      }
#line 818 "mode_util.m"
                    }
#line 815 "mode_util.m"
                  else
#line 825 "mode_util.m"
                    {
#line 825 "mode_util.m"
                      {
#line 825 "mode_util.m"
                        MR_Word base;
#line 825 "mode_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 825 "mode_util.m"
                        *check_hlds__mode_util__Inst_10 = base;
#line 825 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 825 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 825 "mode_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "mode_util.m"
                      }
#line 825 "mode_util.m"
                    }
#line 813 "mode_util.m"
                }
#line 806 "mode_util.m"
              else
#line 839 "mode_util.m"
                {
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredInstInfo0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__V_93_93), (MR_Integer) 1);
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 0)));
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 1)));
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 2)));
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo0_20, (MR_Integer) 3)));
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__Modes_27;
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__PredInstInfo_28;
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_47_47;
#line 839 "mode_util.m"
                  MR_Word check_hlds__mode_util__Type_68;
#line 842 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgTypes_66;
#line 843 "mode_util.m"
                  MR_Word check_hlds__mode_util__TypeCtorInfo_83_83;
#line 843 "mode_util.m"
                  MR_Word check_hlds__mode_util__TypeCtorInfo_84_84;
#line 843 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_89_89;
#line 843 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_25_25;

#line 841 "mode_util.m"
                  {
#line 841 "mode_util.m"
                    check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_68);
                  }
#line 843 "mode_util.m"
                  {
#line 843 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__mode_util__Type_68, &check_hlds__mode_util__V_25_25, &check_hlds__mode_util__V_89_89, &check_hlds__mode_util__ArgTypes_66);
                  }
#line 843 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 843 "mode_util.m"
                    {
#line 843 "mode_util.m"
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__PredOrFunc_21 == check_hlds__mode_util__V_89_89);
#line 843 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 843 "mode_util.m"
                        {
#line 5860 "check_hlds.mode_util.c"
                          check_hlds__mode_util__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 5862 "check_hlds.mode_util.c"
                          check_hlds__mode_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 844 "mode_util.m"
                          {
#line 844 "mode_util.m"
                            check_hlds__mode_util__succeeded = mercury__list__same_length_2_p_0(check_hlds__mode_util__TypeCtorInfo_83_83, check_hlds__mode_util__TypeCtorInfo_84_84, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22);
                          }
#line 843 "mode_util.m"
                        }
#line 843 "mode_util.m"
                    }
#line 842 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 846 "mode_util.m"
                    {
#line 846 "mode_util.m"
                      check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__ArgTypes_66, check_hlds__mode_util__Modes0_22, &check_hlds__mode_util__Modes_27);
                    }
#line 842 "mode_util.m"
                  else
#line 852 "mode_util.m"
                    check_hlds__mode_util__Modes_27 = check_hlds__mode_util__Modes0_22;
#line 854 "mode_util.m"
                  {
#line 854 "mode_util.m"
                    check_hlds__mode_util__PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 854 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 0) = ((MR_Box) (check_hlds__mode_util__PredOrFunc_21));
#line 854 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 1) = ((MR_Box) (check_hlds__mode_util__Modes_27));
#line 854 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 2) = ((MR_Box) (check_hlds__mode_util__MaybeArgRegs_23));
#line 854 "mode_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_util__PredInstInfo_28, 3) = ((MR_Box) (check_hlds__mode_util__Det_24));
#line 854 "mode_util.m"
                  }
#line 855 "mode_util.m"
                  check_hlds__mode_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__PredInstInfo_28);
#line 855 "mode_util.m"
                  {
#line 855 "mode_util.m"
                    MR_Word base;
#line 855 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 855 "mode_util.m"
                    *check_hlds__mode_util__Inst_10 = base;
#line 855 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 855 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_94_94));
#line 855 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__V_47_47));
#line 855 "mode_util.m"
                  }
#line 839 "mode_util.m"
                }
#line 806 "mode_util.m"
            }
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 2:
#line 883 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 3:
#line 885 "mode_util.m"
            {
#line 885 "mode_util.m"
              MR_Word check_hlds__mode_util__V_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 885 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 2)));
#line 885 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInst_37;

#line 886 "mode_util.m"
              {
#line 886 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type0_8, check_hlds__mode_util__SubInst0_36, &check_hlds__mode_util__SubInst_37);
              }
#line 888 "mode_util.m"
              {
#line 888 "mode_util.m"
                MR_Word base;
#line 888 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 888 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 888 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 888 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__V_35));
#line 888 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__SubInst_37));
#line 888 "mode_util.m"
              }
#line 885 "mode_util.m"
            }
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 4:
#line 893 "mode_util.m"
            {
#line 893 "mode_util.m"
              MR_Word check_hlds__mode_util__InstName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_9, (MR_Integer) 1)));
#line 893 "mode_util.m"
              MR_Word check_hlds__mode_util__InstName_43;
#line 893 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_82;
#line 895 "mode_util.m"
              MR_Word check_hlds__mode_util__V_41_41;
#line 895 "mode_util.m"
              MR_Word check_hlds__mode_util__V_42_42;

#line 894 "mode_util.m"
              {
#line 894 "mode_util.m"
                check_hlds__mode_util__apply_type_subst_3_p_0(check_hlds__mode_util__Type0_8, check_hlds__mode_util__Subst_7, &check_hlds__mode_util__Type_82);
              }
#line 895 "mode_util.m"
              check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__InstName0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 895 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 895 "mode_util.m"
                {
#line 895 "mode_util.m"
                  check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 1)));
#line 895 "mode_util.m"
                  check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName0_40, (MR_Integer) 2)));
#line 901 "mode_util.m"
                  check_hlds__mode_util__InstName_43 = check_hlds__mode_util__InstName0_40;
#line 895 "mode_util.m"
                }
#line 895 "mode_util.m"
              else
#line 903 "mode_util.m"
                {
#line 903 "mode_util.m"
                  check_hlds__mode_util__InstName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 903 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 903 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 1) = ((MR_Box) (check_hlds__mode_util__Type_82));
#line 903 "mode_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_43, 2) = ((MR_Box) (check_hlds__mode_util__InstName0_40));
#line 903 "mode_util.m"
                }
#line 905 "mode_util.m"
              {
#line 905 "mode_util.m"
                MR_Word base;
#line 905 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "mode_util.m"
                *check_hlds__mode_util__Inst_10 = base;
#line 905 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 905 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_43));
#line 905 "mode_util.m"
              }
#line 893 "mode_util.m"
            }
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
          case (MR_Integer) 5:
#line 891 "mode_util.m"
            *check_hlds__mode_util__Inst_10 = check_hlds__mode_util__Inst0_9;
#line 806 "mode_util.m"
            break;
#line 806 "mode_util.m"
        }
#line 806 "mode_util.m"
        break;
#line 806 "mode_util.m"
    }
#line 806 "mode_util.m"
  }
#line 801 "mode_util.m"
}

#line 662 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 662 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 662 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 662 "mode_util.m"
{
#line 682 "mode_util.m"
  {
#line 682 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 682 "mode_util.m"
    {
#line 682 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
    }
#line 682 "mode_util.m"
  }
#line 662 "mode_util.m"
}

#line 659 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_inst_5_p_0(
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_7,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 659 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_9,
#line 659 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_10)
#line 659 "mode_util.m"
{
#line 679 "mode_util.m"
  {
#line 679 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 679 "mode_util.m"
    {
#line 679 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Subst_7, check_hlds__mode_util__Type_8, check_hlds__mode_util__Inst0_9, check_hlds__mode_util__Inst_10);
    }
#line 679 "mode_util.m"
  }
#line 659 "mode_util.m"
}

#line 625 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_type_into_mode_4_p_0(
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 625 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode0_7,
#line 625 "mode_util.m"
  MR_Word * check_hlds__mode_util__Mode_8)
#line 625 "mode_util.m"
{
#line 628 "mode_util.m"
  {
#line 628 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 628 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst0_9;
#line 628 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst0_10;
#line 628 "mode_util.m"
    MR_Word check_hlds__mode_util__Subst_11;
#line 628 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_12;
#line 628 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_13;

#line 629 "mode_util.m"
    {
#line 629 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode0_7, &check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__FinalInst0_10);
    }
#line 630 "mode_util.m"
    {
#line 630 "mode_util.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_11);
    }
#line 631 "mode_util.m"
    {
#line 631 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__InitialInst0_9, &check_hlds__mode_util__InitialInst_12);
    }
#line 633 "mode_util.m"
    {
#line 633 "mode_util.m"
      check_hlds__mode_util__propagate_type_into_inst_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Subst_11, check_hlds__mode_util__Type_6, check_hlds__mode_util__FinalInst0_10, &check_hlds__mode_util__FinalInst_13);
    }
#line 635 "mode_util.m"
    {
#line 635 "mode_util.m"
      MR_Word base;
#line 635 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "mode_util.m"
      *check_hlds__mode_util__Mode_8 = base;
#line 635 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__InitialInst_12));
#line 635 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__FinalInst_13));
#line 635 "mode_util.m"
    }
#line 628 "mode_util.m"
  }
#line 625 "mode_util.m"
}

#line 466 "mode_util.m"
static MR_bool MR_CALL 
check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(
#line 466 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 466 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_6,
#line 466 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_7)
#line 466 "mode_util.m"
{
#line 470 "mode_util.m"
  while (MR_TRUE)
#line 470 "mode_util.m"
    {
#line 470 "mode_util.m"
      /* tailcall optimized into a loop */
#line 470 "mode_util.m"
      {
#line 470 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 470 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInst_4;
#line 470 "mode_util.m"
        MR_Word check_hlds__mode_util__BoundInsts_5;
#line 471 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgInst0_9;
#line 472 "mode_util.m"
        MR_Word check_hlds__mode_util__InstConsId_8;
#line 472 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;
#line 472 "mode_util.m"
        MR_Word check_hlds__mode_util__V_11_11;

#line 469 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 469 "mode_util.m"
          {
#line 469 "mode_util.m"
            check_hlds__mode_util__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "mode_util.m"
            check_hlds__mode_util__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "mode_util.m"
            check_hlds__mode_util__InstConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 0)));
#line 472 "mode_util.m"
            check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__BoundInst_4, (MR_Integer) 1)));
#line 472 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 472 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 472 "mode_util.m"
              {
#line 472 "mode_util.m"
                check_hlds__mode_util__ArgInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 0)));
#line 472 "mode_util.m"
                check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_10_10, (MR_Integer) 1)));
#line 472 "mode_util.m"
                check_hlds__mode_util__succeeded = (check_hlds__mode_util__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 475 "mode_util.m"
                  {
#line 475 "mode_util.m"
                    check_hlds__mode_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__mode_util__ConsId_6, check_hlds__mode_util__InstConsId_8);
                  }
#line 472 "mode_util.m"
              }
#line 471 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 477 "mode_util.m"
              {
#line 477 "mode_util.m"
                *check_hlds__mode_util__ArgInst_7 = check_hlds__mode_util__ArgInst0_9;
#line 477 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 477 "mode_util.m"
              }
#line 471 "mode_util.m"
            else
#line 479 "mode_util.m"
              {
#line 479 "mode_util.m"
                /* direct tailcall eliminated */
#line 479 "mode_util.m"
                {
#line 479 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__1__tmp_copy_1 = check_hlds__mode_util__BoundInsts_5;

#line 479 "mode_util.m"
                  check_hlds__mode_util__HeadVar__1_1 = check_hlds__mode_util__HeadVar__1__tmp_copy_1;
#line 479 "mode_util.m"
                }
#line 479 "mode_util.m"
                continue;
#line 479 "mode_util.m"
              }
#line 469 "mode_util.m"
          }
#line 470 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 470 "mode_util.m"
      }
#line 470 "mode_util.m"
      break;
#line 470 "mode_util.m"
    }
#line 466 "mode_util.m"
}

#line 423 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__get_single_arg_inst_4_p_0(
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst_6,
#line 423 "mode_util.m"
  MR_Word check_hlds__mode_util__ConsId_7,
#line 423 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgInst_8)
#line 423 "mode_util.m"
{
#line 429 "mode_util.m"
  while (MR_TRUE)
#line 429 "mode_util.m"
    {
#line 429 "mode_util.m"
      /* tailcall optimized into a loop */
#line 429 "mode_util.m"
      {
#line 429 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 429 "mode_util.m"
#line 429 "mode_util.m"
        switch (MR_tag((MR_Word) check_hlds__mode_util__Inst_6)) {
#line 429 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 429 "mode_util.m"
          case (MR_Integer) 0:
#line 429 "mode_util.m"
#line 429 "mode_util.m"
            switch (MR_unmkbody(check_hlds__mode_util__Inst_6)) {
#line 429 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 429 "mode_util.m"
              case (MR_Integer) 0:
#line 448 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 1:
#line 434 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
            }
#line 429 "mode_util.m"
            break;
#line 429 "mode_util.m"
          case (MR_Integer) 1:
#line 451 "mode_util.m"
            *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "mode_util.m"
            break;
#line 429 "mode_util.m"
          case (MR_Integer) 2:
#line 453 "mode_util.m"
            {
#line 453 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 0)));
#line 453 "mode_util.m"
              MR_Word check_hlds__mode_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 454 "mode_util.m"
              {
#line 454 "mode_util.m"
                MR_Word base;
#line 454 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "mode_util.m"
                *check_hlds__mode_util__ArgInst_8 = base;
#line 454 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_util__Uniq_32));
#line 454 "mode_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "mode_util.m"
              }
#line 453 "mode_util.m"
            }
#line 429 "mode_util.m"
            break;
#line 429 "mode_util.m"
          case (MR_Integer) 3:
#line 429 "mode_util.m"
#line 429 "mode_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 0)))) {
#line 429 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 429 "mode_util.m"
              case (MR_Integer) 0:
#line 439 "mode_util.m"
                {
#line 439 "mode_util.m"
                  MR_Word check_hlds__mode_util__List_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 3)));
#line 439 "mode_util.m"
                  MR_Word check_hlds__mode_util___Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 439 "mode_util.m"
                  MR_Word check_hlds__mode_util___InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 440 "mode_util.m"
                  MR_Word check_hlds__mode_util__ArgInst0_16;

#line 440 "mode_util.m"
                  {
#line 440 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__mode_util__get_single_arg_inst_in_bound_insts_3_p_0(check_hlds__mode_util__List_15, check_hlds__mode_util__ConsId_7, &check_hlds__mode_util__ArgInst0_16);
                  }
#line 440 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 441 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = check_hlds__mode_util__ArgInst0_16;
#line 440 "mode_util.m"
                  else
#line 444 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 439 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 1:
#line 436 "mode_util.m"
                {
#line 436 "mode_util.m"
                  MR_Word check_hlds__mode_util__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 436 "mode_util.m"
                  MR_Word check_hlds__mode_util___PredInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));

#line 437 "mode_util.m"
                  {
#line 437 "mode_util.m"
                    MR_Word base;
#line 437 "mode_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "mode_util.m"
                    *check_hlds__mode_util__ArgInst_8 = base;
#line 437 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 437 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_11));
#line 437 "mode_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "mode_util.m"
                  }
#line 436 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 2:
#line 459 "mode_util.m"
                {
#line 460 "mode_util.m"
                  {
#line 460 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "inst_var");
#line 460 "mode_util.m"
                    return;
                  }
#line 459 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 3:
#line 462 "mode_util.m"
                {
#line 462 "mode_util.m"
                  MR_Word check_hlds__mode_util__InsideInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 2)));
#line 462 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));

#line 463 "mode_util.m"
                  /* direct tailcall eliminated */
#line 463 "mode_util.m"
                  {
#line 463 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__InsideInst_23;

#line 463 "mode_util.m"
                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 463 "mode_util.m"
                  }
#line 463 "mode_util.m"
                  continue;
#line 462 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 4:
#line 429 "mode_util.m"
                {
#line 429 "mode_util.m"
                  MR_Word check_hlds__mode_util__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_6, (MR_Integer) 1)));
#line 429 "mode_util.m"
                  MR_Word check_hlds__mode_util__NamedInst_10;

#line 430 "mode_util.m"
                  {
#line 430 "mode_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__InstName_9, &check_hlds__mode_util__NamedInst_10);
                  }
#line 431 "mode_util.m"
                  /* direct tailcall eliminated */
#line 431 "mode_util.m"
                  {
#line 431 "mode_util.m"
                    MR_Word check_hlds__mode_util__Inst__tmp_copy_6 = check_hlds__mode_util__NamedInst_10;

#line 431 "mode_util.m"
                    check_hlds__mode_util__Inst_6 = check_hlds__mode_util__Inst__tmp_copy_6;
#line 431 "mode_util.m"
                  }
#line 431 "mode_util.m"
                  continue;
#line 429 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
              case (MR_Integer) 5:
#line 456 "mode_util.m"
                {
#line 457 "mode_util.m"
                  {
#line 457 "mode_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", (MR_String) "abstract insts not supported");
#line 457 "mode_util.m"
                    return;
                  }
#line 456 "mode_util.m"
                }
#line 429 "mode_util.m"
                break;
#line 429 "mode_util.m"
            }
#line 429 "mode_util.m"
            break;
#line 429 "mode_util.m"
        }
#line 429 "mode_util.m"
      }
#line 429 "mode_util.m"
      break;
#line 429 "mode_util.m"
    }
#line 423 "mode_util.m"
}

#line 308 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_7,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_8,
#line 308 "mode_util.m"
  MR_Word check_hlds__mode_util__ContainingTypes_9,
#line 308 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_10)
#line 308 "mode_util.m"
{
#line 317 "mode_util.m"
  while (MR_TRUE)
#line 317 "mode_util.m"
    {
#line 317 "mode_util.m"
      /* tailcall optimized into a loop */
#line 317 "mode_util.m"
      {
#line 317 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 317 "mode_util.m"
        MR_Word check_hlds__mode_util__FunctorName_11;
#line 317 "mode_util.m"
        MR_Word check_hlds__mode_util__ArgType_12;
#line 317 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_13;
#line 322 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_22_22;

#line 319 "mode_util.m"
        {
#line 319 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Type_8, &check_hlds__mode_util__FunctorName_11, &check_hlds__mode_util__ArgType_12);
        }
#line 319 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 319 "mode_util.m"
          {
#line 321 "mode_util.m"
            {
#line 321 "mode_util.m"
              check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__mode_util__Type_8, &check_hlds__mode_util__TypeCtor_13);
            }
#line 319 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 319 "mode_util.m"
              {
#line 6588 "check_hlds.mode_util.c"
                check_hlds__mode_util__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 322 "mode_util.m"
                {
#line 322 "mode_util.m"
                  check_hlds__mode_util__succeeded = mercury__list__member_2_p_0(check_hlds__mode_util__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__mode_util__TypeCtor_13)), check_hlds__mode_util__ContainingTypes_9);
                }
#line 322 "mode_util.m"
                check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 319 "mode_util.m"
              }
#line 319 "mode_util.m"
          }
#line 317 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 328 "mode_util.m"
          {
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_14;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_15;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__ConsId_16;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialArgInst_17;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalArgInst_18;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeOfArg_19;
#line 328 "mode_util.m"
            MR_Word check_hlds__mode_util__V_21_21;

#line 328 "mode_util.m"
            {
#line 328 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_14, &check_hlds__mode_util__FinalInst_15);
            }
#line 329 "mode_util.m"
            {
#line 329 "mode_util.m"
              check_hlds__mode_util__ConsId_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 329 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 329 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 1) = ((MR_Box) (check_hlds__mode_util__FunctorName_11));
#line 329 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 2) = ((MR_Box) ((MR_Integer) 1));
#line 329 "mode_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__mode_util__ConsId_16, 3) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 329 "mode_util.m"
            }
#line 330 "mode_util.m"
            {
#line 330 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_14, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__InitialArgInst_17);
            }
#line 331 "mode_util.m"
            {
#line 331 "mode_util.m"
              check_hlds__mode_util__get_single_arg_inst_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_15, check_hlds__mode_util__ConsId_16, &check_hlds__mode_util__FinalArgInst_18);
            }
#line 332 "mode_util.m"
            {
#line 332 "mode_util.m"
              check_hlds__mode_util__ModeOfArg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 0) = ((MR_Box) (check_hlds__mode_util__InitialArgInst_17));
#line 332 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__ModeOfArg_19, 1) = ((MR_Box) (check_hlds__mode_util__FinalArgInst_18));
#line 332 "mode_util.m"
            }
#line 334 "mode_util.m"
            {
#line 334 "mode_util.m"
              check_hlds__mode_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 0) = ((MR_Box) (check_hlds__mode_util__TypeCtor_13));
#line 334 "mode_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_21_21, 1) = ((MR_Box) (check_hlds__mode_util__ContainingTypes_9));
#line 334 "mode_util.m"
            }
#line 333 "mode_util.m"
            /* direct tailcall eliminated */
#line 333 "mode_util.m"
            {
#line 333 "mode_util.m"
              MR_Word check_hlds__mode_util__Mode__tmp_copy_7 = check_hlds__mode_util__ModeOfArg_19;
#line 333 "mode_util.m"
              MR_Word check_hlds__mode_util__Type__tmp_copy_8 = check_hlds__mode_util__ArgType_12;
#line 333 "mode_util.m"
              MR_Word check_hlds__mode_util__ContainingTypes__tmp_copy_9 = check_hlds__mode_util__V_21_21;

#line 333 "mode_util.m"
              check_hlds__mode_util__ContainingTypes_9 = check_hlds__mode_util__ContainingTypes__tmp_copy_9;
#line 333 "mode_util.m"
              check_hlds__mode_util__Type_8 = check_hlds__mode_util__Type__tmp_copy_8;
#line 333 "mode_util.m"
              check_hlds__mode_util__Mode_7 = check_hlds__mode_util__Mode__tmp_copy_7;
#line 333 "mode_util.m"
            }
#line 333 "mode_util.m"
            continue;
#line 328 "mode_util.m"
          }
#line 317 "mode_util.m"
        else
#line 342 "mode_util.m"
          {
#line 342 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_26;
#line 342 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalInst_27;

#line 343 "mode_util.m"
            {
#line 343 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_7, &check_hlds__mode_util__InitialInst_26, &check_hlds__mode_util__FinalInst_27);
            }
#line 344 "mode_util.m"
            {
#line 344 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__InitialInst_26);
            }
#line 344 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 345 "mode_util.m"
              *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 0;
#line 344 "mode_util.m"
            else
#line 346 "mode_util.m"
              {
#line 346 "mode_util.m"
                {
#line 346 "mode_util.m"
                  check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__FinalInst_27);
                }
#line 346 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 347 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 1;
#line 346 "mode_util.m"
                else
#line 349 "mode_util.m"
                  *check_hlds__mode_util__ArgMode_10 = (MR_Integer) 2;
#line 346 "mode_util.m"
              }
#line 342 "mode_util.m"
          }
#line 317 "mode_util.m"
      }
#line 317 "mode_util.m"
      break;
#line 317 "mode_util.m"
    }
#line 308 "mode_util.m"
}

#line 204 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__partition_args_5_p_0(
#line 204 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeInfo_for_T_36,
#line 204 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 204 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 204 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 204 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4,
#line 204 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
#line 204 "mode_util.m"
{
#line 1885 "mode_util.m"
  {
#line 1885 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1885 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1885 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1889 "mode_util.m"
        {
#line 1889 "mode_util.m"
          *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1889 "mode_util.m"
          *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1889 "mode_util.m"
        }
#line 1885 "mode_util.m"
      else
#line 1885 "mode_util.m"
        {
#line 1886 "mode_util.m"
          {
#line 1886 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1886 "mode_util.m"
            return;
          }
#line 1885 "mode_util.m"
        }
#line 1885 "mode_util.m"
    else
#line 1885 "mode_util.m"
      {
#line 1885 "mode_util.m"
        MR_Word check_hlds__mode_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1885 "mode_util.m"
        MR_Word check_hlds__mode_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1885 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1887 "mode_util.m"
          {
#line 1888 "mode_util.m"
            {
#line 1888 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.partition_args\'/5", (MR_String) "length mismatch");
#line 1888 "mode_util.m"
              return;
            }
#line 1887 "mode_util.m"
          }
#line 1885 "mode_util.m"
        else
#line 1891 "mode_util.m"
          {
#line 1891 "mode_util.m"
            MR_Box check_hlds__mode_util__Arg_26 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0));
#line 1891 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1891 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1891 "mode_util.m"
            MR_Word check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 258 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialInst_41;
#line 259 "mode_util.m"
            MR_Word check_hlds__mode_util___FinalInst_42;

#line 1892 "mode_util.m"
            {
#line 1892 "mode_util.m"
              check_hlds__mode_util__partition_args_5_p_0(check_hlds__mode_util__TypeInfo_for_T_36, check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_37_37, check_hlds__mode_util__Args_27, &check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32, &check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33);
            }
#line 259 "mode_util.m"
            {
#line 259 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_38_38, &check_hlds__mode_util__InitialInst_41, &check_hlds__mode_util___FinalInst_42);
            }
#line 260 "mode_util.m"
            {
#line 260 "mode_util.m"
              check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__InitialInst_41);
            }
#line 1893 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1894 "mode_util.m"
              {
#line 1894 "mode_util.m"
                {
#line 1894 "mode_util.m"
                  MR_Word base;
#line 1894 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1894 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1894 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32));
#line 1894 "mode_util.m"
                }
#line 1894 "mode_util.m"
                *check_hlds__mode_util__HeadVar__5_5 = check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33;
#line 1894 "mode_util.m"
              }
#line 1893 "mode_util.m"
            else
#line 1896 "mode_util.m"
              {
#line 1896 "mode_util.m"
                {
#line 1896 "mode_util.m"
                  MR_Word base;
#line 1896 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "mode_util.m"
                  *check_hlds__mode_util__HeadVar__5_5 = base;
#line 1896 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__mode_util__Arg_26;
#line 1896 "mode_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_OutputArgs_33_33));
#line 1896 "mode_util.m"
                }
#line 1896 "mode_util.m"
                *check_hlds__mode_util__HeadVar__4_4 = check_hlds__mode_util__STATE_VARIABLE_InputArgs_32_32;
#line 1896 "mode_util.m"
              }
#line 1891 "mode_util.m"
          }
#line 1885 "mode_util.m"
      }
#line 1885 "mode_util.m"
  }
#line 204 "mode_util.m"
}

#line 196 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_inst_4_p_0(
#line 196 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 196 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 196 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_7,
#line 196 "mode_util.m"
  MR_Word * check_hlds__mode_util__NormalisedInst_8)
#line 196 "mode_util.m"
{
#line 1843 "mode_util.m"
  {
#line 1843 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1843 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_9;
#line 1850 "mode_util.m"
    MR_Word check_hlds__mode_util__V_10_10;
#line 1850 "mode_util.m"
    MR_Word check_hlds__mode_util__V_11_11;
#line 1850 "mode_util.m"
    MR_Word check_hlds__mode_util__V_12_12;

#line 1849 "mode_util.m"
    {
#line 1849 "mode_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst0_7, &check_hlds__mode_util__Inst_9);
    }
#line 1850 "mode_util.m"
    check_hlds__mode_util__succeeded = ((((MR_tag((MR_Word) check_hlds__mode_util__Inst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1850 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1850 "mode_util.m"
      {
#line 1850 "mode_util.m"
        check_hlds__mode_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 1)));
#line 1850 "mode_util.m"
        check_hlds__mode_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 2)));
#line 1850 "mode_util.m"
        check_hlds__mode_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst_9, (MR_Integer) 3)));
#line 1851 "mode_util.m"
        {
#line 1851 "mode_util.m"
          MR_Word check_hlds__mode_util__Uniq_13;

#line 1855 "mode_util.m"
          {
#line 1855 "mode_util.m"
            check_hlds__mode_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__mode_util__Type_6);
          }
#line 1855 "mode_util.m"
          check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1855 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1855 "mode_util.m"
            {
#line 1857 "mode_util.m"
              {
#line 1857 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1855 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1855 "mode_util.m"
                {
#line 1858 "mode_util.m"
                  {
#line 1858 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1858 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1859 "mode_util.m"
                    {
#line 1859 "mode_util.m"
                      check_hlds__mode_util__Uniq_13 = (MR_Integer) 1;
#line 1859 "mode_util.m"
                      check_hlds__mode_util__succeeded = MR_TRUE;
#line 1859 "mode_util.m"
                    }
#line 1858 "mode_util.m"
                  else
#line 1860 "mode_util.m"
                    {
#line 1860 "mode_util.m"
                      {
#line 1860 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1860 "mode_util.m"
                      if (check_hlds__mode_util__succeeded)
#line 1860 "mode_util.m"
                        {
#line 1861 "mode_util.m"
                          check_hlds__mode_util__Uniq_13 = (MR_Integer) 2;
#line 1861 "mode_util.m"
                          check_hlds__mode_util__succeeded = MR_TRUE;
#line 1860 "mode_util.m"
                        }
#line 1860 "mode_util.m"
                    }
#line 1855 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1855 "mode_util.m"
                    {
#line 1865 "mode_util.m"
                      {
#line 1865 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1865 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1855 "mode_util.m"
                    }
#line 1855 "mode_util.m"
                }
#line 1855 "mode_util.m"
            }
#line 1851 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 1867 "mode_util.m"
            {
#line 1867 "mode_util.m"
              {
#line 1867 "mode_util.m"
                MR_Word base;
#line 1867 "mode_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = base;
#line 1867 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1867 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_13));
#line 1867 "mode_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1867 "mode_util.m"
              }
#line 1867 "mode_util.m"
            }
#line 1851 "mode_util.m"
          else
#line 1868 "mode_util.m"
            {
#line 1869 "mode_util.m"
              {
#line 1869 "mode_util.m"
                check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
              }
#line 1869 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1869 "mode_util.m"
                {
#line 1870 "mode_util.m"
                  {
#line 1870 "mode_util.m"
                    check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                  }
#line 1870 "mode_util.m"
                  check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1869 "mode_util.m"
                  if (check_hlds__mode_util__succeeded)
#line 1869 "mode_util.m"
                    {
#line 1871 "mode_util.m"
                      {
#line 1871 "mode_util.m"
                        check_hlds__mode_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Inst_9);
                      }
#line 1871 "mode_util.m"
                      check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 1869 "mode_util.m"
                    }
#line 1869 "mode_util.m"
                }
#line 1868 "mode_util.m"
              if (check_hlds__mode_util__succeeded)
#line 1873 "mode_util.m"
                {
#line 1873 "mode_util.m"
                  *check_hlds__mode_util__NormalisedInst_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__mode_util_scalar_common_3[0]);
#line 1873 "mode_util.m"
                }
#line 1868 "mode_util.m"
              else
#line 1877 "mode_util.m"
                *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1868 "mode_util.m"
            }
#line 1851 "mode_util.m"
        }
#line 1850 "mode_util.m"
      }
#line 1850 "mode_util.m"
    else
#line 1880 "mode_util.m"
      *check_hlds__mode_util__NormalisedInst_8 = check_hlds__mode_util__Inst_9;
#line 1843 "mode_util.m"
  }
#line 196 "mode_util.m"
}

#line 193 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__normalise_insts_4_p_0(
#line 193 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 193 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 193 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 193 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 193 "mode_util.m"
{
#line 1833 "mode_util.m"
  {
#line 1833 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1833 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1833 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1833 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1833 "mode_util.m"
      else
#line 1834 "mode_util.m"
        {
#line 1835 "mode_util.m"
          {
#line 1835 "mode_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1835 "mode_util.m"
            return;
          }
#line 1834 "mode_util.m"
        }
#line 1833 "mode_util.m"
    else
#line 1833 "mode_util.m"
      {
#line 1833 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1833 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1833 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1836 "mode_util.m"
          {
#line 1837 "mode_util.m"
            {
#line 1837 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.normalise_insts\'/4", (MR_String) "length mismatch");
#line 1837 "mode_util.m"
              return;
            }
#line 1836 "mode_util.m"
          }
#line 1833 "mode_util.m"
        else
#line 1839 "mode_util.m"
          {
#line 1839 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1839 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1839 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_25;
#line 1839 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_26;

#line 1840 "mode_util.m"
            {
#line 1840 "mode_util.m"
              check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Inst0_23, &check_hlds__mode_util__Inst_25);
            }
#line 1841 "mode_util.m"
            {
#line 1841 "mode_util.m"
              check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Insts0_24, &check_hlds__mode_util__Insts_26);
            }
#line 1839 "mode_util.m"
            {
#line 1839 "mode_util.m"
              MR_Word base;
#line 1839 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 1839 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_25));
#line 1839 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_26));
#line 1839 "mode_util.m"
            }
#line 1839 "mode_util.m"
          }
#line 1833 "mode_util.m"
      }
#line 1833 "mode_util.m"
  }
#line 193 "mode_util.m"
}

#line 188 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(
#line 188 "mode_util.m"
  MR_Word check_hlds__mode_util__Var_6,
#line 188 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_7,
#line 188 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap_8,
#line 188 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_9,
#line 188 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_10)
#line 188 "mode_util.m"
{
#line 1817 "mode_util.m"
  {
#line 1817 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 0)));
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Goal0_9, (MR_Integer) 1)));
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMapDelta0_13;
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst0_14;
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_15;
#line 1817 "mode_util.m"
    MR_Word check_hlds__mode_util__GoalInfo_16;

#line 1819 "mode_util.m"
    {
#line 1819 "mode_util.m"
      check_hlds__mode_util__InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__mode_util__GoalInfo0_12);
    }
#line 1820 "mode_util.m"
    {
#line 1820 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap0_7, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst0_14);
    }
#line 1821 "mode_util.m"
    {
#line 1821 "mode_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_util__InstMap_8, check_hlds__mode_util__Var_6, &check_hlds__mode_util__Inst_15);
    }
#line 1822 "mode_util.m"
    {
#line 1822 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_util__Inst_15, check_hlds__mode_util__Inst0_14);
    }
#line 1822 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1823 "mode_util.m"
      check_hlds__mode_util__GoalInfo_16 = check_hlds__mode_util__GoalInfo0_12;
#line 1822 "mode_util.m"
    else
#line 1825 "mode_util.m"
      {
#line 1825 "mode_util.m"
        MR_Word check_hlds__mode_util__InstMapDelta_17;

#line 1825 "mode_util.m"
        {
#line 1825 "mode_util.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__mode_util__Var_6, check_hlds__mode_util__Inst_15, check_hlds__mode_util__InstMapDelta0_13, &check_hlds__mode_util__InstMapDelta_17);
        }
#line 1826 "mode_util.m"
        {
#line 1826 "mode_util.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__mode_util__InstMapDelta_17, check_hlds__mode_util__GoalInfo0_12, &check_hlds__mode_util__GoalInfo_16);
        }
#line 1825 "mode_util.m"
      }
#line 1828 "mode_util.m"
    {
#line 1828 "mode_util.m"
      MR_Word base;
#line 1828 "mode_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1828 "mode_util.m"
      *check_hlds__mode_util__Goal_10 = base;
#line 1828 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_util__GoalExpr_11));
#line 1828 "mode_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_util__GoalInfo_16));
#line 1828 "mode_util.m"
    }
#line 1817 "mode_util.m"
  }
#line 188 "mode_util.m"
}

#line 181 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
#line 181 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 181 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 181 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 181 "mode_util.m"
{
#line 1803 "mode_util.m"
  {
#line 1803 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 1803 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1803 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1803 "mode_util.m"
    else
#line 1804 "mode_util.m"
      {
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLive_8;
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util__IsLives_9;
#line 1804 "mode_util.m"
        MR_Word check_hlds__mode_util__FinalInst_11;
#line 1807 "mode_util.m"
        MR_Word check_hlds__mode_util___InitialInst_10;

#line 1807 "mode_util.m"
        {
#line 1807 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util___InitialInst_10, &check_hlds__mode_util__FinalInst_11);
        }
#line 1808 "mode_util.m"
        {
#line 1808 "mode_util.m"
          check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__FinalInst_11);
        }
#line 1808 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 1809 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 1;
#line 1808 "mode_util.m"
        else
#line 1811 "mode_util.m"
          check_hlds__mode_util__IsLive_8 = (MR_Integer) 0;
#line 1813 "mode_util.m"
        {
#line 1813 "mode_util.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__IsLives_9);
        }
#line 1804 "mode_util.m"
        {
#line 1804 "mode_util.m"
          MR_Word base;
#line 1804 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 1804 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__IsLive_8));
#line 1804 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__IsLives_9));
#line 1804 "mode_util.m"
        }
#line 1804 "mode_util.m"
      }
#line 1803 "mode_util.m"
  }
#line 181 "mode_util.m"
}

#line 969 "mode_util.m"
static void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1(
#line 969 "mode_util.m"
  MR_Box check_hlds__mode_util__closure_arg,
#line 969 "mode_util.m"
  MR_Box check_hlds__mode_util__wrapper_arg_1,
#line 969 "mode_util.m"
  MR_Box * check_hlds__mode_util__wrapper_arg_2)
#line 969 "mode_util.m"
{
#line 969 "mode_util.m"
  {
#line 969 "mode_util.m"
    MR_Box check_hlds__mode_util__closure = check_hlds__mode_util__closure_arg;
#line 969 "mode_util.m"
    MR_Word check_hlds__mode_util__conv0_BoundInst_8;

#line 969 "mode_util.m"
    {
#line 969 "mode_util.m"
      check_hlds__mode_util__propagate_ctor_info_tuple_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_util__wrapper_arg_1), &check_hlds__mode_util__conv0_BoundInst_8);
    }
#line 969 "mode_util.m"
    *check_hlds__mode_util__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_util__conv0_BoundInst_8));
#line 969 "mode_util.m"
  }
#line 969 "mode_util.m"
}

#line 175 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(
#line 175 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 175 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_6,
#line 175 "mode_util.m"
  MR_Word check_hlds__mode_util__Inst0_7,
#line 175 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_8)
#line 175 "mode_util.m"
{
#line 964 "mode_util.m"
  {
#line 964 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 1)));
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__InstResults0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 2)));
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__BoundInsts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__Inst0_7, (MR_Integer) 3)));
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__BoundInsts_13;
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__PropagatedResult_14;
#line 964 "mode_util.m"
    MR_Word check_hlds__mode_util__ConstructNewInst_15;
#line 966 "mode_util.m"
    MR_Word check_hlds__mode_util__TupleArgTypes_12;

#line 967 "mode_util.m"
    {
#line 967 "mode_util.m"
      check_hlds__mode_util__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TupleArgTypes_12);
    }
#line 966 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 970 "mode_util.m"
      {
#line 970 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtorInfo_64_64;
#line 970 "mode_util.m"
        MR_Word check_hlds__mode_util__V_44_44;

#line 969 "mode_util.m"
        {
#line 969 "mode_util.m"
          check_hlds__mode_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 969 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 0) = ((MR_Box) (&check_hlds__mode_util_scalar_common_2[0]));
#line 969 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 1) = ((MR_Box) (check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0_1));
#line 969 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 969 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 3) = ((MR_Box) (check_hlds__mode_util__ModuleInfo_5));
#line 969 "mode_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_44_44, 4) = ((MR_Box) (check_hlds__mode_util__TupleArgTypes_12));
#line 969 "mode_util.m"
        }
#line 7476 "check_hlds.mode_util.c"
        check_hlds__mode_util__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 969 "mode_util.m"
        {
#line 969 "mode_util.m"
          mercury__list__map_3_p_0(check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__TypeCtorInfo_64_64, check_hlds__mode_util__V_44_44, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts_13);
        }
#line 972 "mode_util.m"
        check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "mode_util.m"
        check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
#line 970 "mode_util.m"
      }
#line 966 "mode_util.m"
    else
#line 974 "mode_util.m"
      {
#line 974 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeCtor_16;
#line 974 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeArgs_17;
#line 974 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeModule_18;
#line 974 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeParams_23;
#line 974 "mode_util.m"
        MR_Word check_hlds__mode_util__Constructors_25;
#line 975 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeTable_21;
#line 975 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeDefn_22;
#line 975 "mode_util.m"
        MR_Word check_hlds__mode_util__TypeBody_24;
#line 975 "mode_util.m"
        MR_Word check_hlds__mode_util__V_45_45;
#line 976 "mode_util.m"
        MR_Integer check_hlds__mode_util__V_20_20;
#line 976 "mode_util.m"
        MR_String check_hlds__mode_util__V_19_19;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_54_54;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_55_55;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_56_56;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_57_57;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_58_58;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_59_59;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_60_60;
#line 981 "mode_util.m"
        MR_Word check_hlds__mode_util__V_61_61;

#line 975 "mode_util.m"
        {
#line 975 "mode_util.m"
          check_hlds__mode_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__mode_util__Type_6, &check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeArgs_17);
        }
#line 975 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 975 "mode_util.m"
          {
#line 976 "mode_util.m"
            check_hlds__mode_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 0)));
#line 976 "mode_util.m"
            check_hlds__mode_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__TypeCtor_16, (MR_Integer) 1)));
#line 976 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 976 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 976 "mode_util.m"
              {
#line 976 "mode_util.m"
                check_hlds__mode_util__TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 0)));
#line 976 "mode_util.m"
                check_hlds__mode_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__V_45_45, (MR_Integer) 1)));
#line 977 "mode_util.m"
                {
#line 977 "mode_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__mode_util__ModuleInfo_5, &check_hlds__mode_util__TypeTable_21);
                }
#line 978 "mode_util.m"
                {
#line 978 "mode_util.m"
                  check_hlds__mode_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__mode_util__TypeTable_21, check_hlds__mode_util__TypeCtor_16, &check_hlds__mode_util__TypeDefn_22);
                }
#line 975 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 975 "mode_util.m"
                  {
#line 979 "mode_util.m"
                    {
#line 979 "mode_util.m"
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeParams_23);
                    }
#line 980 "mode_util.m"
                    {
#line 980 "mode_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__mode_util__TypeDefn_22, &check_hlds__mode_util__TypeBody_24);
                    }
#line 981 "mode_util.m"
                    check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 981 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 981 "mode_util.m"
                      {
#line 981 "mode_util.m"
                        check_hlds__mode_util__Constructors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 0)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 1)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 2)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 3)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 4)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 5)));
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 981 "mode_util.m"
                        check_hlds__mode_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__TypeBody_24, (MR_Integer) 7)));
#line 981 "mode_util.m"
                      }
#line 975 "mode_util.m"
                  }
#line 976 "mode_util.m"
              }
#line 975 "mode_util.m"
          }
#line 974 "mode_util.m"
        if (check_hlds__mode_util__succeeded)
#line 983 "mode_util.m"
          {
#line 983 "mode_util.m"
            MR_Word check_hlds__mode_util__PropagatedResult0_31;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__PropagatedTypeCtor_32;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__V_26_26;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__V_27_27;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__V_28_28;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__V_29_29;
#line 984 "mode_util.m"
            MR_Word check_hlds__mode_util__V_30_30;

#line 984 "mode_util.m"
            check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) == (MR_mktag((MR_Integer) 1)));
#line 984 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 984 "mode_util.m"
              {
#line 984 "mode_util.m"
                check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
#line 984 "mode_util.m"
                check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
#line 984 "mode_util.m"
                check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
#line 984 "mode_util.m"
                check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
#line 984 "mode_util.m"
                check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
#line 984 "mode_util.m"
                check_hlds__mode_util__PropagatedResult0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));
#line 985 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__PropagatedResult0_31)) == (MR_mktag((MR_Integer) 1)));
#line 985 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 985 "mode_util.m"
                  {
#line 985 "mode_util.m"
                    check_hlds__mode_util__PropagatedTypeCtor_32 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_util__PropagatedResult0_31), (MR_Integer) 1);
#line 987 "mode_util.m"
                    {
#line 987 "mode_util.m"
                      check_hlds__mode_util__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__mode_util__PropagatedTypeCtor_32, check_hlds__mode_util__TypeCtor_16);
                    }
#line 984 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 988 "mode_util.m"
                      check_hlds__mode_util__succeeded = (check_hlds__mode_util__TypeParams_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "mode_util.m"
                  }
#line 984 "mode_util.m"
              }
#line 983 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 990 "mode_util.m"
              {
#line 990 "mode_util.m"
                check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
#line 991 "mode_util.m"
                check_hlds__mode_util__PropagatedResult_14 = check_hlds__mode_util__PropagatedResult0_31;
#line 992 "mode_util.m"
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
#line 990 "mode_util.m"
              }
#line 983 "mode_util.m"
            else
#line 994 "mode_util.m"
              {
#line 994 "mode_util.m"
                MR_Word check_hlds__mode_util__ArgSubst_33;
#line 994 "mode_util.m"
                MR_Word check_hlds__mode_util__BoundInsts1_34;

#line 994 "mode_util.m"
                {
#line 994 "mode_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__TypeParams_23, check_hlds__mode_util__TypeArgs_17, &check_hlds__mode_util__ArgSubst_33);
                }
#line 995 "mode_util.m"
                {
#line 995 "mode_util.m"
                  check_hlds__mode_util__propagate_ctor_info_into_bound_functors_7_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__ArgSubst_33, check_hlds__mode_util__TypeCtor_16, check_hlds__mode_util__TypeModule_18, check_hlds__mode_util__Constructors_25, check_hlds__mode_util__BoundInsts0_11, &check_hlds__mode_util__BoundInsts1_34);
                }
#line 997 "mode_util.m"
                {
#line 997 "mode_util.m"
                  mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__mode_util__BoundInsts1_34, &check_hlds__mode_util__BoundInsts_13);
                }
#line 998 "mode_util.m"
                check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__mode_util__TypeCtor_16);
#line 999 "mode_util.m"
                check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 1;
#line 994 "mode_util.m"
              }
#line 983 "mode_util.m"
          }
#line 974 "mode_util.m"
        else
#line 1003 "mode_util.m"
          {
#line 1003 "mode_util.m"
            check_hlds__mode_util__BoundInsts_13 = check_hlds__mode_util__BoundInsts0_11;
#line 1004 "mode_util.m"
            check_hlds__mode_util__PropagatedResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "mode_util.m"
            check_hlds__mode_util__ConstructNewInst_15 = (MR_Integer) 0;
#line 1003 "mode_util.m"
          }
#line 974 "mode_util.m"
      }
#line 1015 "mode_util.m"
#line 1015 "mode_util.m"
    switch (check_hlds__mode_util__ConstructNewInst_15) {
#line 1015 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "mode_util.m"
      case (MR_Integer) 0:
#line 1014 "mode_util.m"
        *check_hlds__mode_util__Inst_8 = check_hlds__mode_util__Inst0_7;
#line 1015 "mode_util.m"
        break;
#line 1015 "mode_util.m"
      case (MR_Integer) 1:
#line 1020 "mode_util.m"
        if ((check_hlds__mode_util__BoundInsts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "mode_util.m"
          *check_hlds__mode_util__Inst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1020 "mode_util.m"
        else
#line 1021 "mode_util.m"
          {
#line 1021 "mode_util.m"
            MR_Word check_hlds__mode_util__InstResults_37;

#line 1025 "mode_util.m"
#line 1025 "mode_util.m"
            switch (MR_tag((MR_Word) check_hlds__mode_util__InstResults0_10)) {
#line 1025 "mode_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1025 "mode_util.m"
              case (MR_Integer) 0:
#line 1025 "mode_util.m"
#line 1025 "mode_util.m"
                switch (MR_unmkbody(check_hlds__mode_util__InstResults0_10)) {
#line 1025 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1025 "mode_util.m"
                  case (MR_Integer) 0:
#line 1026 "mode_util.m"
                    {
#line 1027 "mode_util.m"
                      {
#line 1027 "mode_util.m"
                        check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
#line 1027 "mode_util.m"
                      }
#line 1026 "mode_util.m"
                    }
#line 1025 "mode_util.m"
                    break;
#line 1025 "mode_util.m"
                  case (MR_Integer) 1:
#line 1024 "mode_util.m"
                    check_hlds__mode_util__InstResults_37 = check_hlds__mode_util__InstResults0_10;
#line 1025 "mode_util.m"
                    break;
#line 1025 "mode_util.m"
                }
#line 1025 "mode_util.m"
                break;
#line 1025 "mode_util.m"
              case (MR_Integer) 1:
#line 1034 "mode_util.m"
                {
#line 1034 "mode_util.m"
                  MR_Word check_hlds__mode_util__GroundNessResult0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 0)));
#line 1034 "mode_util.m"
                  MR_Word check_hlds__mode_util__ContainsAnyResult_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 1)));
#line 1033 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 2)));
#line 1033 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 3)));
#line 1033 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 4)));
#line 1033 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults0_10, (MR_Integer) 5)));

#line 1039 "mode_util.m"
                  {
#line 1039 "mode_util.m"
                    check_hlds__mode_util__InstResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 0) = ((MR_Box) (check_hlds__mode_util__GroundNessResult0_38));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 1) = ((MR_Box) (check_hlds__mode_util__ContainsAnyResult_39));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "mode_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstResults_37, 5) = ((MR_Box) (check_hlds__mode_util__PropagatedResult_14));
#line 1039 "mode_util.m"
                  }
#line 1034 "mode_util.m"
                }
#line 1025 "mode_util.m"
                break;
#line 1025 "mode_util.m"
            }
#line 1050 "mode_util.m"
            {
#line 1050 "mode_util.m"
              MR_Word base;
#line 1050 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "mode_util.m"
              *check_hlds__mode_util__Inst_8 = base;
#line 1050 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1050 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_9));
#line 1050 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__InstResults_37));
#line 1050 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_util__BoundInsts_13));
#line 1050 "mode_util.m"
            }
#line 1021 "mode_util.m"
          }
#line 1015 "mode_util.m"
        break;
#line 1015 "mode_util.m"
    }
#line 964 "mode_util.m"
  }
#line 175 "mode_util.m"
}

#line 164 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 164 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 164 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 164 "mode_util.m"
{
#line 939 "mode_util.m"
  {
#line 939 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 939 "mode_util.m"
    {
#line 939 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
    }
#line 939 "mode_util.m"
  }
#line 164 "mode_util.m"
}

#line 156 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__constructors_to_bound_insts_5_p_0(
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__Uniq_7,
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeCtor_8,
#line 156 "mode_util.m"
  MR_Word check_hlds__mode_util__Constructors_9,
#line 156 "mode_util.m"
  MR_Word * check_hlds__mode_util__BoundInsts_10)
#line 156 "mode_util.m"
{
#line 934 "mode_util.m"
  {
#line 934 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 934 "mode_util.m"
    {
#line 934 "mode_util.m"
      check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(check_hlds__mode_util__Uniq_7, check_hlds__mode_util__TypeCtor_8, check_hlds__mode_util__Constructors_9, check_hlds__mode_util__BoundInsts_10);
    }
#line 934 "mode_util.m"
  }
#line 156 "mode_util.m"
}

#line 148 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(
#line 148 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 148 "mode_util.m"
  MR_Word check_hlds__mode_util__Subst_2,
#line 148 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 148 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__4_4,
#line 148 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__5_5)
#line 148 "mode_util.m"
{
#line 612 "mode_util.m"
  {
#line 612 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 612 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "mode_util.m"
        *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "mode_util.m"
      else
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
#line 612 "mode_util.m"
    else
#line 612 "mode_util.m"
      {
#line 612 "mode_util.m"
        MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 612 "mode_util.m"
        MR_Word check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));

#line 612 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "mode_util.m"
          {
#line 619 "mode_util.m"
            *check_hlds__mode_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "mode_util.m"
            {
#line 620 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
#line 620 "mode_util.m"
              return;
            }
#line 619 "mode_util.m"
          }
#line 612 "mode_util.m"
        else
#line 614 "mode_util.m"
          {
#line 614 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 0)));
#line 614 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__4_4, (MR_Integer) 1)));
#line 614 "mode_util.m"
            MR_Word check_hlds__mode_util__Inst_14;
#line 614 "mode_util.m"
            MR_Word check_hlds__mode_util__Insts_15;

#line 615 "mode_util.m"
            {
#line 615 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_inst_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_31_31, check_hlds__mode_util__Inst0_12, &check_hlds__mode_util__Inst_14);
            }
#line 616 "mode_util.m"
            {
#line 616 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_inst_list_5_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__Subst_2, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Insts0_13, &check_hlds__mode_util__Insts_15);
            }
#line 614 "mode_util.m"
            {
#line 614 "mode_util.m"
              MR_Word base;
#line 614 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "mode_util.m"
              *check_hlds__mode_util__HeadVar__5_5 = base;
#line 614 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_14));
#line 614 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_15));
#line 614 "mode_util.m"
            }
#line 614 "mode_util.m"
          }
#line 612 "mode_util.m"
      }
#line 612 "mode_util.m"
  }
#line 148 "mode_util.m"
}

#line 141 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(
#line 141 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_1,
#line 141 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 141 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 141 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 141 "mode_util.m"
{
#line 602 "mode_util.m"
  {
#line 602 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 602 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "mode_util.m"
      else
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
#line 602 "mode_util.m"
    else
#line 602 "mode_util.m"
      {
#line 602 "mode_util.m"
        MR_Word check_hlds__mode_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 602 "mode_util.m"
        MR_Word check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 602 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "mode_util.m"
          {
#line 609 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "mode_util.m"
            {
#line 610 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
#line 610 "mode_util.m"
              return;
            }
#line 609 "mode_util.m"
          }
#line 602 "mode_util.m"
        else
#line 604 "mode_util.m"
          {
#line 604 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 604 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 604 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_11;
#line 604 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_12;

#line 605 "mode_util.m"
            {
#line 605 "mode_util.m"
              check_hlds__mode_util__propagate_type_into_mode_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_26_26, check_hlds__mode_util__Mode0_9, &check_hlds__mode_util__Mode_11);
            }
#line 606 "mode_util.m"
            {
#line 606 "mode_util.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__mode_util__ModuleInfo_1, check_hlds__mode_util__V_25_25, check_hlds__mode_util__Modes0_10, &check_hlds__mode_util__Modes_12);
            }
#line 604 "mode_util.m"
            {
#line 604 "mode_util.m"
              MR_Word base;
#line 604 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 604 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Mode_11));
#line 604 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Modes_12));
#line 604 "mode_util.m"
            }
#line 604 "mode_util.m"
          }
#line 602 "mode_util.m"
      }
#line 602 "mode_util.m"
  }
#line 141 "mode_util.m"
}

#line 133 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_8_p_0(
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_9,
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__Goal0_10,
#line 133 "mode_util.m"
  MR_Word * check_hlds__mode_util__Goal_11,
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_12,
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__InstVarSet_13,
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__InstMap0_14,
#line 133 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo0_15,
#line 133 "mode_util.m"
  MR_Word * check_hlds__mode_util__ModuleInfo_16)
#line 133 "mode_util.m"
{
#line 1222 "mode_util.m"
  {
#line 1222 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1222 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_17;
#line 1222 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_19;
#line 1224 "mode_util.m"
    MR_Word check_hlds__mode_util__V_18_18;
#line 1226 "mode_util.m"
    MR_Word check_hlds__mode_util__V_20_20;

#line 1223 "mode_util.m"
    {
#line 1223 "mode_util.m"
      check_hlds__mode_util__RI0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 0) = ((MR_Box) (check_hlds__mode_util__ModuleInfo0_15));
#line 1223 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_17, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_13));
#line 1223 "mode_util.m"
    }
#line 1224 "mode_util.m"
    {
#line 1224 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_9, check_hlds__mode_util__Goal0_10, check_hlds__mode_util__Goal_11, check_hlds__mode_util__VarTypes_12, check_hlds__mode_util__InstMap0_14, &check_hlds__mode_util__V_18_18, check_hlds__mode_util__RI0_17, &check_hlds__mode_util__RI_19);
    }
#line 1226 "mode_util.m"
    *check_hlds__mode_util__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 0)));
#line 1226 "mode_util.m"
    check_hlds__mode_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_19, (MR_Integer) 1)));
#line 1222 "mode_util.m"
  }
#line 133 "mode_util.m"
}

#line 130 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0(
#line 130 "mode_util.m"
  MR_Word check_hlds__mode_util__RecomputeAtomic_6,
#line 130 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14,
#line 130 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15,
#line 130 "mode_util.m"
  MR_Word check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16,
#line 130 "mode_util.m"
  MR_Word * check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17)
#line 130 "mode_util.m"
{
#line 1212 "mode_util.m"
  {
#line 1212 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__InstMap0_9;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__VarTypes_10;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal0_11;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__InstVarSet_12;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__Goal_13;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__RI0_28;
#line 1212 "mode_util.m"
    MR_Word check_hlds__mode_util__RI_30;
#line 1224 "mode_util.m"
    MR_Word check_hlds__mode_util__V_29_29;
#line 1226 "mode_util.m"
    MR_Word check_hlds__mode_util__V_31_31;

#line 1213 "mode_util.m"
    {
#line 1213 "mode_util.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__mode_util__InstMap0_9);
    }
#line 1214 "mode_util.m"
    {
#line 1214 "mode_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__VarTypes_10);
    }
#line 1215 "mode_util.m"
    {
#line 1215 "mode_util.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__Goal0_11);
    }
#line 1216 "mode_util.m"
    {
#line 1216 "mode_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, &check_hlds__mode_util__InstVarSet_12);
    }
#line 1223 "mode_util.m"
    {
#line 1223 "mode_util.m"
      check_hlds__mode_util__RI0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 0) = ((MR_Box) (check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_0_16));
#line 1223 "mode_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI0_28, 1) = ((MR_Box) (check_hlds__mode_util__InstVarSet_12));
#line 1223 "mode_util.m"
    }
#line 1224 "mode_util.m"
    {
#line 1224 "mode_util.m"
      check_hlds__mode_util__recompute_instmap_delta_1_8_p_0(check_hlds__mode_util__RecomputeAtomic_6, check_hlds__mode_util__Goal0_11, &check_hlds__mode_util__Goal_13, check_hlds__mode_util__VarTypes_10, check_hlds__mode_util__InstMap0_9, &check_hlds__mode_util__V_29_29, check_hlds__mode_util__RI0_28, &check_hlds__mode_util__RI_30);
    }
#line 1226 "mode_util.m"
    *check_hlds__mode_util__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 0)));
#line 1226 "mode_util.m"
    check_hlds__mode_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__RI_30, (MR_Integer) 1)));
#line 1219 "mode_util.m"
    {
#line 1219 "mode_util.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_util__Goal_13, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_0_14, check_hlds__mode_util__STATE_VARIABLE_ProcInfo_15);
    }
#line 1212 "mode_util.m"
  }
#line 130 "mode_util.m"
}

#line 115 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__inst_lookup_3_p_0(
#line 115 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 115 "mode_util.m"
  MR_Word check_hlds__mode_util__InstName_5,
#line 115 "mode_util.m"
  MR_Word * check_hlds__mode_util__Inst_6)
#line 115 "mode_util.m"
{
#line 502 "mode_util.m"
  {
#line 502 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 502 "mode_util.m"
#line 502 "mode_util.m"
    switch (MR_tag((MR_Word) check_hlds__mode_util__InstName_5)) {
#line 502 "mode_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 502 "mode_util.m"
      case (MR_Integer) 0:
#line 573 "mode_util.m"
        {
#line 573 "mode_util.m"
          MR_Word check_hlds__mode_util__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 573 "mode_util.m"
          MR_Word check_hlds__mode_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 573 "mode_util.m"
          MR_Word check_hlds__mode_util__UserInstTable_33;
#line 573 "mode_util.m"
          MR_Integer check_hlds__mode_util__Arity_34;
#line 573 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_66;
#line 577 "mode_util.m"
          MR_Word check_hlds__mode_util__InstDefn_35;
#line 577 "mode_util.m"
          MR_Word check_hlds__mode_util__V_48_48;
#line 577 "mode_util.m"
          MR_Box check_hlds__mode_util__conv0_InstDefn_35;

#line 574 "mode_util.m"
          {
#line 574 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_66);
          }
#line 575 "mode_util.m"
          {
#line 575 "mode_util.m"
            hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__mode_util__InstTable_66, &check_hlds__mode_util__UserInstTable_33);
          }
#line 576 "mode_util.m"
          {
#line 576 "mode_util.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_32, &check_hlds__mode_util__Arity_34);
          }
#line 577 "mode_util.m"
          {
#line 577 "mode_util.m"
            check_hlds__mode_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 0) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 577 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_48_48, 1) = ((MR_Box) (check_hlds__mode_util__Arity_34));
#line 577 "mode_util.m"
          }
#line 577 "mode_util.m"
          {
#line 577 "mode_util.m"
            check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__mode_util__UserInstTable_33, ((MR_Box) (check_hlds__mode_util__V_48_48)), &check_hlds__mode_util__conv0_InstDefn_35);
          }
#line 577 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 577 "mode_util.m"
            {
#line 577 "mode_util.m"
              check_hlds__mode_util__InstDefn_35 = ((MR_Word) check_hlds__mode_util__conv0_InstDefn_35);
#line 577 "mode_util.m"
              check_hlds__mode_util__succeeded = MR_TRUE;
#line 577 "mode_util.m"
            }
#line 577 "mode_util.m"
          if (check_hlds__mode_util__succeeded)
#line 579 "mode_util.m"
            {
#line 579 "mode_util.m"
              MR_Word check_hlds__mode_util__Params_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 1)));
#line 579 "mode_util.m"
              MR_Word check_hlds__mode_util__InstBody_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 2)));
#line 578 "mode_util.m"
              MR_Word check_hlds__mode_util___VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 0)));
#line 578 "mode_util.m"
              MR_Word check_hlds__mode_util___MMTC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 3)));
#line 578 "mode_util.m"
              MR_Word check_hlds__mode_util___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 4)));
#line 578 "mode_util.m"
              MR_Word check_hlds__mode_util___Status_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__InstDefn_35, (MR_Integer) 5)));

#line 1156 "mode_util.m"
              if ((check_hlds__mode_util__InstBody_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "mode_util.m"
                {
#line 1160 "mode_util.m"
                  MR_Word base;
#line 1160 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 1160 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1160 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 1160 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
#line 1160 "mode_util.m"
                }
#line 1156 "mode_util.m"
              else
#line 1156 "mode_util.m"
                {
#line 1156 "mode_util.m"
                  MR_Word check_hlds__mode_util__Inst0_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstBody_38, (MR_Integer) 0)));

#line 1157 "mode_util.m"
                  {
#line 1157 "mode_util.m"
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(check_hlds__mode_util__Params_37, check_hlds__mode_util__Args_32, check_hlds__mode_util__Inst0_92, check_hlds__mode_util__Inst_6);
                  }
#line 1156 "mode_util.m"
                }
#line 579 "mode_util.m"
            }
#line 577 "mode_util.m"
          else
#line 582 "mode_util.m"
            {
#line 582 "mode_util.m"
              MR_Word base;
#line 582 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 582 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 582 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 582 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__Name_31));
#line 582 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_util__Args_32));
#line 582 "mode_util.m"
            }
#line 573 "mode_util.m"
        }
#line 502 "mode_util.m"
        break;
#line 502 "mode_util.m"
      case (MR_Integer) 1:
#line 502 "mode_util.m"
        {
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__Real_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__InstName_5, (MR_Integer) 3)));
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__UnifyInstInfo_11;
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_12;
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__UnifyInstTable_13;
#line 502 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInstDet_14;

#line 503 "mode_util.m"
          {
#line 503 "mode_util.m"
            check_hlds__mode_util__UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 0) = ((MR_Box) (check_hlds__mode_util__Live_7));
#line 503 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 1) = ((MR_Box) (check_hlds__mode_util__Real_8));
#line 503 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 2) = ((MR_Box) (check_hlds__mode_util__InstA_9));
#line 503 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__UnifyInstInfo_11, 3) = ((MR_Box) (check_hlds__mode_util__InstB_10));
#line 503 "mode_util.m"
          }
#line 504 "mode_util.m"
          {
#line 504 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_12);
          }
#line 505 "mode_util.m"
          {
#line 505 "mode_util.m"
            hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__mode_util__InstTable_12, &check_hlds__mode_util__UnifyInstTable_13);
          }
#line 506 "mode_util.m"
          {
#line 506 "mode_util.m"
            hlds__hlds_data__lookup_unify_inst_3_p_0(check_hlds__mode_util__UnifyInstTable_13, check_hlds__mode_util__UnifyInstInfo_11, &check_hlds__mode_util__MaybeInstDet_14);
          }
#line 509 "mode_util.m"
          if ((check_hlds__mode_util__MaybeInstDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "mode_util.m"
            {
#line 511 "mode_util.m"
              MR_Word base;
#line 511 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 511 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 511 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 511 "mode_util.m"
            }
#line 509 "mode_util.m"
          else
#line 508 "mode_util.m"
            {
#line 508 "mode_util.m"
              MR_Word check_hlds__mode_util__V_15_15;

#line 508 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 0)));
#line 508 "mode_util.m"
              check_hlds__mode_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_14, (MR_Integer) 1)));
#line 508 "mode_util.m"
            }
#line 502 "mode_util.m"
        }
#line 502 "mode_util.m"
        break;
#line 502 "mode_util.m"
      case (MR_Integer) 2:
#line 514 "mode_util.m"
        {
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__MergeInstInfo_16;
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__MergeInstTable_17;
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__MaybeInst_18;
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__InstA_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 0)));
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__InstB_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 514 "mode_util.m"
          MR_Word check_hlds__mode_util__InstTable_51;

#line 515 "mode_util.m"
          {
#line 515 "mode_util.m"
            check_hlds__mode_util__MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 0) = ((MR_Box) (check_hlds__mode_util__InstA_49));
#line 515 "mode_util.m"
            MR_hl_field(MR_mktag(0), check_hlds__mode_util__MergeInstInfo_16, 1) = ((MR_Box) (check_hlds__mode_util__InstB_50));
#line 515 "mode_util.m"
          }
#line 516 "mode_util.m"
          {
#line 516 "mode_util.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_51);
          }
#line 517 "mode_util.m"
          {
#line 517 "mode_util.m"
            hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__mode_util__InstTable_51, &check_hlds__mode_util__MergeInstTable_17);
          }
#line 518 "mode_util.m"
          {
#line 518 "mode_util.m"
            hlds__hlds_data__lookup_merge_inst_3_p_0(check_hlds__mode_util__MergeInstTable_17, check_hlds__mode_util__MergeInstInfo_16, &check_hlds__mode_util__MaybeInst_18);
          }
#line 521 "mode_util.m"
          if ((check_hlds__mode_util__MaybeInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 523 "mode_util.m"
            {
#line 523 "mode_util.m"
              MR_Word base;
#line 523 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "mode_util.m"
              *check_hlds__mode_util__Inst_6 = base;
#line 523 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 523 "mode_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 523 "mode_util.m"
            }
#line 521 "mode_util.m"
          else
#line 520 "mode_util.m"
            *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_18, (MR_Integer) 0)));
#line 514 "mode_util.m"
        }
#line 502 "mode_util.m"
        break;
#line 502 "mode_util.m"
      case (MR_Integer) 3:
#line 502 "mode_util.m"
#line 502 "mode_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 0)))) {
#line 502 "mode_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 502 "mode_util.m"
          case (MR_Integer) 0:
#line 526 "mode_util.m"
            {
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__GroundInstInfo_21;
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__GroundInstTable_22;
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__Live_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__Real_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_54;
#line 526 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInstDet_55;

#line 527 "mode_util.m"
              {
#line 527 "mode_util.m"
                check_hlds__mode_util__GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_19));
#line 527 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__GroundInstInfo_21, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_20 | ((((check_hlds__mode_util__Live_52 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_53 << (MR_Integer) 4)))))));
#line 527 "mode_util.m"
              }
#line 528 "mode_util.m"
              {
#line 528 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_54);
              }
#line 529 "mode_util.m"
              {
#line 529 "mode_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__mode_util__InstTable_54, &check_hlds__mode_util__GroundInstTable_22);
              }
#line 530 "mode_util.m"
              {
#line 530 "mode_util.m"
                hlds__hlds_data__lookup_ground_inst_3_p_0(check_hlds__mode_util__GroundInstTable_22, check_hlds__mode_util__GroundInstInfo_21, &check_hlds__mode_util__MaybeInstDet_55);
              }
#line 533 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInstDet_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "mode_util.m"
                {
#line 535 "mode_util.m"
                  MR_Word base;
#line 535 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 535 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 535 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 535 "mode_util.m"
                }
#line 533 "mode_util.m"
              else
#line 532 "mode_util.m"
                {
#line 532 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_23_23;

#line 532 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 0)));
#line 532 "mode_util.m"
                  check_hlds__mode_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_55, (MR_Integer) 1)));
#line 532 "mode_util.m"
                }
#line 526 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
          case (MR_Integer) 1:
#line 538 "mode_util.m"
            {
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__AnyInstInfo_24;
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__AnyInstTable_25;
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__Live_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__Real_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_58;
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInstDet_59;
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__SubInstName_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 538 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_61 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)))) & (MR_Integer) 7);

#line 539 "mode_util.m"
              {
#line 539 "mode_util.m"
                check_hlds__mode_util__AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 0) = ((MR_Box) (check_hlds__mode_util__SubInstName_60));
#line 539 "mode_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_util__AnyInstInfo_24, 1) = ((MR_Box) ((check_hlds__mode_util__Uniq_61 | ((((check_hlds__mode_util__Live_56 << (MR_Integer) 3)) | ((check_hlds__mode_util__Real_57 << (MR_Integer) 4)))))));
#line 539 "mode_util.m"
              }
#line 540 "mode_util.m"
              {
#line 540 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_58);
              }
#line 541 "mode_util.m"
              {
#line 541 "mode_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__mode_util__InstTable_58, &check_hlds__mode_util__AnyInstTable_25);
              }
#line 542 "mode_util.m"
              {
#line 542 "mode_util.m"
                hlds__hlds_data__lookup_any_inst_3_p_0(check_hlds__mode_util__AnyInstTable_25, check_hlds__mode_util__AnyInstInfo_24, &check_hlds__mode_util__MaybeInstDet_59);
              }
#line 545 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInstDet_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "mode_util.m"
                {
#line 547 "mode_util.m"
                  MR_Word base;
#line 547 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 547 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 547 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 547 "mode_util.m"
                }
#line 545 "mode_util.m"
              else
#line 544 "mode_util.m"
                {
#line 544 "mode_util.m"
                  MR_Word check_hlds__mode_util__V_26_26;

#line 544 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 0)));
#line 544 "mode_util.m"
                  check_hlds__mode_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInstDet_59, (MR_Integer) 1)));
#line 544 "mode_util.m"
                }
#line 538 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
          case (MR_Integer) 2:
#line 550 "mode_util.m"
            {
#line 550 "mode_util.m"
              MR_Word check_hlds__mode_util__SharedInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 550 "mode_util.m"
              MR_Word check_hlds__mode_util__SharedInstTable_28;
#line 550 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_62;
#line 550 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInst_63;

#line 551 "mode_util.m"
              {
#line 551 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_62);
              }
#line 552 "mode_util.m"
              {
#line 552 "mode_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__mode_util__InstTable_62, &check_hlds__mode_util__SharedInstTable_28);
              }
#line 553 "mode_util.m"
              {
#line 553 "mode_util.m"
                hlds__hlds_data__lookup_shared_inst_3_p_0(check_hlds__mode_util__SharedInstTable_28, check_hlds__mode_util__SharedInstName_27, &check_hlds__mode_util__MaybeInst_63);
              }
#line 556 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInst_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "mode_util.m"
                {
#line 558 "mode_util.m"
                  MR_Word base;
#line 558 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 558 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 558 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 558 "mode_util.m"
                }
#line 556 "mode_util.m"
              else
#line 555 "mode_util.m"
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_63, (MR_Integer) 0)));
#line 550 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
          case (MR_Integer) 3:
#line 561 "mode_util.m"
            {
#line 561 "mode_util.m"
              MR_Word check_hlds__mode_util__NondetLiveInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 561 "mode_util.m"
              MR_Word check_hlds__mode_util__MostlyUniqInstTable_30;
#line 561 "mode_util.m"
              MR_Word check_hlds__mode_util__InstTable_64;
#line 561 "mode_util.m"
              MR_Word check_hlds__mode_util__MaybeInst_65;

#line 562 "mode_util.m"
              {
#line 562 "mode_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_util__ModuleInfo_4, &check_hlds__mode_util__InstTable_64);
              }
#line 563 "mode_util.m"
              {
#line 563 "mode_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__mode_util__InstTable_64, &check_hlds__mode_util__MostlyUniqInstTable_30);
              }
#line 564 "mode_util.m"
              {
#line 564 "mode_util.m"
                hlds__hlds_data__lookup_mostly_uniq_inst_3_p_0(check_hlds__mode_util__MostlyUniqInstTable_30, check_hlds__mode_util__NondetLiveInstName_29, &check_hlds__mode_util__MaybeInst_65);
              }
#line 568 "mode_util.m"
              if ((check_hlds__mode_util__MaybeInst_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "mode_util.m"
                {
#line 570 "mode_util.m"
                  MR_Word base;
#line 570 "mode_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "mode_util.m"
                  *check_hlds__mode_util__Inst_6 = base;
#line 570 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 570 "mode_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_util__InstName_5));
#line 570 "mode_util.m"
                }
#line 568 "mode_util.m"
              else
#line 567 "mode_util.m"
                *check_hlds__mode_util__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__MaybeInst_65, (MR_Integer) 0)));
#line 561 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
          case (MR_Integer) 4:
#line 585 "mode_util.m"
            {
#line 585 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 585 "mode_util.m"
              MR_Word check_hlds__mode_util__Subst_43;
#line 585 "mode_util.m"
              MR_Word check_hlds__mode_util__V_46_46;
#line 585 "mode_util.m"
              MR_Word check_hlds__mode_util__Uniq_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));

#line 586 "mode_util.m"
              {
#line 586 "mode_util.m"
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_43);
              }
#line 588 "mode_util.m"
              {
#line 588 "mode_util.m"
                check_hlds__mode_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 588 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 588 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 1) = ((MR_Box) (check_hlds__mode_util__Uniq_67));
#line 588 "mode_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__mode_util__V_46_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "mode_util.m"
              }
#line 679 "mode_util.m"
              {
#line 679 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_43, check_hlds__mode_util__Type_42, check_hlds__mode_util__V_46_46, check_hlds__mode_util__Inst_6);
              }
#line 585 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
          case (MR_Integer) 5:
#line 590 "mode_util.m"
            {
#line 590 "mode_util.m"
              MR_Word check_hlds__mode_util__TypedInstName_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 2)));
#line 590 "mode_util.m"
              MR_Word check_hlds__mode_util__Inst0_45;
#line 590 "mode_util.m"
              MR_Word check_hlds__mode_util__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_util__InstName_5, (MR_Integer) 1)));
#line 590 "mode_util.m"
              MR_Word check_hlds__mode_util__Subst_69;

#line 591 "mode_util.m"
              {
#line 591 "mode_util.m"
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__TypedInstName_44, &check_hlds__mode_util__Inst0_45);
              }
#line 592 "mode_util.m"
              {
#line 592 "mode_util.m"
                mercury__map__init_1_p_0((MR_Word) &check_hlds__mode_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__mode_util__Subst_69);
              }
#line 679 "mode_util.m"
              {
#line 679 "mode_util.m"
                check_hlds__mode_util__propagate_ctor_info_lazily_5_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Subst_69, check_hlds__mode_util__Type_68, check_hlds__mode_util__Inst0_45, check_hlds__mode_util__Inst_6);
              }
#line 590 "mode_util.m"
            }
#line 502 "mode_util.m"
            break;
#line 502 "mode_util.m"
        }
#line 502 "mode_util.m"
        break;
#line 502 "mode_util.m"
    }
#line 502 "mode_util.m"
  }
#line 115 "mode_util.m"
}

#line 109 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__modes_to_uni_modes_4_p_0(
#line 109 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 109 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 109 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 109 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 109 "mode_util.m"
{
#line 487 "mode_util.m"
  {
#line 487 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 487 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "mode_util.m"
      else
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
#line 487 "mode_util.m"
    else
#line 487 "mode_util.m"
      {
#line 487 "mode_util.m"
        MR_Word check_hlds__mode_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 487 "mode_util.m"
        MR_Word check_hlds__mode_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 487 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "mode_util.m"
          {
#line 491 "mode_util.m"
            {
#line 491 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", (MR_String) "length mismatch");
#line 491 "mode_util.m"
              return;
            }
#line 490 "mode_util.m"
          }
#line 487 "mode_util.m"
        else
#line 492 "mode_util.m"
          {
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__Y_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__Ys_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__A_25;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__As_26;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialX_27;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalX_28;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__InitialY_29;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__FinalY_30;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__V_31_31;
#line 492 "mode_util.m"
            MR_Word check_hlds__mode_util__V_32_32;

#line 493 "mode_util.m"
            {
#line 493 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_34_34, &check_hlds__mode_util__InitialX_27, &check_hlds__mode_util__FinalX_28);
            }
#line 494 "mode_util.m"
            {
#line 494 "mode_util.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Y_23, &check_hlds__mode_util__InitialY_29, &check_hlds__mode_util__FinalY_30);
            }
#line 495 "mode_util.m"
            {
#line 495 "mode_util.m"
              check_hlds__mode_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 0) = ((MR_Box) (check_hlds__mode_util__InitialX_27));
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_31_31, 1) = ((MR_Box) (check_hlds__mode_util__InitialY_29));
#line 495 "mode_util.m"
            }
#line 495 "mode_util.m"
            {
#line 495 "mode_util.m"
              check_hlds__mode_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 0) = ((MR_Box) (check_hlds__mode_util__FinalX_28));
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_32_32, 1) = ((MR_Box) (check_hlds__mode_util__FinalY_30));
#line 495 "mode_util.m"
            }
#line 495 "mode_util.m"
            {
#line 495 "mode_util.m"
              check_hlds__mode_util__A_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 0) = ((MR_Box) (check_hlds__mode_util__V_31_31));
#line 495 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__A_25, 1) = ((MR_Box) (check_hlds__mode_util__V_32_32));
#line 495 "mode_util.m"
            }
#line 496 "mode_util.m"
            {
#line 496 "mode_util.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_33_33, check_hlds__mode_util__Ys_24, &check_hlds__mode_util__As_26);
            }
#line 492 "mode_util.m"
            {
#line 492 "mode_util.m"
              MR_Word base;
#line 492 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 492 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__A_25));
#line 492 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__As_26));
#line 492 "mode_util.m"
            }
#line 492 "mode_util.m"
          }
#line 487 "mode_util.m"
      }
#line 487 "mode_util.m"
  }
#line 109 "mode_util.m"
}

#line 106 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_list_get_final_insts_3_p_0(
#line 106 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 106 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 106 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 106 "mode_util.m"
{
#line 249 "mode_util.m"
  {
#line 249 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 249 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "mode_util.m"
    else
#line 250 "mode_util.m"
      {
#line 250 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 250 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 251 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 251 "mode_util.m"
        {
#line 251 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__V_10_10, &check_hlds__mode_util__Inst_8);
        }
#line 252 "mode_util.m"
        {
#line 252 "mode_util.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 250 "mode_util.m"
        {
#line 250 "mode_util.m"
          MR_Word base;
#line 250 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 250 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 250 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 250 "mode_util.m"
        }
#line 250 "mode_util.m"
      }
#line 249 "mode_util.m"
  }
#line 106 "mode_util.m"
}

#line 103 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(
#line 103 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 103 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 103 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3)
#line 103 "mode_util.m"
{
#line 244 "mode_util.m"
  {
#line 244 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 244 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "mode_util.m"
      *check_hlds__mode_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "mode_util.m"
    else
#line 245 "mode_util.m"
      {
#line 245 "mode_util.m"
        MR_Word check_hlds__mode_util__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "mode_util.m"
        MR_Word check_hlds__mode_util__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "mode_util.m"
        MR_Word check_hlds__mode_util__Inst_8;
#line 245 "mode_util.m"
        MR_Word check_hlds__mode_util__Insts_9;
#line 246 "mode_util.m"
        MR_Word check_hlds__mode_util__V_10_10;

#line 246 "mode_util.m"
        {
#line 246 "mode_util.m"
          check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__Inst_8, &check_hlds__mode_util__V_10_10);
        }
#line 247 "mode_util.m"
        {
#line 247 "mode_util.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__Modes_7, &check_hlds__mode_util__Insts_9);
        }
#line 245 "mode_util.m"
        {
#line 245 "mode_util.m"
          MR_Word base;
#line 245 "mode_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "mode_util.m"
          *check_hlds__mode_util__HeadVar__3_3 = base;
#line 245 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__Inst_8));
#line 245 "mode_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__Insts_9));
#line 245 "mode_util.m"
        }
#line 245 "mode_util.m"
      }
#line 244 "mode_util.m"
  }
#line 103 "mode_util.m"
}

#line 101 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__mode_get_final_inst_2_f_0(
#line 101 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 101 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_5)
#line 101 "mode_util.m"
{
#line 242 "mode_util.m"
  {
#line 242 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 242 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 242 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 242 "mode_util.m"
    {
#line 242 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__V_7_7, &check_hlds__mode_util__Inst_6);
    }
#line 242 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 242 "mode_util.m"
  }
#line 101 "mode_util.m"
}

#line 99 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__mode_get_initial_inst_2_f_0(
#line 99 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_4,
#line 99 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_5)
#line 99 "mode_util.m"
{
#line 239 "mode_util.m"
  {
#line 239 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 239 "mode_util.m"
    MR_Word check_hlds__mode_util__Inst_6;
#line 239 "mode_util.m"
    MR_Word check_hlds__mode_util__V_7_7;

#line 239 "mode_util.m"
    {
#line 239 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_4, check_hlds__mode_util__Mode_5, &check_hlds__mode_util__Inst_6, &check_hlds__mode_util__V_7_7);
    }
#line 239 "mode_util.m"
    return check_hlds__mode_util__Inst_6;
#line 239 "mode_util.m"
  }
#line 99 "mode_util.m"
}

#line 96 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__select_output_things_4_f_0(
#line 96 "mode_util.m"
  MR_Word check_hlds__mode_util__TypeInfo_for_Thing_28,
#line 96 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 96 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadThings_7,
#line 96 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadModes_8,
#line 96 "mode_util.m"
  MR_Word check_hlds__mode_util__ThingTypes_9)
#line 96 "mode_util.m"
{
#line 389 "mode_util.m"
  while (MR_TRUE)
#line 389 "mode_util.m"
    {
#line 389 "mode_util.m"
      /* tailcall optimized into a loop */
#line 389 "mode_util.m"
      {
#line 389 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 389 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputThings_10;

#line 389 "mode_util.m"
        if ((check_hlds__mode_util__HeadThings_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "mode_util.m"
            check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "mode_util.m"
          else
#line 407 "mode_util.m"
            {
#line 409 "mode_util.m"
              {
#line 409 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
              }
#line 407 "mode_util.m"
            }
#line 389 "mode_util.m"
        else
#line 389 "mode_util.m"
          {
#line 389 "mode_util.m"
            MR_Word check_hlds__mode_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 1)));
#line 389 "mode_util.m"
            MR_Box check_hlds__mode_util__V_31_31 = (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadThings_7, (MR_Integer) 0));

#line 389 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "mode_util.m"
              {
#line 413 "mode_util.m"
                {
#line 413 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_things\'/4", (MR_String) "length mismatch");
                }
#line 411 "mode_util.m"
              }
#line 389 "mode_util.m"
            else
#line 390 "mode_util.m"
              {
#line 390 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 390 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 390 "mode_util.m"
                MR_Word check_hlds__mode_util__ThingType_15;
#line 390 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;
#line 392 "mode_util.m"
                MR_Box check_hlds__mode_util__conv0_ThingType_15;

#line 392 "mode_util.m"
                {
#line 392 "mode_util.m"
                  mercury__map__lookup_3_p_0(check_hlds__mode_util__TypeInfo_for_Thing_28, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__mode_util__ThingTypes_9, check_hlds__mode_util__V_31_31, &check_hlds__mode_util__conv0_ThingType_15);
                }
#line 392 "mode_util.m"
                check_hlds__mode_util__ThingType_15 = ((MR_Word) check_hlds__mode_util__conv0_ThingType_15);
#line 306 "mode_util.m"
                {
#line 306 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__ThingType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 399 "mode_util.m"
#line 399 "mode_util.m"
                switch (check_hlds__mode_util__Top_16) {
#line 399 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 399 "mode_util.m"
                  case (MR_Integer) 0:
#line 399 "mode_util.m"
                  case (MR_Integer) 2:
#line 402 "mode_util.m"
                    {
#line 402 "mode_util.m"
                      /* direct tailcall eliminated */
#line 402 "mode_util.m"
                      {
#line 402 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadThings__tmp_copy_7 = check_hlds__mode_util__V_30_30;
#line 402 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 402 "mode_util.m"
                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 402 "mode_util.m"
                        check_hlds__mode_util__HeadThings_7 = check_hlds__mode_util__HeadThings__tmp_copy_7;
#line 402 "mode_util.m"
                      }
#line 402 "mode_util.m"
                      continue;
#line 402 "mode_util.m"
                    }
#line 399 "mode_util.m"
                    break;
#line 399 "mode_util.m"
                  case (MR_Integer) 1:
#line 395 "mode_util.m"
                    {
#line 395 "mode_util.m"
                      MR_Word check_hlds__mode_util__OutputThings1_17;

#line 396 "mode_util.m"
                      {
#line 396 "mode_util.m"
                        check_hlds__mode_util__OutputThings1_17 = check_hlds__mode_util__select_output_things_4_f_0(check_hlds__mode_util__TypeInfo_for_Thing_28, check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_30_30, check_hlds__mode_util__Modes_14, check_hlds__mode_util__ThingTypes_9);
                      }
#line 398 "mode_util.m"
                      {
#line 398 "mode_util.m"
                        check_hlds__mode_util__OutputThings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 0) = check_hlds__mode_util__V_31_31;
#line 398 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputThings_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputThings1_17));
#line 398 "mode_util.m"
                      }
#line 395 "mode_util.m"
                    }
#line 399 "mode_util.m"
                    break;
#line 399 "mode_util.m"
                }
#line 390 "mode_util.m"
              }
#line 389 "mode_util.m"
          }
#line 389 "mode_util.m"
        return check_hlds__mode_util__OutputThings_10;
#line 389 "mode_util.m"
      }
#line 389 "mode_util.m"
      break;
#line 389 "mode_util.m"
    }
#line 96 "mode_util.m"
}

#line 94 "mode_util.m"
MR_Word MR_CALL 
check_hlds__mode_util__select_output_vars_4_f_0(
#line 94 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_6,
#line 94 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVars_7,
#line 94 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadModes_8,
#line 94 "mode_util.m"
  MR_Word check_hlds__mode_util__VarTypes_9)
#line 94 "mode_util.m"
{
#line 354 "mode_util.m"
  while (MR_TRUE)
#line 354 "mode_util.m"
    {
#line 354 "mode_util.m"
      /* tailcall optimized into a loop */
#line 354 "mode_util.m"
      {
#line 354 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;
#line 354 "mode_util.m"
        MR_Word check_hlds__mode_util__OutputVars_10;

#line 354 "mode_util.m"
        if ((check_hlds__mode_util__HeadVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "mode_util.m"
          if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "mode_util.m"
            check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "mode_util.m"
          else
#line 374 "mode_util.m"
            {
#line 376 "mode_util.m"
              {
#line 376 "mode_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
              }
#line 374 "mode_util.m"
            }
#line 354 "mode_util.m"
        else
#line 354 "mode_util.m"
          {
#line 354 "mode_util.m"
            MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 1)));
#line 354 "mode_util.m"
            MR_Word check_hlds__mode_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVars_7, (MR_Integer) 0)));

#line 354 "mode_util.m"
            if ((check_hlds__mode_util__HeadModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "mode_util.m"
              {
#line 380 "mode_util.m"
                {
#line 380 "mode_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "function \140check_hlds.mode_util.select_output_vars\'/4", (MR_String) "length mismatch");
                }
#line 378 "mode_util.m"
              }
#line 354 "mode_util.m"
            else
#line 358 "mode_util.m"
              {
#line 358 "mode_util.m"
                MR_Word check_hlds__mode_util__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 0)));
#line 358 "mode_util.m"
                MR_Word check_hlds__mode_util__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadModes_8, (MR_Integer) 1)));
#line 358 "mode_util.m"
                MR_Word check_hlds__mode_util__VarType_15;
#line 358 "mode_util.m"
                MR_Word check_hlds__mode_util__Top_16;

#line 360 "mode_util.m"
                {
#line 360 "mode_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__mode_util__VarTypes_9, check_hlds__mode_util__V_29_29, &check_hlds__mode_util__VarType_15);
                }
#line 306 "mode_util.m"
                {
#line 306 "mode_util.m"
                  check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__Mode_13, check_hlds__mode_util__VarType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__Top_16);
                }
#line 367 "mode_util.m"
#line 367 "mode_util.m"
                switch (check_hlds__mode_util__Top_16) {
#line 367 "mode_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 367 "mode_util.m"
                  case (MR_Integer) 0:
#line 367 "mode_util.m"
                  case (MR_Integer) 2:
#line 370 "mode_util.m"
                    {
#line 370 "mode_util.m"
                      /* direct tailcall eliminated */
#line 370 "mode_util.m"
                      {
#line 370 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadVars__tmp_copy_7 = check_hlds__mode_util__V_28_28;
#line 370 "mode_util.m"
                        MR_Word check_hlds__mode_util__HeadModes__tmp_copy_8 = check_hlds__mode_util__Modes_14;

#line 370 "mode_util.m"
                        check_hlds__mode_util__HeadModes_8 = check_hlds__mode_util__HeadModes__tmp_copy_8;
#line 370 "mode_util.m"
                        check_hlds__mode_util__HeadVars_7 = check_hlds__mode_util__HeadVars__tmp_copy_7;
#line 370 "mode_util.m"
                      }
#line 370 "mode_util.m"
                      continue;
#line 370 "mode_util.m"
                    }
#line 367 "mode_util.m"
                    break;
#line 367 "mode_util.m"
                  case (MR_Integer) 1:
#line 363 "mode_util.m"
                    {
#line 363 "mode_util.m"
                      MR_Word check_hlds__mode_util__OutputVars1_17;

#line 364 "mode_util.m"
                      {
#line 364 "mode_util.m"
                        check_hlds__mode_util__OutputVars1_17 = check_hlds__mode_util__select_output_vars_4_f_0(check_hlds__mode_util__ModuleInfo_6, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Modes_14, check_hlds__mode_util__VarTypes_9);
                      }
#line 366 "mode_util.m"
                      {
#line 366 "mode_util.m"
                        check_hlds__mode_util__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 0) = ((MR_Box) (check_hlds__mode_util__V_29_29));
#line 366 "mode_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__mode_util__OutputVars_10, 1) = ((MR_Box) (check_hlds__mode_util__OutputVars1_17));
#line 366 "mode_util.m"
                      }
#line 363 "mode_util.m"
                    }
#line 367 "mode_util.m"
                    break;
#line 367 "mode_util.m"
                }
#line 358 "mode_util.m"
              }
#line 354 "mode_util.m"
          }
#line 354 "mode_util.m"
        return check_hlds__mode_util__OutputVars_10;
#line 354 "mode_util.m"
      }
#line 354 "mode_util.m"
      break;
#line 354 "mode_util.m"
    }
#line 94 "mode_util.m"
}

#line 88 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__modes_to_arg_modes_4_p_0(
#line 88 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 88 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 88 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__3_3,
#line 88 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 88 "mode_util.m"
{
#line 295 "mode_util.m"
  {
#line 295 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 295 "mode_util.m"
    if ((check_hlds__mode_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "mode_util.m"
      if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "mode_util.m"
        *check_hlds__mode_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "mode_util.m"
      else
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
#line 295 "mode_util.m"
    else
#line 295 "mode_util.m"
      {
#line 295 "mode_util.m"
        MR_Word check_hlds__mode_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "mode_util.m"
        MR_Word check_hlds__mode_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));

#line 295 "mode_util.m"
        if ((check_hlds__mode_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "mode_util.m"
          {
#line 299 "mode_util.m"
            {
#line 299 "mode_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", (MR_String) "length mismatch");
#line 299 "mode_util.m"
              return;
            }
#line 298 "mode_util.m"
          }
#line 295 "mode_util.m"
        else
#line 301 "mode_util.m"
          {
#line 301 "mode_util.m"
            MR_Word check_hlds__mode_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 0)));
#line 301 "mode_util.m"
            MR_Word check_hlds__mode_util__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__3_3, (MR_Integer) 1)));
#line 301 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgMode_25;
#line 301 "mode_util.m"
            MR_Word check_hlds__mode_util__ArgModes_26;

#line 306 "mode_util.m"
            {
#line 306 "mode_util.m"
              check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_28_28, check_hlds__mode_util__Type_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__mode_util__ArgMode_25);
            }
#line 303 "mode_util.m"
            {
#line 303 "mode_util.m"
              check_hlds__mode_util__modes_to_arg_modes_4_p_0(check_hlds__mode_util__HeadVar__1_1, check_hlds__mode_util__V_27_27, check_hlds__mode_util__Types_24, &check_hlds__mode_util__ArgModes_26);
            }
#line 301 "mode_util.m"
            {
#line 301 "mode_util.m"
              MR_Word base;
#line 301 "mode_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "mode_util.m"
              *check_hlds__mode_util__HeadVar__4_4 = base;
#line 301 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_util__ArgMode_25));
#line 301 "mode_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_util__ArgModes_26));
#line 301 "mode_util.m"
            }
#line 301 "mode_util.m"
          }
#line 295 "mode_util.m"
      }
#line 295 "mode_util.m"
  }
#line 88 "mode_util.m"
}

#line 85 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_to_arg_mode_4_p_0(
#line 85 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 85 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_6,
#line 85 "mode_util.m"
  MR_Word check_hlds__mode_util__Type_7,
#line 85 "mode_util.m"
  MR_Word * check_hlds__mode_util__ArgMode_8)
#line 85 "mode_util.m"
{
#line 305 "mode_util.m"
  {
#line 305 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;

#line 306 "mode_util.m"
    {
#line 306 "mode_util.m"
      check_hlds__mode_util__mode_to_arg_mode_loop_over_notags_5_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, check_hlds__mode_util__Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_util__ArgMode_8);
    }
#line 305 "mode_util.m"
  }
#line 85 "mode_util.m"
}

#line 75 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_undefined_2_p_0(
#line 75 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 75 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 75 "mode_util.m"
{
#line 291 "mode_util.m"
  {
#line 291 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 291 "mode_util.m"
    MR_Word check_hlds__mode_util__V_5_5;
#line 291 "mode_util.m"
    MR_Word check_hlds__mode_util__V_6_6;

#line 291 "mode_util.m"
    {
#line 291 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__V_5_5, &check_hlds__mode_util__V_6_6);
    }
#line 291 "mode_util.m"
    check_hlds__mode_util__succeeded = !(check_hlds__mode_util__succeeded);
#line 291 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 291 "mode_util.m"
  }
#line 75 "mode_util.m"
}

#line 71 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_unused_2_p_0(
#line 71 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 71 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 71 "mode_util.m"
{
#line 285 "mode_util.m"
  {
#line 285 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 285 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 285 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 286 "mode_util.m"
    {
#line 286 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 287 "mode_util.m"
    {
#line 287 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 285 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 288 "mode_util.m"
      {
#line 288 "mode_util.m"
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 285 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 285 "mode_util.m"
  }
#line 71 "mode_util.m"
}

#line 66 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_output_2_p_0(
#line 66 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 66 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 66 "mode_util.m"
{
#line 278 "mode_util.m"
  {
#line 278 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 278 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 278 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 279 "mode_util.m"
    {
#line 279 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 280 "mode_util.m"
    {
#line 280 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 278 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 281 "mode_util.m"
      {
#line 281 "mode_util.m"
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 278 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 278 "mode_util.m"
  }
#line 66 "mode_util.m"
}

#line 60 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_output_2_p_0(
#line 60 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 60 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 60 "mode_util.m"
{
#line 270 "mode_util.m"
  {
#line 270 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 270 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 270 "mode_util.m"
    MR_Word check_hlds__mode_util__FinalInst_6;

#line 271 "mode_util.m"
    {
#line 271 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util__FinalInst_6);
    }
#line 272 "mode_util.m"
    {
#line 272 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 270 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 273 "mode_util.m"
      {
#line 273 "mode_util.m"
        check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__FinalInst_6);
      }
#line 270 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 270 "mode_util.m"
  }
#line 60 "mode_util.m"
}

#line 54 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_fully_input_2_p_0(
#line 54 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 54 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 54 "mode_util.m"
{
#line 264 "mode_util.m"
  {
#line 264 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 264 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 265 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 265 "mode_util.m"
    {
#line 265 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 266 "mode_util.m"
    {
#line 266 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 264 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 264 "mode_util.m"
  }
#line 54 "mode_util.m"
}

#line 49 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_is_input_2_p_0(
#line 49 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_3,
#line 49 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_4)
#line 49 "mode_util.m"
{
#line 258 "mode_util.m"
  {
#line 258 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 258 "mode_util.m"
    MR_Word check_hlds__mode_util__InitialInst_5;
#line 259 "mode_util.m"
    MR_Word check_hlds__mode_util___FinalInst_6;

#line 259 "mode_util.m"
    {
#line 259 "mode_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__Mode_4, &check_hlds__mode_util__InitialInst_5, &check_hlds__mode_util___FinalInst_6);
    }
#line 260 "mode_util.m"
    {
#line 260 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__mode_util__ModuleInfo_3, check_hlds__mode_util__InitialInst_5);
    }
#line 258 "mode_util.m"
    return check_hlds__mode_util__succeeded;
#line 258 "mode_util.m"
  }
#line 49 "mode_util.m"
}

#line 43 "mode_util.m"
MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
#line 43 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__1_1,
#line 43 "mode_util.m"
  MR_Word check_hlds__mode_util__HeadVar__2_2,
#line 43 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__3_3,
#line 43 "mode_util.m"
  MR_Word * check_hlds__mode_util__HeadVar__4_4)
#line 43 "mode_util.m"
{
#line 1168 "mode_util.m"
  while (MR_TRUE)
#line 1168 "mode_util.m"
    {
#line 1168 "mode_util.m"
      /* tailcall optimized into a loop */
#line 1168 "mode_util.m"
      {
#line 1168 "mode_util.m"
        MR_bool check_hlds__mode_util__succeeded;

#line 1168 "mode_util.m"
        if (((MR_tag((MR_Word) check_hlds__mode_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1168 "mode_util.m"
          {
#line 1168 "mode_util.m"
            *check_hlds__mode_util__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1168 "mode_util.m"
            *check_hlds__mode_util__HeadVar__4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1168 "mode_util.m"
            check_hlds__mode_util__succeeded = MR_TRUE;
#line 1168 "mode_util.m"
          }
#line 1168 "mode_util.m"
        else
#line 1171 "mode_util.m"
          {
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1171 "mode_util.m"
            MR_Integer check_hlds__mode_util__Arity_13;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Modes_14;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefns_15;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode_17;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Params_21;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__ModeDefn_22;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode0_25;
#line 1171 "mode_util.m"
            MR_Word check_hlds__mode_util__Mode_26;
#line 1180 "mode_util.m"
            MR_Word check_hlds__mode_util__HLDS_Mode0_16;
#line 1180 "mode_util.m"
            MR_Word check_hlds__mode_util__V_27_27;
#line 1180 "mode_util.m"
            MR_Box check_hlds__mode_util__conv0_HLDS_Mode0_16;
#line 1187 "mode_util.m"
            MR_Word check_hlds__mode_util___VarSet_20;
#line 1187 "mode_util.m"
            MR_Word check_hlds__mode_util___Context_23;
#line 1187 "mode_util.m"
            MR_Word check_hlds__mode_util___Status_24;

#line 1172 "mode_util.m"
            {
#line 1172 "mode_util.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Arity_13);
            }
#line 1173 "mode_util.m"
            {
#line 1173 "mode_util.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_util__HeadVar__1_1, &check_hlds__mode_util__Modes_14);
            }
#line 1174 "mode_util.m"
            {
#line 1174 "mode_util.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(check_hlds__mode_util__Modes_14, &check_hlds__mode_util__ModeDefns_15);
            }
#line 1180 "mode_util.m"
            {
#line 1180 "mode_util.m"
              check_hlds__mode_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 0) = ((MR_Box) (check_hlds__mode_util__Name_9));
#line 1180 "mode_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_27_27, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1180 "mode_util.m"
            }
#line 1180 "mode_util.m"
            {
#line 1180 "mode_util.m"
              check_hlds__mode_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_27_27)), &check_hlds__mode_util__conv0_HLDS_Mode0_16);
            }
#line 1180 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1180 "mode_util.m"
              {
#line 1180 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode0_16 = ((MR_Word) check_hlds__mode_util__conv0_HLDS_Mode0_16);
#line 1180 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1180 "mode_util.m"
              }
#line 1180 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1181 "mode_util.m"
              {
#line 1181 "mode_util.m"
                check_hlds__mode_util__HLDS_Mode_17 = check_hlds__mode_util__HLDS_Mode0_16;
#line 1181 "mode_util.m"
                check_hlds__mode_util__succeeded = MR_TRUE;
#line 1181 "mode_util.m"
              }
#line 1180 "mode_util.m"
            else
#line 1183 "mode_util.m"
              {
#line 1183 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_33_33;
#line 1183 "mode_util.m"
                MR_Word check_hlds__mode_util__TypeCtorInfo_34_34;
#line 1183 "mode_util.m"
                MR_String check_hlds__mode_util__String_18;
#line 1183 "mode_util.m"
                MR_Word check_hlds__mode_util__BuiltinName_19;
#line 1183 "mode_util.m"
                MR_Word check_hlds__mode_util__V_28_28;
#line 1183 "mode_util.m"
                MR_Word check_hlds__mode_util__V_29_29;
#line 1185 "mode_util.m"
                MR_Box check_hlds__mode_util__conv1_HLDS_Mode_17;

#line 1183 "mode_util.m"
                check_hlds__mode_util__succeeded = ((MR_tag((MR_Word) check_hlds__mode_util__Name_9)) == (MR_mktag((MR_Integer) 0)));
#line 1183 "mode_util.m"
                if (check_hlds__mode_util__succeeded)
#line 1183 "mode_util.m"
                  {
#line 1183 "mode_util.m"
                    check_hlds__mode_util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__Name_9, (MR_Integer) 0)));
#line 1184 "mode_util.m"
                    {
#line 1184 "mode_util.m"
                      check_hlds__mode_util__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 10137 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0;
#line 10139 "check_hlds.mode_util.c"
                    check_hlds__mode_util__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
#line 1184 "mode_util.m"
                    {
#line 1184 "mode_util.m"
                      check_hlds__mode_util__BuiltinName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 0) = ((MR_Box) (check_hlds__mode_util__V_28_28));
#line 1184 "mode_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_util__BuiltinName_19, 1) = ((MR_Box) (check_hlds__mode_util__String_18));
#line 1184 "mode_util.m"
                    }
#line 1185 "mode_util.m"
                    {
#line 1185 "mode_util.m"
                      check_hlds__mode_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 0) = ((MR_Box) (check_hlds__mode_util__BuiltinName_19));
#line 1185 "mode_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__mode_util__V_29_29, 1) = ((MR_Box) (check_hlds__mode_util__Arity_13));
#line 1185 "mode_util.m"
                    }
#line 1185 "mode_util.m"
                    {
#line 1185 "mode_util.m"
                      check_hlds__mode_util__succeeded = mercury__map__search_3_p_0(check_hlds__mode_util__TypeCtorInfo_33_33, check_hlds__mode_util__TypeCtorInfo_34_34, check_hlds__mode_util__ModeDefns_15, ((MR_Box) (check_hlds__mode_util__V_29_29)), &check_hlds__mode_util__conv1_HLDS_Mode_17);
                    }
#line 1185 "mode_util.m"
                    if (check_hlds__mode_util__succeeded)
#line 1185 "mode_util.m"
                      {
#line 1185 "mode_util.m"
                        check_hlds__mode_util__HLDS_Mode_17 = ((MR_Word) check_hlds__mode_util__conv1_HLDS_Mode_17);
#line 1185 "mode_util.m"
                        check_hlds__mode_util__succeeded = MR_TRUE;
#line 1185 "mode_util.m"
                      }
#line 1183 "mode_util.m"
                  }
#line 1183 "mode_util.m"
              }
#line 1171 "mode_util.m"
            if (check_hlds__mode_util__succeeded)
#line 1171 "mode_util.m"
              {
#line 1187 "mode_util.m"
                check_hlds__mode_util___VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 0)));
#line 1187 "mode_util.m"
                check_hlds__mode_util__Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 1)));
#line 1187 "mode_util.m"
                check_hlds__mode_util__ModeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 2)));
#line 1187 "mode_util.m"
                check_hlds__mode_util___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 3)));
#line 1187 "mode_util.m"
                check_hlds__mode_util___Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_util__HLDS_Mode_17, (MR_Integer) 4)));
#line 1188 "mode_util.m"
                check_hlds__mode_util__Mode0_25 = (MR_Word) check_hlds__mode_util__ModeDefn_22;
#line 1189 "mode_util.m"
                {
#line 1189 "mode_util.m"
                  parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(check_hlds__mode_util__Mode0_25, check_hlds__mode_util__Params_21, check_hlds__mode_util__Args_10, &check_hlds__mode_util__Mode_26);
                }
#line 1190 "mode_util.m"
                /* direct tailcall eliminated */
#line 1190 "mode_util.m"
                {
#line 1190 "mode_util.m"
                  MR_Word check_hlds__mode_util__HeadVar__2__tmp_copy_2 = check_hlds__mode_util__Mode_26;

#line 1190 "mode_util.m"
                  check_hlds__mode_util__HeadVar__2_2 = check_hlds__mode_util__HeadVar__2__tmp_copy_2;
#line 1190 "mode_util.m"
                }
#line 1190 "mode_util.m"
                continue;
#line 1171 "mode_util.m"
              }
#line 1171 "mode_util.m"
          }
#line 1168 "mode_util.m"
        return check_hlds__mode_util__succeeded;
#line 1168 "mode_util.m"
      }
#line 1168 "mode_util.m"
      break;
#line 1168 "mode_util.m"
    }
#line 43 "mode_util.m"
}

#line 38 "mode_util.m"
void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
#line 38 "mode_util.m"
  MR_Word check_hlds__mode_util__ModuleInfo_5,
#line 38 "mode_util.m"
  MR_Word check_hlds__mode_util__Mode_6,
#line 38 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstA_7,
#line 38 "mode_util.m"
  MR_Word * check_hlds__mode_util__InstB_8)
#line 38 "mode_util.m"
{
#line 1193 "mode_util.m"
  {
#line 1193 "mode_util.m"
    MR_bool check_hlds__mode_util__succeeded;
#line 1193 "mode_util.m"
    MR_Word check_hlds__mode_util__InstAPrime_9;
#line 1193 "mode_util.m"
    MR_Word check_hlds__mode_util__InstBPrime_10;

#line 1193 "mode_util.m"
    {
#line 1193 "mode_util.m"
      check_hlds__mode_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__mode_util__ModuleInfo_5, check_hlds__mode_util__Mode_6, &check_hlds__mode_util__InstAPrime_9, &check_hlds__mode_util__InstBPrime_10);
    }
#line 1193 "mode_util.m"
    if (check_hlds__mode_util__succeeded)
#line 1194 "mode_util.m"
      {
#line 1194 "mode_util.m"
        *check_hlds__mode_util__InstA_7 = check_hlds__mode_util__InstAPrime_9;
#line 1195 "mode_util.m"
        *check_hlds__mode_util__InstB_8 = check_hlds__mode_util__InstBPrime_10;
#line 1194 "mode_util.m"
      }
#line 1193 "mode_util.m"
    else
#line 1197 "mode_util.m"
      {
#line 1197 "mode_util.m"
        {
#line 1197 "mode_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_util", (MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
#line 1197 "mode_util.m"
          return;
        }
#line 1197 "mode_util.m"
      }
#line 1193 "mode_util.m"
  }
#line 38 "mode_util.m"
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
