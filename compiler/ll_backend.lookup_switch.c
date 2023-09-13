/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version rotd-2023-09-12
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

static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4];

static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4];

static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0;

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1];

static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1];

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1];

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1];

static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__498__1_2_p_0(
  MR_Word OutVars_27,
  MR_Word HeadVar__2_66);

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
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28,
  MR_Word STATE_VARIABLE_CLD_0_29,
  MR_Word * STATE_VARIABLE_CLD_30);

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
  MR_Word STATE_VARIABLE_RevRows_0_4,
  MR_Word * STATE_VARIABLE_RevRows_5);

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
  MR_Word STATE_VARIABLE_MaybeEnd_0_58,
  MR_Word * STATE_VARIABLE_MaybeEnd_59,
  MR_Word * Code_32,
  MR_Word STATE_VARIABLE_CI_0_60,
  MR_Word * STATE_VARIABLE_CI_61,
  MR_Word STATE_VARIABLE_CLD_0_62);

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
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumPrevColumns_2,
  MR_Word OutVars_3,
  MR_Word ResumeVars_4,
  MR_Word BranchStart_5,
  MR_Word EndLabel_6,
  MR_Word StoreMap_7,
  MR_Word Liveness_8,
  MR_Word AddTrailOps_9,
  MR_Word BaseReg_10,
  MR_Word CurSlot_11,
  MR_Word MaxSlot_12,
  MR_Word LaterVectorAddrRval_13,
  MR_Word STATE_VARIABLE_MaybeEnd_0_14,
  MR_Word * STATE_VARIABLE_MaybeEnd_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18);

static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
  MR_Word TypeInfo_for_Key_101,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_IndexMap_0_8,
  MR_Word * STATE_VARIABLE_IndexMap_9,
  MR_Word STATE_VARIABLE_MaybeEnd_0_10,
  MR_Word * STATE_VARIABLE_MaybeEnd_11,
  MR_Word STATE_VARIABLE_ResumeVars_0_12,
  MR_Word * STATE_VARIABLE_ResumeVars_13,
  MR_Word STATE_VARIABLE_GoalsMayModifyTrail_0_14,
  MR_Word * STATE_VARIABLE_GoalsMayModifyTrail_15,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17);

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_Key_15,
  MR_Word GetTag_6,
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
  MR_Word TypeInfo_for_Key_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IndexMap_0_4,
  MR_Word * STATE_VARIABLE_IndexMap_5);

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


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[41][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[8][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1];

static /* final */ const int64_t ll_backend__lookup_switch_scalar_common_5[1];

static /* final */ const uint64_t ll_backend__lookup_switch_scalar_common_6[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][6];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_8[2][5];


struct ll_backend__lookup_switch__vector_common_type_9_0_s {
  const MR_Word ll_backend__lookup_switch__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct ll_backend__lookup_switch__vector_common_type_9_0_s ll_backend__lookup_switch_vector_common_9[10];



static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[41][2] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
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
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[3])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_4[0])
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_Word) (INT16_C(0)))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_Word) (INT32_C(0)))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_5[0])
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_Word) (INT8_C(0)))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_3[4])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) (&ll_backend__lookup_switch_scalar_common_6[0])
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_Word) (UINT8_C(0)))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[6])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[7])))
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
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_fail_row_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[0])),
    ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[0])),
    ((MR_Box) (ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[8][1] = {
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

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1] = {
  /* row   0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const int64_t ll_backend__lookup_switch_scalar_common_5[1] = {
  /* row   0 */
  INT64_C(0),
};

static /* final */ const uint64_t ll_backend__lookup_switch_scalar_common_6[1] = {
  /* row   0 */
  UINT64_C(0),
};

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][6] = {
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

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_8[2][5] = {
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


static /* final */ const struct ll_backend__lookup_switch__vector_common_type_9_0_s ll_backend__lookup_switch_vector_common_9[10] = {
  /* row   0 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8])) },
  /* row   1 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[19])) },
  /* row   2 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[18])) },
  /* row   3 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[27])) },
  /* row   4 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[12])) },
  /* row   5 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[21])) },
  /* row   6 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[14])) },
  /* row   7 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[23])) },
  /* row   8 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[16])) },
  /* row   9 */   { (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[25])) },
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

static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
    (MR_PseudoTypeInfo) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0)
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

static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4] = {
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness"
};

static const MR_DuFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 = {
  (MR_String) "lookup_switch_info",
  INT16_C(4),
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
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__498__1_2_p_0(
  MR_Word OutVars_27,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]), ((MR_Box) (OutVars_27)), ((MR_Box) (HeadVar__2_66)));
  return succeeded;
}

void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
  MR_Word TypeInfo_for_Key_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    backend_libs__switch_util____Compare____case_consts_3_0(TypeInfo_for_Key_17, (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0), &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
  MR_Word TypeInfo_for_Key_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = backend_libs__switch_util____Unify____case_consts_3_0(TypeInfo_for_Key_13, (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0), ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
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
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[10]));
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[29]));
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        HeadVar__2_2 = ((&ll_backend__lookup_switch_vector_common_9[0 + Var_48]))->ll_backend__lookup_switch__vector_common_type_9_0__vct_9_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(
  MR_Word VarRval_15,
  MR_Word LookupSwitchInfo_16,
  MR_Word EndLabel_17,
  MR_Word StoreMap_18,
  MR_Integer StartVal_19,
  MR_Integer EndVal_20,
  MR_Word NeedBitVecCheck_21,
  MR_Word NeedRangeCheck_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_45,
  MR_Word * STATE_VARIABLE_MaybeEnd_46,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48,
  MR_Word STATE_VARIABLE_CLD_0_49)
{
  MR_bool succeeded = (StartVal_19 == (MR_Integer) 0);
  MR_Word CaseConsts_27 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_16, (MR_Integer) 0))));
  MR_Word OutVars_28 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_16, (MR_Integer) 1))));
  MR_Word OutTypes_29 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_16, (MR_Integer) 2))));
  MR_Word Liveness_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_16, (MR_Integer) 3))));
  MR_Word IndexRval_31;
  MR_Word RangeCheckCode_34;
  MR_Word Comment_36;
  MR_Word RestCode_38;
  MR_Word STATE_VARIABLE_CI_57_57;
  MR_Word STATE_VARIABLE_CLD_58_58;
  MR_Word Var_71;

  if (succeeded)
    IndexRval_31 = VarRval_15;
  else
  {
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (StartVal_19));
    }
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      IndexRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IndexRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IndexRval_31, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_3[0])));
      MR_hl_field(3, IndexRval_31, 2) = ((MR_Box) (VarRval_15));
      MR_hl_field(3, IndexRval_31, 3) = ((MR_Box) (Var_52));
    }
  }
  switch (NeedRangeCheck_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        RangeCheckCode_34 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_57_57 = STATE_VARIABLE_CI_0_47;
        STATE_VARIABLE_CLD_58_58 = STATE_VARIABLE_CLD_0_49;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Difference_32 = (MR_Integer) ((MR_Unsigned) EndVal_20 - (MR_Unsigned) StartVal_19);
        MR_Word CmpRval_33;
        MR_Word Var_55;
        MR_Word Var_56;

        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Difference_32));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          CmpRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CmpRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CmpRval_33, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(3, CmpRval_33, 2) = ((MR_Box) (IndexRval_31));
          MR_hl_field(3, CmpRval_33, 3) = ((MR_Box) (Var_55));
        }
        ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(CmpRval_33, &RangeCheckCode_34, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_58_58);
      }
      break;
  }
  if (((MR_tag((MR_Word) CaseConsts_27)) == (MR_Integer) 0))
  {
    MR_Word CaseValuesMap_35 = ((MR_Word) ((MR_hl_field(0, CaseConsts_27, (MR_Integer) 0))));
    MR_Word CaseValues_37;

    Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[6])));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), CaseValuesMap_35, &CaseValues_37);
    ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(IndexRval_31, StoreMap_18, StartVal_19, CaseValues_37, OutVars_28, OutTypes_29, NeedBitVecCheck_21, Liveness_30, &RestCode_38, STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CI_48, STATE_VARIABLE_CLD_58_58);
    *STATE_VARIABLE_MaybeEnd_46 = STATE_VARIABLE_MaybeEnd_0_45;
  }
  else
  {
    MR_Word CaseSolnMap_39 = ((MR_Word) ((MR_hl_field(1, CaseConsts_27, (MR_Integer) 0))));
    MR_Word ResumeVars_40;
    MR_Word GoalsMayModifyTrail_41;
    MR_Word AddTrailOps_43;
    MR_Word CaseSolns_44;
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, CaseConsts_27, (MR_Integer) 1))));

    ResumeVars_40 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
    GoalsMayModifyTrail_41 = ((MR_Unsigned) ((MR_hl_field(0, Var_64, (MR_Integer) 1))) & (MR_Integer) 1);
    switch (GoalsMayModifyTrail_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AddTrailOps_43 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_57_57, &AddTrailOps_43);
        break;
    }
    Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[7])));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), CaseSolnMap_39, &CaseSolns_44);
    ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(IndexRval_31, EndLabel_17, StoreMap_18, StartVal_19, EndVal_20, CaseSolns_44, ResumeVars_40, AddTrailOps_43, OutVars_28, OutTypes_29, NeedBitVecCheck_21, Liveness_30, STATE_VARIABLE_MaybeEnd_0_45, STATE_VARIABLE_MaybeEnd_46, &RestCode_38, STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CI_48, STATE_VARIABLE_CLD_58_58);
  }
  Var_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RangeCheckCode_34, RestCode_38);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comment_36, Var_71);
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
    MR_Word RevVectorRvals_32;
    MR_Word VectorRvals_33;
    MR_Word VectorAddr_34;
    MR_Word VectorAddrRval_35;
    MR_Word BaseRval_36;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word Var_48;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_15, (MR_Integer) 0, &BaseReg_30, STATE_VARIABLE_CLD_43_43, &STATE_VARIABLE_CLD_45_45);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]), OutVars_19, &NumOutVars_31);
    ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(CaseValues_18, StartVal_16, OutTypes_20, (MR_Word) ((MR_Unsigned) 0U), &RevVectorRvals_32);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), RevVectorRvals_32, &VectorRvals_33);
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
        MR_hl_field(3, BaseRval_36, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[30])));
        MR_hl_field(3, BaseRval_36, 2) = ((MR_Box) (IndexRval_14));
        MR_hl_field(3, BaseRval_36, 3) = ((MR_Box) (Var_52));
      }
    }
    {
      Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_57, 0) = ((MR_Box) (VectorAddrRval_35));
      MR_hl_field(2, Var_57, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5])));
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
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28,
  MR_Word STATE_VARIABLE_CLD_0_29,
  MR_Word * STATE_VARIABLE_CLD_30)
{
  MR_bool succeeded;
  MR_Word Globals_17;
  MR_Integer WordBits_18;
  MR_Integer Log2WordBits_19;
  MR_Word BitVecArgs_20;
  MR_Word BitVecRval_21;
  MR_Word Word_23;
  MR_Word BitNum_24;
  MR_Word HasBit_26;
  MR_Word STATE_VARIABLE_CI_31_31;
  MR_Word Var_50;
  MR_Word BitMap0_58;
  MR_Word BitMap_59;
  MR_Word WordVals_60;
  MR_Word DataAddr_61;
  MR_Word Var_63;
  MR_Word SingleWord_22;
  MR_Word Var_32;

  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_27, &Globals_17);
  backend_libs__switch_util__get_word_bits_3_p_0(Globals_17, &WordBits_18, &Log2WordBits_19);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &BitMap0_58);
  ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(CaseVals_11, Start_12, WordBits_18, BitMap0_58, &BitMap_59);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BitMap_59, &WordVals_60);
  ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(WordVals_60, (MR_Integer) 0, &BitVecArgs_20);
  ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(BitVecArgs_20, &DataAddr_61, STATE_VARIABLE_CI_0_27, &STATE_VARIABLE_CI_31_31);
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (DataAddr_61));
    MR_hl_field(3, Var_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    BitVecRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, BitVecRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, BitVecRval_21, 1) = ((MR_Box) (Var_63));
  }
  succeeded = (BitVecArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SingleWord_22 = ((MR_Word) ((MR_hl_field(1, BitVecArgs_20, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, BitVecArgs_20, (MR_Integer) 1))));
    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    Word_23 = SingleWord_22;
    BitNum_24 = IndexRval_10;
  }
  else
  {
    MR_Word WordNum_25;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer Var_46;

    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Log2WordBits_19));
    }
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      WordNum_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, WordNum_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, WordNum_25, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[37])));
      MR_hl_field(3, WordNum_25, 2) = ((MR_Box) (IndexRval_10));
      MR_hl_field(3, WordNum_25, 3) = ((MR_Box) (Var_36));
    }
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5])));
      MR_hl_field(3, Var_38, 2) = ((MR_Box) (BitVecRval_21));
      MR_hl_field(3, Var_38, 3) = ((MR_Box) (WordNum_25));
    }
    {
      Word_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Word_23, 0) = ((MR_Box) (Var_38));
    }
    Var_46 = (MR_Integer) ((MR_Unsigned) WordBits_18 - (MR_Unsigned) 1);
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      BitNum_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BitNum_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, BitNum_24, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[38])));
      MR_hl_field(3, BitNum_24, 2) = ((MR_Box) (IndexRval_10));
      MR_hl_field(3, BitNum_24, 3) = ((MR_Box) (Var_44));
    }
  }
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[39])));
    MR_hl_field(3, Var_50, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[40])));
    MR_hl_field(3, Var_50, 3) = ((MR_Box) (BitNum_24));
  }
  {
    HasBit_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HasBit_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, HasBit_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[38])));
    MR_hl_field(3, HasBit_26, 2) = ((MR_Box) (Var_50));
    MR_hl_field(3, HasBit_26, 3) = ((MR_Box) (Word_23));
  }
  ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(HasBit_26, CheckCode_14, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_28, STATE_VARIABLE_CLD_0_29, STATE_VARIABLE_CLD_30);
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
  MR_Word STATE_VARIABLE_RevRows_0_4,
  MR_Word * STATE_VARIABLE_RevRows_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevRows_5 = STATE_VARIABLE_RevRows_0_4;
    else
    {
      MR_Integer Index_11;
      MR_Word Rvals_12;
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Row_17;
      MR_Word Remainder_18;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevRows_24_24;
      MR_Integer Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurIndex_2;
      MR_Word next_value_of_STATE_VARIABLE_RevRows_0_4;

      Index_11 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      Rvals_12 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
      succeeded = (CurIndex_2 < Index_11);
      if (succeeded)
      {
        Row_17 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[4]), OutTypes_3);
        Remainder_18 = HeadVar__1_1;
      }
      else
      {
        Row_17 = Rvals_12;
        Remainder_18 = Rest_13;
      }
      {
        STATE_VARIABLE_RevRows_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRows_24_24, 0) = ((MR_Box) (Row_17));
        MR_hl_field(1, STATE_VARIABLE_RevRows_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevRows_0_4));
      }
      Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Remainder_18;
      next_value_of_CurIndex_2 = Var_25;
      next_value_of_STATE_VARIABLE_RevRows_0_4 = STATE_VARIABLE_RevRows_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurIndex_2 = next_value_of_CurIndex_2;
      STATE_VARIABLE_RevRows_0_4 = next_value_of_STATE_VARIABLE_RevRows_0_4;
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

  succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__498__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_58,
  MR_Word * STATE_VARIABLE_MaybeEnd_59,
  MR_Word * Code_32,
  MR_Word STATE_VARIABLE_CI_0_60,
  MR_Word * STATE_VARIABLE_CI_61,
  MR_Word STATE_VARIABLE_CLD_0_62)
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
  MR_Word BaseReg_54;
  MR_Word BaseRegInitCode_55;
  MR_Word KindsCode_56;
  MR_Word EndLabelCode_57;
  MR_Word Var_63;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_CI_79_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_CI_82_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word STATE_VARIABLE_CLD_96_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_104;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Integer Var_71;
  MR_Integer Var_117;

  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_8[1]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (OutVars_27));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_63, (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "no OutVars");
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), OutTypes_28, &NumOutTypes_35);
  DummyLaterSolnRow_37 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__lookup_switch_scalar_common_2[3]), OutTypes_28);
  LaterSolnArrayCord0_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), ((MR_Box) (DummyLaterSolnRow_37)));
  ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(StartVal_22, EndVal_23, OutTypes_28, NumOutTypes_35, CaseSolns_24, &MainRows_39, (MR_Integer) 1, LaterSolnArrayCord0_38, &LaterSolnArrayCord_40, (MR_Integer) 0, &FailCaseCount_41, (MR_Integer) 0, &OneSolnCaseCount_42, (MR_Integer) 0, &SeveralSolnCaseCount_43);
  LaterSolnArray_44 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[2]), LaterSolnArrayCord_40);
  succeeded = (NeedBitVecCheck_29 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_71 = (MR_Integer) 0;
    succeeded = (FailCaseCount_41 <= Var_71);
  }
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_117 = (MR_Integer) 0;
    succeeded = (FailCaseCount_41 > Var_117);
    if (succeeded)
      succeeded = (NeedBitVecCheck_29 != (MR_Integer) 0);
    succeeded = !(succeeded);
  }
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "bad FailCaseCount");
      return;
    }
  Var_74 = (MR_Word) (MR_mkword(2, &ll_backend__lookup_switch_scalar_common_3[0]));
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (OutTypes_28));
  }
  {
    MainRowTypes_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_45, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, MainRowTypes_45, 1) = ((MR_Box) (Var_76));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), MainRowTypes_45, &MainNumColumns_46);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_45, MainRows_39, &MainVectorAddr_47, STATE_VARIABLE_CI_0_60, &STATE_VARIABLE_CI_79_79);
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (MainVectorAddr_47));
    MR_hl_field(3, Var_80, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_48, 1) = ((MR_Box) (Var_80));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_28, LaterSolnArray_44, &LaterVectorAddr_49, STATE_VARIABLE_CI_79_79, &STATE_VARIABLE_CI_82_82);
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (LaterVectorAddr_49));
    MR_hl_field(3, Var_83, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_50, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (FailCaseCount_41));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (OneSolnCaseCount_42));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (SeveralSolnCaseCount_43));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_2[0]), Var_85, &AscendingSortedCountKinds_51);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_2[0]), AscendingSortedCountKinds_51, &DescendingSortedCountKinds_52);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_52, &DescendingSortedKinds_53);
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_21, (MR_Integer) 0, &BaseReg_54, STATE_VARIABLE_CLD_0_62, &STATE_VARIABLE_CLD_96_96);
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (MainNumColumns_46));
  }
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[30])));
    MR_hl_field(3, Var_104, 2) = ((MR_Box) (IndexRval_19));
    MR_hl_field(3, Var_104, 3) = ((MR_Box) (Var_107));
  }
  {
    Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_100, 0) = ((MR_Box) (MainVectorAddrRval_48));
    MR_hl_field(2, Var_100, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5])));
    MR_hl_field(2, Var_100, 2) = ((MR_Box) (Var_104));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) (BaseReg_54));
    MR_hl_field(3, Var_98, 2) = ((MR_Box) (Var_99));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
  }
  BaseRegInitCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_97)));
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(DescendingSortedKinds_53, (MR_Integer) 0, OutVars_27, ResumeVars_25, EndLabel_20, StoreMap_21, Liveness_30, AddTrailOps_26, BaseReg_54, LaterVectorAddrRval_50, STATE_VARIABLE_MaybeEnd_0_58, STATE_VARIABLE_MaybeEnd_59, &KindsCode_56, STATE_VARIABLE_CI_82_82, STATE_VARIABLE_CI_61, STATE_VARIABLE_CLD_96_96);
  {
    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_114, 1) = ((MR_Box) (EndLabel_20));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
  }
  EndLabelCode_57 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_113)));
  Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), KindsCode_56, EndLabelCode_57);
  *Code_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseRegInitCode_55, Var_116);
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
      MainRow_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[36])), VarRvals_105);
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
        ZeroRval_61 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8]));
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
  *MainRow_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_1[36])), VarRvals_9);
  *STATE_VARIABLE_FailCaseCount_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FailCaseCount_0_10 + (MR_Unsigned) 1);
}

void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(
  MR_Word Kinds_17,
  MR_Integer NumPrevColumns_18,
  MR_Word OutVars_19,
  MR_Word ResumeVars_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word Liveness_23,
  MR_Word AddTrailOps_24,
  MR_Word BaseReg_25,
  MR_Word LaterVectorAddrRval_26,
  MR_Word STATE_VARIABLE_MaybeEnd_0_34,
  MR_Word * STATE_VARIABLE_MaybeEnd_35,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word STATE_VARIABLE_CLD_0_38)
{
  MR_Word CurSlot_31;
  MR_Word MaxSlot_32;
  MR_Word BranchStart_33;
  MR_Word STATE_VARIABLE_CI_41_41;
  MR_Word STATE_VARIABLE_CLD_42_42;
  MR_Word STATE_VARIABLE_CI_45_45;
  MR_Word STATE_VARIABLE_CLD_46_46;

  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 1, &CurSlot_31, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_41_41, STATE_VARIABLE_CLD_0_38, &STATE_VARIABLE_CLD_42_42);
  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 1, &MaxSlot_32, STATE_VARIABLE_CI_41_41, &STATE_VARIABLE_CI_45_45, STATE_VARIABLE_CLD_42_42, &STATE_VARIABLE_CLD_46_46);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_46_46, &BranchStart_33);
  ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(Kinds_17, NumPrevColumns_18, OutVars_19, ResumeVars_20, BranchStart_33, EndLabel_21, StoreMap_22, Liveness_23, AddTrailOps_24, BaseReg_25, CurSlot_31, MaxSlot_32, LaterVectorAddrRval_26, STATE_VARIABLE_MaybeEnd_0_34, STATE_VARIABLE_MaybeEnd_35, Code_28, STATE_VARIABLE_CI_45_45, STATE_VARIABLE_CI_37);
}

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumPrevColumns_2,
  MR_Word OutVars_3,
  MR_Word ResumeVars_4,
  MR_Word BranchStart_5,
  MR_Word EndLabel_6,
  MR_Word StoreMap_7,
  MR_Word Liveness_8,
  MR_Word AddTrailOps_9,
  MR_Word BaseReg_10,
  MR_Word CurSlot_11,
  MR_Word MaxSlot_12,
  MR_Word LaterVectorAddrRval_13,
  MR_Word STATE_VARIABLE_MaybeEnd_0_14,
  MR_Word * STATE_VARIABLE_MaybeEnd_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.lookup_switch.generate_code_for_each_kind\'/18", (MR_String) "no kinds");
      return;
    }
  else
  {
    MR_Word Kind_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Kinds_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TestOp_57;
    MR_Word KindCode_59;
    MR_Word STATE_VARIABLE_CI_109_109;
    MR_Word STATE_VARIABLE_MaybeEnd_115_115;

    switch (Kind_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word BranchEndCode_60;
          MR_Word GotoEndCode_61;
          MR_Word STATE_VARIABLE_CLD_111_111;
          MR_Integer Var_112;
          MR_Word STATE_VARIABLE_CLD_113_113;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;

          TestOp_57 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[31]));
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_5, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CLD_111_111);
          Var_112 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_2 + (MR_Unsigned) 2);
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_3, Var_112, BaseReg_10, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CLD_111_111, &STATE_VARIABLE_CLD_113_113);
          ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_7, Liveness_8, STATE_VARIABLE_MaybeEnd_0_14, &STATE_VARIABLE_MaybeEnd_115_115, &BranchEndCode_60, STATE_VARIABLE_CLD_113_113);
          {
            Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_118, 0) = ((MR_Box) (EndLabel_6));
          }
          {
            Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_117, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(0, Var_116, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
          }
          GotoEndCode_61 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_116)));
          KindCode_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_60, GotoEndCode_61);
          STATE_VARIABLE_CI_109_109 = STATE_VARIABLE_CI_0_17;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Globals_62;
          MR_Word ResumeMap_63;
          MR_Word FlushCode_64;
          MR_Word MinOffsetColumnRval_65;
          MR_Word MaxOffsetColumnRval_66;
          MR_Word SaveSlotsCode_67;
          MR_Word SaveTicketCode_68;
          MR_Word MaybeTicketSlot_69;
          MR_Word ReclaimHeap_70;
          MR_Word SaveHpCode_71;
          MR_Word MaybeHpSlot_72;
          MR_Word HijackInfo_73;
          MR_Word PrepareHijackCode_74;
          MR_Word DisjEntry_75;
          MR_Word ResumePoint_76;
          MR_Word UpdateRedoipCode_77;
          MR_Word FirstFlushResumeVarsCode_78;
          MR_Word FirstZombies_79;
          MR_Word FirstBranchEndCode_80;
          MR_Word ResumePointCode_81;
          MR_Word RestoreTicketCode_82;
          MR_Word RestoreHpCode_83;
          MR_Word LaterBaseReg_84;
          MR_Word UndoLabel_85;
          MR_Word AfterUndoLabel_86;
          MR_Integer NumOutVars_87;
          MR_Word TestMoreSolnsCode_88;
          MR_Word UndoHijackCode_89;
          MR_Word AfterUndoLabelCode_90;
          MR_Word LaterFlushResumeVarsCode_92;
          MR_Word LaterZombies_93;
          MR_Word LaterBranchEndCode_94;
          MR_Word STATE_VARIABLE_CLD_121_121;
          MR_Word Var_122;
          MR_Word STATE_VARIABLE_CLD_123_123;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Integer Var_126;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_136;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word STATE_VARIABLE_CI_149_149;
          MR_Word STATE_VARIABLE_CLD_150_150;
          MR_Word STATE_VARIABLE_CI_152_152;
          MR_Word STATE_VARIABLE_CLD_153_153;
          MR_Word STATE_VARIABLE_CI_155_155;
          MR_Word STATE_VARIABLE_CLD_156_156;
          MR_Word STATE_VARIABLE_CI_158_158;
          MR_Word STATE_VARIABLE_CLD_160_160;
          MR_Integer Var_161;
          MR_Word STATE_VARIABLE_CLD_162_162;
          MR_Word STATE_VARIABLE_CLD_164_164;
          MR_Word STATE_VARIABLE_CLD_165_165;
          MR_Word STATE_VARIABLE_CLD_166_166;
          MR_Word STATE_VARIABLE_CLD_167_167;
          MR_Word STATE_VARIABLE_MaybeEnd_168_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word STATE_VARIABLE_CLD_173_173;
          MR_Word STATE_VARIABLE_CI_174_174;
          MR_Word STATE_VARIABLE_CLD_175_175;
          MR_Word STATE_VARIABLE_CLD_178_178;
          MR_Word STATE_VARIABLE_CI_179_179;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_194;
          MR_Word Var_196;
          MR_Word Var_197;
          MR_Word Var_198;
          MR_Word Var_199;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_Word Var_209;
          MR_Word Var_211;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word STATE_VARIABLE_CLD_216_216;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_219;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Word Var_225;
          MR_Word STATE_VARIABLE_CLD_233_233;
          MR_Word STATE_VARIABLE_CLD_235_235;
          MR_Word STATE_VARIABLE_CLD_236_236;
          MR_Word STATE_VARIABLE_CLD_237_237;
          MR_Word STATE_VARIABLE_CLD_238_238;
          MR_Word STATE_VARIABLE_CLD_239_239;
          MR_Word Var_241;
          MR_Word Var_242;
          MR_Word Var_243;
          MR_Word Var_244;
          MR_Word Var_245;
          MR_Word Var_246;
          MR_Word Var_247;
          MR_Word Var_248;
          MR_Word Var_249;
          MR_Word Var_250;
          MR_Word Var_251;
          MR_Word Var_252;
          MR_Word Var_253;
          MR_Word Var_254;
          MR_Word Var_255;
          MR_Word Var_256;
          MR_Word GotoEndCode_298;
          MR_Word _LaterUpdateRedoipCode_91;

          TestOp_57 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[32]));
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_17, &Globals_62);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_5, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CLD_121_121);
          Var_122 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_4);
          ll_backend__code_loc_dep__produce_vars_5_p_0(Var_122, &ResumeMap_63, &FlushCode_64, STATE_VARIABLE_CLD_121_121, &STATE_VARIABLE_CLD_123_123);
          {
            Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_124, 0) = ((MR_Box) (NumPrevColumns_2));
          }
          {
            MinOffsetColumnRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MinOffsetColumnRval_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, MinOffsetColumnRval_65, 1) = ((MR_Box) (Var_124));
          }
          Var_126 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_2 + (MR_Unsigned) 1);
          {
            Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
          }
          {
            MaxOffsetColumnRval_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MaxOffsetColumnRval_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, MaxOffsetColumnRval_66, 1) = ((MR_Box) (Var_125));
          }
          Var_133 = (MR_Word) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5]));
          {
            Var_136 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_136, 0) = ((MR_Box) (BaseReg_10));
          }
          {
            Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_132, 1) = ((MR_Box) (Var_133));
            MR_hl_field(3, Var_132, 2) = ((MR_Box) (Var_136));
            MR_hl_field(3, Var_132, 3) = ((MR_Box) (MinOffsetColumnRval_65));
          }
          {
            Var_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_131, 0) = ((MR_Box) (Var_132));
          }
          {
            Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_130, 1) = ((MR_Box) (CurSlot_11));
            MR_hl_field(3, Var_130, 2) = ((MR_Box) (Var_131));
          }
          {
            Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_129, 0) = ((MR_Box) (Var_130));
            MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
          }
          {
            Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_142, 1) = ((MR_Box) (Var_133));
            MR_hl_field(3, Var_142, 2) = ((MR_Box) (Var_136));
            MR_hl_field(3, Var_142, 3) = ((MR_Box) (MaxOffsetColumnRval_66));
          }
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_141, 0) = ((MR_Box) (Var_142));
          }
          {
            Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_140, 1) = ((MR_Box) (MaxSlot_12));
            MR_hl_field(3, Var_140, 2) = ((MR_Box) (Var_141));
          }
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(0, Var_139, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
          }
          {
            Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
            MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
            MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_138));
          }
          SaveSlotsCode_67 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_128);
          ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_9, &SaveTicketCode_68, &MaybeTicketSlot_69, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CI_149_149, STATE_VARIABLE_CLD_123_123, &STATE_VARIABLE_CLD_150_150);
          libs__globals__lookup_bool_option_3_p_0(Globals_62, (MR_Integer) 352, &ReclaimHeap_70);
          ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_70, &SaveHpCode_71, &MaybeHpSlot_72, STATE_VARIABLE_CI_149_149, &STATE_VARIABLE_CI_152_152, STATE_VARIABLE_CLD_150_150, &STATE_VARIABLE_CLD_153_153);
          ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0((MR_Integer) 2, &HijackInfo_73, &PrepareHijackCode_74, STATE_VARIABLE_CI_152_152, &STATE_VARIABLE_CI_155_155, STATE_VARIABLE_CLD_153_153, &STATE_VARIABLE_CLD_156_156);
          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_156_156, &DisjEntry_75);
          ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_4, (MR_Integer) 1, ResumeMap_63, &ResumePoint_76, STATE_VARIABLE_CI_155_155, &STATE_VARIABLE_CI_158_158);
          ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_76, (MR_Integer) 2, &UpdateRedoipCode_77, STATE_VARIABLE_CLD_156_156, &STATE_VARIABLE_CLD_160_160);
          Var_161 = (MR_Integer) ((MR_Unsigned) NumPrevColumns_2 + (MR_Unsigned) 2);
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_3, Var_161, BaseReg_10, STATE_VARIABLE_CI_158_158, STATE_VARIABLE_CLD_160_160, &STATE_VARIABLE_CLD_162_162);
          ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&FirstFlushResumeVarsCode_78, STATE_VARIABLE_CLD_162_162, &STATE_VARIABLE_CLD_164_164);
          ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_164_164, &STATE_VARIABLE_CLD_165_165);
          ll_backend__code_loc_dep__pickup_zombies_3_p_0(&FirstZombies_79, STATE_VARIABLE_CLD_165_165, &STATE_VARIABLE_CLD_166_166);
          ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(FirstZombies_79, STATE_VARIABLE_CLD_166_166, &STATE_VARIABLE_CLD_167_167);
          ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_7, Liveness_8, STATE_VARIABLE_MaybeEnd_0_14, &STATE_VARIABLE_MaybeEnd_168_168, &FirstBranchEndCode_80, STATE_VARIABLE_CLD_167_167);
          {
            Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_171, 0) = ((MR_Box) (EndLabel_6));
          }
          {
            Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_170, 1) = ((MR_Box) (Var_171));
          }
          {
            Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_169, 0) = ((MR_Box) (Var_170));
            MR_hl_field(0, Var_169, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
          }
          GotoEndCode_298 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_169)));
          ll_backend__code_loc_dep__reset_to_position_3_p_0(DisjEntry_75, STATE_VARIABLE_CI_158_158, &STATE_VARIABLE_CLD_173_173);
          ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_76, &ResumePointCode_81, STATE_VARIABLE_CI_158_158, &STATE_VARIABLE_CI_174_174, STATE_VARIABLE_CLD_173_173, &STATE_VARIABLE_CLD_175_175);
          ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_69, (MR_Integer) 0, &RestoreTicketCode_82);
          ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(MaybeHpSlot_72, &RestoreHpCode_83);
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_7, (MR_Integer) 0, &LaterBaseReg_84, STATE_VARIABLE_CLD_175_175, &STATE_VARIABLE_CLD_178_178);
          ll_backend__code_info__get_next_label_3_p_0(&UndoLabel_85, STATE_VARIABLE_CI_174_174, &STATE_VARIABLE_CI_179_179);
          ll_backend__code_info__get_next_label_3_p_0(&AfterUndoLabel_86, STATE_VARIABLE_CI_179_179, &STATE_VARIABLE_CI_109_109);
          mercury__list__length_2_p_0((MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]), OutVars_3, &NumOutVars_87);
          {
            Var_184 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_184, 0) = ((MR_Box) (CurSlot_11));
          }
          {
            Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_183, 1) = ((MR_Box) (LaterBaseReg_84));
            MR_hl_field(3, Var_183, 2) = ((MR_Box) (Var_184));
          }
          {
            Var_182 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_182, 0) = ((MR_Box) (Var_183));
            MR_hl_field(0, Var_182, 1) = ((MR_Box) ((MR_String) "Init later base register"));
          }
          {
            Var_192 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_192, 0) = ((MR_Box) (LaterBaseReg_84));
          }
          {
            Var_193 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_193, 0) = ((MR_Box) (MaxSlot_12));
          }
          {
            Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_189, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[33])));
            MR_hl_field(3, Var_189, 2) = ((MR_Box) (Var_192));
            MR_hl_field(3, Var_189, 3) = ((MR_Box) (Var_193));
          }
          {
            Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_194, 0) = ((MR_Box) (UndoLabel_85));
          }
          {
            Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_188, 1) = ((MR_Box) (Var_189));
            MR_hl_field(3, Var_188, 2) = ((MR_Box) (Var_194));
          }
          {
            Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_187, 0) = ((MR_Box) (Var_188));
            MR_hl_field(0, Var_187, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
          }
          {
            Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_204, 0) = ((MR_Box) (NumOutVars_87));
          }
          {
            Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_203, 1) = ((MR_Box) (Var_204));
          }
          {
            Var_199 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_199, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_199, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[0])));
            MR_hl_field(3, Var_199, 2) = ((MR_Box) (Var_184));
            MR_hl_field(3, Var_199, 3) = ((MR_Box) (Var_203));
          }
          {
            Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_198, 1) = ((MR_Box) (CurSlot_11));
            MR_hl_field(3, Var_198, 2) = ((MR_Box) (Var_199));
          }
          {
            Var_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_197, 0) = ((MR_Box) (Var_198));
            MR_hl_field(0, Var_197, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
          }
          {
            Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_209, 0) = ((MR_Box) (AfterUndoLabel_86));
          }
          {
            Var_208 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_208, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_208, 1) = ((MR_Box) (Var_209));
          }
          {
            Var_207 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_207, 0) = ((MR_Box) (Var_208));
            MR_hl_field(0, Var_207, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
          }
          {
            Var_213 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_213, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_213, 1) = ((MR_Box) (UndoLabel_85));
          }
          {
            Var_212 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_212, 0) = ((MR_Box) (Var_213));
            MR_hl_field(0, Var_212, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
          }
          {
            Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_211, 0) = ((MR_Box) (Var_212));
            MR_hl_field(1, Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_206, 0) = ((MR_Box) (Var_207));
            MR_hl_field(1, Var_206, 1) = ((MR_Box) (Var_211));
          }
          {
            Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_196, 0) = ((MR_Box) (Var_197));
            MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_206));
          }
          {
            Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
            MR_hl_field(1, Var_186, 1) = ((MR_Box) (Var_196));
          }
          {
            Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
            MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_186));
          }
          TestMoreSolnsCode_88 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_181);
          ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_73, &UndoHijackCode_89, STATE_VARIABLE_CLD_178_178, &STATE_VARIABLE_CLD_216_216);
          {
            Var_219 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_219, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_219, 1) = ((MR_Box) (AfterUndoLabel_86));
          }
          {
            Var_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_218, 0) = ((MR_Box) (Var_219));
            MR_hl_field(0, Var_218, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
          }
          {
            Var_225 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_225, 0) = ((MR_Box) (LaterVectorAddrRval_13));
            MR_hl_field(2, Var_225, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5])));
            MR_hl_field(2, Var_225, 2) = ((MR_Box) (Var_192));
          }
          {
            Var_224 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_224, 1) = ((MR_Box) (Var_225));
          }
          {
            Var_223 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_223, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_223, 1) = ((MR_Box) (LaterBaseReg_84));
            MR_hl_field(3, Var_223, 2) = ((MR_Box) (Var_224));
          }
          {
            Var_222 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_222, 0) = ((MR_Box) (Var_223));
            MR_hl_field(0, Var_222, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
          }
          {
            Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var_222));
            MR_hl_field(1, Var_221, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_217, 0) = ((MR_Box) (Var_218));
            MR_hl_field(1, Var_217, 1) = ((MR_Box) (Var_221));
          }
          AfterUndoLabelCode_90 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_217);
          ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_76, (MR_Integer) 2, &_LaterUpdateRedoipCode_91, STATE_VARIABLE_CLD_216_216, &STATE_VARIABLE_CLD_233_233);
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_3, (MR_Integer) 0, LaterBaseReg_84, STATE_VARIABLE_CI_109_109, STATE_VARIABLE_CLD_233_233, &STATE_VARIABLE_CLD_235_235);
          ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&LaterFlushResumeVarsCode_92, STATE_VARIABLE_CLD_235_235, &STATE_VARIABLE_CLD_236_236);
          ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_236_236, &STATE_VARIABLE_CLD_237_237);
          ll_backend__code_loc_dep__pickup_zombies_3_p_0(&LaterZombies_93, STATE_VARIABLE_CLD_237_237, &STATE_VARIABLE_CLD_238_238);
          ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(LaterZombies_93, STATE_VARIABLE_CLD_238_238, &STATE_VARIABLE_CLD_239_239);
          ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_7, Liveness_8, STATE_VARIABLE_MaybeEnd_168_168, &STATE_VARIABLE_MaybeEnd_115_115, &LaterBranchEndCode_94, STATE_VARIABLE_CLD_239_239);
          Var_256 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterBranchEndCode_94, GotoEndCode_298);
          Var_255 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterFlushResumeVarsCode_92, Var_256);
          Var_254 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterUndoLabelCode_90, Var_255);
          Var_253 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoHijackCode_89, Var_254);
          Var_252 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestMoreSolnsCode_88, Var_253);
          Var_251 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_83, Var_252);
          Var_250 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_82, Var_251);
          Var_249 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumePointCode_81, Var_250);
          Var_248 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoEndCode_298, Var_249);
          Var_247 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstBranchEndCode_80, Var_248);
          Var_246 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstFlushResumeVarsCode_78, Var_247);
          Var_245 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UpdateRedoipCode_77, Var_246);
          Var_244 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_74, Var_245);
          Var_243 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_71, Var_244);
          Var_242 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_68, Var_243);
          Var_241 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveSlotsCode_67, Var_242);
          KindCode_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_64, Var_241);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_CLD_107_107;
          MR_Word STATE_VARIABLE_CLD_108_108;

          TestOp_57 = (MR_Word) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[33]));
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_5, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CLD_107_107);
          ll_backend__code_loc_dep__release_reg_3_p_0(BaseReg_10, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_108_108);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&KindCode_59, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CI_109_109, STATE_VARIABLE_CLD_108_108);
          STATE_VARIABLE_MaybeEnd_115_115 = STATE_VARIABLE_MaybeEnd_0_14;
        }
        break;
    }
    if ((Kinds_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Code_16 = KindCode_59;
      *STATE_VARIABLE_MaybeEnd_15 = STATE_VARIABLE_MaybeEnd_115_115;
      *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_109_109;
    }
    else
    {
      MR_Word NextKind_95 = ((MR_Word) ((MR_hl_field(1, Kinds_41, (MR_Integer) 0))));
      MR_Word NextKindLabel_97;
      MR_Word TestRval_98;
      MR_Word TestCode_99;
      MR_Word NextKindLabelCode_100;
      MR_Word LaterKindsCode_101;
      MR_Word STATE_VARIABLE_CI_257_257;
      MR_Word Var_258;
      MR_Word Var_259;
      MR_Word Var_263;
      MR_Word Var_264;
      MR_Word Var_265;
      MR_Word Var_269;
      MR_Word Var_270;
      MR_Word Var_271;
      MR_Word Var_272;
      MR_Word Var_274;
      MR_Word Var_275;
      MR_Word Var_276;
      MR_String Var_277;
      MR_String Var_279;
      MR_Word Var_282;
      MR_Word Var_283;
      MR_Word Var_284;
      MR_Word Var_286;
      MR_Word Var_287;
      MR_Word Var_288;
      MR_String Var_289;
      MR_String Var_291;
      MR_Word Var_296;
      MR_Word Var_297;

      ll_backend__code_info__get_next_label_3_p_0(&NextKindLabel_97, STATE_VARIABLE_CI_109_109, &STATE_VARIABLE_CI_257_257);
      {
        Var_263 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_263, 0) = ((MR_Box) (BaseReg_10));
      }
      {
        Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_265, 0) = ((MR_Box) (NumPrevColumns_2));
      }
      {
        Var_264 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_264, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_264, 1) = ((MR_Box) (Var_265));
      }
      {
        Var_259 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_259, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_259, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_switch_scalar_common_3[5])));
        MR_hl_field(3, Var_259, 2) = ((MR_Box) (Var_263));
        MR_hl_field(3, Var_259, 3) = ((MR_Box) (Var_264));
      }
      {
        Var_258 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_258, 0) = ((MR_Box) (Var_259));
      }
      {
        TestRval_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, TestRval_98, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, TestRval_98, 1) = ((MR_Box) (TestOp_57));
        MR_hl_field(3, TestRval_98, 2) = ((MR_Box) (Var_258));
        MR_hl_field(3, TestRval_98, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__lookup_switch_scalar_common_1[8])));
      }
      {
        Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_272, 0) = ((MR_Box) (NextKindLabel_97));
      }
      {
        Var_271 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_271, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_271, 1) = ((MR_Box) (TestRval_98));
        MR_hl_field(3, Var_271, 2) = ((MR_Box) (Var_272));
      }
      {
        Var_270 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_270, 0) = ((MR_Box) (Var_271));
        MR_hl_field(0, Var_270, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
      }
      Var_279 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(Kind_40);
      Var_277 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", Var_279);
      {
        Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_276, 0) = ((MR_Box) (Var_277));
      }
      {
        Var_275 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_275, 0) = ((MR_Box) (Var_276));
        MR_hl_field(0, Var_275, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_274 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_274, 0) = ((MR_Box) (Var_275));
        MR_hl_field(1, Var_274, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_269, 0) = ((MR_Box) (Var_270));
        MR_hl_field(1, Var_269, 1) = ((MR_Box) (Var_274));
      }
      TestCode_99 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_269);
      {
        Var_284 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_284, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_284, 1) = ((MR_Box) (NextKindLabel_97));
      }
      {
        Var_283 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_283, 0) = ((MR_Box) (Var_284));
        MR_hl_field(0, Var_283, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
      }
      Var_291 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(NextKind_95);
      Var_289 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", Var_291);
      {
        Var_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_288, 0) = ((MR_Box) (Var_289));
      }
      {
        Var_287 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_287, 0) = ((MR_Box) (Var_288));
        MR_hl_field(0, Var_287, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_286, 0) = ((MR_Box) (Var_287));
        MR_hl_field(1, Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_282 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_282, 0) = ((MR_Box) (Var_283));
        MR_hl_field(1, Var_282, 1) = ((MR_Box) (Var_286));
      }
      NextKindLabelCode_100 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_282);
      ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(Kinds_41, NumPrevColumns_2, OutVars_3, ResumeVars_4, BranchStart_5, EndLabel_6, StoreMap_7, Liveness_8, AddTrailOps_9, BaseReg_10, CurSlot_11, MaxSlot_12, LaterVectorAddrRval_13, STATE_VARIABLE_MaybeEnd_115_115, STATE_VARIABLE_MaybeEnd_15, &LaterKindsCode_101, STATE_VARIABLE_CI_257_257, STATE_VARIABLE_CI_18);
      Var_297 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NextKindLabelCode_100, LaterKindsCode_101);
      Var_296 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), KindCode_59, Var_297);
      *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_99, Var_296);
    }
  }
}

static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "kind_one_soln";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "kind_several_solns";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "kind_zero_solns";
      break;
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0_1(
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

MR_bool MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0(
  MR_Word TypeInfo_for_Key_48,
  MR_Word BranchStart_11,
  MR_Word GetTag_12,
  MR_Word TaggedCases_13,
  MR_Word GoalInfo_14,
  MR_Word StoreMap_15,
  MR_Word STATE_VARIABLE_MaybeEnd_0_36,
  MR_Word * STATE_VARIABLE_MaybeEnd_37,
  MR_Word * LookupSwitchInfo_17,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39)
{
  MR_bool succeeded;
  MR_Word TypeInfo_51_51;
  MR_Word TypeCtorInfo_52_52;
  MR_Word TypeCtorInfo_56_56;
  MR_Word StartCLD_19;
  MR_Word OutVars_20;
  MR_Word ArmNonLocals_21;
  MR_Word Liveness_22;
  MR_Word CaseSolnMap_23;
  MR_Word ResumeVars_24;
  MR_Word GoalsMayModifyTrail_25;
  MR_Word VarTable_26;
  MR_Word OutTypes_27;
  MR_Word CaseConsts_29;
  MR_Word ExprnOpts_30;
  MR_Word UnboxFloats_31;
  MR_Word UnboxInt64s_32;
  MR_Word CaseSolns_33;
  MR_Word CaseValues_34;
  MR_Word OutLLDSTypes_35;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word CaseValuePairsMap_28;
  MR_Word TypeCtorInfo_55_55;

  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_11, STATE_VARIABLE_CI_0_38, &StartCLD_19);
  ll_backend__lookup_util__figure_out_output_vars_4_p_0(STATE_VARIABLE_CI_0_38, StartCLD_19, GoalInfo_14, &OutVars_20);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_20, &ArmNonLocals_21);
  Var_40 = mercury__map__init_0_f_0(TypeInfo_for_Key_48, (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]));
  Var_42 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(TypeInfo_for_Key_48, BranchStart_11, GetTag_12, TaggedCases_13, OutVars_20, ArmNonLocals_21, StoreMap_15, &Liveness_22, Var_40, &CaseSolnMap_23, STATE_VARIABLE_MaybeEnd_0_36, STATE_VARIABLE_MaybeEnd_37, Var_42, &ResumeVars_24, (MR_Integer) 0, &GoalsMayModifyTrail_25, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CI_39);
  if (succeeded)
  {
    ll_backend__code_info__get_var_table_2_p_0(*STATE_VARIABLE_CI_39, &VarTable_26);
    TypeInfo_51_51 = (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[1]);
    TypeCtorInfo_52_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_7[0]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (ll_backend__lookup_switch__is_lookup_switch_10_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (VarTable_26));
    }
    OutTypes_27 = mercury__list__map_2_f_0(TypeInfo_51_51, TypeCtorInfo_52_52, Var_45, OutVars_20);
    TypeCtorInfo_55_55 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(TypeInfo_for_Key_48, TypeCtorInfo_55_55, CaseSolnMap_23, &CaseValuePairsMap_28);
    if (succeeded)
      {
        CaseConsts_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CaseConsts_29, 0) = ((MR_Box) (CaseValuePairsMap_28));
      }
    else
    {
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (ResumeVars_24));
        MR_hl_field(0, Var_46, 1) = (MR_Box) ((MR_Unsigned) (GoalsMayModifyTrail_25));
      }
      {
        CaseConsts_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CaseConsts_29, 0) = ((MR_Box) (CaseSolnMap_23));
        MR_hl_field(1, CaseConsts_29, 1) = ((MR_Box) (Var_46));
      }
    }
    ll_backend__code_info__get_exprn_opts_2_p_0(*STATE_VARIABLE_CI_39, &ExprnOpts_30);
    UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_30);
    UnboxInt64s_32 = ll_backend__llds__get_unboxed_int64s_1_f_0(ExprnOpts_30);
    mercury__map__to_assoc_list_2_p_0(TypeInfo_for_Key_48, (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), CaseSolnMap_23, &CaseSolns_33);
    Var_47 = (MR_Word) ((MR_Unsigned) 0U);
    TypeCtorInfo_56_56 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(TypeInfo_for_Key_48, TypeCtorInfo_56_56, CaseSolns_33, Var_47, &CaseValues_34);
    succeeded = ll_backend__global_data__find_general_llds_types_5_p_0(UnboxFloats_31, UnboxInt64s_32, OutTypes_27, CaseValues_34, &OutLLDSTypes_35);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *LookupSwitchInfo_17 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CaseConsts_29));
        MR_hl_field(0, base, 1) = ((MR_Box) (OutVars_20));
        MR_hl_field(0, base, 2) = ((MR_Box) (OutLLDSTypes_35));
        MR_hl_field(0, base, 3) = ((MR_Box) (Liveness_22));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
  MR_Word TypeInfo_for_Key_101,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_IndexMap_0_8,
  MR_Word * STATE_VARIABLE_IndexMap_9,
  MR_Word STATE_VARIABLE_MaybeEnd_0_10,
  MR_Word * STATE_VARIABLE_MaybeEnd_11,
  MR_Word STATE_VARIABLE_ResumeVars_0_12,
  MR_Word * STATE_VARIABLE_ResumeVars_13,
  MR_Word STATE_VARIABLE_GoalsMayModifyTrail_0_14,
  MR_Word * STATE_VARIABLE_GoalsMayModifyTrail_15,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    *STATE_VARIABLE_CI_17 = STATE_VARIABLE_CI_0_16;
    *STATE_VARIABLE_GoalsMayModifyTrail_15 = STATE_VARIABLE_GoalsMayModifyTrail_0_14;
    *STATE_VARIABLE_ResumeVars_13 = STATE_VARIABLE_ResumeVars_0_12;
    *STATE_VARIABLE_MaybeEnd_11 = STATE_VARIABLE_MaybeEnd_0_10;
    *STATE_VARIABLE_IndexMap_9 = STATE_VARIABLE_IndexMap_0_8;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TaggedCase_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TaggedCases_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TaggedMainConsId_51 = ((MR_Word) ((MR_hl_field(0, TaggedCase_40, (MR_Integer) 0))));
    MR_Word TaggedOtherConsIds_52 = ((MR_Word) ((MR_hl_field(0, TaggedCase_40, (MR_Integer) 1))));
    MR_Word Goal_54 = ((MR_Word) ((MR_hl_field(0, TaggedCase_40, (MR_Integer) 3))));
    MR_Word GoalExpr_55 = ((MR_Word) ((MR_hl_field(0, Goal_54, (MR_Integer) 0))));
    MR_Word GoalInfo_56 = ((MR_Word) ((MR_hl_field(0, Goal_54, (MR_Integer) 1))));
    MR_Word Features_57;
    MR_Word SolnConsts_70;
    MR_Word STATE_VARIABLE_GoalsMayModifyTrail_88_88;
    MR_Word STATE_VARIABLE_ResumeVars_89_89;
    MR_Word STATE_VARIABLE_MaybeEnd_95_95;
    MR_Word STATE_VARIABLE_CI_96_96;
    MR_Word STATE_VARIABLE_IndexMap_99_99;
    MR_Word STATE_VARIABLE_IndexMap_100_100;
    MR_Word TypeCtorInfo_104_104;
    MR_Word Var_84;
    MR_Word Disjuncts_58;
    MR_Word _LivenessRest_72;

    Features_57 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_56);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 5)), Features_57);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_84 = (MR_Integer) 7;
      TypeCtorInfo_104_104 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_104_104, ((MR_Box) (Var_84)), Features_57);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) GoalExpr_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_55, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Disjuncts_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_55, (MR_Integer) 1))));
          if ((Disjuncts_58 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/17", (MR_String) "disj([])");
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word FirstDisjunct_59 = ((MR_Word) ((MR_hl_field(1, Disjuncts_58, (MR_Integer) 0))));
            MR_Word LaterDisjuncts_60 = ((MR_Word) ((MR_hl_field(1, Disjuncts_58, (MR_Integer) 1))));
            MR_Word FirstDisjunctGoalInfo_62;
            MR_Word ThisResumePoint_63;
            MR_Word GoalBranchStart_67;
            MR_Word FirstSoln_68;
            MR_Word LaterSolns_69;
            MR_Word Var_87;
            MR_Word STATE_VARIABLE_CLD_90_90;
            MR_Word Var_91;
            MR_Word STATE_VARIABLE_CLD_92_92;
            MR_Word STATE_VARIABLE_MaybeEnd_93_93;
            MR_Word STATE_VARIABLE_CI_94_94;

            succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__5_5, FirstDisjunct_59);
            if (succeeded)
            {
              succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(HeadVar__5_5, LaterDisjuncts_60);
              if (succeeded)
              {
                Var_87 = hlds__goal_form__goal_may_modify_trail_1_f_0(GoalInfo_56);
                mercury__bool__or_3_p_0(Var_87, STATE_VARIABLE_GoalsMayModifyTrail_0_14, &STATE_VARIABLE_GoalsMayModifyTrail_88_88);
                FirstDisjunctGoalInfo_62 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_59, (MR_Integer) 1))));
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(FirstDisjunctGoalInfo_62, &ThisResumePoint_63);
                if ((ThisResumePoint_63 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ResumeVars_89_89 = STATE_VARIABLE_ResumeVars_0_12;
                else
                {
                  MR_Word ThisResumeVars_64 = ((MR_Word) ((MR_hl_field(1, ThisResumePoint_63, (MR_Integer) 0))));

                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThisResumeVars_64, STATE_VARIABLE_ResumeVars_0_12, &STATE_VARIABLE_ResumeVars_89_89);
                }
                ll_backend__code_loc_dep__reset_to_position_3_p_0(HeadVar__1_1, STATE_VARIABLE_CI_0_16, &STATE_VARIABLE_CLD_90_90);
                Var_91 = (MR_Integer) 0;
                ll_backend__code_loc_dep__pre_goal_update_4_p_0(GoalInfo_56, Var_91, STATE_VARIABLE_CLD_90_90, &STATE_VARIABLE_CLD_92_92);
                ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_92_92, &GoalBranchStart_67);
                succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(GoalBranchStart_67, FirstDisjunct_59, HeadVar__4_4, HeadVar__6_6, &FirstSoln_68, STATE_VARIABLE_MaybeEnd_0_10, &STATE_VARIABLE_MaybeEnd_93_93, HeadVar__7_7, STATE_VARIABLE_CI_0_16, &STATE_VARIABLE_CI_94_94);
                if (succeeded)
                {
                  succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(GoalBranchStart_67, LaterDisjuncts_60, HeadVar__4_4, HeadVar__6_6, &LaterSolns_69, STATE_VARIABLE_MaybeEnd_93_93, &STATE_VARIABLE_MaybeEnd_95_95, STATE_VARIABLE_CI_94_94, &STATE_VARIABLE_CI_96_96);
                  if (succeeded)
                  {
                    {
                      SolnConsts_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SolnConsts_70, 0) = ((MR_Box) (FirstSoln_68));
                      MR_hl_field(1, SolnConsts_70, 1) = ((MR_Box) (LaterSolns_69));
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
          MR_Word Soln_71;

          succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__5_5, Goal_54);
          if (succeeded)
          {
            succeeded = ll_backend__lookup_util__generate_constants_for_arm_10_p_0(HeadVar__1_1, Goal_54, HeadVar__4_4, HeadVar__6_6, &Soln_71, STATE_VARIABLE_MaybeEnd_0_10, &STATE_VARIABLE_MaybeEnd_95_95, HeadVar__7_7, STATE_VARIABLE_CI_0_16, &STATE_VARIABLE_CI_96_96);
            if (succeeded)
            {
              STATE_VARIABLE_GoalsMayModifyTrail_88_88 = STATE_VARIABLE_GoalsMayModifyTrail_0_14;
              STATE_VARIABLE_ResumeVars_89_89 = STATE_VARIABLE_ResumeVars_0_12;
              {
                SolnConsts_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SolnConsts_70, 0) = ((MR_Box) (Soln_71));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(TypeInfo_for_Key_101, HeadVar__2_2, SolnConsts_70, TaggedMainConsId_51, STATE_VARIABLE_IndexMap_0_8, &STATE_VARIABLE_IndexMap_99_99);
          ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(TypeInfo_for_Key_101, HeadVar__2_2, SolnConsts_70, TaggedOtherConsIds_52, STATE_VARIABLE_IndexMap_99_99, &STATE_VARIABLE_IndexMap_100_100);
          succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(TypeInfo_for_Key_101, HeadVar__1_1, HeadVar__2_2, TaggedCases_41, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &_LivenessRest_72, STATE_VARIABLE_IndexMap_100_100, STATE_VARIABLE_IndexMap_9, STATE_VARIABLE_MaybeEnd_95_95, STATE_VARIABLE_MaybeEnd_11, STATE_VARIABLE_ResumeVars_89_89, STATE_VARIABLE_ResumeVars_13, STATE_VARIABLE_GoalsMayModifyTrail_88_88, STATE_VARIABLE_GoalsMayModifyTrail_15, STATE_VARIABLE_CI_96_96, STATE_VARIABLE_CI_17);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_Key_15,
  MR_Word GetTag_6,
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14)
{
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_8, (MR_Integer) 1))));
  MR_Box Index_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, GetTag_6, (MR_Integer) 1))));

  func_0(((MR_Box) (GetTag_6)), ((MR_Box) (ConsTag_11)), &Index_12);
  mercury__map__det_insert_4_p_0(TypeInfo_for_Key_15, (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), Index_12, ((MR_Box) (SolnConsts_7)), STATE_VARIABLE_IndexMap_0_13, STATE_VARIABLE_IndexMap_14);
}

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
  MR_Word TypeInfo_for_Key_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IndexMap_0_4,
  MR_Word * STATE_VARIABLE_IndexMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IndexMap_5 = STATE_VARIABLE_IndexMap_0_4;
    else
    {
      MR_Word TaggedConsId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TaggedConsIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IndexMap_18_18;
      MR_Word ConsTag_21 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_13, (MR_Integer) 1))));
      MR_Box Index_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_IndexMap_0_4;

      func_0(((MR_Box) (HeadVar__1_1)), ((MR_Box) (ConsTag_21)), &Index_22);
      mercury__map__det_insert_4_p_0(TypeInfo_for_Key_19, (MR_Word) (&ll_backend__lookup_switch_scalar_common_1[0]), Index_22, ((MR_Box) (HeadVar__2_2)), STATE_VARIABLE_IndexMap_0_4, &STATE_VARIABLE_IndexMap_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TaggedConsIds_14;
      next_value_of_STATE_VARIABLE_IndexMap_0_4 = STATE_VARIABLE_IndexMap_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_IndexMap_0_4 = next_value_of_STATE_VARIABLE_IndexMap_0_4;
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
