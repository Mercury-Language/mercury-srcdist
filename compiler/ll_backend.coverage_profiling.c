/*
** Automatically generated from `coverage_profiling.m'
** by the Mercury compiler,
** version rotd-2025-07-12
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.deep_profiling.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0;

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1;

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_before_known_0[2];

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[2];

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[2];

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0;

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1;

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_data_type_0[2];

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word STATE_VARIABLE_Info_0_91,
  MR_Word * STATE_VARIABLE_Info_92,
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


static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[2][3];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[9][2];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10];




static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_2[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "CPIndex")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_3[3]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "ProcLayout")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[2]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_3[4]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_2[5])))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) (((int) MR_cp_type_coverage_after))) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[3])) },
  /* row   4 */
  { ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[6])) },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10] = {
  /* row   0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
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

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_before_known_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_before_known",
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0 },
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_before_known_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0,

};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "static_coverage_data",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "dynamic_coverage_data",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_data_type_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_data_type",
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0 },
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_ordinal_ordered_coverage_data_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0,

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

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1] = { &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 };

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[1] = { &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 };

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_profiling_options",
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0 },
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0,

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
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0) }
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
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0),
  (MR_PseudoTypeInfo) (&ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
};

static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[8] = {
  (MR_String) "ci_coverage_points",
  (MR_String) "ci_cp_index_counter",
  (MR_String) "ci_var_table",
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

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1] = { &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0 };

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[1] = { &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0 };

static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "proc_coverage_info",
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0 },
  { ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0,

};

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
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

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
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
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
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

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

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

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
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

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
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

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
  MR_bool succeeded;
  MR_Word TrivialGoal_15;
  MR_Word Var_16;

  ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_8, Goal0_9, Goal_10, PortCountsCoverageAfterAcc_13, &Var_16);
  TrivialGoal_15 = ((((MR_Unsigned) ((MR_hl_field(0, Var_16, 0))) >> 1)) & (MR_Integer) 1);
  *PortCountsCoverageAfter_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_16, 0))) & (MR_Integer) 1);
  succeeded = (TrivialAcc_11 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (TrivialGoal_15 == (MR_Integer) 0);
  if (succeeded)
    *Trivial_12 = (MR_Integer) 0;
  else
    *Trivial_12 = (MR_Integer) 1;
}

void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredProcId_11,
  MR_Word ContainingGoalMap_12,
  MR_Word MaybeRecInfo_13,
  MR_Word * CoveragePoints_14,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_VarTable_0_27,
  MR_Word * STATE_VARIABLE_VarTable_28)
{
  MR_Word CoverageProfilingOptions_17;
  MR_Word CoverageInfo0_18;
  MR_Word RunFirstPass_19;
  MR_Word CoverageInfo_22;
  MR_Word CoveragePointsMap_24;
  MR_Word STATE_VARIABLE_Goal_1_29;
  MR_Word Globals_55;
  MR_Word Static_56;
  MR_Word DataType_57;
  MR_Word UseCalls_58;
  MR_Word CoverageAfterGoal_59;
  MR_Word BranchIf_60;
  MR_Word BranchSwitch_61;
  MR_Word BranchDisj_62;
  MR_Word UsePortCounts_63;
  MR_Word UseTrivial_64;
  MR_Word RunFirstPass_65;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word AssocList_79;
  MR_Word Var_21;
  MR_Word Var_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_55);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 74, &Static_56);
  switch (Static_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DataType_57 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      DataType_57 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 73, &UseCalls_58);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 75, &CoverageAfterGoal_59);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 76, &BranchIf_60);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 77, &BranchSwitch_61);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 78, &BranchDisj_62);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 79, &UsePortCounts_63);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 80, &UseTrivial_64);
  mercury__bool__or_3_p_0(UsePortCounts_63, UseTrivial_64, &RunFirstPass_65);
  {
    CoverageProfilingOptions_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CoverageProfilingOptions_17, 0) = (MR_Box) (((((MR_Unsigned) (DataType_57) << 8)) | (((((MR_Unsigned) (UseCalls_58) << 7)) | (((((MR_Unsigned) (CoverageAfterGoal_59) << 6)) | (((((MR_Unsigned) (BranchIf_60) << 5)) | (((((MR_Unsigned) (BranchSwitch_61) << 4)) | (((((MR_Unsigned) (BranchDisj_62) << 3)) | (((((MR_Unsigned) (UsePortCounts_63) << 2)) | (((((MR_Unsigned) (UseTrivial_64) << 1)) | (MR_Unsigned) (RunFirstPass_65)))))))))))))))));
  }
  Var_74 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0));
  Var_75 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    CoverageInfo0_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CoverageInfo0_18, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, CoverageInfo0_18, 1) = ((MR_Box) (Var_75));
    MR_hl_field(0, CoverageInfo0_18, 2) = ((MR_Box) (STATE_VARIABLE_VarTable_0_27));
    MR_hl_field(0, CoverageInfo0_18, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, CoverageInfo0_18, 4) = ((MR_Box) (PredProcId_11));
    MR_hl_field(0, CoverageInfo0_18, 5) = ((MR_Box) (MaybeRecInfo_13));
    MR_hl_field(0, CoverageInfo0_18, 6) = ((MR_Box) (CoverageProfilingOptions_17));
    MR_hl_field(0, CoverageInfo0_18, 7) = ((MR_Box) (ContainingGoalMap_12));
  }
  RunFirstPass_19 = ((MR_Unsigned) ((MR_hl_field(0, CoverageProfilingOptions_17, 0))) & (MR_Integer) 1);
  switch (RunFirstPass_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Goal_1_29 = STATE_VARIABLE_Goal_0_25;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_20;

        ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CoverageProfilingOptions_17, STATE_VARIABLE_Goal_0_25, &STATE_VARIABLE_Goal_1_29, (MR_Integer) 0, &Var_20);
      }
      break;
  }
  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(STATE_VARIABLE_Goal_1_29, STATE_VARIABLE_Goal_26, (MR_Integer) 0, &Var_21, CoverageInfo0_18, &CoverageInfo_22, &Var_23);
  CoveragePointsMap_24 = ((MR_Word) ((MR_hl_field(0, CoverageInfo_22, 0))));
  *STATE_VARIABLE_VarTable_28 = ((MR_Word) ((MR_hl_field(0, CoverageInfo_22, 2))));
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePointsMap_24, &AssocList_79);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), AssocList_79, CoveragePoints_14);
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
  MR_Word CPOptions_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word FirstFunctor_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word LaterFunctors_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_17;
    MR_Word TrivialGoal_18;
    MR_Word PortCountsCoverageAfterGoal_19;
    MR_Word TrivialSwitchcase_20;
    MR_Word PortCountsCoverageAfterSwitchcase_21;
    MR_Word Var_23;

    ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_1, Goal0_16, &Goal_17, (MR_Integer) 1, &Var_23);
    TrivialGoal_18 = ((((MR_Unsigned) ((MR_hl_field(0, Var_23, 0))) >> 1)) & (MR_Integer) 1);
    PortCountsCoverageAfterGoal_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_23, 0))) & (MR_Integer) 1);
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
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (FirstFunctor_14));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (LaterFunctors_15));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
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
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word TrivialGoal_19;
    MR_Word PortCountsCoverageAfterGoal_20;
    MR_Word TrivialDisj_21;
    MR_Word PortCountsCoverageAfterDisj_22;
    MR_Word Var_23;

    ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_1, Goal0_12, &Goal_14, HeadVar__5_5, &Var_23);
    TrivialGoal_19 = ((((MR_Unsigned) ((MR_hl_field(0, Var_23, 0))) >> 1)) & (MR_Integer) 1);
    PortCountsCoverageAfterGoal_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_23, 0))) & (MR_Integer) 1);
    ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(CPOptions_1, Goals0_13, &Goals_15, &TrivialDisj_21, (MR_Integer) 1, &PortCountsCoverageAfterDisj_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
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
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_10;
  MR_Word conv1_Trivial_12;
  MR_Word conv0_PortCountsCoverageAfter_14;

  ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv1_Trivial_12, ((MR_Word) (wrapper_arg_5)), &conv0_PortCountsCoverageAfter_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_Trivial_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_PortCountsCoverageAfter_14));
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
  MR_Word CPOptions_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word PortCountsCoverageAfterBefore_9,
  MR_Word * Info_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
  MR_Word Trivial0_19;
  MR_Word PortCountsCoverageAfterDirect_20;
  MR_Word GoalExpr_21;
  MR_Word PortCountsCoverageAfter_76;
  MR_Word Trivial_77;
  MR_Word MaybeDPInfo0_78;
  MR_Word DPInfo_81;
  MR_Word GoalInfo_82;
  MR_Word Var_100;
  MR_Word Var_147;
  MR_Word Var_148;

  switch (MR_tag((MR_Word) GoalExpr0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InnerGoal0_58 = (MR_Word) ((MR_Word) (GoalExpr0_11));
        MR_Word InnerGoal_59;
        MR_Word Var_85;

        ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, InnerGoal0_58, &InnerGoal_59, PortCountsCoverageAfterBefore_9, &Var_85);
        Trivial0_19 = ((((MR_Unsigned) ((MR_hl_field(0, Var_85, 0))) >> 1)) & (MR_Integer) 1);
        PortCountsCoverageAfterDirect_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_85, 0))) & (MR_Integer) 1);
        GoalExpr_21 = (MR_Word) ((MR_Word) (InnerGoal_59));
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
        MR_Word BuiltinState_16 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_11, 3))) & (MR_Integer) 1);

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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));

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
            MR_Word ConjType_50 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, 1))) & (MR_Integer) 1);
            MR_Word Goals0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
            MR_Word Goals_52;
            MR_Word Var_83;
            MR_Box conv4_Trivial0_19;
            MR_Box conv3_PortCountsCoverageAfterDirect_20;

            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_83, 0) = ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_4[0]));
              MR_hl_field(0, Var_83, 1) = ((MR_Box) (ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1));
              MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_83, 3) = ((MR_Box) (CPOptions_6));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0), Var_83, Goals0_51, &Goals_52, ((MR_Box) ((MR_Integer) 0)), &conv4_Trivial0_19, ((MR_Box) (PortCountsCoverageAfterBefore_9)), &conv3_PortCountsCoverageAfterDirect_20);
            Trivial0_19 = ((MR_Word) (conv4_Trivial0_19));
            PortCountsCoverageAfterDirect_20 = ((MR_Word) (conv3_PortCountsCoverageAfterDirect_20));
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_50));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Goals_52));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
            MR_Word Goals_102;

            ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(CPOptions_6, Goals0_101, &Goals_102, &Trivial0_19, PortCountsCoverageAfterBefore_9, &PortCountsCoverageAfterDirect_20);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Goals_102));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
            MR_Word CanFail_54 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, 2))) & (MR_Integer) 1);
            MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 3))));
            MR_Word Cases_56;
            MR_Word PortCountsCoverageAfterCases_57;

            ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(CPOptions_6, Cases0_55, &Cases_56, &Trivial0_19, &PortCountsCoverageAfterCases_57);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Var_53));
              MR_hl_field(3, GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (CanFail_54));
              MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (Cases_56));
            }
            switch (CanFail_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                PortCountsCoverageAfterDirect_20 = PortCountsCoverageAfterCases_57;
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
            MR_Word Var_86;
            MR_Word InnerGoal0_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
            MR_Word InnerGoal_104;

            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, InnerGoal0_103, &InnerGoal_104, PortCountsCoverageAfterBefore_9, &Var_86);
            Trivial0_19 = ((((MR_Unsigned) ((MR_hl_field(0, Var_86, 0))) >> 1)) & (MR_Integer) 1);
            PortCountsCoverageAfterDirect_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_86, 0))) & (MR_Integer) 1);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Reason_60));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (InnerGoal_104));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
            MR_Word CondGoal0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
            MR_Word ThenGoal0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 3))));
            MR_Word ElseGoal0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 4))));
            MR_Word CondGoal_65;
            MR_Word TrivialCond_66;
            MR_Word PortCountsCoverageAfterCond_67;
            MR_Word ThenGoal_68;
            MR_Word TrivialThen_69;
            MR_Word PortCountsCoverageAfterThen_70;
            MR_Word ElseGoal_71;
            MR_Word TrivialElse_72;
            MR_Word PortCountsCoverageAfterElse_73;
            MR_Word TrivialCondThen_74;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;

            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, CondGoal0_62, &CondGoal_65, PortCountsCoverageAfterBefore_9, &Var_87);
            TrivialCond_66 = ((((MR_Unsigned) ((MR_hl_field(0, Var_87, 0))) >> 1)) & (MR_Integer) 1);
            PortCountsCoverageAfterCond_67 = ((MR_Unsigned) ((MR_hl_field(0, Var_87, 0))) & (MR_Integer) 1);
            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, ThenGoal0_63, &ThenGoal_68, PortCountsCoverageAfterCond_67, &Var_88);
            TrivialThen_69 = ((((MR_Unsigned) ((MR_hl_field(0, Var_88, 0))) >> 1)) & (MR_Integer) 1);
            PortCountsCoverageAfterThen_70 = ((MR_Unsigned) ((MR_hl_field(0, Var_88, 0))) & (MR_Integer) 1);
            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(CPOptions_6, ElseGoal0_64, &ElseGoal_71, PortCountsCoverageAfterCond_67, &Var_89);
            TrivialElse_72 = ((((MR_Unsigned) ((MR_hl_field(0, Var_89, 0))) >> 1)) & (MR_Integer) 1);
            PortCountsCoverageAfterElse_73 = ((MR_Unsigned) ((MR_hl_field(0, Var_89, 0))) & (MR_Integer) 1);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Vars_61));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (CondGoal_65));
              MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (ThenGoal_68));
              MR_hl_field(3, GoalExpr_21, 4) = ((MR_Box) (ElseGoal_71));
            }
            succeeded = (TrivialCond_66 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (TrivialThen_69 == (MR_Integer) 0);
            if (succeeded)
              TrivialCondThen_74 = (MR_Integer) 0;
            else
              TrivialCondThen_74 = (MR_Integer) 1;
            succeeded = (TrivialCondThen_74 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (TrivialElse_72 == (MR_Integer) 0);
            if (succeeded)
              Trivial0_19 = (MR_Integer) 0;
            else
              Trivial0_19 = (MR_Integer) 1;
            succeeded = (PortCountsCoverageAfterThen_70 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (PortCountsCoverageAfterElse_73 == (MR_Integer) 0);
            if (succeeded)
              PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
            else
              PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  Var_148 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_6, 0))) >> 2)) & (MR_Integer) 1);
  Var_147 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_6, 0))) >> 1)) & (MR_Integer) 1);
  switch (Var_148) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PortCountsCoverageAfter_76 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      switch (PortCountsCoverageAfterDirect_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Detism_155;

            Detism_155 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_12);
            switch (Detism_155) {
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
              PortCountsCoverageAfter_76 = PortCountsCoverageAfterBefore_9;
            else
              PortCountsCoverageAfter_76 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 0:
          PortCountsCoverageAfter_76 = (MR_Integer) 0;
          break;
      }
      break;
  }
  switch (Var_147) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Trivial_77 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      Trivial_77 = Trivial0_19;
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *Info_10 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (Trivial_77) << 1)) | (MR_Unsigned) (PortCountsCoverageAfter_76)));
  }
  MaybeDPInfo0_78 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo0_12);
  if ((MaybeDPInfo0_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "goal_dp_info not present");
      return;
    }
  else
  {
    MR_Word IsProfilingInstrumentation_79;
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo0_78, 0))));
    MR_Word Var_97;

    IsProfilingInstrumentation_79 = ((MR_Unsigned) ((MR_hl_field(0, Var_96, 0))) & (MR_Integer) 1);
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (*Info_10));
    }
    {
      DPInfo_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DPInfo_81, 0) = (MR_Box) ((MR_Unsigned) (IsProfilingInstrumentation_79));
      MR_hl_field(0, DPInfo_81, 1) = ((MR_Box) (Var_97));
    }
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (DPInfo_81));
  }
  hlds__hlds_goal__goal_info_set_maybe_dp_info_3_p_0(Var_100, GoalInfo0_12, &GoalInfo_82);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_82));
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
  MR_bool succeeded;
  MR_Word FirstDisjunct0_17;
  MR_Word Var_23;
  MR_Word SecondDisjunct_18;
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, DPInfo_9, 0))) & (MR_Integer) 1);
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  succeeded = (Var_22 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Disjuncts0_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FirstDisjunct0_17 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_12, 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_12, 1))));
      succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SecondDisjunct_18 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_26 = ((MR_Word) ((MR_hl_field(0, SecondDisjunct_18, 1))));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Disjuncts_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FirstDisjunct_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
    }
  }
  else
    ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_9, CoverageBeforeKnown_10, (MR_Integer) 0, NextCoverageBeforeKnown_11, Disjuncts0_12, Disjuncts_13, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, AddedImpurity_15);
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
  MR_Word STATE_VARIABLE_Info_1_57;
  MR_Word Var_71;

  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Cond0_14, &Cond_22, CoverageBeforeITEKnown_18, &CoverageKnownBeforeThen0_25, STATE_VARIABLE_Info_0_55, &STATE_VARIABLE_Info_1_57, &AddedImpurityCond_24);
  CPOptions_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_57, 6))));
  CPOBranchIf_28 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_27, 0))) >> 5)) & (MR_Integer) 1);
  IsMDProfInst_29 = ((MR_Unsigned) ((MR_hl_field(0, DPInfo_12, 0))) & (MR_Integer) 1);
  succeeded = (CPOBranchIf_28 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (IsMDProfInst_29 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ContainingGoalMap_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_57, 7))));
    MR_Word ElseId_36;
    MR_Word ElsePath_37;
    MR_Word CondDetism_38;
    MR_Word CondSolns_40;
    MR_Word InsertCPElse_41;
    MR_Word CoverageKnownBeforeElse_42;
    MR_Word Else1_46;
    MR_Word AddedImpurityElseGoal_48;
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Else0_16, 1))));
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_Info_4_69;
    MR_Word Var_39;

    ElseId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_61);
    ElsePath_37 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ElseId_36);
    Var_62 = ((MR_Word) ((MR_hl_field(0, Cond_22, 1))));
    CondDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_62);
    parse_tree__prog_data__determinism_components_3_p_0(CondDetism_38, &Var_39, &CondSolns_40);
    switch (CondSolns_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word Var_63;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (ElsePath_37));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
          }
          {
            InsertCPElse_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InsertCPElse_41, 0) = ((MR_Box) (Var_63));
          }
          CoverageKnownBeforeElse_42 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          succeeded = (CoverageBeforeITEKnown_18 == (MR_Integer) 0);
          if (succeeded)
          {
            InsertCPElse_41 = (MR_Word) ((MR_Unsigned) 0U);
            CoverageKnownBeforeElse_42 = (MR_Integer) 0;
          }
          else
          {
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_65, 0) = ((MR_Box) (ElsePath_37));
              MR_hl_field(0, Var_65, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
            }
            {
              InsertCPElse_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InsertCPElse_41, 0) = ((MR_Box) (Var_65));
            }
            CoverageKnownBeforeElse_42 = (MR_Integer) 0;
          }
        }
        break;
    }
    switch (CoverageKnownBeforeThen0_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_Info_2_67;

          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_1_57, &STATE_VARIABLE_Info_2_67, &AddedImpurityThen_51);
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_46, CoverageKnownBeforeElse_42, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_2_67, &STATE_VARIABLE_Info_4_69, &AddedImpurityElseGoal_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ThenId_32;
          MR_Word ThenPath_33;
          MR_Word CPInfoThen_49;
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Then0_15, 1))));
          MR_Word CPGoals_97;
          MR_Word Goals_100;
          MR_Word Then1_125;
          MR_Word STATE_VARIABLE_Info_2_127;
          MR_Word STATE_VARIABLE_Info_3_128;
          MR_Word AddedImpurityThenGoal_123;
          MR_Word InnerGoals_98;
          MR_Word Var_101;
          MR_Word Var_102;

          ThenId_32 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_58);
          ThenPath_33 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_31, ThenId_32);
          {
            CPInfoThen_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CPInfoThen_49, 0) = ((MR_Box) (ThenPath_33));
            MR_hl_field(0, CPInfoThen_49, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
          }
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then1_125, (MR_Integer) 0, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_1_57, &STATE_VARIABLE_Info_2_127, &AddedImpurityThenGoal_123);
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else1_46, CoverageKnownBeforeElse_42, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_2_127, &STATE_VARIABLE_Info_3_128, &AddedImpurityElseGoal_48);
          ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_27, CPInfoThen_49, &CPGoals_97, STATE_VARIABLE_Info_3_128, &STATE_VARIABLE_Info_4_69);
          Var_101 = ((MR_Word) ((MR_hl_field(0, Then1_125, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_101)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_101, 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_102 = ((MR_Unsigned) ((MR_hl_field(3, Var_101, 1))) & (MR_Integer) 1);
            InnerGoals_98 = ((MR_Word) ((MR_hl_field(3, Var_101, 2))));
            succeeded = (Var_102 == (MR_Integer) 0);
          }
          if (succeeded)
            Goals_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_97, InnerGoals_98);
          else
          {
            MR_Word Var_103;

            {
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (Then1_125));
              MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Goals_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_97, Var_103);
          }
          hlds__goal_util__create_conj_from_list_3_p_0(Goals_100, (MR_Integer) 0, &Then_50);
          AddedImpurityThen_51 = (MR_Integer) 1;
        }
        break;
    }
    if ((InsertCPElse_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Else_53 = Else1_46;
      AddedImpurityElse_54 = AddedImpurityElseGoal_48;
      *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_4_69;
    }
    else
    {
      MR_Word CPInfoElse_52 = ((MR_Word) ((MR_hl_field(1, InsertCPElse_41, 0))));

      ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_27, CPInfoElse_52, Else1_46, &Else_53, STATE_VARIABLE_Info_4_69, STATE_VARIABLE_Info_56);
      AddedImpurityElse_54 = (MR_Integer) 1;
    }
  }
  else
  {
    MR_Word STATE_VARIABLE_Info_2_119;

    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Then0_15, &Then_50, CoverageKnownBeforeThen0_25, &NextCoverageKnownThen_44, STATE_VARIABLE_Info_1_57, &STATE_VARIABLE_Info_2_119, &AddedImpurityThen_51);
    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Else0_16, &Else_53, (MR_Integer) 1, &NextCoverageKnownElse_47, STATE_VARIABLE_Info_2_119, STATE_VARIABLE_Info_56, &AddedImpurityElse_54);
  }
  Var_71 = mercury__bool__or_2_f_0(AddedImpurityThen_51, AddedImpurityElse_54);
  *AddedImpurity_21 = mercury__bool__or_2_f_0(AddedImpurityCond_24, Var_71);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_17 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, base, 1) = ((MR_Box) (ITEExistVars_13));
    MR_hl_field(3, base, 2) = ((MR_Box) (Cond_22));
    MR_hl_field(3, base, 3) = ((MR_Box) (Then_50));
    MR_hl_field(3, base, 4) = ((MR_Box) (Else_53));
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
    MR_Word Case0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_26;
    MR_Word Cases_27;
    MR_Word MainConsId_33 = ((MR_Word) ((MR_hl_field(0, Case0_24, 0))));
    MR_Word OtherConsIds_34 = ((MR_Word) ((MR_hl_field(0, Case0_24, 1))));
    MR_Word Goal0_35 = ((MR_Word) ((MR_hl_field(0, Case0_24, 2))));
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
    MR_Word STATE_VARIABLE_CoverageAfterSwitchKnown_1_61;
    MR_Word STATE_VARIABLE_Info_2_64;

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
    CPOptions_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 6))));
    CPOBranchSwitch_40 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_39, 0))) >> 4)) & (MR_Integer) 1);
    IsMDProfInst_41 = ((MR_Unsigned) ((MR_hl_field(0, DPInfo_1, 0))) & (MR_Integer) 1);
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
      MR_Word STATE_VARIABLE_Info_1_60;
      MR_Word Var_62;
      MR_Word AddedImpurityHead0_47;

      CoverageBeforeCaseKnown_44 = (MR_Integer) 0;
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Goal0_35, &Goal1_45, CoverageBeforeCaseKnown_44, &CoverageAfterCaseKnown_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_60, &AddedImpurityHead0_47);
      Var_62 = ((MR_Word) ((MR_hl_field(0, Goal0_35, 1))));
      CaseId_48 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_62);
      ContainingGoalMap_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_60, 7))));
      CasePath_50 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_49, CaseId_48);
      {
        CoveragePoint_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CoveragePoint_51, 0) = ((MR_Box) (CasePath_50));
        MR_hl_field(0, CoveragePoint_51, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
      }
      ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(CPOptions_39, CoveragePoint_51, Goal1_45, &Goal_52, STATE_VARIABLE_Info_1_60, &STATE_VARIABLE_Info_2_64);
      AddedImpurityHead_53 = (MR_Integer) 1;
    }
    else
    {
      CoverageBeforeCaseKnown_44 = CoverageBeforeCaseKnown0_36;
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(Goal0_35, &Goal_52, CoverageBeforeCaseKnown_44, &CoverageAfterCaseKnown_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_2_64, &AddedImpurityHead_53);
    }
    switch (CoverageAfterCaseKnown_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_CoverageAfterSwitchKnown_0_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_CoverageAfterSwitchKnown_1_61 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_CoverageAfterSwitchKnown_1_61 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_CoverageAfterSwitchKnown_1_61 = (MR_Integer) 1;
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
    ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(DPInfo_1, SwitchCanFail_2, Cases0_25, &Cases_27, CoverageBeforeSwitchKnown_5, NextCoverageBeforeEveryCaseKnown_54, STATE_VARIABLE_CoverageAfterSwitchKnown_1_61, STATE_VARIABLE_CoverageAfterSwitchKnown_8, STATE_VARIABLE_Info_2_64, STATE_VARIABLE_Info_10, &AddedImpurityTail_55);
    {
      Case_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_26, 0) = ((MR_Box) (MainConsId_33));
      MR_hl_field(0, Case_26, 1) = ((MR_Box) (OtherConsIds_34));
      MR_hl_field(0, Case_26, 2) = ((MR_Box) (Goal_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_27));
    }
    mercury__bool__or_3_p_0(AddedImpurityHead_53, AddedImpurityTail_55, HeadVar__11_11);
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
    MR_Word HeadDisjunct0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word TailDisjuncts0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word HeadDisjunct_23;
    MR_Word TailDisjuncts_24;
    MR_Word CPOptions_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 6))));
    MR_Word CPOBranchDisj_28 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_27, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word IsMDProfInst_29 = ((MR_Unsigned) ((MR_hl_field(0, DPInfo_1, 0))) & (MR_Integer) 1);

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
      MR_Word STATE_VARIABLE_Info_1_45;
      MR_Word STATE_VARIABLE_CoverageAfterKnown_1_46;
      MR_Word STATE_VARIABLE_Info_2_49;
      MR_Word Var_50;
      MR_Word CPGoals_76;
      MR_Word Goals_79;
      MR_Word AddedImpurityHead_35;
      MR_Word AddedImpurityTail_36;
      MR_Word InnerGoals_77;
      MR_Word Var_80;
      MR_Word Var_81;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadDisjunct0_21, &HeadDisjunct1_33, (MR_Integer) 0, &CoverageAfterDisjKnown_34, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_45, &AddedImpurityHead_35);
      switch (HeadVar__3_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (CoverageAfterDisjKnown_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_CoverageAfterKnown_1_46 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CoverageAfterKnown_1_46 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_CoverageAfterKnown_1_46 = (MR_Integer) 1;
          break;
      }
      ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_1, (MR_Integer) 1, STATE_VARIABLE_CoverageAfterKnown_1_46, HeadVar__4_4, TailDisjuncts0_22, &TailDisjuncts_24, STATE_VARIABLE_Info_1_45, &STATE_VARIABLE_Info_2_49, &AddedImpurityTail_36);
      Var_50 = ((MR_Word) ((MR_hl_field(0, HeadDisjunct0_21, 1))));
      DisjId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_50);
      ContainingGoalMap_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_49, 7))));
      DisjPath_39 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_38, DisjId_37);
      {
        HeadCoveragePoint_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadCoveragePoint_40, 0) = ((MR_Box) (DisjPath_39));
        MR_hl_field(0, HeadCoveragePoint_40, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
      }
      ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_27, HeadCoveragePoint_40, &CPGoals_76, STATE_VARIABLE_Info_2_49, STATE_VARIABLE_Info_8);
      Var_80 = ((MR_Word) ((MR_hl_field(0, HeadDisjunct1_33, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_80, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_81 = ((MR_Unsigned) ((MR_hl_field(3, Var_80, 1))) & (MR_Integer) 1);
        InnerGoals_77 = ((MR_Word) ((MR_hl_field(3, Var_80, 2))));
        succeeded = (Var_81 == (MR_Integer) 0);
      }
      if (succeeded)
        Goals_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_76, InnerGoals_77);
      else
      {
        MR_Word Var_82;

        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (HeadDisjunct1_33));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Goals_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_76, Var_82);
      }
      hlds__goal_util__create_conj_from_list_3_p_0(Goals_79, (MR_Integer) 0, &HeadDisjunct_23);
      *HeadVar__9_9 = (MR_Integer) 1;
    }
    else
    {
      MR_Word CoverageAfterDisjKnown_91;
      MR_Word AddedImpurityHead_92;
      MR_Word AddedImpurityTail_93;
      MR_Word STATE_VARIABLE_Info_1_94;
      MR_Word STATE_VARIABLE_CoverageAfterKnown_1_95;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadDisjunct0_21, &HeadDisjunct_23, CoverageBeforeKnown0_2, &CoverageAfterDisjKnown_91, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_94, &AddedImpurityHead_92);
      switch (HeadVar__3_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (CoverageAfterDisjKnown_91) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_CoverageAfterKnown_1_95 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CoverageAfterKnown_1_95 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_CoverageAfterKnown_1_95 = (MR_Integer) 1;
          break;
      }
      ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(DPInfo_1, (MR_Integer) 1, STATE_VARIABLE_CoverageAfterKnown_1_95, HeadVar__4_4, TailDisjuncts0_22, &TailDisjuncts_24, STATE_VARIABLE_Info_1_94, STATE_VARIABLE_Info_8, &AddedImpurityTail_93);
      *HeadVar__9_9 = mercury__bool__or_2_f_0(AddedImpurityHead_92, AddedImpurityTail_93);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadDisjunct_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailDisjuncts_24));
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
    MR_Word HeadGoal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailGoals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word HeadGoal_24;
    MR_Word CoverageBeforeTailKnown_25;
    MR_Word AddedImpurityHead_26;
    MR_Word TailGoals_27;
    MR_Word AddedImpurityTail_28;
    MR_Word STATE_VARIABLE_Info_1_33;
    MR_Word HeadConjGoals_29;
    MR_Word Var_35;
    MR_Word Var_36;

    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(HeadGoal0_17, &HeadGoal_24, HeadVar__4_4, &CoverageBeforeTailKnown_25, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_33, &AddedImpurityHead_26);
    ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ConjType_1, TailGoals0_18, &TailGoals_27, CoverageBeforeTailKnown_25, HeadVar__5_5, STATE_VARIABLE_Info_1_33, STATE_VARIABLE_Info_7, &AddedImpurityTail_28);
    succeeded = (ConjType_1 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_35 = ((MR_Word) ((MR_hl_field(0, HeadGoal_24, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_35, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_36 = ((MR_Unsigned) ((MR_hl_field(3, Var_35, 1))) & (MR_Integer) 1);
        HeadConjGoals_29 = ((MR_Word) ((MR_hl_field(3, Var_35, 2))));
        succeeded = (Var_36 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadConjGoals_29, TailGoals_27);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_27));
      }
    mercury__bool__or_3_p_0(AddedImpurityHead_26, AddedImpurityTail_28, HeadVar__8_8);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word CoverageBeforeKnown_10,
  MR_Word * NextCoverageBeforeKnown_11,
  MR_Word STATE_VARIABLE_Info_0_91,
  MR_Word * STATE_VARIABLE_Info_92,
  MR_Word * AddedImpurity_13)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 0))));
  MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 1))));
  MR_Word Detism_16;
  MR_Word GoalId_17;
  MR_Word CPOptions_18;
  MR_Word DPInfo_19;
  MR_Word IsMDProfInst_20;
  MR_Word NextCoverageBeforeKnown0_36;
  MR_Word AddedImpurityInner_37;
  MR_Word GoalExpr1_38;
  MR_Word GoalInfo1_84;
  MR_Word Goal1_85;
  MR_Word STATE_VARIABLE_Info_1_98;

  Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_15);
  GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_15);
  CPOptions_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_91, 6))));
  DPInfo_19 = ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(GoalInfo0_15);
  IsMDProfInst_20 = ((MR_Unsigned) ((MR_hl_field(0, DPInfo_19, 0))) & (MR_Integer) 1);
  succeeded = (IsMDProfInst_20 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CoverageBeforeKnown_10 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Unsigned GoalNum_22 = (MR_Unsigned) (GoalId_17);
    MR_String UnknownMsg_23;
    MR_String Var_139;
    MR_String Var_146;

    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__coverage_profiling_scalar_common_3[0]), (MR_Integer) 1, GoalNum_22, &Var_139);
    Var_146 = mercury__string__f_43_43_2_f_0(Var_139, (MR_String) "\n");
    UnknownMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "Coverage information is unknown for goal_id ", Var_146);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", UnknownMsg_23);
      return;
    }
  }
  switch (MR_tag((MR_Word) GoalExpr0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_69 = (MR_Word) ((MR_Word) (GoalExpr0_14));
        MR_Word NegGoal_70;
        MR_Word Var_71;

        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(NegGoal0_69, &NegGoal_70, CoverageBeforeKnown_10, &Var_71, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
        NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
        GoalExpr1_38 = (MR_Word) ((MR_Word) (NegGoal_70));
      }
      break;
    case (MR_Integer) 1:
      {
        ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
        AddedImpurityInner_37 = (MR_Integer) 0;
        GoalExpr1_38 = GoalExpr0_14;
        STATE_VARIABLE_Info_1_98 = STATE_VARIABLE_Info_0_91;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_42 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_14, 3))) & (MR_Integer) 1);

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
        STATE_VARIABLE_Info_1_98 = STATE_VARIABLE_Info_0_91;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));

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
            STATE_VARIABLE_Info_1_98 = STATE_VARIABLE_Info_0_91;
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(Detism_16, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36);
            AddedImpurityInner_37 = (MR_Integer) 0;
            GoalExpr1_38 = GoalExpr0_14;
            STATE_VARIABLE_Info_1_98 = STATE_VARIABLE_Info_0_91;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_62 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, 1))) & (MR_Integer) 1);
            MR_Word Goals0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));
            MR_Word Goals_64;

            ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ConjType_62, Goals0_63, &Goals_64, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
            {
              GoalExpr1_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr1_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_62));
              MR_hl_field(3, GoalExpr1_38, 2) = ((MR_Box) (Goals_64));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_111 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
            MR_Word Goals_112;

            ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(DPInfo_19, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, Goals0_111, &Goals_112, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
            {
              GoalExpr1_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr1_38, 1) = ((MR_Box) (Goals_112));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
            MR_Word SwitchCanFail_66 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, 2))) & (MR_Integer) 1);
            MR_Word Cases0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 3))));
            MR_Word Cases_68;

            ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(DPInfo_19, SwitchCanFail_66, Cases0_67, &Cases_68, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
            {
              GoalExpr1_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr1_38, 1) = ((MR_Box) (Var_65));
              MR_hl_field(3, GoalExpr1_38, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_66));
              MR_hl_field(3, GoalExpr1_38, 3) = ((MR_Box) (Cases_68));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
            MR_Word ScopeGoal0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));
            MR_Word ScopeGoal_74;
            MR_Word CoverageAfterScopedGoalKnown_75;
            MR_Word ScopedGoalDetism_76;
            MR_Word Var_103;

            ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ScopeGoal0_73, &ScopeGoal_74, CoverageBeforeKnown_10, &CoverageAfterScopedGoalKnown_75, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
            Var_103 = ((MR_Word) ((MR_hl_field(0, ScopeGoal0_73, 1))));
            ScopedGoalDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Var_103);
            succeeded = (ScopedGoalDetism_76 == Detism_16);
            if (succeeded)
              NextCoverageBeforeKnown0_36 = CoverageAfterScopedGoalKnown_75;
            else
              NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
            {
              GoalExpr1_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr1_38, 1) = ((MR_Box) (Reason_72));
              MR_hl_field(3, GoalExpr1_38, 2) = ((MR_Box) (ScopeGoal_74));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ITEExistVars_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
            MR_Word Cond_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));
            MR_Word Then_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 3))));
            MR_Word Else_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 4))));

            ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(DPInfo_19, ITEExistVars_77, Cond_78, Then_79, Else_80, &GoalExpr1_38, CoverageBeforeKnown_10, &NextCoverageBeforeKnown0_36, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_1_98, &AddedImpurityInner_37);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(AddedImpurityInner_37, GoalInfo0_15, &GoalInfo1_84);
  {
    Goal1_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_85, 0) = ((MR_Box) (GoalExpr1_38));
    MR_hl_field(0, Goal1_85, 1) = ((MR_Box) (GoalInfo1_84));
  }
  succeeded = (IsMDProfInst_20 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (NextCoverageBeforeKnown0_36 == (MR_Integer) 0);
  if (succeeded)
  {
    *NextCoverageBeforeKnown_11 = NextCoverageBeforeKnown0_36;
    *Goal_9 = Goal1_85;
    *AddedImpurity_13 = AddedImpurityInner_37;
    *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_1_98;
  }
  else
  {
    MR_Word CoverageAfterGoals_83 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_18, 0))) >> 6)) & (MR_Integer) 1);

    switch (CoverageAfterGoals_83) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *NextCoverageBeforeKnown_11 = NextCoverageBeforeKnown0_36;
          *Goal_9 = Goal1_85;
          *AddedImpurity_13 = AddedImpurityInner_37;
          *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_1_98;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CPType_86;
          MR_Word ContainingGoalMap_87;
          MR_Word RevGoalPath_88;
          MR_Word CPInfo_89;
          MR_Word CPGoals_90;
          MR_Word Var_109;

          *NextCoverageBeforeKnown_11 = (MR_Integer) 0;
          CPType_86 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_3[1])), 0))));
          ContainingGoalMap_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_98, 7))));
          RevGoalPath_88 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_87, GoalId_17);
          {
            CPInfo_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CPInfo_89, 0) = ((MR_Box) (RevGoalPath_88));
            MR_hl_field(0, CPInfo_89, 1) = ((MR_Box) (CPType_86));
          }
          ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_18, CPInfo_89, &CPGoals_90, STATE_VARIABLE_Info_1_98, STATE_VARIABLE_Info_92);
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (Goal1_85));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (CPGoals_90));
          }
          hlds__goal_util__create_conj_from_list_3_p_0(Var_109, (MR_Integer) 0, Goal_9);
          *AddedImpurity_13 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
  MR_Word GoalInfo_3)
{
  MR_Word DPInfo_4;
  MR_Word MaybeDPInfo_5;

  MaybeDPInfo_5 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_3);
  if ((MaybeDPInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.coverage_profiling.goal_info_get_dp_info\'/1", (MR_String) "MaybeDPInfo = no");
  else
    DPInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo_5, 0))));
  return DPInfo_4;
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
  MR_bool succeeded;
  MR_Word CPGoals_11;
  MR_Word Goals_14;
  MR_Word InnerGoals_12;
  MR_Word Var_20;
  MR_Word Var_21;

  ll_backend__coverage_profiling__make_coverage_point_5_p_0(CPOptions_7, CPInfo_8, &CPGoals_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, 0))));
  succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_21 = ((MR_Unsigned) ((MR_hl_field(3, Var_20, 1))) & (MR_Integer) 1);
    InnerGoals_12 = ((MR_Word) ((MR_hl_field(3, Var_20, 2))));
    succeeded = (Var_21 == (MR_Integer) 0);
  }
  if (succeeded)
    Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_11, InnerGoals_12);
  else
  {
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (STATE_VARIABLE_Goal_0_15));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CPGoals_11, Var_22);
  }
  hlds__goal_util__create_conj_from_list_3_p_0(Goals_14, (MR_Integer) 0, STATE_VARIABLE_Goal_16);
}

static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
  MR_Word CPOptions_6,
  MR_Word CoveragePointInfo_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_CoverageInfo_0_39,
  MR_Word * STATE_VARIABLE_CoverageInfo_40)
{
  MR_Word CoveragePointInfos0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 0))));
  MR_Word CPIndexCounter0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 1))));
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
  MR_Word STATE_VARIABLE_CoverageInfo_2_42;
  MR_Word STATE_VARIABLE_VarTable_1_43;
  MR_Word STATE_VARIABLE_VarTable_2_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_VarTable_3_49;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;

  mercury__counter__allocate_3_p_0(&CPIndex_12, CPIndexCounter0_11, &CPIndexCounter_13);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPIndex_12, ((MR_Box) (CoveragePointInfo_7)), CoveragePointInfos0_10, &CoveragePointInfos_14);
  STATE_VARIABLE_VarTable_1_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 2))));
  Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 3))));
  Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 4))));
  Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 5))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 6))));
  Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_0_39, 7))));
  {
    STATE_VARIABLE_CoverageInfo_2_42 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 0) = ((MR_Box) (CoveragePointInfos_14));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 1) = ((MR_Box) (CPIndexCounter_13));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 2) = ((MR_Box) (STATE_VARIABLE_VarTable_1_43));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 3) = ((MR_Box) (Var_112));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 4) = ((MR_Box) (Var_113));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 5) = ((MR_Box) (Var_114));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 6) = ((MR_Box) (Var_115));
    MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 7) = ((MR_Box) (Var_116));
  }
  ll_backend__deep_profiling__generate_var_int_4_p_0((MR_String) "CPIndex", &CPIndexVar_16, STATE_VARIABLE_VarTable_1_43, &STATE_VARIABLE_VarTable_2_45);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (CPIndex_12));
  }
  {
    Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_46, CPIndexVar_16, &GoalUnifyIndex_17);
  ll_backend__deep_profiling__generate_var_c_ptr_4_p_0((MR_String) "ProcLayout", &ProcLayoutVar_18, STATE_VARIABLE_VarTable_2_45, &STATE_VARIABLE_VarTable_3_49);
  ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(STATE_VARIABLE_CoverageInfo_2_42, &ProcStaticConsId_19);
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ProcStaticConsId_19, ProcLayoutVar_18, &GoalUnifyProcLayout_20);
  Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 0))));
  Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 1))));
  ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 3))));
  Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 4))));
  Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 5))));
  Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 6))));
  Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CoverageInfo_2_42, 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CoverageInfo_40 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_132));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_133));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_VarTable_3_49));
    MR_hl_field(0, base, 3) = ((MR_Box) (ModuleInfo_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_136));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_137));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_138));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_139));
  }
  DataType_24 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_6, 0))) >> 8)) & (MR_Integer) 1);
  UseCalls_21 = ((((MR_Unsigned) ((MR_hl_field(0, CPOptions_6, 0))) >> 7)) & (MR_Integer) 1);
  switch (DataType_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_56;
        MR_Word Var_63;

        PredName_26 = (MR_String) "increment_dynamic_coverage_point_count";
        {
          ArgVars_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_27, 0) = ((MR_Box) (CPIndexVar_16));
          MR_hl_field(1, ArgVars_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_63 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_goal__make_foreign_args_4_p_0(ArgVars_27, (MR_Word) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_2[5])), Var_56, &ForeignArgVars_28);
        PredArity_29 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;

        PredName_26 = (MR_String) "increment_static_coverage_point_count";
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (CPIndexVar_16));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgVars_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_27, 0) = ((MR_Box) (ProcLayoutVar_18));
          MR_hl_field(1, ArgVars_27, 1) = ((MR_Box) (Var_65));
        }
        Var_81 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        Var_83 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_81));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_82));
        }
        hlds__hlds_goal__make_foreign_args_4_p_0(ArgVars_27, (MR_Word) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_2[8])), Var_68, &ForeignArgVars_28);
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
          CallGoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CallGoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, CallGoalExpr_34, 1) = ((MR_Box) (ForeignCallAttrs_32));
          MR_hl_field(3, CallGoalExpr_34, 2) = ((MR_Box) (PredId_30));
          MR_hl_field(3, CallGoalExpr_34, 3) = ((MR_Box) (ProcId_31));
          MR_hl_field(3, CallGoalExpr_34, 4) = ((MR_Box) (ForeignArgVars_28));
          MR_hl_field(3, CallGoalExpr_34, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, CallGoalExpr_34, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, CallGoalExpr_34, 7) = ((MR_Box) (ForeignProc_33));
        }
        NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_27);
        InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0((MR_Word) ((MR_Unsigned) 0U));
        CallGoalInfo_37 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_35, InstMapDelta_36, (MR_Integer) 0);
        {
          CallGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallGoal_38, 0) = ((MR_Box) (CallGoalExpr_34));
          MR_hl_field(0, CallGoal_38, 1) = ((MR_Box) (CallGoalInfo_37));
        }
      }
      break;
    case (MR_Integer) 1:
      ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_22, PredName_26, PredArity_29, ArgVars_27, (MR_Word) (MR_mkword(1, &ll_backend__coverage_profiling_scalar_common_3[2])), (MR_Integer) 0, &CallGoal_38);
      break;
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (CallGoal_38));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (GoalUnifyProcLayout_20));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (GoalUnifyIndex_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_92));
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
  MR_Word CoverageDataType_4,
  MR_Word * ForeignProcAttrs_5,
  MR_Word * ForeignProcImpl_6)
{
  MR_String Code_7;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_1_8;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_2_11;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_3_13;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_4_15;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_5_17;

  STATE_VARIABLE_ForeignProcAttrs_1_8 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_1_8, &STATE_VARIABLE_ForeignProcAttrs_2_11);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_2_11, &STATE_VARIABLE_ForeignProcAttrs_3_13);
  parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_ForeignProcAttrs_3_13, &STATE_VARIABLE_ForeignProcAttrs_4_15);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_4_15, &STATE_VARIABLE_ForeignProcAttrs_5_17);
  parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_ForeignProcAttrs_5_17, ForeignProcAttrs_5);
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
    MR_hl_field(0, base, 0) = ((MR_Box) (Code_7));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
  MR_Word CoverageInfo_3,
  MR_Word * ProcStaticConsId_4)
{
  MR_bool succeeded;
  MR_Word PredId_5;
  MR_Integer ProcId_6;
  MR_Word ShroudedPredProcId_7;
  MR_Word Var_8;
  MR_Word MaybeRecInfo_9 = ((MR_Word) ((MR_hl_field(0, CoverageInfo_3, 5))));
  MR_Word PredProcId_10 = ((MR_Word) ((MR_hl_field(0, CoverageInfo_3, 4))));
  MR_Word OuterPredProcId_12;
  MR_Word RecInfo_11;
  MR_Word Var_13;

  succeeded = (MaybeRecInfo_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RecInfo_11 = ((MR_Word) ((MR_hl_field(1, MaybeRecInfo_9, 0))));
    Var_13 = ((MR_Word) ((MR_hl_field(0, RecInfo_11, 0))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
      OuterPredProcId_12 = (MR_Word) ((MR_Word) (Var_13));
  }
  if (succeeded)
  {
    PredId_5 = ((MR_Word) ((MR_hl_field(0, OuterPredProcId_12, 0))));
    ProcId_6 = ((MR_Integer) ((MR_hl_field(0, OuterPredProcId_12, 1))));
  }
  else
  {
    PredId_5 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
    ProcId_6 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, 1))));
  }
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (ProcId_6));
  }
  ShroudedPredProcId_7 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_8);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *ProcStaticConsId_4 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, base, 1) = ((MR_Box) (ShroudedPredProcId_7));
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
  MR_bool succeeded;

  succeeded = ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
