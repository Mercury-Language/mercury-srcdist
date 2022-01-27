/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 150 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0;

#line 159 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0;

#line 162 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1;

#line 165 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2;

#line 168 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3];

#line 171 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3];

#line 174 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3];

#line 177 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0;

#line 180 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

#line 186 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4];

#line 192 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4];

#line 195 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0;

#line 198 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1];

#line 201 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1];

#line 204 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1];

#line 207 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1];

#line 210 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 213 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 215 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2);

#line 218 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 221 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 223 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 225 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 228 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 231 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 233 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 235 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 238 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 241 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 243 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 245 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 247 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4);

#line 884 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 884 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 884 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 884 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 884 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 884 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5);

#line 835 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_p_0(
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_8,
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_9,
#line 835 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_10,
#line 835 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_12,
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_24,
#line 835 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_25);

#line 371 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_p_0(
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_13,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_14,
#line 371 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_15,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_17,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_18,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_19,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_20,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_21,
#line 371 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_22,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 371 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40);

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__483__1_2_p_0(
#line 483 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_26,
#line 483 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_65);

#line 900 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 900 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 900 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 900 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3);

#line 823 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 823 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 823 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 813 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 813 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 813 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 813 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 813 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11);

#line 759 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 759 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 759 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);

#line 576 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 576 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18);

#line 570 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 570 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1);

#line 493 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_3(
#line 493 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 493 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_2(
#line 483 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_1(
#line 483 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 470 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0(
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_18,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_19,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_20,
#line 470 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_21,
#line 470 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_22,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_23,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_24,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_25,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_26,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_27,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_28,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_29,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_57,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_31,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_58,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_59);

#line 458 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 458 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 458 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 448 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 448 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 448 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5);

#line 303 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 303 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 290 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 290 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5);

#line 215 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_16_p_0(
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_104,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_7,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_8,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_9,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_10,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_12,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_13,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_14,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_15,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_16);


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[5][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_5[2][5];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[1][4];




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
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_5[0])),
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

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__lookup_switch____vpti_pred_0))
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



#line 784 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 792 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 800 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 808 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
  (MR_String) "kind_zero_solns",
  (MR_Integer) 0
};

#line 814 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
  (MR_String) "kind_one_soln",
  (MR_Integer) 1
};

#line 820 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
  (MR_String) "kind_several_solns",
  (MR_Integer) 2
};

#line 826 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2
};

#line 833 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0
};

#line 840 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 847 "ll_backend.lookup_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__lookup_switch____Unify____case_kind_0_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____case_kind_0_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "case_kind",
  {
    ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0
  },
  {
    ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0
};

#line 868 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0
  }
};

#line 878 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 886 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 894 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 902 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 910 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4] = {
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness"
};

#line 918 "ll_backend.lookup_switch.c"
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

#line 933 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 938 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0
  }
};

#line 947 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 952 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1] = {
  (MR_Integer) 0
};

#line 957 "ll_backend.lookup_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "lookup_switch_info",
  {
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1
  },
  {
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1
};

#line 978 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 981 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 983 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2)
#line 985 "ll_backend.lookup_switch.c"
{
#line 987 "ll_backend.lookup_switch.c"
  {
#line 989 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 992 "ll_backend.lookup_switch.c"
    {
#line 994 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____case_kind_0_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2));
    }
#line 997 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 999 "ll_backend.lookup_switch.c"
  }
#line 1001 "ll_backend.lookup_switch.c"
}

#line 1004 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 1007 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 1009 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1011 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1013 "ll_backend.lookup_switch.c"
{
#line 1015 "ll_backend.lookup_switch.c"
  {
#line 1017 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1020 "ll_backend.lookup_switch.c"
    {
#line 1022 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____case_kind_0_0(&ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1025 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1027 "ll_backend.lookup_switch.c"
  }
#line 1029 "ll_backend.lookup_switch.c"
}

#line 1032 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 1035 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1037 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1039 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1041 "ll_backend.lookup_switch.c"
{
#line 1043 "ll_backend.lookup_switch.c"
  {
#line 1045 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 1048 "ll_backend.lookup_switch.c"
    {
#line 1050 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1053 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 1055 "ll_backend.lookup_switch.c"
  }
#line 1057 "ll_backend.lookup_switch.c"
}

#line 1060 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 1063 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1065 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 1067 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 1069 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4)
#line 1071 "ll_backend.lookup_switch.c"
{
#line 1073 "ll_backend.lookup_switch.c"
  {
#line 1075 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1078 "ll_backend.lookup_switch.c"
    {
#line 1080 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), &ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_4));
    }
#line 1083 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1085 "ll_backend.lookup_switch.c"
  }
#line 1087 "ll_backend.lookup_switch.c"
}

#line 884 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 884 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 884 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 884 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 884 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 884 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5)
#line 884 "lookup_switch.m"
{
#line 887 "lookup_switch.m"
  while (MR_TRUE)
#line 887 "lookup_switch.m"
    {
#line 887 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 887 "lookup_switch.m"
      {
#line 887 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 887 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 887 "lookup_switch.m"
        else
#line 888 "lookup_switch.m"
          {
#line 888 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Tag_11;
#line 888 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Val_17;
#line 888 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Word_18;
#line 888 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Offset_19;
#line 888 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X1_21;
#line 888 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 888 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 888 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__V_12_12;
#line 894 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X0_20;
#line 892 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__conv0_X0_20;

#line 888 "lookup_switch.m"
            ll_backend__lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 0)));
#line 888 "lookup_switch.m"
            ll_backend__lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 1));
#line 889 "lookup_switch.m"
            ll_backend__lookup_switch__Val_17 = (ll_backend__lookup_switch__Tag_11 - ll_backend__lookup_switch__Start_2);
#line 890 "lookup_switch.m"
            {
#line 890 "lookup_switch.m"
              ll_backend__lookup_switch__Word_18 = mercury__int__f_47_47_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 891 "lookup_switch.m"
            {
#line 891 "lookup_switch.m"
              ll_backend__lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 892 "lookup_switch.m"
            {
#line 892 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, ll_backend__lookup_switch__Word_18, &ll_backend__lookup_switch__conv0_X0_20);
            }
#line 892 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 892 "lookup_switch.m"
              {
#line 892 "lookup_switch.m"
                ll_backend__lookup_switch__X0_20 = ((MR_Integer) ll_backend__lookup_switch__conv0_X0_20);
#line 892 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 892 "lookup_switch.m"
              }
#line 894 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 893 "lookup_switch.m"
              {
#line 893 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_25_25;

#line 893 "lookup_switch.m"
                {
#line 893 "lookup_switch.m"
                  ll_backend__lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 893 "lookup_switch.m"
                ll_backend__lookup_switch__X1_21 = (ll_backend__lookup_switch__X0_20 | ll_backend__lookup_switch__V_25_25);
#line 893 "lookup_switch.m"
              }
#line 894 "lookup_switch.m"
            else
#line 895 "lookup_switch.m"
              {
#line 895 "lookup_switch.m"
                {
#line 895 "lookup_switch.m"
                  ll_backend__lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 895 "lookup_switch.m"
              }
#line 897 "lookup_switch.m"
            {
#line 897 "lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__Word_18, ((MR_Box) (ll_backend__lookup_switch__X1_21)), ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 898 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 898 "lookup_switch.m"
            {
#line 898 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Rest_13;
#line 898 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 898 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 898 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 898 "lookup_switch.m"
            }
#line 898 "lookup_switch.m"
            continue;
#line 888 "lookup_switch.m"
          }
#line 887 "lookup_switch.m"
      }
#line 887 "lookup_switch.m"
      break;
#line 887 "lookup_switch.m"
    }
#line 884 "lookup_switch.m"
}

#line 835 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_p_0(
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_8,
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_9,
#line 835 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_10,
#line 835 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_12,
#line 835 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_24,
#line 835 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_25)
#line 835 "lookup_switch.m"
{
#line 838 "lookup_switch.m"
  {
#line 838 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_25_63;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Globals_14;
#line 838 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__WordBits_15;
#line 838 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Log2WordBits_16;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecArgs_17;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecRval_18;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Word_20;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitNum_21;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HasBit_23;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_26_26;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_40_40;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap0_55;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap_56;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__WordVals_57;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DataAddr_58;
#line 838 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_61_61;
#line 850 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__SingleWord_19;
#line 847 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_27_27;

#line 839 "lookup_switch.m"
    {
#line 839 "lookup_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_24, &ll_backend__lookup_switch__Globals_14);
    }
#line 840 "lookup_switch.m"
    {
#line 840 "lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ll_backend__lookup_switch__Globals_14, &ll_backend__lookup_switch__WordBits_15, &ll_backend__lookup_switch__Log2WordBits_16);
    }
#line 1306 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_25_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 877 "lookup_switch.m"
    {
#line 877 "lookup_switch.m"
      mercury__map__init_1_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_63, ll_backend__lookup_switch__TypeCtorInfo_25_63, &ll_backend__lookup_switch__BitMap0_55);
    }
#line 878 "lookup_switch.m"
    {
#line 878 "lookup_switch.m"
      ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__lookup_switch__CaseVals_9, ll_backend__lookup_switch__Start_10, ll_backend__lookup_switch__WordBits_15, ll_backend__lookup_switch__BitMap0_55, &ll_backend__lookup_switch__BitMap_56);
    }
#line 879 "lookup_switch.m"
    {
#line 879 "lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_63, ll_backend__lookup_switch__TypeCtorInfo_25_63, ll_backend__lookup_switch__BitMap_56, &ll_backend__lookup_switch__WordVals_57);
    }
#line 880 "lookup_switch.m"
    {
#line 880 "lookup_switch.m"
      ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__WordVals_57, (MR_Integer) 0, &ll_backend__lookup_switch__BitVecArgs_17);
    }
#line 881 "lookup_switch.m"
    {
#line 881 "lookup_switch.m"
      ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(ll_backend__lookup_switch__BitVecArgs_17, &ll_backend__lookup_switch__DataAddr_58, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_24, &ll_backend__lookup_switch__STATE_VARIABLE_CI_26_26);
    }
#line 882 "lookup_switch.m"
    {
#line 882 "lookup_switch.m"
      ll_backend__lookup_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 882 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 882 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_61_61, 1) = ((MR_Box) (ll_backend__lookup_switch__DataAddr_58));
#line 882 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_61_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "lookup_switch.m"
    }
#line 882 "lookup_switch.m"
    {
#line 882 "lookup_switch.m"
      ll_backend__lookup_switch__BitVecRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 882 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_18, 1) = ((MR_Box) (ll_backend__lookup_switch__V_61_61));
#line 882 "lookup_switch.m"
    }
#line 847 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = ((MR_tag((MR_Word) ll_backend__lookup_switch__BitVecArgs_17)) == (MR_mktag((MR_Integer) 1)));
#line 847 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 847 "lookup_switch.m"
      {
#line 847 "lookup_switch.m"
        ll_backend__lookup_switch__SingleWord_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_17, (MR_Integer) 0)));
#line 847 "lookup_switch.m"
        ll_backend__lookup_switch__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_17, (MR_Integer) 1)));
#line 847 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "lookup_switch.m"
      }
#line 850 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 848 "lookup_switch.m"
      {
#line 848 "lookup_switch.m"
        ll_backend__lookup_switch__Word_20 = ll_backend__lookup_switch__SingleWord_19;
#line 849 "lookup_switch.m"
        ll_backend__lookup_switch__BitNum_21 = ll_backend__lookup_switch__IndexRval_8;
#line 848 "lookup_switch.m"
      }
#line 850 "lookup_switch.m"
    else
#line 855 "lookup_switch.m"
      {
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__WordNum_22;
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_29_29;
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_30_30;
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_31_31;
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_35_35;
#line 855 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_36_36;
#line 855 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_37_37;

#line 855 "lookup_switch.m"
        {
#line 855 "lookup_switch.m"
          ll_backend__lookup_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_30_30, 0) = ((MR_Box) (ll_backend__lookup_switch__Log2WordBits_16));
#line 855 "lookup_switch.m"
        }
#line 854 "lookup_switch.m"
        {
#line 854 "lookup_switch.m"
          ll_backend__lookup_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_29_29, 1) = ((MR_Box) (ll_backend__lookup_switch__V_30_30));
#line 854 "lookup_switch.m"
        }
#line 854 "lookup_switch.m"
        {
#line 854 "lookup_switch.m"
          ll_backend__lookup_switch__WordNum_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_22, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_8));
#line 854 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_22, 3) = ((MR_Box) (ll_backend__lookup_switch__V_29_29));
#line 854 "lookup_switch.m"
        }
#line 857 "lookup_switch.m"
        {
#line 857 "lookup_switch.m"
          ll_backend__lookup_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 857 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 857 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 857 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_31_31, 2) = ((MR_Box) (ll_backend__lookup_switch__BitVecRval_18));
#line 857 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_31_31, 3) = ((MR_Box) (ll_backend__lookup_switch__WordNum_22));
#line 857 "lookup_switch.m"
        }
#line 857 "lookup_switch.m"
        {
#line 857 "lookup_switch.m"
          ll_backend__lookup_switch__Word_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 857 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Word_20, 0) = ((MR_Box) (ll_backend__lookup_switch__V_31_31));
#line 857 "lookup_switch.m"
        }
#line 863 "lookup_switch.m"
        ll_backend__lookup_switch__V_37_37 = (ll_backend__lookup_switch__WordBits_15 - (MR_Integer) 1);
#line 863 "lookup_switch.m"
        {
#line 863 "lookup_switch.m"
          ll_backend__lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_36_36, 0) = ((MR_Box) (ll_backend__lookup_switch__V_37_37));
#line 863 "lookup_switch.m"
        }
#line 862 "lookup_switch.m"
        {
#line 862 "lookup_switch.m"
          ll_backend__lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_35_35, 1) = ((MR_Box) (ll_backend__lookup_switch__V_36_36));
#line 862 "lookup_switch.m"
        }
#line 862 "lookup_switch.m"
        {
#line 862 "lookup_switch.m"
          ll_backend__lookup_switch__BitNum_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_21, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_8));
#line 862 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_21, 3) = ((MR_Box) (ll_backend__lookup_switch__V_35_35));
#line 862 "lookup_switch.m"
        }
#line 855 "lookup_switch.m"
      }
#line 865 "lookup_switch.m"
    {
#line 865 "lookup_switch.m"
      ll_backend__lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[17])));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 3) = ((MR_Box) (ll_backend__lookup_switch__BitNum_21));
#line 865 "lookup_switch.m"
    }
#line 865 "lookup_switch.m"
    {
#line 865 "lookup_switch.m"
      ll_backend__lookup_switch__HasBit_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_23, 2) = ((MR_Box) (ll_backend__lookup_switch__V_40_40));
#line 865 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_23, 3) = ((MR_Box) (ll_backend__lookup_switch__Word_20));
#line 865 "lookup_switch.m"
    }
#line 867 "lookup_switch.m"
    {
#line 867 "lookup_switch.m"
      ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__lookup_switch__HasBit_23, ll_backend__lookup_switch__CheckCode_12, ll_backend__lookup_switch__STATE_VARIABLE_CI_26_26, ll_backend__lookup_switch__STATE_VARIABLE_CI_25);
#line 867 "lookup_switch.m"
      return;
    }
#line 838 "lookup_switch.m"
  }
#line 835 "lookup_switch.m"
}

#line 371 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_p_0(
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_13,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_14,
#line 371 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_15,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_17,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_18,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_19,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_20,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_21,
#line 371 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_22,
#line 371 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 371 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40)
#line 371 "lookup_switch.m"
{
#line 377 "lookup_switch.m"
  {
#line 377 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_70_70;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CheckBitVecCode_24;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_25;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MaybeBaseReg_26;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchEndCode_37;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_59_59;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_61_61;
#line 377 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_63_63;
#line 436 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___MaybeEnd_36;

#line 382 "lookup_switch.m"
    if ((ll_backend__lookup_switch__NeedBitVecCheck_20 == (MR_Integer) 1))
#line 383 "lookup_switch.m"
      {
#line 384 "lookup_switch.m"
        {
#line 384 "lookup_switch.m"
          ll_backend__lookup_switch__CheckBitVecCode_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 384 "lookup_switch.m"
        ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39;
#line 383 "lookup_switch.m"
      }
#line 382 "lookup_switch.m"
    else
#line 380 "lookup_switch.m"
      {
#line 380 "lookup_switch.m"
        ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_p_0(ll_backend__lookup_switch__IndexRval_13, ll_backend__lookup_switch__CaseValues_17, ll_backend__lookup_switch__StartVal_15, &ll_backend__lookup_switch__CheckBitVecCode_24, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41);
      }
#line 397 "lookup_switch.m"
    if ((ll_backend__lookup_switch__OutVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "lookup_switch.m"
      {
#line 395 "lookup_switch.m"
        {
#line 395 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 396 "lookup_switch.m"
        ll_backend__lookup_switch__MaybeBaseReg_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "lookup_switch.m"
        ll_backend__lookup_switch__STATE_VARIABLE_CI_59_59 = ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 394 "lookup_switch.m"
      }
#line 397 "lookup_switch.m"
    else
#line 398 "lookup_switch.m"
      {
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseReg_29;
#line 398 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__NumOutVars_30;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__RevVectorRvals_31;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorRvals_32;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddr_33;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddrRval_34;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseRval_35;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_46_46;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_51_51;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_52_52;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_53_53;
#line 398 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_54_54;

#line 402 "lookup_switch.m"
        {
#line 402 "lookup_switch.m"
          ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_14, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_29, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43);
        }
#line 403 "lookup_switch.m"
        {
#line 403 "lookup_switch.m"
          ll_backend__lookup_switch__MaybeBaseReg_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MaybeBaseReg_26, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_29));
#line 403 "lookup_switch.m"
        }
#line 406 "lookup_switch.m"
        {
#line 406 "lookup_switch.m"
          mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_18, &ll_backend__lookup_switch__NumOutVars_30);
        }
#line 407 "lookup_switch.m"
        {
#line 407 "lookup_switch.m"
          ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(ll_backend__lookup_switch__CaseValues_17, ll_backend__lookup_switch__StartVal_15, ll_backend__lookup_switch__OutTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__RevVectorRvals_31);
        }
#line 409 "lookup_switch.m"
        {
#line 409 "lookup_switch.m"
          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__RevVectorRvals_31, &ll_backend__lookup_switch__VectorRvals_32);
        }
#line 410 "lookup_switch.m"
        {
#line 410 "lookup_switch.m"
          ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_19, ll_backend__lookup_switch__VectorRvals_32, &ll_backend__lookup_switch__VectorAddr_33, ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43, &ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45);
        }
#line 411 "lookup_switch.m"
        {
#line 411 "lookup_switch.m"
          ll_backend__lookup_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 411 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 411 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_46_46, 1) = ((MR_Box) (ll_backend__lookup_switch__VectorAddr_33));
#line 411 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_46_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "lookup_switch.m"
        }
#line 411 "lookup_switch.m"
        {
#line 411 "lookup_switch.m"
          ll_backend__lookup_switch__VectorAddrRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_34, 1) = ((MR_Box) (ll_backend__lookup_switch__V_46_46));
#line 411 "lookup_switch.m"
        }
#line 418 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NumOutVars_30 == (MR_Integer) 1);
#line 420 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 419 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRval_35 = ll_backend__lookup_switch__IndexRval_13;
#line 420 "lookup_switch.m"
        else
#line 421 "lookup_switch.m"
          {
#line 421 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_49_49;
#line 421 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_50_50;

#line 422 "lookup_switch.m"
            {
#line 422 "lookup_switch.m"
              ll_backend__lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 422 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_50_50, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_30));
#line 422 "lookup_switch.m"
            }
#line 421 "lookup_switch.m"
            {
#line 421 "lookup_switch.m"
              ll_backend__lookup_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_49_49, 1) = ((MR_Box) (ll_backend__lookup_switch__V_50_50));
#line 421 "lookup_switch.m"
            }
#line 421 "lookup_switch.m"
            {
#line 421 "lookup_switch.m"
              ll_backend__lookup_switch__BaseRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_35, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_13));
#line 421 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_35, 3) = ((MR_Box) (ll_backend__lookup_switch__V_49_49));
#line 421 "lookup_switch.m"
            }
#line 421 "lookup_switch.m"
          }
#line 427 "lookup_switch.m"
        {
#line 427 "lookup_switch.m"
          ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 427 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (ll_backend__lookup_switch__VectorAddrRval_34));
#line 427 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 427 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_54_54, 2) = ((MR_Box) (ll_backend__lookup_switch__BaseRval_35));
#line 427 "lookup_switch.m"
        }
#line 426 "lookup_switch.m"
        {
#line 426 "lookup_switch.m"
          ll_backend__lookup_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 426 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_53_53, 1) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
#line 426 "lookup_switch.m"
        }
#line 425 "lookup_switch.m"
        {
#line 425 "lookup_switch.m"
          ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_52_52, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_29));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_52_52, 2) = ((MR_Box) (ll_backend__lookup_switch__V_53_53));
#line 425 "lookup_switch.m"
        }
#line 424 "lookup_switch.m"
        {
#line 424 "lookup_switch.m"
          ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
#line 424 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 424 "lookup_switch.m"
        }
#line 424 "lookup_switch.m"
        {
#line 424 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_25 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__lookup_switch__V_51_51)));
        }
#line 430 "lookup_switch.m"
        {
#line 430 "lookup_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__lookup_switch__OutVars_18, (MR_Integer) 0, ll_backend__lookup_switch__BaseReg_29, ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, &ll_backend__lookup_switch__STATE_VARIABLE_CI_59_59);
        }
#line 398 "lookup_switch.m"
      }
#line 436 "lookup_switch.m"
    {
#line 436 "lookup_switch.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_14, ll_backend__lookup_switch__Liveness_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch___MaybeEnd_36, &ll_backend__lookup_switch__BranchEndCode_37, ll_backend__lookup_switch__STATE_VARIABLE_CI_59_59, &ll_backend__lookup_switch__STATE_VARIABLE_CI_61_61);
    }
#line 440 "lookup_switch.m"
    if ((ll_backend__lookup_switch__MaybeBaseReg_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "lookup_switch.m"
      *ll_backend__lookup_switch__STATE_VARIABLE_CI_40 = ll_backend__lookup_switch__STATE_VARIABLE_CI_61_61;
#line 440 "lookup_switch.m"
    else
#line 441 "lookup_switch.m"
      {
#line 441 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__FinalBaseReg_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MaybeBaseReg_26, (MR_Integer) 0)));

#line 442 "lookup_switch.m"
        {
#line 442 "lookup_switch.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__lookup_switch__FinalBaseReg_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_61_61, ll_backend__lookup_switch__STATE_VARIABLE_CI_40);
        }
#line 441 "lookup_switch.m"
      }
#line 1831 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 444 "lookup_switch.m"
    {
#line 444 "lookup_switch.m"
      ll_backend__lookup_switch__V_63_63 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__BaseRegInitCode_25, ll_backend__lookup_switch__BranchEndCode_37);
    }
#line 444 "lookup_switch.m"
    {
#line 444 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__CheckBitVecCode_24, ll_backend__lookup_switch__V_63_63);
    }
#line 377 "lookup_switch.m"
  }
#line 371 "lookup_switch.m"
}

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__483__1_2_p_0(
#line 483 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_26,
#line 483 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_65)
#line 483 "lookup_switch.m"
{
#line 483 "lookup_switch.m"
  {
#line 483 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], ((MR_Box) (ll_backend__lookup_switch__OutVars_26)), ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_65)));
    }
#line 483 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 483 "lookup_switch.m"
  }
#line 483 "lookup_switch.m"
}

#line 61 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_17,
#line 61 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 61 "lookup_switch.m"
{
#line 61 "lookup_switch.m"
  {
#line 61 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 61 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_15 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 61 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_16 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 61 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_15 == ll_backend__lookup_switch__CastY_16);
#line 61 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 1900 "ll_backend.lookup_switch.c"
      *ll_backend__lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "lookup_switch.m"
    else
#line 61 "lookup_switch.m"
      {
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_12_12;

#line 61 "lookup_switch.m"
        {
#line 61 "lookup_switch.m"
          backend_libs__switch_util____Compare____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_17, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, &ll_backend__lookup_switch__V_12_12, ll_backend__lookup_switch__V_4_4, ll_backend__lookup_switch__V_8_8);
        }
#line 1930 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_12_12 == (MR_Integer) 0);
#line 61 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 61 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_12_12;
#line 61 "lookup_switch.m"
        else
#line 61 "lookup_switch.m"
          {
#line 61 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_13_13;

#line 61 "lookup_switch.m"
            {
#line 61 "lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], &ll_backend__lookup_switch__V_13_13, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
            }
#line 1950 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_13_13 == (MR_Integer) 0);
#line 61 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 61 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_13_13;
#line 61 "lookup_switch.m"
            else
#line 61 "lookup_switch.m"
              {
#line 61 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_14_14;

#line 61 "lookup_switch.m"
                {
#line 61 "lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[4], &ll_backend__lookup_switch__V_14_14, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                }
#line 1970 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_14_14 == (MR_Integer) 0);
#line 61 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 61 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
                  *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_14_14;
#line 61 "lookup_switch.m"
                else
#line 61 "lookup_switch.m"
                  {
#line 61 "lookup_switch.m"
                    {
#line 61 "lookup_switch.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[5], ll_backend__lookup_switch__HeadVar__1_1, ((MR_Box) (ll_backend__lookup_switch__V_7_7)), ((MR_Box) (ll_backend__lookup_switch__V_11_11)));
#line 61 "lookup_switch.m"
                      return;
                    }
#line 61 "lookup_switch.m"
                  }
#line 61 "lookup_switch.m"
              }
#line 61 "lookup_switch.m"
          }
#line 61 "lookup_switch.m"
      }
#line 61 "lookup_switch.m"
  }
#line 61 "lookup_switch.m"
}

#line 61 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_13,
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 61 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 61 "lookup_switch.m"
{
#line 61 "lookup_switch.m"
  {
#line 61 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 61 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_11 = (MR_Integer) ll_backend__lookup_switch__HeadVar__1_1;
#line 61 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_12 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;

#line 61 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_11 == ll_backend__lookup_switch__CastY_12);
#line 61 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 61 "lookup_switch.m"
    else
#line 61 "lookup_switch.m"
      {
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_18_18;
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_19_19;
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_20_20;
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 61 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));

#line 2055 "ll_backend.lookup_switch.c"
        {
#line 2057 "ll_backend.lookup_switch.c"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, ll_backend__lookup_switch__V_3_3, ll_backend__lookup_switch__V_7_7);
        }
#line 61 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
          {
#line 2064 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeInfo_18_18 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[3];
#line 2066 "ll_backend.lookup_switch.c"
            {
#line 2068 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_18_18, ((MR_Box) (ll_backend__lookup_switch__V_4_4)), ((MR_Box) (ll_backend__lookup_switch__V_8_8)));
            }
#line 61 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
              {
#line 2075 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_19_19 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[4];
#line 2077 "ll_backend.lookup_switch.c"
                {
#line 2079 "ll_backend.lookup_switch.c"
                  ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_19_19, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
                }
#line 61 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 61 "lookup_switch.m"
                  {
#line 2086 "ll_backend.lookup_switch.c"
                    ll_backend__lookup_switch__TypeInfo_20_20 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[5];
#line 2088 "ll_backend.lookup_switch.c"
                    {
#line 2090 "ll_backend.lookup_switch.c"
                      return ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_20_20, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                    }
#line 61 "lookup_switch.m"
                  }
#line 61 "lookup_switch.m"
              }
#line 61 "lookup_switch.m"
          }
#line 61 "lookup_switch.m"
      }
#line 61 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 61 "lookup_switch.m"
  }
#line 61 "lookup_switch.m"
}

#line 93 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0(
#line 93 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 93 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 93 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 93 "lookup_switch.m"
{
#line 93 "lookup_switch.m"
  {
#line 93 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 93 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 93 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 93 "lookup_switch.m"
    {
#line 93 "lookup_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Cast_HeadVar1_4, ll_backend__lookup_switch__Cast_HeadVar2_5);
#line 93 "lookup_switch.m"
      return;
    }
#line 93 "lookup_switch.m"
  }
#line 93 "lookup_switch.m"
}

#line 93 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0(
#line 93 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_1,
#line 93 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 93 "lookup_switch.m"
{
#line 2149 "ll_backend.lookup_switch.c"
  {
#line 2151 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__HeadVar__2_1 == ll_backend__lookup_switch__HeadVar__2_2);

#line 2154 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 2156 "ll_backend.lookup_switch.c"
  }
#line 93 "lookup_switch.m"
}

#line 900 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 900 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 900 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 900 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3)
#line 900 "lookup_switch.m"
{
#line 903 "lookup_switch.m"
  {
#line 903 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 903 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "lookup_switch.m"
      *ll_backend__lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "lookup_switch.m"
    else
#line 904 "lookup_switch.m"
      {
#line 904 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Word_5;
#line 904 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Bits_6;
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rval_9;
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rvals_10;
#line 904 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__WordVal_11;
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_12;
#line 904 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Count1_13;
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 904 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_16_16;

#line 904 "lookup_switch.m"
        ll_backend__lookup_switch__Word_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 0)));
#line 904 "lookup_switch.m"
        ll_backend__lookup_switch__Bits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 1)));
#line 905 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__Count_2 < ll_backend__lookup_switch__Word_5);
#line 908 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 906 "lookup_switch.m"
          {
#line 906 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = (MR_Integer) 0;
#line 907 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__HeadVar__1_1;
#line 906 "lookup_switch.m"
          }
#line 908 "lookup_switch.m"
        else
#line 909 "lookup_switch.m"
          {
#line 909 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = ll_backend__lookup_switch__Bits_6;
#line 910 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__Rest_7;
#line 909 "lookup_switch.m"
          }
#line 912 "lookup_switch.m"
        {
#line 912 "lookup_switch.m"
          ll_backend__lookup_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_16_16, 0) = ((MR_Box) (ll_backend__lookup_switch__WordVal_11));
#line 912 "lookup_switch.m"
        }
#line 912 "lookup_switch.m"
        {
#line 912 "lookup_switch.m"
          ll_backend__lookup_switch__Rval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 912 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 1) = ((MR_Box) (ll_backend__lookup_switch__V_16_16));
#line 912 "lookup_switch.m"
        }
#line 913 "lookup_switch.m"
        ll_backend__lookup_switch__Count1_13 = (ll_backend__lookup_switch__Count_2 + (MR_Integer) 1);
#line 914 "lookup_switch.m"
        {
#line 914 "lookup_switch.m"
          ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__Remainder_12, ll_backend__lookup_switch__Count1_13, &ll_backend__lookup_switch__Rvals_10);
        }
#line 904 "lookup_switch.m"
        {
#line 904 "lookup_switch.m"
          MR_Word base;
#line 904 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__3_3 = base;
#line 904 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__Rval_9));
#line 904 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__Rvals_10));
#line 904 "lookup_switch.m"
        }
#line 904 "lookup_switch.m"
      }
#line 903 "lookup_switch.m"
  }
#line 900 "lookup_switch.m"
}

#line 823 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 823 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 823 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 823 "lookup_switch.m"
{
#line 823 "lookup_switch.m"
  {
#line 823 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 823 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 823 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 823 "lookup_switch.m"
    {
#line 823 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 823 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 823 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 823 "lookup_switch.m"
  }
#line 823 "lookup_switch.m"
}

#line 813 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 813 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 813 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 813 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 813 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11)
#line 813 "lookup_switch.m"
{
#line 816 "lookup_switch.m"
  {
#line 816 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 816 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 816 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarRvals_9;

#line 823 "lookup_switch.m"
    {
#line 823 "lookup_switch.m"
      ll_backend__lookup_switch__VarRvals_9 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[3], ll_backend__lookup_switch__OutTypes_5);
    }
#line 825 "lookup_switch.m"
    {
#line 825 "lookup_switch.m"
      *ll_backend__lookup_switch__MainRow_6 = mercury__list__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_1[9]), ll_backend__lookup_switch__VarRvals_9);
    }
#line 826 "lookup_switch.m"
    *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = (ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10 + (MR_Integer) 1);
#line 816 "lookup_switch.m"
  }
#line 813 "lookup_switch.m"
}

#line 759 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 759 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 759 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 759 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 759 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 759 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15)
#line 759 "lookup_switch.m"
{
#line 768 "lookup_switch.m"
  {
#line 768 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 768 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "lookup_switch.m"
      {
#line 769 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 > ll_backend__lookup_switch__EndVal_2);
#line 771 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 770 "lookup_switch.m"
          {
#line 770 "lookup_switch.m"
            *ll_backend__lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 770 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 770 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 770 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 770 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 770 "lookup_switch.m"
          }
#line 771 "lookup_switch.m"
        else
#line 772 "lookup_switch.m"
          {
#line 772 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MainRow_26;
#line 772 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MoreMainRows_27;
#line 772 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37;
#line 772 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_38_38;

#line 772 "lookup_switch.m"
            {
#line 772 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_26, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37);
            }
#line 773 "lookup_switch.m"
            ll_backend__lookup_switch__V_38_38 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 773 "lookup_switch.m"
            {
#line 773 "lookup_switch.m"
              ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_38_38, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__MoreMainRows_27, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
            }
#line 777 "lookup_switch.m"
            {
#line 777 "lookup_switch.m"
              MR_Word base;
#line 777 "lookup_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 777 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_26));
#line 777 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MoreMainRows_27));
#line 777 "lookup_switch.m"
            }
#line 772 "lookup_switch.m"
          }
#line 771 "lookup_switch.m"
      }
#line 768 "lookup_switch.m"
    else
#line 782 "lookup_switch.m"
      {
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Index_49;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Soln_50;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRow_52;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRows_53;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_59;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79;
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81;
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89;
#line 782 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90;
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92;
#line 782 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_97_97;

#line 780 "lookup_switch.m"
        ll_backend__lookup_switch__Index_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 0)));
#line 780 "lookup_switch.m"
        ll_backend__lookup_switch__Soln_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 1)));
#line 783 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 < ll_backend__lookup_switch__Index_49);
#line 786 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 784 "lookup_switch.m"
          {
#line 784 "lookup_switch.m"
            {
#line 784 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_52, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79);
            }
#line 785 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__HeadVar__5_5;
#line 785 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 785 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 785 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 785 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 784 "lookup_switch.m"
          }
#line 786 "lookup_switch.m"
        else
#line 805 "lookup_switch.m"
          {
#line 794 "lookup_switch.m"
            if (((MR_tag((MR_Word) ll_backend__lookup_switch__Soln_50)) == (MR_mktag((MR_Integer) 0))))
#line 788 "lookup_switch.m"
              {
#line 788 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__OutRvals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 788 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__ZeroRval_61;
#line 788 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_96_96;

#line 789 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = (ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12 + (MR_Integer) 1);
#line 790 "lookup_switch.m"
                ll_backend__lookup_switch__ZeroRval_61 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 793 "lookup_switch.m"
                {
#line 793 "lookup_switch.m"
                  ll_backend__lookup_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 793 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 1) = ((MR_Box) (ll_backend__lookup_switch__OutRvals_60));
#line 793 "lookup_switch.m"
                }
#line 793 "lookup_switch.m"
                {
#line 793 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 793 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_96_96));
#line 793 "lookup_switch.m"
                }
#line 793 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 793 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 793 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 788 "lookup_switch.m"
              }
#line 794 "lookup_switch.m"
            else
#line 795 "lookup_switch.m"
              {
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__TypeInfo_103_103;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstSolnRvals_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LaterSolns_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 1)));
#line 795 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__NumLaterSolns_64;
#line 795 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__FirstRowOffset_65;
#line 795 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__LastRowOffset_66;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstRowRval_67;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LastRowRval_68;
#line 795 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_83_83;
#line 795 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_84_84;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_86_86;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_87_87;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_88_88;
#line 795 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_91_91;

#line 796 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = (ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14 + (MR_Integer) 1);
#line 2594 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_103_103 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 797 "lookup_switch.m"
                {
#line 797 "lookup_switch.m"
                  mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63, &ll_backend__lookup_switch__NumLaterSolns_64);
                }
#line 798 "lookup_switch.m"
                ll_backend__lookup_switch__FirstRowOffset_65 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 * ll_backend__lookup_switch__NumOutTypes_4);
#line 799 "lookup_switch.m"
                ll_backend__lookup_switch__V_84_84 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 799 "lookup_switch.m"
                ll_backend__lookup_switch__V_83_83 = (ll_backend__lookup_switch__V_84_84 - (MR_Integer) 1);
#line 799 "lookup_switch.m"
                ll_backend__lookup_switch__LastRowOffset_66 = (ll_backend__lookup_switch__V_83_83 * ll_backend__lookup_switch__NumOutTypes_4);
#line 800 "lookup_switch.m"
                {
#line 800 "lookup_switch.m"
                  ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowOffset_65));
#line 800 "lookup_switch.m"
                }
#line 800 "lookup_switch.m"
                {
#line 800 "lookup_switch.m"
                  ll_backend__lookup_switch__FirstRowRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 800 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_86_86));
#line 800 "lookup_switch.m"
                }
#line 801 "lookup_switch.m"
                {
#line 801 "lookup_switch.m"
                  ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowOffset_66));
#line 801 "lookup_switch.m"
                }
#line 801 "lookup_switch.m"
                {
#line 801 "lookup_switch.m"
                  ll_backend__lookup_switch__LastRowRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 801 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 1) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 801 "lookup_switch.m"
                }
#line 802 "lookup_switch.m"
                {
#line 802 "lookup_switch.m"
                  ll_backend__lookup_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowRval_68));
#line 802 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 1) = ((MR_Box) (ll_backend__lookup_switch__FirstSolnRvals_62));
#line 802 "lookup_switch.m"
                }
#line 802 "lookup_switch.m"
                {
#line 802 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowRval_67));
#line 802 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_88_88));
#line 802 "lookup_switch.m"
                }
#line 803 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 804 "lookup_switch.m"
                {
#line 804 "lookup_switch.m"
                  ll_backend__lookup_switch__V_91_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63);
                }
#line 804 "lookup_switch.m"
                {
#line 804 "lookup_switch.m"
                  ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__V_91_91);
                }
#line 804 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 795 "lookup_switch.m"
              }
#line 806 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__Rest_51;
#line 806 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 805 "lookup_switch.m"
          }
#line 808 "lookup_switch.m"
        ll_backend__lookup_switch__V_97_97 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 808 "lookup_switch.m"
        {
#line 808 "lookup_switch.m"
          ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_97_97, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, ll_backend__lookup_switch__Remainder_59, &ll_backend__lookup_switch__MainRows_53, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
        }
#line 782 "lookup_switch.m"
        {
#line 782 "lookup_switch.m"
          MR_Word base;
#line 782 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 782 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_52));
#line 782 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MainRows_53));
#line 782 "lookup_switch.m"
        }
#line 782 "lookup_switch.m"
      }
#line 768 "lookup_switch.m"
  }
#line 759 "lookup_switch.m"
}

#line 576 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 576 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 576 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 576 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18)
#line 576 "lookup_switch.m"
{
#line 584 "lookup_switch.m"
  {
#line 584 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 584 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "lookup_switch.m"
      {
#line 585 "lookup_switch.m"
        {
#line 585 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_code_for_each_kind\'/18", (MR_String) "no kinds");
#line 585 "lookup_switch.m"
          return;
        }
#line 584 "lookup_switch.m"
      }
#line 584 "lookup_switch.m"
    else
#line 589 "lookup_switch.m"
      {
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kinds_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TestOp_58;
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__KindCode_59;
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241;
#line 589 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;

#line 596 "lookup_switch.m"
        if ((ll_backend__lookup_switch__Kind_41 == (MR_Integer) 1))
#line 597 "lookup_switch.m"
          {
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TypeCtorInfo_292_292;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__BranchEndCode_60;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__GotoEndCode_61;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_237_237;
#line 597 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_238_238;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_239_239;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_242_242;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_244_244;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_245_245;
#line 597 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_246_246;

#line 598 "lookup_switch.m"
            ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
#line 599 "lookup_switch.m"
            {
#line 599 "lookup_switch.m"
              ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_237_237);
            }
#line 600 "lookup_switch.m"
            ll_backend__lookup_switch__V_238_238 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 600 "lookup_switch.m"
            {
#line 600 "lookup_switch.m"
              ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_238_238, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_237_237, &ll_backend__lookup_switch__STATE_VARIABLE_CI_239_239);
            }
#line 601 "lookup_switch.m"
            {
#line 601 "lookup_switch.m"
              ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241, &ll_backend__lookup_switch__BranchEndCode_60, ll_backend__lookup_switch__STATE_VARIABLE_CI_239_239, &ll_backend__lookup_switch__STATE_VARIABLE_CI_242_242);
            }
#line 603 "lookup_switch.m"
            {
#line 603 "lookup_switch.m"
              ll_backend__code_info__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_242_242, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
            }
#line 2840 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_292_292 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 605 "lookup_switch.m"
            {
#line 605 "lookup_switch.m"
              ll_backend__lookup_switch__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_246_246, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 605 "lookup_switch.m"
            }
#line 605 "lookup_switch.m"
            {
#line 605 "lookup_switch.m"
              ll_backend__lookup_switch__V_245_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 605 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 1) = ((MR_Box) (ll_backend__lookup_switch__V_246_246));
#line 605 "lookup_switch.m"
            }
#line 604 "lookup_switch.m"
            {
#line 604 "lookup_switch.m"
              ll_backend__lookup_switch__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 0) = ((MR_Box) (ll_backend__lookup_switch__V_245_245));
#line 604 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
#line 604 "lookup_switch.m"
            }
#line 604 "lookup_switch.m"
            {
#line 604 "lookup_switch.m"
              ll_backend__lookup_switch__GotoEndCode_61 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ((MR_Box) (ll_backend__lookup_switch__V_244_244)));
            }
#line 608 "lookup_switch.m"
            {
#line 608 "lookup_switch.m"
              ll_backend__lookup_switch__KindCode_59 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ll_backend__lookup_switch__BranchEndCode_60, ll_backend__lookup_switch__GotoEndCode_61);
            }
#line 597 "lookup_switch.m"
          }
#line 596 "lookup_switch.m"
        else
#line 596 "lookup_switch.m"
          if ((ll_backend__lookup_switch__Kind_41 == (MR_Integer) 2))
#line 610 "lookup_switch.m"
            {
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_293_293;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_294_294;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__Globals_62;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumeMap_63;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FlushCode_64;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MinOffsetColumnRval_65;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaxOffsetColumnRval_66;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveSlotsCode_67;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveTicketCode_68;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeTicketSlot_69;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ReclaimHeap_70;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveHpCode_71;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeHpSlot_72;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HijackInfo_73;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__PrepareHijackCode_74;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__DisjEntry_75;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePoint_76;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UpdateRedoipCode_77;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstFlushResumeVarsCode_78;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstZombies_79;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstBranchEndCode_80;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePointCode_81;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreTicketCode_82;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreHpCode_83;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBaseReg_84;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoLabel_85;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabel_86;
#line 610 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__NumOutVars_87;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TestMoreSolnsCode_88;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoHijackCode_89;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabelCode_90;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterFlushResumeVarsCode_92;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterZombies_93;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBranchEndCode_94;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_106_106;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_107_107;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_108_108;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_109_109;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_110_110;
#line 610 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_111_111;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_113_113;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_114_114;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_115_115;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_116_116;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_117_117;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_118_118;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_120_120;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_122_122;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_123_123;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_124_124;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_125_125;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_126_126;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_132_132;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_134_134;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_137_137;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_141_141;
#line 610 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_142_142;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_145_145;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_146_146;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_147_147;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_148_148;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_149_149;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_150_150;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_151_151;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_152_152;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_153_153;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_154_154;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_156_156;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_157_157;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_160_160;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_161_161;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_162_162;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_163_163;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_164_164;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_165_165;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_166_166;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_168_168;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_169_169;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_170_170;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_171_171;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_173_173;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_174_174;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_175_175;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_177_177;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_178_178;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_179_179;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_180_180;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_183_183;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_184_184;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_186_186;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_187_187;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_188_188;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_189_189;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_191_191;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_192_192;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_193_193;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_196_196;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_197_197;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_198_198;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_199_199;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_201_201;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_202_202;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_203_203;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_204_204;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_205_205;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_212_212;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_214_214;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_215_215;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_216_216;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_217_217;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_218_218;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_221_221;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_222_222;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_223_223;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_224_224;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_225_225;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_226_226;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_227_227;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_228_228;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_229_229;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_230_230;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_231_231;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_232_232;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_233_233;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_234_234;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_235_235;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_236_236;
#line 610 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__GotoEndCode_291;
#line 701 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch___LaterUpdateRedoipCode_91;

#line 611 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 612 "lookup_switch.m"
              {
#line 612 "lookup_switch.m"
                ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__Globals_62);
              }
#line 613 "lookup_switch.m"
              {
#line 613 "lookup_switch.m"
                ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_106_106);
              }
#line 3165 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_293_293 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 618 "lookup_switch.m"
              {
#line 618 "lookup_switch.m"
                ll_backend__lookup_switch__V_107_107 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 618 "lookup_switch.m"
              {
#line 618 "lookup_switch.m"
                ll_backend__code_info__produce_vars_5_p_0(ll_backend__lookup_switch__V_107_107, &ll_backend__lookup_switch__ResumeMap_63, &ll_backend__lookup_switch__FlushCode_64, ll_backend__lookup_switch__STATE_VARIABLE_CI_106_106, &ll_backend__lookup_switch__STATE_VARIABLE_CI_108_108);
              }
#line 619 "lookup_switch.m"
              {
#line 619 "lookup_switch.m"
                ll_backend__lookup_switch__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_109_109, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 619 "lookup_switch.m"
              }
#line 619 "lookup_switch.m"
              {
#line 619 "lookup_switch.m"
                ll_backend__lookup_switch__MinOffsetColumnRval_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_65, 1) = ((MR_Box) (ll_backend__lookup_switch__V_109_109));
#line 619 "lookup_switch.m"
              }
#line 620 "lookup_switch.m"
              ll_backend__lookup_switch__V_111_111 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 1);
#line 620 "lookup_switch.m"
              {
#line 620 "lookup_switch.m"
                ll_backend__lookup_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_110_110, 0) = ((MR_Box) (ll_backend__lookup_switch__V_111_111));
#line 620 "lookup_switch.m"
              }
#line 620 "lookup_switch.m"
              {
#line 620 "lookup_switch.m"
                ll_backend__lookup_switch__MaxOffsetColumnRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 620 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_66, 1) = ((MR_Box) (ll_backend__lookup_switch__V_110_110));
#line 620 "lookup_switch.m"
              }
#line 3215 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_294_294 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 623 "lookup_switch.m"
              ll_backend__lookup_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0]);
#line 623 "lookup_switch.m"
              {
#line 623 "lookup_switch.m"
                ll_backend__lookup_switch__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 623 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_120_120, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 623 "lookup_switch.m"
              }
#line 623 "lookup_switch.m"
              {
#line 623 "lookup_switch.m"
                ll_backend__lookup_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 623 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 623 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_117_117, 1) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
#line 623 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_117_117, 2) = ((MR_Box) (ll_backend__lookup_switch__V_120_120));
#line 623 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_117_117, 3) = ((MR_Box) (ll_backend__lookup_switch__MinOffsetColumnRval_65));
#line 623 "lookup_switch.m"
              }
#line 622 "lookup_switch.m"
              {
#line 622 "lookup_switch.m"
                ll_backend__lookup_switch__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 622 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_116_116, 0) = ((MR_Box) (ll_backend__lookup_switch__V_117_117));
#line 622 "lookup_switch.m"
              }
#line 622 "lookup_switch.m"
              {
#line 622 "lookup_switch.m"
                ll_backend__lookup_switch__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 622 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 622 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_115_115, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 622 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_115_115, 2) = ((MR_Box) (ll_backend__lookup_switch__V_116_116));
#line 622 "lookup_switch.m"
              }
#line 624 "lookup_switch.m"
              {
#line 624 "lookup_switch.m"
                ll_backend__lookup_switch__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_114_114, 0) = ((MR_Box) (ll_backend__lookup_switch__V_115_115));
#line 624 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_114_114, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
#line 624 "lookup_switch.m"
              }
#line 626 "lookup_switch.m"
              {
#line 626 "lookup_switch.m"
                ll_backend__lookup_switch__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 626 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 626 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_126_126, 1) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
#line 626 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_126_126, 2) = ((MR_Box) (ll_backend__lookup_switch__V_120_120));
#line 626 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_126_126, 3) = ((MR_Box) (ll_backend__lookup_switch__MaxOffsetColumnRval_66));
#line 626 "lookup_switch.m"
              }
#line 625 "lookup_switch.m"
              {
#line 625 "lookup_switch.m"
                ll_backend__lookup_switch__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 625 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_125_125, 0) = ((MR_Box) (ll_backend__lookup_switch__V_126_126));
#line 625 "lookup_switch.m"
              }
#line 625 "lookup_switch.m"
              {
#line 625 "lookup_switch.m"
                ll_backend__lookup_switch__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 625 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 625 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_124_124, 1) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 625 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_124_124, 2) = ((MR_Box) (ll_backend__lookup_switch__V_125_125));
#line 625 "lookup_switch.m"
              }
#line 628 "lookup_switch.m"
              {
#line 628 "lookup_switch.m"
                ll_backend__lookup_switch__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_123_123, 0) = ((MR_Box) (ll_backend__lookup_switch__V_124_124));
#line 628 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_123_123, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
#line 628 "lookup_switch.m"
              }
#line 624 "lookup_switch.m"
              {
#line 624 "lookup_switch.m"
                ll_backend__lookup_switch__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_122_122, 0) = ((MR_Box) (ll_backend__lookup_switch__V_123_123));
#line 624 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "lookup_switch.m"
              }
#line 621 "lookup_switch.m"
              {
#line 621 "lookup_switch.m"
                ll_backend__lookup_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_113_113, 0) = ((MR_Box) (ll_backend__lookup_switch__V_114_114));
#line 621 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_113_113, 1) = ((MR_Box) (ll_backend__lookup_switch__V_122_122));
#line 621 "lookup_switch.m"
              }
#line 621 "lookup_switch.m"
              {
#line 621 "lookup_switch.m"
                ll_backend__lookup_switch__SaveSlotsCode_67 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__V_113_113);
              }
#line 629 "lookup_switch.m"
              {
#line 629 "lookup_switch.m"
                ll_backend__code_info__maybe_save_ticket_5_p_0(ll_backend__lookup_switch__AddTrailOps_9, &ll_backend__lookup_switch__SaveTicketCode_68, &ll_backend__lookup_switch__MaybeTicketSlot_69, ll_backend__lookup_switch__STATE_VARIABLE_CI_108_108, &ll_backend__lookup_switch__STATE_VARIABLE_CI_132_132);
              }
#line 630 "lookup_switch.m"
              {
#line 630 "lookup_switch.m"
                libs__globals__lookup_bool_option_3_p_0(ll_backend__lookup_switch__Globals_62, (MR_Integer) 306, &ll_backend__lookup_switch__ReclaimHeap_70);
              }
#line 632 "lookup_switch.m"
              {
#line 632 "lookup_switch.m"
                ll_backend__code_info__maybe_save_hp_5_p_0(ll_backend__lookup_switch__ReclaimHeap_70, &ll_backend__lookup_switch__SaveHpCode_71, &ll_backend__lookup_switch__MaybeHpSlot_72, ll_backend__lookup_switch__STATE_VARIABLE_CI_132_132, &ll_backend__lookup_switch__STATE_VARIABLE_CI_134_134);
              }
#line 633 "lookup_switch.m"
              {
#line 633 "lookup_switch.m"
                ll_backend__code_info__prepare_for_disj_hijack_5_p_0((MR_Integer) 2, &ll_backend__lookup_switch__HijackInfo_73, &ll_backend__lookup_switch__PrepareHijackCode_74, ll_backend__lookup_switch__STATE_VARIABLE_CI_134_134, &ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136);
              }
#line 635 "lookup_switch.m"
              {
#line 635 "lookup_switch.m"
                ll_backend__code_info__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, &ll_backend__lookup_switch__DisjEntry_75);
              }
#line 639 "lookup_switch.m"
              {
#line 639 "lookup_switch.m"
                ll_backend__lookup_switch__V_137_137 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 639 "lookup_switch.m"
              {
#line 639 "lookup_switch.m"
                ll_backend__code_info__make_resume_point_6_p_0(ll_backend__lookup_switch__V_137_137, (MR_Integer) 1, ll_backend__lookup_switch__ResumeMap_63, &ll_backend__lookup_switch__ResumePoint_76, ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, &ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139);
              }
#line 641 "lookup_switch.m"
              {
#line 641 "lookup_switch.m"
                ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_76, (MR_Integer) 2, &ll_backend__lookup_switch__UpdateRedoipCode_77, ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, &ll_backend__lookup_switch__STATE_VARIABLE_CI_141_141);
              }
#line 642 "lookup_switch.m"
              ll_backend__lookup_switch__V_142_142 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 642 "lookup_switch.m"
              {
#line 642 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_142_142, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_141_141, &ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143);
              }
#line 643 "lookup_switch.m"
              {
#line 643 "lookup_switch.m"
                ll_backend__code_info__flush_resume_vars_to_stack_3_p_0(&ll_backend__lookup_switch__FirstFlushResumeVarsCode_78, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CI_145_145);
              }
#line 649 "lookup_switch.m"
              {
#line 649 "lookup_switch.m"
                ll_backend__code_info__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_145_145, &ll_backend__lookup_switch__STATE_VARIABLE_CI_146_146);
              }
#line 650 "lookup_switch.m"
              {
#line 650 "lookup_switch.m"
                ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__lookup_switch__FirstZombies_79, ll_backend__lookup_switch__STATE_VARIABLE_CI_146_146, &ll_backend__lookup_switch__STATE_VARIABLE_CI_147_147);
              }
#line 651 "lookup_switch.m"
              {
#line 651 "lookup_switch.m"
                ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__FirstZombies_79, ll_backend__lookup_switch__STATE_VARIABLE_CI_147_147, &ll_backend__lookup_switch__STATE_VARIABLE_CI_148_148);
              }
#line 653 "lookup_switch.m"
              {
#line 653 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_149_149, &ll_backend__lookup_switch__FirstBranchEndCode_80, ll_backend__lookup_switch__STATE_VARIABLE_CI_148_148, &ll_backend__lookup_switch__STATE_VARIABLE_CI_150_150);
              }
#line 655 "lookup_switch.m"
              {
#line 655 "lookup_switch.m"
                ll_backend__code_info__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_150_150, &ll_backend__lookup_switch__STATE_VARIABLE_CI_151_151);
              }
#line 658 "lookup_switch.m"
              {
#line 658 "lookup_switch.m"
                ll_backend__lookup_switch__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_154_154, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 658 "lookup_switch.m"
              }
#line 658 "lookup_switch.m"
              {
#line 658 "lookup_switch.m"
                ll_backend__lookup_switch__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 658 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_153_153, 1) = ((MR_Box) (ll_backend__lookup_switch__V_154_154));
#line 658 "lookup_switch.m"
              }
#line 657 "lookup_switch.m"
              {
#line 657 "lookup_switch.m"
                ll_backend__lookup_switch__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_152_152, 0) = ((MR_Box) (ll_backend__lookup_switch__V_153_153));
#line 657 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_152_152, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
#line 657 "lookup_switch.m"
              }
#line 657 "lookup_switch.m"
              {
#line 657 "lookup_switch.m"
                ll_backend__lookup_switch__GotoEndCode_291 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ((MR_Box) (ll_backend__lookup_switch__V_152_152)));
              }
#line 662 "lookup_switch.m"
              {
#line 662 "lookup_switch.m"
                ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_switch__DisjEntry_75, ll_backend__lookup_switch__STATE_VARIABLE_CI_151_151, &ll_backend__lookup_switch__STATE_VARIABLE_CI_156_156);
              }
#line 663 "lookup_switch.m"
              {
#line 663 "lookup_switch.m"
                ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__lookup_switch__ResumePoint_76, &ll_backend__lookup_switch__ResumePointCode_81, ll_backend__lookup_switch__STATE_VARIABLE_CI_156_156, &ll_backend__lookup_switch__STATE_VARIABLE_CI_157_157);
              }
#line 665 "lookup_switch.m"
              {
#line 665 "lookup_switch.m"
                ll_backend__code_info__maybe_reset_ticket_3_p_0(ll_backend__lookup_switch__MaybeTicketSlot_69, (MR_Integer) 0, &ll_backend__lookup_switch__RestoreTicketCode_82);
              }
#line 667 "lookup_switch.m"
              {
#line 667 "lookup_switch.m"
                ll_backend__code_info__maybe_restore_hp_2_p_0(ll_backend__lookup_switch__MaybeHpSlot_72, &ll_backend__lookup_switch__RestoreHpCode_83);
              }
#line 669 "lookup_switch.m"
              {
#line 669 "lookup_switch.m"
                ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_7, (MR_Integer) 0, &ll_backend__lookup_switch__LaterBaseReg_84, ll_backend__lookup_switch__STATE_VARIABLE_CI_157_157, &ll_backend__lookup_switch__STATE_VARIABLE_CI_160_160);
              }
#line 670 "lookup_switch.m"
              {
#line 670 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__UndoLabel_85, ll_backend__lookup_switch__STATE_VARIABLE_CI_160_160, &ll_backend__lookup_switch__STATE_VARIABLE_CI_161_161);
              }
#line 671 "lookup_switch.m"
              {
#line 671 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__AfterUndoLabel_86, ll_backend__lookup_switch__STATE_VARIABLE_CI_161_161, &ll_backend__lookup_switch__STATE_VARIABLE_CI_162_162);
              }
#line 672 "lookup_switch.m"
              {
#line 672 "lookup_switch.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_3, &ll_backend__lookup_switch__NumOutVars_87);
              }
#line 674 "lookup_switch.m"
              {
#line 674 "lookup_switch.m"
                ll_backend__lookup_switch__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 674 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_166_166, 0) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 674 "lookup_switch.m"
              }
#line 674 "lookup_switch.m"
              {
#line 674 "lookup_switch.m"
                ll_backend__lookup_switch__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 674 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 674 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_165_165, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_84));
#line 674 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_165_165, 2) = ((MR_Box) (ll_backend__lookup_switch__V_166_166));
#line 674 "lookup_switch.m"
              }
#line 675 "lookup_switch.m"
              {
#line 675 "lookup_switch.m"
                ll_backend__lookup_switch__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_164_164, 0) = ((MR_Box) (ll_backend__lookup_switch__V_165_165));
#line 675 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_164_164, 1) = ((MR_Box) ((MR_String) "Init later base register"));
#line 675 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_173_173, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_84));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_174_174, 0) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_171_171, 2) = ((MR_Box) (ll_backend__lookup_switch__V_173_173));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_171_171, 3) = ((MR_Box) (ll_backend__lookup_switch__V_174_174));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_175_175, 0) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_85));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_170_170, 1) = ((MR_Box) (ll_backend__lookup_switch__V_171_171));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_170_170, 2) = ((MR_Box) (ll_backend__lookup_switch__V_175_175));
#line 676 "lookup_switch.m"
              }
#line 678 "lookup_switch.m"
              {
#line 678 "lookup_switch.m"
                ll_backend__lookup_switch__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_169_169, 0) = ((MR_Box) (ll_backend__lookup_switch__V_170_170));
#line 678 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_169_169, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
#line 678 "lookup_switch.m"
              }
#line 680 "lookup_switch.m"
              {
#line 680 "lookup_switch.m"
                ll_backend__lookup_switch__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_184_184, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_87));
#line 680 "lookup_switch.m"
              }
#line 680 "lookup_switch.m"
              {
#line 680 "lookup_switch.m"
                ll_backend__lookup_switch__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 680 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 1) = ((MR_Box) (ll_backend__lookup_switch__V_184_184));
#line 680 "lookup_switch.m"
              }
#line 679 "lookup_switch.m"
              {
#line 679 "lookup_switch.m"
                ll_backend__lookup_switch__V_180_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_180_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_180_180, 2) = ((MR_Box) (ll_backend__lookup_switch__V_166_166));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_180_180, 3) = ((MR_Box) (ll_backend__lookup_switch__V_183_183));
#line 679 "lookup_switch.m"
              }
#line 679 "lookup_switch.m"
              {
#line 679 "lookup_switch.m"
                ll_backend__lookup_switch__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_179_179, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 679 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_179_179, 2) = ((MR_Box) (ll_backend__lookup_switch__V_180_180));
#line 679 "lookup_switch.m"
              }
#line 681 "lookup_switch.m"
              {
#line 681 "lookup_switch.m"
                ll_backend__lookup_switch__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 681 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_178_178, 0) = ((MR_Box) (ll_backend__lookup_switch__V_179_179));
#line 681 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_178_178, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
#line 681 "lookup_switch.m"
              }
#line 682 "lookup_switch.m"
              {
#line 682 "lookup_switch.m"
                ll_backend__lookup_switch__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 0) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_86));
#line 682 "lookup_switch.m"
              }
#line 682 "lookup_switch.m"
              {
#line 682 "lookup_switch.m"
                ll_backend__lookup_switch__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_188_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 682 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_188_188, 1) = ((MR_Box) (ll_backend__lookup_switch__V_189_189));
#line 682 "lookup_switch.m"
              }
#line 683 "lookup_switch.m"
              {
#line 683 "lookup_switch.m"
                ll_backend__lookup_switch__V_187_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_187_187, 0) = ((MR_Box) (ll_backend__lookup_switch__V_188_188));
#line 683 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_187_187, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
#line 683 "lookup_switch.m"
              }
#line 684 "lookup_switch.m"
              {
#line 684 "lookup_switch.m"
                ll_backend__lookup_switch__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 684 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_193_193, 1) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_85));
#line 684 "lookup_switch.m"
              }
#line 686 "lookup_switch.m"
              {
#line 686 "lookup_switch.m"
                ll_backend__lookup_switch__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_192_192, 0) = ((MR_Box) (ll_backend__lookup_switch__V_193_193));
#line 686 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_192_192, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
#line 686 "lookup_switch.m"
              }
#line 683 "lookup_switch.m"
              {
#line 683 "lookup_switch.m"
                ll_backend__lookup_switch__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_191_191, 0) = ((MR_Box) (ll_backend__lookup_switch__V_192_192));
#line 683 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "lookup_switch.m"
              }
#line 681 "lookup_switch.m"
              {
#line 681 "lookup_switch.m"
                ll_backend__lookup_switch__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_186_186, 0) = ((MR_Box) (ll_backend__lookup_switch__V_187_187));
#line 681 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_186_186, 1) = ((MR_Box) (ll_backend__lookup_switch__V_191_191));
#line 681 "lookup_switch.m"
              }
#line 678 "lookup_switch.m"
              {
#line 678 "lookup_switch.m"
                ll_backend__lookup_switch__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_177_177, 0) = ((MR_Box) (ll_backend__lookup_switch__V_178_178));
#line 678 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_177_177, 1) = ((MR_Box) (ll_backend__lookup_switch__V_186_186));
#line 678 "lookup_switch.m"
              }
#line 675 "lookup_switch.m"
              {
#line 675 "lookup_switch.m"
                ll_backend__lookup_switch__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_168_168, 0) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
#line 675 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_168_168, 1) = ((MR_Box) (ll_backend__lookup_switch__V_177_177));
#line 675 "lookup_switch.m"
              }
#line 673 "lookup_switch.m"
              {
#line 673 "lookup_switch.m"
                ll_backend__lookup_switch__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_163_163, 0) = ((MR_Box) (ll_backend__lookup_switch__V_164_164));
#line 673 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_163_163, 1) = ((MR_Box) (ll_backend__lookup_switch__V_168_168));
#line 673 "lookup_switch.m"
              }
#line 673 "lookup_switch.m"
              {
#line 673 "lookup_switch.m"
                ll_backend__lookup_switch__TestMoreSolnsCode_88 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__V_163_163);
              }
#line 687 "lookup_switch.m"
              {
#line 687 "lookup_switch.m"
                ll_backend__code_info__undo_disj_hijack_4_p_0(ll_backend__lookup_switch__HijackInfo_73, &ll_backend__lookup_switch__UndoHijackCode_89, ll_backend__lookup_switch__STATE_VARIABLE_CI_162_162, &ll_backend__lookup_switch__STATE_VARIABLE_CI_196_196);
              }
#line 689 "lookup_switch.m"
              {
#line 689 "lookup_switch.m"
                ll_backend__lookup_switch__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 689 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_199_199, 1) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_86));
#line 689 "lookup_switch.m"
              }
#line 690 "lookup_switch.m"
              {
#line 690 "lookup_switch.m"
                ll_backend__lookup_switch__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_198_198, 0) = ((MR_Box) (ll_backend__lookup_switch__V_199_199));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_198_198, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
#line 690 "lookup_switch.m"
              }
#line 692 "lookup_switch.m"
              {
#line 692 "lookup_switch.m"
                ll_backend__lookup_switch__V_205_205 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 692 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_205_205, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddrRval_13));
#line 692 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_205_205, 1) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
#line 692 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_205_205, 2) = ((MR_Box) (ll_backend__lookup_switch__V_173_173));
#line 692 "lookup_switch.m"
              }
#line 691 "lookup_switch.m"
              {
#line 691 "lookup_switch.m"
                ll_backend__lookup_switch__V_204_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_204_204, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_204_204, 1) = ((MR_Box) (ll_backend__lookup_switch__V_205_205));
#line 691 "lookup_switch.m"
              }
#line 691 "lookup_switch.m"
              {
#line 691 "lookup_switch.m"
                ll_backend__lookup_switch__V_203_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_203_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_203_203, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_84));
#line 691 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_203_203, 2) = ((MR_Box) (ll_backend__lookup_switch__V_204_204));
#line 691 "lookup_switch.m"
              }
#line 695 "lookup_switch.m"
              {
#line 695 "lookup_switch.m"
                ll_backend__lookup_switch__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_202_202, 0) = ((MR_Box) (ll_backend__lookup_switch__V_203_203));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_202_202, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
#line 695 "lookup_switch.m"
              }
#line 690 "lookup_switch.m"
              {
#line 690 "lookup_switch.m"
                ll_backend__lookup_switch__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_201_201, 0) = ((MR_Box) (ll_backend__lookup_switch__V_202_202));
#line 690 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_201_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "lookup_switch.m"
              }
#line 688 "lookup_switch.m"
              {
#line 688 "lookup_switch.m"
                ll_backend__lookup_switch__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_197_197, 0) = ((MR_Box) (ll_backend__lookup_switch__V_198_198));
#line 688 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_197_197, 1) = ((MR_Box) (ll_backend__lookup_switch__V_201_201));
#line 688 "lookup_switch.m"
              }
#line 688 "lookup_switch.m"
              {
#line 688 "lookup_switch.m"
                ll_backend__lookup_switch__AfterUndoLabelCode_90 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__V_197_197);
              }
#line 701 "lookup_switch.m"
              {
#line 701 "lookup_switch.m"
                ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_76, (MR_Integer) 2, &ll_backend__lookup_switch___LaterUpdateRedoipCode_91, ll_backend__lookup_switch__STATE_VARIABLE_CI_196_196, &ll_backend__lookup_switch__STATE_VARIABLE_CI_212_212);
              }
#line 704 "lookup_switch.m"
              {
#line 704 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__lookup_switch__OutVars_3, (MR_Integer) 0, ll_backend__lookup_switch__LaterBaseReg_84, ll_backend__lookup_switch__STATE_VARIABLE_CI_212_212, &ll_backend__lookup_switch__STATE_VARIABLE_CI_214_214);
              }
#line 705 "lookup_switch.m"
              {
#line 705 "lookup_switch.m"
                ll_backend__code_info__flush_resume_vars_to_stack_3_p_0(&ll_backend__lookup_switch__LaterFlushResumeVarsCode_92, ll_backend__lookup_switch__STATE_VARIABLE_CI_214_214, &ll_backend__lookup_switch__STATE_VARIABLE_CI_215_215);
              }
#line 711 "lookup_switch.m"
              {
#line 711 "lookup_switch.m"
                ll_backend__code_info__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_215_215, &ll_backend__lookup_switch__STATE_VARIABLE_CI_216_216);
              }
#line 712 "lookup_switch.m"
              {
#line 712 "lookup_switch.m"
                ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__lookup_switch__LaterZombies_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_216_216, &ll_backend__lookup_switch__STATE_VARIABLE_CI_217_217);
              }
#line 713 "lookup_switch.m"
              {
#line 713 "lookup_switch.m"
                ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__LaterZombies_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_217_217, &ll_backend__lookup_switch__STATE_VARIABLE_CI_218_218);
              }
#line 715 "lookup_switch.m"
              {
#line 715 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_149_149, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241, &ll_backend__lookup_switch__LaterBranchEndCode_94, ll_backend__lookup_switch__STATE_VARIABLE_CI_218_218, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
              }
#line 724 "lookup_switch.m"
              {
#line 724 "lookup_switch.m"
                ll_backend__lookup_switch__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__LaterBranchEndCode_94, ll_backend__lookup_switch__GotoEndCode_291);
              }
#line 723 "lookup_switch.m"
              {
#line 723 "lookup_switch.m"
                ll_backend__lookup_switch__V_235_235 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__LaterFlushResumeVarsCode_92, ll_backend__lookup_switch__V_236_236);
              }
#line 723 "lookup_switch.m"
              {
#line 723 "lookup_switch.m"
                ll_backend__lookup_switch__V_234_234 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__AfterUndoLabelCode_90, ll_backend__lookup_switch__V_235_235);
              }
#line 723 "lookup_switch.m"
              {
#line 723 "lookup_switch.m"
                ll_backend__lookup_switch__V_233_233 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__UndoHijackCode_89, ll_backend__lookup_switch__V_234_234);
              }
#line 722 "lookup_switch.m"
              {
#line 722 "lookup_switch.m"
                ll_backend__lookup_switch__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__TestMoreSolnsCode_88, ll_backend__lookup_switch__V_233_233);
              }
#line 722 "lookup_switch.m"
              {
#line 722 "lookup_switch.m"
                ll_backend__lookup_switch__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__RestoreHpCode_83, ll_backend__lookup_switch__V_232_232);
              }
#line 721 "lookup_switch.m"
              {
#line 721 "lookup_switch.m"
                ll_backend__lookup_switch__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__RestoreTicketCode_82, ll_backend__lookup_switch__V_231_231);
              }
#line 721 "lookup_switch.m"
              {
#line 721 "lookup_switch.m"
                ll_backend__lookup_switch__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__ResumePointCode_81, ll_backend__lookup_switch__V_230_230);
              }
#line 721 "lookup_switch.m"
              {
#line 721 "lookup_switch.m"
                ll_backend__lookup_switch__V_228_228 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__GotoEndCode_291, ll_backend__lookup_switch__V_229_229);
              }
#line 720 "lookup_switch.m"
              {
#line 720 "lookup_switch.m"
                ll_backend__lookup_switch__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__FirstBranchEndCode_80, ll_backend__lookup_switch__V_228_228);
              }
#line 720 "lookup_switch.m"
              {
#line 720 "lookup_switch.m"
                ll_backend__lookup_switch__V_226_226 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__FirstFlushResumeVarsCode_78, ll_backend__lookup_switch__V_227_227);
              }
#line 719 "lookup_switch.m"
              {
#line 719 "lookup_switch.m"
                ll_backend__lookup_switch__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__UpdateRedoipCode_77, ll_backend__lookup_switch__V_226_226);
              }
#line 719 "lookup_switch.m"
              {
#line 719 "lookup_switch.m"
                ll_backend__lookup_switch__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__PrepareHijackCode_74, ll_backend__lookup_switch__V_225_225);
              }
#line 719 "lookup_switch.m"
              {
#line 719 "lookup_switch.m"
                ll_backend__lookup_switch__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__SaveHpCode_71, ll_backend__lookup_switch__V_224_224);
              }
#line 718 "lookup_switch.m"
              {
#line 718 "lookup_switch.m"
                ll_backend__lookup_switch__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__SaveTicketCode_68, ll_backend__lookup_switch__V_223_223);
              }
#line 718 "lookup_switch.m"
              {
#line 718 "lookup_switch.m"
                ll_backend__lookup_switch__V_221_221 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__SaveSlotsCode_67, ll_backend__lookup_switch__V_222_222);
              }
#line 718 "lookup_switch.m"
              {
#line 718 "lookup_switch.m"
                ll_backend__lookup_switch__KindCode_59 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_294_294, ll_backend__lookup_switch__FlushCode_64, ll_backend__lookup_switch__V_221_221);
              }
#line 610 "lookup_switch.m"
            }
#line 596 "lookup_switch.m"
          else
#line 591 "lookup_switch.m"
            {
#line 591 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_248_248;
#line 591 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_249_249;

#line 592 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 593 "lookup_switch.m"
              {
#line 593 "lookup_switch.m"
                ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_248_248);
              }
#line 594 "lookup_switch.m"
              {
#line 594 "lookup_switch.m"
                ll_backend__code_info__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_248_248, &ll_backend__lookup_switch__STATE_VARIABLE_CI_249_249);
              }
#line 595 "lookup_switch.m"
              {
#line 595 "lookup_switch.m"
                ll_backend__code_info__generate_failure_3_p_0(&ll_backend__lookup_switch__KindCode_59, ll_backend__lookup_switch__STATE_VARIABLE_CI_249_249, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
              }
#line 595 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14;
#line 591 "lookup_switch.m"
            }
#line 729 "lookup_switch.m"
        if ((ll_backend__lookup_switch__Kinds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "lookup_switch.m"
          {
#line 728 "lookup_switch.m"
            *ll_backend__lookup_switch__Code_16 = ll_backend__lookup_switch__KindCode_59;
#line 728 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241;
#line 728 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_CI_18 = ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;
#line 727 "lookup_switch.m"
          }
#line 729 "lookup_switch.m"
        else
#line 730 "lookup_switch.m"
          {
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TypeCtorInfo_296_296;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKind_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 0)));
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabel_97;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestRval_98;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestCode_99;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabelCode_100;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__LaterKindsCode_101;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_252_252;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_253_253;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_256_256;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_257_257;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_258_258;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_262_262;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_263_263;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_264_264;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_265_265;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_267_267;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_268_268;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_269_269;
#line 730 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_270_270;
#line 730 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_272_272;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_275_275;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_276_276;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_277_277;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_279_279;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_280_280;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_281_281;
#line 730 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_282_282;
#line 730 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_284_284;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_289_289;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_290_290;
#line 730 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 1)));

#line 731 "lookup_switch.m"
            {
#line 731 "lookup_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__NextKindLabel_97, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, &ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251);
            }
#line 733 "lookup_switch.m"
            {
#line 733 "lookup_switch.m"
              ll_backend__lookup_switch__V_256_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_256_256, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 733 "lookup_switch.m"
            }
#line 734 "lookup_switch.m"
            {
#line 734 "lookup_switch.m"
              ll_backend__lookup_switch__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_258_258, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 734 "lookup_switch.m"
            }
#line 733 "lookup_switch.m"
            {
#line 733 "lookup_switch.m"
              ll_backend__lookup_switch__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 1) = ((MR_Box) (ll_backend__lookup_switch__V_258_258));
#line 733 "lookup_switch.m"
            }
#line 733 "lookup_switch.m"
            {
#line 733 "lookup_switch.m"
              ll_backend__lookup_switch__V_253_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 2) = ((MR_Box) (ll_backend__lookup_switch__V_256_256));
#line 733 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 3) = ((MR_Box) (ll_backend__lookup_switch__V_257_257));
#line 733 "lookup_switch.m"
            }
#line 732 "lookup_switch.m"
            {
#line 732 "lookup_switch.m"
              ll_backend__lookup_switch__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 732 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_252_252, 0) = ((MR_Box) (ll_backend__lookup_switch__V_253_253));
#line 732 "lookup_switch.m"
            }
#line 732 "lookup_switch.m"
            {
#line 732 "lookup_switch.m"
              ll_backend__lookup_switch__TestRval_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 732 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 732 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_98, 1) = ((MR_Box) (ll_backend__lookup_switch__TestOp_58));
#line 732 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_98, 2) = ((MR_Box) (ll_backend__lookup_switch__V_252_252));
#line 732 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_98, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12])));
#line 732 "lookup_switch.m"
            }
#line 4133 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_296_296 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 737 "lookup_switch.m"
            {
#line 737 "lookup_switch.m"
              ll_backend__lookup_switch__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_265_265, 0) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_97));
#line 737 "lookup_switch.m"
            }
#line 737 "lookup_switch.m"
            {
#line 737 "lookup_switch.m"
              ll_backend__lookup_switch__V_264_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 737 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 737 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 1) = ((MR_Box) (ll_backend__lookup_switch__TestRval_98));
#line 737 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 2) = ((MR_Box) (ll_backend__lookup_switch__V_265_265));
#line 737 "lookup_switch.m"
            }
#line 738 "lookup_switch.m"
            {
#line 738 "lookup_switch.m"
              ll_backend__lookup_switch__V_263_263 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 738 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 0) = ((MR_Box) (ll_backend__lookup_switch__V_264_264));
#line 738 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
#line 738 "lookup_switch.m"
            }
#line 739 "lookup_switch.m"
            {
#line 739 "lookup_switch.m"
              ll_backend__lookup_switch__V_272_272 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__Kind_41);
            }
#line 739 "lookup_switch.m"
            {
#line 739 "lookup_switch.m"
              ll_backend__lookup_switch__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", ll_backend__lookup_switch__V_272_272);
            }
#line 739 "lookup_switch.m"
            {
#line 739 "lookup_switch.m"
              ll_backend__lookup_switch__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_269_269, 0) = ((MR_Box) (ll_backend__lookup_switch__V_270_270));
#line 739 "lookup_switch.m"
            }
#line 741 "lookup_switch.m"
            {
#line 741 "lookup_switch.m"
              ll_backend__lookup_switch__V_268_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 0) = ((MR_Box) (ll_backend__lookup_switch__V_269_269));
#line 741 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 1) = ((MR_Box) ((MR_String) ""));
#line 741 "lookup_switch.m"
            }
#line 738 "lookup_switch.m"
            {
#line 738 "lookup_switch.m"
              ll_backend__lookup_switch__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 0) = ((MR_Box) (ll_backend__lookup_switch__V_268_268));
#line 738 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "lookup_switch.m"
            }
#line 736 "lookup_switch.m"
            {
#line 736 "lookup_switch.m"
              ll_backend__lookup_switch__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 0) = ((MR_Box) (ll_backend__lookup_switch__V_263_263));
#line 736 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 1) = ((MR_Box) (ll_backend__lookup_switch__V_267_267));
#line 736 "lookup_switch.m"
            }
#line 736 "lookup_switch.m"
            {
#line 736 "lookup_switch.m"
              ll_backend__lookup_switch__TestCode_99 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_296_296, ll_backend__lookup_switch__V_262_262);
            }
#line 743 "lookup_switch.m"
            {
#line 743 "lookup_switch.m"
              ll_backend__lookup_switch__V_277_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 743 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 1) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_97));
#line 743 "lookup_switch.m"
            }
#line 744 "lookup_switch.m"
            {
#line 744 "lookup_switch.m"
              ll_backend__lookup_switch__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 0) = ((MR_Box) (ll_backend__lookup_switch__V_277_277));
#line 744 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
#line 744 "lookup_switch.m"
            }
#line 746 "lookup_switch.m"
            {
#line 746 "lookup_switch.m"
              ll_backend__lookup_switch__V_284_284 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__NextKind_95);
            }
#line 745 "lookup_switch.m"
            {
#line 745 "lookup_switch.m"
              ll_backend__lookup_switch__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", ll_backend__lookup_switch__V_284_284);
            }
#line 745 "lookup_switch.m"
            {
#line 745 "lookup_switch.m"
              ll_backend__lookup_switch__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_281_281, 0) = ((MR_Box) (ll_backend__lookup_switch__V_282_282));
#line 745 "lookup_switch.m"
            }
#line 748 "lookup_switch.m"
            {
#line 748 "lookup_switch.m"
              ll_backend__lookup_switch__V_280_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 0) = ((MR_Box) (ll_backend__lookup_switch__V_281_281));
#line 748 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 1) = ((MR_Box) ((MR_String) ""));
#line 748 "lookup_switch.m"
            }
#line 744 "lookup_switch.m"
            {
#line 744 "lookup_switch.m"
              ll_backend__lookup_switch__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 0) = ((MR_Box) (ll_backend__lookup_switch__V_280_280));
#line 744 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "lookup_switch.m"
            }
#line 742 "lookup_switch.m"
            {
#line 742 "lookup_switch.m"
              ll_backend__lookup_switch__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 0) = ((MR_Box) (ll_backend__lookup_switch__V_276_276));
#line 742 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 1) = ((MR_Box) (ll_backend__lookup_switch__V_279_279));
#line 742 "lookup_switch.m"
            }
#line 742 "lookup_switch.m"
            {
#line 742 "lookup_switch.m"
              ll_backend__lookup_switch__NextKindLabelCode_100 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_296_296, ll_backend__lookup_switch__V_275_275);
            }
#line 749 "lookup_switch.m"
            {
#line 749 "lookup_switch.m"
              ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_42, ll_backend__lookup_switch__NumPrevColumns_2, ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__ResumeVars_4, ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__EndLabel_6, ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__AddTrailOps_9, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__CurSlot_11, ll_backend__lookup_switch__MaxSlot_12, ll_backend__lookup_switch__LaterVectorAddrRval_13, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_241_241, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15, &ll_backend__lookup_switch__LaterKindsCode_101, ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251, ll_backend__lookup_switch__STATE_VARIABLE_CI_18);
            }
#line 753 "lookup_switch.m"
            {
#line 753 "lookup_switch.m"
              ll_backend__lookup_switch__V_290_290 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_296_296, ll_backend__lookup_switch__NextKindLabelCode_100, ll_backend__lookup_switch__LaterKindsCode_101);
            }
#line 753 "lookup_switch.m"
            {
#line 753 "lookup_switch.m"
              ll_backend__lookup_switch__V_289_289 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_296_296, ll_backend__lookup_switch__KindCode_59, ll_backend__lookup_switch__V_290_290);
            }
#line 753 "lookup_switch.m"
            {
#line 753 "lookup_switch.m"
              *ll_backend__lookup_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_296_296, ll_backend__lookup_switch__TestCode_99, ll_backend__lookup_switch__V_289_289);
            }
#line 730 "lookup_switch.m"
          }
#line 589 "lookup_switch.m"
      }
#line 584 "lookup_switch.m"
  }
#line 576 "lookup_switch.m"
}

#line 570 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 570 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 570 "lookup_switch.m"
{
#line 572 "lookup_switch.m"
  {
#line 572 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 572 "lookup_switch.m"
    MR_String ll_backend__lookup_switch__HeadVar__2_2;

#line 572 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 1))
#line 573 "lookup_switch.m"
      ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_one_soln";
#line 572 "lookup_switch.m"
    else
#line 572 "lookup_switch.m"
      if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 2))
#line 574 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_several_solns";
#line 572 "lookup_switch.m"
      else
#line 572 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_zero_solns";
#line 572 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 572 "lookup_switch.m"
  }
#line 570 "lookup_switch.m"
}

#line 493 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_3(
#line 493 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 493 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 493 "lookup_switch.m"
{
#line 493 "lookup_switch.m"
  {
#line 493 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 493 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 493 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 493 "lookup_switch.m"
    {
#line 493 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 493 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 493 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 493 "lookup_switch.m"
  }
#line 493 "lookup_switch.m"
}

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_2(
#line 483 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 483 "lookup_switch.m"
{
#line 483 "lookup_switch.m"
  {
#line 483 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 483 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))));
    }
#line 483 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 483 "lookup_switch.m"
  }
#line 483 "lookup_switch.m"
}

#line 483 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_1(
#line 483 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 483 "lookup_switch.m"
{
#line 483 "lookup_switch.m"
  {
#line 483 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 483 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      return ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__483__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 4))));
    }
#line 483 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 483 "lookup_switch.m"
  }
#line 483 "lookup_switch.m"
}

#line 470 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0(
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_18,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_19,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_20,
#line 470 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_21,
#line 470 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_22,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_23,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_24,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_25,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_26,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_27,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_28,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_29,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_57,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_31,
#line 470 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_58,
#line 470 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_59)
#line 470 "lookup_switch.m"
{
#line 480 "lookup_switch.m"
  {
#line 480 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_115_115;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_119_119;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_120_120;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_123_123;
#line 480 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__NumOutTypes_33;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DummyLaterSolnRow_35;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord0_36;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRows_37;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord_38;
#line 480 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__FailCaseCount_39;
#line 480 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__OneSolnCaseCount_40;
#line 480 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__SeveralSolnCaseCount_41;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArray_42;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRowTypes_43;
#line 480 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__MainNumColumns_44;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddr_45;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddrRval_46;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddr_47;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_48;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__AscendingSortedCountKinds_49;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedCountKinds_50;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedKinds_51;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseReg_52;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_53;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__KindsCode_54;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__EndLabelCode_55;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_60_60;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_64_64;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_75_75;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_77_77;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_78_78;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_81_81;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_83_83;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_84_84;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_86_86;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_87_87;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_89_89;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_90_90;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_95_95;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_96_96;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_97_97;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_98_98;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_101_101;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_103_103;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_104_104;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_109_109;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_110_110;
#line 480 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_112_112;
#line 504 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_70_70;
#line 503 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_113_113;

#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      ll_backend__lookup_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_64_64, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_5[1]));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_64_64, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_1));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_64_64, 3) = ((MR_Box) (ll_backend__lookup_switch__OutVars_26));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_64_64, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "lookup_switch.m"
    }
#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      ll_backend__lookup_switch__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_60_60, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0]));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_60_60, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0_2));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 483 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_60_60, 3) = ((MR_Box) (ll_backend__lookup_switch__V_64_64));
#line 483 "lookup_switch.m"
    }
#line 483 "lookup_switch.m"
    {
#line 483 "lookup_switch.m"
      mercury__require__expect_4_p_0(ll_backend__lookup_switch__V_60_60, (MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/17", (MR_String) "no OutVars");
    }
#line 4622 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_115_115 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 491 "lookup_switch.m"
    {
#line 491 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_115_115, ll_backend__lookup_switch__OutTypes_27, &ll_backend__lookup_switch__NumOutTypes_33);
    }
#line 493 "lookup_switch.m"
    {
#line 493 "lookup_switch.m"
      ll_backend__lookup_switch__DummyLaterSolnRow_35 = mercury__list__map_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_115_115, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[2], ll_backend__lookup_switch__OutTypes_27);
    }
#line 4634 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_119_119 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 494 "lookup_switch.m"
    {
#line 494 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArrayCord0_36 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeInfo_119_119, ((MR_Box) (ll_backend__lookup_switch__DummyLaterSolnRow_35)));
    }
#line 495 "lookup_switch.m"
    {
#line 495 "lookup_switch.m"
      ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__StartVal_21, ll_backend__lookup_switch__EndVal_22, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__NumOutTypes_33, ll_backend__lookup_switch__CaseSolns_23, &ll_backend__lookup_switch__MainRows_37, (MR_Integer) 1, ll_backend__lookup_switch__LaterSolnArrayCord0_36, &ll_backend__lookup_switch__LaterSolnArrayCord_38, (MR_Integer) 0, &ll_backend__lookup_switch__FailCaseCount_39, (MR_Integer) 0, &ll_backend__lookup_switch__OneSolnCaseCount_40, (MR_Integer) 0, &ll_backend__lookup_switch__SeveralSolnCaseCount_41);
    }
#line 499 "lookup_switch.m"
    {
#line 499 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArray_42 = mercury__cord__list_1_f_0(ll_backend__lookup_switch__TypeInfo_119_119, ll_backend__lookup_switch__LaterSolnArrayCord_38);
    }
#line 502 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_28 == (MR_Integer) 0);
#line 503 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 503 "lookup_switch.m"
      {
#line 504 "lookup_switch.m"
        ll_backend__lookup_switch__V_70_70 = (MR_Integer) 0;
#line 504 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_39 > ll_backend__lookup_switch__V_70_70);
#line 503 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 503 "lookup_switch.m"
      }
#line 503 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 503 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 503 "lookup_switch.m"
      {
#line 504 "lookup_switch.m"
        ll_backend__lookup_switch__V_113_113 = (MR_Integer) 0;
#line 504 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_39 > ll_backend__lookup_switch__V_113_113);
#line 503 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 503 "lookup_switch.m"
          {
#line 502 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_28 == (MR_Integer) 0);
#line 503 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 503 "lookup_switch.m"
          }
#line 503 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 503 "lookup_switch.m"
      }
#line 508 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 507 "lookup_switch.m"
      {
#line 507 "lookup_switch.m"
      }
#line 508 "lookup_switch.m"
    else
#line 509 "lookup_switch.m"
      {
#line 509 "lookup_switch.m"
        {
#line 509 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/17", (MR_String) "bad FailCaseCount");
#line 509 "lookup_switch.m"
          return;
        }
#line 509 "lookup_switch.m"
      }
#line 512 "lookup_switch.m"
    {
#line 512 "lookup_switch.m"
      ll_backend__lookup_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_75_75, 0) = ((MR_Box) ((MR_Integer) 7));
#line 512 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_75_75, 1) = ((MR_Box) (ll_backend__lookup_switch__OutTypes_27));
#line 512 "lookup_switch.m"
    }
#line 512 "lookup_switch.m"
    {
#line 512 "lookup_switch.m"
      ll_backend__lookup_switch__MainRowTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_43, 0) = ((MR_Box) ((MR_Integer) 7));
#line 512 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_43, 1) = ((MR_Box) (ll_backend__lookup_switch__V_75_75));
#line 512 "lookup_switch.m"
    }
#line 513 "lookup_switch.m"
    {
#line 513 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_115_115, ll_backend__lookup_switch__MainRowTypes_43, &ll_backend__lookup_switch__MainNumColumns_44);
    }
#line 514 "lookup_switch.m"
    {
#line 514 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__MainRowTypes_43, ll_backend__lookup_switch__MainRows_37, &ll_backend__lookup_switch__MainVectorAddr_45, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_58, &ll_backend__lookup_switch__STATE_VARIABLE_CI_77_77);
    }
#line 515 "lookup_switch.m"
    {
#line 515 "lookup_switch.m"
      ll_backend__lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 515 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 515 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_78_78, 1) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddr_45));
#line 515 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_78_78, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "lookup_switch.m"
    }
#line 515 "lookup_switch.m"
    {
#line 515 "lookup_switch.m"
      ll_backend__lookup_switch__MainVectorAddrRval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_46, 1) = ((MR_Box) (ll_backend__lookup_switch__V_78_78));
#line 515 "lookup_switch.m"
    }
#line 516 "lookup_switch.m"
    {
#line 516 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__LaterSolnArray_42, &ll_backend__lookup_switch__LaterVectorAddr_47, ll_backend__lookup_switch__STATE_VARIABLE_CI_77_77, &ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80);
    }
#line 517 "lookup_switch.m"
    {
#line 517 "lookup_switch.m"
      ll_backend__lookup_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 517 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddr_47));
#line 517 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "lookup_switch.m"
    }
#line 517 "lookup_switch.m"
    {
#line 517 "lookup_switch.m"
      ll_backend__lookup_switch__LaterVectorAddrRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_48, 1) = ((MR_Box) (ll_backend__lookup_switch__V_81_81));
#line 517 "lookup_switch.m"
    }
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      ll_backend__lookup_switch__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_84_84, 0) = ((MR_Box) (ll_backend__lookup_switch__FailCaseCount_39));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_84_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 519 "lookup_switch.m"
    }
#line 520 "lookup_switch.m"
    {
#line 520 "lookup_switch.m"
      ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__OneSolnCaseCount_40));
#line 520 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 1) = ((MR_Box) ((MR_Integer) 1));
#line 520 "lookup_switch.m"
    }
#line 521 "lookup_switch.m"
    {
#line 521 "lookup_switch.m"
      ll_backend__lookup_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 0) = ((MR_Box) (ll_backend__lookup_switch__SeveralSolnCaseCount_41));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 1) = ((MR_Box) ((MR_Integer) 2));
#line 521 "lookup_switch.m"
    }
#line 520 "lookup_switch.m"
    {
#line 520 "lookup_switch.m"
      ll_backend__lookup_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 0) = ((MR_Box) (ll_backend__lookup_switch__V_90_90));
#line 520 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "lookup_switch.m"
    }
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 1) = ((MR_Box) (ll_backend__lookup_switch__V_89_89));
#line 519 "lookup_switch.m"
    }
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      ll_backend__lookup_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_83_83, 0) = ((MR_Box) (ll_backend__lookup_switch__V_84_84));
#line 519 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_83_83, 1) = ((MR_Box) (ll_backend__lookup_switch__V_86_86));
#line 519 "lookup_switch.m"
    }
#line 4847 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_120_120 = (MR_Word) &ll_backend__lookup_switch_scalar_common_2[0];
#line 519 "lookup_switch.m"
    {
#line 519 "lookup_switch.m"
      mercury__list__sort_2_p_0(ll_backend__lookup_switch__TypeInfo_120_120, ll_backend__lookup_switch__V_83_83, &ll_backend__lookup_switch__AscendingSortedCountKinds_49);
    }
#line 522 "lookup_switch.m"
    {
#line 522 "lookup_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__lookup_switch__TypeInfo_120_120, ll_backend__lookup_switch__AscendingSortedCountKinds_49, &ll_backend__lookup_switch__DescendingSortedCountKinds_50);
    }
#line 523 "lookup_switch.m"
    {
#line 523 "lookup_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__lookup_switch__DescendingSortedCountKinds_50, &ll_backend__lookup_switch__DescendingSortedKinds_51);
    }
#line 528 "lookup_switch.m"
    {
#line 528 "lookup_switch.m"
      ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_20, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_52, ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
    }
#line 4869 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_123_123 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 536 "lookup_switch.m"
    {
#line 536 "lookup_switch.m"
      ll_backend__lookup_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_104_104, 0) = ((MR_Box) (ll_backend__lookup_switch__MainNumColumns_44));
#line 536 "lookup_switch.m"
    }
#line 534 "lookup_switch.m"
    {
#line 534 "lookup_switch.m"
      ll_backend__lookup_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_103_103, 1) = ((MR_Box) (ll_backend__lookup_switch__V_104_104));
#line 534 "lookup_switch.m"
    }
#line 533 "lookup_switch.m"
    {
#line 533 "lookup_switch.m"
      ll_backend__lookup_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_101_101, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_18));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_101_101, 3) = ((MR_Box) (ll_backend__lookup_switch__V_103_103));
#line 533 "lookup_switch.m"
    }
#line 533 "lookup_switch.m"
    {
#line 533 "lookup_switch.m"
      ll_backend__lookup_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_98_98, 0) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddrRval_46));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 533 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_98_98, 2) = ((MR_Box) (ll_backend__lookup_switch__V_101_101));
#line 533 "lookup_switch.m"
    }
#line 532 "lookup_switch.m"
    {
#line 532 "lookup_switch.m"
      ll_backend__lookup_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 532 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_97_97, 1) = ((MR_Box) (ll_backend__lookup_switch__V_98_98));
#line 532 "lookup_switch.m"
    }
#line 531 "lookup_switch.m"
    {
#line 531 "lookup_switch.m"
      ll_backend__lookup_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 531 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 531 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_96_96, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_52));
#line 531 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_96_96, 2) = ((MR_Box) (ll_backend__lookup_switch__V_97_97));
#line 531 "lookup_switch.m"
    }
#line 530 "lookup_switch.m"
    {
#line 530 "lookup_switch.m"
      ll_backend__lookup_switch__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_95_95, 0) = ((MR_Box) (ll_backend__lookup_switch__V_96_96));
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_95_95, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 530 "lookup_switch.m"
    }
#line 530 "lookup_switch.m"
    {
#line 530 "lookup_switch.m"
      ll_backend__lookup_switch__BaseRegInitCode_53 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_123_123, ((MR_Box) (ll_backend__lookup_switch__V_95_95)));
    }
#line 540 "lookup_switch.m"
    {
#line 540 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_15_p_0(ll_backend__lookup_switch__DescendingSortedKinds_51, (MR_Integer) 0, ll_backend__lookup_switch__OutVars_26, ll_backend__lookup_switch__ResumeVars_24, ll_backend__lookup_switch__EndLabel_19, ll_backend__lookup_switch__StoreMap_20, ll_backend__lookup_switch__Liveness_29, ll_backend__lookup_switch__AddTrailOps_25, ll_backend__lookup_switch__BaseReg_52, ll_backend__lookup_switch__LaterVectorAddrRval_48, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_56, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_57, &ll_backend__lookup_switch__KindsCode_54, ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94, ll_backend__lookup_switch__STATE_VARIABLE_CI_59);
    }
#line 544 "lookup_switch.m"
    {
#line 544 "lookup_switch.m"
      ll_backend__lookup_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 544 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_110_110, 1) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_19));
#line 544 "lookup_switch.m"
    }
#line 543 "lookup_switch.m"
    {
#line 543 "lookup_switch.m"
      ll_backend__lookup_switch__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_109_109, 0) = ((MR_Box) (ll_backend__lookup_switch__V_110_110));
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_109_109, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
#line 543 "lookup_switch.m"
    }
#line 543 "lookup_switch.m"
    {
#line 543 "lookup_switch.m"
      ll_backend__lookup_switch__EndLabelCode_55 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_123_123, ((MR_Box) (ll_backend__lookup_switch__V_109_109)));
    }
#line 547 "lookup_switch.m"
    {
#line 547 "lookup_switch.m"
      ll_backend__lookup_switch__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_123_123, ll_backend__lookup_switch__KindsCode_54, ll_backend__lookup_switch__EndLabelCode_55);
    }
#line 547 "lookup_switch.m"
    {
#line 547 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_31 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_123_123, ll_backend__lookup_switch__BaseRegInitCode_53, ll_backend__lookup_switch__V_112_112);
    }
#line 480 "lookup_switch.m"
  }
#line 470 "lookup_switch.m"
}

#line 458 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 458 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 458 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 458 "lookup_switch.m"
{
#line 458 "lookup_switch.m"
  {
#line 458 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 458 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 458 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 458 "lookup_switch.m"
    {
#line 458 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 458 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 458 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 458 "lookup_switch.m"
  }
#line 458 "lookup_switch.m"
}

#line 448 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 448 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 448 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 448 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5)
#line 448 "lookup_switch.m"
{
#line 452 "lookup_switch.m"
  while (MR_TRUE)
#line 452 "lookup_switch.m"
    {
#line 452 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 452 "lookup_switch.m"
      {
#line 452 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 452 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4;
#line 452 "lookup_switch.m"
        else
#line 454 "lookup_switch.m"
          {
#line 454 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Index_11;
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rvals_12;
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Row_17;
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Remainder_18;
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;
#line 454 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_25_25;

#line 453 "lookup_switch.m"
            ll_backend__lookup_switch__Index_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 0)));
#line 453 "lookup_switch.m"
            ll_backend__lookup_switch__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 1)));
#line 455 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_2 < ll_backend__lookup_switch__Index_11);
#line 460 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 458 "lookup_switch.m"
              {
#line 458 "lookup_switch.m"
                {
#line 458 "lookup_switch.m"
                  ll_backend__lookup_switch__Row_17 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[1], ll_backend__lookup_switch__OutTypes_3);
                }
#line 459 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__HeadVar__1_1;
#line 458 "lookup_switch.m"
              }
#line 460 "lookup_switch.m"
            else
#line 461 "lookup_switch.m"
              {
#line 461 "lookup_switch.m"
                ll_backend__lookup_switch__Row_17 = ll_backend__lookup_switch__Rvals_12;
#line 462 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__Rest_13;
#line 461 "lookup_switch.m"
              }
#line 464 "lookup_switch.m"
            {
#line 464 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 0) = ((MR_Box) (ll_backend__lookup_switch__Row_17));
#line 464 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 1) = ((MR_Box) (ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4));
#line 464 "lookup_switch.m"
            }
#line 465 "lookup_switch.m"
            ll_backend__lookup_switch__V_25_25 = (ll_backend__lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 465 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 465 "lookup_switch.m"
            {
#line 465 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Remainder_18;
#line 465 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__CurIndex__tmp_copy_2 = ll_backend__lookup_switch__V_25_25;
#line 465 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;

#line 465 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4;
#line 465 "lookup_switch.m"
              ll_backend__lookup_switch__CurIndex_2 = ll_backend__lookup_switch__CurIndex__tmp_copy_2;
#line 465 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 465 "lookup_switch.m"
            }
#line 465 "lookup_switch.m"
            continue;
#line 454 "lookup_switch.m"
          }
#line 452 "lookup_switch.m"
      }
#line 452 "lookup_switch.m"
      break;
#line 452 "lookup_switch.m"
    }
#line 448 "lookup_switch.m"
}

#line 303 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 303 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 303 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 303 "lookup_switch.m"
{
#line 309 "lookup_switch.m"
  {
#line 309 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 309 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 309 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__Index_12;
#line 310 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 311 "lookup_switch.m"
    void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 311 "lookup_switch.m"
    {
#line 311 "lookup_switch.m"
      ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__GetTag_6), ((MR_Box) (ll_backend__lookup_switch__ConsTag_11)), &ll_backend__lookup_switch__Index_12);
    }
#line 312 "lookup_switch.m"
    {
#line 312 "lookup_switch.m"
      mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_16, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_12, ((MR_Box) (ll_backend__lookup_switch__SolnConsts_7)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 312 "lookup_switch.m"
      return;
    }
#line 309 "lookup_switch.m"
  }
#line 303 "lookup_switch.m"
}

#line 290 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 290 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 290 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5)
#line 290 "lookup_switch.m"
{
#line 295 "lookup_switch.m"
  while (MR_TRUE)
#line 295 "lookup_switch.m"
    {
#line 295 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 295 "lookup_switch.m"
      {
#line 295 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 295 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4;
#line 295 "lookup_switch.m"
        else
#line 297 "lookup_switch.m"
          {
#line 297 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 297 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 297 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;
#line 297 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__ConsTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 1)));
#line 297 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__Index_29;
#line 310 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch___ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 0)));
#line 311 "lookup_switch.m"
            void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));

#line 311 "lookup_switch.m"
            {
#line 311 "lookup_switch.m"
              ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__HeadVar__1_1), ((MR_Box) (ll_backend__lookup_switch__ConsTag_28)), &ll_backend__lookup_switch__Index_29);
            }
#line 312 "lookup_switch.m"
            {
#line 312 "lookup_switch.m"
              mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_20, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_29, ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_2)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18);
            }
#line 300 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 300 "lookup_switch.m"
            {
#line 300 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__3__tmp_copy_3 = ll_backend__lookup_switch__TaggedConsIds_14;
#line 300 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;

#line 300 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4;
#line 300 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__3_3 = ll_backend__lookup_switch__HeadVar__3__tmp_copy_3;
#line 300 "lookup_switch.m"
            }
#line 300 "lookup_switch.m"
            continue;
#line 297 "lookup_switch.m"
          }
#line 295 "lookup_switch.m"
      }
#line 295 "lookup_switch.m"
      break;
#line 295 "lookup_switch.m"
    }
#line 290 "lookup_switch.m"
}

#line 215 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_16_p_0(
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_104,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_7,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_8,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_9,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_10,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_12,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_13,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_14,
#line 215 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_15,
#line 215 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_16)
#line 215 "lookup_switch.m"
{
#line 223 "lookup_switch.m"
  {
#line 223 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 223 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "lookup_switch.m"
      {
#line 223 "lookup_switch.m"
        {
#line 223 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 223 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_16 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_15;
#line 223 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_14 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_13;
#line 223 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_12 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11;
#line 223 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_10 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_9;
#line 223 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_8 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_7;
#line 223 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 223 "lookup_switch.m"
      }
#line 223 "lookup_switch.m"
    else
#line 228 "lookup_switch.m"
      {
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCase_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedMainConsId_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_37, (MR_Integer) 0)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedOtherConsIds_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_37, (MR_Integer) 1)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Goal_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_37, (MR_Integer) 3)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalExpr_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_51, (MR_Integer) 0)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_51, (MR_Integer) 1)));
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Features_54;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__SolnConsts_66;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_82_82;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_83_83;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_88_88;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_91_91;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_97_97;
#line 228 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_98_98;
#line 229 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_37, (MR_Integer) 2)));
#line 235 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeCtorInfo_107_107;
#line 235 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_80_80;
#line 273 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Disjuncts_55;
#line 286 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch___LivenessRest_68;

#line 233 "lookup_switch.m"
        {
#line 233 "lookup_switch.m"
          ll_backend__lookup_switch__Features_54 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__lookup_switch__GoalInfo_53);
        }
#line 234 "lookup_switch.m"
        {
#line 234 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__lookup_switch__Features_54);
        }
#line 234 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 228 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 228 "lookup_switch.m"
          {
#line 235 "lookup_switch.m"
            ll_backend__lookup_switch__V_80_80 = (MR_Integer) 7;
#line 5419 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0;
#line 235 "lookup_switch.m"
            {
#line 235 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_107_107, ((MR_Box) (ll_backend__lookup_switch__V_80_80)), ll_backend__lookup_switch__Features_54);
            }
#line 235 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 228 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 228 "lookup_switch.m"
              {
#line 237 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__lookup_switch__GoalExpr_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_52, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 237 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 237 "lookup_switch.m"
                  {
#line 237 "lookup_switch.m"
                    ll_backend__lookup_switch__Disjuncts_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_52, (MR_Integer) 1)));
#line 243 "lookup_switch.m"
                    if ((ll_backend__lookup_switch__Disjuncts_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "lookup_switch.m"
                      {
#line 242 "lookup_switch.m"
                        {
#line 242 "lookup_switch.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/16", (MR_String) "disj([])");
                        }
#line 239 "lookup_switch.m"
                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 239 "lookup_switch.m"
                      }
#line 243 "lookup_switch.m"
                    else
#line 244 "lookup_switch.m"
                      {
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunct_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_55, (MR_Integer) 0)));
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterDisjuncts_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_55, (MR_Integer) 1)));
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunctGoalInfo_59;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__ThisResumePoint_60;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__InstMap_63;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstSoln_64;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterSolns_65;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_81_81;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_84_84;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_85_85;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_86_86;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_87_87;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_89_89;
#line 244 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_90_90;
#line 250 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_58_58;

#line 245 "lookup_switch.m"
                        {
#line 245 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__FirstDisjunct_56);
                        }
#line 244 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 244 "lookup_switch.m"
                          {
#line 246 "lookup_switch.m"
                            {
#line 246 "lookup_switch.m"
                              ll_backend__lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__LaterDisjuncts_57);
                            }
#line 244 "lookup_switch.m"
                            if (ll_backend__lookup_switch__succeeded)
#line 244 "lookup_switch.m"
                              {
#line 248 "lookup_switch.m"
                                {
#line 248 "lookup_switch.m"
                                  ll_backend__lookup_switch__V_81_81 = hlds__goal_form__goal_may_modify_trail_1_f_0(ll_backend__lookup_switch__GoalInfo_53);
                                }
#line 248 "lookup_switch.m"
                                {
#line 248 "lookup_switch.m"
                                  mercury__bool__or_3_p_0(ll_backend__lookup_switch__V_81_81, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_13, &ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_82_82);
                                }
#line 250 "lookup_switch.m"
                                ll_backend__lookup_switch__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_56, (MR_Integer) 0)));
#line 250 "lookup_switch.m"
                                ll_backend__lookup_switch__FirstDisjunctGoalInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_56, (MR_Integer) 1)));
#line 251 "lookup_switch.m"
                                {
#line 251 "lookup_switch.m"
                                  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__lookup_switch__FirstDisjunctGoalInfo_59, &ll_backend__lookup_switch__ThisResumePoint_60);
                                }
#line 255 "lookup_switch.m"
                                if ((ll_backend__lookup_switch__ThisResumePoint_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "lookup_switch.m"
                                  ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_83_83 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11;
#line 255 "lookup_switch.m"
                                else
#line 253 "lookup_switch.m"
                                  {
#line 253 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__ThisResumeVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_60, (MR_Integer) 0)));
#line 253 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_60, (MR_Integer) 1)));

#line 254 "lookup_switch.m"
                                    {
#line 254 "lookup_switch.m"
                                      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_switch__ThisResumeVars_61, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11, &ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_83_83);
                                    }
#line 253 "lookup_switch.m"
                                  }
#line 263 "lookup_switch.m"
                                ll_backend__lookup_switch__V_84_84 = (MR_Integer) 0;
#line 263 "lookup_switch.m"
                                {
#line 263 "lookup_switch.m"
                                  ll_backend__code_info__pre_goal_update_4_p_0(ll_backend__lookup_switch__GoalInfo_53, ll_backend__lookup_switch__V_84_84, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_15, &ll_backend__lookup_switch__STATE_VARIABLE_CI_85_85);
                                }
#line 264 "lookup_switch.m"
                                {
#line 264 "lookup_switch.m"
                                  ll_backend__code_info__get_instmap_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_85_85, &ll_backend__lookup_switch__InstMap_63);
                                }
#line 265 "lookup_switch.m"
                                {
#line 265 "lookup_switch.m"
                                  ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_9_p_0(ll_backend__lookup_switch__FirstDisjunct_56, ll_backend__lookup_switch__HeadVar__3_3, ll_backend__lookup_switch__HeadVar__5_5, &ll_backend__lookup_switch__FirstSoln_64, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_9, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_86_86, ll_backend__lookup_switch__HeadVar__6_6, ll_backend__lookup_switch__STATE_VARIABLE_CI_85_85, &ll_backend__lookup_switch__STATE_VARIABLE_CI_87_87);
                                }
#line 244 "lookup_switch.m"
                                if (ll_backend__lookup_switch__succeeded)
#line 244 "lookup_switch.m"
                                  {
#line 267 "lookup_switch.m"
                                    {
#line 267 "lookup_switch.m"
                                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_8_p_0(ll_backend__lookup_switch__LaterDisjuncts_57, ll_backend__lookup_switch__HeadVar__3_3, ll_backend__lookup_switch__HeadVar__5_5, &ll_backend__lookup_switch__LaterSolns_65, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_86_86, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_88_88, ll_backend__lookup_switch__STATE_VARIABLE_CI_87_87, &ll_backend__lookup_switch__STATE_VARIABLE_CI_89_89);
                                    }
#line 244 "lookup_switch.m"
                                    if (ll_backend__lookup_switch__succeeded)
#line 244 "lookup_switch.m"
                                      {
#line 269 "lookup_switch.m"
                                        {
#line 269 "lookup_switch.m"
                                          ll_backend__code_info__set_instmap_3_p_0(ll_backend__lookup_switch__InstMap_63, ll_backend__lookup_switch__STATE_VARIABLE_CI_89_89, &ll_backend__lookup_switch__STATE_VARIABLE_CI_90_90);
                                        }
#line 270 "lookup_switch.m"
                                        {
#line 270 "lookup_switch.m"
                                          ll_backend__code_info__post_goal_update_3_p_0(ll_backend__lookup_switch__GoalInfo_53, ll_backend__lookup_switch__STATE_VARIABLE_CI_90_90, &ll_backend__lookup_switch__STATE_VARIABLE_CI_91_91);
                                        }
#line 271 "lookup_switch.m"
                                        {
#line 271 "lookup_switch.m"
                                          ll_backend__lookup_switch__SolnConsts_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_66, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstSoln_64));
#line 271 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_66, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterSolns_65));
#line 271 "lookup_switch.m"
                                        }
#line 271 "lookup_switch.m"
                                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 244 "lookup_switch.m"
                                      }
#line 244 "lookup_switch.m"
                                  }
#line 244 "lookup_switch.m"
                              }
#line 244 "lookup_switch.m"
                          }
#line 244 "lookup_switch.m"
                      }
#line 237 "lookup_switch.m"
                  }
#line 237 "lookup_switch.m"
                else
#line 274 "lookup_switch.m"
                  {
#line 274 "lookup_switch.m"
                    MR_Word ll_backend__lookup_switch__Soln_67;

#line 274 "lookup_switch.m"
                    {
#line 274 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__Goal_51);
                    }
#line 274 "lookup_switch.m"
                    if (ll_backend__lookup_switch__succeeded)
#line 274 "lookup_switch.m"
                      {
#line 278 "lookup_switch.m"
                        {
#line 278 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_arm_9_p_0(ll_backend__lookup_switch__Goal_51, ll_backend__lookup_switch__HeadVar__3_3, ll_backend__lookup_switch__HeadVar__5_5, &ll_backend__lookup_switch__Soln_67, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_9, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_88_88, ll_backend__lookup_switch__HeadVar__6_6, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_15, &ll_backend__lookup_switch__STATE_VARIABLE_CI_91_91);
                        }
#line 274 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 274 "lookup_switch.m"
                          {
#line 280 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_82_82 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_13;
#line 280 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_83_83 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_11;
#line 280 "lookup_switch.m"
                            {
#line 280 "lookup_switch.m"
                              ll_backend__lookup_switch__SolnConsts_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__SolnConsts_66, 0) = ((MR_Box) (ll_backend__lookup_switch__Soln_67));
#line 280 "lookup_switch.m"
                            }
#line 280 "lookup_switch.m"
                            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 274 "lookup_switch.m"
                          }
#line 274 "lookup_switch.m"
                      }
#line 274 "lookup_switch.m"
                  }
#line 228 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 228 "lookup_switch.m"
                  {
#line 282 "lookup_switch.m"
                    {
#line 282 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_104, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__SolnConsts_66, ll_backend__lookup_switch__TaggedMainConsId_48, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_7, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_97_97);
                    }
#line 284 "lookup_switch.m"
                    {
#line 284 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_104, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__SolnConsts_66, ll_backend__lookup_switch__TaggedOtherConsIds_49, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_97_97, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_98_98);
                    }
#line 286 "lookup_switch.m"
                    {
#line 286 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_16_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_104, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__TaggedCases_38, ll_backend__lookup_switch__HeadVar__3_3, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__5_5, &ll_backend__lookup_switch___LivenessRest_68, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_98_98, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_88_88, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_10, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_83_83, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_12, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_82_82, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_14, ll_backend__lookup_switch__STATE_VARIABLE_CI_91_91, ll_backend__lookup_switch__STATE_VARIABLE_CI_16);
                    }
#line 228 "lookup_switch.m"
                  }
#line 228 "lookup_switch.m"
              }
#line 228 "lookup_switch.m"
          }
#line 228 "lookup_switch.m"
      }
#line 223 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 223 "lookup_switch.m"
  }
#line 215 "lookup_switch.m"
}

#line 148 "lookup_switch.m"
MR_Word MR_CALL 
ll_backend__lookup_switch__default_value_for_type_1_f_0(
#line 148 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 148 "lookup_switch.m"
{
#line 918 "lookup_switch.m"
  {
#line 918 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 918 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HeadVar__2_2;

#line 918 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 0))
#line 918 "lookup_switch.m"
      {
#line 918 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 918 "lookup_switch.m"
      }
#line 918 "lookup_switch.m"
    else
#line 918 "lookup_switch.m"
      if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 12))
#line 930 "lookup_switch.m"
        {
#line 930 "lookup_switch.m"
          ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 930 "lookup_switch.m"
        }
#line 918 "lookup_switch.m"
      else
#line 918 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 11))
#line 929 "lookup_switch.m"
          {
#line 929 "lookup_switch.m"
            ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 929 "lookup_switch.m"
          }
#line 918 "lookup_switch.m"
        else
#line 918 "lookup_switch.m"
          if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 9))
#line 927 "lookup_switch.m"
            {
#line 927 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[14]);
#line 927 "lookup_switch.m"
            }
#line 918 "lookup_switch.m"
          else
#line 918 "lookup_switch.m"
            if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 3))
#line 921 "lookup_switch.m"
              {
#line 921 "lookup_switch.m"
                ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 921 "lookup_switch.m"
              }
#line 918 "lookup_switch.m"
            else
#line 918 "lookup_switch.m"
              if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 5))
#line 923 "lookup_switch.m"
                {
#line 923 "lookup_switch.m"
                  ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 923 "lookup_switch.m"
                }
#line 918 "lookup_switch.m"
              else
#line 918 "lookup_switch.m"
                if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 1))
#line 919 "lookup_switch.m"
                  {
#line 919 "lookup_switch.m"
                    ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 919 "lookup_switch.m"
                  }
#line 918 "lookup_switch.m"
                else
#line 918 "lookup_switch.m"
                  if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 7))
#line 925 "lookup_switch.m"
                    {
#line 925 "lookup_switch.m"
                      ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 925 "lookup_switch.m"
                    }
#line 918 "lookup_switch.m"
                  else
#line 918 "lookup_switch.m"
                    if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 10))
#line 928 "lookup_switch.m"
                      {
#line 928 "lookup_switch.m"
                        ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[16]);
#line 928 "lookup_switch.m"
                      }
#line 918 "lookup_switch.m"
                    else
#line 918 "lookup_switch.m"
                      if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 4))
#line 922 "lookup_switch.m"
                        {
#line 922 "lookup_switch.m"
                          ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 922 "lookup_switch.m"
                        }
#line 918 "lookup_switch.m"
                      else
#line 918 "lookup_switch.m"
                        if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 6))
#line 924 "lookup_switch.m"
                          {
#line 924 "lookup_switch.m"
                            ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 924 "lookup_switch.m"
                          }
#line 918 "lookup_switch.m"
                        else
#line 918 "lookup_switch.m"
                          if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 2))
#line 920 "lookup_switch.m"
                            {
#line 920 "lookup_switch.m"
                              ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 920 "lookup_switch.m"
                            }
#line 918 "lookup_switch.m"
                          else
#line 918 "lookup_switch.m"
                            if ((ll_backend__lookup_switch__HeadVar__1_1 == (MR_Integer) 8))
#line 926 "lookup_switch.m"
                              {
#line 926 "lookup_switch.m"
                                ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 926 "lookup_switch.m"
                              }
#line 918 "lookup_switch.m"
                            else
#line 931 "lookup_switch.m"
                              {
#line 931 "lookup_switch.m"
                                ll_backend__lookup_switch__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 931 "lookup_switch.m"
                              }
#line 918 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 918 "lookup_switch.m"
  }
#line 148 "lookup_switch.m"
}

#line 142 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_15_p_0(
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Kinds_16,
#line 142 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_17,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_18,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_19,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_20,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_21,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_22,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_23,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_24,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_25,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_32,
#line 142 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_33,
#line 142 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_27,
#line 142 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_34,
#line 142 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_35)
#line 142 "lookup_switch.m"
{
#line 551 "lookup_switch.m"
  {
#line 551 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CurSlot_29;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MaxSlot_30;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchStart_31;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_38_38;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 551 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43;

#line 559 "lookup_switch.m"
    {
#line 559 "lookup_switch.m"
      ll_backend__code_info__acquire_temp_slot_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 1, &ll_backend__lookup_switch__CurSlot_29, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_34, &ll_backend__lookup_switch__STATE_VARIABLE_CI_38_38);
    }
#line 561 "lookup_switch.m"
    {
#line 561 "lookup_switch.m"
      ll_backend__code_info__acquire_temp_slot_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 1, &ll_backend__lookup_switch__MaxSlot_30, ll_backend__lookup_switch__STATE_VARIABLE_CI_38_38, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41);
    }
#line 564 "lookup_switch.m"
    {
#line 564 "lookup_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__BranchStart_31);
    }
#line 565 "lookup_switch.m"
    {
#line 565 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_16, ll_backend__lookup_switch__NumPrevColumns_17, ll_backend__lookup_switch__OutVars_18, ll_backend__lookup_switch__ResumeVars_19, ll_backend__lookup_switch__BranchStart_31, ll_backend__lookup_switch__EndLabel_20, ll_backend__lookup_switch__StoreMap_21, ll_backend__lookup_switch__Liveness_22, ll_backend__lookup_switch__AddTrailOps_23, ll_backend__lookup_switch__BaseReg_24, ll_backend__lookup_switch__CurSlot_29, ll_backend__lookup_switch__MaxSlot_30, ll_backend__lookup_switch__LaterVectorAddrRval_25, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_32, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_33, ll_backend__lookup_switch__Code_27, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43);
    }
#line 568 "lookup_switch.m"
    {
#line 568 "lookup_switch.m"
      ll_backend__code_info__set_resume_point_to_unknown_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_43_43, ll_backend__lookup_switch__STATE_VARIABLE_CI_35);
#line 568 "lookup_switch.m"
      return;
    }
#line 551 "lookup_switch.m"
  }
#line 142 "lookup_switch.m"
}

#line 87 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_13_p_0(
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__VarRval_14,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LookupSwitchInfo_15,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_16,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_17,
#line 87 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_18,
#line 87 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_19,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_20,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedRangeCheck_21,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_41,
#line 87 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_42,
#line 87 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_23,
#line 87 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_43,
#line 87 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_44)
#line 87 "lookup_switch.m"
{
#line 318 "lookup_switch.m"
  {
#line 318 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__StartVal_18 == (MR_Integer) 0);
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_68_68;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_15, (MR_Integer) 0)));
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_15, (MR_Integer) 1)));
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_15, (MR_Integer) 2)));
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_15, (MR_Integer) 3)));
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__IndexRval_29;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RangeCheckCode_32;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Comment_34;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RestCode_35;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51;
#line 318 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_64_64;

#line 326 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 325 "lookup_switch.m"
      ll_backend__lookup_switch__IndexRval_29 = ll_backend__lookup_switch__VarRval_14;
#line 326 "lookup_switch.m"
    else
#line 327 "lookup_switch.m"
      {
#line 327 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_46_46;
#line 327 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_47_47;

#line 327 "lookup_switch.m"
        {
#line 327 "lookup_switch.m"
          ll_backend__lookup_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_47_47, 0) = ((MR_Box) (ll_backend__lookup_switch__StartVal_18));
#line 327 "lookup_switch.m"
        }
#line 327 "lookup_switch.m"
        {
#line 327 "lookup_switch.m"
          ll_backend__lookup_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_46_46, 1) = ((MR_Box) (ll_backend__lookup_switch__V_47_47));
#line 327 "lookup_switch.m"
        }
#line 327 "lookup_switch.m"
        {
#line 327 "lookup_switch.m"
          ll_backend__lookup_switch__IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_29, 2) = ((MR_Box) (ll_backend__lookup_switch__VarRval_14));
#line 327 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_29, 3) = ((MR_Box) (ll_backend__lookup_switch__V_46_46));
#line 327 "lookup_switch.m"
        }
#line 327 "lookup_switch.m"
      }
#line 338 "lookup_switch.m"
    if ((ll_backend__lookup_switch__NeedRangeCheck_21 == (MR_Integer) 1))
#line 339 "lookup_switch.m"
      {
#line 340 "lookup_switch.m"
        {
#line 340 "lookup_switch.m"
          ll_backend__lookup_switch__RangeCheckCode_32 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 340 "lookup_switch.m"
        ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_43;
#line 339 "lookup_switch.m"
      }
#line 338 "lookup_switch.m"
    else
#line 333 "lookup_switch.m"
      {
#line 333 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Difference_30 = (ll_backend__lookup_switch__EndVal_19 - ll_backend__lookup_switch__StartVal_18);
#line 333 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CmpRval_31;
#line 333 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_49_49;
#line 333 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_50_50;

#line 336 "lookup_switch.m"
        {
#line 336 "lookup_switch.m"
          ll_backend__lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_50_50, 0) = ((MR_Box) (ll_backend__lookup_switch__Difference_30));
#line 336 "lookup_switch.m"
        }
#line 335 "lookup_switch.m"
        {
#line 335 "lookup_switch.m"
          ll_backend__lookup_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_49_49, 1) = ((MR_Box) (ll_backend__lookup_switch__V_50_50));
#line 335 "lookup_switch.m"
        }
#line 335 "lookup_switch.m"
        {
#line 335 "lookup_switch.m"
          ll_backend__lookup_switch__CmpRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_31, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_29));
#line 335 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_31, 3) = ((MR_Box) (ll_backend__lookup_switch__V_49_49));
#line 335 "lookup_switch.m"
        }
#line 337 "lookup_switch.m"
        {
#line 337 "lookup_switch.m"
          ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__lookup_switch__CmpRval_31, &ll_backend__lookup_switch__RangeCheckCode_32, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_43, &ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51);
        }
#line 333 "lookup_switch.m"
      }
#line 351 "lookup_switch.m"
    if (((MR_tag((MR_Word) ll_backend__lookup_switch__CaseConsts_25)) == (MR_mktag((MR_Integer) 0))))
#line 344 "lookup_switch.m"
      {
#line 344 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseValues_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_25, (MR_Integer) 0)));

#line 345 "lookup_switch.m"
        {
#line 345 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[10])));
        }
#line 348 "lookup_switch.m"
        {
#line 348 "lookup_switch.m"
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_p_0(ll_backend__lookup_switch__IndexRval_29, ll_backend__lookup_switch__StoreMap_17, ll_backend__lookup_switch__StartVal_18, ll_backend__lookup_switch__CaseValues_33, ll_backend__lookup_switch__OutVars_26, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__NeedBitVecCheck_20, ll_backend__lookup_switch__Liveness_28, &ll_backend__lookup_switch__RestCode_35, ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51, ll_backend__lookup_switch__STATE_VARIABLE_CI_44);
        }
#line 348 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_42 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_41;
#line 344 "lookup_switch.m"
      }
#line 351 "lookup_switch.m"
    else
#line 353 "lookup_switch.m"
      {
#line 353 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseSolns_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_25, (MR_Integer) 0)));
#line 353 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__ResumeVars_37;
#line 353 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_38;
#line 353 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__AddTrailOps_40;
#line 353 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_25, (MR_Integer) 1)));

#line 352 "lookup_switch.m"
        ll_backend__lookup_switch__ResumeVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_52_52, (MR_Integer) 0)));
#line 352 "lookup_switch.m"
        ll_backend__lookup_switch__GoalsMayModifyTrail_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_52_52, (MR_Integer) 1)));
#line 358 "lookup_switch.m"
        if ((ll_backend__lookup_switch__GoalsMayModifyTrail_38 == (MR_Integer) 0))
#line 360 "lookup_switch.m"
          ll_backend__lookup_switch__AddTrailOps_40 = (MR_Integer) 1;
#line 358 "lookup_switch.m"
        else
#line 356 "lookup_switch.m"
          {
#line 356 "lookup_switch.m"
            ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51, &ll_backend__lookup_switch__AddTrailOps_40);
          }
#line 362 "lookup_switch.m"
        {
#line 362 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[11])));
        }
#line 365 "lookup_switch.m"
        {
#line 365 "lookup_switch.m"
          ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_p_0(ll_backend__lookup_switch__IndexRval_29, ll_backend__lookup_switch__EndLabel_16, ll_backend__lookup_switch__StoreMap_17, ll_backend__lookup_switch__StartVal_18, ll_backend__lookup_switch__EndVal_19, ll_backend__lookup_switch__CaseSolns_36, ll_backend__lookup_switch__ResumeVars_37, ll_backend__lookup_switch__AddTrailOps_40, ll_backend__lookup_switch__OutVars_26, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__NeedBitVecCheck_20, ll_backend__lookup_switch__Liveness_28, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_41, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_42, &ll_backend__lookup_switch__RestCode_35, ll_backend__lookup_switch__STATE_VARIABLE_CI_51_51, ll_backend__lookup_switch__STATE_VARIABLE_CI_44);
        }
#line 353 "lookup_switch.m"
      }
#line 6162 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_68_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 369 "lookup_switch.m"
    {
#line 369 "lookup_switch.m"
      ll_backend__lookup_switch__V_64_64 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_68_68, ll_backend__lookup_switch__RangeCheckCode_32, ll_backend__lookup_switch__RestCode_35);
    }
#line 369 "lookup_switch.m"
    {
#line 369 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_68_68, ll_backend__lookup_switch__Comment_34, ll_backend__lookup_switch__V_64_64);
    }
#line 318 "lookup_switch.m"
  }
#line 87 "lookup_switch.m"
}

#line 80 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_9_p_0(
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_45,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_10,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedCases_11,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GoalInfo_12,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_13,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_33,
#line 80 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_34,
#line 80 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__LookupSwitchInfo_15,
#line 80 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_35,
#line 80 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_36)
#line 80 "lookup_switch.m"
{
#line 179 "lookup_switch.m"
  {
#line 179 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_46_46;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_47_47;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_17;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ArmNonLocals_18;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CurPos_19;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_20;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolnMap_21;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ResumeVars_22;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_23;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolns_24;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarTypes_25;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_26;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_28;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValues_29;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ExprnOpts_30;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__UnboxFloats_31;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutLLDSTypes_32;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_37_37;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_39_39;
#line 179 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 199 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValuePairs_27;
#line 196 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_48_48;

#line 186 "lookup_switch.m"
    {
#line 186 "lookup_switch.m"
      ll_backend__lookup_util__figure_out_output_vars_3_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_35, ll_backend__lookup_switch__GoalInfo_12, &ll_backend__lookup_switch__OutVars_17);
    }
#line 6258 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 187 "lookup_switch.m"
    {
#line 187 "lookup_switch.m"
      parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_46_46, ll_backend__lookup_switch__OutVars_17, &ll_backend__lookup_switch__ArmNonLocals_18);
    }
#line 188 "lookup_switch.m"
    {
#line 188 "lookup_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_35, &ll_backend__lookup_switch__CurPos_19);
    }
#line 6270 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_47_47 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0];
#line 189 "lookup_switch.m"
    {
#line 189 "lookup_switch.m"
      ll_backend__lookup_switch__V_37_37 = mercury__map__init_0_f_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, ll_backend__lookup_switch__TypeInfo_47_47);
    }
#line 189 "lookup_switch.m"
    {
#line 189 "lookup_switch.m"
      ll_backend__lookup_switch__V_39_39 = parse_tree__set_of_var__init_0_f_0(ll_backend__lookup_switch__TypeCtorInfo_46_46);
    }
#line 189 "lookup_switch.m"
    {
#line 189 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_16_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, ll_backend__lookup_switch__GetTag_10, ll_backend__lookup_switch__TaggedCases_11, ll_backend__lookup_switch__OutVars_17, ll_backend__lookup_switch__ArmNonLocals_18, ll_backend__lookup_switch__StoreMap_13, &ll_backend__lookup_switch__Liveness_20, ll_backend__lookup_switch__V_37_37, &ll_backend__lookup_switch__CaseSolnMap_21, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_33, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_34, ll_backend__lookup_switch__V_39_39, &ll_backend__lookup_switch__ResumeVars_22, (MR_Integer) 0, &ll_backend__lookup_switch__GoalsMayModifyTrail_23, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_35, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41);
    }
#line 179 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 179 "lookup_switch.m"
      {
#line 192 "lookup_switch.m"
        {
#line 192 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, ll_backend__lookup_switch__TypeInfo_47_47, ll_backend__lookup_switch__CaseSolnMap_21, &ll_backend__lookup_switch__CaseSolns_24);
        }
#line 193 "lookup_switch.m"
        {
#line 193 "lookup_switch.m"
          ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_switch__CurPos_19, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, ll_backend__lookup_switch__STATE_VARIABLE_CI_36);
        }
#line 194 "lookup_switch.m"
        {
#line 194 "lookup_switch.m"
          ll_backend__lookup_switch__VarTypes_25 = ll_backend__code_info__get_var_types_1_f_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_36);
        }
#line 195 "lookup_switch.m"
        {
#line 195 "lookup_switch.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__lookup_switch__VarTypes_25, ll_backend__lookup_switch__OutVars_17, &ll_backend__lookup_switch__OutTypes_26);
        }
#line 6311 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 196 "lookup_switch.m"
        {
#line 196 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, ll_backend__lookup_switch__TypeCtorInfo_48_48, ll_backend__lookup_switch__CaseSolns_24, &ll_backend__lookup_switch__CaseValuePairs_27);
        }
#line 199 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 197 "lookup_switch.m"
          {
#line 197 "lookup_switch.m"
            {
#line 197 "lookup_switch.m"
              ll_backend__lookup_switch__CaseConsts_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 197 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_28, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseValuePairs_27));
#line 197 "lookup_switch.m"
            }
#line 198 "lookup_switch.m"
            {
#line 198 "lookup_switch.m"
              mercury__assoc_list__values_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__CaseValuePairs_27, &ll_backend__lookup_switch__CaseValues_29);
            }
#line 197 "lookup_switch.m"
          }
#line 199 "lookup_switch.m"
        else
#line 201 "lookup_switch.m"
          {
#line 201 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_43_43;

#line 200 "lookup_switch.m"
            {
#line 200 "lookup_switch.m"
              ll_backend__lookup_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_43_43, 0) = ((MR_Box) (ll_backend__lookup_switch__ResumeVars_22));
#line 200 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_43_43, 1) = ((MR_Box) (ll_backend__lookup_switch__GoalsMayModifyTrail_23));
#line 200 "lookup_switch.m"
            }
#line 200 "lookup_switch.m"
            {
#line 200 "lookup_switch.m"
              ll_backend__lookup_switch__CaseConsts_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_28, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseSolns_24));
#line 200 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_28, 1) = ((MR_Box) (ll_backend__lookup_switch__V_43_43));
#line 200 "lookup_switch.m"
            }
#line 205 "lookup_switch.m"
            {
#line 205 "lookup_switch.m"
              backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_45, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__lookup_switch__CaseSolns_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__CaseValues_29);
            }
#line 201 "lookup_switch.m"
          }
#line 207 "lookup_switch.m"
        {
#line 207 "lookup_switch.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_36, &ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 208 "lookup_switch.m"
        {
#line 208 "lookup_switch.m"
          ll_backend__lookup_switch__UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 209 "lookup_switch.m"
        {
#line 209 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__lookup_switch__UnboxFloats_31, ll_backend__lookup_switch__OutTypes_26, ll_backend__lookup_switch__CaseValues_29, &ll_backend__lookup_switch__OutLLDSTypes_32);
        }
#line 179 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 179 "lookup_switch.m"
          {
#line 210 "lookup_switch.m"
            {
#line 210 "lookup_switch.m"
              MR_Word base;
#line 210 "lookup_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 210 "lookup_switch.m"
              *ll_backend__lookup_switch__LookupSwitchInfo_15 = base;
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseConsts_28));
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__lookup_switch__OutVars_17));
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__lookup_switch__OutLLDSTypes_32));
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__lookup_switch__Liveness_20));
#line 210 "lookup_switch.m"
            }
#line 210 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 179 "lookup_switch.m"
          }
#line 179 "lookup_switch.m"
      }
#line 179 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 179 "lookup_switch.m"
  }
#line 80 "lookup_switch.m"
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
