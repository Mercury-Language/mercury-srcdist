/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "libs.compiler_util.mih"
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




static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1;

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2;

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3];

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
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2);

static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3);

static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
  MR_Box ll_backend__lookup_switch__wrapper_arg_4);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__Start_2,
  MR_Integer ll_backend__lookup_switch__WordBits_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_10,
  MR_Word ll_backend__lookup_switch__CaseVals_11,
  MR_Integer ll_backend__lookup_switch__Start_12,
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_14,
  MR_Word ll_backend__lookup_switch__StoreMap_15,
  MR_Integer ll_backend__lookup_switch__StartVal_16,
  MR_Word ll_backend__lookup_switch__CaseValues_18,
  MR_Word ll_backend__lookup_switch__OutVars_19,
  MR_Word ll_backend__lookup_switch__OutTypes_20,
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
  MR_Word ll_backend__lookup_switch__Liveness_22,
  MR_Word * ll_backend__lookup_switch__Code_23,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41);

static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(
  MR_Word ll_backend__lookup_switch__OutVars_27,
  MR_Word ll_backend__lookup_switch__HeadVar__2_68);

static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__Count_2,
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3);

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
  MR_Word ll_backend__lookup_switch__OutTypes_5,
  MR_Word * ll_backend__lookup_switch__MainRow_6,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11);

static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
  MR_Integer ll_backend__lookup_switch__EndVal_2,
  MR_Word ll_backend__lookup_switch__OutTypes_3,
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
  MR_Word ll_backend__lookup_switch__OutVars_3,
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
  MR_Word ll_backend__lookup_switch__BranchStart_5,
  MR_Word ll_backend__lookup_switch__EndLabel_6,
  MR_Word ll_backend__lookup_switch__StoreMap_7,
  MR_Word ll_backend__lookup_switch__Liveness_8,
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
  MR_Word ll_backend__lookup_switch__BaseReg_10,
  MR_Word ll_backend__lookup_switch__CurSlot_11,
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
  MR_Word * ll_backend__lookup_switch__Code_16,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18);

static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
  MR_Box ll_backend__lookup_switch__closure_arg);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg);

static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_19,
  MR_Word ll_backend__lookup_switch__EndLabel_20,
  MR_Word ll_backend__lookup_switch__StoreMap_21,
  MR_Integer ll_backend__lookup_switch__StartVal_22,
  MR_Integer ll_backend__lookup_switch__EndVal_23,
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
  MR_Word ll_backend__lookup_switch__OutVars_27,
  MR_Word ll_backend__lookup_switch__OutTypes_28,
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
  MR_Word ll_backend__lookup_switch__Liveness_30,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
  MR_Word * ll_backend__lookup_switch__Code_32,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62);

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1);

static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
  MR_Word ll_backend__lookup_switch__OutTypes_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5);

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
  MR_Word ll_backend__lookup_switch__GetTag_6,
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5);

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17);


static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_3[5][1];

static /* final */ const MR_Float ll_backend__lookup_switch_scalar_common_4[1];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_6[2][5];

static /* final */ const MR_Box ll_backend__lookup_switch_scalar_common_7[1][4];


/* sealed */ struct ll_backend__lookup_switch__vector_common_type_5_0_s {
  const MR_Word ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;
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



static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__lookup_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
  (MR_String) "kind_zero_solns",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
  (MR_String) "kind_one_soln",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__lookup_switch__ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
  (MR_String) "kind_several_solns",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__enum_value_ordered_case_kind_0[3] = {
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

static const MR_FA_PseudoTypeInfo_Struct3 ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__lookup_switch__ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0__plain_backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0,
  (MR_PseudoTypeInfo) &ll_backend__lookup_switch__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString ll_backend__lookup_switch__ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[4] = {
  (MR_String) "lsi_cases",
  (MR_String) "lsi_out_variables",
  (MR_String) "lsi_out_types",
  (MR_String) "lsi_liveness"
};

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

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

static const MR_DuPtagLayout ll_backend__lookup_switch__ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__lookup_switch__ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__lookup_switch__ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[1] = {
  &ll_backend__lookup_switch__ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

static const MR_Integer ll_backend__lookup_switch__ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[1] = {
  (MR_Integer) 0
};

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

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    {
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____case_kind_0_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2));
    }
    return ll_backend__lookup_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0_10001(
  MR_Box * ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
{
  {
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

    {
      ll_backend__lookup_switch____Compare____case_kind_0_0(&ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
    *ll_backend__lookup_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    {
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_2), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3));
    }
    return ll_backend__lookup_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0_10001(
  MR_Box ll_backend__lookup_switch__wrapper_arg_1,
  MR_Box * ll_backend__lookup_switch__wrapper_arg_2,
  MR_Box ll_backend__lookup_switch__wrapper_arg_3,
  MR_Box ll_backend__lookup_switch__wrapper_arg_4)
{
  {
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__1_1;

    {
      ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1), &ll_backend__lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__lookup_switch__wrapper_arg_3), ((MR_Word) ll_backend__lookup_switch__wrapper_arg_4));
    }
    *ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__Start_2,
  MR_Integer ll_backend__lookup_switch__WordBits_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__lookup_switch__succeeded;

        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__lookup_switch__STATE_VARIABLE_BitMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4;
        else
          {
            MR_Integer ll_backend__lookup_switch__Tag_11;
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__lookup_switch__Val_17;
            MR_Integer ll_backend__lookup_switch__Word_18;
            MR_Integer ll_backend__lookup_switch__Offset_19;
            MR_Integer ll_backend__lookup_switch__X1_21;
            MR_Word ll_backend__lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;
            MR_Box ll_backend__lookup_switch__V_12_12;
            MR_Integer ll_backend__lookup_switch__X0_20;
            MR_Box ll_backend__lookup_switch__conv0_X0_20;

            ll_backend__lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 0)));
            ll_backend__lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_24_24, (MR_Integer) 1));
            ll_backend__lookup_switch__Val_17 = (ll_backend__lookup_switch__Tag_11 - ll_backend__lookup_switch__Start_2);
            {
              ll_backend__lookup_switch__Word_18 = mercury__int__f_47_47_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
            {
              ll_backend__lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ll_backend__lookup_switch__Val_17, ll_backend__lookup_switch__WordBits_3);
            }
            {
              ll_backend__lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, ll_backend__lookup_switch__Word_18, &ll_backend__lookup_switch__conv0_X0_20);
            }
            if (ll_backend__lookup_switch__succeeded)
              {
                ll_backend__lookup_switch__X0_20 = ((MR_Integer) ll_backend__lookup_switch__conv0_X0_20);
                ll_backend__lookup_switch__succeeded = MR_TRUE;
              }
            if (ll_backend__lookup_switch__succeeded)
              {
                MR_Integer ll_backend__lookup_switch__V_25_25;

                {
                  ll_backend__lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
                ll_backend__lookup_switch__X1_21 = (ll_backend__lookup_switch__X0_20 | ll_backend__lookup_switch__V_25_25);
              }
            else
              {
                {
                  ll_backend__lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__lookup_switch__Offset_19);
                }
              }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__lookup_switch__Word_18, ((MR_Box) (ll_backend__lookup_switch__X1_21)), ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Rest_13;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_28_28;

              ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_10,
  MR_Word ll_backend__lookup_switch__CaseVals_11,
  MR_Integer ll_backend__lookup_switch__Start_12,
  MR_Word * ll_backend__lookup_switch__CheckCode_14,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_28,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CLD_30)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_25_69;
    MR_Word ll_backend__lookup_switch__Globals_17;
    MR_Integer ll_backend__lookup_switch__WordBits_18;
    MR_Integer ll_backend__lookup_switch__Log2WordBits_19;
    MR_Word ll_backend__lookup_switch__BitVecArgs_20;
    MR_Word ll_backend__lookup_switch__BitVecRval_21;
    MR_Word ll_backend__lookup_switch__Word_23;
    MR_Word ll_backend__lookup_switch__BitNum_24;
    MR_Word ll_backend__lookup_switch__HasBit_26;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31;
    MR_Word ll_backend__lookup_switch__V_45_45;
    MR_Word ll_backend__lookup_switch__BitMap0_61;
    MR_Word ll_backend__lookup_switch__BitMap_62;
    MR_Word ll_backend__lookup_switch__WordVals_63;
    MR_Word ll_backend__lookup_switch__DataAddr_64;
    MR_Word ll_backend__lookup_switch__V_67_67;
    MR_Word ll_backend__lookup_switch__SingleWord_22;
    MR_Word ll_backend__lookup_switch__V_32_32;

    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__Globals_17);
    }
    {
      backend_libs__switch_util__get_word_bits_3_p_0(ll_backend__lookup_switch__Globals_17, &ll_backend__lookup_switch__WordBits_18, &ll_backend__lookup_switch__Log2WordBits_19);
    }
    ll_backend__lookup_switch__TypeCtorInfo_25_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__init_1_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, &ll_backend__lookup_switch__BitMap0_61);
    }
    {
      ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__lookup_switch__CaseVals_11, ll_backend__lookup_switch__Start_12, ll_backend__lookup_switch__WordBits_18, ll_backend__lookup_switch__BitMap0_61, &ll_backend__lookup_switch__BitMap_62);
    }
    {
      mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__TypeCtorInfo_25_69, ll_backend__lookup_switch__BitMap_62, &ll_backend__lookup_switch__WordVals_63);
    }
    {
      ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__WordVals_63, (MR_Integer) 0, &ll_backend__lookup_switch__BitVecArgs_20);
    }
    {
      ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(ll_backend__lookup_switch__BitVecArgs_20, &ll_backend__lookup_switch__DataAddr_64, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_27, &ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31);
    }
    {
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__DataAddr_64));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__lookup_switch__BitVecRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitVecRval_21, 1) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
    }
    ll_backend__lookup_switch__succeeded = ((MR_tag((MR_Word) ll_backend__lookup_switch__BitVecArgs_20)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__lookup_switch__succeeded)
      {
        ll_backend__lookup_switch__SingleWord_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 0)));
        ll_backend__lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__BitVecArgs_20, (MR_Integer) 1)));
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ll_backend__lookup_switch__succeeded)
      {
        ll_backend__lookup_switch__Word_23 = ll_backend__lookup_switch__SingleWord_22;
        ll_backend__lookup_switch__BitNum_24 = ll_backend__lookup_switch__IndexRval_10;
      }
    else
      {
        MR_Word ll_backend__lookup_switch__WordNum_25;
        MR_Word ll_backend__lookup_switch__V_34_34;
        MR_Word ll_backend__lookup_switch__V_35_35;
        MR_Word ll_backend__lookup_switch__V_36_36;
        MR_Word ll_backend__lookup_switch__V_40_40;
        MR_Word ll_backend__lookup_switch__V_41_41;
        MR_Integer ll_backend__lookup_switch__V_42_42;

        {
          ll_backend__lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_35_35, 0) = ((MR_Box) (ll_backend__lookup_switch__Log2WordBits_19));
        }
        {
          ll_backend__lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_34_34, 1) = ((MR_Box) (ll_backend__lookup_switch__V_35_35));
        }
        {
          ll_backend__lookup_switch__WordNum_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__WordNum_25, 3) = ((MR_Box) (ll_backend__lookup_switch__V_34_34));
        }
        {
          ll_backend__lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 2) = ((MR_Box) (ll_backend__lookup_switch__BitVecRval_21));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_36_36, 3) = ((MR_Box) (ll_backend__lookup_switch__WordNum_25));
        }
        {
          ll_backend__lookup_switch__Word_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Word_23, 0) = ((MR_Box) (ll_backend__lookup_switch__V_36_36));
        }
        ll_backend__lookup_switch__V_42_42 = (ll_backend__lookup_switch__WordBits_18 - (MR_Integer) 1);
        {
          ll_backend__lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_41_41, 0) = ((MR_Box) (ll_backend__lookup_switch__V_42_42));
        }
        {
          ll_backend__lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_40_40, 1) = ((MR_Box) (ll_backend__lookup_switch__V_41_41));
        }
        {
          ll_backend__lookup_switch__BitNum_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_10));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BitNum_24, 3) = ((MR_Box) (ll_backend__lookup_switch__V_40_40));
        }
      }
    {
      ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[17])));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_45_45, 3) = ((MR_Box) (ll_backend__lookup_switch__BitNum_24));
    }
    {
      ll_backend__lookup_switch__HasBit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 2) = ((MR_Box) (ll_backend__lookup_switch__V_45_45));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__HasBit_26, 3) = ((MR_Box) (ll_backend__lookup_switch__Word_23));
    }
    {
      ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__HasBit_26, ll_backend__lookup_switch__CheckCode_14, ll_backend__lookup_switch__STATE_VARIABLE_CI_31_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_28, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_29, ll_backend__lookup_switch__STATE_VARIABLE_CLD_30);
    }
  }
}

static void MR_CALL 
ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_14,
  MR_Word ll_backend__lookup_switch__StoreMap_15,
  MR_Integer ll_backend__lookup_switch__StartVal_16,
  MR_Word ll_backend__lookup_switch__CaseValues_18,
  MR_Word ll_backend__lookup_switch__OutVars_19,
  MR_Word ll_backend__lookup_switch__OutTypes_20,
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
  MR_Word ll_backend__lookup_switch__Liveness_22,
  MR_Word * ll_backend__lookup_switch__Code_23,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_40,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_70_70;
    MR_Word ll_backend__lookup_switch__CheckBitVecCode_26;
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_27;
    MR_Word ll_backend__lookup_switch__BranchEndCode_38;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61;
    MR_Word ll_backend__lookup_switch__V_63_63;
    MR_Word ll_backend__lookup_switch___MaybeEnd_37;

    switch (ll_backend__lookup_switch__NeedBitVecCheck_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            ll_backend__lookup_switch__CheckBitVecCode_26 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39;
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41;
        }
        break;
      case (MR_Integer) 0:
        {
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_9_p_0(ll_backend__lookup_switch__IndexRval_14, ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, &ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_39, &ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_41, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43);
        }
        break;
    }
    if ((ll_backend__lookup_switch__OutVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_40 = ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42;
        ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43;
      }
    else
      {
        MR_Word ll_backend__lookup_switch__BaseReg_30;
        MR_Integer ll_backend__lookup_switch__NumOutVars_31;
        MR_Word ll_backend__lookup_switch__RevVectorRvals_32;
        MR_Word ll_backend__lookup_switch__VectorRvals_33;
        MR_Word ll_backend__lookup_switch__VectorAddr_34;
        MR_Word ll_backend__lookup_switch__VectorAddrRval_35;
        MR_Word ll_backend__lookup_switch__BaseRval_36;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45;
        MR_Word ll_backend__lookup_switch__V_48_48;
        MR_Word ll_backend__lookup_switch__V_53_53;
        MR_Word ll_backend__lookup_switch__V_54_54;
        MR_Word ll_backend__lookup_switch__V_55_55;
        MR_Word ll_backend__lookup_switch__V_56_56;

        {
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_15, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_30, ll_backend__lookup_switch__STATE_VARIABLE_CLD_43_43, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_19, &ll_backend__lookup_switch__NumOutVars_31);
        }
        {
          ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(ll_backend__lookup_switch__CaseValues_18, ll_backend__lookup_switch__StartVal_16, ll_backend__lookup_switch__OutTypes_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__RevVectorRvals_32);
        }
        {
          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__RevVectorRvals_32, &ll_backend__lookup_switch__VectorRvals_33);
        }
        {
          ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_20, ll_backend__lookup_switch__VectorRvals_33, &ll_backend__lookup_switch__VectorAddr_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_42_42, ll_backend__lookup_switch__STATE_VARIABLE_CI_40);
        }
        {
          ll_backend__lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 1) = ((MR_Box) (ll_backend__lookup_switch__VectorAddr_34));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_48_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__lookup_switch__VectorAddrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__VectorAddrRval_35, 1) = ((MR_Box) (ll_backend__lookup_switch__V_48_48));
        }
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NumOutVars_31 == (MR_Integer) 1);
        if (ll_backend__lookup_switch__succeeded)
          ll_backend__lookup_switch__BaseRval_36 = ll_backend__lookup_switch__IndexRval_14;
        else
          {
            MR_Word ll_backend__lookup_switch__V_51_51;
            MR_Word ll_backend__lookup_switch__V_52_52;

            {
              ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_31));
            }
            {
              ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
            }
            {
              ll_backend__lookup_switch__BaseRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_14));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__BaseRval_36, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
            }
          }
        {
          ll_backend__lookup_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 0) = ((MR_Box) (ll_backend__lookup_switch__VectorAddrRval_35));
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
          MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_56_56, 2) = ((MR_Box) (ll_backend__lookup_switch__BaseRval_36));
        }
        {
          ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_55_55, 1) = ((MR_Box) (ll_backend__lookup_switch__V_56_56));
        }
        {
          ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_30));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 2) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
        }
        {
          ll_backend__lookup_switch__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 0) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
          MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_53_53, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
        }
        {
          ll_backend__lookup_switch__BaseRegInitCode_27 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__lookup_switch__V_53_53)));
        }
        {
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_19, (MR_Integer) 0, ll_backend__lookup_switch__BaseReg_30, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_45_45, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
        }
      }
    {
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_15, ll_backend__lookup_switch__Liveness_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch___MaybeEnd_37, &ll_backend__lookup_switch__BranchEndCode_38, *ll_backend__lookup_switch__STATE_VARIABLE_CI_40, ll_backend__lookup_switch__STATE_VARIABLE_CLD_61_61);
    }
    ll_backend__lookup_switch__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__lookup_switch__V_63_63 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__BaseRegInitCode_27, ll_backend__lookup_switch__BranchEndCode_38);
    }
    {
      *ll_backend__lookup_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_70_70, ll_backend__lookup_switch__CheckBitVecCode_26, ll_backend__lookup_switch__V_63_63);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(
  MR_Word ll_backend__lookup_switch__OutVars_27,
  MR_Word ll_backend__lookup_switch__HeadVar__2_68)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    {
      ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], ((MR_Box) (ll_backend__lookup_switch__OutVars_27)), ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_68)));
    }
    return ll_backend__lookup_switch__succeeded;
  }
}

void MR_CALL 
ll_backend__lookup_switch____Compare____lookup_switch_info_1_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_17,
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Integer ll_backend__lookup_switch__CastX_15 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
    MR_Integer ll_backend__lookup_switch__CastY_16 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_15 == ll_backend__lookup_switch__CastY_16);
    if (ll_backend__lookup_switch__succeeded)
      *ll_backend__lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__lookup_switch__V_12_12;

        {
          backend_libs__switch_util____Compare____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_17, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, &ll_backend__lookup_switch__V_12_12, ll_backend__lookup_switch__V_4_4, ll_backend__lookup_switch__V_8_8);
        }
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_12_12 == (MR_Integer) 0);
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
        if (ll_backend__lookup_switch__succeeded)
          *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_12_12;
        else
          {
            MR_Word ll_backend__lookup_switch__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[3], &ll_backend__lookup_switch__V_13_13, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
            }
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_13_13 == (MR_Integer) 0);
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
            if (ll_backend__lookup_switch__succeeded)
              *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_13_13;
            else
              {
                MR_Word ll_backend__lookup_switch__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[4], &ll_backend__lookup_switch__V_14_14, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                }
                ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__V_14_14 == (MR_Integer) 0);
                ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
                if (ll_backend__lookup_switch__succeeded)
                  *ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[5], ll_backend__lookup_switch__HeadVar__1_1, ((MR_Box) (ll_backend__lookup_switch__V_7_7)), ((MR_Box) (ll_backend__lookup_switch__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____lookup_switch_info_1_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_13,
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Integer ll_backend__lookup_switch__CastX_11 = (MR_Integer) ll_backend__lookup_switch__HeadVar__1_1;
    MR_Integer ll_backend__lookup_switch__CastY_12 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;

    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CastX_11 == ll_backend__lookup_switch__CastY_12);
    if (ll_backend__lookup_switch__succeeded)
      ll_backend__lookup_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__lookup_switch__TypeInfo_18_18;
        MR_Word ll_backend__lookup_switch__TypeInfo_19_19;
        MR_Word ll_backend__lookup_switch__TypeInfo_20_20;
        MR_Word ll_backend__lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__2_2, (MR_Integer) 3)));

        {
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(ll_backend__lookup_switch__TypeInfo_for_Key_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0, ll_backend__lookup_switch__V_3_3, ll_backend__lookup_switch__V_7_7);
        }
        if (ll_backend__lookup_switch__succeeded)
          {
            ll_backend__lookup_switch__TypeInfo_18_18 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[3];
            {
              ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_18_18, ((MR_Box) (ll_backend__lookup_switch__V_4_4)), ((MR_Box) (ll_backend__lookup_switch__V_8_8)));
            }
            if (ll_backend__lookup_switch__succeeded)
              {
                ll_backend__lookup_switch__TypeInfo_19_19 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[4];
                {
                  ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_19_19, ((MR_Box) (ll_backend__lookup_switch__V_5_5)), ((MR_Box) (ll_backend__lookup_switch__V_9_9)));
                }
                if (ll_backend__lookup_switch__succeeded)
                  {
                    ll_backend__lookup_switch__TypeInfo_20_20 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[5];
                    {
                      ll_backend__lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__lookup_switch__TypeInfo_20_20, ((MR_Box) (ll_backend__lookup_switch__V_6_6)), ((MR_Box) (ll_backend__lookup_switch__V_10_10)));
                    }
                  }
              }
          }
      }
    return ll_backend__lookup_switch__succeeded;
  }
}

void MR_CALL 
ll_backend__lookup_switch____Compare____case_kind_0_0(
  MR_Word * ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__lookup_switch__HeadVar__2_2;
    MR_Integer ll_backend__lookup_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__lookup_switch__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Cast_HeadVar1_4, ll_backend__lookup_switch__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch____Unify____case_kind_0_0(
  MR_Word ll_backend__lookup_switch__HeadVar__2_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__HeadVar__2_1 == ll_backend__lookup_switch__HeadVar__2_2);

    return ll_backend__lookup_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__Count_2,
  MR_Word * ll_backend__lookup_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer ll_backend__lookup_switch__Word_5;
        MR_Integer ll_backend__lookup_switch__Bits_6;
        MR_Word ll_backend__lookup_switch__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__Rval_9;
        MR_Word ll_backend__lookup_switch__Rvals_10;
        MR_Integer ll_backend__lookup_switch__WordVal_11;
        MR_Word ll_backend__lookup_switch__Remainder_12;
        MR_Integer ll_backend__lookup_switch__Count1_13;
        MR_Word ll_backend__lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__V_16_16;

        ll_backend__lookup_switch__Word_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 0)));
        ll_backend__lookup_switch__Bits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_14_14, (MR_Integer) 1)));
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__Count_2 < ll_backend__lookup_switch__Word_5);
        if (ll_backend__lookup_switch__succeeded)
          {
            ll_backend__lookup_switch__WordVal_11 = (MR_Integer) 0;
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__HeadVar__1_1;
          }
        else
          {
            ll_backend__lookup_switch__WordVal_11 = ll_backend__lookup_switch__Bits_6;
            ll_backend__lookup_switch__Remainder_12 = ll_backend__lookup_switch__Rest_7;
          }
        {
          ll_backend__lookup_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_16_16, 0) = ((MR_Box) (ll_backend__lookup_switch__WordVal_11));
        }
        {
          ll_backend__lookup_switch__Rval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__Rval_9, 1) = ((MR_Box) (ll_backend__lookup_switch__V_16_16));
        }
        ll_backend__lookup_switch__Count1_13 = (ll_backend__lookup_switch__Count_2 + (MR_Integer) 1);
        {
          ll_backend__lookup_switch__generate_bit_vec_args_3_p_0(ll_backend__lookup_switch__Remainder_12, ll_backend__lookup_switch__Count1_13, &ll_backend__lookup_switch__Rvals_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__lookup_switch__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__Rval_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__Rvals_10));
        }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

    {
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
    return ll_backend__lookup_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__lookup_switch__construct_fail_row_4_p_0(
  MR_Word ll_backend__lookup_switch__OutTypes_5,
  MR_Word * ll_backend__lookup_switch__MainRow_6,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    MR_Word ll_backend__lookup_switch__VarRvals_9;

    {
      ll_backend__lookup_switch__VarRvals_9 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[3], ll_backend__lookup_switch__OutTypes_5);
    }
    {
      *ll_backend__lookup_switch__MainRow_6 = mercury__list__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_24_24, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_1[9]), ll_backend__lookup_switch__VarRvals_9);
    }
    *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = (ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(
  MR_Integer ll_backend__lookup_switch__CurIndex_1,
  MR_Integer ll_backend__lookup_switch__EndVal_2,
  MR_Word ll_backend__lookup_switch__OutTypes_3,
  MR_Integer ll_backend__lookup_switch__NumOutTypes_4,
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
  MR_Word * ll_backend__lookup_switch__HeadVar__6_6,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13,
  MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14,
  MR_Integer * ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    if ((ll_backend__lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 > ll_backend__lookup_switch__EndVal_2);
        if (ll_backend__lookup_switch__succeeded)
          {
            *ll_backend__lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
            *ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
            *ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
            *ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
          }
        else
          {
            MR_Word ll_backend__lookup_switch__MainRow_26;
            MR_Word ll_backend__lookup_switch__MoreMainRows_27;
            MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37;
            MR_Integer ll_backend__lookup_switch__V_38_38;

            {
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_26, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37);
            }
            ll_backend__lookup_switch__V_38_38 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
            {
              ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_38_38, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__lookup_switch__MoreMainRows_27, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_37_37, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__lookup_switch__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MoreMainRows_27));
            }
          }
      }
    else
      {
        MR_Integer ll_backend__lookup_switch__Index_49;
        MR_Word ll_backend__lookup_switch__Soln_50;
        MR_Word ll_backend__lookup_switch__Rest_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__MainRow_52;
        MR_Word ll_backend__lookup_switch__MainRows_53;
        MR_Word ll_backend__lookup_switch__Remainder_59;
        MR_Word ll_backend__lookup_switch__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79;
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81;
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90;
        MR_Integer ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92;
        MR_Integer ll_backend__lookup_switch__V_97_97;

        ll_backend__lookup_switch__Index_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 0)));
        ll_backend__lookup_switch__Soln_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_78_78, (MR_Integer) 1)));
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_1 < ll_backend__lookup_switch__Index_49);
        if (ll_backend__lookup_switch__succeeded)
          {
            {
              ll_backend__lookup_switch__construct_fail_row_4_p_0(ll_backend__lookup_switch__OutTypes_3, &ll_backend__lookup_switch__MainRow_52, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79);
            }
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__HeadVar__5_5;
            ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
            ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
            ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
            ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
          }
        else
          {
            if (((MR_tag((MR_Word) ll_backend__lookup_switch__Soln_50)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word ll_backend__lookup_switch__OutRvals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
                MR_Word ll_backend__lookup_switch__ZeroRval_61;
                MR_Word ll_backend__lookup_switch__V_96_96;

                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = (ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12 + (MR_Integer) 1);
                ll_backend__lookup_switch__ZeroRval_61 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12]);
                {
                  ll_backend__lookup_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_96_96, 1) = ((MR_Box) (ll_backend__lookup_switch__OutRvals_60));
                }
                {
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__ZeroRval_61));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_96_96));
                }
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7;
                ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8;
                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14;
              }
            else
              {
                MR_Word ll_backend__lookup_switch__TypeInfo_103_103;
                MR_Word ll_backend__lookup_switch__FirstSolnRvals_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 0)));
                MR_Word ll_backend__lookup_switch__LaterSolns_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Soln_50, (MR_Integer) 1)));
                MR_Integer ll_backend__lookup_switch__NumLaterSolns_64;
                MR_Integer ll_backend__lookup_switch__FirstRowOffset_65;
                MR_Integer ll_backend__lookup_switch__LastRowOffset_66;
                MR_Word ll_backend__lookup_switch__FirstRowRval_67;
                MR_Word ll_backend__lookup_switch__LastRowRval_68;
                MR_Integer ll_backend__lookup_switch__V_83_83;
                MR_Integer ll_backend__lookup_switch__V_84_84;
                MR_Word ll_backend__lookup_switch__V_86_86;
                MR_Word ll_backend__lookup_switch__V_87_87;
                MR_Word ll_backend__lookup_switch__V_88_88;
                MR_Word ll_backend__lookup_switch__V_91_91;

                ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81 = (ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_0_14 + (MR_Integer) 1);
                ll_backend__lookup_switch__TypeInfo_103_103 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
                {
                  mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63, &ll_backend__lookup_switch__NumLaterSolns_64);
                }
                ll_backend__lookup_switch__FirstRowOffset_65 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 * ll_backend__lookup_switch__NumOutTypes_4);
                ll_backend__lookup_switch__V_84_84 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
                ll_backend__lookup_switch__V_83_83 = (ll_backend__lookup_switch__V_84_84 - (MR_Integer) 1);
                ll_backend__lookup_switch__LastRowOffset_66 = (ll_backend__lookup_switch__V_83_83 * ll_backend__lookup_switch__NumOutTypes_4);
                {
                  ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowOffset_65));
                }
                {
                  ll_backend__lookup_switch__FirstRowRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__FirstRowRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_86_86));
                }
                {
                  ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowOffset_66));
                }
                {
                  ll_backend__lookup_switch__LastRowRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LastRowRval_68, 1) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
                }
                {
                  ll_backend__lookup_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 0) = ((MR_Box) (ll_backend__lookup_switch__LastRowRval_68));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_88_88, 1) = ((MR_Box) (ll_backend__lookup_switch__FirstSolnRvals_62));
                }
                {
                  ll_backend__lookup_switch__MainRow_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstRowRval_67));
                  MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRow_52, 1) = ((MR_Box) (ll_backend__lookup_switch__V_88_88));
                }
                ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89 = (ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_0_7 + ll_backend__lookup_switch__NumLaterSolns_64);
                {
                  ll_backend__lookup_switch__V_91_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__LaterSolns_63);
                }
                {
                  ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeInfo_103_103, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_0_8, ll_backend__lookup_switch__V_91_91);
                }
                ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92 = ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_0_12;
              }
            ll_backend__lookup_switch__Remainder_59 = ll_backend__lookup_switch__Rest_51;
            ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79 = ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_0_10;
          }
        ll_backend__lookup_switch__V_97_97 = (ll_backend__lookup_switch__CurIndex_1 + (MR_Integer) 1);
        {
          ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__V_97_97, ll_backend__lookup_switch__EndVal_2, ll_backend__lookup_switch__OutTypes_3, ll_backend__lookup_switch__NumOutTypes_4, ll_backend__lookup_switch__Remainder_59, &ll_backend__lookup_switch__MainRows_53, ll_backend__lookup_switch__STATE_VARIABLE_LaterNextRow_89_89, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_90_90, ll_backend__lookup_switch__STATE_VARIABLE_LaterSolnArray_9, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_79_79, ll_backend__lookup_switch__STATE_VARIABLE_FailCaseCount_11, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_92_92, ll_backend__lookup_switch__STATE_VARIABLE_OneSolnCaseCount_13, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_81_81, ll_backend__lookup_switch__STATE_VARIABLE_SeveralSolnCaseCount_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__lookup_switch__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_switch__MainRow_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_switch__MainRows_53));
        }
      }
  }
}

static void MR_CALL 
ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_2,
  MR_Word ll_backend__lookup_switch__OutVars_3,
  MR_Word ll_backend__lookup_switch__ResumeVars_4,
  MR_Word ll_backend__lookup_switch__BranchStart_5,
  MR_Word ll_backend__lookup_switch__EndLabel_6,
  MR_Word ll_backend__lookup_switch__StoreMap_7,
  MR_Word ll_backend__lookup_switch__Liveness_8,
  MR_Word ll_backend__lookup_switch__AddTrailOps_9,
  MR_Word ll_backend__lookup_switch__BaseReg_10,
  MR_Word ll_backend__lookup_switch__CurSlot_11,
  MR_Word ll_backend__lookup_switch__MaxSlot_12,
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_13,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15,
  MR_Word * ll_backend__lookup_switch__Code_16,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_18)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_code_for_each_kind\'/18", (MR_String) "no kinds");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__lookup_switch__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__Kinds_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__TestOp_58;
        MR_Word ll_backend__lookup_switch__KindCode_60;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;

        switch (ll_backend__lookup_switch__Kind_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_292_292;
              MR_Word ll_backend__lookup_switch__BranchEndCode_61;
              MR_Word ll_backend__lookup_switch__GotoEndCode_62;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239;
              MR_Integer ll_backend__lookup_switch__V_240_240;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241;
              MR_Word ll_backend__lookup_switch__V_244_244;
              MR_Word ll_backend__lookup_switch__V_245_245;
              MR_Word ll_backend__lookup_switch__V_246_246;

              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239);
              }
              ll_backend__lookup_switch__V_240_240 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
              {
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_240_240, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_239_239, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
              {
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_241_241);
              }
              ll_backend__lookup_switch__TypeCtorInfo_292_292 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__lookup_switch__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_246_246, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
              }
              {
                ll_backend__lookup_switch__V_245_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_245_245, 1) = ((MR_Box) (ll_backend__lookup_switch__V_246_246));
              }
              {
                ll_backend__lookup_switch__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 0) = ((MR_Box) (ll_backend__lookup_switch__V_245_245));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_244_244, 1) = ((MR_Box) ((MR_String) "goto end of switch from one_soln"));
              }
              {
                ll_backend__lookup_switch__GotoEndCode_62 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ((MR_Box) (ll_backend__lookup_switch__V_244_244)));
              }
              {
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_292_292, ll_backend__lookup_switch__BranchEndCode_61, ll_backend__lookup_switch__GotoEndCode_62);
              }
              ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_293_293;
              MR_Word ll_backend__lookup_switch__TypeCtorInfo_295_295;
              MR_Word ll_backend__lookup_switch__Globals_63;
              MR_Word ll_backend__lookup_switch__ResumeMap_64;
              MR_Word ll_backend__lookup_switch__FlushCode_65;
              MR_Word ll_backend__lookup_switch__MinOffsetColumnRval_66;
              MR_Word ll_backend__lookup_switch__MaxOffsetColumnRval_67;
              MR_Word ll_backend__lookup_switch__SaveSlotsCode_68;
              MR_Word ll_backend__lookup_switch__SaveTicketCode_69;
              MR_Word ll_backend__lookup_switch__MaybeTicketSlot_70;
              MR_Word ll_backend__lookup_switch__ReclaimHeap_71;
              MR_Word ll_backend__lookup_switch__SaveHpCode_72;
              MR_Word ll_backend__lookup_switch__MaybeHpSlot_73;
              MR_Word ll_backend__lookup_switch__HijackInfo_74;
              MR_Word ll_backend__lookup_switch__PrepareHijackCode_75;
              MR_Word ll_backend__lookup_switch__DisjEntry_76;
              MR_Word ll_backend__lookup_switch__ResumePoint_77;
              MR_Word ll_backend__lookup_switch__UpdateRedoipCode_78;
              MR_Word ll_backend__lookup_switch__FirstFlushResumeVarsCode_79;
              MR_Word ll_backend__lookup_switch__FirstZombies_80;
              MR_Word ll_backend__lookup_switch__FirstBranchEndCode_81;
              MR_Word ll_backend__lookup_switch__ResumePointCode_82;
              MR_Word ll_backend__lookup_switch__RestoreTicketCode_83;
              MR_Word ll_backend__lookup_switch__RestoreHpCode_84;
              MR_Word ll_backend__lookup_switch__LaterBaseReg_85;
              MR_Word ll_backend__lookup_switch__UndoLabel_86;
              MR_Word ll_backend__lookup_switch__AfterUndoLabel_87;
              MR_Integer ll_backend__lookup_switch__NumOutVars_88;
              MR_Word ll_backend__lookup_switch__TestMoreSolnsCode_89;
              MR_Word ll_backend__lookup_switch__UndoHijackCode_90;
              MR_Word ll_backend__lookup_switch__AfterUndoLabelCode_91;
              MR_Word ll_backend__lookup_switch__LaterFlushResumeVarsCode_93;
              MR_Word ll_backend__lookup_switch__LaterZombies_94;
              MR_Word ll_backend__lookup_switch__LaterBranchEndCode_95;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107;
              MR_Word ll_backend__lookup_switch__V_108_108;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109;
              MR_Word ll_backend__lookup_switch__V_110_110;
              MR_Word ll_backend__lookup_switch__V_111_111;
              MR_Integer ll_backend__lookup_switch__V_112_112;
              MR_Word ll_backend__lookup_switch__V_114_114;
              MR_Word ll_backend__lookup_switch__V_115_115;
              MR_Word ll_backend__lookup_switch__V_116_116;
              MR_Word ll_backend__lookup_switch__V_117_117;
              MR_Word ll_backend__lookup_switch__V_118_118;
              MR_Word ll_backend__lookup_switch__V_119_119;
              MR_Word ll_backend__lookup_switch__V_121_121;
              MR_Word ll_backend__lookup_switch__V_123_123;
              MR_Word ll_backend__lookup_switch__V_124_124;
              MR_Word ll_backend__lookup_switch__V_125_125;
              MR_Word ll_backend__lookup_switch__V_126_126;
              MR_Word ll_backend__lookup_switch__V_127_127;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140;
              MR_Word ll_backend__lookup_switch__V_141_141;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145;
              MR_Integer ll_backend__lookup_switch__V_146_146;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153;
              MR_Word ll_backend__lookup_switch__V_154_154;
              MR_Word ll_backend__lookup_switch__V_155_155;
              MR_Word ll_backend__lookup_switch__V_156_156;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164;
              MR_Word ll_backend__lookup_switch__V_166_166;
              MR_Word ll_backend__lookup_switch__V_167_167;
              MR_Word ll_backend__lookup_switch__V_168_168;
              MR_Word ll_backend__lookup_switch__V_169_169;
              MR_Word ll_backend__lookup_switch__V_171_171;
              MR_Word ll_backend__lookup_switch__V_172_172;
              MR_Word ll_backend__lookup_switch__V_173_173;
              MR_Word ll_backend__lookup_switch__V_174_174;
              MR_Word ll_backend__lookup_switch__V_176_176;
              MR_Word ll_backend__lookup_switch__V_177_177;
              MR_Word ll_backend__lookup_switch__V_178_178;
              MR_Word ll_backend__lookup_switch__V_180_180;
              MR_Word ll_backend__lookup_switch__V_181_181;
              MR_Word ll_backend__lookup_switch__V_182_182;
              MR_Word ll_backend__lookup_switch__V_183_183;
              MR_Word ll_backend__lookup_switch__V_186_186;
              MR_Word ll_backend__lookup_switch__V_187_187;
              MR_Word ll_backend__lookup_switch__V_189_189;
              MR_Word ll_backend__lookup_switch__V_190_190;
              MR_Word ll_backend__lookup_switch__V_191_191;
              MR_Word ll_backend__lookup_switch__V_192_192;
              MR_Word ll_backend__lookup_switch__V_194_194;
              MR_Word ll_backend__lookup_switch__V_195_195;
              MR_Word ll_backend__lookup_switch__V_196_196;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199;
              MR_Word ll_backend__lookup_switch__V_200_200;
              MR_Word ll_backend__lookup_switch__V_201_201;
              MR_Word ll_backend__lookup_switch__V_202_202;
              MR_Word ll_backend__lookup_switch__V_204_204;
              MR_Word ll_backend__lookup_switch__V_205_205;
              MR_Word ll_backend__lookup_switch__V_206_206;
              MR_Word ll_backend__lookup_switch__V_207_207;
              MR_Word ll_backend__lookup_switch__V_208_208;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221;
              MR_Word ll_backend__lookup_switch__V_223_223;
              MR_Word ll_backend__lookup_switch__V_224_224;
              MR_Word ll_backend__lookup_switch__V_225_225;
              MR_Word ll_backend__lookup_switch__V_226_226;
              MR_Word ll_backend__lookup_switch__V_227_227;
              MR_Word ll_backend__lookup_switch__V_228_228;
              MR_Word ll_backend__lookup_switch__V_229_229;
              MR_Word ll_backend__lookup_switch__V_230_230;
              MR_Word ll_backend__lookup_switch__V_231_231;
              MR_Word ll_backend__lookup_switch__V_232_232;
              MR_Word ll_backend__lookup_switch__V_233_233;
              MR_Word ll_backend__lookup_switch__V_234_234;
              MR_Word ll_backend__lookup_switch__V_235_235;
              MR_Word ll_backend__lookup_switch__V_236_236;
              MR_Word ll_backend__lookup_switch__V_237_237;
              MR_Word ll_backend__lookup_switch__V_238_238;
              MR_Word ll_backend__lookup_switch__GotoEndCode_291;
              MR_Word ll_backend__lookup_switch___LaterUpdateRedoipCode_92;

              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
              {
                ll_backend__code_info__get_globals_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__Globals_63);
              }
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107);
              }
              ll_backend__lookup_switch__TypeCtorInfo_293_293 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                ll_backend__lookup_switch__V_108_108 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
              {
                ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__lookup_switch__V_108_108, &ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, ll_backend__lookup_switch__STATE_VARIABLE_CLD_107_107, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109);
              }
              {
                ll_backend__lookup_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_110_110, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
              }
              {
                ll_backend__lookup_switch__MinOffsetColumnRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MinOffsetColumnRval_66, 1) = ((MR_Box) (ll_backend__lookup_switch__V_110_110));
              }
              ll_backend__lookup_switch__V_112_112 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 1);
              {
                ll_backend__lookup_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_111_111, 0) = ((MR_Box) (ll_backend__lookup_switch__V_112_112));
              }
              {
                ll_backend__lookup_switch__MaxOffsetColumnRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MaxOffsetColumnRval_67, 1) = ((MR_Box) (ll_backend__lookup_switch__V_111_111));
              }
              ll_backend__lookup_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0]);
              {
                ll_backend__lookup_switch__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_121_121, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
              }
              {
                ll_backend__lookup_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_118_118, 3) = ((MR_Box) (ll_backend__lookup_switch__MinOffsetColumnRval_66));
              }
              {
                ll_backend__lookup_switch__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_117_117, 0) = ((MR_Box) (ll_backend__lookup_switch__V_118_118));
              }
              {
                ll_backend__lookup_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_116_116, 2) = ((MR_Box) (ll_backend__lookup_switch__V_117_117));
              }
              {
                ll_backend__lookup_switch__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 0) = ((MR_Box) (ll_backend__lookup_switch__V_116_116));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_115_115, 1) = ((MR_Box) ((MR_String) "Setup current slot in the later solution array"));
              }
              {
                ll_backend__lookup_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 2) = ((MR_Box) (ll_backend__lookup_switch__V_121_121));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_127_127, 3) = ((MR_Box) (ll_backend__lookup_switch__MaxOffsetColumnRval_67));
              }
              {
                ll_backend__lookup_switch__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_126_126, 0) = ((MR_Box) (ll_backend__lookup_switch__V_127_127));
              }
              {
                ll_backend__lookup_switch__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 1) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_125_125, 2) = ((MR_Box) (ll_backend__lookup_switch__V_126_126));
              }
              {
                ll_backend__lookup_switch__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 0) = ((MR_Box) (ll_backend__lookup_switch__V_125_125));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_124_124, 1) = ((MR_Box) ((MR_String) "Setup maximum slot in the later solution array"));
              }
              {
                ll_backend__lookup_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 0) = ((MR_Box) (ll_backend__lookup_switch__V_124_124));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__lookup_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 0) = ((MR_Box) (ll_backend__lookup_switch__V_115_115));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_114_114, 1) = ((MR_Box) (ll_backend__lookup_switch__V_123_123));
              }
              {
                ll_backend__lookup_switch__SaveSlotsCode_68 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_switch__V_114_114);
              }
              {
                ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__lookup_switch__AddTrailOps_9, &ll_backend__lookup_switch__SaveTicketCode_69, &ll_backend__lookup_switch__MaybeTicketSlot_70, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, ll_backend__lookup_switch__STATE_VARIABLE_CLD_109_109, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(ll_backend__lookup_switch__Globals_63, (MR_Integer) 303, &ll_backend__lookup_switch__ReclaimHeap_71);
              }
              {
                ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__lookup_switch__ReclaimHeap_71, &ll_backend__lookup_switch__SaveHpCode_72, &ll_backend__lookup_switch__MaybeHpSlot_73, ll_backend__lookup_switch__STATE_VARIABLE_CI_133_133, &ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, ll_backend__lookup_switch__STATE_VARIABLE_CLD_134_134, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137);
              }
              {
                ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0((MR_Integer) 2, &ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__STATE_VARIABLE_CI_136_136, &ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, ll_backend__lookup_switch__STATE_VARIABLE_CLD_137_137, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140);
              }
              {
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__DisjEntry_76);
              }
              {
                ll_backend__lookup_switch__V_141_141 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_293_293, ll_backend__lookup_switch__ResumeVars_4);
              }
              {
                ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__lookup_switch__V_141_141, (MR_Integer) 1, ll_backend__lookup_switch__ResumeMap_64, &ll_backend__lookup_switch__ResumePoint_77, ll_backend__lookup_switch__STATE_VARIABLE_CI_139_139, &ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143);
              }
              {
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__STATE_VARIABLE_CLD_140_140, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145);
              }
              ll_backend__lookup_switch__V_146_146 = (ll_backend__lookup_switch__NumPrevColumns_2 + (MR_Integer) 2);
              {
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__V_146_146, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_145_145, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147);
              }
              {
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_147_147, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149);
              }
              {
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_149_149, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150);
              }
              {
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_150_150, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151);
              }
              {
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__FirstZombies_80, ll_backend__lookup_switch__STATE_VARIABLE_CLD_151_151, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
              {
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, ll_backend__lookup_switch__STATE_VARIABLE_CLD_152_152);
              }
              ll_backend__lookup_switch__TypeCtorInfo_295_295 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__lookup_switch__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_156_156, 0) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_6));
              }
              {
                ll_backend__lookup_switch__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_155_155, 1) = ((MR_Box) (ll_backend__lookup_switch__V_156_156));
              }
              {
                ll_backend__lookup_switch__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 0) = ((MR_Box) (ll_backend__lookup_switch__V_155_155));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_154_154, 1) = ((MR_Box) ((MR_String) "goto end of switch from several_soln"));
              }
              {
                ll_backend__lookup_switch__GotoEndCode_291 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ((MR_Box) (ll_backend__lookup_switch__V_154_154)));
              }
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__DisjEntry_76, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158);
              }
              {
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__lookup_switch__ResumePoint_77, &ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__STATE_VARIABLE_CI_143_143, &ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, ll_backend__lookup_switch__STATE_VARIABLE_CLD_158_158, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160);
              }
              {
                ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__lookup_switch__MaybeTicketSlot_70, (MR_Integer) 0, &ll_backend__lookup_switch__RestoreTicketCode_83);
              }
              {
                ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__lookup_switch__MaybeHpSlot_73, &ll_backend__lookup_switch__RestoreHpCode_84);
              }
              {
                ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_7, (MR_Integer) 0, &ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CLD_160_160, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163);
              }
              {
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__UndoLabel_86, ll_backend__lookup_switch__STATE_VARIABLE_CI_159_159, &ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164);
              }
              {
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__AfterUndoLabel_87, ll_backend__lookup_switch__STATE_VARIABLE_CI_164_164, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250);
              }
              {
                mercury__list__length_2_p_0((MR_Word) &ll_backend__lookup_switch_scalar_common_1[2], ll_backend__lookup_switch__OutVars_3, &ll_backend__lookup_switch__NumOutVars_88);
              }
              {
                ll_backend__lookup_switch__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_169_169, 0) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
              }
              {
                ll_backend__lookup_switch__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_168_168, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
              }
              {
                ll_backend__lookup_switch__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 0) = ((MR_Box) (ll_backend__lookup_switch__V_168_168));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_167_167, 1) = ((MR_Box) ((MR_String) "Init later base register"));
              }
              {
                ll_backend__lookup_switch__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_176_176, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
              }
              {
                ll_backend__lookup_switch__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_177_177, 0) = ((MR_Box) (ll_backend__lookup_switch__MaxSlot_12));
              }
              {
                ll_backend__lookup_switch__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_174_174, 3) = ((MR_Box) (ll_backend__lookup_switch__V_177_177));
              }
              {
                ll_backend__lookup_switch__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_178_178, 0) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
              }
              {
                ll_backend__lookup_switch__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 1) = ((MR_Box) (ll_backend__lookup_switch__V_174_174));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_173_173, 2) = ((MR_Box) (ll_backend__lookup_switch__V_178_178));
              }
              {
                ll_backend__lookup_switch__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 0) = ((MR_Box) (ll_backend__lookup_switch__V_173_173));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_172_172, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
              }
              {
                ll_backend__lookup_switch__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_187_187, 0) = ((MR_Box) (ll_backend__lookup_switch__NumOutVars_88));
              }
              {
                ll_backend__lookup_switch__V_186_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_186_186, 1) = ((MR_Box) (ll_backend__lookup_switch__V_187_187));
              }
              {
                ll_backend__lookup_switch__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 2) = ((MR_Box) (ll_backend__lookup_switch__V_169_169));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_183_183, 3) = ((MR_Box) (ll_backend__lookup_switch__V_186_186));
              }
              {
                ll_backend__lookup_switch__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 1) = ((MR_Box) (ll_backend__lookup_switch__CurSlot_11));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_182_182, 2) = ((MR_Box) (ll_backend__lookup_switch__V_183_183));
              }
              {
                ll_backend__lookup_switch__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 0) = ((MR_Box) (ll_backend__lookup_switch__V_182_182));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_181_181, 1) = ((MR_Box) ((MR_String) "Update current slot in the later solution array"));
              }
              {
                ll_backend__lookup_switch__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_192_192, 0) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
              }
              {
                ll_backend__lookup_switch__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_191_191, 1) = ((MR_Box) (ll_backend__lookup_switch__V_192_192));
              }
              {
                ll_backend__lookup_switch__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 0) = ((MR_Box) (ll_backend__lookup_switch__V_191_191));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_190_190, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
              }
              {
                ll_backend__lookup_switch__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_196_196, 1) = ((MR_Box) (ll_backend__lookup_switch__UndoLabel_86));
              }
              {
                ll_backend__lookup_switch__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 0) = ((MR_Box) (ll_backend__lookup_switch__V_196_196));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_195_195, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
              }
              {
                ll_backend__lookup_switch__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 0) = ((MR_Box) (ll_backend__lookup_switch__V_195_195));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__lookup_switch__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 0) = ((MR_Box) (ll_backend__lookup_switch__V_190_190));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_189_189, 1) = ((MR_Box) (ll_backend__lookup_switch__V_194_194));
              }
              {
                ll_backend__lookup_switch__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 0) = ((MR_Box) (ll_backend__lookup_switch__V_181_181));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_180_180, 1) = ((MR_Box) (ll_backend__lookup_switch__V_189_189));
              }
              {
                ll_backend__lookup_switch__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 0) = ((MR_Box) (ll_backend__lookup_switch__V_172_172));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_171_171, 1) = ((MR_Box) (ll_backend__lookup_switch__V_180_180));
              }
              {
                ll_backend__lookup_switch__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 0) = ((MR_Box) (ll_backend__lookup_switch__V_167_167));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_166_166, 1) = ((MR_Box) (ll_backend__lookup_switch__V_171_171));
              }
              {
                ll_backend__lookup_switch__TestMoreSolnsCode_89 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_166_166);
              }
              {
                ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__lookup_switch__HijackInfo_74, &ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__STATE_VARIABLE_CLD_163_163, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199);
              }
              {
                ll_backend__lookup_switch__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_202_202, 1) = ((MR_Box) (ll_backend__lookup_switch__AfterUndoLabel_87));
              }
              {
                ll_backend__lookup_switch__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 0) = ((MR_Box) (ll_backend__lookup_switch__V_202_202));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_201_201, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
              }
              {
                ll_backend__lookup_switch__V_208_208 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 0) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddrRval_13));
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 1) = ((MR_Box) (ll_backend__lookup_switch__V_119_119));
                MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_208_208, 2) = ((MR_Box) (ll_backend__lookup_switch__V_176_176));
              }
              {
                ll_backend__lookup_switch__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_207_207, 1) = ((MR_Box) (ll_backend__lookup_switch__V_208_208));
              }
              {
                ll_backend__lookup_switch__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterBaseReg_85));
                MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_206_206, 2) = ((MR_Box) (ll_backend__lookup_switch__V_207_207));
              }
              {
                ll_backend__lookup_switch__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 0) = ((MR_Box) (ll_backend__lookup_switch__V_206_206));
                MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_205_205, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
              }
              {
                ll_backend__lookup_switch__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 0) = ((MR_Box) (ll_backend__lookup_switch__V_205_205));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__lookup_switch__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 0) = ((MR_Box) (ll_backend__lookup_switch__V_201_201));
                MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_200_200, 1) = ((MR_Box) (ll_backend__lookup_switch__V_204_204));
              }
              {
                ll_backend__lookup_switch__AfterUndoLabelCode_91 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__V_200_200);
              }
              {
                ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__lookup_switch__ResumePoint_77, (MR_Integer) 2, &ll_backend__lookup_switch___LaterUpdateRedoipCode_92, ll_backend__lookup_switch__STATE_VARIABLE_CLD_199_199, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215);
              }
              {
                ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__lookup_switch__OutVars_3, (MR_Integer) 0, ll_backend__lookup_switch__LaterBaseReg_85, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_215_215, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217);
              }
              {
                ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_217_217, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218);
              }
              {
                ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_218_218, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219);
              }
              {
                ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_219_219, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220);
              }
              {
                ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__lookup_switch__LaterZombies_94, ll_backend__lookup_switch__STATE_VARIABLE_CLD_220_220, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
              {
                ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_153_153, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, &ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_221_221);
              }
              {
                ll_backend__lookup_switch__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterBranchEndCode_95, ll_backend__lookup_switch__GotoEndCode_291);
              }
              {
                ll_backend__lookup_switch__V_237_237 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__LaterFlushResumeVarsCode_93, ll_backend__lookup_switch__V_238_238);
              }
              {
                ll_backend__lookup_switch__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__AfterUndoLabelCode_91, ll_backend__lookup_switch__V_237_237);
              }
              {
                ll_backend__lookup_switch__V_235_235 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UndoHijackCode_90, ll_backend__lookup_switch__V_236_236);
              }
              {
                ll_backend__lookup_switch__V_234_234 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__TestMoreSolnsCode_89, ll_backend__lookup_switch__V_235_235);
              }
              {
                ll_backend__lookup_switch__V_233_233 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreHpCode_84, ll_backend__lookup_switch__V_234_234);
              }
              {
                ll_backend__lookup_switch__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__RestoreTicketCode_83, ll_backend__lookup_switch__V_233_233);
              }
              {
                ll_backend__lookup_switch__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__ResumePointCode_82, ll_backend__lookup_switch__V_232_232);
              }
              {
                ll_backend__lookup_switch__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__GotoEndCode_291, ll_backend__lookup_switch__V_231_231);
              }
              {
                ll_backend__lookup_switch__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstBranchEndCode_81, ll_backend__lookup_switch__V_230_230);
              }
              {
                ll_backend__lookup_switch__V_228_228 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FirstFlushResumeVarsCode_79, ll_backend__lookup_switch__V_229_229);
              }
              {
                ll_backend__lookup_switch__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__UpdateRedoipCode_78, ll_backend__lookup_switch__V_228_228);
              }
              {
                ll_backend__lookup_switch__V_226_226 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__PrepareHijackCode_75, ll_backend__lookup_switch__V_227_227);
              }
              {
                ll_backend__lookup_switch__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveHpCode_72, ll_backend__lookup_switch__V_226_226);
              }
              {
                ll_backend__lookup_switch__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveTicketCode_69, ll_backend__lookup_switch__V_225_225);
              }
              {
                ll_backend__lookup_switch__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__SaveSlotsCode_68, ll_backend__lookup_switch__V_224_224);
              }
              {
                ll_backend__lookup_switch__KindCode_60 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_295_295, ll_backend__lookup_switch__FlushCode_65, ll_backend__lookup_switch__V_223_223);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249;

              ll_backend__lookup_switch__TestOp_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248);
              }
              {
                ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__STATE_VARIABLE_CLD_248_248, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
              {
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, ll_backend__lookup_switch__STATE_VARIABLE_CLD_249_249);
              }
              ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_14;
            }
            break;
        }
        if ((ll_backend__lookup_switch__Kinds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__lookup_switch__Code_16 = ll_backend__lookup_switch__KindCode_60;
            *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243;
            *ll_backend__lookup_switch__STATE_VARIABLE_CI_18 = ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250;
          }
        else
          {
            MR_Word ll_backend__lookup_switch__TypeCtorInfo_297_297;
            MR_Word ll_backend__lookup_switch__NextKind_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 0)));
            MR_Word ll_backend__lookup_switch__NextKindLabel_98;
            MR_Word ll_backend__lookup_switch__TestRval_99;
            MR_Word ll_backend__lookup_switch__TestCode_100;
            MR_Word ll_backend__lookup_switch__NextKindLabelCode_101;
            MR_Word ll_backend__lookup_switch__LaterKindsCode_102;
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251;
            MR_Word ll_backend__lookup_switch__V_252_252;
            MR_Word ll_backend__lookup_switch__V_253_253;
            MR_Word ll_backend__lookup_switch__V_256_256;
            MR_Word ll_backend__lookup_switch__V_257_257;
            MR_Word ll_backend__lookup_switch__V_258_258;
            MR_Word ll_backend__lookup_switch__V_262_262;
            MR_Word ll_backend__lookup_switch__V_263_263;
            MR_Word ll_backend__lookup_switch__V_264_264;
            MR_Word ll_backend__lookup_switch__V_265_265;
            MR_Word ll_backend__lookup_switch__V_267_267;
            MR_Word ll_backend__lookup_switch__V_268_268;
            MR_Word ll_backend__lookup_switch__V_269_269;
            MR_String ll_backend__lookup_switch__V_270_270;
            MR_String ll_backend__lookup_switch__V_272_272;
            MR_Word ll_backend__lookup_switch__V_275_275;
            MR_Word ll_backend__lookup_switch__V_276_276;
            MR_Word ll_backend__lookup_switch__V_277_277;
            MR_Word ll_backend__lookup_switch__V_279_279;
            MR_Word ll_backend__lookup_switch__V_280_280;
            MR_Word ll_backend__lookup_switch__V_281_281;
            MR_String ll_backend__lookup_switch__V_282_282;
            MR_String ll_backend__lookup_switch__V_284_284;
            MR_Word ll_backend__lookup_switch__V_289_289;
            MR_Word ll_backend__lookup_switch__V_290_290;
            MR_Word ll_backend__lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Kinds_42, (MR_Integer) 1)));

            {
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__lookup_switch__NextKindLabel_98, ll_backend__lookup_switch__STATE_VARIABLE_CI_250_250, &ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251);
            }
            {
              ll_backend__lookup_switch__V_256_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_256_256, 0) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_10));
            }
            {
              ll_backend__lookup_switch__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_258_258, 0) = ((MR_Box) (ll_backend__lookup_switch__NumPrevColumns_2));
            }
            {
              ll_backend__lookup_switch__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_257_257, 1) = ((MR_Box) (ll_backend__lookup_switch__V_258_258));
            }
            {
              ll_backend__lookup_switch__V_253_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 2) = ((MR_Box) (ll_backend__lookup_switch__V_256_256));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_253_253, 3) = ((MR_Box) (ll_backend__lookup_switch__V_257_257));
            }
            {
              ll_backend__lookup_switch__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_252_252, 0) = ((MR_Box) (ll_backend__lookup_switch__V_253_253));
            }
            {
              ll_backend__lookup_switch__TestRval_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 1) = ((MR_Box) (ll_backend__lookup_switch__TestOp_58));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_252_252));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__TestRval_99, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__lookup_switch_scalar_common_1[12])));
            }
            ll_backend__lookup_switch__TypeCtorInfo_297_297 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__lookup_switch__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_265_265, 0) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
            }
            {
              ll_backend__lookup_switch__V_264_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 1) = ((MR_Box) (ll_backend__lookup_switch__TestRval_99));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_264_264, 2) = ((MR_Box) (ll_backend__lookup_switch__V_265_265));
            }
            {
              ll_backend__lookup_switch__V_263_263 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 0) = ((MR_Box) (ll_backend__lookup_switch__V_264_264));
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_263_263, 1) = ((MR_Box) ((MR_String) "skip to next kind in several_soln lookup switch"));
            }
            {
              ll_backend__lookup_switch__V_272_272 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__Kind_41);
            }
            {
              ll_backend__lookup_switch__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) "This kind is ", ll_backend__lookup_switch__V_272_272);
            }
            {
              ll_backend__lookup_switch__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_269_269, 0) = ((MR_Box) (ll_backend__lookup_switch__V_270_270));
            }
            {
              ll_backend__lookup_switch__V_268_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 0) = ((MR_Box) (ll_backend__lookup_switch__V_269_269));
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_268_268, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__lookup_switch__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 0) = ((MR_Box) (ll_backend__lookup_switch__V_268_268));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_267_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__lookup_switch__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 0) = ((MR_Box) (ll_backend__lookup_switch__V_263_263));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_262_262, 1) = ((MR_Box) (ll_backend__lookup_switch__V_267_267));
            }
            {
              ll_backend__lookup_switch__TestCode_100 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_262_262);
            }
            {
              ll_backend__lookup_switch__V_277_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_277_277, 1) = ((MR_Box) (ll_backend__lookup_switch__NextKindLabel_98));
            }
            {
              ll_backend__lookup_switch__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 0) = ((MR_Box) (ll_backend__lookup_switch__V_277_277));
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_276_276, 1) = ((MR_Box) ((MR_String) "next kind in several_soln lookup switch"));
            }
            {
              ll_backend__lookup_switch__V_284_284 = ll_backend__lookup_switch__case_kind_to_string_1_f_0(ll_backend__lookup_switch__NextKind_96);
            }
            {
              ll_backend__lookup_switch__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) "Next kind is ", ll_backend__lookup_switch__V_284_284);
            }
            {
              ll_backend__lookup_switch__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_281_281, 0) = ((MR_Box) (ll_backend__lookup_switch__V_282_282));
            }
            {
              ll_backend__lookup_switch__V_280_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 0) = ((MR_Box) (ll_backend__lookup_switch__V_281_281));
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_280_280, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__lookup_switch__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 0) = ((MR_Box) (ll_backend__lookup_switch__V_280_280));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__lookup_switch__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 0) = ((MR_Box) (ll_backend__lookup_switch__V_276_276));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_275_275, 1) = ((MR_Box) (ll_backend__lookup_switch__V_279_279));
            }
            {
              ll_backend__lookup_switch__NextKindLabelCode_101 = mercury__cord__from_list_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__V_275_275);
            }
            {
              ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_42, ll_backend__lookup_switch__NumPrevColumns_2, ll_backend__lookup_switch__OutVars_3, ll_backend__lookup_switch__ResumeVars_4, ll_backend__lookup_switch__BranchStart_5, ll_backend__lookup_switch__EndLabel_6, ll_backend__lookup_switch__StoreMap_7, ll_backend__lookup_switch__Liveness_8, ll_backend__lookup_switch__AddTrailOps_9, ll_backend__lookup_switch__BaseReg_10, ll_backend__lookup_switch__CurSlot_11, ll_backend__lookup_switch__MaxSlot_12, ll_backend__lookup_switch__LaterVectorAddrRval_13, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_243_243, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_15, &ll_backend__lookup_switch__LaterKindsCode_102, ll_backend__lookup_switch__STATE_VARIABLE_CI_251_251, ll_backend__lookup_switch__STATE_VARIABLE_CI_18);
            }
            {
              ll_backend__lookup_switch__V_290_290 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__NextKindLabelCode_101, ll_backend__lookup_switch__LaterKindsCode_102);
            }
            {
              ll_backend__lookup_switch__V_289_289 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__KindCode_60, ll_backend__lookup_switch__V_290_290);
            }
            {
              *ll_backend__lookup_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_297_297, ll_backend__lookup_switch__TestCode_100, ll_backend__lookup_switch__V_289_289);
            }
          }
      }
  }
}

static MR_String MR_CALL 
ll_backend__lookup_switch__case_kind_to_string_1_f_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_String ll_backend__lookup_switch__HeadVar__2_2;

    switch (ll_backend__lookup_switch__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_one_soln";
        break;
      case (MR_Integer) 2:
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_several_solns";
        break;
      case (MR_Integer) 0:
        ll_backend__lookup_switch__HeadVar__2_2 = (MR_String) "kind_zero_solns";
        break;
    }
    return ll_backend__lookup_switch__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_3(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

    {
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
    return ll_backend__lookup_switch__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2(
  MR_Box ll_backend__lookup_switch__closure_arg)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

    {
      ll_backend__lookup_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))));
    }
    return ll_backend__lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;

    {
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__492__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__lookup_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(
  MR_Word ll_backend__lookup_switch__IndexRval_19,
  MR_Word ll_backend__lookup_switch__EndLabel_20,
  MR_Word ll_backend__lookup_switch__StoreMap_21,
  MR_Integer ll_backend__lookup_switch__StartVal_22,
  MR_Integer ll_backend__lookup_switch__EndVal_23,
  MR_Word ll_backend__lookup_switch__CaseSolns_24,
  MR_Word ll_backend__lookup_switch__ResumeVars_25,
  MR_Word ll_backend__lookup_switch__AddTrailOps_26,
  MR_Word ll_backend__lookup_switch__OutVars_27,
  MR_Word ll_backend__lookup_switch__OutTypes_28,
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_29,
  MR_Word ll_backend__lookup_switch__Liveness_30,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59,
  MR_Word * ll_backend__lookup_switch__Code_32,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_61,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_118_118;
    MR_Word ll_backend__lookup_switch__TypeInfo_122_122;
    MR_Word ll_backend__lookup_switch__TypeInfo_123_123;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_126_126;
    MR_Integer ll_backend__lookup_switch__NumOutTypes_35;
    MR_Word ll_backend__lookup_switch__DummyLaterSolnRow_37;
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord0_38;
    MR_Word ll_backend__lookup_switch__MainRows_39;
    MR_Word ll_backend__lookup_switch__LaterSolnArrayCord_40;
    MR_Integer ll_backend__lookup_switch__FailCaseCount_41;
    MR_Integer ll_backend__lookup_switch__OneSolnCaseCount_42;
    MR_Integer ll_backend__lookup_switch__SeveralSolnCaseCount_43;
    MR_Word ll_backend__lookup_switch__LaterSolnArray_44;
    MR_Word ll_backend__lookup_switch__MainRowTypes_45;
    MR_Integer ll_backend__lookup_switch__MainNumColumns_46;
    MR_Word ll_backend__lookup_switch__MainVectorAddr_47;
    MR_Word ll_backend__lookup_switch__MainVectorAddrRval_48;
    MR_Word ll_backend__lookup_switch__LaterVectorAddr_49;
    MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_50;
    MR_Word ll_backend__lookup_switch__AscendingSortedCountKinds_51;
    MR_Word ll_backend__lookup_switch__DescendingSortedCountKinds_52;
    MR_Word ll_backend__lookup_switch__DescendingSortedKinds_53;
    MR_Word ll_backend__lookup_switch__BaseReg_54;
    MR_Word ll_backend__lookup_switch__BaseRegInitCode_55;
    MR_Word ll_backend__lookup_switch__KindsCode_56;
    MR_Word ll_backend__lookup_switch__EndLabelCode_57;
    MR_Word ll_backend__lookup_switch__V_63_63;
    MR_Word ll_backend__lookup_switch__V_67_67;
    MR_Word ll_backend__lookup_switch__V_78_78;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80;
    MR_Word ll_backend__lookup_switch__V_81_81;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83;
    MR_Word ll_backend__lookup_switch__V_84_84;
    MR_Word ll_backend__lookup_switch__V_86_86;
    MR_Word ll_backend__lookup_switch__V_87_87;
    MR_Word ll_backend__lookup_switch__V_89_89;
    MR_Word ll_backend__lookup_switch__V_90_90;
    MR_Word ll_backend__lookup_switch__V_92_92;
    MR_Word ll_backend__lookup_switch__V_93_93;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97;
    MR_Word ll_backend__lookup_switch__V_98_98;
    MR_Word ll_backend__lookup_switch__V_99_99;
    MR_Word ll_backend__lookup_switch__V_100_100;
    MR_Word ll_backend__lookup_switch__V_101_101;
    MR_Word ll_backend__lookup_switch__V_104_104;
    MR_Word ll_backend__lookup_switch__V_106_106;
    MR_Word ll_backend__lookup_switch__V_107_107;
    MR_Word ll_backend__lookup_switch__V_112_112;
    MR_Word ll_backend__lookup_switch__V_113_113;
    MR_Word ll_backend__lookup_switch__V_115_115;
    MR_Integer ll_backend__lookup_switch__V_73_73;
    MR_Integer ll_backend__lookup_switch__V_116_116;

    {
      ll_backend__lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 3) = ((MR_Box) (ll_backend__lookup_switch__OutVars_27));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__lookup_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 0) = ((MR_Box) (&ll_backend__lookup_switch_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 1) = ((MR_Box) (ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_63_63, 3) = ((MR_Box) (ll_backend__lookup_switch__V_67_67));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__lookup_switch__V_63_63, (MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "no OutVars");
    }
    ll_backend__lookup_switch__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
    {
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__OutTypes_28, &ll_backend__lookup_switch__NumOutTypes_35);
    }
    {
      ll_backend__lookup_switch__DummyLaterSolnRow_37 = mercury__list__map_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[2], ll_backend__lookup_switch__OutTypes_28);
    }
    ll_backend__lookup_switch__TypeInfo_122_122 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1];
    {
      ll_backend__lookup_switch__LaterSolnArrayCord0_38 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ((MR_Box) (ll_backend__lookup_switch__DummyLaterSolnRow_37)));
    }
    {
      ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_p_0(ll_backend__lookup_switch__StartVal_22, ll_backend__lookup_switch__EndVal_23, ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__NumOutTypes_35, ll_backend__lookup_switch__CaseSolns_24, &ll_backend__lookup_switch__MainRows_39, (MR_Integer) 1, ll_backend__lookup_switch__LaterSolnArrayCord0_38, &ll_backend__lookup_switch__LaterSolnArrayCord_40, (MR_Integer) 0, &ll_backend__lookup_switch__FailCaseCount_41, (MR_Integer) 0, &ll_backend__lookup_switch__OneSolnCaseCount_42, (MR_Integer) 0, &ll_backend__lookup_switch__SeveralSolnCaseCount_43);
    }
    {
      ll_backend__lookup_switch__LaterSolnArray_44 = mercury__cord__list_1_f_0(ll_backend__lookup_switch__TypeInfo_122_122, ll_backend__lookup_switch__LaterSolnArrayCord_40);
    }
    ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
    if (ll_backend__lookup_switch__succeeded)
      {
        ll_backend__lookup_switch__V_73_73 = (MR_Integer) 0;
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_73_73);
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
      }
    ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
    if (ll_backend__lookup_switch__succeeded)
      {
        ll_backend__lookup_switch__V_116_116 = (MR_Integer) 0;
        ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__FailCaseCount_41 > ll_backend__lookup_switch__V_116_116);
        if (ll_backend__lookup_switch__succeeded)
          {
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__NeedBitVecCheck_29 == (MR_Integer) 0);
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
          }
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
      }
    if (ll_backend__lookup_switch__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_several_soln_int_lookup_switch\'/18", (MR_String) "bad FailCaseCount");
          return;
        }
      }
    {
      ll_backend__lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 0) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_78_78, 1) = ((MR_Box) (ll_backend__lookup_switch__OutTypes_28));
    }
    {
      ll_backend__lookup_switch__MainRowTypes_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 0) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__MainRowTypes_45, 1) = ((MR_Box) (ll_backend__lookup_switch__V_78_78));
    }
    {
      mercury__list__length_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_118_118, ll_backend__lookup_switch__MainRowTypes_45, &ll_backend__lookup_switch__MainNumColumns_46);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__MainRowTypes_45, ll_backend__lookup_switch__MainRows_39, &ll_backend__lookup_switch__MainVectorAddr_47, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_60, &ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80);
    }
    {
      ll_backend__lookup_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 1) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddr_47));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_81_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__lookup_switch__MainVectorAddrRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__MainVectorAddrRval_48, 1) = ((MR_Box) (ll_backend__lookup_switch__V_81_81));
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__lookup_switch__OutTypes_28, ll_backend__lookup_switch__LaterSolnArray_44, &ll_backend__lookup_switch__LaterVectorAddr_49, ll_backend__lookup_switch__STATE_VARIABLE_CI_80_80, &ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83);
    }
    {
      ll_backend__lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterVectorAddr_49));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_84_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__lookup_switch__LaterVectorAddrRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__LaterVectorAddrRval_50, 1) = ((MR_Box) (ll_backend__lookup_switch__V_84_84));
    }
    {
      ll_backend__lookup_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 0) = ((MR_Box) (ll_backend__lookup_switch__FailCaseCount_41));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_87_87, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      ll_backend__lookup_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 0) = ((MR_Box) (ll_backend__lookup_switch__OneSolnCaseCount_42));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_90_90, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__lookup_switch__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 0) = ((MR_Box) (ll_backend__lookup_switch__SeveralSolnCaseCount_43));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_93_93, 1) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      ll_backend__lookup_switch__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 0) = ((MR_Box) (ll_backend__lookup_switch__V_93_93));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__lookup_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 0) = ((MR_Box) (ll_backend__lookup_switch__V_90_90));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_89_89, 1) = ((MR_Box) (ll_backend__lookup_switch__V_92_92));
    }
    {
      ll_backend__lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 0) = ((MR_Box) (ll_backend__lookup_switch__V_87_87));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_86_86, 1) = ((MR_Box) (ll_backend__lookup_switch__V_89_89));
    }
    ll_backend__lookup_switch__TypeInfo_123_123 = (MR_Word) &ll_backend__lookup_switch_scalar_common_2[0];
    {
      mercury__list__sort_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__V_86_86, &ll_backend__lookup_switch__AscendingSortedCountKinds_51);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__lookup_switch__TypeInfo_123_123, ll_backend__lookup_switch__AscendingSortedCountKinds_51, &ll_backend__lookup_switch__DescendingSortedCountKinds_52);
    }
    {
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__lookup_switch__DescendingSortedCountKinds_52, &ll_backend__lookup_switch__DescendingSortedKinds_53);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__lookup_switch__StoreMap_21, (MR_Integer) 0, &ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_62, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
    ll_backend__lookup_switch__TypeCtorInfo_126_126 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__lookup_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_107_107, 0) = ((MR_Box) (ll_backend__lookup_switch__MainNumColumns_46));
    }
    {
      ll_backend__lookup_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_106_106, 1) = ((MR_Box) (ll_backend__lookup_switch__V_107_107));
    }
    {
      ll_backend__lookup_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_19));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_104_104, 3) = ((MR_Box) (ll_backend__lookup_switch__V_106_106));
    }
    {
      ll_backend__lookup_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 0) = ((MR_Box) (ll_backend__lookup_switch__MainVectorAddrRval_48));
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_switch_scalar_common_3[0])));
      MR_hl_field(MR_mktag(2), ll_backend__lookup_switch__V_101_101, 2) = ((MR_Box) (ll_backend__lookup_switch__V_104_104));
    }
    {
      ll_backend__lookup_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_100_100, 1) = ((MR_Box) (ll_backend__lookup_switch__V_101_101));
    }
    {
      ll_backend__lookup_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 1) = ((MR_Box) (ll_backend__lookup_switch__BaseReg_54));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_99_99, 2) = ((MR_Box) (ll_backend__lookup_switch__V_100_100));
    }
    {
      ll_backend__lookup_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 0) = ((MR_Box) (ll_backend__lookup_switch__V_99_99));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
    }
    {
      ll_backend__lookup_switch__BaseRegInitCode_55 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_98_98)));
    }
    {
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__lookup_switch__DescendingSortedKinds_53, (MR_Integer) 0, ll_backend__lookup_switch__OutVars_27, ll_backend__lookup_switch__ResumeVars_25, ll_backend__lookup_switch__EndLabel_20, ll_backend__lookup_switch__StoreMap_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__AddTrailOps_26, ll_backend__lookup_switch__BaseReg_54, ll_backend__lookup_switch__LaterVectorAddrRval_50, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_58, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_59, &ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_83_83, ll_backend__lookup_switch__STATE_VARIABLE_CI_61, ll_backend__lookup_switch__STATE_VARIABLE_CLD_97_97);
    }
    {
      ll_backend__lookup_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_113_113, 1) = ((MR_Box) (ll_backend__lookup_switch__EndLabel_20));
    }
    {
      ll_backend__lookup_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 0) = ((MR_Box) (ll_backend__lookup_switch__V_113_113));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "end of int several soln lookup switch"));
    }
    {
      ll_backend__lookup_switch__EndLabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ((MR_Box) (ll_backend__lookup_switch__V_112_112)));
    }
    {
      ll_backend__lookup_switch__V_115_115 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__KindsCode_56, ll_backend__lookup_switch__EndLabelCode_57);
    }
    {
      *ll_backend__lookup_switch__Code_32 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_126_126, ll_backend__lookup_switch__BaseRegInitCode_55, ll_backend__lookup_switch__V_115_115);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0_1(
  MR_Box ll_backend__lookup_switch__closure_arg,
  MR_Box ll_backend__lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__lookup_switch__wrapper_arg_2;
    MR_Box ll_backend__lookup_switch__closure = ll_backend__lookup_switch__closure_arg;
    MR_Word ll_backend__lookup_switch__conv0_HeadVar__2_2;

    {
      ll_backend__lookup_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__lookup_switch__wrapper_arg_1));
    }
    ll_backend__lookup_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__lookup_switch__conv0_HeadVar__2_2));
    return ll_backend__lookup_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_p_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Integer ll_backend__lookup_switch__CurIndex_2,
  MR_Word ll_backend__lookup_switch__OutTypes_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__lookup_switch__succeeded;

        if ((ll_backend__lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__lookup_switch__STATE_VARIABLE_RevRows_5 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4;
        else
          {
            MR_Integer ll_backend__lookup_switch__Index_11;
            MR_Word ll_backend__lookup_switch__Rvals_12;
            MR_Word ll_backend__lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__lookup_switch__Row_17;
            MR_Word ll_backend__lookup_switch__Remainder_18;
            MR_Word ll_backend__lookup_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;
            MR_Integer ll_backend__lookup_switch__V_25_25;

            ll_backend__lookup_switch__Index_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 0)));
            ll_backend__lookup_switch__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_21_21, (MR_Integer) 1)));
            ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__CurIndex_2 < ll_backend__lookup_switch__Index_11);
            if (ll_backend__lookup_switch__succeeded)
              {
                {
                  ll_backend__lookup_switch__Row_17 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_2[1], ll_backend__lookup_switch__OutTypes_3);
                }
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__HeadVar__1_1;
              }
            else
              {
                ll_backend__lookup_switch__Row_17 = ll_backend__lookup_switch__Rvals_12;
                ll_backend__lookup_switch__Remainder_18 = ll_backend__lookup_switch__Rest_13;
              }
            {
              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 0) = ((MR_Box) (ll_backend__lookup_switch__Row_17));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24, 1) = ((MR_Box) (ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4));
            }
            ll_backend__lookup_switch__V_25_25 = (ll_backend__lookup_switch__CurIndex_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__lookup_switch__HeadVar__1__tmp_copy_1 = ll_backend__lookup_switch__Remainder_18;
              MR_Integer ll_backend__lookup_switch__CurIndex__tmp_copy_2 = ll_backend__lookup_switch__V_25_25;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_24_24;

              ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_RevRows_0__tmp_copy_4;
              ll_backend__lookup_switch__CurIndex_2 = ll_backend__lookup_switch__CurIndex__tmp_copy_2;
              ll_backend__lookup_switch__HeadVar__1_1 = ll_backend__lookup_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_16,
  MR_Word ll_backend__lookup_switch__GetTag_6,
  MR_Word ll_backend__lookup_switch__SolnConsts_7,
  MR_Word ll_backend__lookup_switch__TaggedConsId_8,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
    MR_Box ll_backend__lookup_switch__Index_12;
    MR_Word ll_backend__lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
    void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__GetTag_6, (MR_Integer) 1)));

    {
      ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__GetTag_6), ((MR_Box) (ll_backend__lookup_switch__ConsTag_11)), &ll_backend__lookup_switch__Index_12);
    }
    {
      mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_16, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_12, ((MR_Box) (ll_backend__lookup_switch__SolnConsts_7)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_13, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
  }
}

static void MR_CALL 
ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_20,
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__lookup_switch__succeeded;

        if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_5 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4;
        else
          {
            MR_Word ll_backend__lookup_switch__TaggedConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__lookup_switch__TaggedConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;
            MR_Word ll_backend__lookup_switch__ConsTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 1)));
            MR_Box ll_backend__lookup_switch__Index_29;
            MR_Word ll_backend__lookup_switch___ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedConsId_13, (MR_Integer) 0)));
            void MR_CALL (* ll_backend__lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__HeadVar__1_1, (MR_Integer) 1)));

            {
              ll_backend__lookup_switch__func_0(((MR_Box) ll_backend__lookup_switch__HeadVar__1_1), ((MR_Box) (ll_backend__lookup_switch__ConsTag_28)), &ll_backend__lookup_switch__Index_29);
            }
            {
              mercury__map__det_insert_4_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_20, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__Index_29, ((MR_Box) (ll_backend__lookup_switch__HeadVar__2_2)), ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__lookup_switch__HeadVar__3__tmp_copy_3 = ll_backend__lookup_switch__TaggedConsIds_14;
              MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_18_18;

              ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_4 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_4;
              ll_backend__lookup_switch__HeadVar__3_3 = ll_backend__lookup_switch__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_107,
  MR_Word ll_backend__lookup_switch__HeadVar__1_1,
  MR_Word ll_backend__lookup_switch__HeadVar__2_2,
  MR_Word ll_backend__lookup_switch__HeadVar__3_3,
  MR_Word ll_backend__lookup_switch__HeadVar__4_4,
  MR_Word ll_backend__lookup_switch__HeadVar__5_5,
  MR_Word ll_backend__lookup_switch__HeadVar__6_6,
  MR_Word * ll_backend__lookup_switch__HeadVar__7_7,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_17)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;

    if ((ll_backend__lookup_switch__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__lookup_switch__HeadVar__7_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        *ll_backend__lookup_switch__STATE_VARIABLE_CI_17 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16;
        *ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
        *ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10;
        *ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9 = ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8;
        ll_backend__lookup_switch__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__lookup_switch__TaggedCase_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__TaggedCases_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__TaggedMainConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__TaggedOtherConsIds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__Goal_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 3)));
        MR_Word ll_backend__lookup_switch__GoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__GoalInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__Goal_54, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_switch__Features_57;
        MR_Word ll_backend__lookup_switch__SolnConsts_70;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100;
        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101;
        MR_Word ll_backend__lookup_switch__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__TaggedCase_40, (MR_Integer) 2)));
        MR_Word ll_backend__lookup_switch__TypeCtorInfo_110_110;
        MR_Word ll_backend__lookup_switch__V_84_84;
        MR_Word ll_backend__lookup_switch__Disjuncts_58;
        MR_Word ll_backend__lookup_switch___LivenessRest_72;

        {
          ll_backend__lookup_switch__Features_57 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
        }
        {
          ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__lookup_switch__Features_57);
        }
        ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
        if (ll_backend__lookup_switch__succeeded)
          {
            ll_backend__lookup_switch__V_84_84 = (MR_Integer) 7;
            ll_backend__lookup_switch__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0;
            {
              ll_backend__lookup_switch__succeeded = mercury__set__member_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_110_110, ((MR_Box) (ll_backend__lookup_switch__V_84_84)), ll_backend__lookup_switch__Features_57);
            }
            ll_backend__lookup_switch__succeeded = !(ll_backend__lookup_switch__succeeded);
            if (ll_backend__lookup_switch__succeeded)
              {
                ll_backend__lookup_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__lookup_switch__GoalExpr_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (ll_backend__lookup_switch__succeeded)
                  {
                    ll_backend__lookup_switch__Disjuncts_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__GoalExpr_55, (MR_Integer) 1)));
                    if ((ll_backend__lookup_switch__Disjuncts_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.lookup_switch", (MR_String) "predicate \140ll_backend.lookup_switch.generate_constants_for_lookup_switch\'/17", (MR_String) "disj([])");
                        }
                        ll_backend__lookup_switch__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word ll_backend__lookup_switch__FirstDisjunct_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 0)));
                        MR_Word ll_backend__lookup_switch__LaterDisjuncts_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__Disjuncts_58, (MR_Integer) 1)));
                        MR_Word ll_backend__lookup_switch__FirstDisjunctGoalInfo_62;
                        MR_Word ll_backend__lookup_switch__ThisResumePoint_63;
                        MR_Word ll_backend__lookup_switch__GoalBranchStart_67;
                        MR_Word ll_backend__lookup_switch__FirstSoln_68;
                        MR_Word ll_backend__lookup_switch__LaterSolns_69;
                        MR_Word ll_backend__lookup_switch__V_85_85;
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88;
                        MR_Word ll_backend__lookup_switch__V_89_89;
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90;
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91;
                        MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92;
                        MR_Word ll_backend__lookup_switch__V_61_61;

                        {
                          ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__FirstDisjunct_59);
                        }
                        if (ll_backend__lookup_switch__succeeded)
                          {
                            {
                              ll_backend__lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__LaterDisjuncts_60);
                            }
                            if (ll_backend__lookup_switch__succeeded)
                              {
                                {
                                  ll_backend__lookup_switch__V_85_85 = hlds__goal_form__goal_may_modify_trail_1_f_0(ll_backend__lookup_switch__GoalInfo_56);
                                }
                                {
                                  mercury__bool__or_3_p_0(ll_backend__lookup_switch__V_85_85, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14, &ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86);
                                }
                                ll_backend__lookup_switch__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 0)));
                                ll_backend__lookup_switch__FirstDisjunctGoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__FirstDisjunct_59, (MR_Integer) 1)));
                                {
                                  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__lookup_switch__FirstDisjunctGoalInfo_62, &ll_backend__lookup_switch__ThisResumePoint_63);
                                }
                                if ((ll_backend__lookup_switch__ThisResumePoint_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
                                else
                                  {
                                    MR_Word ll_backend__lookup_switch__ThisResumeVars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 0)));
                                    MR_Word ll_backend__lookup_switch__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__ThisResumePoint_63, (MR_Integer) 1)));

                                    {
                                      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_switch__ThisResumeVars_64, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12, &ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87);
                                    }
                                  }
                                {
                                  ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88);
                                }
                                ll_backend__lookup_switch__V_89_89 = (MR_Integer) 0;
                                {
                                  ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__lookup_switch__GoalInfo_56, ll_backend__lookup_switch__V_89_89, ll_backend__lookup_switch__STATE_VARIABLE_CLD_88_88, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90);
                                }
                                {
                                  ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_90_90, &ll_backend__lookup_switch__GoalBranchStart_67);
                                }
                                {
                                  ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__FirstDisjunct_59, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__FirstSoln_68, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92);
                                }
                                if (ll_backend__lookup_switch__succeeded)
                                  {
                                    {
                                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__lookup_switch__GoalBranchStart_67, ll_backend__lookup_switch__LaterDisjuncts_60, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__LaterSolns_69, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_91_91, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_CI_92_92, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                                    }
                                    if (ll_backend__lookup_switch__succeeded)
                                      {
                                        {
                                          ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__FirstSoln_68));
                                          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__SolnConsts_70, 1) = ((MR_Box) (ll_backend__lookup_switch__LaterSolns_69));
                                        }
                                        ll_backend__lookup_switch__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    MR_Word ll_backend__lookup_switch__Soln_71;

                    {
                      ll_backend__lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__Goal_54);
                    }
                    if (ll_backend__lookup_switch__succeeded)
                      {
                        {
                          ll_backend__lookup_switch__succeeded = ll_backend__lookup_util__generate_constants_for_arm_10_p_0(ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__Goal_54, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch__Soln_71, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_10, &ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__HeadVar__7_7, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_16, &ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94);
                        }
                        if (ll_backend__lookup_switch__succeeded)
                          {
                            ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86 = ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_0_14;
                            ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87 = ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_0_12;
                            {
                              ll_backend__lookup_switch__SolnConsts_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__SolnConsts_70, 0) = ((MR_Box) (ll_backend__lookup_switch__Soln_71));
                            }
                            ll_backend__lookup_switch__succeeded = MR_TRUE;
                          }
                      }
                  }
                if (ll_backend__lookup_switch__succeeded)
                  {
                    {
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedMainConsId_51, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_0_8, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100);
                    }
                    {
                      ll_backend__lookup_switch__record_lookup_for_tagged_cons_ids_5_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__SolnConsts_70, ll_backend__lookup_switch__TaggedOtherConsIds_52, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_100_100, &ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101);
                    }
                    {
                      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_107, ll_backend__lookup_switch__HeadVar__1_1, ll_backend__lookup_switch__HeadVar__2_2, ll_backend__lookup_switch__TaggedCases_41, ll_backend__lookup_switch__HeadVar__4_4, ll_backend__lookup_switch__HeadVar__5_5, ll_backend__lookup_switch__HeadVar__6_6, &ll_backend__lookup_switch___LivenessRest_72, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_101_101, ll_backend__lookup_switch__STATE_VARIABLE_IndexMap_9, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_93_93, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_11, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_87_87, ll_backend__lookup_switch__STATE_VARIABLE_ResumeVars_13, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_86_86, ll_backend__lookup_switch__STATE_VARIABLE_GoalsMayModifyTrail_15, ll_backend__lookup_switch__STATE_VARIABLE_CI_94_94, ll_backend__lookup_switch__STATE_VARIABLE_CI_17);
                    }
                  }
              }
          }
      }
    return ll_backend__lookup_switch__succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__lookup_switch__default_value_for_type_1_f_0(
  MR_Word ll_backend__lookup_switch__HeadVar__1_1)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__HeadVar__2_2 = ((&ll_backend__lookup_switch_vector_common_5[0 + ll_backend__lookup_switch__HeadVar__1_1]))->ll_backend__lookup_switch__vector_common_type_5_0__vct_5_f_0;

    return ll_backend__lookup_switch__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(
  MR_Word ll_backend__lookup_switch__Kinds_17,
  MR_Integer ll_backend__lookup_switch__NumPrevColumns_18,
  MR_Word ll_backend__lookup_switch__OutVars_19,
  MR_Word ll_backend__lookup_switch__ResumeVars_20,
  MR_Word ll_backend__lookup_switch__EndLabel_21,
  MR_Word ll_backend__lookup_switch__StoreMap_22,
  MR_Word ll_backend__lookup_switch__Liveness_23,
  MR_Word ll_backend__lookup_switch__AddTrailOps_24,
  MR_Word ll_backend__lookup_switch__BaseReg_25,
  MR_Word ll_backend__lookup_switch__LaterVectorAddrRval_26,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35,
  MR_Word * ll_backend__lookup_switch__Code_28,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_37,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__CurSlot_31;
    MR_Word ll_backend__lookup_switch__MaxSlot_32;
    MR_Word ll_backend__lookup_switch__BranchStart_33;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46;

    {
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 1, &ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_36, &ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_38, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42);
    }
    {
      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 1, &ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__STATE_VARIABLE_CI_41_41, &ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CLD_42_42, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CLD_46_46, &ll_backend__lookup_switch__BranchStart_33);
    }
    {
      ll_backend__lookup_switch__generate_code_for_each_kind_18_p_0(ll_backend__lookup_switch__Kinds_17, ll_backend__lookup_switch__NumPrevColumns_18, ll_backend__lookup_switch__OutVars_19, ll_backend__lookup_switch__ResumeVars_20, ll_backend__lookup_switch__BranchStart_33, ll_backend__lookup_switch__EndLabel_21, ll_backend__lookup_switch__StoreMap_22, ll_backend__lookup_switch__Liveness_23, ll_backend__lookup_switch__AddTrailOps_24, ll_backend__lookup_switch__BaseReg_25, ll_backend__lookup_switch__CurSlot_31, ll_backend__lookup_switch__MaxSlot_32, ll_backend__lookup_switch__LaterVectorAddrRval_26, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_34, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_35, ll_backend__lookup_switch__Code_28, ll_backend__lookup_switch__STATE_VARIABLE_CI_45_45, ll_backend__lookup_switch__STATE_VARIABLE_CI_37);
    }
  }
}

void MR_CALL 
ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(
  MR_Word ll_backend__lookup_switch__VarRval_15,
  MR_Word ll_backend__lookup_switch__LookupSwitchInfo_16,
  MR_Word ll_backend__lookup_switch__EndLabel_17,
  MR_Word ll_backend__lookup_switch__StoreMap_18,
  MR_Integer ll_backend__lookup_switch__StartVal_19,
  MR_Integer ll_backend__lookup_switch__EndVal_20,
  MR_Word ll_backend__lookup_switch__NeedBitVecCheck_21,
  MR_Word ll_backend__lookup_switch__NeedRangeCheck_22,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46,
  MR_Word * ll_backend__lookup_switch__Code_24,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_48,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded = (ll_backend__lookup_switch__StartVal_19 == (MR_Integer) 0);
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_78_78;
    MR_Word ll_backend__lookup_switch__CaseConsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 0)));
    MR_Word ll_backend__lookup_switch__OutVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 1)));
    MR_Word ll_backend__lookup_switch__OutTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 2)));
    MR_Word ll_backend__lookup_switch__Liveness_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__LookupSwitchInfo_16, (MR_Integer) 3)));
    MR_Word ll_backend__lookup_switch__IndexRval_31;
    MR_Word ll_backend__lookup_switch__RangeCheckCode_34;
    MR_Word ll_backend__lookup_switch__Comment_36;
    MR_Word ll_backend__lookup_switch__RestCode_38;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56;
    MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57;
    MR_Word ll_backend__lookup_switch__V_70_70;

    if (ll_backend__lookup_switch__succeeded)
      ll_backend__lookup_switch__IndexRval_31 = ll_backend__lookup_switch__VarRval_15;
    else
      {
        MR_Word ll_backend__lookup_switch__V_51_51;
        MR_Word ll_backend__lookup_switch__V_52_52;

        {
          ll_backend__lookup_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_52_52, 0) = ((MR_Box) (ll_backend__lookup_switch__StartVal_19));
        }
        {
          ll_backend__lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_51_51, 1) = ((MR_Box) (ll_backend__lookup_switch__V_52_52));
        }
        {
          ll_backend__lookup_switch__IndexRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 2) = ((MR_Box) (ll_backend__lookup_switch__VarRval_15));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__IndexRval_31, 3) = ((MR_Box) (ll_backend__lookup_switch__V_51_51));
        }
      }
    switch (ll_backend__lookup_switch__NeedRangeCheck_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            ll_backend__lookup_switch__RangeCheckCode_34 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56 = ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47;
          ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57 = ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer ll_backend__lookup_switch__Difference_32 = (ll_backend__lookup_switch__EndVal_20 - ll_backend__lookup_switch__StartVal_19);
          MR_Word ll_backend__lookup_switch__CmpRval_33;
          MR_Word ll_backend__lookup_switch__V_54_54;
          MR_Word ll_backend__lookup_switch__V_55_55;

          {
            ll_backend__lookup_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__V_55_55, 0) = ((MR_Box) (ll_backend__lookup_switch__Difference_32));
          }
          {
            ll_backend__lookup_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__V_54_54, 1) = ((MR_Box) (ll_backend__lookup_switch__V_55_55));
          }
          {
            ll_backend__lookup_switch__CmpRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 2) = ((MR_Box) (ll_backend__lookup_switch__IndexRval_31));
            MR_hl_field(MR_mktag(3), ll_backend__lookup_switch__CmpRval_33, 3) = ((MR_Box) (ll_backend__lookup_switch__V_54_54));
          }
          {
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__lookup_switch__CmpRval_33, &ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_47, &ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CLD_0_49, &ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
          }
        }
        break;
    }
    if (((MR_tag((MR_Word) ll_backend__lookup_switch__CaseConsts_27)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__lookup_switch__CaseValuesMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__CaseValues_37;

        {
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[10])));
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[1], ll_backend__lookup_switch__CaseValuesMap_35, &ll_backend__lookup_switch__CaseValues_37);
        }
        {
          ll_backend__lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_13_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__CaseValues_37, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
        *ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46 = ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45;
      }
    else
      {
        MR_Word ll_backend__lookup_switch__CaseSolnMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_switch__ResumeVars_40;
        MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_41;
        MR_Word ll_backend__lookup_switch__AddTrailOps_43;
        MR_Word ll_backend__lookup_switch__CaseSolns_44;
        MR_Word ll_backend__lookup_switch__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_27, (MR_Integer) 1)));

        ll_backend__lookup_switch__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 0)));
        ll_backend__lookup_switch__GoalsMayModifyTrail_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_58_58, (MR_Integer) 1)));
        switch (ll_backend__lookup_switch__GoalsMayModifyTrail_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__lookup_switch__AddTrailOps_43 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, &ll_backend__lookup_switch__AddTrailOps_43);
            }
            break;
        }
        {
          ll_backend__lookup_switch__Comment_36 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__lookup_switch_scalar_common_1[11])));
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0], ll_backend__lookup_switch__CaseSolnMap_39, &ll_backend__lookup_switch__CaseSolns_44);
        }
        {
          ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_18_p_0(ll_backend__lookup_switch__IndexRval_31, ll_backend__lookup_switch__EndLabel_17, ll_backend__lookup_switch__StoreMap_18, ll_backend__lookup_switch__StartVal_19, ll_backend__lookup_switch__EndVal_20, ll_backend__lookup_switch__CaseSolns_44, ll_backend__lookup_switch__ResumeVars_40, ll_backend__lookup_switch__AddTrailOps_43, ll_backend__lookup_switch__OutVars_28, ll_backend__lookup_switch__OutTypes_29, ll_backend__lookup_switch__NeedBitVecCheck_21, ll_backend__lookup_switch__Liveness_30, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_45, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_46, &ll_backend__lookup_switch__RestCode_38, ll_backend__lookup_switch__STATE_VARIABLE_CI_56_56, ll_backend__lookup_switch__STATE_VARIABLE_CI_48, ll_backend__lookup_switch__STATE_VARIABLE_CLD_57_57);
        }
      }
    ll_backend__lookup_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__lookup_switch__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__RangeCheckCode_34, ll_backend__lookup_switch__RestCode_38);
    }
    {
      *ll_backend__lookup_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__lookup_switch__TypeCtorInfo_78_78, ll_backend__lookup_switch__Comment_36, ll_backend__lookup_switch__V_70_70);
    }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_switch__is_lookup_switch_10_p_0(
  MR_Word ll_backend__lookup_switch__TypeInfo_for_Key_46,
  MR_Word ll_backend__lookup_switch__BranchStart_11,
  MR_Word ll_backend__lookup_switch__GetTag_12,
  MR_Word ll_backend__lookup_switch__TaggedCases_13,
  MR_Word ll_backend__lookup_switch__GoalInfo_14,
  MR_Word ll_backend__lookup_switch__StoreMap_15,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36,
  MR_Word * ll_backend__lookup_switch__LookupSwitchInfo_17,
  MR_Word ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37,
  MR_Word * ll_backend__lookup_switch__STATE_VARIABLE_CI_38)
{
  {
    MR_bool ll_backend__lookup_switch__succeeded;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_47_47;
    MR_Word ll_backend__lookup_switch__TypeInfo_48_48;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_50_50;
    MR_Word ll_backend__lookup_switch__StartCLD_19;
    MR_Word ll_backend__lookup_switch__OutVars_20;
    MR_Word ll_backend__lookup_switch__ArmNonLocals_21;
    MR_Word ll_backend__lookup_switch__Liveness_22;
    MR_Word ll_backend__lookup_switch__CaseSolnMap_23;
    MR_Word ll_backend__lookup_switch__ResumeVars_24;
    MR_Word ll_backend__lookup_switch__GoalsMayModifyTrail_25;
    MR_Word ll_backend__lookup_switch__VarTypes_26;
    MR_Word ll_backend__lookup_switch__OutTypes_27;
    MR_Word ll_backend__lookup_switch__CaseConsts_29;
    MR_Word ll_backend__lookup_switch__ExprnOpts_30;
    MR_Word ll_backend__lookup_switch__UnboxFloats_31;
    MR_Word ll_backend__lookup_switch__CaseSolns_32;
    MR_Word ll_backend__lookup_switch__CaseValues_33;
    MR_Word ll_backend__lookup_switch__OutLLDSTypes_34;
    MR_Word ll_backend__lookup_switch__V_39_39;
    MR_Word ll_backend__lookup_switch__V_41_41;
    MR_Word ll_backend__lookup_switch__V_45_45;
    MR_Word ll_backend__lookup_switch__CaseValuePairsMap_28;
    MR_Word ll_backend__lookup_switch__TypeCtorInfo_49_49;

    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, &ll_backend__lookup_switch__StartCLD_19);
    }
    {
      ll_backend__lookup_util__figure_out_output_vars_4_p_0(ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__StartCLD_19, ll_backend__lookup_switch__GoalInfo_14, &ll_backend__lookup_switch__OutVars_20);
    }
    ll_backend__lookup_switch__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__lookup_switch__TypeCtorInfo_47_47, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__ArmNonLocals_21);
    }
    ll_backend__lookup_switch__TypeInfo_48_48 = (MR_Word) &ll_backend__lookup_switch_scalar_common_1[0];
    {
      ll_backend__lookup_switch__V_39_39 = mercury__map__init_0_f_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48);
    }
    {
      ll_backend__lookup_switch__V_41_41 = parse_tree__set_of_var__init_0_f_0(ll_backend__lookup_switch__TypeCtorInfo_47_47);
    }
    {
      ll_backend__lookup_switch__succeeded = ll_backend__lookup_switch__generate_constants_for_lookup_switch_17_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__BranchStart_11, ll_backend__lookup_switch__GetTag_12, ll_backend__lookup_switch__TaggedCases_13, ll_backend__lookup_switch__OutVars_20, ll_backend__lookup_switch__ArmNonLocals_21, ll_backend__lookup_switch__StoreMap_15, &ll_backend__lookup_switch__Liveness_22, ll_backend__lookup_switch__V_39_39, &ll_backend__lookup_switch__CaseSolnMap_23, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_0_35, ll_backend__lookup_switch__STATE_VARIABLE_MaybeEnd_36, ll_backend__lookup_switch__V_41_41, &ll_backend__lookup_switch__ResumeVars_24, (MR_Integer) 0, &ll_backend__lookup_switch__GoalsMayModifyTrail_25, ll_backend__lookup_switch__STATE_VARIABLE_CI_0_37, ll_backend__lookup_switch__STATE_VARIABLE_CI_38);
    }
    if (ll_backend__lookup_switch__succeeded)
      {
        {
          ll_backend__code_info__get_vartypes_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__VarTypes_26);
        }
        {
          hlds__vartypes__lookup_var_types_3_p_0(ll_backend__lookup_switch__VarTypes_26, ll_backend__lookup_switch__OutVars_20, &ll_backend__lookup_switch__OutTypes_27);
        }
        ll_backend__lookup_switch__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
        {
          ll_backend__lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_49_49, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseValuePairsMap_28);
        }
        if (ll_backend__lookup_switch__succeeded)
          {
            ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseValuePairsMap_28));
          }
        else
          {
            MR_Word ll_backend__lookup_switch__V_44_44;

            {
              ll_backend__lookup_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 0) = ((MR_Box) (ll_backend__lookup_switch__ResumeVars_24));
              MR_hl_field(MR_mktag(0), ll_backend__lookup_switch__V_44_44, 1) = ((MR_Box) (ll_backend__lookup_switch__GoalsMayModifyTrail_25));
            }
            {
              ll_backend__lookup_switch__CaseConsts_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseSolnMap_23));
              MR_hl_field(MR_mktag(1), ll_backend__lookup_switch__CaseConsts_29, 1) = ((MR_Box) (ll_backend__lookup_switch__V_44_44));
            }
          }
        {
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_switch__STATE_VARIABLE_CI_38, &ll_backend__lookup_switch__ExprnOpts_30);
        }
        {
          ll_backend__lookup_switch__UnboxFloats_31 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__lookup_switch__ExprnOpts_30);
        }
        {
          mercury__map__to_assoc_list_2_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeInfo_48_48, ll_backend__lookup_switch__CaseSolnMap_23, &ll_backend__lookup_switch__CaseSolns_32);
        }
        ll_backend__lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
        {
          backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(ll_backend__lookup_switch__TypeInfo_for_Key_46, ll_backend__lookup_switch__TypeCtorInfo_50_50, ll_backend__lookup_switch__CaseSolns_32, ll_backend__lookup_switch__V_45_45, &ll_backend__lookup_switch__CaseValues_33);
        }
        {
          ll_backend__lookup_switch__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__lookup_switch__UnboxFloats_31, ll_backend__lookup_switch__OutTypes_27, ll_backend__lookup_switch__CaseValues_33, &ll_backend__lookup_switch__OutLLDSTypes_34);
        }
        if (ll_backend__lookup_switch__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__lookup_switch__LookupSwitchInfo_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__lookup_switch__CaseConsts_29));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__lookup_switch__OutVars_20));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__lookup_switch__OutLLDSTypes_34));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__lookup_switch__Liveness_22));
            }
            ll_backend__lookup_switch__succeeded = MR_TRUE;
          }
      }
    return ll_backend__lookup_switch__succeeded;
  }
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
