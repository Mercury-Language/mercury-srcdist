/*
** Automatically generated from `coverage_profiling.m'
** by the Mercury compiler,
** version rotd-2019-04-17
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


// :- module ll_backend.coverage_profiling.
// :- implementation.

/*
INIT mercury__ll_backend__coverage_profiling__init
ENDINIT
*/

#include "ll_backend.coverage_profiling.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.deep_profiling.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0;

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1;

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0[2];

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[2];

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[2];

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0;

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1;

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0[2];

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0[2];

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0[2];

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[9];

static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0[9];

static const MR_DuArgLocn ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0[9];

static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0;

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1];

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1];

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[1];

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[8];

static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[8];

static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1];

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[1];

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[1];

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
  MR_Word CPOptions_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word TrivialAcc_11,
  MR_Word * Trivial_12,
  MR_Word PortCountsCoverageAfterAcc_13,
  MR_Word * PortCountsCoverageAfter_14);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
  MR_Word CPOptions_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
  MR_Word CPOptions_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
  MR_Word CPOptions_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word PortCountsCoverageAfterBefore_9,
  MR_Word * Info_10);

static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
  MR_Word Goal_5,
  MR_Word PCDirect_6,
  MR_Word PCBefore_7,
  MR_Word * PC_8);

static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * PortCountsCoverageAfter_6);

static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Trivial_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
  MR_Word DPInfo_10,
  MR_Word CanFail_11,
  MR_Word Cases0_12,
  MR_Word * Cases_13,
  MR_Word CoverageBeforeSwitchKnown_14,
  MR_Word * CoverageAfterSwitchKnown_15,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word * AddedImpurity_17);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
  MR_Word DPInfo_9,
  MR_Word CoverageBeforeKnown_10,
  MR_Word * NextCoverageBeforeKnown_11,
  MR_Word Disjuncts0_12,
  MR_Word * Disjuncts_13,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word * AddedImpurity_15);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
  MR_Word DPInfo_12,
  MR_Word ITEExistVars_13,
  MR_Word Cond0_14,
  MR_Word Then0_15,
  MR_Word Else0_16,
  MR_Word * GoalExpr_17,
  MR_Word CoverageBeforeITEKnown_18,
  MR_Word * NextCoverageBeforeKnown_19,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56,
  MR_Word * AddedImpurity_21);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
  MR_Word DPInfo_1,
  MR_Word SwitchCanFail_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word CoverageBeforeSwitchKnown_5,
  MR_Word CoverageBeforeEveryCaseKnown_6,
  MR_Word STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
  MR_Word * STATE_VARIABLE_CoverageAfterSwitchKnown_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
  MR_Word DPInfo_1,
  MR_Word CoverageBeforeKnown0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
  MR_Word ConjType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word CoverageBeforeKnown_10,
  MR_Word * NextCoverageBeforeKnown_11,
  MR_Word STATE_VARIABLE_Info_0_90,
  MR_Word * STATE_VARIABLE_Info_91,
  MR_Word * AddedImpurity_13);

static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
  MR_Word GoalInfo_3);

static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
  MR_Word CPOptions_7,
  MR_Word CPInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
  MR_Word CPOptions_6,
  MR_Word CoveragePointInfo_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_CoverageInfo_0_39,
  MR_Word * STATE_VARIABLE_CoverageInfo_40);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
  MR_Word CoverageDataType_4,
  MR_Word * ForeignProcAttrs_5,
  MR_Word * ForeignProcImpl_6);

static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
  MR_Word CoverageInfo_3,
  MR_Word * ProcStaticConsId_4);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
  MR_Word Detism_4,
  MR_Word STATE_VARIABLE_CoverageKnown_0_6,
  MR_Word * STATE_VARIABLE_CoverageKnown_7);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[3][3];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[8][2];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10];




static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__coverage_profiling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__coverage_profiling_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "CPIndex")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[0]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "ProcLayout")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[1]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[5]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0 = {
  (MR_String) "coverage_before_known",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1 = {
  (MR_String) "coverage_before_unknown",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_before_known",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "static_coverage_data",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "dynamic_coverage_data",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0
};

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_data_type",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0
};

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[9] = {
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0[9] = {
  (MR_String) "cpo_dynamic_coverage",
  (MR_String) "cpo_use_calls",
  (MR_String) "cpo_coverage_after_goal",
  (MR_String) "cpo_branch_ite",
  (MR_String) "cpo_branch_switch",
  (MR_String) "cpo_branch_disj",
  (MR_String) "cpo_use_portcounts",
  (MR_String) "cpo_use_trivial",
  (MR_String) "cpo_run_first_pass"
};

static const MR_DuArgLocn ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 = {
  (MR_String) "coverage_profiling_options",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_profiling_options",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
};

static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[8] = {
  (MR_String) "ci_coverage_points",
  (MR_String) "ci_cp_index_counter",
  (MR_String) "ci_var_info",
  (MR_String) "ci_module_info",
  (MR_String) "ci_pred_proc_id",
  (MR_String) "ci_maybe_rec_info",
  (MR_String) "ci_coverage_profiling_opts",
  (MR_String) "ci_containing_goal_map"
};

static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0 = {
  (MR_String) "proc_coverage_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "proc_coverage_info",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0
};

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__vartypes____Compare____prog_var_set_types_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_module____Compare____module_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_2[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&ll_backend__coverage_profiling_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeInfo_27_27 = (MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_41 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_42 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_41 < Var_42);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_41 > Var_42);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_43 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_44 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_43 < Var_44);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_43 > Var_44);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_45 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_46 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_45 < Var_46);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_45 > Var_46);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_47 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_48 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_47 < Var_48);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_47 > Var_48);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_49 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_50 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_49 < Var_50);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_49 > Var_50);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_51 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_52 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_51 < Var_52);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_51 > Var_52);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_53 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_54 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_53 < Var_54);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_53 > Var_54);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_55 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_56 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_55 < Var_56);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_55 > Var_56);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Integer Var_57 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_58 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_57 < Var_58);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_57 > Var_58);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                      succeeded = (ArgX9_19 == ArgY9_20);
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
  MR_Word CPOptions_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word TrivialAcc_11,
  MR_Word * Trivial_12,
  MR_Word PortCountsCoverageAfterAcc_13,
  MR_Word * PortCountsCoverageAfter_14)
{
  {
    MR_bool succeeded;
    MR_Word TrivialGoal_15;
    MR_Word Var_16;

    ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_8, Goal0_9, Goal_10, PortCountsCoverageAfterAcc_13, &Var_16);
    TrivialGoal_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    *PortCountsCoverageAfter_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (TrivialAcc_11 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (TrivialGoal_15 == (MR_Integer) 0);
    if (succeeded)
      *Trivial_12 = (MR_Integer) 0;
    else
      *Trivial_12 = (MR_Integer) 1;
  }
}

void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredProcId_11,
  MR_Word ContainingGoalMap_12,
  MR_Word MaybeRecInfo_13,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_VarInfo_0_27,
  MR_Word * STATE_VARIABLE_VarInfo_28,
  MR_Word * CoveragePoints_16)
{
  {
    MR_Word CoverageProfilingOptions_17;
    MR_Word CoverageInfo0_18;
    MR_Word RunFirstPass_19;
    MR_Word CoverageInfo_22;
    MR_Word CoveragePointsMap_24;
    MR_Word STATE_VARIABLE_Goal_29_29;
    MR_Word Globals_58;
    MR_Word Static_59;
    MR_Word DataType_60;
    MR_Word UseCalls_61;
    MR_Word CoverageAfterGoal_62;
    MR_Word BranchIf_63;
    MR_Word BranchSwitch_64;
    MR_Word BranchDisj_65;
    MR_Word UsePortCounts_66;
    MR_Word UseTrivial_67;
    MR_Word RunFirstPass_68;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word AssocList_91;
    MR_Word Var_21;
    MR_Word Var_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_58);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 222, &Static_59);
    switch (Static_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DataType_60 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        DataType_60 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 221, &UseCalls_61);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 223, &CoverageAfterGoal_62);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 224, &BranchIf_63);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 225, &BranchSwitch_64);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 226, &BranchDisj_65);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 227, &UsePortCounts_66);
    libs__globals__lookup_bool_option_3_p_0(Globals_58, (MR_Integer) 228, &UseTrivial_67);
    mercury__bool__or_3_p_0(UsePortCounts_66, UseTrivial_67, &RunFirstPass_68);
    {
      CoverageProfilingOptions_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CoverageProfilingOptions_17, 0) = (MR_Box) (((((MR_Unsigned) (DataType_60) << 8)) | (((((MR_Unsigned) (UseCalls_61) << 7)) | (((((MR_Unsigned) (CoverageAfterGoal_62) << 6)) | (((((MR_Unsigned) (BranchIf_63) << 5)) | (((((MR_Unsigned) (BranchSwitch_64) << 4)) | (((((MR_Unsigned) (BranchDisj_65) << 3)) | (((((MR_Unsigned) (UsePortCounts_66) << 2)) | (((((MR_Unsigned) (UseTrivial_67) << 1)) | (MR_Unsigned) (RunFirstPass_68)))))))))))))))));
    }
    Var_84 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0));
    Var_85 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      CoverageInfo0_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 1) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 2) = ((MR_Box) (STATE_VARIABLE_VarInfo_0_27));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 4) = ((MR_Box) (PredProcId_11));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 5) = ((MR_Box) (MaybeRecInfo_13));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 6) = ((MR_Box) (CoverageProfilingOptions_17));
      MR_hl_field(MR_mktag(0), CoverageInfo0_18, 7) = ((MR_Box) (ContainingGoalMap_12));
    }
    RunFirstPass_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CoverageProfilingOptions_17, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (RunFirstPass_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Goal_29_29 = STATE_VARIABLE_Goal_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20;

          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CoverageProfilingOptions_17, STATE_VARIABLE_Goal_0_25, &STATE_VARIABLE_Goal_29_29, (MR_Integer) 0, &Var_20);
        }
        break;
    }
    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(STATE_VARIABLE_Goal_29_29, STATE_VARIABLE_Goal_26, (MR_Integer) 0, &Var_21, CoverageInfo0_18, &CoverageInfo_22, &Var_23);
    CoveragePointsMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoverageInfo_22, (MR_Integer) 0))));
    *STATE_VARIABLE_VarInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoverageInfo_22, (MR_Integer) 2))));
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePointsMap_24, &AssocList_91);
    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), AssocList_91, CoveragePoints_16);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
  MR_Word CPOptions_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__5_5 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Case_10;
      MR_Word Cases_11;
      MR_Word FirstFunctor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
      MR_Word LaterFunctors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
      MR_Word Goal_17;
      MR_Word TrivialGoal_18;
      MR_Word PortCountsCoverageAfterGoal_19;
      MR_Word TrivialSwitchcase_20;
      MR_Word PortCountsCoverageAfterSwitchcase_21;
      MR_Word Var_23;

      ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_1, Goal0_16, &Goal_17, (MR_Integer) 1, &Var_23);
      TrivialGoal_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      PortCountsCoverageAfterGoal_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))) & (MR_Integer) 1);
      ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(CPOptions_1, Cases0_9, &Cases_11, &TrivialSwitchcase_20, &PortCountsCoverageAfterSwitchcase_21);
      succeeded = (TrivialGoal_18 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (TrivialSwitchcase_20 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__4_4 = (MR_Integer) 0;
      else
        *HeadVar__4_4 = (MR_Integer) 1;
      succeeded = (PortCountsCoverageAfterGoal_19 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (PortCountsCoverageAfterSwitchcase_21 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__5_5 = (MR_Integer) 0;
      else
        *HeadVar__5_5 = (MR_Integer) 1;
      {
        Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (FirstFunctor_14));
        MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (LaterFunctors_15));
        MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
  MR_Word CPOptions_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_14;
      MR_Word Goals_15;
      MR_Word TrivialGoal_19;
      MR_Word PortCountsCoverageAfterGoal_20;
      MR_Word TrivialDisj_21;
      MR_Word PortCountsCoverageAfterDisj_22;
      MR_Word Var_23;

      ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_1, Goal0_12, &Goal_14, HeadVar__5_5, &Var_23);
      TrivialGoal_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      PortCountsCoverageAfterGoal_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))) & (MR_Integer) 1);
      ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(CPOptions_1, Goals0_13, &Goals_15, &TrivialDisj_21, (MR_Integer) 1, &PortCountsCoverageAfterDisj_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
      }
      succeeded = (TrivialGoal_19 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (TrivialDisj_21 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__4_4 = (MR_Integer) 0;
      else
        *HeadVar__4_4 = (MR_Integer) 1;
      succeeded = (PortCountsCoverageAfterGoal_20 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (PortCountsCoverageAfterDisj_22 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__6_6 = (MR_Integer) 0;
      else
        *HeadVar__6_6 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_10;
    MR_Word conv1_Trivial_12;
    MR_Word conv0_PortCountsCoverageAfter_14;

    ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv1_Trivial_12, ((MR_Word) (wrapper_arg_5)), &conv0_PortCountsCoverageAfter_14);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_Trivial_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_PortCountsCoverageAfter_14));
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
  MR_Word CPOptions_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word PortCountsCoverageAfterBefore_9,
  MR_Word * Info_10)
{
  {
    MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word Trivial0_19;
    MR_Word PortCountsCoverageAfterDirect_20;
    MR_Word GoalExpr_21;
    MR_Word PortCountsCoverageAfter_75;
    MR_Word Trivial_76;
    MR_Word MaybeDPInfo0_77;
    MR_Word DPInfo_80;
    MR_Word GoalInfo_81;
    MR_Word Var_99;
    MR_Word Var_146;
    MR_Word Var_147;

    switch (MR_tag((MR_Word) GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InnerGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_11));
          MR_Word InnerGoal_58;
          MR_Word Var_88;

          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, InnerGoal0_57, &InnerGoal_58, PortCountsCoverageAfterBefore_9, &Var_88);
          Trivial0_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          PortCountsCoverageAfterDirect_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))) & (MR_Integer) 1);
          GoalExpr_21 = (MR_Word) ((MR_Word) (InnerGoal_58));
        }
        break;
      case (MR_Integer) 1:
        {
          Trivial0_19 = (MR_Integer) 0;
          PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
          GoalExpr_21 = GoalExpr0_11;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinState_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (BuiltinState_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Trivial0_19 = (MR_Integer) 0;
                PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                Trivial0_19 = (MR_Integer) 1;
                PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
              }
              break;
          }
          GoalExpr_21 = GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) GenericCall_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    Trivial0_19 = (MR_Integer) 1;
                    PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    Trivial0_19 = (MR_Integer) 0;
                    PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
                  }
                  break;
              }
              GoalExpr_21 = GoalExpr0_11;
            }
            break;
          case (MR_Integer) 1:
            {
              Trivial0_19 = (MR_Integer) 1;
              PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
              GoalExpr_21 = GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word Goals_51;
              MR_Word Var_89;
              MR_Box conv4_Trivial0_19;
              MR_Box conv3_PortCountsCoverageAfterDirect_20;

              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (CPOptions_6));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0), Var_89, Goals0_50, &Goals_51, ((MR_Box) ((MR_Integer) 0)), &conv4_Trivial0_19, ((MR_Box) (PortCountsCoverageAfterBefore_9)), &conv3_PortCountsCoverageAfterDirect_20);
              Trivial0_19 = ((MR_Word) (conv4_Trivial0_19));
              PortCountsCoverageAfterDirect_20 = ((MR_Word) (conv3_PortCountsCoverageAfterDirect_20));
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_49));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (Goals_51));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Goals_101;

              ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(CPOptions_6, Goals0_100, &Goals_101, &Trivial0_19, PortCountsCoverageAfterBefore_9, &PortCountsCoverageAfterDirect_20);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Goals_101));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word CanFail_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word Cases_55;
              MR_Word PortCountsCoverageAfterCases_56;

              ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(CPOptions_6, Cases0_54, &Cases_55, &Trivial0_19, &PortCountsCoverageAfterCases_56);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (CanFail_53));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 3) = ((MR_Box) (Cases_55));
              }
              switch (CanFail_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  PortCountsCoverageAfterDirect_20 = PortCountsCoverageAfterCases_56;
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Var_87;
              MR_Word InnerGoal0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word InnerGoal_103;

              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, InnerGoal0_102, &InnerGoal_103, PortCountsCoverageAfterBefore_9, &Var_87);
              Trivial0_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              PortCountsCoverageAfterDirect_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 0))) & (MR_Integer) 1);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (InnerGoal_103));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word CondGoal0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word ThenGoal0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word ElseGoal0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
              MR_Word CondGoal_64;
              MR_Word TrivialCond_65;
              MR_Word PortCountsCoverageAfterCond_66;
              MR_Word ThenGoal_67;
              MR_Word TrivialThen_68;
              MR_Word PortCountsCoverageAfterThen_69;
              MR_Word ElseGoal_70;
              MR_Word TrivialElse_71;
              MR_Word PortCountsCoverageAfterElse_72;
              MR_Word TrivialCondThen_73;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;

              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, CondGoal0_61, &CondGoal_64, PortCountsCoverageAfterBefore_9, &Var_84);
              TrivialCond_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              PortCountsCoverageAfterCond_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0))) & (MR_Integer) 1);
              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, ThenGoal0_62, &ThenGoal_67, PortCountsCoverageAfterCond_66, &Var_85);
              TrivialThen_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              PortCountsCoverageAfterThen_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0))) & (MR_Integer) 1);
              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, ElseGoal0_63, &ElseGoal_70, PortCountsCoverageAfterCond_66, &Var_86);
              TrivialElse_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              PortCountsCoverageAfterElse_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))) & (MR_Integer) 1);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Vars_60));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (CondGoal_64));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 3) = ((MR_Box) (ThenGoal_67));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 4) = ((MR_Box) (ElseGoal_70));
              }
              ll_backend__coverage_profiling__goal_trivial_and_3_p_0(TrivialCond_65, TrivialThen_68, &TrivialCondThen_73);
              ll_backend__coverage_profiling__goal_trivial_and_3_p_0(TrivialCondThen_73, TrivialElse_71, &Trivial0_19);
              ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(PortCountsCoverageAfterThen_69, PortCountsCoverageAfterElse_72, &PortCountsCoverageAfterDirect_20);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    Var_147 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    Var_146 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    switch (Var_147) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PortCountsCoverageAfter_75 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__has_port_counts_after_4_p_0(Goal0_7, PortCountsCoverageAfterDirect_20, PortCountsCoverageAfterBefore_9, &PortCountsCoverageAfter_75);
        break;
    }
    switch (Var_146) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Trivial_76 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Trivial_76 = Trivial0_19;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (Trivial_76) << 1)) | (MR_Unsigned) (PortCountsCoverageAfter_75)));
    }
    MaybeDPInfo0_77 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo0_12);
    if ((MaybeDPInfo0_77 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "goal_dp_info not present");
        return;
      }
    }
    else
    {
      MR_Word IsProfilingInstrumentation_78;
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDPInfo0_77, (MR_Integer) 0))));
      MR_Word Var_98;

      IsProfilingInstrumentation_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_97, (MR_Integer) 0))) & (MR_Integer) 1);
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (*Info_10));
      }
      {
        DPInfo_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DPInfo_80, 0) = (MR_Box) ((MR_Unsigned) (IsProfilingInstrumentation_78));
        MR_hl_field(MR_mktag(0), DPInfo_80, 1) = ((MR_Box) (Var_98));
      }
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (DPInfo_80));
    }
    hlds__hlds_goal__goal_info_set_maybe_dp_info_3_p_0(Var_99, GoalInfo0_12, &GoalInfo_81);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_81));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
  MR_Word Goal_5,
  MR_Word PCDirect_6,
  MR_Word PCBefore_7,
  MR_Word * PC_8)
{
  {
    MR_bool succeeded;

    switch (PCDirect_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Detism_9;
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

          Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_10);
          switch (Detism_9) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            *PC_8 = PCBefore_7;
          else
            *PC_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        *PC_8 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * PortCountsCoverageAfter_6)
{
  {
    MR_bool succeeded = (A_4 == (MR_Integer) 0);

    if (succeeded)
      succeeded = (B_5 == (MR_Integer) 0);
    if (succeeded)
      *PortCountsCoverageAfter_6 = (MR_Integer) 0;
    else
      *PortCountsCoverageAfter_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Trivial_6)
{
  {
    MR_bool succeeded = (A_4 == (MR_Integer) 0);

    if (succeeded)
      succeeded = (B_5 == (MR_Integer) 0);
    if (succeeded)
      *Trivial_6 = (MR_Integer) 0;
    else
      *Trivial_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
  MR_Word DPInfo_10,
  MR_Word CanFail_11,
  MR_Word Cases0_12,
  MR_Word * Cases_13,
  MR_Word CoverageBeforeSwitchKnown_14,
  MR_Word * CoverageAfterSwitchKnown_15,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word * AddedImpurity_17)
{
  {
    MR_Word CoverageAfterSwitchKnown0_18;

    switch (CanFail_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CoverageAfterSwitchKnown0_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        CoverageAfterSwitchKnown0_18 = (MR_Integer) 0;
        break;
    }
    ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(DPInfo_10, CanFail_11, Cases0_12, Cases_13, CoverageBeforeSwitchKnown_14, (MR_Integer) 0, CoverageAfterSwitchKnown0_18, CoverageAfterSwitchKnown_15, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, AddedImpurity_17);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
  MR_Word DPInfo_9,
  MR_Word CoverageBeforeKnown_10,
  MR_Word * NextCoverageBeforeKnown_11,
  MR_Word Disjuncts0_12,
  MR_Word * Disjuncts_13,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word * AddedImpurity_15)
{
  {
    MR_bool succeeded;
    MR_Word FirstDisjunct0_17;
    MR_Word Var_23;
    MR_Word SecondDisjunct_18;
    MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DPInfo_9, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    succeeded = (Var_22 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Disjuncts0_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstDisjunct0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_12, (MR_Integer) 0))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_12, (MR_Integer) 1))));
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SecondDisjunct_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
          succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondDisjunct_18, (MR_Integer) 1))));
            Var_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_26);
            succeeded = (Var_25 == (MR_Integer) 7);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word FirstDisjunct_19;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(FirstDisjunct0_17, &FirstDisjunct_19, CoverageBeforeKnown_10, NextCoverageBeforeKnown_11, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, AddedImpurity_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Disjuncts_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstDisjunct_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
      }
    }
    else
    {
      ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_9, CoverageBeforeKnown_10, (MR_Integer) 0, NextCoverageBeforeKnown_11, Disjuncts0_12, Disjuncts_13, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, AddedImpurity_15);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
  MR_Word DPInfo_12,
  MR_Word ITEExistVars_13,
  MR_Word Cond0_14,
  MR_Word Then0_15,
  MR_Word Else0_16,
  MR_Word * GoalExpr_17,
  MR_Word CoverageBeforeITEKnown_18,
  MR_Word * NextCoverageBeforeKnown_19,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56,
  MR_Word * AddedImpurity_21)
{
  {
    MR_bool succeeded;
    MR_Word Cond_22;
    MR_Word AddedImpurityCond_24;
    MR_Word CoverageKnownBeforeThen0_25;
    MR_Word CPOptions_27;
    MR_Word CPOBranchIf_28;
    MR_Word IsMDProfInst_29;
    MR_Word NextCoverageKnownThen_44;
    MR_Word NextCoverageKnownElse_47;
    MR_Word Then_50;
    MR_Word AddedImpurityThen_51;
    MR_Word Else_53;
    MR_Word AddedImpurityElse_54;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word Var_71;

    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Cond0_14, &Cond_22, CoverageBeforeITEKnown_18, &CoverageKnownBeforeThen0_25, STATE_VARIABLE_Info_0_55, &STATE_VARIABLE_Info_57_57, &AddedImpurityCond_24);
    CPOptions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 6))));
    CPOBranchIf_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_27, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    IsMDProfInst_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DPInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (CPOBranchIf_28 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (IsMDProfInst_29 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word ContainingGoalMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 7))));
      MR_Word ElseId_36;
      MR_Word ElsePath_37;
      MR_Word CondDetism_38;
      MR_Word CondSolns_40;
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_16, (MR_Integer) 1))));
      MR_Word Var_62;
      MR_Word Var_39;

      ElseId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_61);
      ElsePath_37 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ElseId_36);
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_22, (MR_Integer) 1))));
      CondDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_62);
      parse_tree__prog_data__determinism_components_3_p_0(CondDetism_38, &Var_39, &CondSolns_40);
      switch (CondSolns_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            MR_Word Else1_46;
            MR_Word CPInfoElse_52;
            MR_Word STATE_VARIABLE_Info_69_69;

            {
              CPInfoElse_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CPInfoElse_52, 0) = ((MR_Box) (ElsePath_37));
              MR_hl_field(MR_mktag(0), CPInfoElse_52, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
            }
            switch (CoverageKnownBeforeThen0_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_Info_67_67;
                  MR_Word AddedImpurityElseGoal_48;

                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_67, &AddedImpurityThen_51);
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_46, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69, &AddedImpurityElseGoal_48);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ThenId_32;
                  MR_Word ThenPath_33;
                  MR_Word CPInfoThen_49;
                  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_15, (MR_Integer) 1))));
                  MR_Word Then1_114;
                  MR_Word STATE_VARIABLE_Info_67_116;
                  MR_Word STATE_VARIABLE_Info_68_117;
                  MR_Word AddedImpurityThenGoal_112;
                  MR_Word AddedImpurityElseGoal_118;

                  ThenId_32 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_58);
                  ThenPath_33 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ThenId_32);
                  {
                    CPInfoThen_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CPInfoThen_49, 0) = ((MR_Box) (ThenPath_33));
                    MR_hl_field(MR_mktag(0), CPInfoThen_49, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                  }
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then1_114, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_116, &AddedImpurityThenGoal_112);
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_46, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_116, &STATE_VARIABLE_Info_68_117, &AddedImpurityElseGoal_118);
                  ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoThen_49, Then1_114, &Then_50, STATE_VARIABLE_Info_68_117, &STATE_VARIABLE_Info_69_69);
                  AddedImpurityThen_51 = (MR_Integer) 1;
                }
                break;
            }
            ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoElse_52, Else1_46, &Else_53, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_56);
            AddedImpurityElse_54 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            succeeded = (CoverageBeforeITEKnown_18 == (MR_Integer) 0);
            if (succeeded)
            {
              switch (CoverageKnownBeforeThen0_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Info_67_120;

                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_120, &AddedImpurityThen_51);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else_53, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_120, STATE_VARIABLE_Info_56, &AddedImpurityElse_54);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ThenId_123;
                    MR_Word ThenPath_124;
                    MR_Word CPInfoThen_125;
                    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_15, (MR_Integer) 1))));
                    MR_Word Then1_130;
                    MR_Word STATE_VARIABLE_Info_67_131;
                    MR_Word STATE_VARIABLE_Info_68_132;
                    MR_Word AddedImpurityThenGoal_122;

                    ThenId_123 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_126);
                    ThenPath_124 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ThenId_123);
                    {
                      CPInfoThen_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), CPInfoThen_125, 0) = ((MR_Box) (ThenPath_124));
                      MR_hl_field(MR_mktag(0), CPInfoThen_125, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                    }
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then1_130, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_131, &AddedImpurityThenGoal_122);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else_53, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_131, &STATE_VARIABLE_Info_68_132, &AddedImpurityElse_54);
                    ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoThen_125, Then1_130, &Then_50, STATE_VARIABLE_Info_68_132, STATE_VARIABLE_Info_56);
                    AddedImpurityThen_51 = (MR_Integer) 1;
                  }
                  break;
              }
            }
            else
            {
              MR_Word CPInfoElse_144;
              MR_Word Else1_206;
              MR_Word STATE_VARIABLE_Info_69_208;

              {
                CPInfoElse_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CPInfoElse_144, 0) = ((MR_Box) (ElsePath_37));
                MR_hl_field(MR_mktag(0), CPInfoElse_144, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
              }
              switch (CoverageKnownBeforeThen0_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Info_67_165;
                    MR_Word AddedImpurityElseGoal_164;

                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_165, &AddedImpurityThen_51);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_206, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_165, &STATE_VARIABLE_Info_69_208, &AddedImpurityElseGoal_164);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ThenId_172;
                    MR_Word ThenPath_173;
                    MR_Word CPInfoThen_174;
                    MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_15, (MR_Integer) 1))));
                    MR_Word Then1_177;
                    MR_Word STATE_VARIABLE_Info_67_178;
                    MR_Word STATE_VARIABLE_Info_68_179;
                    MR_Word AddedImpurityThenGoal_168;
                    MR_Word AddedImpurityElseGoal_169;

                    ThenId_172 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_175);
                    ThenPath_173 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ThenId_172);
                    {
                      CPInfoThen_174 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), CPInfoThen_174, 0) = ((MR_Box) (ThenPath_173));
                      MR_hl_field(MR_mktag(0), CPInfoThen_174, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                    }
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then1_177, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_178, &AddedImpurityThenGoal_168);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_206, (MR_Integer) 0, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_178, &STATE_VARIABLE_Info_68_179, &AddedImpurityElseGoal_169);
                    ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoThen_174, Then1_177, &Then_50, STATE_VARIABLE_Info_68_179, &STATE_VARIABLE_Info_69_208);
                    AddedImpurityThen_51 = (MR_Integer) 1;
                  }
                  break;
              }
              ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoElse_144, Else1_206, &Else_53, STATE_VARIABLE_Info_69_208, STATE_VARIABLE_Info_56);
              AddedImpurityElse_54 = (MR_Integer) 1;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_67_108;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, CoverageKnownBeforeThen0_25, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_67_108, &AddedImpurityThen_51);
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else_53, (MR_Integer) 1, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_67_108, STATE_VARIABLE_Info_56, &AddedImpurityElse_54);
    }
    Var_71 = mercury__bool__or_2_f_0(AddedImpurityThen_51, AddedImpurityElse_54);
    *AddedImpurity_21 = mercury__bool__or_2_f_0(AddedImpurityCond_24, Var_71);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_17 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ITEExistVars_13));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_22));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_50));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_53));
    }
    switch (NextCoverageKnownThen_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (NextCoverageKnownElse_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *NextCoverageBeforeKnown_19 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *NextCoverageBeforeKnown_19 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        *NextCoverageBeforeKnown_19 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
  MR_Word DPInfo_1,
  MR_Word SwitchCanFail_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word CoverageBeforeSwitchKnown_5,
  MR_Word CoverageBeforeEveryCaseKnown_6,
  MR_Word STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
  MR_Word * STATE_VARIABLE_CoverageAfterSwitchKnown_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__11_11 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_CoverageAfterSwitchKnown_8 = STATE_VARIABLE_CoverageAfterSwitchKnown_0_7;
    }
    else
    {
      MR_Word Case0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Case_26;
      MR_Word Cases_27;
      MR_Word MainConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 0))));
      MR_Word OtherConsIds_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 1))));
      MR_Word Goal0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 2))));
      MR_Word CoverageBeforeCaseKnown0_36;
      MR_Word CPOptions_39;
      MR_Word CPOBranchSwitch_40;
      MR_Word IsMDProfInst_41;
      MR_Word CoverageBeforeCaseKnown_44;
      MR_Word CoverageAfterCaseKnown_46;
      MR_Word Goal_52;
      MR_Word AddedImpurityHead_53;
      MR_Word NextCoverageBeforeEveryCaseKnown_54;
      MR_Word AddedImpurityTail_55;
      MR_Word STATE_VARIABLE_CoverageAfterSwitchKnown_61_61;
      MR_Word STATE_VARIABLE_Info_64_64;

      if ((Cases0_25 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (SwitchCanFail_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            switch (CoverageBeforeSwitchKnown_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (CoverageBeforeEveryCaseKnown_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    CoverageBeforeCaseKnown0_36 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
                break;
            }
            break;
        }
      else
        CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
      CPOptions_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
      CPOBranchSwitch_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_39, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      IsMDProfInst_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DPInfo_1, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (CPOBranchSwitch_40 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (CoverageBeforeCaseKnown0_36 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (IsMDProfInst_41 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Word Goal1_45;
        MR_Word CaseId_48;
        MR_Word ContainingGoalMap_49;
        MR_Word CasePath_50;
        MR_Word CoveragePoint_51;
        MR_Word STATE_VARIABLE_Info_60_60;
        MR_Word Var_62;
        MR_Word AddedImpurityHead0_47;

        CoverageBeforeCaseKnown_44 = (MR_Integer) 0;
        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Goal0_35, &Goal1_45, CoverageBeforeCaseKnown_44, &CoverageAfterCaseKnown_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_60_60, &AddedImpurityHead0_47);
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_35, (MR_Integer) 1))));
        CaseId_48 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_62);
        ContainingGoalMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 7))));
        CasePath_50 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_49, CaseId_48);
        {
          CoveragePoint_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CoveragePoint_51, 0) = ((MR_Box) (CasePath_50));
          MR_hl_field(MR_mktag(0), CoveragePoint_51, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
        }
        ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_39, CoveragePoint_51, Goal1_45, &Goal_52, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_64_64);
        AddedImpurityHead_53 = (MR_Integer) 1;
      }
      else
      {
        CoverageBeforeCaseKnown_44 = CoverageBeforeCaseKnown0_36;
        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Goal0_35, &Goal_52, CoverageBeforeCaseKnown_44, &CoverageAfterCaseKnown_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_64_64, &AddedImpurityHead_53);
      }
      switch (CoverageAfterCaseKnown_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (STATE_VARIABLE_CoverageAfterSwitchKnown_0_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
          break;
      }
      switch (CoverageBeforeEveryCaseKnown_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (CoverageBeforeCaseKnown_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
          break;
      }
      ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(DPInfo_1, SwitchCanFail_2, Cases0_25, &Cases_27, CoverageBeforeSwitchKnown_5, NextCoverageBeforeEveryCaseKnown_54, STATE_VARIABLE_CoverageAfterSwitchKnown_61_61, STATE_VARIABLE_CoverageAfterSwitchKnown_8, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_10, &AddedImpurityTail_55);
      {
        Case_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_26, 0) = ((MR_Box) (MainConsId_33));
        MR_hl_field(MR_mktag(0), Case_26, 1) = ((MR_Box) (OtherConsIds_34));
        MR_hl_field(MR_mktag(0), Case_26, 2) = ((MR_Box) (Goal_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_27));
      }
      mercury__bool__or_3_p_0(AddedImpurityHead_53, AddedImpurityTail_55, HeadVar__11_11);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
  MR_Word DPInfo_1,
  MR_Word CoverageBeforeKnown0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word * HeadVar__9_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word HeadDisjunct0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailDisjuncts0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadDisjunct_23;
      MR_Word TailDisjuncts_24;
      MR_Word CPOptions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6))));
      MR_Word CPOBranchDisj_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_27, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word IsMDProfInst_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DPInfo_1, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (CPOBranchDisj_28 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (CoverageBeforeKnown0_2 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (IsMDProfInst_29 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Word HeadDisjunct1_33;
        MR_Word CoverageAfterDisjKnown_34;
        MR_Word DisjId_37;
        MR_Word ContainingGoalMap_38;
        MR_Word DisjPath_39;
        MR_Word HeadCoveragePoint_40;
        MR_Word STATE_VARIABLE_Info_45_45;
        MR_Word STATE_VARIABLE_CoverageAfterKnown_46_46;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word Var_50;
        MR_Word AddedImpurityHead_35;
        MR_Word AddedImpurityTail_36;

        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadDisjunct0_21, &HeadDisjunct1_33, (MR_Integer) 0, &CoverageAfterDisjKnown_34, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_45_45, &AddedImpurityHead_35);
        switch (HeadVar__3_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (CoverageAfterDisjKnown_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
            break;
        }
        ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_1, (MR_Integer) 1, STATE_VARIABLE_CoverageAfterKnown_46_46, HeadVar__4_4, TailDisjuncts0_22, &TailDisjuncts_24, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_49_49, &AddedImpurityTail_36);
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadDisjunct0_21, (MR_Integer) 1))));
        DisjId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_50);
        ContainingGoalMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 7))));
        DisjPath_39 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_38, DisjId_37);
        {
          HeadCoveragePoint_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadCoveragePoint_40, 0) = ((MR_Box) (DisjPath_39));
          MR_hl_field(MR_mktag(0), HeadCoveragePoint_40, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
        }
        ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, HeadCoveragePoint_40, HeadDisjunct1_33, &HeadDisjunct_23, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_8);
        *HeadVar__9_9 = (MR_Integer) 1;
      }
      else
      {
        MR_Word CoverageAfterDisjKnown_81;
        MR_Word AddedImpurityHead_82;
        MR_Word AddedImpurityTail_83;
        MR_Word STATE_VARIABLE_Info_45_84;
        MR_Word STATE_VARIABLE_CoverageAfterKnown_46_85;

        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadDisjunct0_21, &HeadDisjunct_23, CoverageBeforeKnown0_2, &CoverageAfterDisjKnown_81, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_45_84, &AddedImpurityHead_82);
        switch (HeadVar__3_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (CoverageAfterDisjKnown_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
            break;
        }
        ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_1, (MR_Integer) 1, STATE_VARIABLE_CoverageAfterKnown_46_85, HeadVar__4_4, TailDisjuncts0_22, &TailDisjuncts_24, STATE_VARIABLE_Info_45_84, STATE_VARIABLE_Info_8, &AddedImpurityTail_83);
        *HeadVar__9_9 = mercury__bool__or_2_f_0(AddedImpurityHead_82, AddedImpurityTail_83);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadDisjunct_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDisjuncts_24));
      }
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
  MR_Word ConjType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *HeadVar__5_5 = HeadVar__4_4;
    }
    else
    {
      MR_Word HeadGoal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailGoals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadGoal_24;
      MR_Word CoverageBeforeTailKnown_25;
      MR_Word AddedImpurityHead_26;
      MR_Word TailGoals_27;
      MR_Word AddedImpurityTail_28;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word HeadConjGoals_29;
      MR_Word Var_35;
      MR_Word Var_36;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadGoal0_17, &HeadGoal_24, HeadVar__4_4, &CoverageBeforeTailKnown_25, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_33_33, &AddedImpurityHead_26);
      ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ConjType_1, TailGoals0_18, &TailGoals_27, CoverageBeforeTailKnown_25, HeadVar__5_5, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_7, &AddedImpurityTail_28);
      succeeded = (ConjType_1 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_24, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_35, (MR_Integer) 1))) & (MR_Integer) 1);
          HeadConjGoals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_35, (MR_Integer) 2))));
          succeeded = (Var_36 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadConjGoals_29, TailGoals_27);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_27));
        }
      mercury__bool__or_3_p_0(AddedImpurityHead_26, AddedImpurityTail_28, HeadVar__8_8);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word CoverageBeforeKnown_10,
  MR_Word * NextCoverageBeforeKnown_11,
  MR_Word STATE_VARIABLE_Info_0_90,
  MR_Word * STATE_VARIABLE_Info_91,
  MR_Word * AddedImpurity_13)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
    MR_Word Detism_16;
    MR_Word GoalId_17;
    MR_Word CPOptions_18;
    MR_Word DPInfo_19;
    MR_Word IsMDProfInst_20;
    MR_Word NextCoverageBeforeKnown0_36;
    MR_Word AddedImpurityInner_37;
    MR_Word GoalExpr1_38;
    MR_Word GoalInfo1_83;
    MR_Word Goal1_84;
    MR_Word STATE_VARIABLE_Info_105_105;

    Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_15);
    GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_15);
    CPOptions_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_90, (MR_Integer) 6))));
    DPInfo_19 = ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(GoalInfo0_15);
    IsMDProfInst_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DPInfo_19, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (IsMDProfInst_20 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CoverageBeforeKnown_10 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer GoalNum_22 = (MR_Integer) (GoalId_17);
      MR_String UnknownMsg_23;
      MR_String Var_137;
      MR_String Var_144;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_3[3]), GoalNum_22, &Var_137);
      Var_144 = mercury__string__f_43_43_2_f_0(Var_137, (MR_String) "\n");
      UnknownMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "Coverage information is unknown for goal_id ", Var_144);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", UnknownMsg_23);
        return;
      }
    }
    switch (MR_tag((MR_Word) GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_68 = (MR_Word) ((MR_Word) (GoalExpr0_14));
          MR_Word NegGoal_69;
          MR_Word Var_70;

          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(NegGoal0_68, &NegGoal_69, CoverageBeforeKnown_10, &Var_70, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
          NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
          GoalExpr1_38 = (MR_Word) ((MR_Word) (NegGoal_69));
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
          AddedImpurityInner_37 = (MR_Integer) 0;
          GoalExpr1_38 = GoalExpr0_14;
          STATE_VARIABLE_Info_105_105 = STATE_VARIABLE_Info_0_90;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinState_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (BuiltinState_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
              break;
            case (MR_Integer) 1:
              NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
              break;
          }
          AddedImpurityInner_37 = (MR_Integer) 0;
          GoalExpr1_38 = GoalExpr0_14;
          STATE_VARIABLE_Info_105_105 = STATE_VARIABLE_Info_0_90;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) GenericCall_46)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
                  break;
              }
              AddedImpurityInner_37 = (MR_Integer) 0;
              GoalExpr1_38 = GoalExpr0_14;
              STATE_VARIABLE_Info_105_105 = STATE_VARIABLE_Info_0_90;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
              AddedImpurityInner_37 = (MR_Integer) 0;
              GoalExpr1_38 = GoalExpr0_14;
              STATE_VARIABLE_Info_105_105 = STATE_VARIABLE_Info_0_90;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Word Goals_63;

              ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ConjType_61, Goals0_62, &Goals_63, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
              {
                GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_61));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 2) = ((MR_Box) (Goals_63));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word Goals_111;

              ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(DPInfo_19, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, Goals0_110, &Goals_111, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
              {
                GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 1) = ((MR_Box) (Goals_111));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word SwitchCanFail_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Cases_67;

              ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(DPInfo_19, SwitchCanFail_65, Cases0_66, &Cases_67, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
              {
                GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 1) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_65));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 3) = ((MR_Box) (Cases_67));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word ScopeGoal0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Word ScopeGoal_73;
              MR_Word CoverageAfterScopedGoalKnown_74;
              MR_Word ScopedGoalDetism_75;
              MR_Word Var_101;

              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ScopeGoal0_72, &ScopeGoal_73, CoverageBeforeKnown_10, &CoverageAfterScopedGoalKnown_74, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
              Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScopeGoal0_72, (MR_Integer) 1))));
              ScopedGoalDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_101);
              succeeded = (ScopedGoalDetism_75 == Detism_16);
              if (succeeded)
                NextCoverageBeforeKnown0_36 = CoverageAfterScopedGoalKnown_74;
              else
                NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
              {
                GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 1) = ((MR_Box) (Reason_71));
                MR_hl_field(MR_mktag(3), GoalExpr1_38, 2) = ((MR_Box) (ScopeGoal_73));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ITEExistVars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Word Then_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Else_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 4))));

              ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(DPInfo_19, ITEExistVars_76, Cond_77, Then_78, Else_79, &GoalExpr1_38, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_105_105, &AddedImpurityInner_37);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    hlds__hlds_goal__add_impurity_if_needed_3_p_0(AddedImpurityInner_37, GoalInfo0_15, &GoalInfo1_83);
    {
      Goal1_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_84, 0) = ((MR_Box) (GoalExpr1_38));
      MR_hl_field(MR_mktag(0), Goal1_84, 1) = ((MR_Box) (GoalInfo1_83));
    }
    succeeded = (IsMDProfInst_20 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (NextCoverageBeforeKnown0_36 == (MR_Integer) 0);
    if (succeeded)
    {
      *NextCoverageBeforeKnown_11 = NextCoverageBeforeKnown0_36;
      *Goal_9 = Goal1_84;
      *AddedImpurity_13 = AddedImpurityInner_37;
      *STATE_VARIABLE_Info_91 = STATE_VARIABLE_Info_105_105;
    }
    else
    {
      MR_Word CoverageAfterGoals_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_18, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);

      switch (CoverageAfterGoals_82) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *NextCoverageBeforeKnown_11 = NextCoverageBeforeKnown0_36;
            *Goal_9 = Goal1_84;
            *AddedImpurity_13 = AddedImpurityInner_37;
            *STATE_VARIABLE_Info_91 = STATE_VARIABLE_Info_105_105;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ContainingGoalMap_86;
            MR_Word RevGoalPath_87;
            MR_Word CPInfo_88;
            MR_Word CPGoals_89;
            MR_Word Var_108;

            *NextCoverageBeforeKnown_11 = (MR_Integer) 0;
            ContainingGoalMap_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 7))));
            RevGoalPath_87 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_86, GoalId_17);
            {
              CPInfo_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CPInfo_88, 0) = ((MR_Box) (RevGoalPath_87));
              MR_hl_field(MR_mktag(0), CPInfo_88, 1) = ((MR_Box) (((int) MR_cp_type_coverage_after)));
            }
            ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_18, CPInfo_88, &CPGoals_89, STATE_VARIABLE_Info_105_105, STATE_VARIABLE_Info_91);
            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Goal1_84));
              MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (CPGoals_89));
            }
            hlds__goal_util__create_conj_from_list_3_p_0(Var_108, (MR_Integer) 0, Goal_9);
            *AddedImpurity_13 = (MR_Integer) 1;
          }
          break;
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
  MR_Word GoalInfo_3)
{
  {
    MR_Word DPInfo_4;
    MR_Word MaybeDPInfo_5;

    MaybeDPInfo_5 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_3);
    if ((MaybeDPInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.coverage_profiling.goal_info_get_dp_info\'/1", (MR_String) "MaybeDPInfo = no");
    }
    else
      DPInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDPInfo_5, (MR_Integer) 0))));
    return DPInfo_4;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
  MR_Word CPOptions_7,
  MR_Word CPInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word CPGoals_11;
    MR_Word Goals_14;
    MR_Word InnerGoals_12;
    MR_Word Var_20;
    MR_Word Var_21;

    ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_7, CPInfo_8, &CPGoals_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_15, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
      InnerGoals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2))));
      succeeded = (Var_21 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_11, InnerGoals_12);
    }
    else
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (STATE_VARIABLE_Goal_0_15));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_11, Var_22);
    }
    hlds__goal_util__create_conj_from_list_3_p_0(Goals_14, (MR_Integer) 0, STATE_VARIABLE_Goal_16);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
  MR_Word CPOptions_6,
  MR_Word CoveragePointInfo_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_CoverageInfo_0_39,
  MR_Word * STATE_VARIABLE_CoverageInfo_40)
{
  {
    MR_Word CoveragePointInfos0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 0))));
    MR_Word CPIndexCounter0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 1))));
    MR_Integer CPIndex_12;
    MR_Word CPIndexCounter_13;
    MR_Word CoveragePointInfos_14;
    MR_Word CPIndexVar_16;
    MR_Word GoalUnifyIndex_17;
    MR_Word ProcLayoutVar_18;
    MR_Word ProcStaticConsId_19;
    MR_Word GoalUnifyProcLayout_20;
    MR_Word UseCalls_21;
    MR_Word ModuleInfo_22;
    MR_Word DataType_24;
    MR_String PredName_26;
    MR_Word ArgVars_27;
    MR_Word ForeignArgVars_28;
    MR_Integer PredArity_29;
    MR_Word CallGoal_38;
    MR_Word STATE_VARIABLE_CoverageInfo_42_42;
    MR_Word STATE_VARIABLE_VarInfo_43_43;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_VarInfo_46_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_VarInfo_50_50;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;

    mercury__counter__allocate_3_p_0(&CPIndex_12, CPIndexCounter0_11, &CPIndexCounter_13);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPIndex_12, ((MR_Box) (CoveragePointInfo_7)), CoveragePointInfos0_10, &CoveragePointInfos_14);
    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 2))));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 3))));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 4))));
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 5))));
    Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 6))));
    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 7))));
    STATE_VARIABLE_VarInfo_43_43 = Var_112;
    {
      STATE_VARIABLE_CoverageInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 0) = ((MR_Box) (CoveragePointInfos_14));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 1) = ((MR_Box) (CPIndexCounter_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 2) = ((MR_Box) (STATE_VARIABLE_VarInfo_43_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 3) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 4) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 5) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 6) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, 7) = ((MR_Box) (Var_117));
    }
    Var_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
    ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "CPIndex", Var_45, &CPIndexVar_16, STATE_VARIABLE_VarInfo_43_43, &STATE_VARIABLE_VarInfo_46_46);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (CPIndex_12));
    }
    ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_47, CPIndexVar_16, &GoalUnifyIndex_17);
    Var_49 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcLayout", Var_49, &ProcLayoutVar_18, STATE_VARIABLE_VarInfo_46_46, &STATE_VARIABLE_VarInfo_50_50);
    ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(STATE_VARIABLE_CoverageInfo_42_42, &ProcStaticConsId_19);
    ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ProcStaticConsId_19, ProcLayoutVar_18, &GoalUnifyProcLayout_20);
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 0))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 1))));
    ModuleInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 3))));
    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 4))));
    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 5))));
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 6))));
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CoverageInfo_40 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_VarInfo_50_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleInfo_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_140));
    }
    DataType_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_6, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    UseCalls_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CPOptions_6, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    switch (DataType_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_77;
          MR_Word Var_84;

          PredName_26 = (MR_String) "increment_dynamic_coverage_point_count";
          {
            ArgVars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_27, 0) = ((MR_Box) (CPIndexVar_16));
            MR_hl_field(MR_mktag(1), ArgVars_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_84 = parse_tree__builtin_lib_types__int_type_0_f_0();
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_goal__make_foreign_args_4_p_0(ArgVars_27, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[4])), Var_77, &ForeignArgVars_28);
          PredArity_29 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;

          PredName_26 = (MR_String) "increment_static_coverage_point_count";
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CPIndexVar_16));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgVars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_27, 0) = ((MR_Box) (ProcLayoutVar_18));
            MR_hl_field(MR_mktag(1), ArgVars_27, 1) = ((MR_Box) (Var_55));
          }
          Var_71 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          Var_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_72));
          }
          hlds__hlds_goal__make_foreign_args_4_p_0(ArgVars_27, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[7])), Var_58, &ForeignArgVars_28);
          PredArity_29 = (MR_Integer) 2;
        }
        break;
    }
    switch (UseCalls_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredId_30;
          MR_Integer ProcId_31;
          MR_Word ForeignCallAttrs_32;
          MR_Word ForeignProc_33;
          MR_Word CallGoalExpr_34;
          MR_Word NonLocals_35;
          MR_Word InstMapDelta_36;
          MR_Word CallGoalInfo_37;

          ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ModuleInfo_22, PredName_26, PredArity_29, &PredId_30, &ProcId_31);
          ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(DataType_24, &ForeignCallAttrs_32, &ForeignProc_33);
          {
            CallGoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 1) = ((MR_Box) (ForeignCallAttrs_32));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 2) = ((MR_Box) (PredId_30));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 3) = ((MR_Box) (ProcId_31));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 4) = ((MR_Box) (ForeignArgVars_28));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), CallGoalExpr_34, 7) = ((MR_Box) (ForeignProc_33));
          }
          NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_27);
          InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0((MR_Word) ((MR_Unsigned) 0U));
          CallGoalInfo_37 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_35, InstMapDelta_36, (MR_Integer) 0);
          {
            CallGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallGoal_38, 0) = ((MR_Box) (CallGoalExpr_34));
            MR_hl_field(MR_mktag(0), CallGoal_38, 1) = ((MR_Box) (CallGoalInfo_37));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_22, PredName_26, PredArity_29, ArgVars_27, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[2])), (MR_Integer) 0, &CallGoal_38);
        }
        break;
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (CallGoal_38));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (GoalUnifyProcLayout_20));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalUnifyIndex_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_93));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
  MR_Word CoverageDataType_4,
  MR_Word * ForeignProcAttrs_5,
  MR_Word * ForeignProcImpl_6)
{
  {
    MR_String Code_7;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_8_8;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_11_11;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_13_13;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_15_15;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_17_17;

    STATE_VARIABLE_ForeignProcAttrs_8_8 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_8_8, &STATE_VARIABLE_ForeignProcAttrs_11_11);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_11_11, &STATE_VARIABLE_ForeignProcAttrs_13_13);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_ForeignProcAttrs_13_13, &STATE_VARIABLE_ForeignProcAttrs_15_15);
    parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_15_15, &STATE_VARIABLE_ForeignProcAttrs_17_17);
    parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_17_17, ForeignProcAttrs_5);
    switch (CoverageDataType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC\n    const MR_CallSiteDynamic *csd;\n    const MR_ProcDynamic *pd;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_P" "ROFILING_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        print" "f(\", CallSiteDynamic: 0x%x, CPIndex: %d\\n\",\n            MR_current_call_site_dynamic, CPIndex);\n    }\n  #endif\n\n    csd = MR_current_call_site_dynamic;\n\n    MR_" "deep_assert(NULL, NULL, NULL, csd != NULL);\n    pd = csd->MR_csd_callee_ptr;\n\n    MR_deep_assert(csd, NULL, NULL, pd != NULL);\n\n#ifdef MR_DEEP_CHECKS\n    /*\n   " " ** Check that CPIndex is within bounds.\n    */\n    {\n        const MR_ProcLayout *pl;\n        const MR_ProcStatic *ps;\n\n        pl = pd->MR_pd_proc_layout;\n   " "     MR_deep_assert(csd, NULL, NULL, pl != NULL);\n        ps = pl->MR_sle_proc_static;\n        MR_deep_assert(csd, pl, NULL, ps != NULL);\n        MR_deep_assert" "(csd, pl, ps, CPIndex < ps->MR_ps_num_coverage_points);\n    }\n#endif\n\n    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);\n\n    pd->MR_pd_cov" "erage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_fatal_error(\n        \"increment_dynamic_coverage_point_count:  \"\n            \"dynamic dee" "p profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */\n";
        break;
      case (MR_Integer) 0:
        Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n    const MR_ProcLayout *pl;\n    MR_ProcStatic       *ps;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_PROFILING" "_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        printf(\", Pro" "cLayout: 0x%x, CPIndex: %d\\n\", ProcLayout, CPIndex);\n    }\n  #endif\n\n    pl = (const MR_ProcLayout *) ProcLayout;\n\n    MR_deep_assert(NULL, NULL, NULL, pl != NU" "LL);\n    ps = pl->MR_sle_proc_static;\n    MR_deep_assert(NULL, pl, NULL, ps != NULL);\n\n    MR_deep_assert(NULL, pl, ps, CPIndex < ps->MR_ps_num_coverage_points)" ";\n    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);\n\n    ps->MR_ps_coverage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_" "fatal_error(\n        \"increment_static_coverage_point_count:  \"\n            \"static coverage profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_STATI" "C */\n";
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ForeignProcImpl_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Code_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
  MR_Word CoverageInfo_3,
  MR_Word * ProcStaticConsId_4)
{
  {
    MR_bool succeeded;
    MR_Word PredId_5;
    MR_Integer ProcId_6;
    MR_Word ShroudedPredProcId_7;
    MR_Word Var_8;
    MR_Word MaybeRecInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoverageInfo_3, (MR_Integer) 5))));
    MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoverageInfo_3, (MR_Integer) 4))));
    MR_Word OuterPredProcId_15;
    MR_Word RecInfo_14;
    MR_Word Var_16;

    succeeded = (MaybeRecInfo_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RecInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecInfo_12, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo_14, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
        OuterPredProcId_15 = (MR_Word) ((MR_Word) (Var_16));
    }
    if (succeeded)
    {
      PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterPredProcId_15, (MR_Integer) 0))));
      ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OuterPredProcId_15, (MR_Integer) 1))));
    }
    else
    {
      PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0))));
      ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1))));
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (ProcId_6));
    }
    ShroudedPredProcId_7 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ProcStaticConsId_4 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShroudedPredProcId_7));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
  MR_Word Detism_4,
  MR_Word STATE_VARIABLE_CoverageKnown_0_6,
  MR_Word * STATE_VARIABLE_CoverageKnown_7)
{
  switch (Detism_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      *STATE_VARIABLE_CoverageKnown_7 = STATE_VARIABLE_CoverageKnown_0_6;
      break;
    case (MR_Integer) 5:
    case (MR_Integer) 6:
    case (MR_Integer) 7:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
      *STATE_VARIABLE_CoverageKnown_7 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_CoverageKnown_7 = STATE_VARIABLE_CoverageKnown_0_6;
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__coverage_profiling__init(void)
{
}

void mercury__ll_backend__coverage_profiling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0);
}

void mercury__ll_backend__coverage_profiling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__coverage_profiling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.coverage_profiling.
