/*
** Automatically generated from `lookup_switch.m'
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


/* :- module ll_backend.lookup_switch. */
/* :- implementation. */

/*
INIT mercury__ll_backend__lookup_switch__init
ENDINIT
*/

#include "ll_backend.lookup_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "counter.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




#line 160 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0;

#line 169 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0;

#line 172 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1;

#line 175 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2;

#line 178 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3];

#line 181 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3];

#line 184 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3];

#line 187 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0;

#line 190 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

#line 196 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4];

#line 202 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4];

#line 205 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0;

#line 208 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1];

#line 211 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1];

#line 214 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1];

#line 217 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1];

#line 220 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 223 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 225 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2);

#line 228 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 231 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 233 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 235 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 238 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 241 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 243 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 245 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

#line 248 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 251 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 253 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 255 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 257 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4);

#line 910 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 910 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 910 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 910 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 910 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 910 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5);

#line 859 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_10,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_11,
#line 859 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_12,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);

#line 385 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_14,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 385 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_16,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_18,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_20,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_22,
#line 385 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_23,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 385 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41);

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(
#line 492 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 492 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_68);

#line 926 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 926 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 926 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 926 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3);

#line 847 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 847 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 847 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 837 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 837 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 837 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 837 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 837 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11);

#line 783 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 783 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 783 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);

#line 584 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 584 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18);

#line 578 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 578 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1);

#line 502 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
#line 502 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 502 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
#line 492 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
#line 492 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg);

#line 478 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_19,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_20,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_21,
#line 478 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_22,
#line 478 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_23,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_28,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_30,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_32,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62);

#line 466 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 466 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 466 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

#line 456 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 456 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 456 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5);

#line 314 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 314 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 301 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 301 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5);

#line 224 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17);


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[5][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[2][5];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][4];


#line 944 "lookup_switch.m"
/* sealed */ struct ll_backend__lookup_switch__vector_common_type_5_0_s {
#line 944 "lookup_switch.m"
  const MR_Word ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;
#line 944 "lookup_switch.m"
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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[2]))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 822 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 830 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 838 "ll_backend.lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 846 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
  (MR_String) "kind_zero_solns",
  (MR_Integer) 0
};

#line 852 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
  (MR_String) "kind_one_soln",
  (MR_Integer) 1
};

#line 858 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
  (MR_String) "kind_several_solns",
  (MR_Integer) 2
};

#line 864 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2
};

#line 871 "ll_backend.lookup_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0
};

#line 878 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 885 "ll_backend.lookup_switch.c"
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

#line 902 "ll_backend.lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0
  }
};

#line 912 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 920 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 928 "ll_backend.lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 936 "ll_backend.lookup_switch.c"
static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 944 "ll_backend.lookup_switch.c"
static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4] = {
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness"
};

#line 952 "ll_backend.lookup_switch.c"
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

#line 967 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 972 "ll_backend.lookup_switch.c"
static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0
  }
};

#line 981 "ll_backend.lookup_switch.c"
static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

#line 986 "ll_backend.lookup_switch.c"
static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1] = {
  (MR_Integer) 0
};

#line 991 "ll_backend.lookup_switch.c"
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

#line 1008 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
#line 1011 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1013 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2)
#line 1015 "ll_backend.lookup_switch.c"
{
#line 1017 "ll_backend.lookup_switch.c"
  {
#line 1019 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 1022 "ll_backend.lookup_switch.c"
    {
#line 1024 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____case_kind_0_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2));
    }
#line 1027 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 1029 "ll_backend.lookup_switch.c"
  }
#line 1031 "ll_backend.lookup_switch.c"
}

#line 1034 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
#line 1037 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
#line 1039 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1041 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1043 "ll_backend.lookup_switch.c"
{
#line 1045 "ll_backend.lookup_switch.c"
  {
#line 1047 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1050 "ll_backend.lookup_switch.c"
    {
#line 1052 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____case_kind_0_0(&ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1055 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1057 "ll_backend.lookup_switch.c"
  }
#line 1059 "ll_backend.lookup_switch.c"
}

#line 1062 "ll_backend.lookup_switch.c"
static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
#line 1065 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1067 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
#line 1069 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
#line 1071 "ll_backend.lookup_switch.c"
{
#line 1073 "ll_backend.lookup_switch.c"
  {
#line 1075 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 1078 "ll_backend.lookup_switch.c"
    {
#line 1080 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
#line 1083 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 1085 "ll_backend.lookup_switch.c"
  }
#line 1087 "ll_backend.lookup_switch.c"
}

#line 1090 "ll_backend.lookup_switch.c"
static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
#line 1093 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
#line 1095 "ll_backend.lookup_switch.c"
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
#line 1097 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
#line 1099 "ll_backend.lookup_switch.c"
  MR_Box ll_backend__lookup_switch__wrapper_arg_4)
#line 1101 "ll_backend.lookup_switch.c"
{
#line 1103 "ll_backend.lookup_switch.c"
  {
#line 1105 "ll_backend.lookup_switch.c"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

#line 1108 "ll_backend.lookup_switch.c"
    {
#line 1110 "ll_backend.lookup_switch.c"
      ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), &ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_4));
    }
#line 1113 "ll_backend.lookup_switch.c"
    *ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
#line 1115 "ll_backend.lookup_switch.c"
  }
#line 1117 "ll_backend.lookup_switch.c"
}

#line 910 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 910 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 910 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_2,
#line 910 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__WordBits_3,
#line 910 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 910 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5)
#line 910 "lookup_switch.m"
{
#line 913 "lookup_switch.m"
  while (MR_TRUE)
#line 913 "lookup_switch.m"
    {
#line 913 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 913 "lookup_switch.m"
      {
#line 913 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 913 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 913 "lookup_switch.m"
        else
#line 914 "lookup_switch.m"
          {
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Tag_11;
#line 914 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Val_17;
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Word_18;
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Offset_19;
#line 914 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X1_21;
#line 914 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 914 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 914 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__V_12_12;
#line 918 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__X0_20;
#line 918 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__conv0_X0_20;

#line 914 "lookup_switch.m"
            ll_backend__lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 0)));
#line 914 "lookup_switch.m"
            ll_backend__lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 1));
#line 915 "lookup_switch.m"
            ll_backend__lookup_switch__Val_17 = (ll_backend__lookup_switch__Tag_11 - ll_backend__lookup_switch__Start_2);
#line 916 "lookup_switch.m"
            {
#line 916 "lookup_switch.m"
              ll_backend__lookup_switch__Word_18 = mercury__int__f_47_47_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 917 "lookup_switch.m"
            {
#line 917 "lookup_switch.m"
              ll_backend__lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
#line 918 "lookup_switch.m"
            {
#line 918 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, ll_backend__lookup_switch__Word_18, &ll_backend__lookup_switch__conv0_X0_20);
            }
#line 918 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 918 "lookup_switch.m"
              {
#line 918 "lookup_switch.m"
                ll_backend__lookup_switch__X0_20 = ((MR_Integer) ll_backend__lookup_switch__conv0_X0_20);
#line 918 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 918 "lookup_switch.m"
              }
#line 918 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 919 "lookup_switch.m"
              {
#line 919 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_25_25;

#line 919 "lookup_switch.m"
                {
#line 919 "lookup_switch.m"
                  ll_backend__lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 919 "lookup_switch.m"
                ll_backend__lookup_switch__X1_21 = (ll_backend__lookup_switch__X0_20 | ll_backend__lookup_switch__V_25_25);
#line 919 "lookup_switch.m"
              }
#line 918 "lookup_switch.m"
            else
#line 921 "lookup_switch.m"
              {
#line 921 "lookup_switch.m"
                {
#line 921 "lookup_switch.m"
                  ll_backend__lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
#line 921 "lookup_switch.m"
              }
#line 923 "lookup_switch.m"
            {
#line 923 "lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__Word_18, ((MR_Box) (ll_backend__lookup_switch__X1_21)), ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 924 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 924 "lookup_switch.m"
            {
#line 924 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Rest_13;
#line 924 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 924 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 924 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 924 "lookup_switch.m"
            }
#line 924 "lookup_switch.m"
            continue;
#line 914 "lookup_switch.m"
          }
#line 913 "lookup_switch.m"
      }
#line 913 "lookup_switch.m"
      break;
#line 913 "lookup_switch.m"
    }
#line 910 "lookup_switch.m"
}

#line 859 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_10,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseVals_11,
#line 859 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Start_12,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
#line 859 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
#line 859 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30)
#line 859 "lookup_switch.m"
{
#line 864 "lookup_switch.m"
  {
#line 864 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_25_69;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Globals_17;
#line 864 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__WordBits_18;
#line 864 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Log2WordBits_19;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecArgs_20;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitVecRval_21;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Word_23;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitNum_24;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HasBit_26;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_45_45;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap0_61;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BitMap_62;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__WordVals_63;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DataAddr_64;
#line 864 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_67_67;
#line 873 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__SingleWord_22;
#line 873 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_32_32;

#line 865 "lookup_switch.m"
    {
#line 865 "lookup_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__Globals_17);
    }
#line 866 "lookup_switch.m"
    {
#line 866 "lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ll_backend__lookup_switch__Globals_17, &ll_backend__lookup_switch__WordBits_18, &ll_backend__lookup_switch__Log2WordBits_19);
    }
#line 1340 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_25_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 903 "lookup_switch.m"
    {
#line 903 "lookup_switch.m"
      mercury__map__init_1_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, &ll_backend__lookup_switch__BitMap0_61);
    }
#line 904 "lookup_switch.m"
    {
#line 904 "lookup_switch.m"
      ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__lookup_switch__CaseVals_11, ll_backend__lookup_switch__Start_12, ll_backend__lookup_switch__WordBits_18, ll_backend__lookup_switch__BitMap0_61, &ll_backend__lookup_switch__BitMap_62);
    }
#line 905 "lookup_switch.m"
    {
#line 905 "lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__BitMap_62, &ll_backend__lookup_switch__WordVals_63);
    }
#line 906 "lookup_switch.m"
    {
#line 906 "lookup_switch.m"
      ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__WordVals_63, (MR_Integer) 0, &ll_backend__lookup_switch__BitVecArgs_20);
    }
#line 907 "lookup_switch.m"
    {
#line 907 "lookup_switch.m"
      ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(ll_backend__lookup_switch__BitVecArgs_20, &ll_backend__lookup_switch__DataAddr_64, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31);
    }
#line 908 "lookup_switch.m"
    {
#line 908 "lookup_switch.m"
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 908 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 908 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__DataAddr_64));
#line 908 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "lookup_switch.m"
    }
#line 908 "lookup_switch.m"
    {
#line 908 "lookup_switch.m"
      ll_backend__lookup_switch__BitVecRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 908 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 1) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
#line 908 "lookup_switch.m"
    }
#line 873 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = ((MR_tag((MR_Word) ll_backend__lookup_switch__BitVecArgs_20)) == (MR_mktag((MR_Integer) 1)));
#line 873 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 873 "lookup_switch.m"
      {
#line 873 "lookup_switch.m"
        ll_backend__lookup_switch__SingleWord_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 0)));
#line 873 "lookup_switch.m"
        ll_backend__lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 1)));
#line 873 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "lookup_switch.m"
      }
#line 873 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 874 "lookup_switch.m"
      {
#line 874 "lookup_switch.m"
        ll_backend__lookup_switch__Word_23 = ll_backend__lookup_switch__SingleWord_22;
#line 875 "lookup_switch.m"
        ll_backend__lookup_switch__BitNum_24 = ll_backend__lookup_switch__IndexRval_10;
#line 874 "lookup_switch.m"
      }
#line 873 "lookup_switch.m"
    else
#line 881 "lookup_switch.m"
      {
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__WordNum_25;
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_34_34;
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_35_35;
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_36_36;
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_40_40;
#line 881 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_41_41;
#line 881 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_42_42;

#line 881 "lookup_switch.m"
        {
#line 881 "lookup_switch.m"
          ll_backend__lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 881 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_35_35, 0) = ((MR_Box) (ll_backend__lookup_switch__Log2WordBits_19));
#line 881 "lookup_switch.m"
        }
#line 881 "lookup_switch.m"
        {
#line 881 "lookup_switch.m"
          ll_backend__lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 881 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 1) = ((MR_Box) (ll_backend__lookup_switch__V_35_35));
#line 881 "lookup_switch.m"
        }
#line 880 "lookup_switch.m"
        {
#line 880 "lookup_switch.m"
          ll_backend__lookup_switch__WordNum_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 880 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 880 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 880 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
#line 880 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 3) = ((MR_Box) (ll_backend__lookup_switch__V_34_34));
#line 880 "lookup_switch.m"
        }
#line 883 "lookup_switch.m"
        {
#line 883 "lookup_switch.m"
          ll_backend__lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 2) = ((MR_Box) (ll_backend__lookup_switch__BitVecRval_21));
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 3) = ((MR_Box) (ll_backend__lookup_switch__WordNum_25));
#line 883 "lookup_switch.m"
        }
#line 883 "lookup_switch.m"
        {
#line 883 "lookup_switch.m"
          ll_backend__lookup_switch__Word_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Word_23, 0) = ((MR_Box) (ll_backend__lookup_switch__V_36_36));
#line 883 "lookup_switch.m"
        }
#line 889 "lookup_switch.m"
        ll_backend__lookup_switch__V_42_42 = (ll_backend__lookup_switch__WordBits_18 - (MR_Integer) 1);
#line 889 "lookup_switch.m"
        {
#line 889 "lookup_switch.m"
          ll_backend__lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_41_41, 0) = ((MR_Box) (ll_backend__lookup_switch__V_42_42));
#line 889 "lookup_switch.m"
        }
#line 889 "lookup_switch.m"
        {
#line 889 "lookup_switch.m"
          ll_backend__lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 889 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 1) = ((MR_Box) (ll_backend__lookup_switch__V_41_41));
#line 889 "lookup_switch.m"
        }
#line 888 "lookup_switch.m"
        {
#line 888 "lookup_switch.m"
          ll_backend__lookup_switch__BitNum_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 888 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 888 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 888 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
#line 888 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 3) = ((MR_Box) (ll_backend__lookup_switch__V_40_40));
#line 888 "lookup_switch.m"
        }
#line 881 "lookup_switch.m"
      }
#line 892 "lookup_switch.m"
    {
#line 892 "lookup_switch.m"
      ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 892 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 892 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[17])));
#line 892 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 3) = ((MR_Box) (ll_backend__lookup_switch__BitNum_24));
#line 892 "lookup_switch.m"
    }
#line 891 "lookup_switch.m"
    {
#line 891 "lookup_switch.m"
      ll_backend__lookup_switch__HasBit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 891 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 891 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 891 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 2) = ((MR_Box) (ll_backend__lookup_switch__V_45_45));
#line 891 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 3) = ((MR_Box) (ll_backend__lookup_switch__Word_23));
#line 891 "lookup_switch.m"
    }
#line 893 "lookup_switch.m"
    {
#line 893 "lookup_switch.m"
      ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__HasBit_26, ll_backend__lookup_switch__CheckCode_14, ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_28, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29, ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);
    }
#line 864 "lookup_switch.m"
  }
#line 859 "lookup_switch.m"
}

#line 385 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_14,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 385 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_16,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseValues_18,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_20,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_22,
#line 385 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_23,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
#line 385 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
#line 385 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41)
#line 385 "lookup_switch.m"
{
#line 393 "lookup_switch.m"
  {
#line 393 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_70_70;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CheckBitVecCode_26;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_27;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchEndCode_38;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61;
#line 393 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_63_63;
#line 450 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___MaybeEnd_37;

#line 398 "lookup_switch.m"
#line 398 "lookup_switch.m"
    switch (ll_backend__lookup_switch__NeedBitVecCheck_21) {
#line 398 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 398 "lookup_switch.m"
      case (MR_Integer) 1:
#line 399 "lookup_switch.m"
        {
#line 400 "lookup_switch.m"
          {
#line 400 "lookup_switch.m"
            ll_backend__lookup_switch__CheckBitVecCode_26 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 399 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39;
#line 399 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41;
#line 399 "lookup_switch.m"
        }
#line 398 "lookup_switch.m"
        break;
#line 398 "lookup_switch.m"
      case (MR_Integer) 0:
#line 396 "lookup_switch.m"
        {
#line 396 "lookup_switch.m"
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(ll_backend__lookup_switch__IndexRval_14, ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, &ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39, &ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43);
        }
#line 398 "lookup_switch.m"
        break;
#line 398 "lookup_switch.m"
    }
#line 412 "lookup_switch.m"
    if ((ll_backend__lookup_switch__OutVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "lookup_switch.m"
      {
#line 411 "lookup_switch.m"
        {
#line 411 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 410 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_40 = ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
#line 410 "lookup_switch.m"
        ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
#line 410 "lookup_switch.m"
      }
#line 412 "lookup_switch.m"
    else
#line 413 "lookup_switch.m"
      {
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseReg_30;
#line 413 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__NumOutVars_31;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__RevVectorRvals_32;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorRvals_33;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddr_34;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__VectorAddrRval_35;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__BaseRval_36;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_48_48;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_53_53;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_54_54;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_55_55;
#line 413 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_56_56;

#line 417 "lookup_switch.m"
        {
#line 417 "lookup_switch.m"
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_15, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_30, ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45);
        }
#line 420 "lookup_switch.m"
        {
#line 420 "lookup_switch.m"
          mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_19, &ll_backend__lookup_switch__NumOutVars_31);
        }
#line 421 "lookup_switch.m"
        {
#line 421 "lookup_switch.m"
          ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, ll_backend__lookup_switch__OutTypes_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__RevVectorRvals_32);
        }
#line 423 "lookup_switch.m"
        {
#line 423 "lookup_switch.m"
          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__RevVectorRvals_32, &ll_backend__lookup_switch__VectorRvals_33);
        }
#line 424 "lookup_switch.m"
        {
#line 424 "lookup_switch.m"
          ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_20, ll_backend__lookup_switch__VectorRvals_33, &ll_backend__lookup_switch__VectorAddr_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CI_40);
        }
#line 425 "lookup_switch.m"
        {
#line 425 "lookup_switch.m"
          ll_backend__lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 1) = ((MR_Box) (ll_backend__lookup_switch__VectorAddr_34));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "lookup_switch.m"
        }
#line 425 "lookup_switch.m"
        {
#line 425 "lookup_switch.m"
          ll_backend__lookup_switch__VectorAddrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 1) = ((MR_Box) (ll_backend__lookup_switch__V_48_48));
#line 425 "lookup_switch.m"
        }
#line 432 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NumOutVars_31 == (MR_Integer) 1);
#line 432 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 433 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRval_36 = ll_backend__lookup_switch__IndexRval_14;
#line 432 "lookup_switch.m"
        else
#line 435 "lookup_switch.m"
          {
#line 435 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_51_51;
#line 435 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_52_52;

#line 436 "lookup_switch.m"
            {
#line 436 "lookup_switch.m"
              ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_31));
#line 436 "lookup_switch.m"
            }
#line 436 "lookup_switch.m"
            {
#line 436 "lookup_switch.m"
              ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 436 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
#line 436 "lookup_switch.m"
            }
#line 435 "lookup_switch.m"
            {
#line 435 "lookup_switch.m"
              ll_backend__lookup_switch__BaseRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 435 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 435 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 435 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_14));
#line 435 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
#line 435 "lookup_switch.m"
            }
#line 435 "lookup_switch.m"
          }
#line 441 "lookup_switch.m"
        {
#line 441 "lookup_switch.m"
          ll_backend__lookup_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 441 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 0) = ((MR_Box) (ll_backend__lookup_switch__VectorAddrRval_35));
#line 441 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 441 "lookup_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 2) = ((MR_Box) (ll_backend__lookup_switch__BaseRval_36));
#line 441 "lookup_switch.m"
        }
#line 441 "lookup_switch.m"
        {
#line 441 "lookup_switch.m"
          ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 441 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 1) = ((MR_Box) (ll_backend__lookup_switch__V_56_56));
#line 441 "lookup_switch.m"
        }
#line 440 "lookup_switch.m"
        {
#line 440 "lookup_switch.m"
          ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 440 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 440 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_30));
#line 440 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 2) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
#line 440 "lookup_switch.m"
        }
#line 439 "lookup_switch.m"
        {
#line 439 "lookup_switch.m"
          ll_backend__lookup_switch__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 0) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
#line 439 "lookup_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 439 "lookup_switch.m"
        }
#line 438 "lookup_switch.m"
        {
#line 438 "lookup_switch.m"
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__lookup_switch__V_53_53)));
        }
#line 444 "lookup_switch.m"
        {
#line 444 "lookup_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_19, (MR_Integer) 0, ll_backend__lookup_switch__BaseReg_30, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
        }
#line 413 "lookup_switch.m"
      }
#line 450 "lookup_switch.m"
    {
#line 450 "lookup_switch.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_15, ll_backend__lookup_switch__Liveness_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch___MaybeEnd_37, &ll_backend__lookup_switch__BranchEndCode_38, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
    }
#line 1848 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 452 "lookup_switch.m"
    {
#line 452 "lookup_switch.m"
      ll_backend__lookup_switch__V_63_63 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__BaseRegInitCode_27, ll_backend__lookup_switch__BranchEndCode_38);
    }
#line 452 "lookup_switch.m"
    {
#line 452 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__V_63_63);
    }
#line 393 "lookup_switch.m"
  }
#line 385 "lookup_switch.m"
}

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(
#line 492 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 492 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_68)
#line 492 "lookup_switch.m"
{
#line 492 "lookup_switch.m"
  {
#line 492 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], ((MR_Box) (ll_backend__lookup_switch__OutVars_27)), ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_68)));
    }
#line 492 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 492 "lookup_switch.m"
  }
#line 492 "lookup_switch.m"
}

#line 65 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_17,
#line 65 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 65 "lookup_switch.m"
{
#line 65 "lookup_switch.m"
  {
#line 65 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 65 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_15 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 65 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_16 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 65 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_15 == ll_backend__lookup_switch__CastY_16);
#line 65 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 1917 "ll_backend.lookup_switch.c"
      *ll_backend__lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "lookup_switch.m"
    else
#line 65 "lookup_switch.m"
      {
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_12_12;

#line 65 "lookup_switch.m"
        {
#line 65 "lookup_switch.m"
          backend_libs__switch_util____Compare____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_17, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, &ll_backend__lookup_switch__V_12_12, ll_backend__lookup_switch__V_4_4, ll_backend__lookup_switch__V_8_8);
        }
#line 1947 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_12_12 == (MR_Integer) 0);
#line 65 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 65 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_12_12;
#line 65 "lookup_switch.m"
        else
#line 65 "lookup_switch.m"
          {
#line 65 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_13_13;

#line 65 "lookup_switch.m"
            {
#line 65 "lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], &ll_backend__lookup_switch__V_13_13, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
            }
#line 1967 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_13_13 == (MR_Integer) 0);
#line 65 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 65 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_13_13;
#line 65 "lookup_switch.m"
            else
#line 65 "lookup_switch.m"
              {
#line 65 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_14_14;

#line 65 "lookup_switch.m"
                {
#line 65 "lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[4], &ll_backend__lookup_switch__V_14_14, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                }
#line 1987 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_14_14 == (MR_Integer) 0);
#line 65 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 65 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
                  *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_14_14;
#line 65 "lookup_switch.m"
                else
#line 65 "lookup_switch.m"
                  {
#line 65 "lookup_switch.m"
                    {
#line 65 "lookup_switch.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[5], ll_backend__lookup_switch__HeadVar__1_1, ((MR_Box) (ll_backend__lookup_switch__V_7_7)), ((MR_Box) (ll_backend__lookup_switch__V_11_11)));
                    }
#line 65 "lookup_switch.m"
                  }
#line 65 "lookup_switch.m"
              }
#line 65 "lookup_switch.m"
          }
#line 65 "lookup_switch.m"
      }
#line 65 "lookup_switch.m"
  }
#line 65 "lookup_switch.m"
}

#line 65 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_13,
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 65 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 65 "lookup_switch.m"
{
#line 65 "lookup_switch.m"
  {
#line 65 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 65 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastX_11 = (MR_Integer) ll_backend__lookup_switch__HeadVar__1_1;
#line 65 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__CastY_12 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;

#line 65 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_11 == ll_backend__lookup_switch__CastY_12);
#line 65 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 65 "lookup_switch.m"
    else
#line 65 "lookup_switch.m"
      {
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_18_18;
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_19_19;
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeInfo_20_20;
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));

#line 2070 "ll_backend.lookup_switch.c"
        {
#line 2072 "ll_backend.lookup_switch.c"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, ll_backend__lookup_switch__V_3_3, ll_backend__lookup_switch__V_7_7);
        }
#line 65 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
          {
#line 2079 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeInfo_18_18 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[3];
#line 2081 "ll_backend.lookup_switch.c"
            {
#line 2083 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_18_18, ((MR_Box) (ll_backend__lookup_switch__V_4_4)), ((MR_Box) (ll_backend__lookup_switch__V_8_8)));
            }
#line 65 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
              {
#line 2090 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_19_19 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[4];
#line 2092 "ll_backend.lookup_switch.c"
                {
#line 2094 "ll_backend.lookup_switch.c"
                  ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_19_19, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
                }
#line 65 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 65 "lookup_switch.m"
                  {
#line 2101 "ll_backend.lookup_switch.c"
                    ll_backend__lookup_switch__TypeInfo_20_20 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[5];
#line 2103 "ll_backend.lookup_switch.c"
                    {
#line 2105 "ll_backend.lookup_switch.c"
                      ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_20_20, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                    }
#line 65 "lookup_switch.m"
                  }
#line 65 "lookup_switch.m"
              }
#line 65 "lookup_switch.m"
          }
#line 65 "lookup_switch.m"
      }
#line 65 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 65 "lookup_switch.m"
  }
#line 65 "lookup_switch.m"
}

#line 103 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0(
#line 103 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
#line 103 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 103 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
#line 103 "lookup_switch.m"
{
#line 103 "lookup_switch.m"
  {
#line 103 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 103 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
#line 103 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

#line 103 "lookup_switch.m"
    {
#line 103 "lookup_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Cast_HeadVar1_4, ll_backend__lookup_switch__Cast_HeadVar2_5);
    }
#line 103 "lookup_switch.m"
  }
#line 103 "lookup_switch.m"
}

#line 103 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0(
#line 103 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_1,
#line 103 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
#line 103 "lookup_switch.m"
{
#line 2162 "ll_backend.lookup_switch.c"
  {
#line 2164 "ll_backend.lookup_switch.c"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__HeadVar__2_1 == ll_backend__lookup_switch__HeadVar__2_2);

#line 2167 "ll_backend.lookup_switch.c"
    return ll_backend__lookup_switch__succeeded;
#line 2169 "ll_backend.lookup_switch.c"
  }
#line 103 "lookup_switch.m"
}

#line 926 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
#line 926 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 926 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__Count_2,
#line 926 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3)
#line 926 "lookup_switch.m"
{
#line 929 "lookup_switch.m"
  {
#line 929 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 929 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "lookup_switch.m"
      *ll_backend__lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "lookup_switch.m"
    else
#line 930 "lookup_switch.m"
      {
#line 930 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Word_5;
#line 930 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Bits_6;
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rval_9;
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rvals_10;
#line 930 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__WordVal_11;
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_12;
#line 930 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Count1_13;
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 930 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_16_16;

#line 930 "lookup_switch.m"
        ll_backend__lookup_switch__Word_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 0)));
#line 930 "lookup_switch.m"
        ll_backend__lookup_switch__Bits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 1)));
#line 931 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__Count_2 < ll_backend__lookup_switch__Word_5);
#line 931 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 932 "lookup_switch.m"
          {
#line 932 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = (MR_Integer) 0;
#line 933 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__HeadVar__1_1;
#line 932 "lookup_switch.m"
          }
#line 931 "lookup_switch.m"
        else
#line 935 "lookup_switch.m"
          {
#line 935 "lookup_switch.m"
            ll_backend__lookup_switch__WordVal_11 = ll_backend__lookup_switch__Bits_6;
#line 936 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__Rest_7;
#line 935 "lookup_switch.m"
          }
#line 938 "lookup_switch.m"
        {
#line 938 "lookup_switch.m"
          ll_backend__lookup_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_16_16, 0) = ((MR_Box) (ll_backend__lookup_switch__WordVal_11));
#line 938 "lookup_switch.m"
        }
#line 938 "lookup_switch.m"
        {
#line 938 "lookup_switch.m"
          ll_backend__lookup_switch__Rval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 938 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 1) = ((MR_Box) (ll_backend__lookup_switch__V_16_16));
#line 938 "lookup_switch.m"
        }
#line 939 "lookup_switch.m"
        ll_backend__lookup_switch__Count1_13 = (ll_backend__lookup_switch__Count_2 + (MR_Integer) 1);
#line 940 "lookup_switch.m"
        {
#line 940 "lookup_switch.m"
          ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__Remainder_12, ll_backend__lookup_switch__Count1_13, &ll_backend__lookup_switch__Rvals_10);
        }
#line 930 "lookup_switch.m"
        {
#line 930 "lookup_switch.m"
          MR_Word base;
#line 930 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__3_3 = base;
#line 930 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__Rval_9));
#line 930 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__Rvals_10));
#line 930 "lookup_switch.m"
        }
#line 930 "lookup_switch.m"
      }
#line 929 "lookup_switch.m"
  }
#line 926 "lookup_switch.m"
}

#line 847 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
#line 847 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 847 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 847 "lookup_switch.m"
{
#line 847 "lookup_switch.m"
  {
#line 847 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 847 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 847 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 847 "lookup_switch.m"
    {
#line 847 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 847 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 847 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 847 "lookup_switch.m"
  }
#line 847 "lookup_switch.m"
}

#line 837 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
#line 837 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_5,
#line 837 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__MainRow_6,
#line 837 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 837 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11)
#line 837 "lookup_switch.m"
{
#line 840 "lookup_switch.m"
  {
#line 840 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 840 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 840 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarRvals_9;

#line 847 "lookup_switch.m"
    {
#line 847 "lookup_switch.m"
      ll_backend__lookup_switch__VarRvals_9 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[3], ll_backend__lookup_switch__OutTypes_5);
    }
#line 849 "lookup_switch.m"
    {
#line 849 "lookup_switch.m"
      *ll_backend__lookup_switch__MainRow_6 = mercury__list__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_1[9]), ll_backend__lookup_switch__VarRvals_9);
    }
#line 850 "lookup_switch.m"
    *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = (ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10 + (MR_Integer) 1);
#line 840 "lookup_switch.m"
  }
#line 837 "lookup_switch.m"
}

#line 783 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_2,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 783 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
#line 783 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
#line 783 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
#line 783 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
#line 783 "lookup_switch.m"
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15)
#line 783 "lookup_switch.m"
{
#line 792 "lookup_switch.m"
  {
#line 792 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 792 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "lookup_switch.m"
      {
#line 793 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 > ll_backend__lookup_switch__EndVal_2);
#line 793 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 794 "lookup_switch.m"
          {
#line 794 "lookup_switch.m"
            *ll_backend__lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 794 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 794 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 794 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 794 "lookup_switch.m"
          }
#line 793 "lookup_switch.m"
        else
#line 796 "lookup_switch.m"
          {
#line 796 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MainRow_26;
#line 796 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__MoreMainRows_27;
#line 796 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37;
#line 796 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_38_38;

#line 796 "lookup_switch.m"
            {
#line 796 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_26, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37);
            }
#line 797 "lookup_switch.m"
            ll_backend__lookup_switch__V_38_38 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 797 "lookup_switch.m"
            {
#line 797 "lookup_switch.m"
              ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_38_38, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__MoreMainRows_27, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
            }
#line 801 "lookup_switch.m"
            {
#line 801 "lookup_switch.m"
              MR_Word base;
#line 801 "lookup_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "lookup_switch.m"
              *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 801 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_26));
#line 801 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MoreMainRows_27));
#line 801 "lookup_switch.m"
            }
#line 796 "lookup_switch.m"
          }
#line 793 "lookup_switch.m"
      }
#line 792 "lookup_switch.m"
    else
#line 806 "lookup_switch.m"
      {
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__Index_49;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Soln_50;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Rest_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRow_52;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__MainRows_53;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Remainder_59;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79;
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81;
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89;
#line 806 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90;
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92;
#line 806 "lookup_switch.m"
        MR_Integer ll_backend__lookup_switch__V_97_97;

#line 804 "lookup_switch.m"
        ll_backend__lookup_switch__Index_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 0)));
#line 804 "lookup_switch.m"
        ll_backend__lookup_switch__Soln_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 1)));
#line 807 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 < ll_backend__lookup_switch__Index_49);
#line 807 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 808 "lookup_switch.m"
          {
#line 808 "lookup_switch.m"
            {
#line 808 "lookup_switch.m"
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_52, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79);
            }
#line 809 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__HeadVar__5_5;
#line 808 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 808 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 808 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 808 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 808 "lookup_switch.m"
          }
#line 807 "lookup_switch.m"
        else
#line 829 "lookup_switch.m"
          {
#line 818 "lookup_switch.m"
            if (((MR_tag((MR_Word) ll_backend__lookup_switch__Soln_50)) == (MR_mktag((MR_Integer) 0))))
#line 812 "lookup_switch.m"
              {
#line 812 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__OutRvals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 812 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__ZeroRval_61;
#line 812 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_96_96;

#line 813 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = (ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12 + (MR_Integer) 1);
#line 814 "lookup_switch.m"
                ll_backend__lookup_switch__ZeroRval_61 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
#line 817 "lookup_switch.m"
                {
#line 817 "lookup_switch.m"
                  ll_backend__lookup_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 817 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 1) = ((MR_Box) (ll_backend__lookup_switch__OutRvals_60));
#line 817 "lookup_switch.m"
                }
#line 817 "lookup_switch.m"
                {
#line 817 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
#line 817 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_96_96));
#line 817 "lookup_switch.m"
                }
#line 812 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
#line 812 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
#line 812 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
#line 812 "lookup_switch.m"
              }
#line 818 "lookup_switch.m"
            else
#line 819 "lookup_switch.m"
              {
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__TypeInfo_103_103;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstSolnRvals_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LaterSolns_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 1)));
#line 819 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__NumLaterSolns_64;
#line 819 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__FirstRowOffset_65;
#line 819 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__LastRowOffset_66;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__FirstRowRval_67;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__LastRowRval_68;
#line 819 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_83_83;
#line 819 "lookup_switch.m"
                MR_Integer ll_backend__lookup_switch__V_84_84;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_86_86;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_87_87;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_88_88;
#line 819 "lookup_switch.m"
                MR_Word ll_backend__lookup_switch__V_91_91;

#line 820 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = (ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14 + (MR_Integer) 1);
#line 2607 "ll_backend.lookup_switch.c"
                ll_backend__lookup_switch__TypeInfo_103_103 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 821 "lookup_switch.m"
                {
#line 821 "lookup_switch.m"
                  mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63, &ll_backend__lookup_switch__NumLaterSolns_64);
                }
#line 822 "lookup_switch.m"
                ll_backend__lookup_switch__FirstRowOffset_65 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 * ll_backend__lookup_switch__NumOutTypes_4);
#line 823 "lookup_switch.m"
                ll_backend__lookup_switch__V_84_84 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 823 "lookup_switch.m"
                ll_backend__lookup_switch__V_83_83 = (ll_backend__lookup_switch__V_84_84 - (MR_Integer) 1);
#line 823 "lookup_switch.m"
                ll_backend__lookup_switch__LastRowOffset_66 = (ll_backend__lookup_switch__V_83_83 * ll_backend__lookup_switch__NumOutTypes_4);
#line 824 "lookup_switch.m"
                {
#line 824 "lookup_switch.m"
                  ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowOffset_65));
#line 824 "lookup_switch.m"
                }
#line 824 "lookup_switch.m"
                {
#line 824 "lookup_switch.m"
                  ll_backend__lookup_switch__FirstRowRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 824 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_86_86));
#line 824 "lookup_switch.m"
                }
#line 825 "lookup_switch.m"
                {
#line 825 "lookup_switch.m"
                  ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowOffset_66));
#line 825 "lookup_switch.m"
                }
#line 825 "lookup_switch.m"
                {
#line 825 "lookup_switch.m"
                  ll_backend__lookup_switch__LastRowRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 825 "lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 1) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 825 "lookup_switch.m"
                }
#line 826 "lookup_switch.m"
                {
#line 826 "lookup_switch.m"
                  ll_backend__lookup_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowRval_68));
#line 826 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 1) = ((MR_Box) (ll_backend__lookup_switch__FirstSolnRvals_62));
#line 826 "lookup_switch.m"
                }
#line 826 "lookup_switch.m"
                {
#line 826 "lookup_switch.m"
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowRval_67));
#line 826 "lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_88_88));
#line 826 "lookup_switch.m"
                }
#line 827 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
#line 828 "lookup_switch.m"
                {
#line 828 "lookup_switch.m"
                  ll_backend__lookup_switch__V_91_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63);
                }
#line 828 "lookup_switch.m"
                {
#line 828 "lookup_switch.m"
                  ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__V_91_91);
                }
#line 819 "lookup_switch.m"
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
#line 819 "lookup_switch.m"
              }
#line 830 "lookup_switch.m"
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__Rest_51;
#line 829 "lookup_switch.m"
            ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
#line 829 "lookup_switch.m"
          }
#line 832 "lookup_switch.m"
        ll_backend__lookup_switch__V_97_97 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
#line 832 "lookup_switch.m"
        {
#line 832 "lookup_switch.m"
          ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_97_97, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, ll_backend__lookup_switch__Remainder_59, &ll_backend__lookup_switch__MainRows_53, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
        }
#line 804 "lookup_switch.m"
        {
#line 804 "lookup_switch.m"
          MR_Word base;
#line 804 "lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__6_6 = base;
#line 804 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_52));
#line 804 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MainRows_53));
#line 804 "lookup_switch.m"
        }
#line 806 "lookup_switch.m"
      }
#line 792 "lookup_switch.m"
  }
#line 783 "lookup_switch.m"
}

#line 584 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 584 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_3,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_5,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_6,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_7,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_8,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_10,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CurSlot_11,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_16,
#line 584 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
#line 584 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18)
#line 584 "lookup_switch.m"
{
#line 592 "lookup_switch.m"
  {
#line 592 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 592 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "lookup_switch.m"
      {
#line 593 "lookup_switch.m"
        {
#line 593 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_code_for_each_kind\'/18", (MR_String) "no kinds");
#line 593 "lookup_switch.m"
          return;
        }
#line 592 "lookup_switch.m"
      }
#line 592 "lookup_switch.m"
    else
#line 597 "lookup_switch.m"
      {
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Kinds_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TestOp_58;
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__KindCode_60;
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
#line 597 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;

#line 606 "lookup_switch.m"
#line 606 "lookup_switch.m"
        switch (ll_backend__lookup_switch__Kind_41) {
#line 606 "lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 606 "lookup_switch.m"
          case (MR_Integer) 1:
#line 607 "lookup_switch.m"
            {
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_292_292;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__BranchEndCode_61;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__GotoEndCode_62;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239;
#line 607 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_240_240;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_244_244;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_245_245;
#line 607 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_246_246;

#line 608 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
#line 610 "lookup_switch.m"
              {
#line 610 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239);
              }
#line 611 "lookup_switch.m"
              ll_backend__lookup_switch__V_240_240 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 611 "lookup_switch.m"
              {
#line 611 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_240_240, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
#line 613 "lookup_switch.m"
              {
#line 613 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
#line 2851 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_292_292 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 617 "lookup_switch.m"
              {
#line 617 "lookup_switch.m"
                ll_backend__lookup_switch__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_246_246, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 617 "lookup_switch.m"
              }
#line 617 "lookup_switch.m"
              {
#line 617 "lookup_switch.m"
                ll_backend__lookup_switch__V_245_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 617 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 1) = ((MR_Box) (ll_backend__lookup_switch__V_246_246));
#line 617 "lookup_switch.m"
              }
#line 617 "lookup_switch.m"
              {
#line 617 "lookup_switch.m"
                ll_backend__lookup_switch__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 0) = ((MR_Box) (ll_backend__lookup_switch__V_245_245));
#line 617 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
#line 617 "lookup_switch.m"
              }
#line 616 "lookup_switch.m"
              {
#line 616 "lookup_switch.m"
                ll_backend__lookup_switch__GotoEndCode_62 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ((MR_Box) (ll_backend__lookup_switch__V_244_244)));
              }
#line 620 "lookup_switch.m"
              {
#line 620 "lookup_switch.m"
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__GotoEndCode_62);
              }
#line 607 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17;
#line 607 "lookup_switch.m"
            }
#line 606 "lookup_switch.m"
            break;
#line 606 "lookup_switch.m"
          case (MR_Integer) 2:
#line 622 "lookup_switch.m"
            {
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_293_293;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_295_295;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__Globals_63;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumeMap_64;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FlushCode_65;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MinOffsetColumnRval_66;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaxOffsetColumnRval_67;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveSlotsCode_68;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveTicketCode_69;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeTicketSlot_70;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ReclaimHeap_71;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__SaveHpCode_72;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__MaybeHpSlot_73;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HijackInfo_74;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__PrepareHijackCode_75;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__DisjEntry_76;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePoint_77;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UpdateRedoipCode_78;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstFlushResumeVarsCode_79;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstZombies_80;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__FirstBranchEndCode_81;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__ResumePointCode_82;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreTicketCode_83;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__RestoreHpCode_84;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBaseReg_85;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoLabel_86;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabel_87;
#line 622 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__NumOutVars_88;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__TestMoreSolnsCode_89;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__UndoHijackCode_90;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__AfterUndoLabelCode_91;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterFlushResumeVarsCode_93;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterZombies_94;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__LaterBranchEndCode_95;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_108_108;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_110_110;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_111_111;
#line 622 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_112_112;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_114_114;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_115_115;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_116_116;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_117_117;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_118_118;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_119_119;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_121_121;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_123_123;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_124_124;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_125_125;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_126_126;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_127_127;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_141_141;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145;
#line 622 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__V_146_146;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_154_154;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_155_155;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_156_156;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_166_166;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_167_167;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_168_168;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_169_169;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_171_171;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_172_172;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_173_173;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_174_174;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_176_176;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_177_177;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_178_178;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_180_180;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_181_181;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_182_182;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_183_183;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_186_186;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_187_187;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_189_189;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_190_190;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_191_191;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_192_192;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_194_194;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_195_195;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_196_196;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_200_200;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_201_201;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_202_202;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_204_204;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_205_205;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_206_206;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_207_207;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_208_208;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_223_223;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_224_224;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_225_225;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_226_226;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_227_227;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_228_228;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_229_229;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_230_230;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_231_231;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_232_232;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_233_233;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_234_234;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_235_235;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_236_236;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_237_237;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__V_238_238;
#line 622 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__GotoEndCode_291;
#line 724 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch___LaterUpdateRedoipCode_92;

#line 623 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 624 "lookup_switch.m"
              {
#line 624 "lookup_switch.m"
                ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__Globals_63);
              }
#line 626 "lookup_switch.m"
              {
#line 626 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107);
              }
#line 3180 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_293_293 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 631 "lookup_switch.m"
              {
#line 631 "lookup_switch.m"
                ll_backend__lookup_switch__V_108_108 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 631 "lookup_switch.m"
              {
#line 631 "lookup_switch.m"
                ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__lookup_switch__V_108_108, &ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109);
              }
#line 633 "lookup_switch.m"
              {
#line 633 "lookup_switch.m"
                ll_backend__lookup_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_110_110, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 633 "lookup_switch.m"
              }
#line 633 "lookup_switch.m"
              {
#line 633 "lookup_switch.m"
                ll_backend__lookup_switch__MinOffsetColumnRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 633 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 1) = ((MR_Box) (ll_backend__lookup_switch__V_110_110));
#line 633 "lookup_switch.m"
              }
#line 634 "lookup_switch.m"
              ll_backend__lookup_switch__V_112_112 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 1);
#line 634 "lookup_switch.m"
              {
#line 634 "lookup_switch.m"
                ll_backend__lookup_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_111_111, 0) = ((MR_Box) (ll_backend__lookup_switch__V_112_112));
#line 634 "lookup_switch.m"
              }
#line 634 "lookup_switch.m"
              {
#line 634 "lookup_switch.m"
                ll_backend__lookup_switch__MaxOffsetColumnRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 634 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_111_111));
#line 634 "lookup_switch.m"
              }
#line 637 "lookup_switch.m"
              ll_backend__lookup_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0]);
#line 637 "lookup_switch.m"
              {
#line 637 "lookup_switch.m"
                ll_backend__lookup_switch__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_121_121, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 637 "lookup_switch.m"
              }
#line 637 "lookup_switch.m"
              {
#line 637 "lookup_switch.m"
                ll_backend__lookup_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 3) = ((MR_Box) (ll_backend__lookup_switch__MinOffsetColumnRval_66));
#line 637 "lookup_switch.m"
              }
#line 637 "lookup_switch.m"
              {
#line 637 "lookup_switch.m"
                ll_backend__lookup_switch__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_117_117, 0) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
#line 637 "lookup_switch.m"
              }
#line 636 "lookup_switch.m"
              {
#line 636 "lookup_switch.m"
                ll_backend__lookup_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 636 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 636 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 2) = ((MR_Box) (ll_backend__lookup_switch__V_117_117));
#line 636 "lookup_switch.m"
              }
#line 636 "lookup_switch.m"
              {
#line 636 "lookup_switch.m"
                ll_backend__lookup_switch__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 0) = ((MR_Box) (ll_backend__lookup_switch__V_116_116));
#line 636 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
#line 636 "lookup_switch.m"
              }
#line 640 "lookup_switch.m"
              {
#line 640 "lookup_switch.m"
                ll_backend__lookup_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 640 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 640 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 640 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
#line 640 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 3) = ((MR_Box) (ll_backend__lookup_switch__MaxOffsetColumnRval_67));
#line 640 "lookup_switch.m"
              }
#line 640 "lookup_switch.m"
              {
#line 640 "lookup_switch.m"
                ll_backend__lookup_switch__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_126_126, 0) = ((MR_Box) (ll_backend__lookup_switch__V_127_127));
#line 640 "lookup_switch.m"
              }
#line 639 "lookup_switch.m"
              {
#line 639 "lookup_switch.m"
                ll_backend__lookup_switch__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 639 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 639 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 1) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 639 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 2) = ((MR_Box) (ll_backend__lookup_switch__V_126_126));
#line 639 "lookup_switch.m"
              }
#line 639 "lookup_switch.m"
              {
#line 639 "lookup_switch.m"
                ll_backend__lookup_switch__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 0) = ((MR_Box) (ll_backend__lookup_switch__V_125_125));
#line 639 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
#line 639 "lookup_switch.m"
              }
#line 642 "lookup_switch.m"
              {
#line 642 "lookup_switch.m"
                ll_backend__lookup_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 0) = ((MR_Box) (ll_backend__lookup_switch__V_124_124));
#line 642 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "lookup_switch.m"
              }
#line 638 "lookup_switch.m"
              {
#line 638 "lookup_switch.m"
                ll_backend__lookup_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 0) = ((MR_Box) (ll_backend__lookup_switch__V_115_115));
#line 638 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 1) = ((MR_Box) (ll_backend__lookup_switch__V_123_123));
#line 638 "lookup_switch.m"
              }
#line 635 "lookup_switch.m"
              {
#line 635 "lookup_switch.m"
                ll_backend__lookup_switch__SaveSlotsCode_68 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_switch__V_114_114);
              }
#line 643 "lookup_switch.m"
              {
#line 643 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__lookup_switch__AddTrailOps_9, &ll_backend__lookup_switch__SaveTicketCode_69, &ll_backend__lookup_switch__MaybeTicketSlot_70, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134);
              }
#line 645 "lookup_switch.m"
              {
#line 645 "lookup_switch.m"
                libs__globals__lookup_bool_option_3_p_0(ll_backend__lookup_switch__Globals_63, (MR_Integer) 302, &ll_backend__lookup_switch__ReclaimHeap_71);
              }
#line 647 "lookup_switch.m"
              {
#line 647 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__lookup_switch__ReclaimHeap_71, &ll_backend__lookup_switch__SaveHpCode_72, &ll_backend__lookup_switch__MaybeHpSlot_73, ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, &ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137);
              }
#line 648 "lookup_switch.m"
              {
#line 648 "lookup_switch.m"
                ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0((MR_Integer) 2, &ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, &ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140);
              }
#line 651 "lookup_switch.m"
              {
#line 651 "lookup_switch.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__DisjEntry_76);
              }
#line 655 "lookup_switch.m"
              {
#line 655 "lookup_switch.m"
                ll_backend__lookup_switch__V_141_141 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
#line 655 "lookup_switch.m"
              {
#line 655 "lookup_switch.m"
                ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__lookup_switch__V_141_141, (MR_Integer) 1, ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__ResumePoint_77, ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, &ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143);
              }
#line 657 "lookup_switch.m"
              {
#line 657 "lookup_switch.m"
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145);
              }
#line 659 "lookup_switch.m"
              ll_backend__lookup_switch__V_146_146 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
#line 659 "lookup_switch.m"
              {
#line 659 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_146_146, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147);
              }
#line 661 "lookup_switch.m"
              {
#line 661 "lookup_switch.m"
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149);
              }
#line 667 "lookup_switch.m"
              {
#line 667 "lookup_switch.m"
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150);
              }
#line 668 "lookup_switch.m"
              {
#line 668 "lookup_switch.m"
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151);
              }
#line 669 "lookup_switch.m"
              {
#line 669 "lookup_switch.m"
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
#line 671 "lookup_switch.m"
              {
#line 671 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
#line 3425 "ll_backend.lookup_switch.c"
              ll_backend__lookup_switch__TypeCtorInfo_295_295 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_156_156, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 1) = ((MR_Box) (ll_backend__lookup_switch__V_156_156));
#line 676 "lookup_switch.m"
              }
#line 676 "lookup_switch.m"
              {
#line 676 "lookup_switch.m"
                ll_backend__lookup_switch__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 0) = ((MR_Box) (ll_backend__lookup_switch__V_155_155));
#line 676 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
#line 676 "lookup_switch.m"
              }
#line 675 "lookup_switch.m"
              {
#line 675 "lookup_switch.m"
                ll_backend__lookup_switch__GotoEndCode_291 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ((MR_Box) (ll_backend__lookup_switch__V_154_154)));
              }
#line 681 "lookup_switch.m"
              {
#line 681 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__DisjEntry_76, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158);
              }
#line 682 "lookup_switch.m"
              {
#line 682 "lookup_switch.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__lookup_switch__ResumePoint_77, &ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160);
              }
#line 684 "lookup_switch.m"
              {
#line 684 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__lookup_switch__MaybeTicketSlot_70, (MR_Integer) 0, &ll_backend__lookup_switch__RestoreTicketCode_83);
              }
#line 686 "lookup_switch.m"
              {
#line 686 "lookup_switch.m"
                ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__lookup_switch__MaybeHpSlot_73, &ll_backend__lookup_switch__RestoreHpCode_84);
              }
#line 688 "lookup_switch.m"
              {
#line 688 "lookup_switch.m"
                ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_7, (MR_Integer) 0, &ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163);
              }
#line 689 "lookup_switch.m"
              {
#line 689 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__UndoLabel_86, ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, &ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164);
              }
#line 690 "lookup_switch.m"
              {
#line 690 "lookup_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__AfterUndoLabel_87, ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
              }
#line 691 "lookup_switch.m"
              {
#line 691 "lookup_switch.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_3, &ll_backend__lookup_switch__NumOutVars_88);
              }
#line 693 "lookup_switch.m"
              {
#line 693 "lookup_switch.m"
                ll_backend__lookup_switch__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_169_169, 0) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 693 "lookup_switch.m"
              }
#line 693 "lookup_switch.m"
              {
#line 693 "lookup_switch.m"
                ll_backend__lookup_switch__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
#line 693 "lookup_switch.m"
              }
#line 693 "lookup_switch.m"
              {
#line 693 "lookup_switch.m"
                ll_backend__lookup_switch__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 0) = ((MR_Box) (ll_backend__lookup_switch__V_168_168));
#line 693 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 1) = ((MR_Box) ((MR_String) "Init later base register"));
#line 693 "lookup_switch.m"
              }
#line 697 "lookup_switch.m"
              {
#line 697 "lookup_switch.m"
                ll_backend__lookup_switch__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 697 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_176_176, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 697 "lookup_switch.m"
              }
#line 697 "lookup_switch.m"
              {
#line 697 "lookup_switch.m"
                ll_backend__lookup_switch__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 697 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_177_177, 0) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
#line 697 "lookup_switch.m"
              }
#line 696 "lookup_switch.m"
              {
#line 696 "lookup_switch.m"
                ll_backend__lookup_switch__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 3) = ((MR_Box) (ll_backend__lookup_switch__V_177_177));
#line 696 "lookup_switch.m"
              }
#line 698 "lookup_switch.m"
              {
#line 698 "lookup_switch.m"
                ll_backend__lookup_switch__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_178_178, 0) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
#line 698 "lookup_switch.m"
              }
#line 696 "lookup_switch.m"
              {
#line 696 "lookup_switch.m"
                ll_backend__lookup_switch__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 1) = ((MR_Box) (ll_backend__lookup_switch__V_174_174));
#line 696 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 2) = ((MR_Box) (ll_backend__lookup_switch__V_178_178));
#line 696 "lookup_switch.m"
              }
#line 695 "lookup_switch.m"
              {
#line 695 "lookup_switch.m"
                ll_backend__lookup_switch__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 0) = ((MR_Box) (ll_backend__lookup_switch__V_173_173));
#line 695 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
#line 695 "lookup_switch.m"
              }
#line 703 "lookup_switch.m"
              {
#line 703 "lookup_switch.m"
                ll_backend__lookup_switch__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_187_187, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_88));
#line 703 "lookup_switch.m"
              }
#line 703 "lookup_switch.m"
              {
#line 703 "lookup_switch.m"
                ll_backend__lookup_switch__V_186_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 703 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 1) = ((MR_Box) (ll_backend__lookup_switch__V_187_187));
#line 703 "lookup_switch.m"
              }
#line 701 "lookup_switch.m"
              {
#line 701 "lookup_switch.m"
                ll_backend__lookup_switch__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
#line 701 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 3) = ((MR_Box) (ll_backend__lookup_switch__V_186_186));
#line 701 "lookup_switch.m"
              }
#line 700 "lookup_switch.m"
              {
#line 700 "lookup_switch.m"
                ll_backend__lookup_switch__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 2) = ((MR_Box) (ll_backend__lookup_switch__V_183_183));
#line 700 "lookup_switch.m"
              }
#line 700 "lookup_switch.m"
              {
#line 700 "lookup_switch.m"
                ll_backend__lookup_switch__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 0) = ((MR_Box) (ll_backend__lookup_switch__V_182_182));
#line 700 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
#line 700 "lookup_switch.m"
              }
#line 705 "lookup_switch.m"
              {
#line 705 "lookup_switch.m"
                ll_backend__lookup_switch__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_192_192, 0) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
#line 705 "lookup_switch.m"
              }
#line 705 "lookup_switch.m"
              {
#line 705 "lookup_switch.m"
                ll_backend__lookup_switch__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 705 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 1) = ((MR_Box) (ll_backend__lookup_switch__V_192_192));
#line 705 "lookup_switch.m"
              }
#line 705 "lookup_switch.m"
              {
#line 705 "lookup_switch.m"
                ll_backend__lookup_switch__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 0) = ((MR_Box) (ll_backend__lookup_switch__V_191_191));
#line 705 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
#line 705 "lookup_switch.m"
              }
#line 707 "lookup_switch.m"
              {
#line 707 "lookup_switch.m"
                ll_backend__lookup_switch__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 1) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
#line 707 "lookup_switch.m"
              }
#line 707 "lookup_switch.m"
              {
#line 707 "lookup_switch.m"
                ll_backend__lookup_switch__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 0) = ((MR_Box) (ll_backend__lookup_switch__V_196_196));
#line 707 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
#line 707 "lookup_switch.m"
              }
#line 709 "lookup_switch.m"
              {
#line 709 "lookup_switch.m"
                ll_backend__lookup_switch__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 0) = ((MR_Box) (ll_backend__lookup_switch__V_195_195));
#line 709 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "lookup_switch.m"
              }
#line 706 "lookup_switch.m"
              {
#line 706 "lookup_switch.m"
                ll_backend__lookup_switch__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 0) = ((MR_Box) (ll_backend__lookup_switch__V_190_190));
#line 706 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 1) = ((MR_Box) (ll_backend__lookup_switch__V_194_194));
#line 706 "lookup_switch.m"
              }
#line 704 "lookup_switch.m"
              {
#line 704 "lookup_switch.m"
                ll_backend__lookup_switch__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 0) = ((MR_Box) (ll_backend__lookup_switch__V_181_181));
#line 704 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 1) = ((MR_Box) (ll_backend__lookup_switch__V_189_189));
#line 704 "lookup_switch.m"
              }
#line 699 "lookup_switch.m"
              {
#line 699 "lookup_switch.m"
                ll_backend__lookup_switch__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 0) = ((MR_Box) (ll_backend__lookup_switch__V_172_172));
#line 699 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 1) = ((MR_Box) (ll_backend__lookup_switch__V_180_180));
#line 699 "lookup_switch.m"
              }
#line 694 "lookup_switch.m"
              {
#line 694 "lookup_switch.m"
                ll_backend__lookup_switch__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 0) = ((MR_Box) (ll_backend__lookup_switch__V_167_167));
#line 694 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 1) = ((MR_Box) (ll_backend__lookup_switch__V_171_171));
#line 694 "lookup_switch.m"
              }
#line 692 "lookup_switch.m"
              {
#line 692 "lookup_switch.m"
                ll_backend__lookup_switch__TestMoreSolnsCode_89 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_166_166);
              }
#line 710 "lookup_switch.m"
              {
#line 710 "lookup_switch.m"
                ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199);
              }
#line 712 "lookup_switch.m"
              {
#line 712 "lookup_switch.m"
                ll_backend__lookup_switch__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 1) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
#line 712 "lookup_switch.m"
              }
#line 712 "lookup_switch.m"
              {
#line 712 "lookup_switch.m"
                ll_backend__lookup_switch__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 0) = ((MR_Box) (ll_backend__lookup_switch__V_202_202));
#line 712 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
#line 712 "lookup_switch.m"
              }
#line 715 "lookup_switch.m"
              {
#line 715 "lookup_switch.m"
                ll_backend__lookup_switch__V_208_208 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 715 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddrRval_13));
#line 715 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
#line 715 "lookup_switch.m"
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
#line 715 "lookup_switch.m"
              }
#line 715 "lookup_switch.m"
              {
#line 715 "lookup_switch.m"
                ll_backend__lookup_switch__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 715 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 1) = ((MR_Box) (ll_backend__lookup_switch__V_208_208));
#line 715 "lookup_switch.m"
              }
#line 714 "lookup_switch.m"
              {
#line 714 "lookup_switch.m"
                ll_backend__lookup_switch__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 714 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
#line 714 "lookup_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 2) = ((MR_Box) (ll_backend__lookup_switch__V_207_207));
#line 714 "lookup_switch.m"
              }
#line 714 "lookup_switch.m"
              {
#line 714 "lookup_switch.m"
                ll_backend__lookup_switch__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 0) = ((MR_Box) (ll_backend__lookup_switch__V_206_206));
#line 714 "lookup_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
#line 714 "lookup_switch.m"
              }
#line 718 "lookup_switch.m"
              {
#line 718 "lookup_switch.m"
                ll_backend__lookup_switch__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 0) = ((MR_Box) (ll_backend__lookup_switch__V_205_205));
#line 718 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "lookup_switch.m"
              }
#line 713 "lookup_switch.m"
              {
#line 713 "lookup_switch.m"
                ll_backend__lookup_switch__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 0) = ((MR_Box) (ll_backend__lookup_switch__V_201_201));
#line 713 "lookup_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 1) = ((MR_Box) (ll_backend__lookup_switch__V_204_204));
#line 713 "lookup_switch.m"
              }
#line 711 "lookup_switch.m"
              {
#line 711 "lookup_switch.m"
                ll_backend__lookup_switch__AfterUndoLabelCode_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_200_200);
              }
#line 724 "lookup_switch.m"
              {
#line 724 "lookup_switch.m"
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch___LaterUpdateRedoipCode_92, ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215);
              }
#line 727 "lookup_switch.m"
              {
#line 727 "lookup_switch.m"
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, (MR_Integer) 0, ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217);
              }
#line 728 "lookup_switch.m"
              {
#line 728 "lookup_switch.m"
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218);
              }
#line 734 "lookup_switch.m"
              {
#line 734 "lookup_switch.m"
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219);
              }
#line 735 "lookup_switch.m"
              {
#line 735 "lookup_switch.m"
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220);
              }
#line 736 "lookup_switch.m"
              {
#line 736 "lookup_switch.m"
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
#line 738 "lookup_switch.m"
              {
#line 738 "lookup_switch.m"
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
#line 748 "lookup_switch.m"
              {
#line 748 "lookup_switch.m"
                ll_backend__lookup_switch__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__GotoEndCode_291);
              }
#line 748 "lookup_switch.m"
              {
#line 748 "lookup_switch.m"
                ll_backend__lookup_switch__V_237_237 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__V_238_238);
              }
#line 747 "lookup_switch.m"
              {
#line 747 "lookup_switch.m"
                ll_backend__lookup_switch__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__AfterUndoLabelCode_91, ll_backend__lookup_switch__V_237_237);
              }
#line 747 "lookup_switch.m"
              {
#line 747 "lookup_switch.m"
                ll_backend__lookup_switch__V_235_235 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__V_236_236);
              }
#line 747 "lookup_switch.m"
              {
#line 747 "lookup_switch.m"
                ll_backend__lookup_switch__V_234_234 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__TestMoreSolnsCode_89, ll_backend__lookup_switch__V_235_235);
              }
#line 746 "lookup_switch.m"
              {
#line 746 "lookup_switch.m"
                ll_backend__lookup_switch__V_233_233 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreHpCode_84, ll_backend__lookup_switch__V_234_234);
              }
#line 746 "lookup_switch.m"
              {
#line 746 "lookup_switch.m"
                ll_backend__lookup_switch__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreTicketCode_83, ll_backend__lookup_switch__V_233_233);
              }
#line 745 "lookup_switch.m"
              {
#line 745 "lookup_switch.m"
                ll_backend__lookup_switch__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__V_232_232);
              }
#line 745 "lookup_switch.m"
              {
#line 745 "lookup_switch.m"
                ll_backend__lookup_switch__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__GotoEndCode_291, ll_backend__lookup_switch__V_231_231);
              }
#line 745 "lookup_switch.m"
              {
#line 745 "lookup_switch.m"
                ll_backend__lookup_switch__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__V_230_230);
              }
#line 744 "lookup_switch.m"
              {
#line 744 "lookup_switch.m"
                ll_backend__lookup_switch__V_228_228 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__V_229_229);
              }
#line 744 "lookup_switch.m"
              {
#line 744 "lookup_switch.m"
                ll_backend__lookup_switch__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__V_228_228);
              }
#line 743 "lookup_switch.m"
              {
#line 743 "lookup_switch.m"
                ll_backend__lookup_switch__V_226_226 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__V_227_227);
              }
#line 743 "lookup_switch.m"
              {
#line 743 "lookup_switch.m"
                ll_backend__lookup_switch__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveHpCode_72, ll_backend__lookup_switch__V_226_226);
              }
#line 743 "lookup_switch.m"
              {
#line 743 "lookup_switch.m"
                ll_backend__lookup_switch__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveTicketCode_69, ll_backend__lookup_switch__V_225_225);
              }
#line 742 "lookup_switch.m"
              {
#line 742 "lookup_switch.m"
                ll_backend__lookup_switch__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveSlotsCode_68, ll_backend__lookup_switch__V_224_224);
              }
#line 742 "lookup_switch.m"
              {
#line 742 "lookup_switch.m"
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__V_223_223);
              }
#line 622 "lookup_switch.m"
            }
#line 606 "lookup_switch.m"
            break;
#line 606 "lookup_switch.m"
          case (MR_Integer) 0:
#line 599 "lookup_switch.m"
            {
#line 599 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248;
#line 599 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249;

#line 600 "lookup_switch.m"
              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
#line 602 "lookup_switch.m"
              {
#line 602 "lookup_switch.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248);
              }
#line 603 "lookup_switch.m"
              {
#line 603 "lookup_switch.m"
                ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
#line 604 "lookup_switch.m"
              {
#line 604 "lookup_switch.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
#line 599 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14;
#line 599 "lookup_switch.m"
            }
#line 606 "lookup_switch.m"
            break;
#line 606 "lookup_switch.m"
        }
#line 753 "lookup_switch.m"
        if ((ll_backend__lookup_switch__Kinds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "lookup_switch.m"
          {
#line 752 "lookup_switch.m"
            *ll_backend__lookup_switch__Code_16 = ll_backend__lookup_switch__KindCode_60;
#line 751 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
#line 751 "lookup_switch.m"
            *ll_backend__lookup_switch__STATE_VARIABLE_CI_18 = ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;
#line 751 "lookup_switch.m"
          }
#line 753 "lookup_switch.m"
        else
#line 754 "lookup_switch.m"
          {
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TypeCtorInfo_297_297;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKind_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 0)));
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabel_98;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestRval_99;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TestCode_100;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__NextKindLabelCode_101;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__LaterKindsCode_102;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_252_252;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_253_253;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_256_256;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_257_257;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_258_258;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_262_262;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_263_263;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_264_264;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_265_265;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_267_267;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_268_268;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_269_269;
#line 754 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_270_270;
#line 754 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_272_272;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_275_275;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_276_276;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_277_277;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_279_279;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_280_280;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_281_281;
#line 754 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_282_282;
#line 754 "lookup_switch.m"
            MR_String ll_backend__lookup_switch__V_284_284;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_289_289;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_290_290;
#line 754 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 1)));

#line 755 "lookup_switch.m"
            {
#line 755 "lookup_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__NextKindLabel_98, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, &ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251);
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_256_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_256_256, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
#line 757 "lookup_switch.m"
            }
#line 758 "lookup_switch.m"
            {
#line 758 "lookup_switch.m"
              ll_backend__lookup_switch__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_258_258, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
#line 758 "lookup_switch.m"
            }
#line 758 "lookup_switch.m"
            {
#line 758 "lookup_switch.m"
              ll_backend__lookup_switch__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 1) = ((MR_Box) (ll_backend__lookup_switch__V_258_258));
#line 758 "lookup_switch.m"
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_253_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 2) = ((MR_Box) (ll_backend__lookup_switch__V_256_256));
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 3) = ((MR_Box) (ll_backend__lookup_switch__V_257_257));
#line 757 "lookup_switch.m"
            }
#line 757 "lookup_switch.m"
            {
#line 757 "lookup_switch.m"
              ll_backend__lookup_switch__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 757 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_252_252, 0) = ((MR_Box) (ll_backend__lookup_switch__V_253_253));
#line 757 "lookup_switch.m"
            }
#line 756 "lookup_switch.m"
            {
#line 756 "lookup_switch.m"
              ll_backend__lookup_switch__TestRval_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 1) = ((MR_Box) (ll_backend__lookup_switch__TestOp_58));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_252_252));
#line 756 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12])));
#line 756 "lookup_switch.m"
            }
#line 4149 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_297_297 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 761 "lookup_switch.m"
            {
#line 761 "lookup_switch.m"
              ll_backend__lookup_switch__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_265_265, 0) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
#line 761 "lookup_switch.m"
            }
#line 761 "lookup_switch.m"
            {
#line 761 "lookup_switch.m"
              ll_backend__lookup_switch__V_264_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 1) = ((MR_Box) (ll_backend__lookup_switch__TestRval_99));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 2) = ((MR_Box) (ll_backend__lookup_switch__V_265_265));
#line 761 "lookup_switch.m"
            }
#line 761 "lookup_switch.m"
            {
#line 761 "lookup_switch.m"
              ll_backend__lookup_switch__V_263_263 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 0) = ((MR_Box) (ll_backend__lookup_switch__V_264_264));
#line 761 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
#line 761 "lookup_switch.m"
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_272_272 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__Kind_41);
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", ll_backend__lookup_switch__V_272_272);
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_269_269, 0) = ((MR_Box) (ll_backend__lookup_switch__V_270_270));
#line 763 "lookup_switch.m"
            }
#line 763 "lookup_switch.m"
            {
#line 763 "lookup_switch.m"
              ll_backend__lookup_switch__V_268_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 0) = ((MR_Box) (ll_backend__lookup_switch__V_269_269));
#line 763 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 1) = ((MR_Box) ((MR_String) ""));
#line 763 "lookup_switch.m"
            }
#line 765 "lookup_switch.m"
            {
#line 765 "lookup_switch.m"
              ll_backend__lookup_switch__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 0) = ((MR_Box) (ll_backend__lookup_switch__V_268_268));
#line 765 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "lookup_switch.m"
            }
#line 762 "lookup_switch.m"
            {
#line 762 "lookup_switch.m"
              ll_backend__lookup_switch__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 0) = ((MR_Box) (ll_backend__lookup_switch__V_263_263));
#line 762 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 1) = ((MR_Box) (ll_backend__lookup_switch__V_267_267));
#line 762 "lookup_switch.m"
            }
#line 760 "lookup_switch.m"
            {
#line 760 "lookup_switch.m"
              ll_backend__lookup_switch__TestCode_100 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_262_262);
            }
#line 767 "lookup_switch.m"
            {
#line 767 "lookup_switch.m"
              ll_backend__lookup_switch__V_277_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 767 "lookup_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 1) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
#line 767 "lookup_switch.m"
            }
#line 767 "lookup_switch.m"
            {
#line 767 "lookup_switch.m"
              ll_backend__lookup_switch__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 0) = ((MR_Box) (ll_backend__lookup_switch__V_277_277));
#line 767 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
#line 767 "lookup_switch.m"
            }
#line 770 "lookup_switch.m"
            {
#line 770 "lookup_switch.m"
              ll_backend__lookup_switch__V_284_284 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__NextKind_96);
            }
#line 770 "lookup_switch.m"
            {
#line 770 "lookup_switch.m"
              ll_backend__lookup_switch__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", ll_backend__lookup_switch__V_284_284);
            }
#line 769 "lookup_switch.m"
            {
#line 769 "lookup_switch.m"
              ll_backend__lookup_switch__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_281_281, 0) = ((MR_Box) (ll_backend__lookup_switch__V_282_282));
#line 769 "lookup_switch.m"
            }
#line 769 "lookup_switch.m"
            {
#line 769 "lookup_switch.m"
              ll_backend__lookup_switch__V_280_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 0) = ((MR_Box) (ll_backend__lookup_switch__V_281_281));
#line 769 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 1) = ((MR_Box) ((MR_String) ""));
#line 769 "lookup_switch.m"
            }
#line 772 "lookup_switch.m"
            {
#line 772 "lookup_switch.m"
              ll_backend__lookup_switch__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 0) = ((MR_Box) (ll_backend__lookup_switch__V_280_280));
#line 772 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "lookup_switch.m"
            }
#line 768 "lookup_switch.m"
            {
#line 768 "lookup_switch.m"
              ll_backend__lookup_switch__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 0) = ((MR_Box) (ll_backend__lookup_switch__V_276_276));
#line 768 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 1) = ((MR_Box) (ll_backend__lookup_switch__V_279_279));
#line 768 "lookup_switch.m"
            }
#line 766 "lookup_switch.m"
            {
#line 766 "lookup_switch.m"
              ll_backend__lookup_switch__NextKindLabelCode_101 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_275_275);
            }
#line 773 "lookup_switch.m"
            {
#line 773 "lookup_switch.m"
              ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_42, ll_backend__lookup_switch__NumPrevColumns_2, ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__ResumeVars_4, ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__EndLabel_6, ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__AddTrailOps_9, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__CurSlot_11, ll_backend__lookup_switch__MaxSlot_12, ll_backend__lookup_switch__LaterVectorAddrRval_13, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15, &ll_backend__lookup_switch__LaterKindsCode_102, ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251, ll_backend__lookup_switch__STATE_VARIABLE_CI_18);
            }
#line 777 "lookup_switch.m"
            {
#line 777 "lookup_switch.m"
              ll_backend__lookup_switch__V_290_290 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__NextKindLabelCode_101, ll_backend__lookup_switch__LaterKindsCode_102);
            }
#line 777 "lookup_switch.m"
            {
#line 777 "lookup_switch.m"
              ll_backend__lookup_switch__V_289_289 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__V_290_290);
            }
#line 777 "lookup_switch.m"
            {
#line 777 "lookup_switch.m"
              *ll_backend__lookup_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__TestCode_100, ll_backend__lookup_switch__V_289_289);
            }
#line 754 "lookup_switch.m"
          }
#line 597 "lookup_switch.m"
      }
#line 592 "lookup_switch.m"
  }
#line 584 "lookup_switch.m"
}

#line 578 "lookup_switch.m"
static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
#line 578 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 578 "lookup_switch.m"
{
#line 580 "lookup_switch.m"
  {
#line 580 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 580 "lookup_switch.m"
    MR_String ll_backend__lookup_switch__HeadVar__2_2;

#line 580 "lookup_switch.m"
#line 580 "lookup_switch.m"
    switch (ll_backend__lookup_switch__HeadVar__1_1) {
#line 580 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 580 "lookup_switch.m"
      case (MR_Integer) 1:
#line 581 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_one_soln";
#line 580 "lookup_switch.m"
        break;
#line 580 "lookup_switch.m"
      case (MR_Integer) 2:
#line 582 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_several_solns";
#line 580 "lookup_switch.m"
        break;
#line 580 "lookup_switch.m"
      case (MR_Integer) 0:
#line 580 "lookup_switch.m"
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_zero_solns";
#line 580 "lookup_switch.m"
        break;
#line 580 "lookup_switch.m"
    }
#line 580 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 580 "lookup_switch.m"
  }
#line 578 "lookup_switch.m"
}

#line 502 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
#line 502 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 502 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 502 "lookup_switch.m"
{
#line 502 "lookup_switch.m"
  {
#line 502 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 502 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 502 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 502 "lookup_switch.m"
    {
#line 502 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 502 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 502 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 502 "lookup_switch.m"
  }
#line 502 "lookup_switch.m"
}

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
#line 492 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 492 "lookup_switch.m"
{
#line 492 "lookup_switch.m"
  {
#line 492 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 492 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))));
    }
#line 492 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 492 "lookup_switch.m"
  }
#line 492 "lookup_switch.m"
}

#line 492 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
#line 492 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg)
#line 492 "lookup_switch.m"
{
#line 492 "lookup_switch.m"
  {
#line 492 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 492 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 4))));
    }
#line 492 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 492 "lookup_switch.m"
  }
#line 492 "lookup_switch.m"
}

#line 478 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__IndexRval_19,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_20,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_21,
#line 478 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_22,
#line 478 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_23,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_27,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_28,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_30,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_32,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
#line 478 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
#line 478 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62)
#line 478 "lookup_switch.m"
{
#line 489 "lookup_switch.m"
  {
#line 489 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_118_118;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_122_122;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_123_123;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_126_126;
#line 489 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__NumOutTypes_35;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DummyLaterSolnRow_37;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord0_38;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRows_39;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord_40;
#line 489 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__FailCaseCount_41;
#line 489 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__OneSolnCaseCount_42;
#line 489 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__SeveralSolnCaseCount_43;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterSolnArray_44;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainRowTypes_45;
#line 489 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__MainNumColumns_46;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddr_47;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MainVectorAddrRval_48;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddr_49;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_50;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__AscendingSortedCountKinds_51;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedCountKinds_52;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__DescendingSortedKinds_53;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseReg_54;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_55;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__KindsCode_56;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__EndLabelCode_57;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_63_63;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_67_67;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_78_78;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_81_81;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_84_84;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_86_86;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_87_87;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_89_89;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_90_90;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_92_92;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_93_93;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_98_98;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_99_99;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_100_100;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_101_101;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_104_104;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_106_106;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_107_107;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_112_112;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_113_113;
#line 489 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_115_115;
#line 513 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_73_73;
#line 512 "lookup_switch.m"
    MR_Integer ll_backend__lookup_switch__V_116_116;

#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[1]));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 3) = ((MR_Box) (ll_backend__lookup_switch__OutVars_27));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "lookup_switch.m"
    }
#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      ll_backend__lookup_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_7[0]));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 492 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 3) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
#line 492 "lookup_switch.m"
    }
#line 492 "lookup_switch.m"
    {
#line 492 "lookup_switch.m"
      mercury__require__expect_4_p_0(ll_backend__lookup_switch__V_63_63, (MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "no OutVars");
    }
#line 4651 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 500 "lookup_switch.m"
    {
#line 500 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__OutTypes_28, &ll_backend__lookup_switch__NumOutTypes_35);
    }
#line 502 "lookup_switch.m"
    {
#line 502 "lookup_switch.m"
      ll_backend__lookup_switch__DummyLaterSolnRow_37 = mercury__list__map_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[2], ll_backend__lookup_switch__OutTypes_28);
    }
#line 4663 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_122_122 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
#line 503 "lookup_switch.m"
    {
#line 503 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArrayCord0_38 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ((MR_Box) (ll_backend__lookup_switch__DummyLaterSolnRow_37)));
    }
#line 504 "lookup_switch.m"
    {
#line 504 "lookup_switch.m"
      ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__StartVal_22, ll_backend__lookup_switch__EndVal_23, ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__NumOutTypes_35, ll_backend__lookup_switch__CaseSolns_24, &ll_backend__lookup_switch__MainRows_39, (MR_Integer) 1, ll_backend__lookup_switch__LaterSolnArrayCord0_38, &ll_backend__lookup_switch__LaterSolnArrayCord_40, (MR_Integer) 0, &ll_backend__lookup_switch__FailCaseCount_41, (MR_Integer) 0, &ll_backend__lookup_switch__OneSolnCaseCount_42, (MR_Integer) 0, &ll_backend__lookup_switch__SeveralSolnCaseCount_43);
    }
#line 508 "lookup_switch.m"
    {
#line 508 "lookup_switch.m"
      ll_backend__lookup_switch__LaterSolnArray_44 = mercury__cord__list_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ll_backend__lookup_switch__LaterSolnArrayCord_40);
    }
#line 511 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
#line 512 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 512 "lookup_switch.m"
      {
#line 513 "lookup_switch.m"
        ll_backend__lookup_switch__V_73_73 = (MR_Integer) 0;
#line 513 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_73_73);
#line 512 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 512 "lookup_switch.m"
      }
#line 512 "lookup_switch.m"
    ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 512 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 512 "lookup_switch.m"
      {
#line 513 "lookup_switch.m"
        ll_backend__lookup_switch__V_116_116 = (MR_Integer) 0;
#line 513 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_116_116);
#line 512 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 512 "lookup_switch.m"
          {
#line 511 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
#line 512 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 512 "lookup_switch.m"
          }
#line 512 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 512 "lookup_switch.m"
      }
#line 509 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 516 "lookup_switch.m"
      {
#line 516 "lookup_switch.m"
      }
#line 509 "lookup_switch.m"
    else
#line 518 "lookup_switch.m"
      {
#line 518 "lookup_switch.m"
        {
#line 518 "lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "bad FailCaseCount");
#line 518 "lookup_switch.m"
          return;
        }
#line 518 "lookup_switch.m"
      }
#line 521 "lookup_switch.m"
    {
#line 521 "lookup_switch.m"
      ll_backend__lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 0) = ((MR_Box) ((MR_Integer) 7));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 1) = ((MR_Box) (ll_backend__lookup_switch__OutTypes_28));
#line 521 "lookup_switch.m"
    }
#line 521 "lookup_switch.m"
    {
#line 521 "lookup_switch.m"
      ll_backend__lookup_switch__MainRowTypes_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 0) = ((MR_Box) ((MR_Integer) 7));
#line 521 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 1) = ((MR_Box) (ll_backend__lookup_switch__V_78_78));
#line 521 "lookup_switch.m"
    }
#line 522 "lookup_switch.m"
    {
#line 522 "lookup_switch.m"
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__MainRowTypes_45, &ll_backend__lookup_switch__MainNumColumns_46);
    }
#line 523 "lookup_switch.m"
    {
#line 523 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__MainRowTypes_45, ll_backend__lookup_switch__MainRows_39, &ll_backend__lookup_switch__MainVectorAddr_47, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60, &ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80);
    }
#line 524 "lookup_switch.m"
    {
#line 524 "lookup_switch.m"
      ll_backend__lookup_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 1) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddr_47));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "lookup_switch.m"
    }
#line 524 "lookup_switch.m"
    {
#line 524 "lookup_switch.m"
      ll_backend__lookup_switch__MainVectorAddrRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 1) = ((MR_Box) (ll_backend__lookup_switch__V_81_81));
#line 524 "lookup_switch.m"
    }
#line 525 "lookup_switch.m"
    {
#line 525 "lookup_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__LaterSolnArray_44, &ll_backend__lookup_switch__LaterVectorAddr_49, ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80, &ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83);
    }
#line 526 "lookup_switch.m"
    {
#line 526 "lookup_switch.m"
      ll_backend__lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 526 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddr_49));
#line 526 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "lookup_switch.m"
    }
#line 526 "lookup_switch.m"
    {
#line 526 "lookup_switch.m"
      ll_backend__lookup_switch__LaterVectorAddrRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 526 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 1) = ((MR_Box) (ll_backend__lookup_switch__V_84_84));
#line 526 "lookup_switch.m"
    }
#line 528 "lookup_switch.m"
    {
#line 528 "lookup_switch.m"
      ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__FailCaseCount_41));
#line 528 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 1) = ((MR_Box) ((MR_Integer) 0));
#line 528 "lookup_switch.m"
    }
#line 529 "lookup_switch.m"
    {
#line 529 "lookup_switch.m"
      ll_backend__lookup_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 529 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 0) = ((MR_Box) (ll_backend__lookup_switch__OneSolnCaseCount_42));
#line 529 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 1) = ((MR_Box) ((MR_Integer) 1));
#line 529 "lookup_switch.m"
    }
#line 530 "lookup_switch.m"
    {
#line 530 "lookup_switch.m"
      ll_backend__lookup_switch__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 0) = ((MR_Box) (ll_backend__lookup_switch__SeveralSolnCaseCount_43));
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 1) = ((MR_Box) ((MR_Integer) 2));
#line 530 "lookup_switch.m"
    }
#line 530 "lookup_switch.m"
    {
#line 530 "lookup_switch.m"
      ll_backend__lookup_switch__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 0) = ((MR_Box) (ll_backend__lookup_switch__V_93_93));
#line 530 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "lookup_switch.m"
    }
#line 529 "lookup_switch.m"
    {
#line 529 "lookup_switch.m"
      ll_backend__lookup_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 0) = ((MR_Box) (ll_backend__lookup_switch__V_90_90));
#line 529 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 1) = ((MR_Box) (ll_backend__lookup_switch__V_92_92));
#line 529 "lookup_switch.m"
    }
#line 528 "lookup_switch.m"
    {
#line 528 "lookup_switch.m"
      ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
#line 528 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 1) = ((MR_Box) (ll_backend__lookup_switch__V_89_89));
#line 528 "lookup_switch.m"
    }
#line 4876 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_123_123 = (MR_Word) &ll_backend__lookup_switch_scalar_common_2[0];
#line 528 "lookup_switch.m"
    {
#line 528 "lookup_switch.m"
      mercury__list__sort_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__V_86_86, &ll_backend__lookup_switch__AscendingSortedCountKinds_51);
    }
#line 531 "lookup_switch.m"
    {
#line 531 "lookup_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__AscendingSortedCountKinds_51, &ll_backend__lookup_switch__DescendingSortedCountKinds_52);
    }
#line 532 "lookup_switch.m"
    {
#line 532 "lookup_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__lookup_switch__DescendingSortedCountKinds_52, &ll_backend__lookup_switch__DescendingSortedKinds_53);
    }
#line 537 "lookup_switch.m"
    {
#line 537 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_21, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
#line 4898 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_126_126 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 545 "lookup_switch.m"
    {
#line 545 "lookup_switch.m"
      ll_backend__lookup_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "lookup_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_107_107, 0) = ((MR_Box) (ll_backend__lookup_switch__MainNumColumns_46));
#line 545 "lookup_switch.m"
    }
#line 545 "lookup_switch.m"
    {
#line 545 "lookup_switch.m"
      ll_backend__lookup_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 1) = ((MR_Box) (ll_backend__lookup_switch__V_107_107));
#line 545 "lookup_switch.m"
    }
#line 543 "lookup_switch.m"
    {
#line 543 "lookup_switch.m"
      ll_backend__lookup_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_19));
#line 543 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 3) = ((MR_Box) (ll_backend__lookup_switch__V_106_106));
#line 543 "lookup_switch.m"
    }
#line 542 "lookup_switch.m"
    {
#line 542 "lookup_switch.m"
      ll_backend__lookup_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 542 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 0) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddrRval_48));
#line 542 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
#line 542 "lookup_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 2) = ((MR_Box) (ll_backend__lookup_switch__V_104_104));
#line 542 "lookup_switch.m"
    }
#line 542 "lookup_switch.m"
    {
#line 542 "lookup_switch.m"
      ll_backend__lookup_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 542 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 1) = ((MR_Box) (ll_backend__lookup_switch__V_101_101));
#line 542 "lookup_switch.m"
    }
#line 541 "lookup_switch.m"
    {
#line 541 "lookup_switch.m"
      ll_backend__lookup_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 541 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_54));
#line 541 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_100_100));
#line 541 "lookup_switch.m"
    }
#line 540 "lookup_switch.m"
    {
#line 540 "lookup_switch.m"
      ll_backend__lookup_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 0) = ((MR_Box) (ll_backend__lookup_switch__V_99_99));
#line 540 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 540 "lookup_switch.m"
    }
#line 539 "lookup_switch.m"
    {
#line 539 "lookup_switch.m"
      ll_backend__lookup_switch__BaseRegInitCode_55 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_98_98)));
    }
#line 549 "lookup_switch.m"
    {
#line 549 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__lookup_switch__DescendingSortedKinds_53, (MR_Integer) 0, ll_backend__lookup_switch__OutVars_27, ll_backend__lookup_switch__ResumeVars_25, ll_backend__lookup_switch__EndLabel_20, ll_backend__lookup_switch__StoreMap_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__AddTrailOps_26, ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__LaterVectorAddrRval_50, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59, &ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83, ll_backend__lookup_switch__STATE_VARIABLE_CI_61, ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
#line 553 "lookup_switch.m"
    {
#line 553 "lookup_switch.m"
      ll_backend__lookup_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 553 "lookup_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 1) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_20));
#line 553 "lookup_switch.m"
    }
#line 553 "lookup_switch.m"
    {
#line 553 "lookup_switch.m"
      ll_backend__lookup_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 0) = ((MR_Box) (ll_backend__lookup_switch__V_113_113));
#line 553 "lookup_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
#line 553 "lookup_switch.m"
    }
#line 552 "lookup_switch.m"
    {
#line 552 "lookup_switch.m"
      ll_backend__lookup_switch__EndLabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_112_112)));
    }
#line 556 "lookup_switch.m"
    {
#line 556 "lookup_switch.m"
      ll_backend__lookup_switch__V_115_115 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__EndLabelCode_57);
    }
#line 556 "lookup_switch.m"
    {
#line 556 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_32 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__BaseRegInitCode_55, ll_backend__lookup_switch__V_115_115);
    }
#line 489 "lookup_switch.m"
  }
#line 478 "lookup_switch.m"
}

#line 466 "lookup_switch.m"
static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
#line 466 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__closure_arg,
#line 466 "lookup_switch.m"
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
#line 466 "lookup_switch.m"
{
#line 466 "lookup_switch.m"
  {
#line 466 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
#line 466 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
#line 466 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

#line 466 "lookup_switch.m"
    {
#line 466 "lookup_switch.m"
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
#line 466 "lookup_switch.m"
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
#line 466 "lookup_switch.m"
    return ll_backend__lookup_switch__wrapper_arg_2;
#line 466 "lookup_switch.m"
  }
#line 466 "lookup_switch.m"
}

#line 456 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 456 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutTypes_3,
#line 456 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
#line 456 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5)
#line 456 "lookup_switch.m"
{
#line 460 "lookup_switch.m"
  while (MR_TRUE)
#line 460 "lookup_switch.m"
    {
#line 460 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 460 "lookup_switch.m"
      {
#line 460 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 460 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4;
#line 460 "lookup_switch.m"
        else
#line 462 "lookup_switch.m"
          {
#line 462 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__Index_11;
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rvals_12;
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Row_17;
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__Remainder_18;
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 462 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;
#line 462 "lookup_switch.m"
            MR_Integer ll_backend__lookup_switch__V_25_25;

#line 461 "lookup_switch.m"
            ll_backend__lookup_switch__Index_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 0)));
#line 461 "lookup_switch.m"
            ll_backend__lookup_switch__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 1)));
#line 463 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_2 < ll_backend__lookup_switch__Index_11);
#line 463 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 466 "lookup_switch.m"
              {
#line 466 "lookup_switch.m"
                {
#line 466 "lookup_switch.m"
                  ll_backend__lookup_switch__Row_17 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[1], ll_backend__lookup_switch__OutTypes_3);
                }
#line 467 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__HeadVar__1_1;
#line 466 "lookup_switch.m"
              }
#line 463 "lookup_switch.m"
            else
#line 469 "lookup_switch.m"
              {
#line 469 "lookup_switch.m"
                ll_backend__lookup_switch__Row_17 = ll_backend__lookup_switch__Rvals_12;
#line 470 "lookup_switch.m"
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__Rest_13;
#line 469 "lookup_switch.m"
              }
#line 472 "lookup_switch.m"
            {
#line 472 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 0) = ((MR_Box) (ll_backend__lookup_switch__Row_17));
#line 472 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 1) = ((MR_Box) (ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4));
#line 472 "lookup_switch.m"
            }
#line 473 "lookup_switch.m"
            ll_backend__lookup_switch__V_25_25 = (ll_backend__lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 473 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 473 "lookup_switch.m"
            {
#line 473 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Remainder_18;
#line 473 "lookup_switch.m"
              MR_Integer ll_backend__lookup_switch__CurIndex__tmp_copy_2 = ll_backend__lookup_switch__V_25_25;
#line 473 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;

#line 473 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4;
#line 473 "lookup_switch.m"
              ll_backend__lookup_switch__CurIndex_2 = ll_backend__lookup_switch__CurIndex__tmp_copy_2;
#line 473 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
#line 473 "lookup_switch.m"
            }
#line 473 "lookup_switch.m"
            continue;
#line 462 "lookup_switch.m"
          }
#line 460 "lookup_switch.m"
      }
#line 460 "lookup_switch.m"
      break;
#line 460 "lookup_switch.m"
    }
#line 456 "lookup_switch.m"
}

#line 314 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_6,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
#line 314 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 314 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 314 "lookup_switch.m"
{
#line 320 "lookup_switch.m"
  {
#line 320 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 320 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 320 "lookup_switch.m"
    MR_Box ll_backend__lookup_switch__Index_12;
#line 321 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 322 "lookup_switch.m"
    void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 322 "lookup_switch.m"
    {
#line 322 "lookup_switch.m"
      ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__GetTag_6), ((MR_Box) (ll_backend__lookup_switch__ConsTag_11)), &ll_backend__lookup_switch__Index_12);
    }
#line 323 "lookup_switch.m"
    {
#line 323 "lookup_switch.m"
      mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_16, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_12, ((MR_Box) (ll_backend__lookup_switch__SolnConsts_7)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
#line 320 "lookup_switch.m"
  }
#line 314 "lookup_switch.m"
}

#line 301 "lookup_switch.m"
static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 301 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
#line 301 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5)
#line 301 "lookup_switch.m"
{
#line 306 "lookup_switch.m"
  while (MR_TRUE)
#line 306 "lookup_switch.m"
    {
#line 306 "lookup_switch.m"
      /* tailcall optimized into a loop */
#line 306 "lookup_switch.m"
      {
#line 306 "lookup_switch.m"
        MR_bool ll_backend__lookup_switch__succeeded;

#line 306 "lookup_switch.m"
        if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "lookup_switch.m"
          *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4;
#line 306 "lookup_switch.m"
        else
#line 308 "lookup_switch.m"
          {
#line 308 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 308 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__TaggedConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 308 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;
#line 308 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__ConsTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 1)));
#line 308 "lookup_switch.m"
            MR_Box ll_backend__lookup_switch__Index_29;
#line 321 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch___ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 0)));
#line 322 "lookup_switch.m"
            void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));

#line 322 "lookup_switch.m"
            {
#line 322 "lookup_switch.m"
              ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__HeadVar__1_1), ((MR_Box) (ll_backend__lookup_switch__ConsTag_28)), &ll_backend__lookup_switch__Index_29);
            }
#line 323 "lookup_switch.m"
            {
#line 323 "lookup_switch.m"
              mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_20, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_29, ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_2)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18);
            }
#line 311 "lookup_switch.m"
            /* direct tailcall eliminated */
#line 311 "lookup_switch.m"
            {
#line 311 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__HeadVar__3__tmp_copy_3 = ll_backend__lookup_switch__TaggedConsIds_14;
#line 311 "lookup_switch.m"
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;

#line 311 "lookup_switch.m"
              ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4;
#line 311 "lookup_switch.m"
              ll_backend__lookup_switch__HeadVar__3_3 = ll_backend__lookup_switch__HeadVar__3__tmp_copy_3;
#line 311 "lookup_switch.m"
            }
#line 311 "lookup_switch.m"
            continue;
#line 308 "lookup_switch.m"
          }
#line 306 "lookup_switch.m"
      }
#line 306 "lookup_switch.m"
      break;
#line 306 "lookup_switch.m"
    }
#line 301 "lookup_switch.m"
}

#line 224 "lookup_switch.m"
static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
#line 224 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
#line 224 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17)
#line 224 "lookup_switch.m"
{
#line 232 "lookup_switch.m"
  {
#line 232 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;

#line 232 "lookup_switch.m"
    if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "lookup_switch.m"
      {
#line 233 "lookup_switch.m"
        {
#line 233 "lookup_switch.m"
          *ll_backend__lookup_switch__HeadVar__7_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 234 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_17 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16;
#line 234 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
#line 234 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 234 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10;
#line 234 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8;
#line 232 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 232 "lookup_switch.m"
      }
#line 232 "lookup_switch.m"
    else
#line 237 "lookup_switch.m"
      {
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCase_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedCases_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedMainConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 0)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TaggedOtherConsIds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 1)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Goal_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 3)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 0)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 1)));
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Features_57;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__SolnConsts_70;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100;
#line 237 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101;
#line 238 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 2)));
#line 244 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__TypeCtorInfo_110_110;
#line 244 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_84_84;
#line 246 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__Disjuncts_58;
#line 297 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch___LivenessRest_72;

#line 242 "lookup_switch.m"
        {
#line 242 "lookup_switch.m"
          ll_backend__lookup_switch__Features_57 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
        }
#line 243 "lookup_switch.m"
        {
#line 243 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__lookup_switch__Features_57);
        }
#line 243 "lookup_switch.m"
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 237 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 237 "lookup_switch.m"
          {
#line 244 "lookup_switch.m"
            ll_backend__lookup_switch__V_84_84 = (MR_Integer) 7;
#line 5448 "ll_backend.lookup_switch.c"
            ll_backend__lookup_switch__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0;
#line 244 "lookup_switch.m"
            {
#line 244 "lookup_switch.m"
              ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_110_110, ((MR_Box) (ll_backend__lookup_switch__V_84_84)), ll_backend__lookup_switch__Features_57);
            }
#line 244 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
#line 237 "lookup_switch.m"
            if (ll_backend__lookup_switch__succeeded)
#line 237 "lookup_switch.m"
              {
#line 246 "lookup_switch.m"
                ll_backend__lookup_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__lookup_switch__GoalExpr_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 246 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 246 "lookup_switch.m"
                  {
#line 246 "lookup_switch.m"
                    ll_backend__lookup_switch__Disjuncts_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 1)));
#line 252 "lookup_switch.m"
                    if ((ll_backend__lookup_switch__Disjuncts_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "lookup_switch.m"
                      {
#line 251 "lookup_switch.m"
                        {
#line 251 "lookup_switch.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/17", (MR_String) "disj([])");
                        }
#line 248 "lookup_switch.m"
                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 248 "lookup_switch.m"
                      }
#line 252 "lookup_switch.m"
                    else
#line 253 "lookup_switch.m"
                      {
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunct_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 0)));
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterDisjuncts_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 1)));
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstDisjunctGoalInfo_62;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__ThisResumePoint_63;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__GoalBranchStart_67;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__FirstSoln_68;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__LaterSolns_69;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_85_85;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_89_89;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91;
#line 253 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92;
#line 259 "lookup_switch.m"
                        MR_Word ll_backend__lookup_switch__V_61_61;

#line 254 "lookup_switch.m"
                        {
#line 254 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__FirstDisjunct_59);
                        }
#line 253 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 253 "lookup_switch.m"
                          {
#line 255 "lookup_switch.m"
                            {
#line 255 "lookup_switch.m"
                              ll_backend__lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__LaterDisjuncts_60);
                            }
#line 253 "lookup_switch.m"
                            if (ll_backend__lookup_switch__succeeded)
#line 253 "lookup_switch.m"
                              {
#line 257 "lookup_switch.m"
                                {
#line 257 "lookup_switch.m"
                                  ll_backend__lookup_switch__V_85_85 = hlds__goal_form__goal_may_modify_trail_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
                                }
#line 257 "lookup_switch.m"
                                {
#line 257 "lookup_switch.m"
                                  mercury__bool__or_3_p_0(ll_backend__lookup_switch__V_85_85, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86);
                                }
#line 259 "lookup_switch.m"
                                ll_backend__lookup_switch__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 0)));
#line 259 "lookup_switch.m"
                                ll_backend__lookup_switch__FirstDisjunctGoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 1)));
#line 260 "lookup_switch.m"
                                {
#line 260 "lookup_switch.m"
                                  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__lookup_switch__FirstDisjunctGoalInfo_62, &ll_backend__lookup_switch__ThisResumePoint_63);
                                }
#line 264 "lookup_switch.m"
                                if ((ll_backend__lookup_switch__ThisResumePoint_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "lookup_switch.m"
                                  ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 264 "lookup_switch.m"
                                else
#line 262 "lookup_switch.m"
                                  {
#line 262 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__ThisResumeVars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 0)));
#line 262 "lookup_switch.m"
                                    MR_Word ll_backend__lookup_switch__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 1)));

#line 263 "lookup_switch.m"
                                    {
#line 263 "lookup_switch.m"
                                      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_switch__ThisResumeVars_64, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12, &ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87);
                                    }
#line 262 "lookup_switch.m"
                                  }
#line 272 "lookup_switch.m"
                                {
#line 272 "lookup_switch.m"
                                  ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88);
                                }
#line 273 "lookup_switch.m"
                                ll_backend__lookup_switch__V_89_89 = (MR_Integer) 0;
#line 273 "lookup_switch.m"
                                {
#line 273 "lookup_switch.m"
                                  ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__lookup_switch__GoalInfo_56, ll_backend__lookup_switch__V_89_89, ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90);
                                }
#line 274 "lookup_switch.m"
                                {
#line 274 "lookup_switch.m"
                                  ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90, &ll_backend__lookup_switch__GoalBranchStart_67);
                                }
#line 276 "lookup_switch.m"
                                {
#line 276 "lookup_switch.m"
                                  ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__FirstDisjunct_59, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__FirstSoln_68, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92);
                                }
#line 253 "lookup_switch.m"
                                if (ll_backend__lookup_switch__succeeded)
#line 253 "lookup_switch.m"
                                  {
#line 278 "lookup_switch.m"
                                    {
#line 278 "lookup_switch.m"
                                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__LaterDisjuncts_60, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__LaterSolns_69, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                                    }
#line 253 "lookup_switch.m"
                                    if (ll_backend__lookup_switch__succeeded)
#line 253 "lookup_switch.m"
                                      {
#line 282 "lookup_switch.m"
                                        {
#line 282 "lookup_switch.m"
                                          ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstSoln_68));
#line 282 "lookup_switch.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterSolns_69));
#line 282 "lookup_switch.m"
                                        }
#line 282 "lookup_switch.m"
                                        ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 253 "lookup_switch.m"
                                      }
#line 253 "lookup_switch.m"
                                  }
#line 253 "lookup_switch.m"
                              }
#line 253 "lookup_switch.m"
                          }
#line 253 "lookup_switch.m"
                      }
#line 246 "lookup_switch.m"
                  }
#line 246 "lookup_switch.m"
                else
#line 285 "lookup_switch.m"
                  {
#line 285 "lookup_switch.m"
                    MR_Word ll_backend__lookup_switch__Soln_71;

#line 285 "lookup_switch.m"
                    {
#line 285 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__Goal_54);
                    }
#line 285 "lookup_switch.m"
                    if (ll_backend__lookup_switch__succeeded)
#line 285 "lookup_switch.m"
                      {
#line 289 "lookup_switch.m"
                        {
#line 289 "lookup_switch.m"
                          ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_arm_10_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Goal_54, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__Soln_71, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                        }
#line 285 "lookup_switch.m"
                        if (ll_backend__lookup_switch__succeeded)
#line 285 "lookup_switch.m"
                          {
#line 285 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
#line 285 "lookup_switch.m"
                            ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
#line 291 "lookup_switch.m"
                            {
#line 291 "lookup_switch.m"
                              ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 291 "lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__Soln_71));
#line 291 "lookup_switch.m"
                            }
#line 291 "lookup_switch.m"
                            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 285 "lookup_switch.m"
                          }
#line 285 "lookup_switch.m"
                      }
#line 285 "lookup_switch.m"
                  }
#line 237 "lookup_switch.m"
                if (ll_backend__lookup_switch__succeeded)
#line 237 "lookup_switch.m"
                  {
#line 293 "lookup_switch.m"
                    {
#line 293 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedMainConsId_51, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100);
                    }
#line 295 "lookup_switch.m"
                    {
#line 295 "lookup_switch.m"
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedOtherConsIds_52, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101);
                    }
#line 297 "lookup_switch.m"
                    {
#line 297 "lookup_switch.m"
                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__TaggedCases_41, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch___LivenessRest_72, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15, ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94, ll_backend__lookup_switch__STATE_VARIABLE_CI_17);
                    }
#line 237 "lookup_switch.m"
                  }
#line 237 "lookup_switch.m"
              }
#line 237 "lookup_switch.m"
          }
#line 237 "lookup_switch.m"
      }
#line 232 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 232 "lookup_switch.m"
  }
#line 224 "lookup_switch.m"
}

#line 158 "lookup_switch.m"
MR_Word MR_CALL 
ll_backend__lookup_switch__default_value_for_type_1_f_0(
#line 158 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
#line 158 "lookup_switch.m"
{
#line 944 "lookup_switch.m"
  {
#line 944 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 944 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__HeadVar__2_2 = ((&ll_backend__lookup_switch_vector_common_5[0 + ll_backend__lookup_switch__HeadVar__1_1]))->ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;

#line 944 "lookup_switch.m"
    return ll_backend__lookup_switch__HeadVar__2_2;
#line 944 "lookup_switch.m"
  }
#line 158 "lookup_switch.m"
}

#line 152 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Kinds_17,
#line 152 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_18,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__OutVars_19,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__ResumeVars_20,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_21,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_22,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__Liveness_23,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__AddTrailOps_24,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BaseReg_25,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_26,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34,
#line 152 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35,
#line 152 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_28,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36,
#line 152 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_37,
#line 152 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38)
#line 152 "lookup_switch.m"
{
#line 560 "lookup_switch.m"
  {
#line 560 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CurSlot_31;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__MaxSlot_32;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__BranchStart_33;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45;
#line 560 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46;

#line 568 "lookup_switch.m"
    {
#line 568 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 1, &ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42);
    }
#line 570 "lookup_switch.m"
    {
#line 570 "lookup_switch.m"
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 1, &ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46);
    }
#line 573 "lookup_switch.m"
    {
#line 573 "lookup_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46, &ll_backend__lookup_switch__BranchStart_33);
    }
#line 574 "lookup_switch.m"
    {
#line 574 "lookup_switch.m"
      ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_17, ll_backend__lookup_switch__NumPrevColumns_18, ll_backend__lookup_switch__OutVars_19, ll_backend__lookup_switch__ResumeVars_20, ll_backend__lookup_switch__BranchStart_33, ll_backend__lookup_switch__EndLabel_21, ll_backend__lookup_switch__StoreMap_22, ll_backend__lookup_switch__Liveness_23, ll_backend__lookup_switch__AddTrailOps_24, ll_backend__lookup_switch__BaseReg_25, ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__LaterVectorAddrRval_26, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35, ll_backend__lookup_switch__Code_28, ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CI_37);
    }
#line 560 "lookup_switch.m"
  }
#line 152 "lookup_switch.m"
}

#line 97 "lookup_switch.m"
void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__VarRval_15,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__LookupSwitchInfo_16,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__EndLabel_17,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_18,
#line 97 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__StartVal_19,
#line 97 "lookup_switch.m"
  MR_Integer ll_backend__lookup_switch__EndVal_20,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__NeedRangeCheck_22,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45,
#line 97 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46,
#line 97 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__Code_24,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47,
#line 97 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_48,
#line 97 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49)
#line 97 "lookup_switch.m"
{
#line 329 "lookup_switch.m"
  {
#line 329 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__StartVal_19 == (MR_Integer) 0);
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_78_78;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 0)));
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 1)));
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 2)));
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 3)));
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__IndexRval_31;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RangeCheckCode_34;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Comment_36;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__RestCode_38;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57;
#line 329 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_70_70;

#line 335 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 336 "lookup_switch.m"
      ll_backend__lookup_switch__IndexRval_31 = ll_backend__lookup_switch__VarRval_15;
#line 335 "lookup_switch.m"
    else
#line 338 "lookup_switch.m"
      {
#line 338 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_51_51;
#line 338 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_52_52;

#line 338 "lookup_switch.m"
        {
#line 338 "lookup_switch.m"
          ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__StartVal_19));
#line 338 "lookup_switch.m"
        }
#line 338 "lookup_switch.m"
        {
#line 338 "lookup_switch.m"
          ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
#line 338 "lookup_switch.m"
        }
#line 338 "lookup_switch.m"
        {
#line 338 "lookup_switch.m"
          ll_backend__lookup_switch__IndexRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 2) = ((MR_Box) (ll_backend__lookup_switch__VarRval_15));
#line 338 "lookup_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
#line 338 "lookup_switch.m"
        }
#line 338 "lookup_switch.m"
      }
#line 349 "lookup_switch.m"
#line 349 "lookup_switch.m"
    switch (ll_backend__lookup_switch__NeedRangeCheck_22) {
#line 349 "lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 349 "lookup_switch.m"
      case (MR_Integer) 1:
#line 350 "lookup_switch.m"
        {
#line 351 "lookup_switch.m"
          {
#line 351 "lookup_switch.m"
            ll_backend__lookup_switch__RangeCheckCode_34 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 350 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47;
#line 350 "lookup_switch.m"
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49;
#line 350 "lookup_switch.m"
        }
#line 349 "lookup_switch.m"
        break;
#line 349 "lookup_switch.m"
      case (MR_Integer) 0:
#line 344 "lookup_switch.m"
        {
#line 344 "lookup_switch.m"
          MR_Integer ll_backend__lookup_switch__Difference_32 = (ll_backend__lookup_switch__EndVal_20 - ll_backend__lookup_switch__StartVal_19);
#line 344 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__CmpRval_33;
#line 344 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__V_54_54;
#line 344 "lookup_switch.m"
          MR_Word ll_backend__lookup_switch__V_55_55;

#line 347 "lookup_switch.m"
          {
#line 347 "lookup_switch.m"
            ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "lookup_switch.m"
            MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (ll_backend__lookup_switch__Difference_32));
#line 347 "lookup_switch.m"
          }
#line 347 "lookup_switch.m"
          {
#line 347 "lookup_switch.m"
            ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 347 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
#line 347 "lookup_switch.m"
          }
#line 346 "lookup_switch.m"
          {
#line 346 "lookup_switch.m"
            ll_backend__lookup_switch__CmpRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 346 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 346 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 346 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_31));
#line 346 "lookup_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 3) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
#line 346 "lookup_switch.m"
          }
#line 348 "lookup_switch.m"
          {
#line 348 "lookup_switch.m"
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__CmpRval_33, &ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47, &ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
          }
#line 344 "lookup_switch.m"
        }
#line 349 "lookup_switch.m"
        break;
#line 349 "lookup_switch.m"
    }
#line 363 "lookup_switch.m"
    if (((MR_tag((MR_Word) ll_backend__lookup_switch__CaseConsts_27)) == (MR_mktag((MR_Integer) 0))))
#line 355 "lookup_switch.m"
      {
#line 355 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseValuesMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
#line 355 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseValues_37;

#line 356 "lookup_switch.m"
        {
#line 356 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[10])));
        }
#line 359 "lookup_switch.m"
        {
#line 359 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__CaseValuesMap_35, &ll_backend__lookup_switch__CaseValues_37);
        }
#line 360 "lookup_switch.m"
        {
#line 360 "lookup_switch.m"
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__CaseValues_37, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
#line 355 "lookup_switch.m"
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45;
#line 355 "lookup_switch.m"
      }
#line 363 "lookup_switch.m"
    else
#line 365 "lookup_switch.m"
      {
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseSolnMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__ResumeVars_40;
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_41;
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__AddTrailOps_43;
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__CaseSolns_44;
#line 365 "lookup_switch.m"
        MR_Word ll_backend__lookup_switch__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 1)));

#line 365 "lookup_switch.m"
        ll_backend__lookup_switch__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 0)));
#line 365 "lookup_switch.m"
        ll_backend__lookup_switch__GoalsMayModifyTrail_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 1)));
#line 370 "lookup_switch.m"
#line 370 "lookup_switch.m"
        switch (ll_backend__lookup_switch__GoalsMayModifyTrail_41) {
#line 370 "lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 370 "lookup_switch.m"
          case (MR_Integer) 0:
#line 372 "lookup_switch.m"
            ll_backend__lookup_switch__AddTrailOps_43 = (MR_Integer) 1;
#line 370 "lookup_switch.m"
            break;
#line 370 "lookup_switch.m"
          case (MR_Integer) 1:
#line 368 "lookup_switch.m"
            {
#line 368 "lookup_switch.m"
              ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, &ll_backend__lookup_switch__AddTrailOps_43);
            }
#line 370 "lookup_switch.m"
            break;
#line 370 "lookup_switch.m"
        }
#line 374 "lookup_switch.m"
        {
#line 374 "lookup_switch.m"
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[11])));
        }
#line 377 "lookup_switch.m"
        {
#line 377 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__CaseSolnMap_39, &ll_backend__lookup_switch__CaseSolns_44);
        }
#line 378 "lookup_switch.m"
        {
#line 378 "lookup_switch.m"
          ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__EndLabel_17, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__EndVal_20, ll_backend__lookup_switch__CaseSolns_44, ll_backend__lookup_switch__ResumeVars_40, ll_backend__lookup_switch__AddTrailOps_43, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
#line 365 "lookup_switch.m"
      }
#line 6087 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 383 "lookup_switch.m"
    {
#line 383 "lookup_switch.m"
      ll_backend__lookup_switch__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__RestCode_38);
    }
#line 383 "lookup_switch.m"
    {
#line 383 "lookup_switch.m"
      *ll_backend__lookup_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__Comment_36, ll_backend__lookup_switch__V_70_70);
    }
#line 329 "lookup_switch.m"
  }
#line 97 "lookup_switch.m"
}

#line 89 "lookup_switch.m"
MR_bool MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0(
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_46,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__BranchStart_11,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GetTag_12,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__TaggedCases_13,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__GoalInfo_14,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__StoreMap_15,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35,
#line 89 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36,
#line 89 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__LookupSwitchInfo_17,
#line 89 "lookup_switch.m"
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37,
#line 89 "lookup_switch.m"
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_38)
#line 89 "lookup_switch.m"
{
#line 191 "lookup_switch.m"
  {
#line 191 "lookup_switch.m"
    MR_bool ll_backend__lookup_switch__succeeded;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_47_47;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeInfo_48_48;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_50_50;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__StartCLD_19;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutVars_20;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ArmNonLocals_21;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__Liveness_22;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolnMap_23;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ResumeVars_24;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_25;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__VarTypes_26;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutTypes_27;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseConsts_29;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__ExprnOpts_30;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__UnboxFloats_31;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseSolns_32;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValues_33;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__OutLLDSTypes_34;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_39_39;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_41_41;
#line 191 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__V_45_45;
#line 206 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__CaseValuePairsMap_28;
#line 206 "lookup_switch.m"
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_49_49;

#line 198 "lookup_switch.m"
    {
#line 198 "lookup_switch.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, &ll_backend__lookup_switch__StartCLD_19);
    }
#line 199 "lookup_switch.m"
    {
#line 199 "lookup_switch.m"
      ll_backend__lookup_util__figure_out_output_vars_4_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__StartCLD_19, ll_backend__lookup_switch__GoalInfo_14, &ll_backend__lookup_switch__OutVars_20);
    }
#line 6192 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 200 "lookup_switch.m"
    {
#line 200 "lookup_switch.m"
      parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_47_47, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__ArmNonLocals_21);
    }
#line 6199 "ll_backend.lookup_switch.c"
    ll_backend__lookup_switch__TypeInfo_48_48 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0];
#line 202 "lookup_switch.m"
    {
#line 202 "lookup_switch.m"
      ll_backend__lookup_switch__V_39_39 = mercury__map__init_0_f_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48);
    }
#line 203 "lookup_switch.m"
    {
#line 203 "lookup_switch.m"
      ll_backend__lookup_switch__V_41_41 = parse_tree__set_of_var__init_0_f_0(ll_backend__lookup_switch__TypeCtorInfo_47_47);
    }
#line 201 "lookup_switch.m"
    {
#line 201 "lookup_switch.m"
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__GetTag_12, ll_backend__lookup_switch__TaggedCases_13, ll_backend__lookup_switch__OutVars_20, ll_backend__lookup_switch__ArmNonLocals_21, ll_backend__lookup_switch__StoreMap_15, &ll_backend__lookup_switch__Liveness_22, ll_backend__lookup_switch__V_39_39, &ll_backend__lookup_switch__CaseSolnMap_23, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36, ll_backend__lookup_switch__V_41_41, &ll_backend__lookup_switch__ResumeVars_24, (MR_Integer) 0, &ll_backend__lookup_switch__GoalsMayModifyTrail_25, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__STATE_VARIABLE_CI_38);
    }
#line 191 "lookup_switch.m"
    if (ll_backend__lookup_switch__succeeded)
#line 191 "lookup_switch.m"
      {
#line 204 "lookup_switch.m"
        {
#line 204 "lookup_switch.m"
          ll_backend__code_info__get_vartypes_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__VarTypes_26);
        }
#line 205 "lookup_switch.m"
        {
#line 205 "lookup_switch.m"
          hlds__vartypes__lookup_var_types_3_p_0(ll_backend__lookup_switch__VarTypes_26, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__OutTypes_27);
        }
#line 6230 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 206 "lookup_switch.m"
        {
#line 206 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_49_49, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseValuePairsMap_28);
        }
#line 206 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 207 "lookup_switch.m"
          {
#line 207 "lookup_switch.m"
            ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 207 "lookup_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseValuePairsMap_28));
#line 207 "lookup_switch.m"
          }
#line 206 "lookup_switch.m"
        else
#line 209 "lookup_switch.m"
          {
#line 209 "lookup_switch.m"
            MR_Word ll_backend__lookup_switch__V_44_44;

#line 210 "lookup_switch.m"
            {
#line 210 "lookup_switch.m"
              ll_backend__lookup_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 0) = ((MR_Box) (ll_backend__lookup_switch__ResumeVars_24));
#line 210 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 1) = ((MR_Box) (ll_backend__lookup_switch__GoalsMayModifyTrail_25));
#line 210 "lookup_switch.m"
            }
#line 209 "lookup_switch.m"
            {
#line 209 "lookup_switch.m"
              ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseSolnMap_23));
#line 209 "lookup_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 1) = ((MR_Box) (ll_backend__lookup_switch__V_44_44));
#line 209 "lookup_switch.m"
            }
#line 209 "lookup_switch.m"
          }
#line 212 "lookup_switch.m"
        {
#line 212 "lookup_switch.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 213 "lookup_switch.m"
        {
#line 213 "lookup_switch.m"
          ll_backend__lookup_switch__UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__lookup_switch__ExprnOpts_30);
        }
#line 214 "lookup_switch.m"
        {
#line 214 "lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseSolns_32);
        }
#line 217 "lookup_switch.m"
        ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6293 "ll_backend.lookup_switch.c"
        ll_backend__lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 217 "lookup_switch.m"
        {
#line 217 "lookup_switch.m"
          backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_50_50, ll_backend__lookup_switch__CaseSolns_32, ll_backend__lookup_switch__V_45_45, &ll_backend__lookup_switch__CaseValues_33);
        }
#line 218 "lookup_switch.m"
        {
#line 218 "lookup_switch.m"
          ll_backend__lookup_switch__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__lookup_switch__UnboxFloats_31, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__CaseValues_33, &ll_backend__lookup_switch__OutLLDSTypes_34);
        }
#line 191 "lookup_switch.m"
        if (ll_backend__lookup_switch__succeeded)
#line 191 "lookup_switch.m"
          {
#line 219 "lookup_switch.m"
            {
#line 219 "lookup_switch.m"
              MR_Word base;
#line 219 "lookup_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 219 "lookup_switch.m"
              *ll_backend__lookup_switch__LookupSwitchInfo_17 = base;
#line 219 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseConsts_29));
#line 219 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__lookup_switch__OutVars_20));
#line 219 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__lookup_switch__OutLLDSTypes_34));
#line 219 "lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__lookup_switch__Liveness_22));
#line 219 "lookup_switch.m"
            }
#line 219 "lookup_switch.m"
            ll_backend__lookup_switch__succeeded = MR_TRUE;
#line 191 "lookup_switch.m"
          }
#line 191 "lookup_switch.m"
      }
#line 191 "lookup_switch.m"
    return ll_backend__lookup_switch__succeeded;
#line 191 "lookup_switch.m"
  }
#line 89 "lookup_switch.m"
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
