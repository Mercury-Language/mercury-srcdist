/*
** Automatically generated from `coverage_profiling.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module ll_backend.coverage_profiling. */
/* :- implementation. */

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
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_8,
  MR_Word ll_backend__coverage_profiling__Goal0_9,
  MR_Word * ll_backend__coverage_profiling__Goal_10,
  MR_Word ll_backend__coverage_profiling__TrivialAcc_11,
  MR_Word * ll_backend__coverage_profiling__Trivial_12,
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13,
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_14);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
  MR_Box ll_backend__coverage_profiling__closure_arg,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_4,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_5,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
  MR_Word ll_backend__coverage_profiling__Goal0_7,
  MR_Word * ll_backend__coverage_profiling__Goal_8,
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9,
  MR_Word * ll_backend__coverage_profiling__Info_10);

static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
  MR_Word ll_backend__coverage_profiling__Goal_5,
  MR_Word ll_backend__coverage_profiling__PCDirect_6,
  MR_Word ll_backend__coverage_profiling__PCBefore_7,
  MR_Word * ll_backend__coverage_profiling__PC_8);

static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
  MR_Word ll_backend__coverage_profiling__A_4,
  MR_Word ll_backend__coverage_profiling__B_5,
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_6);

static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
  MR_Word ll_backend__coverage_profiling__A_4,
  MR_Word ll_backend__coverage_profiling__B_5,
  MR_Word * ll_backend__coverage_profiling__Trivial_6);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_12,
  MR_Word ll_backend__coverage_profiling__ITEExistVars_13,
  MR_Word ll_backend__coverage_profiling__Cond0_14,
  MR_Word ll_backend__coverage_profiling__Then0_15,
  MR_Word ll_backend__coverage_profiling__Else0_16,
  MR_Word * ll_backend__coverage_profiling__GoalExpr_17,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeITEKnown_18,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_19,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_56,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_21);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
  MR_Word ll_backend__coverage_profiling__SwitchCanFail_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_10,
  MR_Word * ll_backend__coverage_profiling__HeadVar__11_11);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_10,
  MR_Word ll_backend__coverage_profiling__CanFail_11,
  MR_Word ll_backend__coverage_profiling__Cases0_12,
  MR_Word * ll_backend__coverage_profiling__Cases_13,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14,
  MR_Word * ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_17);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown0_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_8,
  MR_Word * ll_backend__coverage_profiling__HeadVar__9_9);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_9,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
  MR_Word ll_backend__coverage_profiling__Disjuncts0_12,
  MR_Word * ll_backend__coverage_profiling__Disjuncts_13,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_15);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
  MR_Word ll_backend__coverage_profiling__ConjType_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_7,
  MR_Word * ll_backend__coverage_profiling__HeadVar__8_8);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
  MR_Word ll_backend__coverage_profiling__Goal0_8,
  MR_Word * ll_backend__coverage_profiling__Goal_9,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_91,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_13);

static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
  MR_Word ll_backend__coverage_profiling__GoalInfo_3);

static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_7,
  MR_Word ll_backend__coverage_profiling__CPInfo_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_18);

static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
  MR_Word ll_backend__coverage_profiling__CoveragePointInfo_7,
  MR_Word * ll_backend__coverage_profiling__Goals_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_40);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
  MR_Word ll_backend__coverage_profiling__CoverageDataType_4,
  MR_Word * ll_backend__coverage_profiling__ForeignProcAttrs_5,
  MR_Word * ll_backend__coverage_profiling__ForeignProcImpl_6);

static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
  MR_Word ll_backend__coverage_profiling__CoverageInfo_3,
  MR_Word * ll_backend__coverage_profiling__ProcStaticConsId_4);

static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
  MR_Word ll_backend__coverage_profiling__Detism_4,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "ProcLayout")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[1]))),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1 = {
  (MR_String) "coverage_before_unknown",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_before_known",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "static_coverage_data",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "dynamic_coverage_data",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_data_type",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0
};

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[9] = {
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 = {
  (MR_String) "coverage_profiling_options",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_profiling_options",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "proc_coverage_info",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0
};

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Integer ll_backend__coverage_profiling__CastX_27 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
    MR_Integer ll_backend__coverage_profiling__CastY_28 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_27 == ll_backend__coverage_profiling__CastY_28);
    if (ll_backend__coverage_profiling__succeeded)
      *ll_backend__coverage_profiling__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__coverage_profiling__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ll_backend__coverage_profiling__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ll_backend__coverage_profiling__Var_20;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[0], &ll_backend__coverage_profiling__Var_20, ((MR_Box) (ll_backend__coverage_profiling__ArgX1_4)), ((MR_Box) (ll_backend__coverage_profiling__ArgY1_5)));
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_20 == (MR_Integer) 0);
      ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_20;
      else
      {
        MR_Word ll_backend__coverage_profiling__Var_21;

        mercury__counter____Compare____counter_0_0(&ll_backend__coverage_profiling__Var_21, ll_backend__coverage_profiling__ArgX2_6, ll_backend__coverage_profiling__ArgY2_7);
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_21 == (MR_Integer) 0);
        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
        if (ll_backend__coverage_profiling__succeeded)
          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_21;
        else
        {
          MR_Word ll_backend__coverage_profiling__Var_22;

          hlds__vartypes____Compare____prog_var_set_types_0_0(&ll_backend__coverage_profiling__Var_22, ll_backend__coverage_profiling__ArgX3_8, ll_backend__coverage_profiling__ArgY3_9);
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_22 == (MR_Integer) 0);
          ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
          if (ll_backend__coverage_profiling__succeeded)
            *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_22;
          else
          {
            MR_Word ll_backend__coverage_profiling__Var_23;

            hlds__hlds_module____Compare____module_info_0_0(&ll_backend__coverage_profiling__Var_23, ll_backend__coverage_profiling__ArgX4_10, ll_backend__coverage_profiling__ArgY4_11);
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_23 == (MR_Integer) 0);
            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
            if (ll_backend__coverage_profiling__succeeded)
              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_23;
            else
            {
              MR_Word ll_backend__coverage_profiling__Var_24;

              hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__coverage_profiling__Var_24, ll_backend__coverage_profiling__ArgX5_12, ll_backend__coverage_profiling__ArgY5_13);
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_24 == (MR_Integer) 0);
              ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
              if (ll_backend__coverage_profiling__succeeded)
                *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_24;
              else
              {
                MR_Word ll_backend__coverage_profiling__Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_2[0], &ll_backend__coverage_profiling__Var_25, ((MR_Box) (ll_backend__coverage_profiling__ArgX6_14)), ((MR_Box) (ll_backend__coverage_profiling__ArgY6_15)));
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_25 == (MR_Integer) 0);
                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
                if (ll_backend__coverage_profiling__succeeded)
                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_25;
                else
                {
                  MR_Word ll_backend__coverage_profiling__Var_26;

                  ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&ll_backend__coverage_profiling__Var_26, ll_backend__coverage_profiling__ArgX7_16, ll_backend__coverage_profiling__ArgY7_17);
                  ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_26 == (MR_Integer) 0);
                  ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
                  if (ll_backend__coverage_profiling__succeeded)
                    *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_26;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[1], ll_backend__coverage_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__coverage_profiling__ArgX8_18)), ((MR_Box) (ll_backend__coverage_profiling__ArgY8_19)));
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
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Integer ll_backend__coverage_profiling__CastX_19 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__1_1;
    MR_Integer ll_backend__coverage_profiling__CastY_20 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;

    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_19 == ll_backend__coverage_profiling__CastY_20);
    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__coverage_profiling__TypeInfo_26_26;
      MR_Word ll_backend__coverage_profiling__TypeInfo_27_27;
      MR_Word ll_backend__coverage_profiling__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ll_backend__coverage_profiling__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 7)));

      ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[0], ((MR_Box) (ll_backend__coverage_profiling__ArgX1_3)), ((MR_Box) (ll_backend__coverage_profiling__ArgY1_4)));
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__coverage_profiling__ArgX2_5, ll_backend__coverage_profiling__ArgY2_6);
        if (ll_backend__coverage_profiling__succeeded)
        {
          ll_backend__coverage_profiling__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ll_backend__coverage_profiling__ArgX3_7, ll_backend__coverage_profiling__ArgY3_8);
          if (ll_backend__coverage_profiling__succeeded)
          {
            ll_backend__coverage_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__coverage_profiling__ArgX4_9, ll_backend__coverage_profiling__ArgY4_10);
            if (ll_backend__coverage_profiling__succeeded)
            {
              ll_backend__coverage_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__coverage_profiling__ArgX5_11, ll_backend__coverage_profiling__ArgY5_12);
              if (ll_backend__coverage_profiling__succeeded)
              {
                ll_backend__coverage_profiling__TypeInfo_26_26 = (MR_Word) &ll_backend__coverage_profiling_scalar_common_2[0];
                ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__coverage_profiling__TypeInfo_26_26, ((MR_Box) (ll_backend__coverage_profiling__ArgX6_13)), ((MR_Box) (ll_backend__coverage_profiling__ArgY6_14)));
                if (ll_backend__coverage_profiling__succeeded)
                {
                  ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(ll_backend__coverage_profiling__ArgX7_15, ll_backend__coverage_profiling__ArgY7_16);
                  if (ll_backend__coverage_profiling__succeeded)
                  {
                    ll_backend__coverage_profiling__TypeInfo_27_27 = (MR_Word) &ll_backend__coverage_profiling_scalar_common_1[1];
                    ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__coverage_profiling__TypeInfo_27_27, ((MR_Box) (ll_backend__coverage_profiling__ArgX8_17)), ((MR_Box) (ll_backend__coverage_profiling__ArgY8_18)));
                  }
                }
              }
            }
          }
        }
      }
    }
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Integer ll_backend__coverage_profiling__CastX_30 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
    MR_Integer ll_backend__coverage_profiling__CastY_31 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_30 == ll_backend__coverage_profiling__CastY_31);
    if (ll_backend__coverage_profiling__succeeded)
      *ll_backend__coverage_profiling__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__coverage_profiling__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_22;
      MR_Integer ll_backend__coverage_profiling__Var_41 = (MR_Integer) ll_backend__coverage_profiling__ArgX1_4;
      MR_Integer ll_backend__coverage_profiling__Var_42 = (MR_Integer) ll_backend__coverage_profiling__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_22, ll_backend__coverage_profiling__Var_41, ll_backend__coverage_profiling__Var_42);
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_22 == (MR_Integer) 0);
      ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_22;
      else
      {
        MR_Word ll_backend__coverage_profiling__Var_23;
        MR_Integer ll_backend__coverage_profiling__Var_43 = (MR_Integer) ll_backend__coverage_profiling__ArgX2_6;
        MR_Integer ll_backend__coverage_profiling__Var_44 = (MR_Integer) ll_backend__coverage_profiling__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_23, ll_backend__coverage_profiling__Var_43, ll_backend__coverage_profiling__Var_44);
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_23 == (MR_Integer) 0);
        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
        if (ll_backend__coverage_profiling__succeeded)
          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_23;
        else
        {
          MR_Word ll_backend__coverage_profiling__Var_24;
          MR_Integer ll_backend__coverage_profiling__Var_45 = (MR_Integer) ll_backend__coverage_profiling__ArgX3_8;
          MR_Integer ll_backend__coverage_profiling__Var_46 = (MR_Integer) ll_backend__coverage_profiling__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_24, ll_backend__coverage_profiling__Var_45, ll_backend__coverage_profiling__Var_46);
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_24 == (MR_Integer) 0);
          ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
          if (ll_backend__coverage_profiling__succeeded)
            *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_24;
          else
          {
            MR_Word ll_backend__coverage_profiling__Var_25;
            MR_Integer ll_backend__coverage_profiling__Var_47 = (MR_Integer) ll_backend__coverage_profiling__ArgX4_10;
            MR_Integer ll_backend__coverage_profiling__Var_48 = (MR_Integer) ll_backend__coverage_profiling__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_25, ll_backend__coverage_profiling__Var_47, ll_backend__coverage_profiling__Var_48);
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_25 == (MR_Integer) 0);
            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
            if (ll_backend__coverage_profiling__succeeded)
              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_25;
            else
            {
              MR_Word ll_backend__coverage_profiling__Var_26;
              MR_Integer ll_backend__coverage_profiling__Var_49 = (MR_Integer) ll_backend__coverage_profiling__ArgX5_12;
              MR_Integer ll_backend__coverage_profiling__Var_50 = (MR_Integer) ll_backend__coverage_profiling__ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_26, ll_backend__coverage_profiling__Var_49, ll_backend__coverage_profiling__Var_50);
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_26 == (MR_Integer) 0);
              ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
              if (ll_backend__coverage_profiling__succeeded)
                *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_26;
              else
              {
                MR_Word ll_backend__coverage_profiling__Var_27;
                MR_Integer ll_backend__coverage_profiling__Var_51 = (MR_Integer) ll_backend__coverage_profiling__ArgX6_14;
                MR_Integer ll_backend__coverage_profiling__Var_52 = (MR_Integer) ll_backend__coverage_profiling__ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_27, ll_backend__coverage_profiling__Var_51, ll_backend__coverage_profiling__Var_52);
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_27 == (MR_Integer) 0);
                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
                if (ll_backend__coverage_profiling__succeeded)
                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_27;
                else
                {
                  MR_Word ll_backend__coverage_profiling__Var_28;
                  MR_Integer ll_backend__coverage_profiling__Var_53 = (MR_Integer) ll_backend__coverage_profiling__ArgX7_16;
                  MR_Integer ll_backend__coverage_profiling__Var_54 = (MR_Integer) ll_backend__coverage_profiling__ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_28, ll_backend__coverage_profiling__Var_53, ll_backend__coverage_profiling__Var_54);
                  ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_28 == (MR_Integer) 0);
                  ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
                  if (ll_backend__coverage_profiling__succeeded)
                    *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_28;
                  else
                  {
                    MR_Word ll_backend__coverage_profiling__Var_29;
                    MR_Integer ll_backend__coverage_profiling__Var_55 = (MR_Integer) ll_backend__coverage_profiling__ArgX8_18;
                    MR_Integer ll_backend__coverage_profiling__Var_56 = (MR_Integer) ll_backend__coverage_profiling__ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__Var_29, ll_backend__coverage_profiling__Var_55, ll_backend__coverage_profiling__Var_56);
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_29 == (MR_Integer) 0);
                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
                    if (ll_backend__coverage_profiling__succeeded)
                      *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__Var_29;
                    else
                    {
                      MR_Integer ll_backend__coverage_profiling__Var_57 = (MR_Integer) ll_backend__coverage_profiling__ArgX9_20;
                      MR_Integer ll_backend__coverage_profiling__Var_58 = (MR_Integer) ll_backend__coverage_profiling__ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__Var_57, ll_backend__coverage_profiling__Var_58);
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
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Integer ll_backend__coverage_profiling__CastX_21 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__1_1;
    MR_Integer ll_backend__coverage_profiling__CastY_22 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;

    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_21 == ll_backend__coverage_profiling__CastY_22);
    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__coverage_profiling__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX1_3 == ll_backend__coverage_profiling__ArgY1_4);
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX2_5 == ll_backend__coverage_profiling__ArgY2_6);
        if (ll_backend__coverage_profiling__succeeded)
        {
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX3_7 == ll_backend__coverage_profiling__ArgY3_8);
          if (ll_backend__coverage_profiling__succeeded)
          {
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX4_9 == ll_backend__coverage_profiling__ArgY4_10);
            if (ll_backend__coverage_profiling__succeeded)
            {
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX5_11 == ll_backend__coverage_profiling__ArgY5_12);
              if (ll_backend__coverage_profiling__succeeded)
              {
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX6_13 == ll_backend__coverage_profiling__ArgY6_14);
                if (ll_backend__coverage_profiling__succeeded)
                {
                  ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX7_15 == ll_backend__coverage_profiling__ArgY7_16);
                  if (ll_backend__coverage_profiling__succeeded)
                  {
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX8_17 == ll_backend__coverage_profiling__ArgY8_18);
                    if (ll_backend__coverage_profiling__succeeded)
                      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ArgX9_19 == ll_backend__coverage_profiling__ArgY9_20);
                  }
                }
              }
            }
          }
        }
      }
    }
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
{
  {
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar1_4 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar2_5 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__Cast_HeadVar1_4, ll_backend__coverage_profiling__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__HeadVar__2_1 == ll_backend__coverage_profiling__HeadVar__2_2);

    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
{
  {
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar1_4 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar2_5 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__Cast_HeadVar1_4, ll_backend__coverage_profiling__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__HeadVar__2_1 == ll_backend__coverage_profiling__HeadVar__2_2);

    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_8,
  MR_Word ll_backend__coverage_profiling__Goal0_9,
  MR_Word * ll_backend__coverage_profiling__Goal_10,
  MR_Word ll_backend__coverage_profiling__TrivialAcc_11,
  MR_Word * ll_backend__coverage_profiling__Trivial_12,
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13,
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_14)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__TrivialGoal_15;
    MR_Word ll_backend__coverage_profiling__Var_16;

    ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_8, ll_backend__coverage_profiling__Goal0_9, ll_backend__coverage_profiling__Goal_10, ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13, &ll_backend__coverage_profiling__Var_16);
    ll_backend__coverage_profiling__TrivialGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_16, (MR_Integer) 0)));
    *ll_backend__coverage_profiling__PortCountsCoverageAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_16, (MR_Integer) 1)));
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialAcc_11 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_15 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
      *ll_backend__coverage_profiling__Trivial_12 = (MR_Integer) 0;
    else
      *ll_backend__coverage_profiling__Trivial_12 = (MR_Integer) 1;
  }
}

void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(
  MR_Word ll_backend__coverage_profiling__ModuleInfo_10,
  MR_Word ll_backend__coverage_profiling__PredProcId_11,
  MR_Word ll_backend__coverage_profiling__ContainingGoalMap_12,
  MR_Word ll_backend__coverage_profiling__MaybeRecInfo_13,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_26,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_0_27,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_28,
  MR_Word * ll_backend__coverage_profiling__CoveragePoints_16)
{
  {
    MR_Word ll_backend__coverage_profiling__TypeCtorInfo_6_92;
    MR_Word ll_backend__coverage_profiling__TypeCtorInfo_7_93;
    MR_Word ll_backend__coverage_profiling__CoverageProfilingOptions_17;
    MR_Word ll_backend__coverage_profiling__CoverageInfo0_18;
    MR_Word ll_backend__coverage_profiling__RunFirstPass_19;
    MR_Word ll_backend__coverage_profiling__CoverageInfo_22;
    MR_Word ll_backend__coverage_profiling__CoveragePointsMap_24;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29;
    MR_Word ll_backend__coverage_profiling__Globals_58;
    MR_Word ll_backend__coverage_profiling__Static_59;
    MR_Word ll_backend__coverage_profiling__DataType_60;
    MR_Word ll_backend__coverage_profiling__UseCalls_61;
    MR_Word ll_backend__coverage_profiling__CoverageAfterGoal_62;
    MR_Word ll_backend__coverage_profiling__BranchIf_63;
    MR_Word ll_backend__coverage_profiling__BranchSwitch_64;
    MR_Word ll_backend__coverage_profiling__BranchDisj_65;
    MR_Word ll_backend__coverage_profiling__UsePortCounts_66;
    MR_Word ll_backend__coverage_profiling__UseTrivial_67;
    MR_Word ll_backend__coverage_profiling__RunFirstPass_68;
    MR_Word ll_backend__coverage_profiling__Var_84;
    MR_Word ll_backend__coverage_profiling__Var_85;
    MR_Word ll_backend__coverage_profiling__AssocList_91;
    MR_Word ll_backend__coverage_profiling__Var_34;
    MR_Word ll_backend__coverage_profiling__Var_35;
    MR_Word ll_backend__coverage_profiling__Var_36;
    MR_Word ll_backend__coverage_profiling__Var_37;
    MR_Word ll_backend__coverage_profiling__Var_38;
    MR_Word ll_backend__coverage_profiling__Var_39;
    MR_Word ll_backend__coverage_profiling__Var_40;
    MR_Word ll_backend__coverage_profiling__Var_41;
    MR_Word ll_backend__coverage_profiling__Var_21;
    MR_Word ll_backend__coverage_profiling__Var_23;
    MR_Word ll_backend__coverage_profiling__Var_42;
    MR_Word ll_backend__coverage_profiling__Var_44;
    MR_Word ll_backend__coverage_profiling__Var_45;
    MR_Word ll_backend__coverage_profiling__Var_46;
    MR_Word ll_backend__coverage_profiling__Var_47;
    MR_Word ll_backend__coverage_profiling__Var_48;

    hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__coverage_profiling__ModuleInfo_10, &ll_backend__coverage_profiling__Globals_58);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 212, &ll_backend__coverage_profiling__Static_59);
    switch (ll_backend__coverage_profiling__Static_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__DataType_60 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__DataType_60 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 211, &ll_backend__coverage_profiling__UseCalls_61);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 213, &ll_backend__coverage_profiling__CoverageAfterGoal_62);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 214, &ll_backend__coverage_profiling__BranchIf_63);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 215, &ll_backend__coverage_profiling__BranchSwitch_64);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 216, &ll_backend__coverage_profiling__BranchDisj_65);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 217, &ll_backend__coverage_profiling__UsePortCounts_66);
    libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_58, (MR_Integer) 218, &ll_backend__coverage_profiling__UseTrivial_67);
    mercury__bool__or_3_p_0(ll_backend__coverage_profiling__UsePortCounts_66, ll_backend__coverage_profiling__UseTrivial_67, &ll_backend__coverage_profiling__RunFirstPass_68);
    {
      ll_backend__coverage_profiling__CoverageProfilingOptions_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, 0) = ((MR_Box) ((ll_backend__coverage_profiling__DataType_60 | ((((ll_backend__coverage_profiling__UseCalls_61 << (MR_Integer) 1)) | ((((ll_backend__coverage_profiling__CoverageAfterGoal_62 << (MR_Integer) 2)) | ((((ll_backend__coverage_profiling__BranchIf_63 << (MR_Integer) 3)) | ((((ll_backend__coverage_profiling__BranchSwitch_64 << (MR_Integer) 4)) | ((((ll_backend__coverage_profiling__BranchDisj_65 << (MR_Integer) 5)) | ((((ll_backend__coverage_profiling__UsePortCounts_66 << (MR_Integer) 6)) | ((((ll_backend__coverage_profiling__UseTrivial_67 << (MR_Integer) 7)) | ((ll_backend__coverage_profiling__RunFirstPass_68 << (MR_Integer) 8)))))))))))))))))));
    }
    ll_backend__coverage_profiling__Var_84 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0);
    ll_backend__coverage_profiling__Var_85 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      ll_backend__coverage_profiling__CoverageInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 0) = ((MR_Box) (ll_backend__coverage_profiling__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_85));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_0_27));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 3) = ((MR_Box) (ll_backend__coverage_profiling__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 4) = ((MR_Box) (ll_backend__coverage_profiling__PredProcId_11));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 5) = ((MR_Box) (ll_backend__coverage_profiling__MaybeRecInfo_13));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 6) = ((MR_Box) (ll_backend__coverage_profiling__CoverageProfilingOptions_17));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 7) = ((MR_Box) (ll_backend__coverage_profiling__ContainingGoalMap_12));
    }
    ll_backend__coverage_profiling__Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__RunFirstPass_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    switch (ll_backend__coverage_profiling__RunFirstPass_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29 = ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__coverage_profiling__Var_20;

          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CoverageProfilingOptions_17, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25, &ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29, (MR_Integer) 0, &ll_backend__coverage_profiling__Var_20);
        }
        break;
    }
    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_26, (MR_Integer) 0, &ll_backend__coverage_profiling__Var_21, ll_backend__coverage_profiling__CoverageInfo0_18, &ll_backend__coverage_profiling__CoverageInfo_22, &ll_backend__coverage_profiling__Var_23);
    ll_backend__coverage_profiling__CoveragePointsMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 1)));
    *ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 2)));
    ll_backend__coverage_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 3)));
    ll_backend__coverage_profiling__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 4)));
    ll_backend__coverage_profiling__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 5)));
    ll_backend__coverage_profiling__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 6)));
    ll_backend__coverage_profiling__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 7)));
    ll_backend__coverage_profiling__TypeCtorInfo_6_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    ll_backend__coverage_profiling__TypeCtorInfo_7_93 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
    mercury__map__to_sorted_assoc_list_2_p_0(ll_backend__coverage_profiling__TypeCtorInfo_6_92, ll_backend__coverage_profiling__TypeCtorInfo_7_93, ll_backend__coverage_profiling__CoveragePointsMap_24, &ll_backend__coverage_profiling__AssocList_91);
    mercury__assoc_list__values_2_p_0(ll_backend__coverage_profiling__TypeCtorInfo_6_92, ll_backend__coverage_profiling__TypeCtorInfo_7_93, ll_backend__coverage_profiling__AssocList_91, ll_backend__coverage_profiling__CoveragePoints_16);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
      *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Case_10;
      MR_Word ll_backend__coverage_profiling__Cases_11;
      MR_Word ll_backend__coverage_profiling__FirstFunctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__LaterFunctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__Goal_17;
      MR_Word ll_backend__coverage_profiling__TrivialGoal_18;
      MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19;
      MR_Word ll_backend__coverage_profiling__TrivialSwitchcase_20;
      MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21;
      MR_Word ll_backend__coverage_profiling__Var_23;

      ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goal0_16, &ll_backend__coverage_profiling__Goal_17, (MR_Integer) 1, &ll_backend__coverage_profiling__Var_23);
      ll_backend__coverage_profiling__TrivialGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_23, (MR_Integer) 0)));
      ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_23, (MR_Integer) 1)));
      ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Cases0_9, &ll_backend__coverage_profiling__Cases_11, &ll_backend__coverage_profiling__TrivialSwitchcase_20, &ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21);
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_18 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialSwitchcase_20 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
      else
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 1;
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 0;
      else
        *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 1;
      {
        ll_backend__coverage_profiling__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 0) = ((MR_Box) (ll_backend__coverage_profiling__FirstFunctor_14));
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 1) = ((MR_Box) (ll_backend__coverage_profiling__LaterFunctors_15));
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goal_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__coverage_profiling__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Case_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Cases_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
      *ll_backend__coverage_profiling__HeadVar__6_6 = ll_backend__coverage_profiling__HeadVar__5_5;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Goal_14;
      MR_Word ll_backend__coverage_profiling__Goals_15;
      MR_Word ll_backend__coverage_profiling__TrivialGoal_19;
      MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20;
      MR_Word ll_backend__coverage_profiling__TrivialDisj_21;
      MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22;
      MR_Word ll_backend__coverage_profiling__Var_23;

      ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goal0_12, &ll_backend__coverage_profiling__Goal_14, ll_backend__coverage_profiling__HeadVar__5_5, &ll_backend__coverage_profiling__Var_23);
      ll_backend__coverage_profiling__TrivialGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_23, (MR_Integer) 0)));
      ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_23, (MR_Integer) 1)));
      ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goals0_13, &ll_backend__coverage_profiling__Goals_15, &ll_backend__coverage_profiling__TrivialDisj_21, (MR_Integer) 1, &ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__coverage_profiling__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_15));
      }
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_19 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialDisj_21 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
      else
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 1;
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
        *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Integer) 0;
      else
        *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
  MR_Box ll_backend__coverage_profiling__closure_arg,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_4,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_5,
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_6)
{
  {
    MR_Box ll_backend__coverage_profiling__closure = ll_backend__coverage_profiling__closure_arg;
    MR_Word ll_backend__coverage_profiling__conv2_Goal_10;
    MR_Word ll_backend__coverage_profiling__conv1_Trivial_12;
    MR_Word ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14;

    ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), &ll_backend__coverage_profiling__conv2_Goal_10, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3), &ll_backend__coverage_profiling__conv1_Trivial_12, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_5), &ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14);
    *ll_backend__coverage_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__coverage_profiling__conv2_Goal_10));
    *ll_backend__coverage_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__coverage_profiling__conv1_Trivial_12));
    *ll_backend__coverage_profiling__wrapper_arg_6 = ((MR_Box) (ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14));
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
  MR_Word ll_backend__coverage_profiling__Goal0_7,
  MR_Word * ll_backend__coverage_profiling__Goal_8,
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9,
  MR_Word * ll_backend__coverage_profiling__Info_10)
{
  {
    MR_Word ll_backend__coverage_profiling__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_7, (MR_Integer) 0)));
    MR_Word ll_backend__coverage_profiling__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_7, (MR_Integer) 1)));
    MR_Word ll_backend__coverage_profiling__Trivial0_19;
    MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20;
    MR_Word ll_backend__coverage_profiling__GoalExpr_21;
    MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfter_75;
    MR_Word ll_backend__coverage_profiling__Trivial_76;
    MR_Word ll_backend__coverage_profiling__MaybeDPInfo0_77;
    MR_Word ll_backend__coverage_profiling__DPInfo_80;
    MR_Word ll_backend__coverage_profiling__GoalInfo_81;
    MR_Word ll_backend__coverage_profiling__Var_101;
    MR_Word ll_backend__coverage_profiling__Var_148;
    MR_Word ll_backend__coverage_profiling__Var_149;
    MR_Word ll_backend__coverage_profiling__Var_147;
    MR_Word ll_backend__coverage_profiling__Var_150;
    MR_Word ll_backend__coverage_profiling__Var_151;
    MR_Word ll_backend__coverage_profiling__Var_152;
    MR_Word ll_backend__coverage_profiling__Var_153;
    MR_Word ll_backend__coverage_profiling__Var_154;
    MR_Word ll_backend__coverage_profiling__Var_155;

    switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__coverage_profiling__InnerGoal0_57 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__GoalExpr0_11), (MR_Integer) 0);
          MR_Word ll_backend__coverage_profiling__InnerGoal_58;
          MR_Word ll_backend__coverage_profiling__Var_89;

          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__InnerGoal0_57, &ll_backend__coverage_profiling__InnerGoal_58, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__Var_89);
          ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_89, (MR_Integer) 0)));
          ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_89, (MR_Integer) 1)));
          ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__coverage_profiling__InnerGoal_58);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
          ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
          ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__coverage_profiling__BuiltinState_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
          MR_Word ll_backend__coverage_profiling__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 0)));
          MR_Integer ll_backend__coverage_profiling__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
          MR_Word ll_backend__coverage_profiling__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
          MR_Word ll_backend__coverage_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
          MR_Word ll_backend__coverage_profiling__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 5)));

          switch (ll_backend__coverage_profiling__BuiltinState_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
                ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
                ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
              }
              break;
          }
          ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__coverage_profiling__GenericCall_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word ll_backend__coverage_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GenericCall_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
                    ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
                    ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
                  }
                  break;
              }
              ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
              ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__coverage_profiling__TypeCtorInfo_144_144;
              MR_Word ll_backend__coverage_profiling__ConjType_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Goals0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Goals_51;
              MR_Word ll_backend__coverage_profiling__Var_90;
              MR_Box ll_backend__coverage_profiling__conv4_Trivial0_19;
              MR_Box ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20;

              {
                ll_backend__coverage_profiling__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_90, 0) = ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_90, 1) = ((MR_Box) (ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_90, 3) = ((MR_Box) (ll_backend__coverage_profiling__CPOptions_6));
              }
              ll_backend__coverage_profiling__TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_foldl2_7_p_0(ll_backend__coverage_profiling__TypeCtorInfo_144_144, ll_backend__coverage_profiling__TypeCtorInfo_144_144, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0, ll_backend__coverage_profiling__Var_90, ll_backend__coverage_profiling__Goals0_50, &ll_backend__coverage_profiling__Goals_51, ((MR_Box) ((MR_Integer) 0)), &ll_backend__coverage_profiling__conv4_Trivial0_19, ((MR_Box) (ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9)), &ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20);
              ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) ll_backend__coverage_profiling__conv4_Trivial0_19);
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20);
              {
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__ConjType_49));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goals_51));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__coverage_profiling__Goals0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Goals_103;

              ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__Goals0_102, &ll_backend__coverage_profiling__Goals_103, &ll_backend__coverage_profiling__Trivial0_19, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20);
              {
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_103));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__coverage_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__Cases_55;
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56;

              ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__Cases0_54, &ll_backend__coverage_profiling__Cases_55, &ll_backend__coverage_profiling__Trivial0_19, &ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56);
              {
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_52));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__CanFail_53));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 3) = ((MR_Box) (ll_backend__coverage_profiling__Cases_55));
              }
              switch (ll_backend__coverage_profiling__CanFail_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56;
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__coverage_profiling__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Var_88;
              MR_Word ll_backend__coverage_profiling__InnerGoal0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__InnerGoal_105;

              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__InnerGoal0_104, &ll_backend__coverage_profiling__InnerGoal_105, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__Var_88);
              ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_88, (MR_Integer) 0)));
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_88, (MR_Integer) 1)));
              {
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Reason_59));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__InnerGoal_105));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__coverage_profiling__Vars_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__CondGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__ThenGoal0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__ElseGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word ll_backend__coverage_profiling__CondGoal_64;
              MR_Word ll_backend__coverage_profiling__TrivialCond_65;
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66;
              MR_Word ll_backend__coverage_profiling__ThenGoal_67;
              MR_Word ll_backend__coverage_profiling__TrivialThen_68;
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69;
              MR_Word ll_backend__coverage_profiling__ElseGoal_70;
              MR_Word ll_backend__coverage_profiling__TrivialElse_71;
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72;
              MR_Word ll_backend__coverage_profiling__TrivialCondThen_73;
              MR_Word ll_backend__coverage_profiling__Var_85;
              MR_Word ll_backend__coverage_profiling__Var_86;
              MR_Word ll_backend__coverage_profiling__Var_87;

              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__CondGoal0_61, &ll_backend__coverage_profiling__CondGoal_64, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__Var_85);
              ll_backend__coverage_profiling__TrivialCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_85, (MR_Integer) 0)));
              ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_85, (MR_Integer) 1)));
              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__ThenGoal0_62, &ll_backend__coverage_profiling__ThenGoal_67, ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66, &ll_backend__coverage_profiling__Var_86);
              ll_backend__coverage_profiling__TrivialThen_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_86, (MR_Integer) 0)));
              ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_86, (MR_Integer) 1)));
              ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__ElseGoal0_63, &ll_backend__coverage_profiling__ElseGoal_70, ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66, &ll_backend__coverage_profiling__Var_87);
              ll_backend__coverage_profiling__TrivialElse_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_87, (MR_Integer) 0)));
              ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_87, (MR_Integer) 1)));
              {
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Vars_60));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__CondGoal_64));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 3) = ((MR_Box) (ll_backend__coverage_profiling__ThenGoal_67));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 4) = ((MR_Box) (ll_backend__coverage_profiling__ElseGoal_70));
              }
              ll_backend__coverage_profiling__goal_trivial_and_3_p_0(ll_backend__coverage_profiling__TrivialCond_65, ll_backend__coverage_profiling__TrivialThen_68, &ll_backend__coverage_profiling__TrivialCondThen_73);
              ll_backend__coverage_profiling__goal_trivial_and_3_p_0(ll_backend__coverage_profiling__TrivialCondThen_73, ll_backend__coverage_profiling__TrivialElse_71, &ll_backend__coverage_profiling__Trivial0_19);
              ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69, ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72, &ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    ll_backend__coverage_profiling__Var_155 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    switch (ll_backend__coverage_profiling__Var_149) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__PortCountsCoverageAfter_75 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__has_port_counts_after_4_p_0(ll_backend__coverage_profiling__Goal0_7, ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__PortCountsCoverageAfter_75);
        break;
    }
    switch (ll_backend__coverage_profiling__Var_148) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__Trivial_76 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__Trivial_76 = ll_backend__coverage_profiling__Trivial0_19;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__coverage_profiling__Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Trivial_76));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__PortCountsCoverageAfter_75));
    }
    ll_backend__coverage_profiling__MaybeDPInfo0_77 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo0_12);
    if ((ll_backend__coverage_profiling__MaybeDPInfo0_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "goal_dp_info not present");
        return;
      }
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__IsProfilingInstrumentation_78;
      MR_Word ll_backend__coverage_profiling__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeDPInfo0_77, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Var_100;
      MR_Word ll_backend__coverage_profiling__Var_79;

      ll_backend__coverage_profiling__IsProfilingInstrumentation_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_99, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_99, (MR_Integer) 1)));
      {
        ll_backend__coverage_profiling__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_100, 0) = ((MR_Box) (*ll_backend__coverage_profiling__Info_10));
      }
      {
        ll_backend__coverage_profiling__DPInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_80, 0) = ((MR_Box) (ll_backend__coverage_profiling__IsProfilingInstrumentation_78));
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_80, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_100));
      }
    }
    {
      ll_backend__coverage_profiling__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_101, 0) = ((MR_Box) (ll_backend__coverage_profiling__DPInfo_80));
    }
    hlds__hlds_goal__goal_info_set_maybe_dp_info_3_p_0(ll_backend__coverage_profiling__Var_101, ll_backend__coverage_profiling__GoalInfo0_12, &ll_backend__coverage_profiling__GoalInfo_81);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__coverage_profiling__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__GoalInfo_81));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
  MR_Word ll_backend__coverage_profiling__Goal_5,
  MR_Word ll_backend__coverage_profiling__PCDirect_6,
  MR_Word ll_backend__coverage_profiling__PCBefore_7,
  MR_Word * ll_backend__coverage_profiling__PC_8)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    switch (ll_backend__coverage_profiling__PCDirect_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__coverage_profiling__Detism_9;
          MR_Word ll_backend__coverage_profiling__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal_5, (MR_Integer) 1)));
          MR_Word ll_backend__coverage_profiling__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal_5, (MR_Integer) 0)));

          ll_backend__coverage_profiling__Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__Var_10);
          switch (ll_backend__coverage_profiling__Detism_9) {
            default:
              ll_backend__coverage_profiling__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 4:
              ll_backend__coverage_profiling__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              ll_backend__coverage_profiling__succeeded = MR_TRUE;
              break;
          }
          if (ll_backend__coverage_profiling__succeeded)
            *ll_backend__coverage_profiling__PC_8 = ll_backend__coverage_profiling__PCBefore_7;
          else
            *ll_backend__coverage_profiling__PC_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        *ll_backend__coverage_profiling__PC_8 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
  MR_Word ll_backend__coverage_profiling__A_4,
  MR_Word ll_backend__coverage_profiling__B_5,
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_6)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__A_4 == (MR_Integer) 0);

    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__B_5 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
      *ll_backend__coverage_profiling__PortCountsCoverageAfter_6 = (MR_Integer) 0;
    else
      *ll_backend__coverage_profiling__PortCountsCoverageAfter_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
  MR_Word ll_backend__coverage_profiling__A_4,
  MR_Word ll_backend__coverage_profiling__B_5,
  MR_Word * ll_backend__coverage_profiling__Trivial_6)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__A_4 == (MR_Integer) 0);

    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__B_5 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
      *ll_backend__coverage_profiling__Trivial_6 = (MR_Integer) 0;
    else
      *ll_backend__coverage_profiling__Trivial_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_12,
  MR_Word ll_backend__coverage_profiling__ITEExistVars_13,
  MR_Word ll_backend__coverage_profiling__Cond0_14,
  MR_Word ll_backend__coverage_profiling__Then0_15,
  MR_Word ll_backend__coverage_profiling__Else0_16,
  MR_Word * ll_backend__coverage_profiling__GoalExpr_17,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeITEKnown_18,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_19,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_56,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_21)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__Cond_22;
    MR_Word ll_backend__coverage_profiling__AddedImpurityCond_24;
    MR_Word ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25;
    MR_Word ll_backend__coverage_profiling__CPOptions_27;
    MR_Word ll_backend__coverage_profiling__CPOBranchIf_28;
    MR_Word ll_backend__coverage_profiling__IsMDProfInst_29;
    MR_Word ll_backend__coverage_profiling__NextCoverageKnownThen_44;
    MR_Word ll_backend__coverage_profiling__NextCoverageKnownElse_47;
    MR_Word ll_backend__coverage_profiling__Then_50;
    MR_Word ll_backend__coverage_profiling__AddedImpurityThen_51;
    MR_Word ll_backend__coverage_profiling__Else_53;
    MR_Word ll_backend__coverage_profiling__AddedImpurityElse_54;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57;
    MR_Word ll_backend__coverage_profiling__Var_71;
    MR_Word ll_backend__coverage_profiling__Var_72;
    MR_Word ll_backend__coverage_profiling__Var_73;
    MR_Word ll_backend__coverage_profiling__Var_74;
    MR_Word ll_backend__coverage_profiling__Var_75;
    MR_Word ll_backend__coverage_profiling__Var_76;
    MR_Word ll_backend__coverage_profiling__Var_77;
    MR_Word ll_backend__coverage_profiling__Var_78;
    MR_Word ll_backend__coverage_profiling__Var_79;
    MR_Word ll_backend__coverage_profiling__Var_80;
    MR_Word ll_backend__coverage_profiling__Var_81;
    MR_Word ll_backend__coverage_profiling__Var_82;
    MR_Word ll_backend__coverage_profiling__Var_83;
    MR_Word ll_backend__coverage_profiling__Var_84;
    MR_Word ll_backend__coverage_profiling__Var_85;
    MR_Word ll_backend__coverage_profiling__Var_86;
    MR_Word ll_backend__coverage_profiling__Var_30;

    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Cond0_14, &ll_backend__coverage_profiling__Cond_22, ll_backend__coverage_profiling__CoverageBeforeITEKnown_18, &ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__AddedImpurityCond_24);
    ll_backend__coverage_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
    ll_backend__coverage_profiling__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
    ll_backend__coverage_profiling__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
    ll_backend__coverage_profiling__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
    ll_backend__coverage_profiling__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
    ll_backend__coverage_profiling__CPOptions_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
    ll_backend__coverage_profiling__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
    ll_backend__coverage_profiling__Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__CPOBranchIf_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__IsMDProfInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_12, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_12, (MR_Integer) 1)));
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchIf_28 == (MR_Integer) 1);
    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_29 == (MR_Integer) 1);
    if (ll_backend__coverage_profiling__succeeded)
    {
      MR_Word ll_backend__coverage_profiling__ContainingGoalMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
      MR_Word ll_backend__coverage_profiling__ElseId_36;
      MR_Word ll_backend__coverage_profiling__ElsePath_37;
      MR_Word ll_backend__coverage_profiling__CondDetism_38;
      MR_Word ll_backend__coverage_profiling__CondSolns_40;
      MR_Word ll_backend__coverage_profiling__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Else0_16, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Var_62;
      MR_Word ll_backend__coverage_profiling__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Else0_16, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Var_96;
      MR_Word ll_backend__coverage_profiling__Var_39;

      ll_backend__coverage_profiling__ElseId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_61);
      ll_backend__coverage_profiling__ElsePath_37 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ElseId_36);
      ll_backend__coverage_profiling__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Cond_22, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Cond_22, (MR_Integer) 1)));
      ll_backend__coverage_profiling__CondDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__Var_62);
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__coverage_profiling__CondDetism_38, &ll_backend__coverage_profiling__Var_39, &ll_backend__coverage_profiling__CondSolns_40);
      switch (ll_backend__coverage_profiling__CondSolns_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            MR_Word ll_backend__coverage_profiling__Else1_46;
            MR_Word ll_backend__coverage_profiling__CPInfoElse_52;
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69;

            {
              ll_backend__coverage_profiling__CPInfoElse_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_52, 0) = ((MR_Box) (ll_backend__coverage_profiling__ElsePath_37));
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_52, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
            }
            switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67;
                  MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_48;

                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_46, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69, &ll_backend__coverage_profiling__AddedImpurityElseGoal_48);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__coverage_profiling__ThenId_32;
                  MR_Word ll_backend__coverage_profiling__ThenPath_33;
                  MR_Word ll_backend__coverage_profiling__CPInfoThen_49;
                  MR_Word ll_backend__coverage_profiling__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
                  MR_Word ll_backend__coverage_profiling__Then1_114;
                  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116;
                  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117;
                  MR_Word ll_backend__coverage_profiling__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
                  MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_112;
                  MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_118;

                  ll_backend__coverage_profiling__ThenId_32 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_58);
                  ll_backend__coverage_profiling__ThenPath_33 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_32);
                  {
                    ll_backend__coverage_profiling__CPInfoThen_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_49, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_33));
                    MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_49, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                  }
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_114, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116, &ll_backend__coverage_profiling__AddedImpurityThenGoal_112);
                  ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_46, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117, &ll_backend__coverage_profiling__AddedImpurityElseGoal_118);
                  ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_49, ll_backend__coverage_profiling__Then1_114, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69);
                  ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
                }
                break;
            }
            ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoElse_52, ll_backend__coverage_profiling__Else1_46, &ll_backend__coverage_profiling__Else_53, ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
            ll_backend__coverage_profiling__AddedImpurityElse_54 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeITEKnown_18 == (MR_Integer) 0);
            if (ll_backend__coverage_profiling__succeeded)
            {
              switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120;

                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56, &ll_backend__coverage_profiling__AddedImpurityElse_54);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__coverage_profiling__ThenId_123;
                    MR_Word ll_backend__coverage_profiling__ThenPath_124;
                    MR_Word ll_backend__coverage_profiling__CPInfoThen_125;
                    MR_Word ll_backend__coverage_profiling__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
                    MR_Word ll_backend__coverage_profiling__Then1_130;
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131;
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132;
                    MR_Word ll_backend__coverage_profiling__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
                    MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_122;

                    ll_backend__coverage_profiling__ThenId_123 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_126);
                    ll_backend__coverage_profiling__ThenPath_124 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_123);
                    {
                      ll_backend__coverage_profiling__CPInfoThen_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_125, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_124));
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_125, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                    }
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_130, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131, &ll_backend__coverage_profiling__AddedImpurityThenGoal_122);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132, &ll_backend__coverage_profiling__AddedImpurityElse_54);
                    ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_125, ll_backend__coverage_profiling__Then1_130, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
                    ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
                  }
                  break;
              }
            }
            else
            {
              MR_Word ll_backend__coverage_profiling__CPInfoElse_144;
              MR_Word ll_backend__coverage_profiling__Else1_206;
              MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208;

              {
                ll_backend__coverage_profiling__CPInfoElse_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_144, 0) = ((MR_Box) (ll_backend__coverage_profiling__ElsePath_37));
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_144, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
              }
              switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165;
                    MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_164;

                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_206, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208, &ll_backend__coverage_profiling__AddedImpurityElseGoal_164);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__coverage_profiling__ThenId_172;
                    MR_Word ll_backend__coverage_profiling__ThenPath_173;
                    MR_Word ll_backend__coverage_profiling__CPInfoThen_174;
                    MR_Word ll_backend__coverage_profiling__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
                    MR_Word ll_backend__coverage_profiling__Then1_177;
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178;
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179;
                    MR_Word ll_backend__coverage_profiling__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
                    MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_168;
                    MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_169;

                    ll_backend__coverage_profiling__ThenId_172 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_175);
                    ll_backend__coverage_profiling__ThenPath_173 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_172);
                    {
                      ll_backend__coverage_profiling__CPInfoThen_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_174, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_173));
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_174, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
                    }
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_177, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178, &ll_backend__coverage_profiling__AddedImpurityThenGoal_168);
                    ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_206, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179, &ll_backend__coverage_profiling__AddedImpurityElseGoal_169);
                    ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_174, ll_backend__coverage_profiling__Then1_177, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208);
                    ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
                  }
                  break;
              }
              ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoElse_144, ll_backend__coverage_profiling__Else1_206, &ll_backend__coverage_profiling__Else_53, ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
              ll_backend__coverage_profiling__AddedImpurityElse_54 = (MR_Integer) 1;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108, &ll_backend__coverage_profiling__AddedImpurityThen_51);
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 1, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56, &ll_backend__coverage_profiling__AddedImpurityElse_54);
    }
    ll_backend__coverage_profiling__Var_71 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityThen_51, ll_backend__coverage_profiling__AddedImpurityElse_54);
    *ll_backend__coverage_profiling__AddedImpurity_21 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityCond_24, ll_backend__coverage_profiling__Var_71);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__coverage_profiling__GoalExpr_17 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__ITEExistVars_13));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__coverage_profiling__Cond_22));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__coverage_profiling__Then_50));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__coverage_profiling__Else_53));
    }
    switch (ll_backend__coverage_profiling__NextCoverageKnownThen_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ll_backend__coverage_profiling__NextCoverageKnownElse_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
  MR_Word ll_backend__coverage_profiling__SwitchCanFail_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_10,
  MR_Word * ll_backend__coverage_profiling__HeadVar__11_11)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    if ((ll_backend__coverage_profiling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__coverage_profiling__HeadVar__11_11 = (MR_Integer) 0;
      *ll_backend__coverage_profiling__STATE_VARIABLE_Info_10 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9;
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__Case0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Cases0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Case_26;
      MR_Word ll_backend__coverage_profiling__Cases_27;
      MR_Word ll_backend__coverage_profiling__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36;
      MR_Word ll_backend__coverage_profiling__CPOptions_39;
      MR_Word ll_backend__coverage_profiling__CPOBranchSwitch_40;
      MR_Word ll_backend__coverage_profiling__IsMDProfInst_41;
      MR_Word ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44;
      MR_Word ll_backend__coverage_profiling__CoverageAfterCaseKnown_46;
      MR_Word ll_backend__coverage_profiling__Goal_52;
      MR_Word ll_backend__coverage_profiling__AddedImpurityHead_53;
      MR_Word ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54;
      MR_Word ll_backend__coverage_profiling__AddedImpurityTail_55;
      MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61;
      MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64;
      MR_Word ll_backend__coverage_profiling__Var_67;
      MR_Word ll_backend__coverage_profiling__Var_68;
      MR_Word ll_backend__coverage_profiling__Var_69;
      MR_Word ll_backend__coverage_profiling__Var_70;
      MR_Word ll_backend__coverage_profiling__Var_71;
      MR_Word ll_backend__coverage_profiling__Var_72;
      MR_Word ll_backend__coverage_profiling__Var_73;
      MR_Word ll_backend__coverage_profiling__Var_74;
      MR_Word ll_backend__coverage_profiling__Var_75;
      MR_Word ll_backend__coverage_profiling__Var_76;
      MR_Word ll_backend__coverage_profiling__Var_77;
      MR_Word ll_backend__coverage_profiling__Var_78;
      MR_Word ll_backend__coverage_profiling__Var_79;
      MR_Word ll_backend__coverage_profiling__Var_80;
      MR_Word ll_backend__coverage_profiling__Var_81;
      MR_Word ll_backend__coverage_profiling__Var_42;

      if ((ll_backend__coverage_profiling__Cases0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        switch (ll_backend__coverage_profiling__SwitchCanFail_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            switch (ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
                break;
            }
            break;
        }
      else
        ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
      ll_backend__coverage_profiling__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
      ll_backend__coverage_profiling__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
      ll_backend__coverage_profiling__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
      ll_backend__coverage_profiling__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
      ll_backend__coverage_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
      ll_backend__coverage_profiling__CPOptions_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
      ll_backend__coverage_profiling__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
      ll_backend__coverage_profiling__Var_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__CPOBranchSwitch_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      ll_backend__coverage_profiling__IsMDProfInst_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1)));
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchSwitch_40 == (MR_Integer) 1);
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 == (MR_Integer) 1);
        if (ll_backend__coverage_profiling__succeeded)
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_41 == (MR_Integer) 1);
      }
      if (ll_backend__coverage_profiling__succeeded)
      {
        MR_Word ll_backend__coverage_profiling__Goal1_45;
        MR_Word ll_backend__coverage_profiling__CaseId_48;
        MR_Word ll_backend__coverage_profiling__ContainingGoalMap_49;
        MR_Word ll_backend__coverage_profiling__CasePath_50;
        MR_Word ll_backend__coverage_profiling__CoveragePoint_51;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60;
        MR_Word ll_backend__coverage_profiling__Var_62;
        MR_Word ll_backend__coverage_profiling__AddedImpurityHead0_47;
        MR_Word ll_backend__coverage_profiling__Var_82;
        MR_Word ll_backend__coverage_profiling__Var_83;
        MR_Word ll_backend__coverage_profiling__Var_84;
        MR_Word ll_backend__coverage_profiling__Var_85;
        MR_Word ll_backend__coverage_profiling__Var_86;
        MR_Word ll_backend__coverage_profiling__Var_87;
        MR_Word ll_backend__coverage_profiling__Var_88;
        MR_Word ll_backend__coverage_profiling__Var_89;

        ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44 = (MR_Integer) 0;
        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Goal0_35, &ll_backend__coverage_profiling__Goal1_45, ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44, &ll_backend__coverage_profiling__CoverageAfterCaseKnown_46, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, &ll_backend__coverage_profiling__AddedImpurityHead0_47);
        ll_backend__coverage_profiling__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_35, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_35, (MR_Integer) 1)));
        ll_backend__coverage_profiling__CaseId_48 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_62);
        ll_backend__coverage_profiling__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 1)));
        ll_backend__coverage_profiling__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 2)));
        ll_backend__coverage_profiling__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 3)));
        ll_backend__coverage_profiling__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 4)));
        ll_backend__coverage_profiling__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 5)));
        ll_backend__coverage_profiling__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 6)));
        ll_backend__coverage_profiling__ContainingGoalMap_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 7)));
        ll_backend__coverage_profiling__CasePath_50 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_49, ll_backend__coverage_profiling__CaseId_48);
        {
          ll_backend__coverage_profiling__CoveragePoint_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoveragePoint_51, 0) = ((MR_Box) (ll_backend__coverage_profiling__CasePath_50));
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoveragePoint_51, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
        }
        ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_39, ll_backend__coverage_profiling__CoveragePoint_51, ll_backend__coverage_profiling__Goal1_45, &ll_backend__coverage_profiling__Goal_52, ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64);
        ll_backend__coverage_profiling__AddedImpurityHead_53 = (MR_Integer) 1;
      }
      else
      {
        ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44 = ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36;
        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Goal0_35, &ll_backend__coverage_profiling__Goal_52, ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44, &ll_backend__coverage_profiling__CoverageAfterCaseKnown_46, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64, &ll_backend__coverage_profiling__AddedImpurityHead_53);
      }
      switch (ll_backend__coverage_profiling__CoverageAfterCaseKnown_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
          break;
      }
      switch (ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
          break;
      }
      ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(ll_backend__coverage_profiling__DPInfo_1, ll_backend__coverage_profiling__SwitchCanFail_2, ll_backend__coverage_profiling__Cases0_25, &ll_backend__coverage_profiling__Cases_27, ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5, ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8, ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64, ll_backend__coverage_profiling__STATE_VARIABLE_Info_10, &ll_backend__coverage_profiling__AddedImpurityTail_55);
      {
        ll_backend__coverage_profiling__Case_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 0) = ((MR_Box) (ll_backend__coverage_profiling__MainConsId_33));
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 1) = ((MR_Box) (ll_backend__coverage_profiling__OtherConsIds_34));
        MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goal_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__coverage_profiling__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Case_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Cases_27));
      }
      mercury__bool__or_3_p_0(ll_backend__coverage_profiling__AddedImpurityHead_53, ll_backend__coverage_profiling__AddedImpurityTail_55, ll_backend__coverage_profiling__HeadVar__11_11);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_10,
  MR_Word ll_backend__coverage_profiling__CanFail_11,
  MR_Word ll_backend__coverage_profiling__Cases0_12,
  MR_Word * ll_backend__coverage_profiling__Cases_13,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14,
  MR_Word * ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_17)
{
  {
    MR_Word ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18;

    switch (ll_backend__coverage_profiling__CanFail_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18 = (MR_Integer) 0;
        break;
    }
    ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(ll_backend__coverage_profiling__DPInfo_10, ll_backend__coverage_profiling__CanFail_11, ll_backend__coverage_profiling__Cases0_12, ll_backend__coverage_profiling__Cases_13, ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14, (MR_Integer) 0, ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18, ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_17);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown0_2,
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_8,
  MR_Word * ll_backend__coverage_profiling__HeadVar__9_9)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    if ((ll_backend__coverage_profiling__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__coverage_profiling__HeadVar__9_9 = (MR_Integer) 0;
      *ll_backend__coverage_profiling__STATE_VARIABLE_Info_8 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7;
      *ll_backend__coverage_profiling__HeadVar__4_4 = ll_backend__coverage_profiling__HeadVar__3_3;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__HeadDisjunct0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__5_5, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__TailDisjuncts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__5_5, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__HeadDisjunct_23;
      MR_Word ll_backend__coverage_profiling__TailDisjuncts_24;
      MR_Word ll_backend__coverage_profiling__CPOptions_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
      MR_Word ll_backend__coverage_profiling__CPOBranchDisj_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__IsMDProfInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
      MR_Word ll_backend__coverage_profiling__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
      MR_Word ll_backend__coverage_profiling__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
      MR_Word ll_backend__coverage_profiling__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
      MR_Word ll_backend__coverage_profiling__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
      MR_Word ll_backend__coverage_profiling__Var_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1)));

      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchDisj_28 == (MR_Integer) 1);
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeKnown0_2 == (MR_Integer) 1);
        if (ll_backend__coverage_profiling__succeeded)
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_29 == (MR_Integer) 1);
      }
      if (ll_backend__coverage_profiling__succeeded)
      {
        MR_Word ll_backend__coverage_profiling__HeadDisjunct1_33;
        MR_Word ll_backend__coverage_profiling__CoverageAfterDisjKnown_34;
        MR_Word ll_backend__coverage_profiling__DisjId_37;
        MR_Word ll_backend__coverage_profiling__ContainingGoalMap_38;
        MR_Word ll_backend__coverage_profiling__DisjPath_39;
        MR_Word ll_backend__coverage_profiling__HeadCoveragePoint_40;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49;
        MR_Word ll_backend__coverage_profiling__Var_50;
        MR_Word ll_backend__coverage_profiling__AddedImpurityHead_35;
        MR_Word ll_backend__coverage_profiling__AddedImpurityTail_36;
        MR_Word ll_backend__coverage_profiling__Var_68;
        MR_Word ll_backend__coverage_profiling__Var_69;
        MR_Word ll_backend__coverage_profiling__Var_70;
        MR_Word ll_backend__coverage_profiling__Var_71;
        MR_Word ll_backend__coverage_profiling__Var_72;
        MR_Word ll_backend__coverage_profiling__Var_73;
        MR_Word ll_backend__coverage_profiling__Var_74;
        MR_Word ll_backend__coverage_profiling__Var_75;

        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadDisjunct0_21, &ll_backend__coverage_profiling__HeadDisjunct1_33, (MR_Integer) 0, &ll_backend__coverage_profiling__CoverageAfterDisjKnown_34, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45, &ll_backend__coverage_profiling__AddedImpurityHead_35);
        switch (ll_backend__coverage_profiling__HeadVar__3_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (ll_backend__coverage_profiling__CoverageAfterDisjKnown_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
            break;
        }
        ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46, ll_backend__coverage_profiling__HeadVar__4_4, ll_backend__coverage_profiling__TailDisjuncts0_22, &ll_backend__coverage_profiling__TailDisjuncts_24, ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, &ll_backend__coverage_profiling__AddedImpurityTail_36);
        ll_backend__coverage_profiling__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadDisjunct0_21, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadDisjunct0_21, (MR_Integer) 1)));
        ll_backend__coverage_profiling__DisjId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__Var_50);
        ll_backend__coverage_profiling__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
        ll_backend__coverage_profiling__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
        ll_backend__coverage_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
        ll_backend__coverage_profiling__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
        ll_backend__coverage_profiling__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
        ll_backend__coverage_profiling__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
        ll_backend__coverage_profiling__ContainingGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
        ll_backend__coverage_profiling__DisjPath_39 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_38, ll_backend__coverage_profiling__DisjId_37);
        {
          ll_backend__coverage_profiling__HeadCoveragePoint_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadCoveragePoint_40, 0) = ((MR_Box) (ll_backend__coverage_profiling__DisjPath_39));
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadCoveragePoint_40, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
        }
        ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__HeadCoveragePoint_40, ll_backend__coverage_profiling__HeadDisjunct1_33, &ll_backend__coverage_profiling__HeadDisjunct_23, ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, ll_backend__coverage_profiling__STATE_VARIABLE_Info_8);
        *ll_backend__coverage_profiling__HeadVar__9_9 = (MR_Integer) 1;
      }
      else
      {
        MR_Word ll_backend__coverage_profiling__CoverageAfterDisjKnown_81;
        MR_Word ll_backend__coverage_profiling__AddedImpurityHead_82;
        MR_Word ll_backend__coverage_profiling__AddedImpurityTail_83;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84;
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85;

        ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadDisjunct0_21, &ll_backend__coverage_profiling__HeadDisjunct_23, ll_backend__coverage_profiling__CoverageBeforeKnown0_2, &ll_backend__coverage_profiling__CoverageAfterDisjKnown_81, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84, &ll_backend__coverage_profiling__AddedImpurityHead_82);
        switch (ll_backend__coverage_profiling__HeadVar__3_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (ll_backend__coverage_profiling__CoverageAfterDisjKnown_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
            break;
        }
        ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85, ll_backend__coverage_profiling__HeadVar__4_4, ll_backend__coverage_profiling__TailDisjuncts0_22, &ll_backend__coverage_profiling__TailDisjuncts_24, ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84, ll_backend__coverage_profiling__STATE_VARIABLE_Info_8, &ll_backend__coverage_profiling__AddedImpurityTail_83);
        *ll_backend__coverage_profiling__HeadVar__9_9 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityHead_82, ll_backend__coverage_profiling__AddedImpurityTail_83);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__coverage_profiling__HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__HeadDisjunct_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__TailDisjuncts_24));
      }
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
  MR_Word ll_backend__coverage_profiling__DPInfo_9,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
  MR_Word ll_backend__coverage_profiling__Disjuncts0_12,
  MR_Word * ll_backend__coverage_profiling__Disjuncts_13,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_15)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__FirstDisjunct0_17;
    MR_Word ll_backend__coverage_profiling__Var_23;
    MR_Word ll_backend__coverage_profiling__SecondDisjunct_18;
    MR_Word ll_backend__coverage_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_9, (MR_Integer) 0)));
    MR_Word ll_backend__coverage_profiling__Var_24;
    MR_Word ll_backend__coverage_profiling__Var_25;
    MR_Word ll_backend__coverage_profiling__Var_26;
    MR_Word ll_backend__coverage_profiling__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_9, (MR_Integer) 1)));
    MR_Word ll_backend__coverage_profiling__Var_32;

    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_22 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
    {
      ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__Disjuncts0_12)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__FirstDisjunct0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Disjuncts0_12, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Disjuncts0_12, (MR_Integer) 1)));
        ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__Var_23)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__coverage_profiling__succeeded)
        {
          ll_backend__coverage_profiling__SecondDisjunct_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_23, (MR_Integer) 0)));
          ll_backend__coverage_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_23, (MR_Integer) 1)));
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ll_backend__coverage_profiling__succeeded)
          {
            ll_backend__coverage_profiling__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__SecondDisjunct_18, (MR_Integer) 0)));
            ll_backend__coverage_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__SecondDisjunct_18, (MR_Integer) 1)));
            ll_backend__coverage_profiling__Var_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__Var_26);
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_25 == (MR_Integer) 7);
          }
        }
      }
    }
    if (ll_backend__coverage_profiling__succeeded)
    {
      MR_Word ll_backend__coverage_profiling__FirstDisjunct_19;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__FirstDisjunct0_17, &ll_backend__coverage_profiling__FirstDisjunct_19, ll_backend__coverage_profiling__CoverageBeforeKnown_10, ll_backend__coverage_profiling__NextCoverageBeforeKnown_11, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__coverage_profiling__Disjuncts_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__FirstDisjunct_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_23));
      }
    }
    else
    {
      ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_9, ll_backend__coverage_profiling__CoverageBeforeKnown_10, (MR_Integer) 0, ll_backend__coverage_profiling__NextCoverageBeforeKnown_11, ll_backend__coverage_profiling__Disjuncts0_12, ll_backend__coverage_profiling__Disjuncts_13, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_15);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
  MR_Word ll_backend__coverage_profiling__ConjType_1,
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
  MR_Word ll_backend__coverage_profiling__HeadVar__4_4,
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_7,
  MR_Word * ll_backend__coverage_profiling__HeadVar__8_8)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__coverage_profiling__HeadVar__8_8 = (MR_Integer) 0;
      *ll_backend__coverage_profiling__STATE_VARIABLE_Info_7 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6;
      *ll_backend__coverage_profiling__HeadVar__5_5 = ll_backend__coverage_profiling__HeadVar__4_4;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__HeadGoal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__coverage_profiling__TailGoals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__coverage_profiling__HeadGoal_24;
      MR_Word ll_backend__coverage_profiling__CoverageBeforeTailKnown_25;
      MR_Word ll_backend__coverage_profiling__AddedImpurityHead_26;
      MR_Word ll_backend__coverage_profiling__TailGoals_27;
      MR_Word ll_backend__coverage_profiling__AddedImpurityTail_28;
      MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33;
      MR_Word ll_backend__coverage_profiling__HeadConjGoals_29;
      MR_Word ll_backend__coverage_profiling__Var_35;
      MR_Word ll_backend__coverage_profiling__Var_36;
      MR_Word ll_backend__coverage_profiling__Var_30;

      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadGoal0_17, &ll_backend__coverage_profiling__HeadGoal_24, ll_backend__coverage_profiling__HeadVar__4_4, &ll_backend__coverage_profiling__CoverageBeforeTailKnown_25, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33, &ll_backend__coverage_profiling__AddedImpurityHead_26);
      ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ll_backend__coverage_profiling__ConjType_1, ll_backend__coverage_profiling__TailGoals0_18, &ll_backend__coverage_profiling__TailGoals_27, ll_backend__coverage_profiling__CoverageBeforeTailKnown_25, ll_backend__coverage_profiling__HeadVar__5_5, ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33, ll_backend__coverage_profiling__STATE_VARIABLE_Info_7, &ll_backend__coverage_profiling__AddedImpurityTail_28);
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ConjType_1 == (MR_Integer) 0);
      if (ll_backend__coverage_profiling__succeeded)
      {
        ll_backend__coverage_profiling__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadGoal_24, (MR_Integer) 0)));
        ll_backend__coverage_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadGoal_24, (MR_Integer) 1)));
        ll_backend__coverage_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__coverage_profiling__Var_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ll_backend__coverage_profiling__succeeded)
        {
          ll_backend__coverage_profiling__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_35, (MR_Integer) 1)));
          ll_backend__coverage_profiling__HeadConjGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_35, (MR_Integer) 2)));
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_36 == (MR_Integer) 0);
        }
      }
      if (ll_backend__coverage_profiling__succeeded)
      {
        *ll_backend__coverage_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__HeadConjGoals_29, ll_backend__coverage_profiling__TailGoals_27);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__coverage_profiling__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__HeadGoal_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__TailGoals_27));
        }
      mercury__bool__or_3_p_0(ll_backend__coverage_profiling__AddedImpurityHead_26, ll_backend__coverage_profiling__AddedImpurityTail_28, ll_backend__coverage_profiling__HeadVar__8_8);
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
  MR_Word ll_backend__coverage_profiling__Goal0_8,
  MR_Word * ll_backend__coverage_profiling__Goal_9,
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_91,
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_13)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_8, (MR_Integer) 0)));
    MR_Word ll_backend__coverage_profiling__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_8, (MR_Integer) 1)));
    MR_Word ll_backend__coverage_profiling__Detism_16;
    MR_Word ll_backend__coverage_profiling__GoalId_17;
    MR_Word ll_backend__coverage_profiling__CPOptions_18;
    MR_Word ll_backend__coverage_profiling__DPInfo_19;
    MR_Word ll_backend__coverage_profiling__IsMDProfInst_20;
    MR_Word ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
    MR_Word ll_backend__coverage_profiling__AddedImpurityInner_37;
    MR_Word ll_backend__coverage_profiling__GoalExpr1_38;
    MR_Word ll_backend__coverage_profiling__GoalInfo1_83;
    MR_Word ll_backend__coverage_profiling__Goal1_84;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
    MR_Word ll_backend__coverage_profiling__Var_114;
    MR_Word ll_backend__coverage_profiling__Var_115;
    MR_Word ll_backend__coverage_profiling__Var_116;
    MR_Word ll_backend__coverage_profiling__Var_117;
    MR_Word ll_backend__coverage_profiling__Var_118;
    MR_Word ll_backend__coverage_profiling__Var_119;
    MR_Word ll_backend__coverage_profiling__Var_120;
    MR_Word ll_backend__coverage_profiling___MaybeDPCoverageInfo_21;

    ll_backend__coverage_profiling__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    ll_backend__coverage_profiling__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    ll_backend__coverage_profiling__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 1)));
    ll_backend__coverage_profiling__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 2)));
    ll_backend__coverage_profiling__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 3)));
    ll_backend__coverage_profiling__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 4)));
    ll_backend__coverage_profiling__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 5)));
    ll_backend__coverage_profiling__CPOptions_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 6)));
    ll_backend__coverage_profiling__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 7)));
    ll_backend__coverage_profiling__DPInfo_19 = ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    ll_backend__coverage_profiling__IsMDProfInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_19, (MR_Integer) 0)));
    ll_backend__coverage_profiling___MaybeDPCoverageInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_19, (MR_Integer) 1)));
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_20 == (MR_Integer) 1);
    if (ll_backend__coverage_profiling__succeeded)
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeKnown_10 == (MR_Integer) 1);
    if (ll_backend__coverage_profiling__succeeded)
    {
      MR_Integer ll_backend__coverage_profiling__GoalNum_22 = (MR_Integer) ll_backend__coverage_profiling__GoalId_17;
      MR_String ll_backend__coverage_profiling__UnknownMsg_23;
      MR_String ll_backend__coverage_profiling__Var_139;
      MR_String ll_backend__coverage_profiling__Var_146;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_3[3], ll_backend__coverage_profiling__GoalNum_22, &ll_backend__coverage_profiling__Var_139);
      ll_backend__coverage_profiling__Var_146 = mercury__string__f_43_43_2_f_0(ll_backend__coverage_profiling__Var_139, (MR_String) "\n");
      ll_backend__coverage_profiling__UnknownMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "Coverage information is unknown for goal_id ", ll_backend__coverage_profiling__Var_146);
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", ll_backend__coverage_profiling__UnknownMsg_23);
        return;
      }
    }
    else
    {
    }
    switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__coverage_profiling__NegGoal0_68 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__GoalExpr0_14), (MR_Integer) 0);
          MR_Word ll_backend__coverage_profiling__NegGoal_69;
          MR_Word ll_backend__coverage_profiling__Var_70;

          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__NegGoal0_68, &ll_backend__coverage_profiling__NegGoal_69, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__Var_70, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
          ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
          ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__coverage_profiling__NegGoal_69);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
          ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
          ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
          ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__coverage_profiling__BuiltinState_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
          MR_Word ll_backend__coverage_profiling__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 0)));
          MR_Integer ll_backend__coverage_profiling__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
          MR_Word ll_backend__coverage_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
          MR_Word ll_backend__coverage_profiling__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));
          MR_Word ll_backend__coverage_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 5)));

          switch (ll_backend__coverage_profiling__BuiltinState_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
              break;
            case (MR_Integer) 1:
              ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
              break;
          }
          ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
          ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
          ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__coverage_profiling__GenericCall_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));
              MR_Word ll_backend__coverage_profiling__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GenericCall_46)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
                  break;
              }
              ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
              ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
              ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
              ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
              ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
              ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__coverage_profiling__ConjType_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Goals0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Goals_63;

              ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ll_backend__coverage_profiling__ConjType_61, ll_backend__coverage_profiling__Goals0_62, &ll_backend__coverage_profiling__Goals_63, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              {
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__ConjType_61));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goals_63));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__coverage_profiling__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Goals_113;

              ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__Goals0_112, &ll_backend__coverage_profiling__Goals_113, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              {
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_113));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__coverage_profiling__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__SwitchCanFail_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Cases0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__Cases_67;

              ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__SwitchCanFail_65, ll_backend__coverage_profiling__Cases0_66, &ll_backend__coverage_profiling__Cases_67, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              {
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_64));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__SwitchCanFail_65));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 3) = ((MR_Box) (ll_backend__coverage_profiling__Cases_67));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__coverage_profiling__Reason_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__ScopeGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__ScopeGoal_73;
              MR_Word ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74;
              MR_Word ll_backend__coverage_profiling__ScopedGoalDetism_75;
              MR_Word ll_backend__coverage_profiling__Var_103;
              MR_Word ll_backend__coverage_profiling__Var_121;

              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__ScopeGoal0_72, &ll_backend__coverage_profiling__ScopeGoal_73, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              ll_backend__coverage_profiling__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__ScopeGoal0_72, (MR_Integer) 0)));
              ll_backend__coverage_profiling__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__ScopeGoal0_72, (MR_Integer) 1)));
              ll_backend__coverage_profiling__ScopedGoalDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__Var_103);
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ScopedGoalDetism_75 == ll_backend__coverage_profiling__Detism_16);
              if (ll_backend__coverage_profiling__succeeded)
                ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74;
              else
                ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
              {
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Reason_71));
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__ScopeGoal_73));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__coverage_profiling__ITEExistVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word ll_backend__coverage_profiling__Cond_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word ll_backend__coverage_profiling__Then_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word ll_backend__coverage_profiling__Else_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));

              ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__ITEExistVars_76, ll_backend__coverage_profiling__Cond_77, ll_backend__coverage_profiling__Then_78, ll_backend__coverage_profiling__Else_79, &ll_backend__coverage_profiling__GoalExpr1_38, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    hlds__hlds_goal__add_impurity_if_needed_3_p_0(ll_backend__coverage_profiling__AddedImpurityInner_37, ll_backend__coverage_profiling__GoalInfo0_15, &ll_backend__coverage_profiling__GoalInfo1_83);
    {
      ll_backend__coverage_profiling__Goal1_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal1_84, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalExpr1_38));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal1_84, 1) = ((MR_Box) (ll_backend__coverage_profiling__GoalInfo1_83));
    }
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_20 == (MR_Integer) 0);
    if (!(ll_backend__coverage_profiling__succeeded))
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 == (MR_Integer) 0);
    if (ll_backend__coverage_profiling__succeeded)
    {
      *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
      *ll_backend__coverage_profiling__Goal_9 = ll_backend__coverage_profiling__Goal1_84;
      *ll_backend__coverage_profiling__AddedImpurity_13 = ll_backend__coverage_profiling__AddedImpurityInner_37;
      *ll_backend__coverage_profiling__STATE_VARIABLE_Info_91 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__CoverageAfterGoals_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_122 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__coverage_profiling__Var_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

      switch (ll_backend__coverage_profiling__CoverageAfterGoals_82) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
            *ll_backend__coverage_profiling__Goal_9 = ll_backend__coverage_profiling__Goal1_84;
            *ll_backend__coverage_profiling__AddedImpurity_13 = ll_backend__coverage_profiling__AddedImpurityInner_37;
            *ll_backend__coverage_profiling__STATE_VARIABLE_Info_91 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__coverage_profiling__ContainingGoalMap_86;
            MR_Word ll_backend__coverage_profiling__RevGoalPath_87;
            MR_Word ll_backend__coverage_profiling__CPInfo_88;
            MR_Word ll_backend__coverage_profiling__CPGoals_89;
            MR_Word ll_backend__coverage_profiling__Var_110;
            MR_Word ll_backend__coverage_profiling__Var_130;
            MR_Word ll_backend__coverage_profiling__Var_131;
            MR_Word ll_backend__coverage_profiling__Var_132;
            MR_Word ll_backend__coverage_profiling__Var_133;
            MR_Word ll_backend__coverage_profiling__Var_134;
            MR_Word ll_backend__coverage_profiling__Var_135;
            MR_Word ll_backend__coverage_profiling__Var_136;

            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = (MR_Integer) 0;
            ll_backend__coverage_profiling__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 0)));
            ll_backend__coverage_profiling__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 1)));
            ll_backend__coverage_profiling__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 2)));
            ll_backend__coverage_profiling__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 3)));
            ll_backend__coverage_profiling__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 4)));
            ll_backend__coverage_profiling__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 5)));
            ll_backend__coverage_profiling__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 6)));
            ll_backend__coverage_profiling__ContainingGoalMap_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 7)));
            ll_backend__coverage_profiling__RevGoalPath_87 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_86, ll_backend__coverage_profiling__GoalId_17);
            {
              ll_backend__coverage_profiling__CPInfo_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfo_88, 0) = ((MR_Box) (ll_backend__coverage_profiling__RevGoalPath_87));
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfo_88, 1) = ((MR_Box) (((int) MR_cp_type_coverage_after)));
            }
            ll_backend__coverage_profiling__make_coverage_point_5_p_0(ll_backend__coverage_profiling__CPOptions_18, ll_backend__coverage_profiling__CPInfo_88, &ll_backend__coverage_profiling__CPGoals_89, ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, ll_backend__coverage_profiling__STATE_VARIABLE_Info_91);
            {
              ll_backend__coverage_profiling__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_110, 0) = ((MR_Box) (ll_backend__coverage_profiling__Goal1_84));
              MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_110, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPGoals_89));
            }
            hlds__goal_util__create_conj_from_list_3_p_0(ll_backend__coverage_profiling__Var_110, (MR_Integer) 0, ll_backend__coverage_profiling__Goal_9);
            *ll_backend__coverage_profiling__AddedImpurity_13 = (MR_Integer) 1;
          }
          break;
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
  MR_Word ll_backend__coverage_profiling__GoalInfo_3)
{
  {
    MR_Word ll_backend__coverage_profiling__DPInfo_4;
    MR_Word ll_backend__coverage_profiling__MaybeDPInfo_5;

    ll_backend__coverage_profiling__MaybeDPInfo_5 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo_3);
    if ((ll_backend__coverage_profiling__MaybeDPInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "function \140ll_backend.coverage_profiling.goal_info_get_dp_info\'/1", (MR_String) "MaybeDPInfo = no");
    }
    else
      ll_backend__coverage_profiling__DPInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeDPInfo_5, (MR_Integer) 0)));
    return ll_backend__coverage_profiling__DPInfo_4;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_7,
  MR_Word ll_backend__coverage_profiling__CPInfo_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_18)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__CPGoals_11;
    MR_Word ll_backend__coverage_profiling__Goals_14;
    MR_Word ll_backend__coverage_profiling__InnerGoals_12;
    MR_Word ll_backend__coverage_profiling__Var_20;
    MR_Word ll_backend__coverage_profiling__Var_21;
    MR_Word ll_backend__coverage_profiling__Var_13;

    ll_backend__coverage_profiling__make_coverage_point_5_p_0(ll_backend__coverage_profiling__CPOptions_7, ll_backend__coverage_profiling__CPInfo_8, &ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17, ll_backend__coverage_profiling__STATE_VARIABLE_Info_18);
    ll_backend__coverage_profiling__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
    ll_backend__coverage_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__coverage_profiling__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (ll_backend__coverage_profiling__succeeded)
    {
      ll_backend__coverage_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_20, (MR_Integer) 1)));
      ll_backend__coverage_profiling__InnerGoals_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_20, (MR_Integer) 2)));
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__Var_21 == (MR_Integer) 0);
    }
    if (ll_backend__coverage_profiling__succeeded)
    {
      ll_backend__coverage_profiling__Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__InnerGoals_12);
    }
    else
    {
      MR_Word ll_backend__coverage_profiling__Var_22;

      {
        ll_backend__coverage_profiling__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_22, 0) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15));
        MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ll_backend__coverage_profiling__Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__Var_22);
    }
    hlds__goal_util__create_conj_from_list_3_p_0(ll_backend__coverage_profiling__Goals_14, (MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16);
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
  MR_Word ll_backend__coverage_profiling__CoveragePointInfo_7,
  MR_Word * ll_backend__coverage_profiling__Goals_8,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_40)
{
  {
    MR_Word ll_backend__coverage_profiling__CoveragePointInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 0)));
    MR_Word ll_backend__coverage_profiling__CPIndexCounter0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 1)));
    MR_Integer ll_backend__coverage_profiling__CPIndex_12;
    MR_Word ll_backend__coverage_profiling__CPIndexCounter_13;
    MR_Word ll_backend__coverage_profiling__CoveragePointInfos_14;
    MR_Word ll_backend__coverage_profiling__CPIndexVar_16;
    MR_Word ll_backend__coverage_profiling__GoalUnifyIndex_17;
    MR_Word ll_backend__coverage_profiling__ProcLayoutVar_18;
    MR_Word ll_backend__coverage_profiling__ProcStaticConsId_19;
    MR_Word ll_backend__coverage_profiling__GoalUnifyProcLayout_20;
    MR_Word ll_backend__coverage_profiling__UseCalls_21;
    MR_Word ll_backend__coverage_profiling__ModuleInfo_22;
    MR_Word ll_backend__coverage_profiling__DataType_24;
    MR_String ll_backend__coverage_profiling__PredName_26;
    MR_Word ll_backend__coverage_profiling__ArgVars_27;
    MR_Word ll_backend__coverage_profiling__ForeignArgVars_28;
    MR_Integer ll_backend__coverage_profiling__PredArity_29;
    MR_Word ll_backend__coverage_profiling__CallGoal_38;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_43_43;
    MR_Word ll_backend__coverage_profiling__Var_45;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_46_46;
    MR_Word ll_backend__coverage_profiling__Var_47;
    MR_Word ll_backend__coverage_profiling__Var_49;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_50_50;
    MR_Word ll_backend__coverage_profiling__Var_93;
    MR_Word ll_backend__coverage_profiling__Var_94;
    MR_Word ll_backend__coverage_profiling__Var_112;
    MR_Word ll_backend__coverage_profiling__Var_113;
    MR_Word ll_backend__coverage_profiling__Var_114;
    MR_Word ll_backend__coverage_profiling__Var_115;
    MR_Word ll_backend__coverage_profiling__Var_116;
    MR_Word ll_backend__coverage_profiling__Var_117;
    MR_Word ll_backend__coverage_profiling__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 2)));
    MR_Word ll_backend__coverage_profiling__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 3)));
    MR_Word ll_backend__coverage_profiling__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 4)));
    MR_Word ll_backend__coverage_profiling__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 5)));
    MR_Word ll_backend__coverage_profiling__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 6)));
    MR_Word ll_backend__coverage_profiling__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 7)));
    MR_Word ll_backend__coverage_profiling__Var_110;
    MR_Word ll_backend__coverage_profiling__Var_111;
    MR_Word ll_backend__coverage_profiling__Var_133;
    MR_Word ll_backend__coverage_profiling__Var_134;
    MR_Word ll_backend__coverage_profiling__Var_137;
    MR_Word ll_backend__coverage_profiling__Var_138;
    MR_Word ll_backend__coverage_profiling__Var_139;
    MR_Word ll_backend__coverage_profiling__Var_140;
    MR_Word ll_backend__coverage_profiling__Var_135;
    MR_Word ll_backend__coverage_profiling__Var_142;
    MR_Word ll_backend__coverage_profiling__Var_143;
    MR_Word ll_backend__coverage_profiling__Var_144;
    MR_Word ll_backend__coverage_profiling__Var_145;
    MR_Word ll_backend__coverage_profiling__Var_146;
    MR_Word ll_backend__coverage_profiling__Var_147;
    MR_Word ll_backend__coverage_profiling__Var_148;

    mercury__counter__allocate_3_p_0(&ll_backend__coverage_profiling__CPIndex_12, ll_backend__coverage_profiling__CPIndexCounter0_11, &ll_backend__coverage_profiling__CPIndexCounter_13);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, ll_backend__coverage_profiling__CPIndex_12, ((MR_Box) (ll_backend__coverage_profiling__CoveragePointInfo_7)), ll_backend__coverage_profiling__CoveragePointInfos0_10, &ll_backend__coverage_profiling__CoveragePointInfos_14);
    ll_backend__coverage_profiling__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 1)));
    ll_backend__coverage_profiling__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 2)));
    ll_backend__coverage_profiling__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 3)));
    ll_backend__coverage_profiling__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 4)));
    ll_backend__coverage_profiling__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 5)));
    ll_backend__coverage_profiling__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 6)));
    ll_backend__coverage_profiling__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_39, (MR_Integer) 7)));
    ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_43_43 = ll_backend__coverage_profiling__Var_112;
    {
      ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 0) = ((MR_Box) (ll_backend__coverage_profiling__CoveragePointInfos_14));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexCounter_13));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_43_43));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 3) = ((MR_Box) (ll_backend__coverage_profiling__Var_113));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 4) = ((MR_Box) (ll_backend__coverage_profiling__Var_114));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 5) = ((MR_Box) (ll_backend__coverage_profiling__Var_115));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 6) = ((MR_Box) (ll_backend__coverage_profiling__Var_116));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, 7) = ((MR_Box) (ll_backend__coverage_profiling__Var_117));
    }
    ll_backend__coverage_profiling__Var_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
    ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "CPIndex", ll_backend__coverage_profiling__Var_45, &ll_backend__coverage_profiling__CPIndexVar_16, ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_43_43, &ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_46_46);
    {
      ll_backend__coverage_profiling__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__Var_47, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPIndex_12));
    }
    ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__coverage_profiling__Var_47, ll_backend__coverage_profiling__CPIndexVar_16, &ll_backend__coverage_profiling__GoalUnifyIndex_17);
    ll_backend__coverage_profiling__Var_49 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcLayout", ll_backend__coverage_profiling__Var_49, &ll_backend__coverage_profiling__ProcLayoutVar_18, ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_46_46, &ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_50_50);
    ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, &ll_backend__coverage_profiling__ProcStaticConsId_19);
    ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__coverage_profiling__ProcStaticConsId_19, ll_backend__coverage_profiling__ProcLayoutVar_18, &ll_backend__coverage_profiling__GoalUnifyProcLayout_20);
    ll_backend__coverage_profiling__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 0)));
    ll_backend__coverage_profiling__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 1)));
    ll_backend__coverage_profiling__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 2)));
    ll_backend__coverage_profiling__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 3)));
    ll_backend__coverage_profiling__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 4)));
    ll_backend__coverage_profiling__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 5)));
    ll_backend__coverage_profiling__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 6)));
    ll_backend__coverage_profiling__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_42_42, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_40 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Var_133));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_134));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_50_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__coverage_profiling__ModuleInfo_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__coverage_profiling__Var_137));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__coverage_profiling__Var_138));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__coverage_profiling__Var_139));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__coverage_profiling__Var_140));
    }
    ll_backend__coverage_profiling__DataType_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__coverage_profiling__UseCalls_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__coverage_profiling__Var_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    switch (ll_backend__coverage_profiling__DataType_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__coverage_profiling__Var_77;
          MR_Word ll_backend__coverage_profiling__Var_84;

          ll_backend__coverage_profiling__PredName_26 = (MR_String) "increment_dynamic_coverage_point_count";
          {
            ll_backend__coverage_profiling__ArgVars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_27, 0) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexVar_16));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ll_backend__coverage_profiling__Var_84 = parse_tree__builtin_lib_types__int_type_0_f_0();
          {
            ll_backend__coverage_profiling__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_77, 0) = ((MR_Box) (ll_backend__coverage_profiling__Var_84));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__hlds_goal__make_foreign_args_4_p_0(ll_backend__coverage_profiling__ArgVars_27, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[4]), ll_backend__coverage_profiling__Var_77, &ll_backend__coverage_profiling__ForeignArgVars_28);
          ll_backend__coverage_profiling__PredArity_29 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__coverage_profiling__Var_55;
          MR_Word ll_backend__coverage_profiling__Var_58;
          MR_Word ll_backend__coverage_profiling__Var_71;
          MR_Word ll_backend__coverage_profiling__Var_72;
          MR_Word ll_backend__coverage_profiling__Var_73;

          ll_backend__coverage_profiling__PredName_26 = (MR_String) "increment_static_coverage_point_count";
          {
            ll_backend__coverage_profiling__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_55, 0) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexVar_16));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__coverage_profiling__ArgVars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_27, 0) = ((MR_Box) (ll_backend__coverage_profiling__ProcLayoutVar_18));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_27, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_55));
          }
          ll_backend__coverage_profiling__Var_71 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          ll_backend__coverage_profiling__Var_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
          {
            ll_backend__coverage_profiling__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_72, 0) = ((MR_Box) (ll_backend__coverage_profiling__Var_73));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__coverage_profiling__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_58, 0) = ((MR_Box) (ll_backend__coverage_profiling__Var_71));
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_58, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_72));
          }
          hlds__hlds_goal__make_foreign_args_4_p_0(ll_backend__coverage_profiling__ArgVars_27, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[7]), ll_backend__coverage_profiling__Var_58, &ll_backend__coverage_profiling__ForeignArgVars_28);
          ll_backend__coverage_profiling__PredArity_29 = (MR_Integer) 2;
        }
        break;
    }
    switch (ll_backend__coverage_profiling__UseCalls_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__coverage_profiling__PredId_30;
          MR_Integer ll_backend__coverage_profiling__ProcId_31;
          MR_Word ll_backend__coverage_profiling__ForeignCallAttrs_32;
          MR_Word ll_backend__coverage_profiling__ForeignProc_33;
          MR_Word ll_backend__coverage_profiling__CallGoalExpr_34;
          MR_Word ll_backend__coverage_profiling__NonLocals_35;
          MR_Word ll_backend__coverage_profiling__InstMapDelta_36;
          MR_Word ll_backend__coverage_profiling__CallGoalInfo_37;

          ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ll_backend__coverage_profiling__ModuleInfo_22, ll_backend__coverage_profiling__PredName_26, ll_backend__coverage_profiling__PredArity_29, &ll_backend__coverage_profiling__PredId_30, &ll_backend__coverage_profiling__ProcId_31);
          ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(ll_backend__coverage_profiling__DataType_24, &ll_backend__coverage_profiling__ForeignCallAttrs_32, &ll_backend__coverage_profiling__ForeignProc_33);
          {
            ll_backend__coverage_profiling__CallGoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 1) = ((MR_Box) (ll_backend__coverage_profiling__ForeignCallAttrs_32));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 2) = ((MR_Box) (ll_backend__coverage_profiling__PredId_30));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 3) = ((MR_Box) (ll_backend__coverage_profiling__ProcId_31));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 4) = ((MR_Box) (ll_backend__coverage_profiling__ForeignArgVars_28));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_34, 7) = ((MR_Box) (ll_backend__coverage_profiling__ForeignProc_33));
          }
          ll_backend__coverage_profiling__NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__coverage_profiling__ArgVars_27);
          ll_backend__coverage_profiling__InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          ll_backend__coverage_profiling__CallGoalInfo_37 = hlds__hlds_goal__impure_init_goal_info_3_f_0(ll_backend__coverage_profiling__NonLocals_35, ll_backend__coverage_profiling__InstMapDelta_36, (MR_Integer) 0);
          {
            ll_backend__coverage_profiling__CallGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CallGoal_38, 0) = ((MR_Box) (ll_backend__coverage_profiling__CallGoalExpr_34));
            MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CallGoal_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__CallGoalInfo_37));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__coverage_profiling__ModuleInfo_22, ll_backend__coverage_profiling__PredName_26, ll_backend__coverage_profiling__PredArity_29, ll_backend__coverage_profiling__ArgVars_27, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[2]), (MR_Integer) 0, &ll_backend__coverage_profiling__CallGoal_38);
        }
        break;
    }
    {
      ll_backend__coverage_profiling__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_94, 0) = ((MR_Box) (ll_backend__coverage_profiling__CallGoal_38));
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__coverage_profiling__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_93, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalUnifyProcLayout_20));
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Var_93, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_94));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__coverage_profiling__Goals_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalUnifyIndex_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_93));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
  MR_Word ll_backend__coverage_profiling__CoverageDataType_4,
  MR_Word * ll_backend__coverage_profiling__ForeignProcAttrs_5,
  MR_Word * ll_backend__coverage_profiling__ForeignProcImpl_6)
{
  {
    MR_String ll_backend__coverage_profiling__Code_7;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15;
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17;

    ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15);
    parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17);
    parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17, ll_backend__coverage_profiling__ForeignProcAttrs_5);
    switch (ll_backend__coverage_profiling__CoverageDataType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__coverage_profiling__Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC\n    const MR_CallSiteDynamic *csd;\n    const MR_ProcDynamic *pd;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_P" "ROFILING_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        print" "f(\", CallSiteDynamic: 0x%x, CPIndex: %d\\n\",\n            MR_current_call_site_dynamic, CPIndex);\n    }\n  #endif\n\n    csd = MR_current_call_site_dynamic;\n\n    MR_" "deep_assert(NULL, NULL, NULL, csd != NULL);\n    pd = csd->MR_csd_callee_ptr;\n\n    MR_deep_assert(csd, NULL, NULL, pd != NULL);\n\n#ifdef MR_DEEP_CHECKS\n    /*\n   " " ** Check that CPIndex is within bounds.\n    */\n    {\n        const MR_ProcLayout *pl;\n        const MR_ProcStatic *ps;\n\n        pl = pd->MR_pd_proc_layout;\n   " "     MR_deep_assert(csd, NULL, NULL, pl != NULL);\n        ps = pl->MR_sle_proc_static;\n        MR_deep_assert(csd, pl, NULL, ps != NULL);\n        MR_deep_assert" "(csd, pl, ps, CPIndex < ps->MR_ps_num_coverage_points);\n    }\n#endif\n\n    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);\n\n    pd->MR_pd_cov" "erage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_fatal_error(\n        \"increment_dynamic_coverage_point_count:  \"\n            \"dynamic dee" "p profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */\n";
        break;
      case (MR_Integer) 0:
        ll_backend__coverage_profiling__Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n    const MR_ProcLayout *pl;\n    MR_ProcStatic       *ps;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_PROFILING" "_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        printf(\", Pro" "cLayout: 0x%x, CPIndex: %d\\n\", ProcLayout, CPIndex);\n    }\n  #endif\n\n    pl = (const MR_ProcLayout *) ProcLayout;\n\n    MR_deep_assert(NULL, NULL, NULL, pl != NU" "LL);\n    ps = pl->MR_sle_proc_static;\n    MR_deep_assert(NULL, pl, NULL, ps != NULL);\n\n    MR_deep_assert(NULL, pl, ps, CPIndex < ps->MR_ps_num_coverage_points)" ";\n    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);\n\n    ps->MR_ps_coverage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_" "fatal_error(\n        \"increment_static_coverage_point_count:  \"\n            \"static coverage profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_STATI" "C */\n";
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__coverage_profiling__ForeignProcImpl_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Code_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
  MR_Word ll_backend__coverage_profiling__CoverageInfo_3,
  MR_Word * ll_backend__coverage_profiling__ProcStaticConsId_4)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;
    MR_Word ll_backend__coverage_profiling__PredId_5;
    MR_Integer ll_backend__coverage_profiling__ProcId_6;
    MR_Word ll_backend__coverage_profiling__ShroudedPredProcId_7;
    MR_Word ll_backend__coverage_profiling__Var_8;
    MR_Word ll_backend__coverage_profiling__MaybeRecInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 5)));
    MR_Word ll_backend__coverage_profiling__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 4)));
    MR_Word ll_backend__coverage_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 0)));
    MR_Word ll_backend__coverage_profiling__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 1)));
    MR_Word ll_backend__coverage_profiling__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 2)));
    MR_Word ll_backend__coverage_profiling__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 3)));
    MR_Word ll_backend__coverage_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 6)));
    MR_Word ll_backend__coverage_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 7)));
    MR_Word ll_backend__coverage_profiling__OuterPredProcId_15;
    MR_Word ll_backend__coverage_profiling__RecInfo_14;
    MR_Word ll_backend__coverage_profiling__Var_16;
    MR_Word ll_backend__coverage_profiling__Var_31;

    ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__MaybeRecInfo_12)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__coverage_profiling__succeeded)
    {
      ll_backend__coverage_profiling__RecInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeRecInfo_12, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__RecInfo_14, (MR_Integer) 0)));
      ll_backend__coverage_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__RecInfo_14, (MR_Integer) 1)));
      ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__Var_16)) == (MR_mktag((MR_Integer) 0)));
      if (ll_backend__coverage_profiling__succeeded)
        ll_backend__coverage_profiling__OuterPredProcId_15 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__Var_16), (MR_Integer) 0);
    }
    if (ll_backend__coverage_profiling__succeeded)
    {
      ll_backend__coverage_profiling__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__OuterPredProcId_15, (MR_Integer) 0)));
      ll_backend__coverage_profiling__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__OuterPredProcId_15, (MR_Integer) 1)));
    }
    else
    {
      ll_backend__coverage_profiling__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__PredProcId_13, (MR_Integer) 0)));
      ll_backend__coverage_profiling__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__PredProcId_13, (MR_Integer) 1)));
    }
    {
      ll_backend__coverage_profiling__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_8, 0) = ((MR_Box) (ll_backend__coverage_profiling__PredId_5));
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Var_8, 1) = ((MR_Box) (ll_backend__coverage_profiling__ProcId_6));
    }
    ll_backend__coverage_profiling__ShroudedPredProcId_7 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(ll_backend__coverage_profiling__Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__coverage_profiling__ProcStaticConsId_4 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__ShroudedPredProcId_7));
    }
  }
}

static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
  MR_Word ll_backend__coverage_profiling__Detism_4,
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6,
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7)
{
  switch (ll_backend__coverage_profiling__Detism_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6;
      break;
    case (MR_Integer) 5:
    case (MR_Integer) 6:
    case (MR_Integer) 7:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6;
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__coverage_profiling__succeeded;

    ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    return ll_backend__coverage_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

    ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
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

/* :- end_module ll_backend.coverage_profiling. */
