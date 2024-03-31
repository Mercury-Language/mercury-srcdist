/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version rotd-2024-03-31
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ll_backend.lookup_switch.
// :- implementation.

/*
INIT mercury__ll_backend__lookup_switch__init
ENDINIT
*/

#include "ll_backend.lookup_switch.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2;

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_ordinal_ordered_case_kind_0[3];

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3];

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3];

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_FA_TypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__lookup_switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_rval_0backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[8];

static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[8];

static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0;

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1];

static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1];

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1];

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1];

static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__589__1_2_p_0(
  MR_Word OutVars_27,
  MR_Word HeadVar__2_67);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
  MR_Word IndexRval_14,
  MR_Word StoreMap_15,
  MR_Integer StartVal_16,
  MR_Word CaseValues_18,
  MR_Word OutVars_19,
  MR_Word OutTypes_20,
  MR_Word NeedBitVecCheck_21,
  MR_Word Liveness_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word STATE_VARIABLE_CLD_0_41);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
  MR_Word IndexRval_10,
  MR_Word CaseVals_11,
  MR_Integer Start_12,
  MR_Word * CheckCode_14,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29,
  MR_Word STATE_VARIABLE_CLD_0_30,
  MR_Word * STATE_VARIABLE_CLD_31);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Start_2,
  MR_Integer WordBits_3,
  MR_Word STATE_VARIABLE_BitMap_0_4,
  MR_Word * STATE_VARIABLE_BitMap_5);

static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurIndex_2,
  MR_Word OutTypes_3,
  MR_Word STATE_VARIABLE_RowCord_0_4,
  MR_Word * STATE_VARIABLE_RowCord_5);

static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
  MR_Word IndexRval_19,
  MR_Word EndLabel_20,
  MR_Word StoreMap_21,
  MR_Integer StartVal_22,
  MR_Integer EndVal_23,
  MR_Word CaseSolns_24,
  MR_Word ResumeVars_25,
  MR_Word AddTrailOps_26,
  MR_Word OutVars_27,
  MR_Word OutTypes_28,
  MR_Word NeedBitVecCheck_29,
  MR_Word Liveness_30,
  MR_Word STATE_VARIABLE_MaybeEnd_0_59,
  MR_Word * STATE_VARIABLE_MaybeEnd_60,
  MR_Word * Code_32,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63);

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
  MR_Integer CurIndex_1,
  MR_Integer EndVal_2,
  MR_Word OutTypes_3,
  MR_Integer NumOutTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_7,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_8,
  MR_Word * STATE_VARIABLE_LaterSolnArray_9,
  MR_Integer STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * STATE_VARIABLE_FailCaseCount_11,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_12,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_13,
  MR_Integer STATE_VARIABLE_SeveralSolnCaseCount_0_14,
  MR_Integer * STATE_VARIABLE_SeveralSolnCaseCount_15);

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
  MR_Word OutTypes_5,
  MR_Word * MainRow_6,
  MR_Integer STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * STATE_VARIABLE_FailCaseCount_11);

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_19_p_0(
  MR_Word Kind_20,
  MR_Word Kinds_21,
  MR_Integer NumPrevColumns_22,
  MR_Word OutVars_23,
  MR_Word ResumeVars_24,
  MR_Word BranchStart_25,
  MR_Word EndLabel_26,
  MR_Word StoreMap_27,
  MR_Word Liveness_28,
  MR_Word AddTrailOps_29,
  MR_Word BaseReg_30,
  MR_Word CurSlot_31,
  MR_Word MaxSlot_32,
  MR_Word LaterVectorAddrRval_33,
  MR_Word * Code_34,
  MR_Word STATE_VARIABLE_MaybeEnd_0_51,
  MR_Word * STATE_VARIABLE_MaybeEnd_52,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54);

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_kind_several_solns_18_p_0(
  MR_Integer NumPrevColumns_19,
  MR_Word OutVars_20,
  MR_Word ResumeVars_21,
  MR_Word BranchStart_22,
  MR_Word EndLabel_23,
  MR_Word StoreMap_24,
  MR_Word Liveness_25,
  MR_Word AddTrailOps_26,
  MR_Word BaseReg_27,
  MR_Word CurSlot_28,
  MR_Word MaxSlot_29,
  MR_Word LaterVectorAddrRval_30,
  MR_Word * TestOp_31,
  MR_Word * KindCode_32,
  MR_Word STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * STATE_VARIABLE_MaybeEnd_71,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73);

static MR_Box MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_19_p_0(
  MR_Word TypeInfo_for_Key_110,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_8,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_9,
  MR_Word STATE_VARIABLE_CaseIdToSolnsMap_0_10,
  MR_Word * STATE_VARIABLE_CaseIdToSolnsMap_11,
  MR_Word STATE_VARIABLE_MaybeEnd_0_12,
  MR_Word * STATE_VARIABLE_MaybeEnd_13,
  MR_Word STATE_VARIABLE_ResumeVars_0_14,
  MR_Word * STATE_VARIABLE_ResumeVars_15,
  MR_Word STATE_VARIABLE_GoalsMayModifyTrail_0_16,
  MR_Word * STATE_VARIABLE_GoalsMayModifyTrail_17,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19);

static void MR_CALL 
ll_backend__lookup_switch__record_case_id_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_Key_15,
  MR_Word GetTag_6,
  MR_Word CaseId_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_13,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_14);

static void MR_CALL 
ll_backend__lookup_switch__record_case_id_for_tagged_cons_ids_5_p_0(
  MR_Word TypeInfo_for_Key_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_4,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_5);

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[42][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_4[8][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_5[1];

static /* final */ const int64_t ll_backend__lookup_switch_scalar_common_6[1];

static /* final */ const uint64_t ll_backend__lookup_switch_scalar_common_7[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_8[1][6];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_9[2][5];


struct ll_backend__lookup_switch__vector_common_type_10_0_s {
  const MR_Word ll_backend__lookup_switch__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct ll_backend__lookup_switch__vector_common_type_10_0_s ll_backend__lookup_switch_vector_common_10[10];



static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[42][2] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[3])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_5[0])
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_Word) (INT16_C(0)))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_Word) (INT32_C(0)))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0])
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_Word) (INT8_C(0)))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_4[4])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_7[0])
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_Word) (UINT8_C(0)))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[6])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[7])))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_9[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_fail_row_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_9[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_9[0])),
    ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_9[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_4[8][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "simple lookup switch")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "several soln lookup switch")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) -1)) },
  /* row   7 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_5[1] = {
  /* row   0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const int64_t ll_backend__lookup_switch_scalar_common_6[1] = {
  /* row   0 */
  INT64_C(0),
};

static /* final */ const uint64_t ll_backend__lookup_switch_scalar_common_7[1] = {
  /* row   0 */
  UINT64_C(0),
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__lookup_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_9[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct ll_backend__lookup_switch__vector_common_type_10_0_s ll_backend__lookup_switch_vector_common_10[10] = {
  /* row   0 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9])) },
  /* row   1 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[20])) },
  /* row   2 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[19])) },
  /* row   3 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[28])) },
  /* row   4 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[13])) },
  /* row   5 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[22])) },
  /* row   6 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[15])) },
  /* row   7 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[24])) },
  /* row   8 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[17])) },
  /* row   9 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[26])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
  (MR_String) "kind_zero_solns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
  (MR_String) "kind_one_soln",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
  (MR_String) "kind_several_solns",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_ordinal_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0[3] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2,
  &ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0
};

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__lookup_switch____Unify____case_kind_0_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____case_kind_0_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "case_kind",
  { ll_backend__lookup_switch__ll_backend__lookup_switch__enum_name_ordered_case_kind_0 },
  { ll_backend__lookup_switch__ll_backend__lookup_switch__enum_ordinal_ordered_case_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_case_kind_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
  }
};

static const MR_FA_TypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__lookup_switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_rval_0backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_3,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
    (MR_TypeInfo) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) }
};

static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[8] = {
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_case_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__backend_libs__lookup_switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_rval_0backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)
};

static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[8] = {
  (MR_String) "lsi_key_to_case_map",
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness",
  (MR_String) "lsi_branch_end",
  (MR_String) "lsi_code_info",
  (MR_String) "lsi_code_loc_dep"
};

static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 = {
  (MR_String) "lookup_switch_info",
  INT16_C(8),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0,
  ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1] = { &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 };

static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1] = { &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 };

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001)),
  ((MR_Box) (ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001)),
  (MR_String) "ll_backend.lookup_switch",
  (MR_String) "lookup_switch_info",
  { ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1 },
  { ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1,

};

static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__589__1_2_p_0(
  MR_Word OutVars_27,
  MR_Word HeadVar__2_67)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]), ((MR_Box) (OutVars_27)), ((MR_Box) (HeadVar__2_67)));
  return succeeded;
}

void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
  MR_Word TypeInfo_for_Key_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_Key_29, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_3[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[6]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                ll_backend__code_info____Compare____code_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  ll_backend__code_loc_dep____Compare____code_loc_dep_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
  MR_Word TypeInfo_for_Key_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_Key_21, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_25_25 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_3[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_26_26 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = ll_backend__code_info____Unify____code_info_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                  succeeded = ll_backend__code_loc_dep____Unify____code_loc_dep_0_0(ArgX8_17, ArgY8_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
ll_backend__lookup_switch__default_value_for_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[11]));
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[30]));
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        HeadVar__2_2 = ((&ll_backend__lookup_switch_vector_common_10[0 + Var_48]))->ll_backend__lookup_switch__vector_common_type_10_0__vct_10_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word LookupSwitchInfo_13,
  MR_Word EndLabel_14,
  MR_Word StoreMap_15,
  MR_Integer StartVal_16,
  MR_Integer EndVal_17,
  MR_Word NeedBitVecCheck_18,
  MR_Word NeedRangeCheck_19,
  MR_Word * STATE_VARIABLE_MaybeEnd_46,
  MR_Word * Code_21,
  MR_Word * STATE_VARIABLE_CI_47)
{
  MR_bool succeeded = (StartVal_16 == (MR_Integer) 0);
  MR_Word KeyToCaseMap_23 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 0))));
  MR_Word CaseConsts_24 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 1))));
  MR_Word OutVars_25 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 2))));
  MR_Word OutTypes_26 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 3))));
  MR_Word Liveness_27 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 4))));
  MR_Word CLD0_28 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 7))));
  MR_Word IndexRval_29;
  MR_Word RangeCheckCode_32;
  MR_Word CLD_33;
  MR_Word Comment_35;
  MR_Word RestCode_38;
  MR_Word STATE_VARIABLE_MaybeEnd_48_48 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 5))));
  MR_Word STATE_VARIABLE_CI_49_49 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_13, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_CI_57_57;
  MR_Word Var_70;

  if (succeeded)
    IndexRval_29 = VarRval_12;
  else
  {
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (StartVal_16));
    }
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      IndexRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IndexRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IndexRval_29, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_4[0])));
      MR_hl_field(3, IndexRval_29, 2) = ((MR_Box) (VarRval_12));
      MR_hl_field(3, IndexRval_29, 3) = ((MR_Box) (Var_52));
    }
  }
  switch (NeedRangeCheck_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        RangeCheckCode_32 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        CLD_33 = CLD0_28;
        STATE_VARIABLE_CI_57_57 = STATE_VARIABLE_CI_49_49;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Difference_30 = (MR_Integer) ((MR_Unsigned) EndVal_17 - (MR_Unsigned) StartVal_16);
        MR_Word CmpRval_31;
        MR_Word Var_55;
        MR_Word Var_56;

        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Difference_30));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          CmpRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CmpRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CmpRval_31, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(3, CmpRval_31, 2) = ((MR_Box) (IndexRval_29));
          MR_hl_field(3, CmpRval_31, 3) = ((MR_Box) (Var_55));
        }
        ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(CmpRval_31, &RangeCheckCode_32, STATE_VARIABLE_CI_49_49, &STATE_VARIABLE_CI_57_57, CLD0_28, &CLD_33);
      }
      break;
  }
  if (((MR_tag((MR_Word) CaseConsts_24)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_34 = ((MR_Word) ((MR_hl_field(0, CaseConsts_24, (MR_Integer) 0))));
    MR_Word KeyToSolnsMap_36;
    MR_Word KeySolnsAL_37;

    Comment_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[7])));
    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), KeyToCaseMap_23, CaseIdToValuesMap_34, &KeyToSolnsMap_36);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), KeyToSolnsMap_36, &KeySolnsAL_37);
    ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(IndexRval_29, StoreMap_15, StartVal_16, KeySolnsAL_37, OutVars_25, OutTypes_26, NeedBitVecCheck_18, Liveness_27, &RestCode_38, STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CI_47, CLD_33);
    *STATE_VARIABLE_MaybeEnd_46 = STATE_VARIABLE_MaybeEnd_48_48;
  }
  else
  {
    MR_Word CaseIdToValuesListMap_39 = ((MR_Word) ((MR_hl_field(1, CaseConsts_24, (MR_Integer) 0))));
    MR_Word ResumeVars_40;
    MR_Word GoalsMayModifyTrail_41;
    MR_Word AddTrailOps_43;
    MR_Word KeyToSolnsListMap_44;
    MR_Word KeySolnsListAL_45;
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, CaseConsts_24, (MR_Integer) 1))));

    ResumeVars_40 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 0))));
    GoalsMayModifyTrail_41 = ((MR_Unsigned) ((MR_hl_field(0, Var_63, (MR_Integer) 1))) & (MR_Integer) 1);
    switch (GoalsMayModifyTrail_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AddTrailOps_43 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_57_57, &AddTrailOps_43);
        break;
    }
    Comment_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[8])));
    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), KeyToCaseMap_23, CaseIdToValuesListMap_39, &KeyToSolnsListMap_44);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), KeyToSolnsListMap_44, &KeySolnsListAL_45);
    ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(IndexRval_29, EndLabel_14, StoreMap_15, StartVal_16, EndVal_17, KeySolnsListAL_45, ResumeVars_40, AddTrailOps_43, OutVars_25, OutTypes_26, NeedBitVecCheck_18, Liveness_27, STATE_VARIABLE_MaybeEnd_48_48, STATE_VARIABLE_MaybeEnd_46, &RestCode_38, STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CI_47, CLD_33);
  }
  Var_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RangeCheckCode_32, RestCode_38);
  *Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comment_35, Var_70);
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
  MR_Word IndexRval_14,
  MR_Word StoreMap_15,
  MR_Integer StartVal_16,
  MR_Word CaseValues_18,
  MR_Word OutVars_19,
  MR_Word OutTypes_20,
  MR_Word NeedBitVecCheck_21,
  MR_Word Liveness_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word STATE_VARIABLE_CLD_0_41)
{
  MR_bool succeeded;
  MR_Word CheckBitVecCode_26;
  MR_Word BaseRegInitCode_27;
  MR_Word BranchEndCode_38;
  MR_Word STATE_VARIABLE_CI_42_42;
  MR_Word STATE_VARIABLE_CLD_43_43;
  MR_Word STATE_VARIABLE_CLD_63_63;
  MR_Word Var_65;
  MR_Word _MaybeEnd_37;

  switch (NeedBitVecCheck_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        CheckBitVecCode_26 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_42_42 = STATE_VARIABLE_CI_0_39;
        STATE_VARIABLE_CLD_43_43 = STATE_VARIABLE_CLD_0_41;
      }
      break;
    case (MR_Integer) 0:
      ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(IndexRval_14, CaseValues_18, StartVal_16, &CheckBitVecCode_26, STATE_VARIABLE_CI_0_39, &STATE_VARIABLE_CI_42_42, STATE_VARIABLE_CLD_0_41, &STATE_VARIABLE_CLD_43_43);
      break;
  }
  if ((OutVars_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    BaseRegInitCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_40 = STATE_VARIABLE_CI_42_42;
    STATE_VARIABLE_CLD_63_63 = STATE_VARIABLE_CLD_43_43;
  }
  else
  {
    MR_Word BaseReg_30;
    MR_Integer NumOutVars_31;
    MR_Word VectorRvalsCord_32;
    MR_Word VectorRvals_33;
    MR_Word VectorAddr_34;
    MR_Word VectorAddrRval_35;
    MR_Word BaseRval_36;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_15, (MR_Integer) 0, &BaseReg_30, STATE_VARIABLE_CLD_43_43, &STATE_VARIABLE_CLD_45_45);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]), OutVars_19, &NumOutVars_31);
    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]));
    ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(CaseValues_18, StartVal_16, OutTypes_20, Var_46, &VectorRvalsCord_32);
    VectorRvals_33 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), VectorRvalsCord_32);
    ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_20, VectorRvals_33, &VectorAddr_34, STATE_VARIABLE_CI_42_42, STATE_VARIABLE_CI_40);
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (VectorAddr_34));
      MR_hl_field(3, Var_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      VectorAddrRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, VectorAddrRval_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, VectorAddrRval_35, 1) = ((MR_Box) (Var_48));
    }
    succeeded = (NumOutVars_31 == (MR_Integer) 1);
    if (succeeded)
      BaseRval_36 = IndexRval_14;
    else
    {
      MR_Word Var_52;
      MR_Word Var_53;

      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (NumOutVars_31));
      }
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        BaseRval_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, BaseRval_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, BaseRval_36, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[31])));
        MR_hl_field(3, BaseRval_36, 2) = ((MR_Box) (IndexRval_14));
        MR_hl_field(3, BaseRval_36, 3) = ((MR_Box) (Var_52));
      }
    }
    {
      Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_57, 0) = ((MR_Box) (VectorAddrRval_35));
      MR_hl_field(2, Var_57, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5])));
      MR_hl_field(2, Var_57, 2) = ((MR_Box) (BaseRval_36));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (BaseReg_30));
      MR_hl_field(3, Var_55, 2) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
    }
    BaseRegInitCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_19, (MR_Integer) 0, BaseReg_30, *STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_45_45, &STATE_VARIABLE_CLD_63_63);
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_15, Liveness_22, (MR_Word) ((MR_Unsigned) 0U), &_MaybeEnd_37, &BranchEndCode_38, STATE_VARIABLE_CLD_63_63);
  Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseRegInitCode_27, BranchEndCode_38);
  *Code_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CheckBitVecCode_26, Var_65);
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
  MR_Word IndexRval_10,
  MR_Word CaseVals_11,
  MR_Integer Start_12,
  MR_Word * CheckCode_14,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29,
  MR_Word STATE_VARIABLE_CLD_0_30,
  MR_Word * STATE_VARIABLE_CLD_31)
{
  MR_bool succeeded;
  MR_Word Globals_17;
  MR_Word WordSize_18;
  MR_Integer WordBits_19;
  MR_Integer Log2WordBits_20;
  MR_Word BitVecArgs_21;
  MR_Word BitVecRval_22;
  MR_Word Word_24;
  MR_Word BitNum_25;
  MR_Word HasBit_27;
  MR_Word STATE_VARIABLE_CI_32_32;
  MR_Word Var_51;
  MR_Word BitMap0_59;
  MR_Word BitMap_60;
  MR_Word WordVals_61;
  MR_Word DataAddr_62;
  MR_Word Var_64;
  MR_Word SingleWord_23;
  MR_Word Var_33;

  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_28, &Globals_17);
  backend_libs__switch_util__get_target_host_min_word_size_2_p_0(Globals_17, &WordSize_18);
  switch (WordSize_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        WordBits_19 = (MR_Integer) 32;
        Log2WordBits_20 = (MR_Integer) 5;
      }
      break;
    case (MR_Integer) 1:
      {
        WordBits_19 = (MR_Integer) 64;
        Log2WordBits_20 = (MR_Integer) 6;
      }
      break;
  }
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &BitMap0_59);
  ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(CaseVals_11, Start_12, WordBits_19, BitMap0_59, &BitMap_60);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BitMap_60, &WordVals_61);
  ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(WordVals_61, (MR_Integer) 0, &BitVecArgs_21);
  ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(BitVecArgs_21, &DataAddr_62, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_32_32);
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (DataAddr_62));
    MR_hl_field(3, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    BitVecRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, BitVecRval_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, BitVecRval_22, 1) = ((MR_Box) (Var_64));
  }
  succeeded = (BitVecArgs_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SingleWord_23 = ((MR_Word) ((MR_hl_field(1, BitVecArgs_21, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(1, BitVecArgs_21, (MR_Integer) 1))));
    succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    Word_24 = SingleWord_23;
    BitNum_25 = IndexRval_10;
  }
  else
  {
    MR_Word WordNum_26;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;

    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Log2WordBits_20));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      WordNum_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, WordNum_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, WordNum_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[38])));
      MR_hl_field(3, WordNum_26, 2) = ((MR_Box) (IndexRval_10));
      MR_hl_field(3, WordNum_26, 3) = ((MR_Box) (Var_37));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5])));
      MR_hl_field(3, Var_39, 2) = ((MR_Box) (BitVecRval_22));
      MR_hl_field(3, Var_39, 3) = ((MR_Box) (WordNum_26));
    }
    {
      Word_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Word_24, 0) = ((MR_Box) (Var_39));
    }
    Var_47 = (MR_Integer) ((MR_Unsigned) WordBits_19 - (MR_Unsigned) 1);
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      BitNum_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BitNum_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, BitNum_25, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[39])));
      MR_hl_field(3, BitNum_25, 2) = ((MR_Box) (IndexRval_10));
      MR_hl_field(3, BitNum_25, 3) = ((MR_Box) (Var_45));
    }
  }
  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[40])));
    MR_hl_field(3, Var_51, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[41])));
    MR_hl_field(3, Var_51, 3) = ((MR_Box) (BitNum_25));
  }
  {
    HasBit_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HasBit_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, HasBit_27, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[39])));
    MR_hl_field(3, HasBit_27, 2) = ((MR_Box) (Var_51));
    MR_hl_field(3, HasBit_27, 3) = ((MR_Box) (Word_24));
  }
  ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(HasBit_27, CheckCode_14, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_0_30, STATE_VARIABLE_CLD_31);
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Start_2,
  MR_Integer WordBits_3,
  MR_Word STATE_VARIABLE_BitMap_0_4,
  MR_Word * STATE_VARIABLE_BitMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BitMap_5 = STATE_VARIABLE_BitMap_0_4;
    else
    {
      MR_Integer Tag_11;
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Val_17;
      MR_Integer Word_18;
      MR_Integer Offset_19;
      MR_Integer X1_21;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BitMap_28_28;
      MR_Integer X0_20;
      MR_Box conv0_X0_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BitMap_0_4;

      Tag_11 = ((MR_Integer) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      Val_17 = (MR_Integer) ((MR_Unsigned) Tag_11 - (MR_Unsigned) Start_2);
      Word_18 = mercury__int__f_47_47_2_f_0(Val_17, WordBits_3);
      Offset_19 = mercury__int__mod_2_f_0(Val_17, WordBits_3);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_BitMap_0_4, Word_18, &conv0_X0_20);
      if (succeeded)
      {
        X0_20 = ((MR_Integer) (conv0_X0_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_25;

        Var_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Offset_19);
        X1_21 = (X0_20 | Var_25);
      }
      else
        X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Offset_19);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Word_18, ((MR_Box) (X1_21)), STATE_VARIABLE_BitMap_0_4, &STATE_VARIABLE_BitMap_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_13;
      next_value_of_STATE_VARIABLE_BitMap_0_4 = STATE_VARIABLE_BitMap_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BitMap_0_4 = next_value_of_STATE_VARIABLE_BitMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Word_5;
    MR_Integer Bits_6;
    MR_Word Rest_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Rval_9;
    MR_Word Rvals_10;
    MR_Integer WordVal_11;
    MR_Word Remainder_12;
    MR_Integer Count1_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_16;

    Word_5 = ((MR_Integer) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
    Bits_6 = ((MR_Integer) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
    succeeded = (Count_2 < Word_5);
    if (succeeded)
    {
      WordVal_11 = (MR_Integer) 0;
      Remainder_12 = HeadVar__1_1;
    }
    else
    {
      WordVal_11 = Bits_6;
      Remainder_12 = Rest_7;
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (WordVal_11));
    }
    {
      Rval_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Rval_9, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Rval_9, 1) = ((MR_Box) (Var_16));
    }
    Count1_13 = (MR_Integer) ((MR_Unsigned) Count_2 + (MR_Unsigned) 1);
    ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(Remainder_12, Count1_13, &Rvals_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Rval_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Rvals_10));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurIndex_2,
  MR_Word OutTypes_3,
  MR_Word STATE_VARIABLE_RowCord_0_4,
  MR_Word * STATE_VARIABLE_RowCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RowCord_5 = STATE_VARIABLE_RowCord_0_4;
    else
    {
      MR_Integer Index_11;
      MR_Word Rvals_12;
      MR_Word Rest0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Row_17;
      MR_Word Rest_18;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RowCord_24_24;
      MR_Integer Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurIndex_2;
      MR_Word next_value_of_STATE_VARIABLE_RowCord_0_4;

      Index_11 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      Rvals_12 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
      succeeded = (CurIndex_2 < Index_11);
      if (succeeded)
      {
        Row_17 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[4]), OutTypes_3);
        Rest_18 = HeadVar__1_1;
      }
      else
      {
        Row_17 = Rvals_12;
        Rest_18 = Rest0_13;
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), ((MR_Box) (Row_17)), STATE_VARIABLE_RowCord_0_4, &STATE_VARIABLE_RowCord_24_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_18;
      next_value_of_CurIndex_2 = Var_25;
      next_value_of_STATE_VARIABLE_RowCord_0_4 = STATE_VARIABLE_RowCord_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurIndex_2 = next_value_of_CurIndex_2;
      STATE_VARIABLE_RowCord_0_4 = next_value_of_STATE_VARIABLE_RowCord_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__589__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
  MR_Word IndexRval_19,
  MR_Word EndLabel_20,
  MR_Word StoreMap_21,
  MR_Integer StartVal_22,
  MR_Integer EndVal_23,
  MR_Word CaseSolns_24,
  MR_Word ResumeVars_25,
  MR_Word AddTrailOps_26,
  MR_Word OutVars_27,
  MR_Word OutTypes_28,
  MR_Word NeedBitVecCheck_29,
  MR_Word Liveness_30,
  MR_Word STATE_VARIABLE_MaybeEnd_0_59,
  MR_Word * STATE_VARIABLE_MaybeEnd_60,
  MR_Word * Code_32,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63)
{
  MR_bool succeeded;
  MR_Integer NumOutTypes_35;
  MR_Word DummyLaterSolnRow_37;
  MR_Word LaterSolnArrayCord0_38;
  MR_Word MainRows_39;
  MR_Word LaterSolnArrayCord_40;
  MR_Integer FailCaseCount_41;
  MR_Integer OneSolnCaseCount_42;
  MR_Integer SeveralSolnCaseCount_43;
  MR_Word LaterSolnArray_44;
  MR_Word MainRowTypes_45;
  MR_Integer MainNumColumns_46;
  MR_Word MainVectorAddr_47;
  MR_Word MainVectorAddrRval_48;
  MR_Word LaterVectorAddr_49;
  MR_Word LaterVectorAddrRval_50;
  MR_Word AscendingSortedCountKinds_51;
  MR_Word DescendingSortedCountKinds_52;
  MR_Word DescendingSortedKinds_53;
  MR_Word OoMDescendingSortedKinds_54;
  MR_Word BaseReg_55;
  MR_Word BaseRegInitCode_56;
  MR_Word KindsCode_57;
  MR_Word EndLabelCode_58;
  MR_Word Var_64;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_CI_80_80;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_CI_83_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word STATE_VARIABLE_CLD_97_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_105;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_117;
  MR_Integer Var_72;
  MR_Integer Var_118;

  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_9[1]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (OutVars_27));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_64, (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "no OutVars");
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), OutTypes_28, &NumOutTypes_35);
  DummyLaterSolnRow_37 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[3]), OutTypes_28);
  LaterSolnArrayCord0_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), ((MR_Box) (DummyLaterSolnRow_37)));
  ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(StartVal_22, EndVal_23, OutTypes_28, NumOutTypes_35, CaseSolns_24, &MainRows_39, (MR_Integer) 1, LaterSolnArrayCord0_38, &LaterSolnArrayCord_40, (MR_Integer) 0, &FailCaseCount_41, (MR_Integer) 0, &OneSolnCaseCount_42, (MR_Integer) 0, &SeveralSolnCaseCount_43);
  LaterSolnArray_44 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), LaterSolnArrayCord_40);
  succeeded = (NeedBitVecCheck_29 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_72 = (MR_Integer) 0;
    succeeded = (FailCaseCount_41 <= Var_72);
  }
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_118 = (MR_Integer) 0;
    succeeded = (FailCaseCount_41 > Var_118);
    if (succeeded)
      succeeded = (NeedBitVecCheck_29 != (MR_Integer) 0);
    succeeded = !(succeeded);
  }
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "bad FailCaseCount");
      return;
    }
  Var_75 = (MR_Word) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_4[0]));
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (OutTypes_28));
  }
  {
    MainRowTypes_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_45, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, MainRowTypes_45, 1) = ((MR_Box) (Var_77));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), MainRowTypes_45, &MainNumColumns_46);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_45, MainRows_39, &MainVectorAddr_47, STATE_VARIABLE_CI_0_61, &STATE_VARIABLE_CI_80_80);
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_81, 1) = ((MR_Box) (MainVectorAddr_47));
    MR_hl_field(3, Var_81, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_48, 1) = ((MR_Box) (Var_81));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_28, LaterSolnArray_44, &LaterVectorAddr_49, STATE_VARIABLE_CI_80_80, &STATE_VARIABLE_CI_83_83);
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_84, 1) = ((MR_Box) (LaterVectorAddr_49));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_50, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (FailCaseCount_41));
    MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (OneSolnCaseCount_42));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (SeveralSolnCaseCount_43));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_2[0]), Var_86, &AscendingSortedCountKinds_51);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_2[0]), AscendingSortedCountKinds_51, &DescendingSortedCountKinds_52);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_52, &DescendingSortedKinds_53);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedKinds_53, &OoMDescendingSortedKinds_54);
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_21, (MR_Integer) 0, &BaseReg_55, STATE_VARIABLE_CLD_0_63, &STATE_VARIABLE_CLD_97_97);
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (MainNumColumns_46));
  }
  {
    Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_105, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[31])));
    MR_hl_field(3, Var_105, 2) = ((MR_Box) (IndexRval_19));
    MR_hl_field(3, Var_105, 3) = ((MR_Box) (Var_108));
  }
  {
    Var_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_101, 0) = ((MR_Box) (MainVectorAddrRval_48));
    MR_hl_field(2, Var_101, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5])));
    MR_hl_field(2, Var_101, 2) = ((MR_Box) (Var_105));
  }
  {
    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (BaseReg_55));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (Var_100));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
  }
  BaseRegInitCode_56 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(OoMDescendingSortedKinds_54, (MR_Integer) 0, OutVars_27, ResumeVars_25, EndLabel_20, StoreMap_21, Liveness_30, AddTrailOps_26, BaseReg_55, LaterVectorAddrRval_50, &KindsCode_57, STATE_VARIABLE_MaybeEnd_0_59, STATE_VARIABLE_MaybeEnd_60, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_97_97);
  {
    Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_115, 1) = ((MR_Box) (EndLabel_20));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
  }
  EndLabelCode_58 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
  Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), KindsCode_57, EndLabelCode_58);
  *Code_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseRegInitCode_56, Var_117);
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
  MR_Integer CurIndex_1,
  MR_Integer EndVal_2,
  MR_Word OutTypes_3,
  MR_Integer NumOutTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_7,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_8,
  MR_Word * STATE_VARIABLE_LaterSolnArray_9,
  MR_Integer STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * STATE_VARIABLE_FailCaseCount_11,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_12,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_13,
  MR_Integer STATE_VARIABLE_SeveralSolnCaseCount_0_14,
  MR_Integer * STATE_VARIABLE_SeveralSolnCaseCount_15)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (CurIndex_1 > EndVal_2);
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SeveralSolnCaseCount_15 = STATE_VARIABLE_SeveralSolnCaseCount_0_14;
      *STATE_VARIABLE_OneSolnCaseCount_13 = STATE_VARIABLE_OneSolnCaseCount_0_12;
      *STATE_VARIABLE_FailCaseCount_11 = STATE_VARIABLE_FailCaseCount_0_10;
      *STATE_VARIABLE_LaterSolnArray_9 = STATE_VARIABLE_LaterSolnArray_0_8;
    }
    else
    {
      MR_Word MainRow_26;
      MR_Word MoreMainRows_27;
      MR_Integer STATE_VARIABLE_FailCaseCount_37_37;
      MR_Integer Var_38;
      MR_Word VarRvals_105;

      VarRvals_105 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[2]), OutTypes_3);
      MainRow_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[37])), VarRvals_105);
      STATE_VARIABLE_FailCaseCount_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FailCaseCount_0_10 + (MR_Unsigned) 1);
      Var_38 = (MR_Integer) ((MR_Unsigned) CurIndex_1 + (MR_Unsigned) 1);
      ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(Var_38, EndVal_2, OutTypes_3, NumOutTypes_4, (MR_Word) ((MR_Unsigned) 0U), &MoreMainRows_27, STATE_VARIABLE_LaterNextRow_0_7, STATE_VARIABLE_LaterSolnArray_0_8, STATE_VARIABLE_LaterSolnArray_9, STATE_VARIABLE_FailCaseCount_37_37, STATE_VARIABLE_FailCaseCount_11, STATE_VARIABLE_OneSolnCaseCount_0_12, STATE_VARIABLE_OneSolnCaseCount_13, STATE_VARIABLE_SeveralSolnCaseCount_0_14, STATE_VARIABLE_SeveralSolnCaseCount_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MainRow_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (MoreMainRows_27));
      }
    }
  }
  else
  {
    MR_Integer Index_49;
    MR_Word Soln_50;
    MR_Word Rest_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word MainRow_52;
    MR_Word MainRows_53;
    MR_Word Remainder_59;
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Integer STATE_VARIABLE_FailCaseCount_79_79;
    MR_Integer STATE_VARIABLE_OneSolnCaseCount_81_81;
    MR_Integer STATE_VARIABLE_SeveralSolnCaseCount_86_86;
    MR_Integer STATE_VARIABLE_LaterNextRow_94_94;
    MR_Word STATE_VARIABLE_LaterSolnArray_95_95;
    MR_Integer Var_97;

    Index_49 = ((MR_Integer) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
    Soln_50 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 1))));
    succeeded = (CurIndex_1 < Index_49);
    if (succeeded)
    {
      ll_backend__lookup_switch__construct_fail_row_4_p_0(OutTypes_3, &MainRow_52, STATE_VARIABLE_FailCaseCount_0_10, &STATE_VARIABLE_FailCaseCount_79_79);
      Remainder_59 = HeadVar__5_5;
      STATE_VARIABLE_SeveralSolnCaseCount_86_86 = STATE_VARIABLE_SeveralSolnCaseCount_0_14;
      STATE_VARIABLE_OneSolnCaseCount_81_81 = STATE_VARIABLE_OneSolnCaseCount_0_12;
      STATE_VARIABLE_LaterSolnArray_95_95 = STATE_VARIABLE_LaterSolnArray_0_8;
      STATE_VARIABLE_LaterNextRow_94_94 = STATE_VARIABLE_LaterNextRow_0_7;
    }
    else
    {
      if (((MR_tag((MR_Word) Soln_50)) == (MR_Integer) 0))
      {
        MR_Word OutRvals_60 = ((MR_Word) ((MR_hl_field(0, Soln_50, (MR_Integer) 0))));
        MR_Word ZeroRval_61;
        MR_Word Var_85;

        STATE_VARIABLE_OneSolnCaseCount_81_81 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_12 + (MR_Unsigned) 1);
        ZeroRval_61 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9]));
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (ZeroRval_61));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (OutRvals_60));
        }
        {
          MainRow_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRow_52, 0) = ((MR_Box) (ZeroRval_61));
          MR_hl_field(1, MainRow_52, 1) = ((MR_Box) (Var_85));
        }
        STATE_VARIABLE_LaterNextRow_94_94 = STATE_VARIABLE_LaterNextRow_0_7;
        STATE_VARIABLE_LaterSolnArray_95_95 = STATE_VARIABLE_LaterSolnArray_0_8;
        STATE_VARIABLE_SeveralSolnCaseCount_86_86 = STATE_VARIABLE_SeveralSolnCaseCount_0_14;
      }
      else
      {
        MR_Word FirstSolnRvals_62 = ((MR_Word) ((MR_hl_field(1, Soln_50, (MR_Integer) 0))));
        MR_Word LaterSolns_63 = ((MR_Word) ((MR_hl_field(1, Soln_50, (MR_Integer) 1))));
        MR_Integer NumLaterSolns_64;
        MR_Integer FirstRowOffset_65;
        MR_Integer LastRowOffset_66;
        MR_Word FirstRowRval_67;
        MR_Word LastRowRval_68;
        MR_Integer Var_88;
        MR_Integer Var_89;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_96;

        STATE_VARIABLE_SeveralSolnCaseCount_86_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeveralSolnCaseCount_0_14 + (MR_Unsigned) 1);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), LaterSolns_63, &NumLaterSolns_64);
        FirstRowOffset_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_7 * (MR_Unsigned) NumOutTypes_4);
        Var_89 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_7 + (MR_Unsigned) NumLaterSolns_64);
        Var_88 = (MR_Integer) ((MR_Unsigned) Var_89 - (MR_Unsigned) 1);
        LastRowOffset_66 = (MR_Integer) ((MR_Unsigned) Var_88 * (MR_Unsigned) NumOutTypes_4);
        {
          Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_91, 0) = ((MR_Box) (FirstRowOffset_65));
        }
        {
          FirstRowRval_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, FirstRowRval_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, FirstRowRval_67, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (LastRowOffset_66));
        }
        {
          LastRowRval_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LastRowRval_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, LastRowRval_68, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (LastRowRval_68));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (FirstSolnRvals_62));
        }
        {
          MainRow_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRow_52, 0) = ((MR_Box) (FirstRowRval_67));
          MR_hl_field(1, MainRow_52, 1) = ((MR_Box) (Var_93));
        }
        STATE_VARIABLE_LaterNextRow_94_94 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_7 + (MR_Unsigned) NumLaterSolns_64);
        Var_96 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), LaterSolns_63);
        STATE_VARIABLE_LaterSolnArray_95_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), STATE_VARIABLE_LaterSolnArray_0_8, Var_96);
        STATE_VARIABLE_OneSolnCaseCount_81_81 = STATE_VARIABLE_OneSolnCaseCount_0_12;
      }
      Remainder_59 = Rest_51;
      STATE_VARIABLE_FailCaseCount_79_79 = STATE_VARIABLE_FailCaseCount_0_10;
    }
    Var_97 = (MR_Integer) ((MR_Unsigned) CurIndex_1 + (MR_Unsigned) 1);
    ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(Var_97, EndVal_2, OutTypes_3, NumOutTypes_4, Remainder_59, &MainRows_53, STATE_VARIABLE_LaterNextRow_94_94, STATE_VARIABLE_LaterSolnArray_95_95, STATE_VARIABLE_LaterSolnArray_9, STATE_VARIABLE_FailCaseCount_79_79, STATE_VARIABLE_FailCaseCount_11, STATE_VARIABLE_OneSolnCaseCount_81_81, STATE_VARIABLE_OneSolnCaseCount_13, STATE_VARIABLE_SeveralSolnCaseCount_86_86, STATE_VARIABLE_SeveralSolnCaseCount_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MainRow_52));
      MR_hl_field(1, base, 1) = ((MR_Box) (MainRows_53));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
  MR_Word OutTypes_5,
  MR_Word * MainRow_6,
  MR_Integer STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * STATE_VARIABLE_FailCaseCount_11)
{
  MR_Word VarRvals_9;

  VarRvals_9 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[1]), OutTypes_5);
  *MainRow_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[37])), VarRvals_9);
  *STATE_VARIABLE_FailCaseCount_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FailCaseCount_0_10 + (MR_Unsigned) 1);
}

void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(
  MR_Word OoMKinds_17,
  MR_Integer NumPrevColumns_18,
  MR_Word OutVars_19,
  MR_Word ResumeVars_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word Liveness_23,
  MR_Word AddTrailOps_24,
  MR_Word BaseReg_25,
  MR_Word LaterVectorAddrRval_26,
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_MaybeEnd_0_36,
  MR_Word * STATE_VARIABLE_MaybeEnd_37,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40)
{
  MR_Word CurSlot_31;
  MR_Word MaxSlot_32;
  MR_Word BranchStart_33;
  MR_Word HeadKind_34;
  MR_Word TailKinds_35;
  MR_Word STATE_VARIABLE_CI_43_43;
  MR_Word STATE_VARIABLE_CLD_44_44;
  MR_Word STATE_VARIABLE_CI_47_47;
  MR_Word STATE_VARIABLE_CLD_48_48;

  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 1, &CurSlot_31, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_44_44);
  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 1, &MaxSlot_32, STATE_VARIABLE_CI_43_43, &STATE_VARIABLE_CI_47_47, STATE_VARIABLE_CLD_44_44, &STATE_VARIABLE_CLD_48_48);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_48_48, &BranchStart_33);
  HeadKind_34 = ((MR_Word) ((MR_hl_field(0, OoMKinds_17, (MR_Integer) 0))));
  TailKinds_35 = ((MR_Word) ((MR_hl_field(0, OoMKinds_17, (MR_Integer) 1))));
  ll_backend__lookup_switch__generate_code_for_each_kind_19_p_0(HeadKind_34, TailKinds_35, NumPrevColumns_18, OutVars_19, ResumeVars_20, BranchStart_33, EndLabel_21, StoreMap_22, Liveness_23, AddTrailOps_24, BaseReg_25, CurSlot_31, MaxSlot_32, LaterVectorAddrRval_26, Code_27, STATE_VARIABLE_MaybeEnd_0_36, STATE_VARIABLE_MaybeEnd_37, STATE_VARIABLE_CI_47_47, STATE_VARIABLE_CI_39);
}

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_19_p_0(
  MR_Word Kind_20,
  MR_Word Kinds_21,
  MR_Integer NumPrevColumns_22,
  MR_Word OutVars_23,
  MR_Word ResumeVars_24,
  MR_Word BranchStart_25,
  MR_Word EndLabel_26,
  MR_Word StoreMap_27,
  MR_Word Liveness_28,
  MR_Word AddTrailOps_29,
  MR_Word BaseReg_30,
  MR_Word CurSlot_31,
  MR_Word MaxSlot_32,
  MR_Word LaterVectorAddrRval_33,
  MR_Word * Code_34,
  MR_Word STATE_VARIABLE_MaybeEnd_0_51,
  MR_Word * STATE_VARIABLE_MaybeEnd_52,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54)
{
  MR_Word TestOp_37;
  MR_Word KindCode_39;
  MR_Word STATE_VARIABLE_CI_58_58;
  MR_Word STATE_VARIABLE_MaybeEnd_64_64;

  switch (Kind_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word BranchEndCode_40;
        MR_Word GotoEndCode_41;
        MR_Word STATE_VARIABLE_CLD_60_60;
        MR_Integer Var_61;
        MR_Word STATE_VARIABLE_CLD_62_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;

        TestOp_37 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[32]));
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_25, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CLD_60_60);
        Var_61 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_22 + (MR_Unsigned) 2);
        ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_23, Var_61, BaseReg_30, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CLD_60_60, &STATE_VARIABLE_CLD_62_62);
        ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_27, Liveness_28, STATE_VARIABLE_MaybeEnd_0_51, &STATE_VARIABLE_MaybeEnd_64_64, &BranchEndCode_40, STATE_VARIABLE_CLD_62_62);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (EndLabel_26));
        }
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
        }
        GotoEndCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
        KindCode_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_40, GotoEndCode_41);
        STATE_VARIABLE_CI_58_58 = STATE_VARIABLE_CI_0_53;
      }
      break;
    case (MR_Integer) 2:
      ll_backend__lookup_switch__generate_code_for_kind_several_solns_18_p_0(NumPrevColumns_22, OutVars_23, ResumeVars_24, BranchStart_25, EndLabel_26, StoreMap_27, Liveness_28, AddTrailOps_29, BaseReg_30, CurSlot_31, MaxSlot_32, LaterVectorAddrRval_33, &TestOp_37, &KindCode_39, STATE_VARIABLE_MaybeEnd_0_51, &STATE_VARIABLE_MaybeEnd_64_64, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CI_58_58);
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_CLD_56_56;
        MR_Word STATE_VARIABLE_CLD_57_57;

        TestOp_37 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[33]));
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_25, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CLD_56_56);
        ll_backend__code_loc_dep__release_reg_3_p_0(BaseReg_30, STATE_VARIABLE_CLD_56_56, &STATE_VARIABLE_CLD_57_57);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&KindCode_39, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CLD_57_57);
        STATE_VARIABLE_MaybeEnd_64_64 = STATE_VARIABLE_MaybeEnd_0_51;
      }
      break;
  }
  if ((Kinds_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_34 = KindCode_39;
    *STATE_VARIABLE_MaybeEnd_52 = STATE_VARIABLE_MaybeEnd_64_64;
    *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_58_58;
  }
  else
  {
    MR_Word NextKind_42 = ((MR_Word) ((MR_hl_field(1, Kinds_21, (MR_Integer) 0))));
    MR_Word LaterKinds_43 = ((MR_Word) ((MR_hl_field(1, Kinds_21, (MR_Integer) 1))));
    MR_Word NextKindLabel_44;
    MR_Word TestRval_45;
    MR_String KindComment_46;
    MR_String NextKindComment_47;
    MR_Word TestCode_48;
    MR_Word NextKindLabelCode_49;
    MR_Word LaterKindsCode_50;
    MR_Word STATE_VARIABLE_CI_71_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_String Var_84;
    MR_String Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_108;
    MR_Word Var_109;

    ll_backend__code_info__get_next_label_3_p_0(&NextKindLabel_44, STATE_VARIABLE_CI_58_58, &STATE_VARIABLE_CI_71_71);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (BaseReg_30));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (NumPrevColumns_22));
    }
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5])));
      MR_hl_field(3, Var_73, 2) = ((MR_Box) (Var_77));
      MR_hl_field(3, Var_73, 3) = ((MR_Box) (Var_78));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
    }
    {
      TestRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRval_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRval_45, 1) = ((MR_Box) (TestOp_37));
      MR_hl_field(3, TestRval_45, 2) = ((MR_Box) (Var_72));
      MR_hl_field(3, TestRval_45, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9])));
    }
    switch (Kind_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_84 = (MR_String) "kind_one_soln";
        break;
      case (MR_Integer) 2:
        Var_84 = (MR_String) "kind_several_solns";
        break;
      case (MR_Integer) 0:
        Var_84 = (MR_String) "kind_zero_solns";
        break;
    }
    KindComment_46 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", Var_84);
    switch (NextKind_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_86 = (MR_String) "kind_one_soln";
        break;
      case (MR_Integer) 2:
        Var_86 = (MR_String) "kind_several_solns";
        break;
      case (MR_Integer) 0:
        Var_86 = (MR_String) "kind_zero_solns";
        break;
    }
    NextKindComment_47 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", Var_86);
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (NextKindLabel_44));
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (TestRval_45));
      MR_hl_field(3, Var_89, 2) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (KindComment_46));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_92));
    }
    TestCode_48 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_87);
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (NextKindLabel_44));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (NextKindComment_47));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_101));
    }
    NextKindLabelCode_49 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_97);
    ll_backend__lookup_switch__generate_code_for_each_kind_19_p_0(NextKind_42, LaterKinds_43, NumPrevColumns_22, OutVars_23, ResumeVars_24, BranchStart_25, EndLabel_26, StoreMap_27, Liveness_28, AddTrailOps_29, BaseReg_30, CurSlot_31, MaxSlot_32, LaterVectorAddrRval_33, &LaterKindsCode_50, STATE_VARIABLE_MaybeEnd_64_64, STATE_VARIABLE_MaybeEnd_52, STATE_VARIABLE_CI_71_71, STATE_VARIABLE_CI_54);
    Var_109 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NextKindLabelCode_49, LaterKindsCode_50);
    Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), KindCode_39, Var_109);
    *Code_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_48, Var_108);
  }
}

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_kind_several_solns_18_p_0(
  MR_Integer NumPrevColumns_19,
  MR_Word OutVars_20,
  MR_Word ResumeVars_21,
  MR_Word BranchStart_22,
  MR_Word EndLabel_23,
  MR_Word StoreMap_24,
  MR_Word Liveness_25,
  MR_Word AddTrailOps_26,
  MR_Word BaseReg_27,
  MR_Word CurSlot_28,
  MR_Word MaxSlot_29,
  MR_Word LaterVectorAddrRval_30,
  MR_Word * TestOp_31,
  MR_Word * KindCode_32,
  MR_Word STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * STATE_VARIABLE_MaybeEnd_71,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73)
{
  MR_Word Globals_35;
  MR_Word ResumeMap_37;
  MR_Word FlushCode_38;
  MR_Word MinOffsetColumnRval_39;
  MR_Word MaxOffsetColumnRval_40;
  MR_Word SaveSlotsCode_41;
  MR_Word SaveTicketCode_42;
  MR_Word MaybeTicketSlot_43;
  MR_Word ReclaimHeap_44;
  MR_Word SaveHpCode_45;
  MR_Word MaybeHpSlot_46;
  MR_Word HijackInfo_47;
  MR_Word PrepareHijackCode_48;
  MR_Word DisjEntry_49;
  MR_Word ResumePoint_50;
  MR_Word UpdateRedoipCode_51;
  MR_Word FirstFlushResumeVarsCode_52;
  MR_Word FirstZombies_53;
  MR_Word FirstBranchEndCode_54;
  MR_Word GotoEndCode_55;
  MR_Word ResumePointCode_56;
  MR_Word RestoreTicketCode_57;
  MR_Word RestoreHpCode_58;
  MR_Word LaterBaseReg_59;
  MR_Word UndoLabel_60;
  MR_Word AfterUndoLabel_61;
  MR_Integer NumOutVars_62;
  MR_Word TestMoreSolnsCode_63;
  MR_Word UndoHijackCode_64;
  MR_Word AfterUndoLabelCode_65;
  MR_Word LaterFlushResumeVarsCode_67;
  MR_Word LaterZombies_68;
  MR_Word LaterBranchEndCode_69;
  MR_Word STATE_VARIABLE_CLD_75_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_CLD_77_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Integer Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_CI_103_103;
  MR_Word STATE_VARIABLE_CLD_104_104;
  MR_Word STATE_VARIABLE_CI_106_106;
  MR_Word STATE_VARIABLE_CLD_107_107;
  MR_Word STATE_VARIABLE_CI_109_109;
  MR_Word STATE_VARIABLE_CLD_110_110;
  MR_Word STATE_VARIABLE_CI_112_112;
  MR_Word STATE_VARIABLE_CLD_114_114;
  MR_Integer Var_115;
  MR_Word STATE_VARIABLE_CLD_116_116;
  MR_Word STATE_VARIABLE_CLD_118_118;
  MR_Word STATE_VARIABLE_CLD_119_119;
  MR_Word STATE_VARIABLE_CLD_120_120;
  MR_Word STATE_VARIABLE_CLD_121_121;
  MR_Word STATE_VARIABLE_MaybeEnd_122_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word STATE_VARIABLE_CLD_127_127;
  MR_Word STATE_VARIABLE_CI_128_128;
  MR_Word STATE_VARIABLE_CLD_129_129;
  MR_Word STATE_VARIABLE_CLD_132_132;
  MR_Word STATE_VARIABLE_CI_133_133;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_160;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_163;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word STATE_VARIABLE_CLD_170_170;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_173;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word STATE_VARIABLE_CLD_187_187;
  MR_Word STATE_VARIABLE_CLD_189_189;
  MR_Word STATE_VARIABLE_CLD_190_190;
  MR_Word STATE_VARIABLE_CLD_191_191;
  MR_Word STATE_VARIABLE_CLD_192_192;
  MR_Word STATE_VARIABLE_CLD_193_193;
  MR_Word Var_195;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_Word Var_198;
  MR_Word Var_199;
  MR_Word Var_200;
  MR_Word Var_201;
  MR_Word Var_202;
  MR_Word Var_203;
  MR_Word Var_204;
  MR_Word Var_205;
  MR_Word Var_206;
  MR_Word Var_207;
  MR_Word Var_208;
  MR_Word Var_209;
  MR_Word Var_210;
  MR_Word _LaterUpdateRedoipCode_66;

  *TestOp_31 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[34]));
  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_72, &Globals_35);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_22, STATE_VARIABLE_CI_0_72, &STATE_VARIABLE_CLD_75_75);
  Var_76 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_21);
  ll_backend__code_loc_dep__produce_vars_5_p_0(Var_76, &ResumeMap_37, &FlushCode_38, STATE_VARIABLE_CLD_75_75, &STATE_VARIABLE_CLD_77_77);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (NumPrevColumns_19));
  }
  {
    MinOffsetColumnRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MinOffsetColumnRval_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MinOffsetColumnRval_39, 1) = ((MR_Box) (Var_78));
  }
  Var_80 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_19 + (MR_Unsigned) 1);
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
  }
  {
    MaxOffsetColumnRval_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MaxOffsetColumnRval_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MaxOffsetColumnRval_40, 1) = ((MR_Box) (Var_79));
  }
  Var_87 = (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5]));
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (BaseReg_27));
  }
  {
    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_86, 1) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_86, 2) = ((MR_Box) (Var_90));
    MR_hl_field(3, Var_86, 3) = ((MR_Box) (MinOffsetColumnRval_39));
  }
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
  }
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_84, 1) = ((MR_Box) (CurSlot_28));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
  }
  {
    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_96, 2) = ((MR_Box) (Var_90));
    MR_hl_field(3, Var_96, 3) = ((MR_Box) (MaxOffsetColumnRval_40));
  }
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (Var_96));
  }
  {
    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_94, 1) = ((MR_Box) (MaxSlot_29));
    MR_hl_field(3, Var_94, 2) = ((MR_Box) (Var_95));
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_92));
  }
  SaveSlotsCode_41 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_82);
  ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_26, &SaveTicketCode_42, &MaybeTicketSlot_43, STATE_VARIABLE_CI_0_72, &STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_77_77, &STATE_VARIABLE_CLD_104_104);
  libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 355, &ReclaimHeap_44);
  ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_44, &SaveHpCode_45, &MaybeHpSlot_46, STATE_VARIABLE_CI_103_103, &STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_107_107);
  ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0((MR_Integer) 2, &HijackInfo_47, &PrepareHijackCode_48, STATE_VARIABLE_CI_106_106, &STATE_VARIABLE_CI_109_109, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_110_110);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_110_110, &DisjEntry_49);
  ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_21, (MR_Integer) 1, ResumeMap_37, &ResumePoint_50, STATE_VARIABLE_CI_109_109, &STATE_VARIABLE_CI_112_112);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_50, (MR_Integer) 2, &UpdateRedoipCode_51, STATE_VARIABLE_CLD_110_110, &STATE_VARIABLE_CLD_114_114);
  Var_115 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_19 + (MR_Unsigned) 2);
  ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_20, Var_115, BaseReg_27, STATE_VARIABLE_CI_112_112, STATE_VARIABLE_CLD_114_114, &STATE_VARIABLE_CLD_116_116);
  ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&FirstFlushResumeVarsCode_52, STATE_VARIABLE_CLD_116_116, &STATE_VARIABLE_CLD_118_118);
  ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_118_118, &STATE_VARIABLE_CLD_119_119);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&FirstZombies_53, STATE_VARIABLE_CLD_119_119, &STATE_VARIABLE_CLD_120_120);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(FirstZombies_53, STATE_VARIABLE_CLD_120_120, &STATE_VARIABLE_CLD_121_121);
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_24, Liveness_25, STATE_VARIABLE_MaybeEnd_0_70, &STATE_VARIABLE_MaybeEnd_122_122, &FirstBranchEndCode_54, STATE_VARIABLE_CLD_121_121);
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (EndLabel_23));
  }
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(0, Var_123, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
  }
  GotoEndCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_123)));
  ll_backend__code_loc_dep__reset_to_position_3_p_0(DisjEntry_49, STATE_VARIABLE_CI_112_112, &STATE_VARIABLE_CLD_127_127);
  ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_50, &ResumePointCode_56, STATE_VARIABLE_CI_112_112, &STATE_VARIABLE_CI_128_128, STATE_VARIABLE_CLD_127_127, &STATE_VARIABLE_CLD_129_129);
  ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_43, (MR_Integer) 0, &RestoreTicketCode_57);
  ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(MaybeHpSlot_46, &RestoreHpCode_58);
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_24, (MR_Integer) 0, &LaterBaseReg_59, STATE_VARIABLE_CLD_129_129, &STATE_VARIABLE_CLD_132_132);
  ll_backend__code_info__get_next_label_3_p_0(&UndoLabel_60, STATE_VARIABLE_CI_128_128, &STATE_VARIABLE_CI_133_133);
  ll_backend__code_info__get_next_label_3_p_0(&AfterUndoLabel_61, STATE_VARIABLE_CI_133_133, STATE_VARIABLE_CI_73);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]), OutVars_20, &NumOutVars_62);
  {
    Var_138 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_138, 0) = ((MR_Box) (CurSlot_28));
  }
  {
    Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_137, 1) = ((MR_Box) (LaterBaseReg_59));
    MR_hl_field(3, Var_137, 2) = ((MR_Box) (Var_138));
  }
  {
    Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
    MR_hl_field(0, Var_136, 1) = ((MR_Box) ((MR_String) "Init later base register"));
  }
  {
    Var_146 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_146, 0) = ((MR_Box) (LaterBaseReg_59));
  }
  {
    Var_147 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_147, 0) = ((MR_Box) (MaxSlot_29));
  }
  {
    Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_143, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[33])));
    MR_hl_field(3, Var_143, 2) = ((MR_Box) (Var_146));
    MR_hl_field(3, Var_143, 3) = ((MR_Box) (Var_147));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (UndoLabel_60));
  }
  {
    Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_142, 1) = ((MR_Box) (Var_143));
    MR_hl_field(3, Var_142, 2) = ((MR_Box) (Var_148));
  }
  {
    Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_141, 0) = ((MR_Box) (Var_142));
    MR_hl_field(0, Var_141, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
  }
  {
    Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_158, 0) = ((MR_Box) (NumOutVars_62));
  }
  {
    Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_157, 1) = ((MR_Box) (Var_158));
  }
  {
    Var_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_153, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_153, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[0])));
    MR_hl_field(3, Var_153, 2) = ((MR_Box) (Var_138));
    MR_hl_field(3, Var_153, 3) = ((MR_Box) (Var_157));
  }
  {
    Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_152, 1) = ((MR_Box) (CurSlot_28));
    MR_hl_field(3, Var_152, 2) = ((MR_Box) (Var_153));
  }
  {
    Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(0, Var_151, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
  }
  {
    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_163, 0) = ((MR_Box) (AfterUndoLabel_61));
  }
  {
    Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_162, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_162, 1) = ((MR_Box) (Var_163));
  }
  {
    Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_161, 0) = ((MR_Box) (Var_162));
    MR_hl_field(0, Var_161, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
  }
  {
    Var_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_167, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_167, 1) = ((MR_Box) (UndoLabel_60));
  }
  {
    Var_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_166, 0) = ((MR_Box) (Var_167));
    MR_hl_field(0, Var_166, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
  }
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_161));
    MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_165));
  }
  {
    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
    MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_160));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_150));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_140));
  }
  TestMoreSolnsCode_63 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_135);
  ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_47, &UndoHijackCode_64, STATE_VARIABLE_CLD_132_132, &STATE_VARIABLE_CLD_170_170);
  {
    Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_173, 1) = ((MR_Box) (AfterUndoLabel_61));
  }
  {
    Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
    MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
  }
  {
    Var_179 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_179, 0) = ((MR_Box) (LaterVectorAddrRval_30));
    MR_hl_field(2, Var_179, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_4[5])));
    MR_hl_field(2, Var_179, 2) = ((MR_Box) (Var_146));
  }
  {
    Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_178, 1) = ((MR_Box) (Var_179));
  }
  {
    Var_177 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_177, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_177, 1) = ((MR_Box) (LaterBaseReg_59));
    MR_hl_field(3, Var_177, 2) = ((MR_Box) (Var_178));
  }
  {
    Var_176 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_176, 0) = ((MR_Box) (Var_177));
    MR_hl_field(0, Var_176, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
  }
  {
    Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
    MR_hl_field(1, Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_175));
  }
  AfterUndoLabelCode_65 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_171);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_50, (MR_Integer) 2, &_LaterUpdateRedoipCode_66, STATE_VARIABLE_CLD_170_170, &STATE_VARIABLE_CLD_187_187);
  ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_20, (MR_Integer) 0, LaterBaseReg_59, *STATE_VARIABLE_CI_73, STATE_VARIABLE_CLD_187_187, &STATE_VARIABLE_CLD_189_189);
  ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&LaterFlushResumeVarsCode_67, STATE_VARIABLE_CLD_189_189, &STATE_VARIABLE_CLD_190_190);
  ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_190_190, &STATE_VARIABLE_CLD_191_191);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&LaterZombies_68, STATE_VARIABLE_CLD_191_191, &STATE_VARIABLE_CLD_192_192);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(LaterZombies_68, STATE_VARIABLE_CLD_192_192, &STATE_VARIABLE_CLD_193_193);
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_24, Liveness_25, STATE_VARIABLE_MaybeEnd_122_122, STATE_VARIABLE_MaybeEnd_71, &LaterBranchEndCode_69, STATE_VARIABLE_CLD_193_193);
  Var_210 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterBranchEndCode_69, GotoEndCode_55);
  Var_209 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterFlushResumeVarsCode_67, Var_210);
  Var_208 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterUndoLabelCode_65, Var_209);
  Var_207 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoHijackCode_64, Var_208);
  Var_206 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestMoreSolnsCode_63, Var_207);
  Var_205 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_58, Var_206);
  Var_204 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_57, Var_205);
  Var_203 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumePointCode_56, Var_204);
  Var_202 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoEndCode_55, Var_203);
  Var_201 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstBranchEndCode_54, Var_202);
  Var_200 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstFlushResumeVarsCode_52, Var_201);
  Var_199 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UpdateRedoipCode_51, Var_200);
  Var_198 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_48, Var_199);
  Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_45, Var_198);
  Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_42, Var_197);
  Var_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveSlotsCode_41, Var_196);
  *KindCode_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_38, Var_195);
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_7_p_0(
  MR_Word TypeInfo_for_Key_45,
  MR_Word GetTag_8,
  MR_Word TaggedCases_9,
  MR_Word GoalInfo_10,
  MR_Word StoreMap_11,
  MR_Word CI0_12,
  MR_Word CLD0_13,
  MR_Word * MaybeLookupSwitchInfo_14)
{
  MR_bool succeeded;
  MR_Word BranchStart_15;
  MR_Word OutVars_16;
  MR_Word ArmNonLocals_17;
  MR_Word Liveness_19;
  MR_Word KeyToCaseIdMap_20;
  MR_Word MaybeEnd_22;
  MR_Word CI_25;
  MR_Word CaseConsts_29;
  MR_Word OutLLDSTypes_35;
  MR_Word TypeInfo_49_49;
  MR_Word TypeCtorInfo_50_50;
  MR_Word TypeCtorInfo_54_54;
  MR_Word CaseIdToSolnsMap_21;
  MR_Word ResumeVars_23;
  MR_Word GoalsMayModifyTrail_24;
  MR_Word VarTable_26;
  MR_Word OutTypes_27;
  MR_Word ExprnOpts_30;
  MR_Word UnboxFloats_31;
  MR_Word UnboxInt64s_32;
  MR_Word CaseIdsSolns_33;
  MR_Word CaseValues_34;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word CaseValuesMap_28;
  MR_Word TypeCtorInfo_53_53;

  ll_backend__code_loc_dep__remember_position_2_p_0(CLD0_13, &BranchStart_15);
  ll_backend__lookup_util__figure_out_output_vars_4_p_0(CI0_12, CLD0_13, GoalInfo_10, &OutVars_16);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_16, &ArmNonLocals_17);
  Var_38 = mercury__map__init_0_f_0(TypeInfo_for_Key_45, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0));
  Var_39 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]));
  Var_40 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_19_p_0(TypeInfo_for_Key_45, BranchStart_15, GetTag_8, TaggedCases_9, OutVars_16, ArmNonLocals_17, StoreMap_11, &Liveness_19, Var_38, &KeyToCaseIdMap_20, Var_39, &CaseIdToSolnsMap_21, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd_22, Var_40, &ResumeVars_23, (MR_Integer) 0, &GoalsMayModifyTrail_24, CI0_12, &CI_25);
  if (succeeded)
  {
    ll_backend__code_info__get_var_table_2_p_0(CI_25, &VarTable_26);
    TypeInfo_49_49 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]);
    TypeCtorInfo_50_50 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[0]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__lookup_switch__is_lookup_switch_7_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarTable_26));
    }
    OutTypes_27 = mercury__list__map_2_f_0(TypeInfo_49_49, TypeCtorInfo_50_50, Var_42, OutVars_16);
    TypeCtorInfo_53_53 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    succeeded = backend_libs__lookup_switch_util__project_all_to_one_solution_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), TypeCtorInfo_53_53, CaseIdToSolnsMap_21, &CaseValuesMap_28);
    if (succeeded)
      {
        CaseConsts_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CaseConsts_29, 0) = ((MR_Box) (CaseValuesMap_28));
      }
    else
    {
      MR_Word Var_43;

      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (ResumeVars_23));
        MR_hl_field(0, Var_43, 1) = (MR_Box) ((MR_Unsigned) (GoalsMayModifyTrail_24));
      }
      {
        CaseConsts_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CaseConsts_29, 0) = ((MR_Box) (CaseIdToSolnsMap_21));
        MR_hl_field(1, CaseConsts_29, 1) = ((MR_Box) (Var_43));
      }
    }
    ll_backend__code_info__get_exprn_opts_2_p_0(CI0_12, &ExprnOpts_30);
    UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_30);
    UnboxInt64s_32 = ll_backend__llds__get_unboxed_int64s_1_f_0(ExprnOpts_30);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), CaseIdToSolnsMap_21, &CaseIdsSolns_33);
    Var_44 = (MR_Word) ((MR_Unsigned) 0U);
    TypeCtorInfo_54_54 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    backend_libs__lookup_switch_util__project_solns_to_rval_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), TypeCtorInfo_54_54, CaseIdsSolns_33, Var_44, &CaseValues_34);
    succeeded = ll_backend__global_data__find_general_llds_types_5_p_0(UnboxFloats_31, UnboxInt64s_32, OutTypes_27, CaseValues_34, &OutLLDSTypes_35);
  }
  if (succeeded)
  {
    MR_Word CLD_36;
    MR_Word LookupSwitchInfo_37;

    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_15, CI_25, &CLD_36);
    {
      LookupSwitchInfo_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LookupSwitchInfo_37, 0) = ((MR_Box) (KeyToCaseIdMap_20));
      MR_hl_field(0, LookupSwitchInfo_37, 1) = ((MR_Box) (CaseConsts_29));
      MR_hl_field(0, LookupSwitchInfo_37, 2) = ((MR_Box) (OutVars_16));
      MR_hl_field(0, LookupSwitchInfo_37, 3) = ((MR_Box) (OutLLDSTypes_35));
      MR_hl_field(0, LookupSwitchInfo_37, 4) = ((MR_Box) (Liveness_19));
      MR_hl_field(0, LookupSwitchInfo_37, 5) = ((MR_Box) (MaybeEnd_22));
      MR_hl_field(0, LookupSwitchInfo_37, 6) = ((MR_Box) (CI_25));
      MR_hl_field(0, LookupSwitchInfo_37, 7) = ((MR_Box) (CLD_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeLookupSwitchInfo_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LookupSwitchInfo_37));
    }
  }
  else
    *MaybeLookupSwitchInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_19_p_0(
  MR_Word TypeInfo_for_Key_110,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_8,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_9,
  MR_Word STATE_VARIABLE_CaseIdToSolnsMap_0_10,
  MR_Word * STATE_VARIABLE_CaseIdToSolnsMap_11,
  MR_Word STATE_VARIABLE_MaybeEnd_0_12,
  MR_Word * STATE_VARIABLE_MaybeEnd_13,
  MR_Word STATE_VARIABLE_ResumeVars_0_14,
  MR_Word * STATE_VARIABLE_ResumeVars_15,
  MR_Word STATE_VARIABLE_GoalsMayModifyTrail_0_16,
  MR_Word * STATE_VARIABLE_GoalsMayModifyTrail_17,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    *STATE_VARIABLE_CI_19 = STATE_VARIABLE_CI_0_18;
    *STATE_VARIABLE_GoalsMayModifyTrail_17 = STATE_VARIABLE_GoalsMayModifyTrail_0_16;
    *STATE_VARIABLE_ResumeVars_15 = STATE_VARIABLE_ResumeVars_0_14;
    *STATE_VARIABLE_MaybeEnd_13 = STATE_VARIABLE_MaybeEnd_0_12;
    *STATE_VARIABLE_CaseIdToSolnsMap_11 = STATE_VARIABLE_CaseIdToSolnsMap_0_10;
    *STATE_VARIABLE_KeyToCaseIdMap_9 = STATE_VARIABLE_KeyToCaseIdMap_0_8;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_115_115;
    MR_Word TypeInfo_116_116;
    MR_Word TaggedCase_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TaggedCases_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TaggedMainConsId_57 = ((MR_Word) ((MR_hl_field(0, TaggedCase_45, (MR_Integer) 0))));
    MR_Word TaggedOtherConsIds_58 = ((MR_Word) ((MR_hl_field(0, TaggedCase_45, (MR_Integer) 1))));
    MR_Word CaseId_59 = ((MR_Word) ((MR_hl_field(0, TaggedCase_45, (MR_Integer) 2))));
    MR_Word Goal_60 = ((MR_Word) ((MR_hl_field(0, TaggedCase_45, (MR_Integer) 3))));
    MR_Word GoalExpr_61 = ((MR_Word) ((MR_hl_field(0, Goal_60, (MR_Integer) 0))));
    MR_Word GoalInfo_62 = ((MR_Word) ((MR_hl_field(0, Goal_60, (MR_Integer) 1))));
    MR_Word Features_63;
    MR_Word SolnConsts_76;
    MR_Word STATE_VARIABLE_GoalsMayModifyTrail_96_96;
    MR_Word STATE_VARIABLE_ResumeVars_97_97;
    MR_Word STATE_VARIABLE_MaybeEnd_103_103;
    MR_Word STATE_VARIABLE_CI_104_104;
    MR_Word STATE_VARIABLE_CaseIdToSolnsMap_107_107;
    MR_Word STATE_VARIABLE_KeyToCaseIdMap_108_108;
    MR_Word STATE_VARIABLE_KeyToCaseIdMap_109_109;
    MR_Word TypeCtorInfo_113_113;
    MR_Word Var_92;
    MR_Word Disjuncts_64;
    MR_Word _LivenessRest_78;

    Features_63 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_62);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 5)), Features_63);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_92 = (MR_Integer) 7;
      TypeCtorInfo_113_113 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_113_113, ((MR_Box) (Var_92)), Features_63);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) GoalExpr_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_61, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Disjuncts_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_61, (MR_Integer) 1))));
          if ((Disjuncts_64 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/19", (MR_String) "disj([])");
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word FirstDisjunct_65 = ((MR_Word) ((MR_hl_field(1, Disjuncts_64, (MR_Integer) 0))));
            MR_Word LaterDisjuncts_66 = ((MR_Word) ((MR_hl_field(1, Disjuncts_64, (MR_Integer) 1))));
            MR_Word FirstDisjunctGoalInfo_68;
            MR_Word ThisResumePoint_69;
            MR_Word GoalBranchStart_73;
            MR_Word FirstSoln_74;
            MR_Word LaterSolns_75;
            MR_Word Var_95;
            MR_Word STATE_VARIABLE_CLD_98_98;
            MR_Word Var_99;
            MR_Word STATE_VARIABLE_CLD_100_100;
            MR_Word STATE_VARIABLE_MaybeEnd_101_101;
            MR_Word STATE_VARIABLE_CI_102_102;

            succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__5_5, FirstDisjunct_65);
            if (succeeded)
            {
              succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(HeadVar__5_5, LaterDisjuncts_66);
              if (succeeded)
              {
                Var_95 = hlds__goal_form__goal_may_modify_trail_1_f_0(GoalInfo_62);
                mercury__bool__or_3_p_0(Var_95, STATE_VARIABLE_GoalsMayModifyTrail_0_16, &STATE_VARIABLE_GoalsMayModifyTrail_96_96);
                FirstDisjunctGoalInfo_68 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_65, (MR_Integer) 1))));
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(FirstDisjunctGoalInfo_68, &ThisResumePoint_69);
                if ((ThisResumePoint_69 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ResumeVars_97_97 = STATE_VARIABLE_ResumeVars_0_14;
                else
                {
                  MR_Word ThisResumeVars_70 = ((MR_Word) ((MR_hl_field(1, ThisResumePoint_69, (MR_Integer) 0))));

                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThisResumeVars_70, STATE_VARIABLE_ResumeVars_0_14, &STATE_VARIABLE_ResumeVars_97_97);
                }
                ll_backend__code_loc_dep__reset_to_position_3_p_0(HeadVar__1_1, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CLD_98_98);
                Var_99 = (MR_Integer) 0;
                ll_backend__code_loc_dep__pre_goal_update_4_p_0(GoalInfo_62, Var_99, STATE_VARIABLE_CLD_98_98, &STATE_VARIABLE_CLD_100_100);
                ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_100_100, &GoalBranchStart_73);
                succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(GoalBranchStart_73, FirstDisjunct_65, HeadVar__4_4, HeadVar__6_6, &FirstSoln_74, STATE_VARIABLE_MaybeEnd_0_12, &STATE_VARIABLE_MaybeEnd_101_101, HeadVar__7_7, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_102_102);
                if (succeeded)
                {
                  succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(GoalBranchStart_73, LaterDisjuncts_66, HeadVar__4_4, HeadVar__6_6, &LaterSolns_75, STATE_VARIABLE_MaybeEnd_101_101, &STATE_VARIABLE_MaybeEnd_103_103, STATE_VARIABLE_CI_102_102, &STATE_VARIABLE_CI_104_104);
                  if (succeeded)
                  {
                    {
                      SolnConsts_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SolnConsts_76, 0) = ((MR_Box) (FirstSoln_74));
                      MR_hl_field(1, SolnConsts_76, 1) = ((MR_Box) (LaterSolns_75));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        else
        {
          MR_Word Soln_77;

          succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__5_5, Goal_60);
          if (succeeded)
          {
            succeeded = ll_backend__lookup_util__generate_constants_for_arm_10_p_0(HeadVar__1_1, Goal_60, HeadVar__4_4, HeadVar__6_6, &Soln_77, STATE_VARIABLE_MaybeEnd_0_12, &STATE_VARIABLE_MaybeEnd_103_103, HeadVar__7_7, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_104_104);
            if (succeeded)
            {
              STATE_VARIABLE_GoalsMayModifyTrail_96_96 = STATE_VARIABLE_GoalsMayModifyTrail_0_16;
              STATE_VARIABLE_ResumeVars_97_97 = STATE_VARIABLE_ResumeVars_0_14;
              {
                SolnConsts_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SolnConsts_76, 0) = ((MR_Box) (Soln_77));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          TypeCtorInfo_115_115 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0);
          TypeInfo_116_116 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]);
          mercury__map__det_insert_4_p_0(TypeCtorInfo_115_115, TypeInfo_116_116, ((MR_Box) (CaseId_59)), ((MR_Box) (SolnConsts_76)), STATE_VARIABLE_CaseIdToSolnsMap_0_10, &STATE_VARIABLE_CaseIdToSolnsMap_107_107);
          ll_backend__lookup_switch__record_case_id_for_tagged_cons_id_5_p_0(TypeInfo_for_Key_110, HeadVar__2_2, CaseId_59, TaggedMainConsId_57, STATE_VARIABLE_KeyToCaseIdMap_0_8, &STATE_VARIABLE_KeyToCaseIdMap_108_108);
          ll_backend__lookup_switch__record_case_id_for_tagged_cons_ids_5_p_0(TypeInfo_for_Key_110, HeadVar__2_2, CaseId_59, TaggedOtherConsIds_58, STATE_VARIABLE_KeyToCaseIdMap_108_108, &STATE_VARIABLE_KeyToCaseIdMap_109_109);
          succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_19_p_0(TypeInfo_for_Key_110, HeadVar__1_1, HeadVar__2_2, TaggedCases_46, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &_LivenessRest_78, STATE_VARIABLE_KeyToCaseIdMap_109_109, STATE_VARIABLE_KeyToCaseIdMap_9, STATE_VARIABLE_CaseIdToSolnsMap_107_107, STATE_VARIABLE_CaseIdToSolnsMap_11, STATE_VARIABLE_MaybeEnd_103_103, STATE_VARIABLE_MaybeEnd_13, STATE_VARIABLE_ResumeVars_97_97, STATE_VARIABLE_ResumeVars_15, STATE_VARIABLE_GoalsMayModifyTrail_96_96, STATE_VARIABLE_GoalsMayModifyTrail_17, STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CI_19);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__lookup_switch__record_case_id_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_Key_15,
  MR_Word GetTag_6,
  MR_Word CaseId_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_13,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_14)
{
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_8, (MR_Integer) 1))));
  MR_Box Index_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, GetTag_6, (MR_Integer) 1))));

  Index_12 = func_0(((MR_Box) (GetTag_6)), ((MR_Box) (ConsTag_11)));
  mercury__map__det_insert_4_p_0(TypeInfo_for_Key_15, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), Index_12, ((MR_Box) (CaseId_7)), STATE_VARIABLE_KeyToCaseIdMap_0_13, STATE_VARIABLE_KeyToCaseIdMap_14);
}

static void MR_CALL 
ll_backend__lookup_switch__record_case_id_for_tagged_cons_ids_5_p_0(
  MR_Word TypeInfo_for_Key_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_KeyToCaseIdMap_0_4,
  MR_Word * STATE_VARIABLE_KeyToCaseIdMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_KeyToCaseIdMap_5 = STATE_VARIABLE_KeyToCaseIdMap_0_4;
    else
    {
      MR_Word TaggedConsId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TaggedConsIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_KeyToCaseIdMap_18_18;
      MR_Word ConsTag_21 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_13, (MR_Integer) 1))));
      MR_Box Index_22;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_KeyToCaseIdMap_0_4;

      Index_22 = func_0(((MR_Box) (HeadVar__1_1)), ((MR_Box) (ConsTag_21)));
      mercury__map__det_insert_4_p_0(TypeInfo_for_Key_19, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), Index_22, ((MR_Box) (HeadVar__2_2)), STATE_VARIABLE_KeyToCaseIdMap_0_4, &STATE_VARIABLE_KeyToCaseIdMap_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TaggedConsIds_14;
      next_value_of_STATE_VARIABLE_KeyToCaseIdMap_0_4 = STATE_VARIABLE_KeyToCaseIdMap_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_KeyToCaseIdMap_0_4 = next_value_of_STATE_VARIABLE_KeyToCaseIdMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__lookup_switch____Unify____case_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__lookup_switch____Compare____case_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__lookup_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.lookup_switch.
