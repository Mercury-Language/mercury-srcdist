/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module ll_backend.lookup_switch. */
/* :- implementation. */

/*
INIT mercury__ll_backend__lookup_switch__init
ENDINIT
*/

#include "ll_backend.lookup_switch.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_util.mih"
#include "ll_backend.trace_gen.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0;

#line 163 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0;

#line 166 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1;

#line 169 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2;

#line 172 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3];

#line 175 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3];

#line 178 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3];

#line 181 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0;

#line 184 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

#line 190 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4];

#line 196 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4];

#line 199 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0;

#line 202 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1];

#line 205 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1];

#line 208 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1];

#line 211 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1];

#line 214 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 217 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 219 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2);

#line 222 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 225 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 227 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 229 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 232 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 235 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 237 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 239 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 242 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 245 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 247 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 249 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 251 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4);

#line 904 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 904 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 904 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 904 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 904 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 904 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5);

#line 853 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_10,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_11,
#line 853 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_12,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);

#line 380 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_14,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 380 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_16,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_18,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_20,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_22,
#line 380 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_23,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 380 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41);

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__487__1_2_p_0(
#line 487 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 487 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_68);

#line 920 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 920 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 920 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 920 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3);

#line 841 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 841 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 841 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 831 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 831 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 831 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 831 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 831 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11);

#line 777 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 777 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 777 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);

#line 579 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 579 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18);

#line 573 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 573 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1);

#line 497 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
#line 497 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 497 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
#line 487 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
#line 487 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 473 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_19,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_20,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_21,
#line 473 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_22,
#line 473 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_23,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_28,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_30,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_32,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62);

#line 461 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 461 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 461 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 451 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 451 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 451 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5);

#line 309 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 309 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 296 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 296 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5);

#line 219 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17);


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[5][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[2][5];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][4];


#line 938 "lookup_switch.m"
/* sealed */ struct ll_backend__lookup_switch__vector_common_type_5_0_s {
#line 938 "lookup_switch.m"
  const MR_Word ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;
#line 938 "lookup_switch.m"
};

static /* final */ const struct ll_backend__lookup_switch__vector_common_type_5_0_s ll_backend__lookup_switch_vector_common_5[14];



static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[1])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    (MR_Box) &ll_backend__lookup_switch_scalar_common_4[0]
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[4])))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_fail_row_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "simple lookup switch"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "several soln lookup switch"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__lookup_switch____vpti_pred_0))
  },
};


static /* final */ const struct ll_backend__lookup_switch__vector_common_type_5_0_s ll_backend__lookup_switch_vector_common_5[14] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 8 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 9 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[14]) },
  /* row 10 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[16]) },
  /* row 11 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 12 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
  /* row 13 */   {     (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]) },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 818 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 826 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 834 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 842 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
  (MR_String) "kind_zero_solns",
  (MR_Integer) 0
};

#line 848 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
  (MR_String) "kind_one_soln",
  (MR_Integer) 1
};

#line 854 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
  (MR_String) "kind_several_solns",
  (MR_Integer) 2
};

#line 860 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2
};

#line 867 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0
};

#line 874 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 881 "ll_backend.lookup_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__lookup_switch____Unify____case_kind_0_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____case_kind_0_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "case_kind",
  {     ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0 },
  {     ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0
};

#line 898 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0
  }
};

#line 908 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 916 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 924 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 932 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 940 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4] = {
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness"
};

#line 948 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 = {
  (MR_String) "lookup_switch_info",
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0,
  ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0,
  NULL,
  NULL
};

#line 963 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 968 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0
  }
};

#line 977 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 982 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1] = {
  (MR_Integer) 0
};

#line 987 "ll_backend.lookup_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "lookup_switch_info",
  {     ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1 },
  {     ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1
};

#line 1004 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 1007 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1009 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2)
#line 1011 "ll_backend.lookup_switch.c"
{
#line 1013 "ll_backend.lookup_switch.c"
  {
#line 1015 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 1018 "ll_backend.lookup_switch.c"
    {
#line 1020 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____case_kind_0_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2));
    }
#line 1023 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 1025 "ll_backend.lookup_switch.c"
  }
#line 1027 "ll_backend.lookup_switch.c"
}

#line 1030 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 1033 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 1035 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1037 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1039 "ll_backend.lookup_switch.c"
{
#line 1041 "ll_backend.lookup_switch.c"
  {
#line 1043 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1046 "ll_backend.lookup_switch.c"
    {
#line 1048 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____case_kind_0_0(&ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1051 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1053 "ll_backend.lookup_switch.c"
  }
#line 1055 "ll_backend.lookup_switch.c"
}

#line 1058 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 1061 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1063 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1065 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1067 "ll_backend.lookup_switch.c"
{
#line 1069 "ll_backend.lookup_switch.c"
  {
#line 1071 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 1074 "ll_backend.lookup_switch.c"
    {
#line 1076 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1079 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 1081 "ll_backend.lookup_switch.c"
  }
#line 1083 "ll_backend.lookup_switch.c"
}

#line 1086 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 1089 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1091 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 1093 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 1095 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4)
#line 1097 "ll_backend.lookup_switch.c"
{
#line 1099 "ll_backend.lookup_switch.c"
  {
#line 1101 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1104 "ll_backend.lookup_switch.c"
    {
#line 1106 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), &ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_4));
    }
#line 1109 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1111 "ll_backend.lookup_switch.c"
  }
#line 1113 "ll_backend.lookup_switch.c"
}

#line 904 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 904 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 904 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 904 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 904 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 904 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5)
#line 904 "lookup_switch.m"
{
#line 907 "lookup_switch.m"
  while (MR_TRUE)
#line 907 "lookup_switch.m"
    {
#line 907 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 907 "lookup_switch.m"
      {
#line 907 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 907 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 907 "lookup_switch.m"
        else
#line 908 "lookup_switch.m"
          {
#line 908 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Tag_11;
#line 908 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 908 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Val_17;
#line 908 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Word_18;
#line 908 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Offset_19;
#line 908 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X1_21;
#line 908 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 908 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 908 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__V_12_12;
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X0_20;
#line 912 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__conv0_X0_20;

#line 908 "lookup_switch.m"
            ll_backend__lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 0)));
#line 908 "lookup_switch.m"
            ll_backend__lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 1));
#line 909 "lookup_switch.m"
            ll_backend__lookup_switch__Val_17 = (ll_backend__lookup_switch__Tag_11 - ll_backend__lookup_switch__Start_2);
#line 910 "lookup_switch.m"
            {
#line 910 "lookup_switch.m"
              ll_backend__lookup_switch__Word_18 = mercury__int__f_47_47_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 911 "lookup_switch.m"
            {
#line 911 "lookup_switch.m"
              ll_backend__lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 912 "lookup_switch.m"
            {
#line 912 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, ll_backend__lookup_switch__Word_18, &ll_backend__lookup_switch__conv0_X0_20);
            }
#line 912 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 912 "lookup_switch.m"
              {
#line 912 "lookup_switch.m"
                ll_backend__lookup_switch__X0_20 = ((MR_Integer) ll_backend__lookup_switch__conv0_X0_20);
#line 912 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 912 "lookup_switch.m"
              }
#line 914 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 913 "lookup_switch.m"
              {
#line 913 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_25_25;

#line 913 "lookup_switch.m"
                {
#line 913 "lookup_switch.m"
                  ll_backend__lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 913 "lookup_switch.m"
                ll_backend__lookup_switch__X1_21 = (ll_backend__lookup_switch__X0_20 | ll_backend__lookup_switch__V_25_25);
#line 913 "lookup_switch.m"
              }
#line 914 "lookup_switch.m"
            else
#line 915 "lookup_switch.m"
              {
#line 915 "lookup_switch.m"
                {
#line 915 "lookup_switch.m"
                  ll_backend__lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 915 "lookup_switch.m"
              }
#line 917 "lookup_switch.m"
            {
#line 917 "lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__Word_18, ((MR_Box) (ll_backend__lookup_switch__X1_21)), ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 918 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 918 "lookup_switch.m"
            {
#line 918 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Rest_13;
#line 918 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 918 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 918 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 918 "lookup_switch.m"
            }
#line 918 "lookup_switch.m"
            continue;
#line 908 "lookup_switch.m"
          }
#line 907 "lookup_switch.m"
      }
#line 907 "lookup_switch.m"
      break;
#line 907 "lookup_switch.m"
    }
#line 904 "lookup_switch.m"
}

#line 853 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_10,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_11,
#line 853 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_12,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
#line 853 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
#line 853 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30)
#line 853 "lookup_switch.m"
{
#line 858 "lookup_switch.m"
  {
#line 858 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_25_69;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Globals_17;
#line 858 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__WordBits_18;
#line 858 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Log2WordBits_19;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecArgs_20;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecRval_21;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Word_23;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitNum_24;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HasBit_26;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_45_45;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap0_61;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap_62;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__WordVals_63;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DataAddr_64;
#line 858 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_67_67;
#line 870 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__SingleWord_22;
#line 867 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_32_32;

#line 859 "lookup_switch.m"
    {
#line 859 "lookup_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__Globals_17);
    }
#line 860 "lookup_switch.m"
    {
#line 860 "lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ll_backend__lookup_switch__Globals_17, &ll_backend__lookup_switch__WordBits_18, &ll_backend__lookup_switch__Log2WordBits_19);
    }
#line 1336 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_25_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 897 "lookup_switch.m"
    {
#line 897 "lookup_switch.m"
      mercury__map__init_1_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, &ll_backend__lookup_switch__BitMap0_61);
    }
#line 898 "lookup_switch.m"
    {
#line 898 "lookup_switch.m"
      ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__lookup_switch__CaseVals_11, ll_backend__lookup_switch__Start_12, ll_backend__lookup_switch__WordBits_18, ll_backend__lookup_switch__BitMap0_61, &ll_backend__lookup_switch__BitMap_62);
    }
#line 899 "lookup_switch.m"
    {
#line 899 "lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__BitMap_62, &ll_backend__lookup_switch__WordVals_63);
    }
#line 900 "lookup_switch.m"
    {
#line 900 "lookup_switch.m"
      ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__WordVals_63, (MR_Integer) 0, &ll_backend__lookup_switch__BitVecArgs_20);
    }
#line 901 "lookup_switch.m"
    {
#line 901 "lookup_switch.m"
      ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(ll_backend__lookup_switch__BitVecArgs_20, &ll_backend__lookup_switch__DataAddr_64, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31);
    }
#line 902 "lookup_switch.m"
    {
#line 902 "lookup_switch.m"
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 902 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 902 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__DataAddr_64));
#line 902 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "lookup_switch.m"
    }
#line 902 "lookup_switch.m"
    {
#line 902 "lookup_switch.m"
      ll_backend__lookup_switch__BitVecRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 902 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 1) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
#line 902 "lookup_switch.m"
    }
#line 867 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = ((MR_tag((MR_Word) ll_backend__lookup_switch__BitVecArgs_20)) == (MR_mktag((MR_Integer) 1)));
#line 867 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 867 "lookup_switch.m"
      {
#line 867 "lookup_switch.m"
        ll_backend__lookup_switch__SingleWord_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 0)));
#line 867 "lookup_switch.m"
        ll_backend__lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 1)));
#line 867 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "lookup_switch.m"
      }
#line 870 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 868 "lookup_switch.m"
      {
#line 868 "lookup_switch.m"
        ll_backend__lookup_switch__Word_23 = ll_backend__lookup_switch__SingleWord_22;
#line 869 "lookup_switch.m"
        ll_backend__lookup_switch__BitNum_24 = ll_backend__lookup_switch__IndexRval_10;
#line 868 "lookup_switch.m"
      }
#line 870 "lookup_switch.m"
    else
#line 875 "lookup_switch.m"
      {
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__WordNum_25;
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_34_34;
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_35_35;
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_36_36;
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_40_40;
#line 875 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_41_41;
#line 875 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_42_42;

#line 875 "lookup_switch.m"
        {
#line 875 "lookup_switch.m"
          ll_backend__lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_35_35, 0) = ((MR_Box) (ll_backend__lookup_switch__Log2WordBits_19));
#line 875 "lookup_switch.m"
        }
#line 875 "lookup_switch.m"
        {
#line 875 "lookup_switch.m"
          ll_backend__lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 875 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 1) = ((MR_Box) (ll_backend__lookup_switch__V_35_35));
#line 875 "lookup_switch.m"
        }
#line 874 "lookup_switch.m"
        {
#line 874 "lookup_switch.m"
          ll_backend__lookup_switch__WordNum_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 874 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 874 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 874 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
#line 874 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 3) = ((MR_Box) (ll_backend__lookup_switch__V_34_34));
#line 874 "lookup_switch.m"
        }
#line 877 "lookup_switch.m"
        {
#line 877 "lookup_switch.m"
          ll_backend__lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 877 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 877 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 877 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 2) = ((MR_Box) (ll_backend__lookup_switch__BitVecRval_21));
#line 877 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 3) = ((MR_Box) (ll_backend__lookup_switch__WordNum_25));
#line 877 "lookup_switch.m"
        }
#line 877 "lookup_switch.m"
        {
#line 877 "lookup_switch.m"
          ll_backend__lookup_switch__Word_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 877 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Word_23, 0) = ((MR_Box) (ll_backend__lookup_switch__V_36_36));
#line 877 "lookup_switch.m"
        }
#line 883 "lookup_switch.m"
        ll_backend__lookup_switch__V_42_42 = (ll_backend__lookup_switch__WordBits_18 - (MR_Integer) 1);
#line 883 "lookup_switch.m"
        {
#line 883 "lookup_switch.m"
          ll_backend__lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_41_41, 0) = ((MR_Box) (ll_backend__lookup_switch__V_42_42));
#line 883 "lookup_switch.m"
        }
#line 883 "lookup_switch.m"
        {
#line 883 "lookup_switch.m"
          ll_backend__lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 1) = ((MR_Box) (ll_backend__lookup_switch__V_41_41));
#line 883 "lookup_switch.m"
        }
#line 882 "lookup_switch.m"
        {
#line 882 "lookup_switch.m"
          ll_backend__lookup_switch__BitNum_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 882 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 882 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 882 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
#line 882 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 3) = ((MR_Box) (ll_backend__lookup_switch__V_40_40));
#line 882 "lookup_switch.m"
        }
#line 875 "lookup_switch.m"
      }
#line 886 "lookup_switch.m"
    {
#line 886 "lookup_switch.m"
      ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 886 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 886 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 886 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[17])));
#line 886 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 3) = ((MR_Box) (ll_backend__lookup_switch__BitNum_24));
#line 886 "lookup_switch.m"
    }
#line 885 "lookup_switch.m"
    {
#line 885 "lookup_switch.m"
      ll_backend__lookup_switch__HasBit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 885 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 885 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 885 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 2) = ((MR_Box) (ll_backend__lookup_switch__V_45_45));
#line 885 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 3) = ((MR_Box) (ll_backend__lookup_switch__Word_23));
#line 885 "lookup_switch.m"
    }
#line 887 "lookup_switch.m"
    {
#line 887 "lookup_switch.m"
      ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__HasBit_26, ll_backend__lookup_switch__CheckCode_14, ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_28, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29, ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);
#line 887 "lookup_switch.m"
      return;
    }
#line 858 "lookup_switch.m"
  }
#line 853 "lookup_switch.m"
}

#line 380 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_14,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 380 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_16,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_18,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_20,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_22,
#line 380 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_23,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 380 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
#line 380 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41)
#line 380 "lookup_switch.m"
{
#line 388 "lookup_switch.m"
  {
#line 388 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_70_70;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CheckBitVecCode_26;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_27;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchEndCode_38;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61;
#line 388 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_63_63;
#line 445 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___MaybeEnd_37;

#line 393 "lookup_switch.m"
#line 393 "lookup_switch.m"
    switch (ll_backend__lookup_switch__NeedBitVecCheck_21) {
#line 393 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 393 "lookup_switch.m"
      case (MR_Integer) 1:
#line 394 "lookup_switch.m"
        {
#line 395 "lookup_switch.m"
          {
#line 395 "lookup_switch.m"
            ll_backend__lookup_switch__CheckBitVecCode_26 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 394 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39;
#line 394 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41;
#line 394 "lookup_switch.m"
        }
#line 393 "lookup_switch.m"
        break;
#line 393 "lookup_switch.m"
      case (MR_Integer) 0:
#line 391 "lookup_switch.m"
        {
#line 391 "lookup_switch.m"
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(ll_backend__lookup_switch__IndexRval_14, ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, &ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39, &ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43);
        }
#line 393 "lookup_switch.m"
        break;
#line 393 "lookup_switch.m"
    }
#line 407 "lookup_switch.m"
    if ((ll_backend__lookup_switch__OutVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "lookup_switch.m"
      {
#line 406 "lookup_switch.m"
        {
#line 406 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 405 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_40 = ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
#line 405 "lookup_switch.m"
        ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
#line 405 "lookup_switch.m"
      }
#line 407 "lookup_switch.m"
    else
#line 408 "lookup_switch.m"
      {
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseReg_30;
#line 408 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__NumOutVars_31;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__RevVectorRvals_32;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorRvals_33;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddr_34;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddrRval_35;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseRval_36;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_48_48;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_53_53;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_54_54;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_55_55;
#line 408 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_56_56;

#line 412 "lookup_switch.m"
        {
#line 412 "lookup_switch.m"
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_15, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_30, ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45);
        }
#line 415 "lookup_switch.m"
        {
#line 415 "lookup_switch.m"
          mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_19, &ll_backend__lookup_switch__NumOutVars_31);
        }
#line 416 "lookup_switch.m"
        {
#line 416 "lookup_switch.m"
          ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, ll_backend__lookup_switch__OutTypes_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__RevVectorRvals_32);
        }
#line 418 "lookup_switch.m"
        {
#line 418 "lookup_switch.m"
          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__RevVectorRvals_32, &ll_backend__lookup_switch__VectorRvals_33);
        }
#line 419 "lookup_switch.m"
        {
#line 419 "lookup_switch.m"
          ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_20, ll_backend__lookup_switch__VectorRvals_33, &ll_backend__lookup_switch__VectorAddr_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CI_40);
        }
#line 420 "lookup_switch.m"
        {
#line 420 "lookup_switch.m"
          ll_backend__lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 420 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 420 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 1) = ((MR_Box) (ll_backend__lookup_switch__VectorAddr_34));
#line 420 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "lookup_switch.m"
        }
#line 420 "lookup_switch.m"
        {
#line 420 "lookup_switch.m"
          ll_backend__lookup_switch__VectorAddrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 420 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 1) = ((MR_Box) (ll_backend__lookup_switch__V_48_48));
#line 420 "lookup_switch.m"
        }
#line 427 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NumOutVars_31 == (MR_Integer) 1);
#line 429 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 428 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRval_36 = ll_backend__lookup_switch__IndexRval_14;
#line 429 "lookup_switch.m"
        else
#line 430 "lookup_switch.m"
          {
#line 430 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_51_51;
#line 430 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_52_52;

#line 431 "lookup_switch.m"
            {
#line 431 "lookup_switch.m"
              ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 431 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_31));
#line 431 "lookup_switch.m"
            }
#line 431 "lookup_switch.m"
            {
#line 431 "lookup_switch.m"
              ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
#line 431 "lookup_switch.m"
            }
#line 430 "lookup_switch.m"
            {
#line 430 "lookup_switch.m"
              ll_backend__lookup_switch__BaseRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 430 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 430 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 430 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_14));
#line 430 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
#line 430 "lookup_switch.m"
            }
#line 430 "lookup_switch.m"
          }
#line 436 "lookup_switch.m"
        {
#line 436 "lookup_switch.m"
          ll_backend__lookup_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 0) = ((MR_Box) (ll_backend__lookup_switch__VectorAddrRval_35));
#line 436 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 436 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 2) = ((MR_Box) (ll_backend__lookup_switch__BaseRval_36));
#line 436 "lookup_switch.m"
        }
#line 436 "lookup_switch.m"
        {
#line 436 "lookup_switch.m"
          ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 436 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 1) = ((MR_Box) (ll_backend__lookup_switch__V_56_56));
#line 436 "lookup_switch.m"
        }
#line 435 "lookup_switch.m"
        {
#line 435 "lookup_switch.m"
          ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 435 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_30));
#line 435 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 2) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
#line 435 "lookup_switch.m"
        }
#line 434 "lookup_switch.m"
        {
#line 434 "lookup_switch.m"
          ll_backend__lookup_switch__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 0) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
#line 434 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 434 "lookup_switch.m"
        }
#line 433 "lookup_switch.m"
        {
#line 433 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__lookup_switch__V_53_53)));
        }
#line 439 "lookup_switch.m"
        {
#line 439 "lookup_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_19, (MR_Integer) 0, ll_backend__lookup_switch__BaseReg_30, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
        }
#line 408 "lookup_switch.m"
      }
#line 445 "lookup_switch.m"
    {
#line 445 "lookup_switch.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_15, ll_backend__lookup_switch__Liveness_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch___MaybeEnd_37, &ll_backend__lookup_switch__BranchEndCode_38, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
    }
#line 1846 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 447 "lookup_switch.m"
    {
#line 447 "lookup_switch.m"
      ll_backend__lookup_switch__V_63_63 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__BaseRegInitCode_27, ll_backend__lookup_switch__BranchEndCode_38);
    }
#line 447 "lookup_switch.m"
    {
#line 447 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__V_63_63);
    }
#line 388 "lookup_switch.m"
  }
#line 380 "lookup_switch.m"
}

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__487__1_2_p_0(
#line 487 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 487 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_68)
#line 487 "lookup_switch.m"
{
#line 487 "lookup_switch.m"
  {
#line 487 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], ((MR_Box) (ll_backend__lookup_switch__OutVars_27)), ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_68)));
    }
#line 487 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 487 "lookup_switch.m"
  }
#line 487 "lookup_switch.m"
}

#line 62 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_17,
#line 62 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 62 "lookup_switch.m"
{
#line 62 "lookup_switch.m"
  {
#line 62 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 62 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_15 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 62 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_16 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 62 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_15 == ll_backend__lookup_switch__CastY_16);
#line 62 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 1915 "ll_backend.lookup_switch.c"
      *ll_backend__lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "lookup_switch.m"
    else
#line 62 "lookup_switch.m"
      {
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_12_12;

#line 62 "lookup_switch.m"
        {
#line 62 "lookup_switch.m"
          backend_libs__switch_util____Compare____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_17, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, &ll_backend__lookup_switch__V_12_12, ll_backend__lookup_switch__V_4_4, ll_backend__lookup_switch__V_8_8);
        }
#line 1945 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_12_12 == (MR_Integer) 0);
#line 62 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 62 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_12_12;
#line 62 "lookup_switch.m"
        else
#line 62 "lookup_switch.m"
          {
#line 62 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_13_13;

#line 62 "lookup_switch.m"
            {
#line 62 "lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], &ll_backend__lookup_switch__V_13_13, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
            }
#line 1965 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_13_13 == (MR_Integer) 0);
#line 62 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 62 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_13_13;
#line 62 "lookup_switch.m"
            else
#line 62 "lookup_switch.m"
              {
#line 62 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_14_14;

#line 62 "lookup_switch.m"
                {
#line 62 "lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[4], &ll_backend__lookup_switch__V_14_14, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                }
#line 1985 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_14_14 == (MR_Integer) 0);
#line 62 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 62 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
                  *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_14_14;
#line 62 "lookup_switch.m"
                else
#line 62 "lookup_switch.m"
                  {
#line 62 "lookup_switch.m"
                    {
#line 62 "lookup_switch.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[5], ll_backend__lookup_switch__HeadVar__1_1, ((MR_Box) (ll_backend__lookup_switch__V_7_7)), ((MR_Box) (ll_backend__lookup_switch__V_11_11)));
#line 62 "lookup_switch.m"
                      return;
                    }
#line 62 "lookup_switch.m"
                  }
#line 62 "lookup_switch.m"
              }
#line 62 "lookup_switch.m"
          }
#line 62 "lookup_switch.m"
      }
#line 62 "lookup_switch.m"
  }
#line 62 "lookup_switch.m"
}

#line 62 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_13,
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 62 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 62 "lookup_switch.m"
{
#line 62 "lookup_switch.m"
  {
#line 62 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 62 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_11 = (MR_Integer) ll_backend__lookup_switch__HeadVar__1_1;
#line 62 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_12 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;

#line 62 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_11 == ll_backend__lookup_switch__CastY_12);
#line 62 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 62 "lookup_switch.m"
    else
#line 62 "lookup_switch.m"
      {
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_18_18;
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_19_19;
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_20_20;
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));

#line 2070 "ll_backend.lookup_switch.c"
        {
#line 2072 "ll_backend.lookup_switch.c"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, ll_backend__lookup_switch__V_3_3, ll_backend__lookup_switch__V_7_7);
        }
#line 62 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
          {
#line 2079 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeInfo_18_18 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[3];
#line 2081 "ll_backend.lookup_switch.c"
            {
#line 2083 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_18_18, ((MR_Box) (ll_backend__lookup_switch__V_4_4)), ((MR_Box) (ll_backend__lookup_switch__V_8_8)));
            }
#line 62 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
              {
#line 2090 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_19_19 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[4];
#line 2092 "ll_backend.lookup_switch.c"
                {
#line 2094 "ll_backend.lookup_switch.c"
                  ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_19_19, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
                }
#line 62 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 62 "lookup_switch.m"
                  {
#line 2101 "ll_backend.lookup_switch.c"
                    ll_backend__lookup_switch__TypeInfo_20_20 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[5];
#line 2103 "ll_backend.lookup_switch.c"
                    {
#line 2105 "ll_backend.lookup_switch.c"
                      return ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_20_20, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                    }
#line 62 "lookup_switch.m"
                  }
#line 62 "lookup_switch.m"
              }
#line 62 "lookup_switch.m"
          }
#line 62 "lookup_switch.m"
      }
#line 62 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 62 "lookup_switch.m"
  }
#line 62 "lookup_switch.m"
}

#line 100 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0(
#line 100 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 100 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 100 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 100 "lookup_switch.m"
{
#line 100 "lookup_switch.m"
  {
#line 100 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 100 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 100 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 100 "lookup_switch.m"
    {
#line 100 "lookup_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Cast_HeadVar1_4, ll_backend__lookup_switch__Cast_HeadVar2_5);
#line 100 "lookup_switch.m"
      return;
    }
#line 100 "lookup_switch.m"
  }
#line 100 "lookup_switch.m"
}

#line 100 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0(
#line 100 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_1,
#line 100 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 100 "lookup_switch.m"
{
#line 2164 "ll_backend.lookup_switch.c"
  {
#line 2166 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__HeadVar__2_1 == ll_backend__lookup_switch__HeadVar__2_2);

#line 2169 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 2171 "ll_backend.lookup_switch.c"
  }
#line 100 "lookup_switch.m"
}

#line 920 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 920 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 920 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 920 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3)
#line 920 "lookup_switch.m"
{
#line 923 "lookup_switch.m"
  {
#line 923 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 923 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "lookup_switch.m"
      *ll_backend__lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "lookup_switch.m"
    else
#line 924 "lookup_switch.m"
      {
#line 924 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Word_5;
#line 924 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Bits_6;
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rval_9;
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rvals_10;
#line 924 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__WordVal_11;
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_12;
#line 924 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Count1_13;
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 924 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_16_16;

#line 924 "lookup_switch.m"
        ll_backend__lookup_switch__Word_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 0)));
#line 924 "lookup_switch.m"
        ll_backend__lookup_switch__Bits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 1)));
#line 925 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__Count_2 < ll_backend__lookup_switch__Word_5);
#line 928 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 926 "lookup_switch.m"
          {
#line 926 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = (MR_Integer) 0;
#line 927 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__HeadVar__1_1;
#line 926 "lookup_switch.m"
          }
#line 928 "lookup_switch.m"
        else
#line 929 "lookup_switch.m"
          {
#line 929 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = ll_backend__lookup_switch__Bits_6;
#line 930 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__Rest_7;
#line 929 "lookup_switch.m"
          }
#line 932 "lookup_switch.m"
        {
#line 932 "lookup_switch.m"
          ll_backend__lookup_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_16_16, 0) = ((MR_Box) (ll_backend__lookup_switch__WordVal_11));
#line 932 "lookup_switch.m"
        }
#line 932 "lookup_switch.m"
        {
#line 932 "lookup_switch.m"
          ll_backend__lookup_switch__Rval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 1) = ((MR_Box) (ll_backend__lookup_switch__V_16_16));
#line 932 "lookup_switch.m"
        }
#line 933 "lookup_switch.m"
        ll_backend__lookup_switch__Count1_13 = (ll_backend__lookup_switch__Count_2 + (MR_Integer) 1);
#line 934 "lookup_switch.m"
        {
#line 934 "lookup_switch.m"
          ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__Remainder_12, ll_backend__lookup_switch__Count1_13, &ll_backend__lookup_switch__Rvals_10);
        }
#line 924 "lookup_switch.m"
        {
#line 924 "lookup_switch.m"
          MR_Word base;
#line 924 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__3_3 = base;
#line 924 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__Rval_9));
#line 924 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__Rvals_10));
#line 924 "lookup_switch.m"
        }
#line 924 "lookup_switch.m"
      }
#line 923 "lookup_switch.m"
  }
#line 920 "lookup_switch.m"
}

#line 841 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 841 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 841 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 841 "lookup_switch.m"
{
#line 841 "lookup_switch.m"
  {
#line 841 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 841 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 841 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 841 "lookup_switch.m"
    {
#line 841 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 841 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 841 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 841 "lookup_switch.m"
  }
#line 841 "lookup_switch.m"
}

#line 831 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 831 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 831 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 831 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 831 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11)
#line 831 "lookup_switch.m"
{
#line 834 "lookup_switch.m"
  {
#line 834 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 834 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 834 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarRvals_9;

#line 841 "lookup_switch.m"
    {
#line 841 "lookup_switch.m"
      ll_backend__lookup_switch__VarRvals_9 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[3], ll_backend__lookup_switch__OutTypes_5);
    }
#line 843 "lookup_switch.m"
    {
#line 843 "lookup_switch.m"
      *ll_backend__lookup_switch__MainRow_6 = mercury__list__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_1[9]), ll_backend__lookup_switch__VarRvals_9);
    }
#line 844 "lookup_switch.m"
    *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = (ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10 + (MR_Integer) 1);
#line 834 "lookup_switch.m"
  }
#line 831 "lookup_switch.m"
}

#line 777 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 777 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 777 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 777 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 777 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 777 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15)
#line 777 "lookup_switch.m"
{
#line 786 "lookup_switch.m"
  {
#line 786 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 786 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "lookup_switch.m"
      {
#line 787 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 > ll_backend__lookup_switch__EndVal_2);
#line 789 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 788 "lookup_switch.m"
          {
#line 788 "lookup_switch.m"
            *ll_backend__lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 788 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 788 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 788 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 788 "lookup_switch.m"
          }
#line 789 "lookup_switch.m"
        else
#line 790 "lookup_switch.m"
          {
#line 790 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MainRow_26;
#line 790 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MoreMainRows_27;
#line 790 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37;
#line 790 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_38_38;

#line 790 "lookup_switch.m"
            {
#line 790 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_26, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37);
            }
#line 791 "lookup_switch.m"
            ll_backend__lookup_switch__V_38_38 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 791 "lookup_switch.m"
            {
#line 791 "lookup_switch.m"
              ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_38_38, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__MoreMainRows_27, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
            }
#line 795 "lookup_switch.m"
            {
#line 795 "lookup_switch.m"
              MR_Word base;
#line 795 "lookup_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 795 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_26));
#line 795 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MoreMainRows_27));
#line 795 "lookup_switch.m"
            }
#line 790 "lookup_switch.m"
          }
#line 789 "lookup_switch.m"
      }
#line 786 "lookup_switch.m"
    else
#line 800 "lookup_switch.m"
      {
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Index_49;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Soln_50;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRow_52;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRows_53;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_59;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79;
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81;
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89;
#line 800 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90;
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92;
#line 800 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_97_97;

#line 798 "lookup_switch.m"
        ll_backend__lookup_switch__Index_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 0)));
#line 798 "lookup_switch.m"
        ll_backend__lookup_switch__Soln_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 1)));
#line 801 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 < ll_backend__lookup_switch__Index_49);
#line 804 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 802 "lookup_switch.m"
          {
#line 802 "lookup_switch.m"
            {
#line 802 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_52, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79);
            }
#line 803 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__HeadVar__5_5;
#line 802 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 802 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 802 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 802 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 802 "lookup_switch.m"
          }
#line 804 "lookup_switch.m"
        else
#line 823 "lookup_switch.m"
          {
#line 812 "lookup_switch.m"
            if (((MR_tag((MR_Word) ll_backend__lookup_switch__Soln_50)) == (MR_mktag((MR_Integer) 0))))
#line 806 "lookup_switch.m"
              {
#line 806 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__OutRvals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 806 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__ZeroRval_61;
#line 806 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_96_96;

#line 807 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = (ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12 + (MR_Integer) 1);
#line 808 "lookup_switch.m"
                ll_backend__lookup_switch__ZeroRval_61 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 811 "lookup_switch.m"
                {
#line 811 "lookup_switch.m"
                  ll_backend__lookup_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 811 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 1) = ((MR_Box) (ll_backend__lookup_switch__OutRvals_60));
#line 811 "lookup_switch.m"
                }
#line 811 "lookup_switch.m"
                {
#line 811 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 811 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_96_96));
#line 811 "lookup_switch.m"
                }
#line 806 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 806 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 806 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 806 "lookup_switch.m"
              }
#line 812 "lookup_switch.m"
            else
#line 813 "lookup_switch.m"
              {
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__TypeInfo_103_103;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstSolnRvals_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LaterSolns_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 1)));
#line 813 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__NumLaterSolns_64;
#line 813 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__FirstRowOffset_65;
#line 813 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__LastRowOffset_66;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstRowRval_67;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LastRowRval_68;
#line 813 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_83_83;
#line 813 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_84_84;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_86_86;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_87_87;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_88_88;
#line 813 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_91_91;

#line 814 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = (ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14 + (MR_Integer) 1);
#line 2609 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_103_103 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 815 "lookup_switch.m"
                {
#line 815 "lookup_switch.m"
                  mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63, &ll_backend__lookup_switch__NumLaterSolns_64);
                }
#line 816 "lookup_switch.m"
                ll_backend__lookup_switch__FirstRowOffset_65 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 * ll_backend__lookup_switch__NumOutTypes_4);
#line 817 "lookup_switch.m"
                ll_backend__lookup_switch__V_84_84 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 817 "lookup_switch.m"
                ll_backend__lookup_switch__V_83_83 = (ll_backend__lookup_switch__V_84_84 - (MR_Integer) 1);
#line 817 "lookup_switch.m"
                ll_backend__lookup_switch__LastRowOffset_66 = (ll_backend__lookup_switch__V_83_83 * ll_backend__lookup_switch__NumOutTypes_4);
#line 818 "lookup_switch.m"
                {
#line 818 "lookup_switch.m"
                  ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 818 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowOffset_65));
#line 818 "lookup_switch.m"
                }
#line 818 "lookup_switch.m"
                {
#line 818 "lookup_switch.m"
                  ll_backend__lookup_switch__FirstRowRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 818 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_86_86));
#line 818 "lookup_switch.m"
                }
#line 819 "lookup_switch.m"
                {
#line 819 "lookup_switch.m"
                  ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowOffset_66));
#line 819 "lookup_switch.m"
                }
#line 819 "lookup_switch.m"
                {
#line 819 "lookup_switch.m"
                  ll_backend__lookup_switch__LastRowRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 819 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 1) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 819 "lookup_switch.m"
                }
#line 820 "lookup_switch.m"
                {
#line 820 "lookup_switch.m"
                  ll_backend__lookup_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowRval_68));
#line 820 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 1) = ((MR_Box) (ll_backend__lookup_switch__FirstSolnRvals_62));
#line 820 "lookup_switch.m"
                }
#line 820 "lookup_switch.m"
                {
#line 820 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowRval_67));
#line 820 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_88_88));
#line 820 "lookup_switch.m"
                }
#line 821 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 822 "lookup_switch.m"
                {
#line 822 "lookup_switch.m"
                  ll_backend__lookup_switch__V_91_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63);
                }
#line 822 "lookup_switch.m"
                {
#line 822 "lookup_switch.m"
                  ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__V_91_91);
                }
#line 813 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 813 "lookup_switch.m"
              }
#line 824 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__Rest_51;
#line 823 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 823 "lookup_switch.m"
          }
#line 826 "lookup_switch.m"
        ll_backend__lookup_switch__V_97_97 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 826 "lookup_switch.m"
        {
#line 826 "lookup_switch.m"
          ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_97_97, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, ll_backend__lookup_switch__Remainder_59, &ll_backend__lookup_switch__MainRows_53, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
        }
#line 798 "lookup_switch.m"
        {
#line 798 "lookup_switch.m"
          MR_Word base;
#line 798 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 798 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_52));
#line 798 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MainRows_53));
#line 798 "lookup_switch.m"
        }
#line 800 "lookup_switch.m"
      }
#line 786 "lookup_switch.m"
  }
#line 777 "lookup_switch.m"
}

#line 579 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 579 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 579 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 579 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18)
#line 579 "lookup_switch.m"
{
#line 587 "lookup_switch.m"
  {
#line 587 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 587 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "lookup_switch.m"
      {
#line 588 "lookup_switch.m"
        {
#line 588 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_code_for_each_kind\'/18", (MR_String) "no kinds");
#line 588 "lookup_switch.m"
          return;
        }
#line 587 "lookup_switch.m"
      }
#line 587 "lookup_switch.m"
    else
#line 592 "lookup_switch.m"
      {
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kinds_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TestOp_58;
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__KindCode_60;
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
#line 592 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;

#line 601 "lookup_switch.m"
#line 601 "lookup_switch.m"
        switch (ll_backend__lookup_switch__Kind_41) {
#line 601 "lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 601 "lookup_switch.m"
          case (MR_Integer) 1:
#line 602 "lookup_switch.m"
            {
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_292_292;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__BranchEndCode_61;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__GotoEndCode_62;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239;
#line 602 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_240_240;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_244_244;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_245_245;
#line 602 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_246_246;

#line 603 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
#line 605 "lookup_switch.m"
              {
#line 605 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239);
              }
#line 606 "lookup_switch.m"
              ll_backend__lookup_switch__V_240_240 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 606 "lookup_switch.m"
              {
#line 606 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_240_240, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
#line 608 "lookup_switch.m"
              {
#line 608 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
#line 2853 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_292_292 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 612 "lookup_switch.m"
              {
#line 612 "lookup_switch.m"
                ll_backend__lookup_switch__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_246_246, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 612 "lookup_switch.m"
              }
#line 612 "lookup_switch.m"
              {
#line 612 "lookup_switch.m"
                ll_backend__lookup_switch__V_245_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 612 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 1) = ((MR_Box) (ll_backend__lookup_switch__V_246_246));
#line 612 "lookup_switch.m"
              }
#line 612 "lookup_switch.m"
              {
#line 612 "lookup_switch.m"
                ll_backend__lookup_switch__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 0) = ((MR_Box) (ll_backend__lookup_switch__V_245_245));
#line 612 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
#line 612 "lookup_switch.m"
              }
#line 611 "lookup_switch.m"
              {
#line 611 "lookup_switch.m"
                ll_backend__lookup_switch__GotoEndCode_62 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ((MR_Box) (ll_backend__lookup_switch__V_244_244)));
              }
#line 615 "lookup_switch.m"
              {
#line 615 "lookup_switch.m"
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__GotoEndCode_62);
              }
#line 602 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17;
#line 602 "lookup_switch.m"
            }
#line 601 "lookup_switch.m"
            break;
#line 601 "lookup_switch.m"
          case (MR_Integer) 2:
#line 617 "lookup_switch.m"
            {
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_293_293;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_295_295;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__Globals_63;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumeMap_64;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FlushCode_65;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MinOffsetColumnRval_66;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaxOffsetColumnRval_67;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveSlotsCode_68;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveTicketCode_69;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeTicketSlot_70;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ReclaimHeap_71;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveHpCode_72;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeHpSlot_73;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HijackInfo_74;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__PrepareHijackCode_75;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__DisjEntry_76;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePoint_77;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UpdateRedoipCode_78;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstFlushResumeVarsCode_79;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstZombies_80;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstBranchEndCode_81;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePointCode_82;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreTicketCode_83;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreHpCode_84;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBaseReg_85;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoLabel_86;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabel_87;
#line 617 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__NumOutVars_88;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TestMoreSolnsCode_89;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoHijackCode_90;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabelCode_91;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterFlushResumeVarsCode_93;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterZombies_94;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBranchEndCode_95;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_108_108;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_110_110;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_111_111;
#line 617 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_112_112;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_114_114;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_115_115;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_116_116;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_117_117;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_118_118;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_119_119;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_121_121;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_123_123;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_124_124;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_125_125;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_126_126;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_127_127;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_141_141;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145;
#line 617 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_146_146;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_154_154;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_155_155;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_156_156;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_166_166;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_167_167;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_168_168;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_169_169;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_171_171;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_172_172;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_173_173;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_174_174;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_176_176;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_177_177;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_178_178;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_180_180;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_181_181;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_182_182;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_183_183;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_186_186;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_187_187;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_189_189;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_190_190;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_191_191;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_192_192;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_194_194;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_195_195;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_196_196;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_200_200;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_201_201;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_202_202;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_204_204;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_205_205;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_206_206;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_207_207;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_208_208;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_223_223;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_224_224;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_225_225;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_226_226;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_227_227;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_228_228;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_229_229;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_230_230;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_231_231;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_232_232;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_233_233;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_234_234;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_235_235;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_236_236;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_237_237;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_238_238;
#line 617 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__GotoEndCode_291;
#line 718 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch___LaterUpdateRedoipCode_92;

#line 618 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 619 "lookup_switch.m"
              {
#line 619 "lookup_switch.m"
                ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__Globals_63);
              }
#line 621 "lookup_switch.m"
              {
#line 621 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107);
              }
#line 3182 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_293_293 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 626 "lookup_switch.m"
              {
#line 626 "lookup_switch.m"
                ll_backend__lookup_switch__V_108_108 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 626 "lookup_switch.m"
              {
#line 626 "lookup_switch.m"
                ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__lookup_switch__V_108_108, &ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109);
              }
#line 628 "lookup_switch.m"
              {
#line 628 "lookup_switch.m"
                ll_backend__lookup_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_110_110, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 628 "lookup_switch.m"
              }
#line 628 "lookup_switch.m"
              {
#line 628 "lookup_switch.m"
                ll_backend__lookup_switch__MinOffsetColumnRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 628 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 1) = ((MR_Box) (ll_backend__lookup_switch__V_110_110));
#line 628 "lookup_switch.m"
              }
#line 629 "lookup_switch.m"
              ll_backend__lookup_switch__V_112_112 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 1);
#line 629 "lookup_switch.m"
              {
#line 629 "lookup_switch.m"
                ll_backend__lookup_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_111_111, 0) = ((MR_Box) (ll_backend__lookup_switch__V_112_112));
#line 629 "lookup_switch.m"
              }
#line 629 "lookup_switch.m"
              {
#line 629 "lookup_switch.m"
                ll_backend__lookup_switch__MaxOffsetColumnRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 629 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_111_111));
#line 629 "lookup_switch.m"
              }
#line 632 "lookup_switch.m"
              ll_backend__lookup_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0]);
#line 632 "lookup_switch.m"
              {
#line 632 "lookup_switch.m"
                ll_backend__lookup_switch__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_121_121, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 632 "lookup_switch.m"
              }
#line 632 "lookup_switch.m"
              {
#line 632 "lookup_switch.m"
                ll_backend__lookup_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 3) = ((MR_Box) (ll_backend__lookup_switch__MinOffsetColumnRval_66));
#line 632 "lookup_switch.m"
              }
#line 632 "lookup_switch.m"
              {
#line 632 "lookup_switch.m"
                ll_backend__lookup_switch__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_117_117, 0) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
#line 632 "lookup_switch.m"
              }
#line 631 "lookup_switch.m"
              {
#line 631 "lookup_switch.m"
                ll_backend__lookup_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 631 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 631 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 631 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 2) = ((MR_Box) (ll_backend__lookup_switch__V_117_117));
#line 631 "lookup_switch.m"
              }
#line 631 "lookup_switch.m"
              {
#line 631 "lookup_switch.m"
                ll_backend__lookup_switch__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 0) = ((MR_Box) (ll_backend__lookup_switch__V_116_116));
#line 631 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
#line 631 "lookup_switch.m"
              }
#line 635 "lookup_switch.m"
              {
#line 635 "lookup_switch.m"
                ll_backend__lookup_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 635 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 635 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 635 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
#line 635 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 3) = ((MR_Box) (ll_backend__lookup_switch__MaxOffsetColumnRval_67));
#line 635 "lookup_switch.m"
              }
#line 635 "lookup_switch.m"
              {
#line 635 "lookup_switch.m"
                ll_backend__lookup_switch__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 635 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_126_126, 0) = ((MR_Box) (ll_backend__lookup_switch__V_127_127));
#line 635 "lookup_switch.m"
              }
#line 634 "lookup_switch.m"
              {
#line 634 "lookup_switch.m"
                ll_backend__lookup_switch__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 1) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 2) = ((MR_Box) (ll_backend__lookup_switch__V_126_126));
#line 634 "lookup_switch.m"
              }
#line 634 "lookup_switch.m"
              {
#line 634 "lookup_switch.m"
                ll_backend__lookup_switch__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 0) = ((MR_Box) (ll_backend__lookup_switch__V_125_125));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
#line 634 "lookup_switch.m"
              }
#line 637 "lookup_switch.m"
              {
#line 637 "lookup_switch.m"
                ll_backend__lookup_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 0) = ((MR_Box) (ll_backend__lookup_switch__V_124_124));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "lookup_switch.m"
              }
#line 633 "lookup_switch.m"
              {
#line 633 "lookup_switch.m"
                ll_backend__lookup_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 0) = ((MR_Box) (ll_backend__lookup_switch__V_115_115));
#line 633 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 1) = ((MR_Box) (ll_backend__lookup_switch__V_123_123));
#line 633 "lookup_switch.m"
              }
#line 630 "lookup_switch.m"
              {
#line 630 "lookup_switch.m"
                ll_backend__lookup_switch__SaveSlotsCode_68 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_switch__V_114_114);
              }
#line 638 "lookup_switch.m"
              {
#line 638 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__lookup_switch__AddTrailOps_9, &ll_backend__lookup_switch__SaveTicketCode_69, &ll_backend__lookup_switch__MaybeTicketSlot_70, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134);
              }
#line 640 "lookup_switch.m"
              {
#line 640 "lookup_switch.m"
                libs__globals__lookup_bool_option_3_p_0(ll_backend__lookup_switch__Globals_63, (MR_Integer) 310, &ll_backend__lookup_switch__ReclaimHeap_71);
              }
#line 642 "lookup_switch.m"
              {
#line 642 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__lookup_switch__ReclaimHeap_71, &ll_backend__lookup_switch__SaveHpCode_72, &ll_backend__lookup_switch__MaybeHpSlot_73, ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, &ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137);
              }
#line 643 "lookup_switch.m"
              {
#line 643 "lookup_switch.m"
                ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0((MR_Integer) 2, &ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, &ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140);
              }
#line 646 "lookup_switch.m"
              {
#line 646 "lookup_switch.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__DisjEntry_76);
              }
#line 650 "lookup_switch.m"
              {
#line 650 "lookup_switch.m"
                ll_backend__lookup_switch__V_141_141 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 650 "lookup_switch.m"
              {
#line 650 "lookup_switch.m"
                ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__lookup_switch__V_141_141, (MR_Integer) 1, ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__ResumePoint_77, ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, &ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143);
              }
#line 652 "lookup_switch.m"
              {
#line 652 "lookup_switch.m"
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145);
              }
#line 653 "lookup_switch.m"
              ll_backend__lookup_switch__V_146_146 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 653 "lookup_switch.m"
              {
#line 653 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_146_146, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147);
              }
#line 655 "lookup_switch.m"
              {
#line 655 "lookup_switch.m"
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149);
              }
#line 661 "lookup_switch.m"
              {
#line 661 "lookup_switch.m"
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150);
              }
#line 662 "lookup_switch.m"
              {
#line 662 "lookup_switch.m"
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151);
              }
#line 663 "lookup_switch.m"
              {
#line 663 "lookup_switch.m"
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
#line 665 "lookup_switch.m"
              {
#line 665 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
#line 3427 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_295_295 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 670 "lookup_switch.m"
              {
#line 670 "lookup_switch.m"
                ll_backend__lookup_switch__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_156_156, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 670 "lookup_switch.m"
              }
#line 670 "lookup_switch.m"
              {
#line 670 "lookup_switch.m"
                ll_backend__lookup_switch__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 670 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 1) = ((MR_Box) (ll_backend__lookup_switch__V_156_156));
#line 670 "lookup_switch.m"
              }
#line 670 "lookup_switch.m"
              {
#line 670 "lookup_switch.m"
                ll_backend__lookup_switch__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 0) = ((MR_Box) (ll_backend__lookup_switch__V_155_155));
#line 670 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
#line 670 "lookup_switch.m"
              }
#line 669 "lookup_switch.m"
              {
#line 669 "lookup_switch.m"
                ll_backend__lookup_switch__GotoEndCode_291 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ((MR_Box) (ll_backend__lookup_switch__V_154_154)));
              }
#line 675 "lookup_switch.m"
              {
#line 675 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__DisjEntry_76, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158);
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__lookup_switch__ResumePoint_77, &ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160);
              }
#line 678 "lookup_switch.m"
              {
#line 678 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__lookup_switch__MaybeTicketSlot_70, (MR_Integer) 0, &ll_backend__lookup_switch__RestoreTicketCode_83);
              }
#line 680 "lookup_switch.m"
              {
#line 680 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__lookup_switch__MaybeHpSlot_73, &ll_backend__lookup_switch__RestoreHpCode_84);
              }
#line 682 "lookup_switch.m"
              {
#line 682 "lookup_switch.m"
                ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_7, (MR_Integer) 0, &ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163);
              }
#line 683 "lookup_switch.m"
              {
#line 683 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__UndoLabel_86, ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, &ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164);
              }
#line 684 "lookup_switch.m"
              {
#line 684 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__AfterUndoLabel_87, ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
              }
#line 685 "lookup_switch.m"
              {
#line 685 "lookup_switch.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_3, &ll_backend__lookup_switch__NumOutVars_88);
              }
#line 687 "lookup_switch.m"
              {
#line 687 "lookup_switch.m"
                ll_backend__lookup_switch__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_169_169, 0) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 687 "lookup_switch.m"
              }
#line 687 "lookup_switch.m"
              {
#line 687 "lookup_switch.m"
                ll_backend__lookup_switch__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
#line 687 "lookup_switch.m"
              }
#line 687 "lookup_switch.m"
              {
#line 687 "lookup_switch.m"
                ll_backend__lookup_switch__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 0) = ((MR_Box) (ll_backend__lookup_switch__V_168_168));
#line 687 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 1) = ((MR_Box) ((MR_String) "Init later base register"));
#line 687 "lookup_switch.m"
              }
#line 691 "lookup_switch.m"
              {
#line 691 "lookup_switch.m"
                ll_backend__lookup_switch__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_176_176, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 691 "lookup_switch.m"
              }
#line 691 "lookup_switch.m"
              {
#line 691 "lookup_switch.m"
                ll_backend__lookup_switch__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_177_177, 0) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 691 "lookup_switch.m"
              }
#line 690 "lookup_switch.m"
              {
#line 690 "lookup_switch.m"
                ll_backend__lookup_switch__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 3) = ((MR_Box) (ll_backend__lookup_switch__V_177_177));
#line 690 "lookup_switch.m"
              }
#line 692 "lookup_switch.m"
              {
#line 692 "lookup_switch.m"
                ll_backend__lookup_switch__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 692 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_178_178, 0) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
#line 692 "lookup_switch.m"
              }
#line 690 "lookup_switch.m"
              {
#line 690 "lookup_switch.m"
                ll_backend__lookup_switch__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 1) = ((MR_Box) (ll_backend__lookup_switch__V_174_174));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 2) = ((MR_Box) (ll_backend__lookup_switch__V_178_178));
#line 690 "lookup_switch.m"
              }
#line 689 "lookup_switch.m"
              {
#line 689 "lookup_switch.m"
                ll_backend__lookup_switch__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 0) = ((MR_Box) (ll_backend__lookup_switch__V_173_173));
#line 689 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
#line 689 "lookup_switch.m"
              }
#line 697 "lookup_switch.m"
              {
#line 697 "lookup_switch.m"
                ll_backend__lookup_switch__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_187_187, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_88));
#line 697 "lookup_switch.m"
              }
#line 697 "lookup_switch.m"
              {
#line 697 "lookup_switch.m"
                ll_backend__lookup_switch__V_186_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 1) = ((MR_Box) (ll_backend__lookup_switch__V_187_187));
#line 697 "lookup_switch.m"
              }
#line 695 "lookup_switch.m"
              {
#line 695 "lookup_switch.m"
                ll_backend__lookup_switch__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 3) = ((MR_Box) (ll_backend__lookup_switch__V_186_186));
#line 695 "lookup_switch.m"
              }
#line 694 "lookup_switch.m"
              {
#line 694 "lookup_switch.m"
                ll_backend__lookup_switch__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 2) = ((MR_Box) (ll_backend__lookup_switch__V_183_183));
#line 694 "lookup_switch.m"
              }
#line 694 "lookup_switch.m"
              {
#line 694 "lookup_switch.m"
                ll_backend__lookup_switch__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 0) = ((MR_Box) (ll_backend__lookup_switch__V_182_182));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
#line 694 "lookup_switch.m"
              }
#line 699 "lookup_switch.m"
              {
#line 699 "lookup_switch.m"
                ll_backend__lookup_switch__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_192_192, 0) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
#line 699 "lookup_switch.m"
              }
#line 699 "lookup_switch.m"
              {
#line 699 "lookup_switch.m"
                ll_backend__lookup_switch__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 1) = ((MR_Box) (ll_backend__lookup_switch__V_192_192));
#line 699 "lookup_switch.m"
              }
#line 699 "lookup_switch.m"
              {
#line 699 "lookup_switch.m"
                ll_backend__lookup_switch__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 0) = ((MR_Box) (ll_backend__lookup_switch__V_191_191));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
#line 699 "lookup_switch.m"
              }
#line 701 "lookup_switch.m"
              {
#line 701 "lookup_switch.m"
                ll_backend__lookup_switch__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 1) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
#line 701 "lookup_switch.m"
              }
#line 701 "lookup_switch.m"
              {
#line 701 "lookup_switch.m"
                ll_backend__lookup_switch__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 0) = ((MR_Box) (ll_backend__lookup_switch__V_196_196));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
#line 701 "lookup_switch.m"
              }
#line 703 "lookup_switch.m"
              {
#line 703 "lookup_switch.m"
                ll_backend__lookup_switch__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 0) = ((MR_Box) (ll_backend__lookup_switch__V_195_195));
#line 703 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "lookup_switch.m"
              }
#line 700 "lookup_switch.m"
              {
#line 700 "lookup_switch.m"
                ll_backend__lookup_switch__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 0) = ((MR_Box) (ll_backend__lookup_switch__V_190_190));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 1) = ((MR_Box) (ll_backend__lookup_switch__V_194_194));
#line 700 "lookup_switch.m"
              }
#line 698 "lookup_switch.m"
              {
#line 698 "lookup_switch.m"
                ll_backend__lookup_switch__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 0) = ((MR_Box) (ll_backend__lookup_switch__V_181_181));
#line 698 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 1) = ((MR_Box) (ll_backend__lookup_switch__V_189_189));
#line 698 "lookup_switch.m"
              }
#line 693 "lookup_switch.m"
              {
#line 693 "lookup_switch.m"
                ll_backend__lookup_switch__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 0) = ((MR_Box) (ll_backend__lookup_switch__V_172_172));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 1) = ((MR_Box) (ll_backend__lookup_switch__V_180_180));
#line 693 "lookup_switch.m"
              }
#line 688 "lookup_switch.m"
              {
#line 688 "lookup_switch.m"
                ll_backend__lookup_switch__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 0) = ((MR_Box) (ll_backend__lookup_switch__V_167_167));
#line 688 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 1) = ((MR_Box) (ll_backend__lookup_switch__V_171_171));
#line 688 "lookup_switch.m"
              }
#line 686 "lookup_switch.m"
              {
#line 686 "lookup_switch.m"
                ll_backend__lookup_switch__TestMoreSolnsCode_89 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_166_166);
              }
#line 704 "lookup_switch.m"
              {
#line 704 "lookup_switch.m"
                ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199);
              }
#line 706 "lookup_switch.m"
              {
#line 706 "lookup_switch.m"
                ll_backend__lookup_switch__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 1) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
#line 706 "lookup_switch.m"
              }
#line 706 "lookup_switch.m"
              {
#line 706 "lookup_switch.m"
                ll_backend__lookup_switch__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 0) = ((MR_Box) (ll_backend__lookup_switch__V_202_202));
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
#line 706 "lookup_switch.m"
              }
#line 709 "lookup_switch.m"
              {
#line 709 "lookup_switch.m"
                ll_backend__lookup_switch__V_208_208 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddrRval_13));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
#line 709 "lookup_switch.m"
              }
#line 709 "lookup_switch.m"
              {
#line 709 "lookup_switch.m"
                ll_backend__lookup_switch__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 1) = ((MR_Box) (ll_backend__lookup_switch__V_208_208));
#line 709 "lookup_switch.m"
              }
#line 708 "lookup_switch.m"
              {
#line 708 "lookup_switch.m"
                ll_backend__lookup_switch__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 708 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 708 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 2) = ((MR_Box) (ll_backend__lookup_switch__V_207_207));
#line 708 "lookup_switch.m"
              }
#line 708 "lookup_switch.m"
              {
#line 708 "lookup_switch.m"
                ll_backend__lookup_switch__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 0) = ((MR_Box) (ll_backend__lookup_switch__V_206_206));
#line 708 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
#line 708 "lookup_switch.m"
              }
#line 712 "lookup_switch.m"
              {
#line 712 "lookup_switch.m"
                ll_backend__lookup_switch__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 0) = ((MR_Box) (ll_backend__lookup_switch__V_205_205));
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "lookup_switch.m"
              }
#line 707 "lookup_switch.m"
              {
#line 707 "lookup_switch.m"
                ll_backend__lookup_switch__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 0) = ((MR_Box) (ll_backend__lookup_switch__V_201_201));
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 1) = ((MR_Box) (ll_backend__lookup_switch__V_204_204));
#line 707 "lookup_switch.m"
              }
#line 705 "lookup_switch.m"
              {
#line 705 "lookup_switch.m"
                ll_backend__lookup_switch__AfterUndoLabelCode_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_200_200);
              }
#line 718 "lookup_switch.m"
              {
#line 718 "lookup_switch.m"
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch___LaterUpdateRedoipCode_92, ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215);
              }
#line 721 "lookup_switch.m"
              {
#line 721 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, (MR_Integer) 0, ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217);
              }
#line 722 "lookup_switch.m"
              {
#line 722 "lookup_switch.m"
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218);
              }
#line 728 "lookup_switch.m"
              {
#line 728 "lookup_switch.m"
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219);
              }
#line 729 "lookup_switch.m"
              {
#line 729 "lookup_switch.m"
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220);
              }
#line 730 "lookup_switch.m"
              {
#line 730 "lookup_switch.m"
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
#line 732 "lookup_switch.m"
              {
#line 732 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
#line 742 "lookup_switch.m"
              {
#line 742 "lookup_switch.m"
                ll_backend__lookup_switch__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__GotoEndCode_291);
              }
#line 742 "lookup_switch.m"
              {
#line 742 "lookup_switch.m"
                ll_backend__lookup_switch__V_237_237 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__V_238_238);
              }
#line 741 "lookup_switch.m"
              {
#line 741 "lookup_switch.m"
                ll_backend__lookup_switch__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__AfterUndoLabelCode_91, ll_backend__lookup_switch__V_237_237);
              }
#line 741 "lookup_switch.m"
              {
#line 741 "lookup_switch.m"
                ll_backend__lookup_switch__V_235_235 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__V_236_236);
              }
#line 741 "lookup_switch.m"
              {
#line 741 "lookup_switch.m"
                ll_backend__lookup_switch__V_234_234 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__TestMoreSolnsCode_89, ll_backend__lookup_switch__V_235_235);
              }
#line 740 "lookup_switch.m"
              {
#line 740 "lookup_switch.m"
                ll_backend__lookup_switch__V_233_233 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreHpCode_84, ll_backend__lookup_switch__V_234_234);
              }
#line 740 "lookup_switch.m"
              {
#line 740 "lookup_switch.m"
                ll_backend__lookup_switch__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreTicketCode_83, ll_backend__lookup_switch__V_233_233);
              }
#line 739 "lookup_switch.m"
              {
#line 739 "lookup_switch.m"
                ll_backend__lookup_switch__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__V_232_232);
              }
#line 739 "lookup_switch.m"
              {
#line 739 "lookup_switch.m"
                ll_backend__lookup_switch__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__GotoEndCode_291, ll_backend__lookup_switch__V_231_231);
              }
#line 739 "lookup_switch.m"
              {
#line 739 "lookup_switch.m"
                ll_backend__lookup_switch__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__V_230_230);
              }
#line 738 "lookup_switch.m"
              {
#line 738 "lookup_switch.m"
                ll_backend__lookup_switch__V_228_228 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__V_229_229);
              }
#line 738 "lookup_switch.m"
              {
#line 738 "lookup_switch.m"
                ll_backend__lookup_switch__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__V_228_228);
              }
#line 737 "lookup_switch.m"
              {
#line 737 "lookup_switch.m"
                ll_backend__lookup_switch__V_226_226 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__V_227_227);
              }
#line 737 "lookup_switch.m"
              {
#line 737 "lookup_switch.m"
                ll_backend__lookup_switch__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveHpCode_72, ll_backend__lookup_switch__V_226_226);
              }
#line 737 "lookup_switch.m"
              {
#line 737 "lookup_switch.m"
                ll_backend__lookup_switch__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveTicketCode_69, ll_backend__lookup_switch__V_225_225);
              }
#line 736 "lookup_switch.m"
              {
#line 736 "lookup_switch.m"
                ll_backend__lookup_switch__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveSlotsCode_68, ll_backend__lookup_switch__V_224_224);
              }
#line 736 "lookup_switch.m"
              {
#line 736 "lookup_switch.m"
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__V_223_223);
              }
#line 617 "lookup_switch.m"
            }
#line 601 "lookup_switch.m"
            break;
#line 601 "lookup_switch.m"
          case (MR_Integer) 0:
#line 594 "lookup_switch.m"
            {
#line 594 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248;
#line 594 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249;

#line 595 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
#line 597 "lookup_switch.m"
              {
#line 597 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248);
              }
#line 598 "lookup_switch.m"
              {
#line 598 "lookup_switch.m"
                ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
#line 599 "lookup_switch.m"
              {
#line 599 "lookup_switch.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
#line 594 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14;
#line 594 "lookup_switch.m"
            }
#line 601 "lookup_switch.m"
            break;
#line 601 "lookup_switch.m"
        }
#line 747 "lookup_switch.m"
        if ((ll_backend__lookup_switch__Kinds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "lookup_switch.m"
          {
#line 746 "lookup_switch.m"
            *ll_backend__lookup_switch__Code_16 = ll_backend__lookup_switch__KindCode_60;
#line 745 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
#line 745 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_CI_18 = ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;
#line 745 "lookup_switch.m"
          }
#line 747 "lookup_switch.m"
        else
#line 748 "lookup_switch.m"
          {
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TypeCtorInfo_297_297;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKind_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 0)));
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabel_98;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestRval_99;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestCode_100;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabelCode_101;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__LaterKindsCode_102;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_252_252;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_253_253;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_256_256;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_257_257;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_258_258;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_262_262;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_263_263;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_264_264;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_265_265;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_267_267;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_268_268;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_269_269;
#line 748 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_270_270;
#line 748 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_272_272;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_275_275;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_276_276;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_277_277;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_279_279;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_280_280;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_281_281;
#line 748 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_282_282;
#line 748 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_284_284;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_289_289;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_290_290;
#line 748 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 1)));

#line 749 "lookup_switch.m"
            {
#line 749 "lookup_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__NextKindLabel_98, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, &ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251);
            }
#line 751 "lookup_switch.m"
            {
#line 751 "lookup_switch.m"
              ll_backend__lookup_switch__V_256_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_256_256, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 751 "lookup_switch.m"
            }
#line 752 "lookup_switch.m"
            {
#line 752 "lookup_switch.m"
              ll_backend__lookup_switch__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 752 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_258_258, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 752 "lookup_switch.m"
            }
#line 752 "lookup_switch.m"
            {
#line 752 "lookup_switch.m"
              ll_backend__lookup_switch__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 752 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 1) = ((MR_Box) (ll_backend__lookup_switch__V_258_258));
#line 752 "lookup_switch.m"
            }
#line 751 "lookup_switch.m"
            {
#line 751 "lookup_switch.m"
              ll_backend__lookup_switch__V_253_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 2) = ((MR_Box) (ll_backend__lookup_switch__V_256_256));
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 3) = ((MR_Box) (ll_backend__lookup_switch__V_257_257));
#line 751 "lookup_switch.m"
            }
#line 751 "lookup_switch.m"
            {
#line 751 "lookup_switch.m"
              ll_backend__lookup_switch__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 751 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_252_252, 0) = ((MR_Box) (ll_backend__lookup_switch__V_253_253));
#line 751 "lookup_switch.m"
            }
#line 750 "lookup_switch.m"
            {
#line 750 "lookup_switch.m"
              ll_backend__lookup_switch__TestRval_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 750 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 750 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 1) = ((MR_Box) (ll_backend__lookup_switch__TestOp_58));
#line 750 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_252_252));
#line 750 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12])));
#line 750 "lookup_switch.m"
            }
#line 4151 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_297_297 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 755 "lookup_switch.m"
            {
#line 755 "lookup_switch.m"
              ll_backend__lookup_switch__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_265_265, 0) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
#line 755 "lookup_switch.m"
            }
#line 755 "lookup_switch.m"
            {
#line 755 "lookup_switch.m"
              ll_backend__lookup_switch__V_264_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 1) = ((MR_Box) (ll_backend__lookup_switch__TestRval_99));
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 2) = ((MR_Box) (ll_backend__lookup_switch__V_265_265));
#line 755 "lookup_switch.m"
            }
#line 755 "lookup_switch.m"
            {
#line 755 "lookup_switch.m"
              ll_backend__lookup_switch__V_263_263 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 0) = ((MR_Box) (ll_backend__lookup_switch__V_264_264));
#line 755 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
#line 755 "lookup_switch.m"
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_272_272 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__Kind_41);
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", ll_backend__lookup_switch__V_272_272);
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_269_269, 0) = ((MR_Box) (ll_backend__lookup_switch__V_270_270));
#line 757 "lookup_switch.m"
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_268_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 0) = ((MR_Box) (ll_backend__lookup_switch__V_269_269));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 1) = ((MR_Box) ((MR_String) ""));
#line 757 "lookup_switch.m"
            }
#line 759 "lookup_switch.m"
            {
#line 759 "lookup_switch.m"
              ll_backend__lookup_switch__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 0) = ((MR_Box) (ll_backend__lookup_switch__V_268_268));
#line 759 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "lookup_switch.m"
            }
#line 756 "lookup_switch.m"
            {
#line 756 "lookup_switch.m"
              ll_backend__lookup_switch__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 0) = ((MR_Box) (ll_backend__lookup_switch__V_263_263));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 1) = ((MR_Box) (ll_backend__lookup_switch__V_267_267));
#line 756 "lookup_switch.m"
            }
#line 754 "lookup_switch.m"
            {
#line 754 "lookup_switch.m"
              ll_backend__lookup_switch__TestCode_100 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_262_262);
            }
#line 761 "lookup_switch.m"
            {
#line 761 "lookup_switch.m"
              ll_backend__lookup_switch__V_277_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 1) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
#line 761 "lookup_switch.m"
            }
#line 761 "lookup_switch.m"
            {
#line 761 "lookup_switch.m"
              ll_backend__lookup_switch__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 0) = ((MR_Box) (ll_backend__lookup_switch__V_277_277));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
#line 761 "lookup_switch.m"
            }
#line 764 "lookup_switch.m"
            {
#line 764 "lookup_switch.m"
              ll_backend__lookup_switch__V_284_284 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__NextKind_96);
            }
#line 764 "lookup_switch.m"
            {
#line 764 "lookup_switch.m"
              ll_backend__lookup_switch__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", ll_backend__lookup_switch__V_284_284);
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_281_281, 0) = ((MR_Box) (ll_backend__lookup_switch__V_282_282));
#line 763 "lookup_switch.m"
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_280_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 0) = ((MR_Box) (ll_backend__lookup_switch__V_281_281));
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 1) = ((MR_Box) ((MR_String) ""));
#line 763 "lookup_switch.m"
            }
#line 766 "lookup_switch.m"
            {
#line 766 "lookup_switch.m"
              ll_backend__lookup_switch__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 0) = ((MR_Box) (ll_backend__lookup_switch__V_280_280));
#line 766 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "lookup_switch.m"
            }
#line 762 "lookup_switch.m"
            {
#line 762 "lookup_switch.m"
              ll_backend__lookup_switch__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 0) = ((MR_Box) (ll_backend__lookup_switch__V_276_276));
#line 762 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 1) = ((MR_Box) (ll_backend__lookup_switch__V_279_279));
#line 762 "lookup_switch.m"
            }
#line 760 "lookup_switch.m"
            {
#line 760 "lookup_switch.m"
              ll_backend__lookup_switch__NextKindLabelCode_101 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_275_275);
            }
#line 767 "lookup_switch.m"
            {
#line 767 "lookup_switch.m"
              ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_42, ll_backend__lookup_switch__NumPrevColumns_2, ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__ResumeVars_4, ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__EndLabel_6, ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__AddTrailOps_9, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__CurSlot_11, ll_backend__lookup_switch__MaxSlot_12, ll_backend__lookup_switch__LaterVectorAddrRval_13, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15, &ll_backend__lookup_switch__LaterKindsCode_102, ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251, ll_backend__lookup_switch__STATE_VARIABLE_CI_18);
            }
#line 771 "lookup_switch.m"
            {
#line 771 "lookup_switch.m"
              ll_backend__lookup_switch__V_290_290 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__NextKindLabelCode_101, ll_backend__lookup_switch__LaterKindsCode_102);
            }
#line 771 "lookup_switch.m"
            {
#line 771 "lookup_switch.m"
              ll_backend__lookup_switch__V_289_289 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__V_290_290);
            }
#line 771 "lookup_switch.m"
            {
#line 771 "lookup_switch.m"
              *ll_backend__lookup_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__TestCode_100, ll_backend__lookup_switch__V_289_289);
            }
#line 748 "lookup_switch.m"
          }
#line 592 "lookup_switch.m"
      }
#line 587 "lookup_switch.m"
  }
#line 579 "lookup_switch.m"
}

#line 573 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 573 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 573 "lookup_switch.m"
{
#line 575 "lookup_switch.m"
  {
#line 575 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 575 "lookup_switch.m"
    MR_String ll_backend__lookup_switch__HeadVar__2_2;

#line 575 "lookup_switch.m"
#line 575 "lookup_switch.m"
    switch (ll_backend__lookup_switch__HeadVar__1_1) {
#line 575 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 575 "lookup_switch.m"
      case (MR_Integer) 1:
#line 576 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_one_soln";
#line 575 "lookup_switch.m"
        break;
#line 575 "lookup_switch.m"
      case (MR_Integer) 2:
#line 577 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_several_solns";
#line 575 "lookup_switch.m"
        break;
#line 575 "lookup_switch.m"
      case (MR_Integer) 0:
#line 575 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_zero_solns";
#line 575 "lookup_switch.m"
        break;
#line 575 "lookup_switch.m"
    }
#line 575 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 575 "lookup_switch.m"
  }
#line 573 "lookup_switch.m"
}

#line 497 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
#line 497 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 497 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 497 "lookup_switch.m"
{
#line 497 "lookup_switch.m"
  {
#line 497 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 497 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 497 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 497 "lookup_switch.m"
    {
#line 497 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 497 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 497 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 497 "lookup_switch.m"
  }
#line 497 "lookup_switch.m"
}

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
#line 487 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 487 "lookup_switch.m"
{
#line 487 "lookup_switch.m"
  {
#line 487 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 487 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))));
    }
#line 487 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 487 "lookup_switch.m"
  }
#line 487 "lookup_switch.m"
}

#line 487 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
#line 487 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 487 "lookup_switch.m"
{
#line 487 "lookup_switch.m"
  {
#line 487 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 487 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 4))));
    }
#line 487 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 487 "lookup_switch.m"
  }
#line 487 "lookup_switch.m"
}

#line 473 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_19,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_20,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_21,
#line 473 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_22,
#line 473 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_23,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_28,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_30,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_32,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
#line 473 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
#line 473 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62)
#line 473 "lookup_switch.m"
{
#line 484 "lookup_switch.m"
  {
#line 484 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_118_118;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_122_122;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_123_123;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_126_126;
#line 484 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__NumOutTypes_35;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DummyLaterSolnRow_37;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord0_38;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRows_39;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord_40;
#line 484 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__FailCaseCount_41;
#line 484 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__OneSolnCaseCount_42;
#line 484 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__SeveralSolnCaseCount_43;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArray_44;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRowTypes_45;
#line 484 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__MainNumColumns_46;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddr_47;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddrRval_48;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddr_49;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_50;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__AscendingSortedCountKinds_51;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedCountKinds_52;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedKinds_53;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseReg_54;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_55;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__KindsCode_56;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__EndLabelCode_57;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_63_63;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_67_67;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_78_78;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_81_81;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_84_84;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_86_86;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_87_87;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_89_89;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_90_90;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_92_92;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_93_93;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_98_98;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_99_99;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_100_100;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_101_101;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_104_104;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_106_106;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_107_107;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_112_112;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_113_113;
#line 484 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_115_115;
#line 508 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_73_73;
#line 507 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_116_116;

#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[1]));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 3) = ((MR_Box) (ll_backend__lookup_switch__OutVars_27));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "lookup_switch.m"
    }
#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      ll_backend__lookup_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_7[0]));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 487 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 3) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
#line 487 "lookup_switch.m"
    }
#line 487 "lookup_switch.m"
    {
#line 487 "lookup_switch.m"
      mercury__require__expect_4_p_0(ll_backend__lookup_switch__V_63_63, (MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "no OutVars");
    }
#line 4653 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 495 "lookup_switch.m"
    {
#line 495 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__OutTypes_28, &ll_backend__lookup_switch__NumOutTypes_35);
    }
#line 497 "lookup_switch.m"
    {
#line 497 "lookup_switch.m"
      ll_backend__lookup_switch__DummyLaterSolnRow_37 = mercury__list__map_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[2], ll_backend__lookup_switch__OutTypes_28);
    }
#line 4665 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_122_122 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 498 "lookup_switch.m"
    {
#line 498 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArrayCord0_38 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ((MR_Box) (ll_backend__lookup_switch__DummyLaterSolnRow_37)));
    }
#line 499 "lookup_switch.m"
    {
#line 499 "lookup_switch.m"
      ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__StartVal_22, ll_backend__lookup_switch__EndVal_23, ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__NumOutTypes_35, ll_backend__lookup_switch__CaseSolns_24, &ll_backend__lookup_switch__MainRows_39, (MR_Integer) 1, ll_backend__lookup_switch__LaterSolnArrayCord0_38, &ll_backend__lookup_switch__LaterSolnArrayCord_40, (MR_Integer) 0, &ll_backend__lookup_switch__FailCaseCount_41, (MR_Integer) 0, &ll_backend__lookup_switch__OneSolnCaseCount_42, (MR_Integer) 0, &ll_backend__lookup_switch__SeveralSolnCaseCount_43);
    }
#line 503 "lookup_switch.m"
    {
#line 503 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArray_44 = mercury__cord__list_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ll_backend__lookup_switch__LaterSolnArrayCord_40);
    }
#line 506 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
#line 507 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 507 "lookup_switch.m"
      {
#line 508 "lookup_switch.m"
        ll_backend__lookup_switch__V_73_73 = (MR_Integer) 0;
#line 508 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_73_73);
#line 507 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 507 "lookup_switch.m"
      }
#line 507 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 507 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 507 "lookup_switch.m"
      {
#line 508 "lookup_switch.m"
        ll_backend__lookup_switch__V_116_116 = (MR_Integer) 0;
#line 508 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_116_116);
#line 507 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 507 "lookup_switch.m"
          {
#line 506 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
#line 507 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 507 "lookup_switch.m"
          }
#line 507 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 507 "lookup_switch.m"
      }
#line 512 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 511 "lookup_switch.m"
      {
#line 511 "lookup_switch.m"
      }
#line 512 "lookup_switch.m"
    else
#line 513 "lookup_switch.m"
      {
#line 513 "lookup_switch.m"
        {
#line 513 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "bad FailCaseCount");
#line 513 "lookup_switch.m"
          return;
        }
#line 513 "lookup_switch.m"
      }
#line 516 "lookup_switch.m"
    {
#line 516 "lookup_switch.m"
      ll_backend__lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 0) = ((MR_Box) ((MR_Integer) 7));
#line 516 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 1) = ((MR_Box) (ll_backend__lookup_switch__OutTypes_28));
#line 516 "lookup_switch.m"
    }
#line 516 "lookup_switch.m"
    {
#line 516 "lookup_switch.m"
      ll_backend__lookup_switch__MainRowTypes_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 0) = ((MR_Box) ((MR_Integer) 7));
#line 516 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 1) = ((MR_Box) (ll_backend__lookup_switch__V_78_78));
#line 516 "lookup_switch.m"
    }
#line 517 "lookup_switch.m"
    {
#line 517 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__MainRowTypes_45, &ll_backend__lookup_switch__MainNumColumns_46);
    }
#line 518 "lookup_switch.m"
    {
#line 518 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__MainRowTypes_45, ll_backend__lookup_switch__MainRows_39, &ll_backend__lookup_switch__MainVectorAddr_47, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60, &ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80);
    }
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      ll_backend__lookup_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 1) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddr_47));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "lookup_switch.m"
    }
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      ll_backend__lookup_switch__MainVectorAddrRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 1) = ((MR_Box) (ll_backend__lookup_switch__V_81_81));
#line 519 "lookup_switch.m"
    }
#line 520 "lookup_switch.m"
    {
#line 520 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__LaterSolnArray_44, &ll_backend__lookup_switch__LaterVectorAddr_49, ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80, &ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83);
    }
#line 521 "lookup_switch.m"
    {
#line 521 "lookup_switch.m"
      ll_backend__lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddr_49));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "lookup_switch.m"
    }
#line 521 "lookup_switch.m"
    {
#line 521 "lookup_switch.m"
      ll_backend__lookup_switch__LaterVectorAddrRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 1) = ((MR_Box) (ll_backend__lookup_switch__V_84_84));
#line 521 "lookup_switch.m"
    }
#line 523 "lookup_switch.m"
    {
#line 523 "lookup_switch.m"
      ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__FailCaseCount_41));
#line 523 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 1) = ((MR_Box) ((MR_Integer) 0));
#line 523 "lookup_switch.m"
    }
#line 524 "lookup_switch.m"
    {
#line 524 "lookup_switch.m"
      ll_backend__lookup_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 0) = ((MR_Box) (ll_backend__lookup_switch__OneSolnCaseCount_42));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 1) = ((MR_Box) ((MR_Integer) 1));
#line 524 "lookup_switch.m"
    }
#line 525 "lookup_switch.m"
    {
#line 525 "lookup_switch.m"
      ll_backend__lookup_switch__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 0) = ((MR_Box) (ll_backend__lookup_switch__SeveralSolnCaseCount_43));
#line 525 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 1) = ((MR_Box) ((MR_Integer) 2));
#line 525 "lookup_switch.m"
    }
#line 525 "lookup_switch.m"
    {
#line 525 "lookup_switch.m"
      ll_backend__lookup_switch__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 0) = ((MR_Box) (ll_backend__lookup_switch__V_93_93));
#line 525 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "lookup_switch.m"
    }
#line 524 "lookup_switch.m"
    {
#line 524 "lookup_switch.m"
      ll_backend__lookup_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 0) = ((MR_Box) (ll_backend__lookup_switch__V_90_90));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 1) = ((MR_Box) (ll_backend__lookup_switch__V_92_92));
#line 524 "lookup_switch.m"
    }
#line 523 "lookup_switch.m"
    {
#line 523 "lookup_switch.m"
      ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 523 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 1) = ((MR_Box) (ll_backend__lookup_switch__V_89_89));
#line 523 "lookup_switch.m"
    }
#line 4878 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_123_123 = (MR_Word) &ll_backend__lookup_switch_scalar_common_2[0];
#line 523 "lookup_switch.m"
    {
#line 523 "lookup_switch.m"
      mercury__list__sort_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__V_86_86, &ll_backend__lookup_switch__AscendingSortedCountKinds_51);
    }
#line 526 "lookup_switch.m"
    {
#line 526 "lookup_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__AscendingSortedCountKinds_51, &ll_backend__lookup_switch__DescendingSortedCountKinds_52);
    }
#line 527 "lookup_switch.m"
    {
#line 527 "lookup_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__lookup_switch__DescendingSortedCountKinds_52, &ll_backend__lookup_switch__DescendingSortedKinds_53);
    }
#line 532 "lookup_switch.m"
    {
#line 532 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_21, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
#line 4900 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_126_126 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 540 "lookup_switch.m"
    {
#line 540 "lookup_switch.m"
      ll_backend__lookup_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_107_107, 0) = ((MR_Box) (ll_backend__lookup_switch__MainNumColumns_46));
#line 540 "lookup_switch.m"
    }
#line 540 "lookup_switch.m"
    {
#line 540 "lookup_switch.m"
      ll_backend__lookup_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 540 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 1) = ((MR_Box) (ll_backend__lookup_switch__V_107_107));
#line 540 "lookup_switch.m"
    }
#line 538 "lookup_switch.m"
    {
#line 538 "lookup_switch.m"
      ll_backend__lookup_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 538 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 538 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_19));
#line 538 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 3) = ((MR_Box) (ll_backend__lookup_switch__V_106_106));
#line 538 "lookup_switch.m"
    }
#line 537 "lookup_switch.m"
    {
#line 537 "lookup_switch.m"
      ll_backend__lookup_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 0) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddrRval_48));
#line 537 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 537 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 2) = ((MR_Box) (ll_backend__lookup_switch__V_104_104));
#line 537 "lookup_switch.m"
    }
#line 537 "lookup_switch.m"
    {
#line 537 "lookup_switch.m"
      ll_backend__lookup_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 537 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 1) = ((MR_Box) (ll_backend__lookup_switch__V_101_101));
#line 537 "lookup_switch.m"
    }
#line 536 "lookup_switch.m"
    {
#line 536 "lookup_switch.m"
      ll_backend__lookup_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_54));
#line 536 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_100_100));
#line 536 "lookup_switch.m"
    }
#line 535 "lookup_switch.m"
    {
#line 535 "lookup_switch.m"
      ll_backend__lookup_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 0) = ((MR_Box) (ll_backend__lookup_switch__V_99_99));
#line 535 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 535 "lookup_switch.m"
    }
#line 534 "lookup_switch.m"
    {
#line 534 "lookup_switch.m"
      ll_backend__lookup_switch__BaseRegInitCode_55 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_98_98)));
    }
#line 544 "lookup_switch.m"
    {
#line 544 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__lookup_switch__DescendingSortedKinds_53, (MR_Integer) 0, ll_backend__lookup_switch__OutVars_27, ll_backend__lookup_switch__ResumeVars_25, ll_backend__lookup_switch__EndLabel_20, ll_backend__lookup_switch__StoreMap_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__AddTrailOps_26, ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__LaterVectorAddrRval_50, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59, &ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83, ll_backend__lookup_switch__STATE_VARIABLE_CI_61, ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
#line 548 "lookup_switch.m"
    {
#line 548 "lookup_switch.m"
      ll_backend__lookup_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 548 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 1) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_20));
#line 548 "lookup_switch.m"
    }
#line 548 "lookup_switch.m"
    {
#line 548 "lookup_switch.m"
      ll_backend__lookup_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 0) = ((MR_Box) (ll_backend__lookup_switch__V_113_113));
#line 548 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
#line 548 "lookup_switch.m"
    }
#line 547 "lookup_switch.m"
    {
#line 547 "lookup_switch.m"
      ll_backend__lookup_switch__EndLabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_112_112)));
    }
#line 551 "lookup_switch.m"
    {
#line 551 "lookup_switch.m"
      ll_backend__lookup_switch__V_115_115 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__EndLabelCode_57);
    }
#line 551 "lookup_switch.m"
    {
#line 551 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_32 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__BaseRegInitCode_55, ll_backend__lookup_switch__V_115_115);
    }
#line 484 "lookup_switch.m"
  }
#line 473 "lookup_switch.m"
}

#line 461 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 461 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 461 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 461 "lookup_switch.m"
{
#line 461 "lookup_switch.m"
  {
#line 461 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 461 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 461 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 461 "lookup_switch.m"
    {
#line 461 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 461 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 461 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 461 "lookup_switch.m"
  }
#line 461 "lookup_switch.m"
}

#line 451 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 451 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 451 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 451 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5)
#line 451 "lookup_switch.m"
{
#line 455 "lookup_switch.m"
  while (MR_TRUE)
#line 455 "lookup_switch.m"
    {
#line 455 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 455 "lookup_switch.m"
      {
#line 455 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 455 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4;
#line 455 "lookup_switch.m"
        else
#line 457 "lookup_switch.m"
          {
#line 457 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Index_11;
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rvals_12;
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Row_17;
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Remainder_18;
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;
#line 457 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_25_25;

#line 456 "lookup_switch.m"
            ll_backend__lookup_switch__Index_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 0)));
#line 456 "lookup_switch.m"
            ll_backend__lookup_switch__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 1)));
#line 458 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_2 < ll_backend__lookup_switch__Index_11);
#line 463 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 461 "lookup_switch.m"
              {
#line 461 "lookup_switch.m"
                {
#line 461 "lookup_switch.m"
                  ll_backend__lookup_switch__Row_17 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[1], ll_backend__lookup_switch__OutTypes_3);
                }
#line 462 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__HeadVar__1_1;
#line 461 "lookup_switch.m"
              }
#line 463 "lookup_switch.m"
            else
#line 464 "lookup_switch.m"
              {
#line 464 "lookup_switch.m"
                ll_backend__lookup_switch__Row_17 = ll_backend__lookup_switch__Rvals_12;
#line 465 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__Rest_13;
#line 464 "lookup_switch.m"
              }
#line 467 "lookup_switch.m"
            {
#line 467 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 0) = ((MR_Box) (ll_backend__lookup_switch__Row_17));
#line 467 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 1) = ((MR_Box) (ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4));
#line 467 "lookup_switch.m"
            }
#line 468 "lookup_switch.m"
            ll_backend__lookup_switch__V_25_25 = (ll_backend__lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 468 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 468 "lookup_switch.m"
            {
#line 468 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Remainder_18;
#line 468 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__CurIndex__tmp_copy_2 = ll_backend__lookup_switch__V_25_25;
#line 468 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;

#line 468 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4;
#line 468 "lookup_switch.m"
              ll_backend__lookup_switch__CurIndex_2 = ll_backend__lookup_switch__CurIndex__tmp_copy_2;
#line 468 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 468 "lookup_switch.m"
            }
#line 468 "lookup_switch.m"
            continue;
#line 457 "lookup_switch.m"
          }
#line 455 "lookup_switch.m"
      }
#line 455 "lookup_switch.m"
      break;
#line 455 "lookup_switch.m"
    }
#line 451 "lookup_switch.m"
}

#line 309 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 309 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 309 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 309 "lookup_switch.m"
{
#line 315 "lookup_switch.m"
  {
#line 315 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 315 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 315 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__Index_12;
#line 316 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 317 "lookup_switch.m"
    void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 317 "lookup_switch.m"
    {
#line 317 "lookup_switch.m"
      ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__GetTag_6), ((MR_Box) (ll_backend__lookup_switch__ConsTag_11)), &ll_backend__lookup_switch__Index_12);
    }
#line 318 "lookup_switch.m"
    {
#line 318 "lookup_switch.m"
      mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_16, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_12, ((MR_Box) (ll_backend__lookup_switch__SolnConsts_7)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 318 "lookup_switch.m"
      return;
    }
#line 315 "lookup_switch.m"
  }
#line 309 "lookup_switch.m"
}

#line 296 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 296 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 296 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5)
#line 296 "lookup_switch.m"
{
#line 301 "lookup_switch.m"
  while (MR_TRUE)
#line 301 "lookup_switch.m"
    {
#line 301 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 301 "lookup_switch.m"
      {
#line 301 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 301 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4;
#line 301 "lookup_switch.m"
        else
#line 303 "lookup_switch.m"
          {
#line 303 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 303 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 303 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;
#line 303 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__ConsTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 1)));
#line 303 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__Index_29;
#line 316 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch___ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 0)));
#line 317 "lookup_switch.m"
            void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));

#line 317 "lookup_switch.m"
            {
#line 317 "lookup_switch.m"
              ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__HeadVar__1_1), ((MR_Box) (ll_backend__lookup_switch__ConsTag_28)), &ll_backend__lookup_switch__Index_29);
            }
#line 318 "lookup_switch.m"
            {
#line 318 "lookup_switch.m"
              mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_20, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_29, ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_2)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18);
            }
#line 306 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 306 "lookup_switch.m"
            {
#line 306 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__3__tmp_copy_3 = ll_backend__lookup_switch__TaggedConsIds_14;
#line 306 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;

#line 306 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4;
#line 306 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__3_3 = ll_backend__lookup_switch__HeadVar__3__tmp_copy_3;
#line 306 "lookup_switch.m"
            }
#line 306 "lookup_switch.m"
            continue;
#line 303 "lookup_switch.m"
          }
#line 301 "lookup_switch.m"
      }
#line 301 "lookup_switch.m"
      break;
#line 301 "lookup_switch.m"
    }
#line 296 "lookup_switch.m"
}

#line 219 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
#line 219 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
#line 219 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17)
#line 219 "lookup_switch.m"
{
#line 227 "lookup_switch.m"
  {
#line 227 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 227 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "lookup_switch.m"
      {
#line 228 "lookup_switch.m"
        {
#line 228 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__7_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 229 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_17 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16;
#line 229 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
#line 229 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 229 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10;
#line 229 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8;
#line 227 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 227 "lookup_switch.m"
      }
#line 227 "lookup_switch.m"
    else
#line 232 "lookup_switch.m"
      {
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCase_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCases_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedMainConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 0)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedOtherConsIds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 1)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Goal_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 3)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 0)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 1)));
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Features_57;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__SolnConsts_70;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100;
#line 232 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101;
#line 233 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 2)));
#line 239 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeCtorInfo_110_110;
#line 239 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_84_84;
#line 279 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Disjuncts_58;
#line 292 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch___LivenessRest_72;

#line 237 "lookup_switch.m"
        {
#line 237 "lookup_switch.m"
          ll_backend__lookup_switch__Features_57 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
        }
#line 238 "lookup_switch.m"
        {
#line 238 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__lookup_switch__Features_57);
        }
#line 238 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 232 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 232 "lookup_switch.m"
          {
#line 239 "lookup_switch.m"
            ll_backend__lookup_switch__V_84_84 = (MR_Integer) 7;
#line 5452 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0;
#line 239 "lookup_switch.m"
            {
#line 239 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_110_110, ((MR_Box) (ll_backend__lookup_switch__V_84_84)), ll_backend__lookup_switch__Features_57);
            }
#line 239 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 232 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 232 "lookup_switch.m"
              {
#line 241 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__lookup_switch__GoalExpr_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 241 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 241 "lookup_switch.m"
                  {
#line 241 "lookup_switch.m"
                    ll_backend__lookup_switch__Disjuncts_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 1)));
#line 247 "lookup_switch.m"
                    if ((ll_backend__lookup_switch__Disjuncts_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "lookup_switch.m"
                      {
#line 246 "lookup_switch.m"
                        {
#line 246 "lookup_switch.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/17", (MR_String) "disj([])");
                        }
#line 243 "lookup_switch.m"
                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 243 "lookup_switch.m"
                      }
#line 247 "lookup_switch.m"
                    else
#line 248 "lookup_switch.m"
                      {
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunct_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 0)));
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterDisjuncts_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 1)));
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunctGoalInfo_62;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__ThisResumePoint_63;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__GoalBranchStart_67;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstSoln_68;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterSolns_69;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_85_85;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_89_89;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91;
#line 248 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92;
#line 254 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_61_61;

#line 249 "lookup_switch.m"
                        {
#line 249 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__FirstDisjunct_59);
                        }
#line 248 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 248 "lookup_switch.m"
                          {
#line 250 "lookup_switch.m"
                            {
#line 250 "lookup_switch.m"
                              ll_backend__lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__LaterDisjuncts_60);
                            }
#line 248 "lookup_switch.m"
                            if (ll_backend__lookup_switch__succeeded)
#line 248 "lookup_switch.m"
                              {
#line 252 "lookup_switch.m"
                                {
#line 252 "lookup_switch.m"
                                  ll_backend__lookup_switch__V_85_85 = hlds__goal_form__goal_may_modify_trail_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
                                }
#line 252 "lookup_switch.m"
                                {
#line 252 "lookup_switch.m"
                                  mercury__bool__or_3_p_0(ll_backend__lookup_switch__V_85_85, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86);
                                }
#line 254 "lookup_switch.m"
                                ll_backend__lookup_switch__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 0)));
#line 254 "lookup_switch.m"
                                ll_backend__lookup_switch__FirstDisjunctGoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 1)));
#line 255 "lookup_switch.m"
                                {
#line 255 "lookup_switch.m"
                                  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__lookup_switch__FirstDisjunctGoalInfo_62, &ll_backend__lookup_switch__ThisResumePoint_63);
                                }
#line 259 "lookup_switch.m"
                                if ((ll_backend__lookup_switch__ThisResumePoint_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "lookup_switch.m"
                                  ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 259 "lookup_switch.m"
                                else
#line 257 "lookup_switch.m"
                                  {
#line 257 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__ThisResumeVars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 0)));
#line 257 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 1)));

#line 258 "lookup_switch.m"
                                    {
#line 258 "lookup_switch.m"
                                      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_switch__ThisResumeVars_64, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12, &ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87);
                                    }
#line 257 "lookup_switch.m"
                                  }
#line 267 "lookup_switch.m"
                                {
#line 267 "lookup_switch.m"
                                  ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88);
                                }
#line 268 "lookup_switch.m"
                                ll_backend__lookup_switch__V_89_89 = (MR_Integer) 0;
#line 268 "lookup_switch.m"
                                {
#line 268 "lookup_switch.m"
                                  ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__lookup_switch__GoalInfo_56, ll_backend__lookup_switch__V_89_89, ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90);
                                }
#line 269 "lookup_switch.m"
                                {
#line 269 "lookup_switch.m"
                                  ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90, &ll_backend__lookup_switch__GoalBranchStart_67);
                                }
#line 271 "lookup_switch.m"
                                {
#line 271 "lookup_switch.m"
                                  ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__FirstDisjunct_59, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__FirstSoln_68, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92);
                                }
#line 248 "lookup_switch.m"
                                if (ll_backend__lookup_switch__succeeded)
#line 248 "lookup_switch.m"
                                  {
#line 273 "lookup_switch.m"
                                    {
#line 273 "lookup_switch.m"
                                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__LaterDisjuncts_60, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__LaterSolns_69, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                                    }
#line 248 "lookup_switch.m"
                                    if (ll_backend__lookup_switch__succeeded)
#line 248 "lookup_switch.m"
                                      {
#line 277 "lookup_switch.m"
                                        {
#line 277 "lookup_switch.m"
                                          ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstSoln_68));
#line 277 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterSolns_69));
#line 277 "lookup_switch.m"
                                        }
#line 277 "lookup_switch.m"
                                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 248 "lookup_switch.m"
                                      }
#line 248 "lookup_switch.m"
                                  }
#line 248 "lookup_switch.m"
                              }
#line 248 "lookup_switch.m"
                          }
#line 248 "lookup_switch.m"
                      }
#line 241 "lookup_switch.m"
                  }
#line 241 "lookup_switch.m"
                else
#line 280 "lookup_switch.m"
                  {
#line 280 "lookup_switch.m"
                    MR_Word ll_backend__lookup_switch__Soln_71;

#line 280 "lookup_switch.m"
                    {
#line 280 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__Goal_54);
                    }
#line 280 "lookup_switch.m"
                    if (ll_backend__lookup_switch__succeeded)
#line 280 "lookup_switch.m"
                      {
#line 284 "lookup_switch.m"
                        {
#line 284 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_arm_10_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Goal_54, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__Soln_71, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                        }
#line 280 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 280 "lookup_switch.m"
                          {
#line 280 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
#line 280 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 286 "lookup_switch.m"
                            {
#line 286 "lookup_switch.m"
                              ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__Soln_71));
#line 286 "lookup_switch.m"
                            }
#line 286 "lookup_switch.m"
                            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 280 "lookup_switch.m"
                          }
#line 280 "lookup_switch.m"
                      }
#line 280 "lookup_switch.m"
                  }
#line 232 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 232 "lookup_switch.m"
                  {
#line 288 "lookup_switch.m"
                    {
#line 288 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedMainConsId_51, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100);
                    }
#line 290 "lookup_switch.m"
                    {
#line 290 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedOtherConsIds_52, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101);
                    }
#line 292 "lookup_switch.m"
                    {
#line 292 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__TaggedCases_41, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch___LivenessRest_72, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15, ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94, ll_backend__lookup_switch__STATE_VARIABLE_CI_17);
                    }
#line 232 "lookup_switch.m"
                  }
#line 232 "lookup_switch.m"
              }
#line 232 "lookup_switch.m"
          }
#line 232 "lookup_switch.m"
      }
#line 227 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 227 "lookup_switch.m"
  }
#line 219 "lookup_switch.m"
}

#line 155 "lookup_switch.m"
MR_Word MR_CALL 
ll_backend__lookup_switch__default_value_for_type_1_f_0(
#line 155 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 155 "lookup_switch.m"
{
#line 938 "lookup_switch.m"
  {
#line 938 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 938 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HeadVar__2_2 = ((&ll_backend__lookup_switch_vector_common_5[0 + ll_backend__lookup_switch__HeadVar__1_1]))->ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;

#line 938 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 938 "lookup_switch.m"
  }
#line 155 "lookup_switch.m"
}

#line 149 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Kinds_17,
#line 149 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_18,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_20,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_21,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_22,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_23,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_24,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_25,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_26,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34,
#line 149 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35,
#line 149 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_28,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36,
#line 149 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_37,
#line 149 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38)
#line 149 "lookup_switch.m"
{
#line 555 "lookup_switch.m"
  {
#line 555 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CurSlot_31;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MaxSlot_32;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchStart_33;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45;
#line 555 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46;

#line 563 "lookup_switch.m"
    {
#line 563 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 1, &ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42);
    }
#line 565 "lookup_switch.m"
    {
#line 565 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 1, &ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46);
    }
#line 568 "lookup_switch.m"
    {
#line 568 "lookup_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46, &ll_backend__lookup_switch__BranchStart_33);
    }
#line 569 "lookup_switch.m"
    {
#line 569 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_17, ll_backend__lookup_switch__NumPrevColumns_18, ll_backend__lookup_switch__OutVars_19, ll_backend__lookup_switch__ResumeVars_20, ll_backend__lookup_switch__BranchStart_33, ll_backend__lookup_switch__EndLabel_21, ll_backend__lookup_switch__StoreMap_22, ll_backend__lookup_switch__Liveness_23, ll_backend__lookup_switch__AddTrailOps_24, ll_backend__lookup_switch__BaseReg_25, ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__LaterVectorAddrRval_26, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35, ll_backend__lookup_switch__Code_28, ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CI_37);
#line 569 "lookup_switch.m"
      return;
    }
#line 555 "lookup_switch.m"
  }
#line 149 "lookup_switch.m"
}

#line 94 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__VarRval_15,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LookupSwitchInfo_16,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_17,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_18,
#line 94 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_19,
#line 94 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_20,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedRangeCheck_22,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45,
#line 94 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46,
#line 94 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_24,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47,
#line 94 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_48,
#line 94 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49)
#line 94 "lookup_switch.m"
{
#line 324 "lookup_switch.m"
  {
#line 324 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__StartVal_19 == (MR_Integer) 0);
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_78_78;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 0)));
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 1)));
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 2)));
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 3)));
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__IndexRval_31;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RangeCheckCode_34;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Comment_36;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RestCode_38;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57;
#line 324 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_70_70;

#line 332 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 331 "lookup_switch.m"
      ll_backend__lookup_switch__IndexRval_31 = ll_backend__lookup_switch__VarRval_15;
#line 332 "lookup_switch.m"
    else
#line 333 "lookup_switch.m"
      {
#line 333 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_51_51;
#line 333 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_52_52;

#line 333 "lookup_switch.m"
        {
#line 333 "lookup_switch.m"
          ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__StartVal_19));
#line 333 "lookup_switch.m"
        }
#line 333 "lookup_switch.m"
        {
#line 333 "lookup_switch.m"
          ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
#line 333 "lookup_switch.m"
        }
#line 333 "lookup_switch.m"
        {
#line 333 "lookup_switch.m"
          ll_backend__lookup_switch__IndexRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 2) = ((MR_Box) (ll_backend__lookup_switch__VarRval_15));
#line 333 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
#line 333 "lookup_switch.m"
        }
#line 333 "lookup_switch.m"
      }
#line 344 "lookup_switch.m"
#line 344 "lookup_switch.m"
    switch (ll_backend__lookup_switch__NeedRangeCheck_22) {
#line 344 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "lookup_switch.m"
      case (MR_Integer) 1:
#line 345 "lookup_switch.m"
        {
#line 346 "lookup_switch.m"
          {
#line 346 "lookup_switch.m"
            ll_backend__lookup_switch__RangeCheckCode_34 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 345 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47;
#line 345 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49;
#line 345 "lookup_switch.m"
        }
#line 344 "lookup_switch.m"
        break;
#line 344 "lookup_switch.m"
      case (MR_Integer) 0:
#line 339 "lookup_switch.m"
        {
#line 339 "lookup_switch.m"
          MR_Integer ll_backend__lookup_switch__Difference_32 = (ll_backend__lookup_switch__EndVal_20 - ll_backend__lookup_switch__StartVal_19);
#line 339 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__CmpRval_33;
#line 339 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__V_54_54;
#line 339 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__V_55_55;

#line 342 "lookup_switch.m"
          {
#line 342 "lookup_switch.m"
            ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "lookup_switch.m"
            MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (ll_backend__lookup_switch__Difference_32));
#line 342 "lookup_switch.m"
          }
#line 342 "lookup_switch.m"
          {
#line 342 "lookup_switch.m"
            ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 342 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
#line 342 "lookup_switch.m"
          }
#line 341 "lookup_switch.m"
          {
#line 341 "lookup_switch.m"
            ll_backend__lookup_switch__CmpRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 341 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 341 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 341 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_31));
#line 341 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 3) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
#line 341 "lookup_switch.m"
          }
#line 343 "lookup_switch.m"
          {
#line 343 "lookup_switch.m"
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__CmpRval_33, &ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47, &ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
          }
#line 339 "lookup_switch.m"
        }
#line 344 "lookup_switch.m"
        break;
#line 344 "lookup_switch.m"
    }
#line 358 "lookup_switch.m"
    if (((MR_tag((MR_Word) ll_backend__lookup_switch__CaseConsts_27)) == (MR_mktag((MR_Integer) 0))))
#line 350 "lookup_switch.m"
      {
#line 350 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseValuesMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
#line 350 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseValues_37;

#line 351 "lookup_switch.m"
        {
#line 351 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[10])));
        }
#line 354 "lookup_switch.m"
        {
#line 354 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__CaseValuesMap_35, &ll_backend__lookup_switch__CaseValues_37);
        }
#line 355 "lookup_switch.m"
        {
#line 355 "lookup_switch.m"
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__CaseValues_37, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
#line 350 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45;
#line 350 "lookup_switch.m"
      }
#line 358 "lookup_switch.m"
    else
#line 360 "lookup_switch.m"
      {
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseSolnMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__ResumeVars_40;
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_41;
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__AddTrailOps_43;
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseSolns_44;
#line 360 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 1)));

#line 360 "lookup_switch.m"
        ll_backend__lookup_switch__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 0)));
#line 360 "lookup_switch.m"
        ll_backend__lookup_switch__GoalsMayModifyTrail_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 1)));
#line 365 "lookup_switch.m"
#line 365 "lookup_switch.m"
        switch (ll_backend__lookup_switch__GoalsMayModifyTrail_41) {
#line 365 "lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 365 "lookup_switch.m"
          case (MR_Integer) 0:
#line 367 "lookup_switch.m"
            ll_backend__lookup_switch__AddTrailOps_43 = (MR_Integer) 1;
#line 365 "lookup_switch.m"
            break;
#line 365 "lookup_switch.m"
          case (MR_Integer) 1:
#line 363 "lookup_switch.m"
            {
#line 363 "lookup_switch.m"
              ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, &ll_backend__lookup_switch__AddTrailOps_43);
            }
#line 365 "lookup_switch.m"
            break;
#line 365 "lookup_switch.m"
        }
#line 369 "lookup_switch.m"
        {
#line 369 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[11])));
        }
#line 372 "lookup_switch.m"
        {
#line 372 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__CaseSolnMap_39, &ll_backend__lookup_switch__CaseSolns_44);
        }
#line 373 "lookup_switch.m"
        {
#line 373 "lookup_switch.m"
          ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__EndLabel_17, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__EndVal_20, ll_backend__lookup_switch__CaseSolns_44, ll_backend__lookup_switch__ResumeVars_40, ll_backend__lookup_switch__AddTrailOps_43, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
#line 360 "lookup_switch.m"
      }
#line 6093 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 378 "lookup_switch.m"
    {
#line 378 "lookup_switch.m"
      ll_backend__lookup_switch__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__RestCode_38);
    }
#line 378 "lookup_switch.m"
    {
#line 378 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__Comment_36, ll_backend__lookup_switch__V_70_70);
    }
#line 324 "lookup_switch.m"
  }
#line 94 "lookup_switch.m"
}

#line 86 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0(
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_46,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_11,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_12,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedCases_13,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GoalInfo_14,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35,
#line 86 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36,
#line 86 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__LookupSwitchInfo_17,
#line 86 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37,
#line 86 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_38)
#line 86 "lookup_switch.m"
{
#line 186 "lookup_switch.m"
  {
#line 186 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_47_47;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_48_48;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_50_50;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__StartCLD_19;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_20;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ArmNonLocals_21;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_22;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolnMap_23;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ResumeVars_24;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_25;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarTypes_26;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_27;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_29;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ExprnOpts_30;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__UnboxFloats_31;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolns_32;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValues_33;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutLLDSTypes_34;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_39_39;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_41_41;
#line 186 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_45_45;
#line 203 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValuePairsMap_28;
#line 201 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_49_49;

#line 193 "lookup_switch.m"
    {
#line 193 "lookup_switch.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, &ll_backend__lookup_switch__StartCLD_19);
    }
#line 194 "lookup_switch.m"
    {
#line 194 "lookup_switch.m"
      ll_backend__lookup_util__figure_out_output_vars_4_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__StartCLD_19, ll_backend__lookup_switch__GoalInfo_14, &ll_backend__lookup_switch__OutVars_20);
    }
#line 6198 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 195 "lookup_switch.m"
    {
#line 195 "lookup_switch.m"
      parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_47_47, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__ArmNonLocals_21);
    }
#line 6205 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_48_48 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0];
#line 197 "lookup_switch.m"
    {
#line 197 "lookup_switch.m"
      ll_backend__lookup_switch__V_39_39 = mercury__map__init_0_f_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48);
    }
#line 198 "lookup_switch.m"
    {
#line 198 "lookup_switch.m"
      ll_backend__lookup_switch__V_41_41 = parse_tree__set_of_var__init_0_f_0(ll_backend__lookup_switch__TypeCtorInfo_47_47);
    }
#line 196 "lookup_switch.m"
    {
#line 196 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__GetTag_12, ll_backend__lookup_switch__TaggedCases_13, ll_backend__lookup_switch__OutVars_20, ll_backend__lookup_switch__ArmNonLocals_21, ll_backend__lookup_switch__StoreMap_15, &ll_backend__lookup_switch__Liveness_22, ll_backend__lookup_switch__V_39_39, &ll_backend__lookup_switch__CaseSolnMap_23, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36, ll_backend__lookup_switch__V_41_41, &ll_backend__lookup_switch__ResumeVars_24, (MR_Integer) 0, &ll_backend__lookup_switch__GoalsMayModifyTrail_25, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__STATE_VARIABLE_CI_38);
    }
#line 186 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 186 "lookup_switch.m"
      {
#line 199 "lookup_switch.m"
        {
#line 199 "lookup_switch.m"
          ll_backend__code_info__get_vartypes_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__VarTypes_26);
        }
#line 200 "lookup_switch.m"
        {
#line 200 "lookup_switch.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__lookup_switch__VarTypes_26, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__OutTypes_27);
        }
#line 6236 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 201 "lookup_switch.m"
        {
#line 201 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_49_49, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseValuePairsMap_28);
        }
#line 203 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 202 "lookup_switch.m"
          {
#line 202 "lookup_switch.m"
            ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 202 "lookup_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseValuePairsMap_28));
#line 202 "lookup_switch.m"
          }
#line 203 "lookup_switch.m"
        else
#line 204 "lookup_switch.m"
          {
#line 204 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_44_44;

#line 205 "lookup_switch.m"
            {
#line 205 "lookup_switch.m"
              ll_backend__lookup_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 0) = ((MR_Box) (ll_backend__lookup_switch__ResumeVars_24));
#line 205 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 1) = ((MR_Box) (ll_backend__lookup_switch__GoalsMayModifyTrail_25));
#line 205 "lookup_switch.m"
            }
#line 204 "lookup_switch.m"
            {
#line 204 "lookup_switch.m"
              ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseSolnMap_23));
#line 204 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 1) = ((MR_Box) (ll_backend__lookup_switch__V_44_44));
#line 204 "lookup_switch.m"
            }
#line 204 "lookup_switch.m"
          }
#line 207 "lookup_switch.m"
        {
#line 207 "lookup_switch.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 208 "lookup_switch.m"
        {
#line 208 "lookup_switch.m"
          ll_backend__lookup_switch__UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 209 "lookup_switch.m"
        {
#line 209 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseSolns_32);
        }
#line 212 "lookup_switch.m"
        ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6299 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 212 "lookup_switch.m"
        {
#line 212 "lookup_switch.m"
          backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_50_50, ll_backend__lookup_switch__CaseSolns_32, ll_backend__lookup_switch__V_45_45, &ll_backend__lookup_switch__CaseValues_33);
        }
#line 213 "lookup_switch.m"
        {
#line 213 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__lookup_switch__UnboxFloats_31, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__CaseValues_33, &ll_backend__lookup_switch__OutLLDSTypes_34);
        }
#line 186 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 186 "lookup_switch.m"
          {
#line 214 "lookup_switch.m"
            {
#line 214 "lookup_switch.m"
              MR_Word base;
#line 214 "lookup_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 214 "lookup_switch.m"
              *ll_backend__lookup_switch__LookupSwitchInfo_17 = base;
#line 214 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseConsts_29));
#line 214 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__lookup_switch__OutVars_20));
#line 214 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__lookup_switch__OutLLDSTypes_34));
#line 214 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__lookup_switch__Liveness_22));
#line 214 "lookup_switch.m"
            }
#line 214 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 186 "lookup_switch.m"
          }
#line 186 "lookup_switch.m"
      }
#line 186 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 186 "lookup_switch.m"
  }
#line 86 "lookup_switch.m"
}

void mercury__ll_backend__lookup_switch__init(void)
{
}

void mercury__ll_backend__lookup_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0);
	MR_register_type_ctor_info(&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1);
}

void mercury__ll_backend__lookup_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.lookup_switch. */
