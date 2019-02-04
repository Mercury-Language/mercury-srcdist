/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ll_backend.string_switch. */
/* :- implementation. */

/*
INIT mercury__ll_backend__string_switch__init
ENDINIT
*/

#include "ll_backend.string_switch.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_switch.mih"
#include "ll_backend.lookup_util.mih"
#include "ll_backend.switch_case.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1];

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1];

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__914__1_2_p_0(
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__HeadVar__2_85);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__420__1_2_p_0(
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__HeadVar__2_119);

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
  MR_Word ll_backend__string_switch__VarRval_17,
  MR_Word ll_backend__string_switch__CaseSolns_18,
  MR_Word ll_backend__string_switch__ResumeVars_19,
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__OutTypes_22,
  MR_Word ll_backend__string_switch__Liveness_23,
  MR_Word ll_backend__string_switch__CanFail_24,
  MR_Word ll_backend__string_switch__EndLabel_25,
  MR_Word ll_backend__string_switch__StoreMap_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65,
  MR_Word * ll_backend__string_switch__Code_28,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_66,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_67,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_68);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
  MR_Integer * ll_backend__string_switch__HeadVar__11_11);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
  MR_Word ll_backend__string_switch__VarRval_15,
  MR_Word ll_backend__string_switch__CaseValues_16,
  MR_Word ll_backend__string_switch__OutVars_17,
  MR_Word ll_backend__string_switch__OutTypes_18,
  MR_Word ll_backend__string_switch__Liveness_19,
  MR_Word ll_backend__string_switch__CanFail_20,
  MR_Word ll_backend__string_switch__EndLabel_21,
  MR_Word ll_backend__string_switch__StoreMap_22,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
  MR_Word * ll_backend__string_switch__Code_24,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_53);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
  MR_Box ll_backend__string_switch__wrapper_arg_5,
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
  MR_Box ll_backend__string_switch__wrapper_arg_7,
  MR_Box * ll_backend__string_switch__wrapper_arg_8);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
  MR_Word ll_backend__string_switch__Info_8,
  MR_Word ll_backend__string_switch__VarRval_9,
  MR_Word ll_backend__string_switch__TableAddrRval_10,
  MR_Word ll_backend__string_switch__ArrayElemType_11,
  MR_Integer ll_backend__string_switch__TableSize_12,
  MR_Integer ll_backend__string_switch__NumColumns_13,
  MR_Word * ll_backend__string_switch__Code_14);

static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
  MR_Word ll_backend__string_switch__CanFail_6,
  MR_Word * ll_backend__string_switch__Info_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_20,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_22);

static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
  MR_Word ll_backend__string_switch__VarRval_17,
  MR_Word ll_backend__string_switch__CaseSolns_18,
  MR_Word ll_backend__string_switch__ResumeVars_19,
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__OutTypes_22,
  MR_Word ll_backend__string_switch__Liveness_23,
  MR_Word ll_backend__string_switch__CanFail_24,
  MR_Word ll_backend__string_switch__EndLabel_25,
  MR_Word ll_backend__string_switch__StoreMap_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71,
  MR_Word * ll_backend__string_switch__Code_28,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_72,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_73,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_74);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer ll_backend__string_switch__Slot_16,
  MR_Integer ll_backend__string_switch__TableSize_17,
  MR_Word ll_backend__string_switch__HashSlotMap_18,
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
  MR_Integer ll_backend__string_switch__NumOutVars_20,
  MR_Integer ll_backend__string_switch__NumCollisions_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
  MR_Word ll_backend__string_switch__VarRval_15,
  MR_Word ll_backend__string_switch__CaseValues_16,
  MR_Word ll_backend__string_switch__OutVars_17,
  MR_Word ll_backend__string_switch__OutTypes_18,
  MR_Word ll_backend__string_switch__Liveness_19,
  MR_Word ll_backend__string_switch__CanFail_20,
  MR_Word ll_backend__string_switch__EndLabel_21,
  MR_Word ll_backend__string_switch__StoreMap_22,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
  MR_Word * ll_backend__string_switch__Code_24,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_60);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer ll_backend__string_switch__Slot_8,
  MR_Integer ll_backend__string_switch__TableSize_9,
  MR_Word ll_backend__string_switch__HashSlotMap_10,
  MR_Integer ll_backend__string_switch__NumCollisions_11,
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
  MR_Word ll_backend__string_switch__Info_11,
  MR_Word ll_backend__string_switch__VarRval_12,
  MR_Word ll_backend__string_switch__TableAddrRval_13,
  MR_Word ll_backend__string_switch__ArrayElemType_14,
  MR_Integer ll_backend__string_switch__NumColumns_15,
  MR_Word ll_backend__string_switch__HashOp_16,
  MR_Integer ll_backend__string_switch__HashMask_17,
  MR_Integer ll_backend__string_switch__NumCollisions_18,
  MR_Word ll_backend__string_switch__MatchCode_19,
  MR_Word * ll_backend__string_switch__Code_20);

static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
  MR_Word ll_backend__string_switch__CanFail_6,
  MR_Word * ll_backend__string_switch__Info_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_20);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box * ll_backend__string_switch__wrapper_arg_3);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
  MR_Word ll_backend__string_switch__Params_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word * ll_backend__string_switch__HeadVar__3_3,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_9);

static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
  MR_Word ll_backend__string_switch__Label_5,
  MR_Word ll_backend__string_switch__TaggedConsId_6,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
  MR_Integer ll_backend__string_switch__Slot_10,
  MR_Integer ll_backend__string_switch__TableSize_11,
  MR_Word ll_backend__string_switch__HashSlotMap_12,
  MR_Word ll_backend__string_switch__FailLabel_13,
  MR_Integer ll_backend__string_switch__NumCollisions_14,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[36][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[2][7];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[2][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_7[1][12];




static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[36][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[7]))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[3]))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[2])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) "fail code in cannot_fail switch"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[4])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[7]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[8])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[9]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[10])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[11]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[12]))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_switch_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "unreachable"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "string hash jump switch"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "string hash simple lookup switch"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "string hash several soln lookup switch"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "string binary jump switch"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[14])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "string binary simple lookup switch"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "string binary several soln lookup switch"))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[2][5] = {
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
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__string_switch____vpti_pred_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10] = {
  (MR_String) "sbsi_lo_reg",
  (MR_String) "sbsi_hi_reg",
  (MR_String) "sbsi_mid_reg",
  (MR_String) "sbsi_result_reg",
  (MR_String) "sbsi_loop_start_label",
  (MR_String) "sbsi_gt_eq_label",
  (MR_String) "sbsi_eq_label",
  (MR_String) "sbsi_fail_label",
  (MR_String) "sbsi_branch_start",
  (MR_String) "sbsi_fail_code"
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 = {
  (MR_String) "string_binary_switch_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_binary_switch_info",
  {     ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0 },
  {     ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8] = {
  (MR_String) "shsi_slot_reg",
  (MR_String) "shsi_row_start_reg",
  (MR_String) "shsi_string_reg",
  (MR_String) "shsi_loop_start_label",
  (MR_String) "shsi_no_match_label",
  (MR_String) "shsi_fail_label",
  (MR_String) "shsi_branch_start",
  (MR_String) "shsi_fail_code"
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 = {
  (MR_String) "string_hash_switch_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_hash_switch_info",
  {     ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0 },
  {     ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0
};

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__914__1_2_p_0(
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__HeadVar__2_85)
{
  {
    MR_bool ll_backend__string_switch__succeeded;

    {
      ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_21)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_85)));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__420__1_2_p_0(
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__HeadVar__2_119)
{
  {
    MR_bool ll_backend__string_switch__succeeded;

    {
      ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_21)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_119)));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Integer ll_backend__string_switch__CastX_27 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
    MR_Integer ll_backend__string_switch__CastY_28 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_27 == ll_backend__string_switch__CastY_28);
    if (ll_backend__string_switch__succeeded)
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__string_switch__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__Var_20;

        {
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_20, ll_backend__string_switch__ArgX1_4, ll_backend__string_switch__ArgY1_5);
        }
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_20 == (MR_Integer) 0);
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
        if (ll_backend__string_switch__succeeded)
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_20;
        else
          {
            MR_Word ll_backend__string_switch__Var_21;

            {
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_21, ll_backend__string_switch__ArgX2_6, ll_backend__string_switch__ArgY2_7);
            }
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_21 == (MR_Integer) 0);
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
            if (ll_backend__string_switch__succeeded)
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_21;
            else
              {
                MR_Word ll_backend__string_switch__Var_22;

                {
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_22, ll_backend__string_switch__ArgX3_8, ll_backend__string_switch__ArgY3_9);
                }
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_22 == (MR_Integer) 0);
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                if (ll_backend__string_switch__succeeded)
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_22;
                else
                  {
                    MR_Word ll_backend__string_switch__Var_23;

                    {
                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_23, ll_backend__string_switch__ArgX4_10, ll_backend__string_switch__ArgY4_11);
                    }
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_23 == (MR_Integer) 0);
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                    if (ll_backend__string_switch__succeeded)
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_23;
                    else
                      {
                        MR_Word ll_backend__string_switch__Var_24;

                        {
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_24, ll_backend__string_switch__ArgX5_12, ll_backend__string_switch__ArgY5_13);
                        }
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_24 == (MR_Integer) 0);
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                        if (ll_backend__string_switch__succeeded)
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_24;
                        else
                          {
                            MR_Word ll_backend__string_switch__Var_25;

                            {
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_25, ll_backend__string_switch__ArgX6_14, ll_backend__string_switch__ArgY6_15);
                            }
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_25 == (MR_Integer) 0);
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                            if (ll_backend__string_switch__succeeded)
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_25;
                            else
                              {
                                MR_Word ll_backend__string_switch__Var_26;

                                {
                                  ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__string_switch__Var_26, ll_backend__string_switch__ArgX7_16, ll_backend__string_switch__ArgY7_17);
                                }
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_26 == (MR_Integer) 0);
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                                if (ll_backend__string_switch__succeeded)
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_26;
                                else
                                  {
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__ArgX8_18)), ((MR_Box) (ll_backend__string_switch__ArgY8_19)));
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
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Integer ll_backend__string_switch__CastX_19 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
    MR_Integer ll_backend__string_switch__CastY_20 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_19 == ll_backend__string_switch__CastY_20);
    if (ll_backend__string_switch__succeeded)
      ll_backend__string_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__string_switch__TypeInfo_28_28;
        MR_Word ll_backend__string_switch__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));

        {
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX1_3, ll_backend__string_switch__ArgY1_4);
        }
        if (ll_backend__string_switch__succeeded)
          {
            {
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX2_5, ll_backend__string_switch__ArgY2_6);
            }
            if (ll_backend__string_switch__succeeded)
              {
                {
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX3_7, ll_backend__string_switch__ArgY3_8);
                }
                if (ll_backend__string_switch__succeeded)
                  {
                    {
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX4_9, ll_backend__string_switch__ArgY4_10);
                    }
                    if (ll_backend__string_switch__succeeded)
                      {
                        {
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX5_11, ll_backend__string_switch__ArgY5_12);
                        }
                        if (ll_backend__string_switch__succeeded)
                          {
                            {
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX6_13, ll_backend__string_switch__ArgY6_14);
                            }
                            if (ll_backend__string_switch__succeeded)
                              {
                                {
                                  ll_backend__string_switch__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__string_switch__ArgX7_15, ll_backend__string_switch__ArgY7_16);
                                }
                                if (ll_backend__string_switch__succeeded)
                                  {
                                    ll_backend__string_switch__TypeInfo_28_28 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
                                    {
                                      ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_28_28, ((MR_Box) (ll_backend__string_switch__ArgX8_17)), ((MR_Box) (ll_backend__string_switch__ArgY8_18)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Integer ll_backend__string_switch__CastX_33 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
    MR_Integer ll_backend__string_switch__CastY_34 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_33 == ll_backend__string_switch__CastY_34);
    if (ll_backend__string_switch__succeeded)
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__string_switch__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__string_switch__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__string_switch__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ll_backend__string_switch__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ll_backend__string_switch__Var_24;

        {
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_24, ll_backend__string_switch__ArgX1_4, ll_backend__string_switch__ArgY1_5);
        }
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_24 == (MR_Integer) 0);
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
        if (ll_backend__string_switch__succeeded)
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_24;
        else
          {
            MR_Word ll_backend__string_switch__Var_25;

            {
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_25, ll_backend__string_switch__ArgX2_6, ll_backend__string_switch__ArgY2_7);
            }
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_25 == (MR_Integer) 0);
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
            if (ll_backend__string_switch__succeeded)
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_25;
            else
              {
                MR_Word ll_backend__string_switch__Var_26;

                {
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_26, ll_backend__string_switch__ArgX3_8, ll_backend__string_switch__ArgY3_9);
                }
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_26 == (MR_Integer) 0);
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                if (ll_backend__string_switch__succeeded)
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_26;
                else
                  {
                    MR_Word ll_backend__string_switch__Var_27;

                    {
                      ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__Var_27, ll_backend__string_switch__ArgX4_10, ll_backend__string_switch__ArgY4_11);
                    }
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_27 == (MR_Integer) 0);
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                    if (ll_backend__string_switch__succeeded)
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_27;
                    else
                      {
                        MR_Word ll_backend__string_switch__Var_28;

                        {
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_28, ll_backend__string_switch__ArgX5_12, ll_backend__string_switch__ArgY5_13);
                        }
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_28 == (MR_Integer) 0);
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                        if (ll_backend__string_switch__succeeded)
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_28;
                        else
                          {
                            MR_Word ll_backend__string_switch__Var_29;

                            {
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_29, ll_backend__string_switch__ArgX6_14, ll_backend__string_switch__ArgY6_15);
                            }
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_29 == (MR_Integer) 0);
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                            if (ll_backend__string_switch__succeeded)
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_29;
                            else
                              {
                                MR_Word ll_backend__string_switch__Var_30;

                                {
                                  ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_30, ll_backend__string_switch__ArgX7_16, ll_backend__string_switch__ArgY7_17);
                                }
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_30 == (MR_Integer) 0);
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                                if (ll_backend__string_switch__succeeded)
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_30;
                                else
                                  {
                                    MR_Word ll_backend__string_switch__Var_31;

                                    {
                                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__Var_31, ll_backend__string_switch__ArgX8_18, ll_backend__string_switch__ArgY8_19);
                                    }
                                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_31 == (MR_Integer) 0);
                                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                                    if (ll_backend__string_switch__succeeded)
                                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_31;
                                    else
                                      {
                                        MR_Word ll_backend__string_switch__Var_32;

                                        {
                                          ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__string_switch__Var_32, ll_backend__string_switch__ArgX9_20, ll_backend__string_switch__ArgY9_21);
                                        }
                                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__Var_32 == (MR_Integer) 0);
                                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
                                        if (ll_backend__string_switch__succeeded)
                                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__Var_32;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__ArgX10_22)), ((MR_Box) (ll_backend__string_switch__ArgY10_23)));
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
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Integer ll_backend__string_switch__CastX_23 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
    MR_Integer ll_backend__string_switch__CastY_24 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_23 == ll_backend__string_switch__CastY_24);
    if (ll_backend__string_switch__succeeded)
      ll_backend__string_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__string_switch__TypeInfo_34_34;
        MR_Word ll_backend__string_switch__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__string_switch__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__string_switch__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__string_switch__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__string_switch__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__string_switch__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__string_switch__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__string_switch__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__string_switch__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__string_switch__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ll_backend__string_switch__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));

        {
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX1_3, ll_backend__string_switch__ArgY1_4);
        }
        if (ll_backend__string_switch__succeeded)
          {
            {
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX2_5, ll_backend__string_switch__ArgY2_6);
            }
            if (ll_backend__string_switch__succeeded)
              {
                {
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX3_7, ll_backend__string_switch__ArgY3_8);
                }
                if (ll_backend__string_switch__succeeded)
                  {
                    {
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__ArgX4_9, ll_backend__string_switch__ArgY4_10);
                    }
                    if (ll_backend__string_switch__succeeded)
                      {
                        {
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX5_11, ll_backend__string_switch__ArgY5_12);
                        }
                        if (ll_backend__string_switch__succeeded)
                          {
                            {
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX6_13, ll_backend__string_switch__ArgY6_14);
                            }
                            if (ll_backend__string_switch__succeeded)
                              {
                                {
                                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX7_15, ll_backend__string_switch__ArgY7_16);
                                }
                                if (ll_backend__string_switch__succeeded)
                                  {
                                    {
                                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__ArgX8_17, ll_backend__string_switch__ArgY8_18);
                                    }
                                    if (ll_backend__string_switch__succeeded)
                                      {
                                        {
                                          ll_backend__string_switch__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__string_switch__ArgX9_19, ll_backend__string_switch__ArgY9_20);
                                        }
                                        if (ll_backend__string_switch__succeeded)
                                          {
                                            ll_backend__string_switch__TypeInfo_34_34 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
                                            {
                                              ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_34_34, ((MR_Box) (ll_backend__string_switch__ArgX10_21)), ((MR_Box) (ll_backend__string_switch__ArgY10_22)));
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
    return ll_backend__string_switch__succeeded;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(
  MR_Word ll_backend__string_switch__VarRval_12,
  MR_Word ll_backend__string_switch__LookupSwitchInfo_13,
  MR_Word ll_backend__string_switch__CanFail_14,
  MR_Word ll_backend__string_switch__EndLabel_15,
  MR_Word ll_backend__string_switch__StoreMap_16,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32,
  MR_Word * ll_backend__string_switch__Code_18,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_33,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_34,
  MR_Word ll_backend__string_switch__CLD_20)
{
  {
    MR_Word ll_backend__string_switch__CaseConsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 0)));
    MR_Word ll_backend__string_switch__OutVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 1)));
    MR_Word ll_backend__string_switch__OutTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 2)));
    MR_Word ll_backend__string_switch__Liveness_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 3)));

    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_21)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__string_switch__CaseValueMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__CaseValues_26;

        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__CaseValueMap_25, &ll_backend__string_switch__CaseValues_26);
        }
        {
          ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseValues_26, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
        }
      }
    else
      {
        MR_Word ll_backend__string_switch__CaseSolnMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ResumeVars_28;
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_29;
        MR_Word ll_backend__string_switch__CaseSolns_30;
        MR_Word ll_backend__string_switch__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 1)));

        ll_backend__string_switch__ResumeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_35, (MR_Integer) 0)));
        ll_backend__string_switch__GoalsMayModifyTrail_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_35, (MR_Integer) 1)));
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolnMap_27, &ll_backend__string_switch__CaseSolns_30);
        }
        {
          ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseSolns_30, ll_backend__string_switch__ResumeVars_28, ll_backend__string_switch__GoalsMayModifyTrail_29, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
        }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__string_switch__wrapper_arg_2;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

    {
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
    return ll_backend__string_switch__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

    {
      ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

    {
      ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__914__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
  MR_Word ll_backend__string_switch__VarRval_17,
  MR_Word ll_backend__string_switch__CaseSolns_18,
  MR_Word ll_backend__string_switch__ResumeVars_19,
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__OutTypes_22,
  MR_Word ll_backend__string_switch__Liveness_23,
  MR_Word ll_backend__string_switch__CanFail_24,
  MR_Word ll_backend__string_switch__EndLabel_25,
  MR_Word ll_backend__string_switch__StoreMap_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65,
  MR_Word * ll_backend__string_switch__Code_28,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_66,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_67,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_68)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Word ll_backend__string_switch__TypeCtorInfo_143_143;
    MR_Word ll_backend__string_switch__TypeCtorInfo_148_148;
    MR_Word ll_backend__string_switch__TypeInfo_152_152;
    MR_Word ll_backend__string_switch__TypeInfo_153_153;
    MR_Word ll_backend__string_switch__BinarySwitchInfo_31;
    MR_Word ll_backend__string_switch__CommentCode_32;
    MR_Integer ll_backend__string_switch__MainTableSize_33;
    MR_Integer ll_backend__string_switch__NumOutVars_34;
    MR_Word ll_backend__string_switch__OutElemTypes_35;
    MR_Word ll_backend__string_switch__ArrayElemTypes_36;
    MR_Word ll_backend__string_switch__ArrayElemType_37;
    MR_Word ll_backend__string_switch__AddTrailOps_39;
    MR_Word ll_backend__string_switch__DummyLaterSolnRow_41;
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_42;
    MR_Word ll_backend__string_switch__RevMainRows_43;
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_44;
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_45;
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_46;
    MR_Word ll_backend__string_switch__MainRows_47;
    MR_Word ll_backend__string_switch__LaterSolnArray_48;
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_49;
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_50;
    MR_Word ll_backend__string_switch__DescendingSortedKinds_51;
    MR_Word ll_backend__string_switch__MainRowTypes_52;
    MR_Integer ll_backend__string_switch__MainNumColumns_53;
    MR_Word ll_backend__string_switch__MainVectorAddr_54;
    MR_Word ll_backend__string_switch__MainVectorAddrRval_55;
    MR_Word ll_backend__string_switch__LaterVectorAddr_56;
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_57;
    MR_Word ll_backend__string_switch__BaseReg_58;
    MR_Word ll_backend__string_switch__MidReg_59;
    MR_Word ll_backend__string_switch__SetBaseRegCode_60;
    MR_Word ll_backend__string_switch__BinarySearchCode_61;
    MR_Word ll_backend__string_switch__LookupResultsCode_62;
    MR_Word ll_backend__string_switch__EndLabelCode_63;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_69_69;
    MR_Word ll_backend__string_switch__Var_76;
    MR_Word ll_backend__string_switch__Var_78;
    MR_Word ll_backend__string_switch__Var_80;
    MR_Word ll_backend__string_switch__Var_84;
    MR_Word ll_backend__string_switch__Var_90;
    MR_Word ll_backend__string_switch__Var_91;
    MR_Word ll_backend__string_switch__Var_93;
    MR_Word ll_backend__string_switch__Var_94;
    MR_Word ll_backend__string_switch__Var_98;
    MR_Word ll_backend__string_switch__Var_99;
    MR_Word ll_backend__string_switch__Var_101;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_104_104;
    MR_Word ll_backend__string_switch__Var_105;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_107_107;
    MR_Word ll_backend__string_switch__Var_108;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_111_111;
    MR_Word ll_backend__string_switch__Var_112;
    MR_Word ll_backend__string_switch__Var_113;
    MR_Word ll_backend__string_switch__Var_114;
    MR_Word ll_backend__string_switch__Var_115;
    MR_Word ll_backend__string_switch__Var_118;
    MR_Word ll_backend__string_switch__Var_121;
    MR_Word ll_backend__string_switch__Var_122;
    MR_Word ll_backend__string_switch__Var_123;
    MR_Word ll_backend__string_switch__Var_128;
    MR_Word ll_backend__string_switch__Var_129;
    MR_Word ll_backend__string_switch__Var_131;
    MR_Word ll_backend__string_switch__Var_132;
    MR_Word ll_backend__string_switch__Var_133;
    MR_Word ll_backend__string_switch__Var_134;
    MR_Word ll_backend__string_switch__Var_135;
    MR_Word ll_backend__string_switch__Var_136;
    MR_Word ll_backend__string_switch__Var_137;
    MR_Word ll_backend__string_switch__Var_138;
    MR_Word ll_backend__string_switch__Var_139;
    MR_Word ll_backend__string_switch__Var_140;
    MR_Word ll_backend__string_switch__Var_141;
    MR_Word ll_backend__string_switch__Var_142;

    {
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_24, &ll_backend__string_switch__BinarySwitchInfo_31, ll_backend__string_switch__STATE_VARIABLE_CI_0_66, &ll_backend__string_switch__STATE_VARIABLE_CI_69_69, ll_backend__string_switch__STATE_VARIABLE_CLD_0_68);
    }
    ll_backend__string_switch__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_32 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[35])));
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[4], ll_backend__string_switch__CaseSolns_18, &ll_backend__string_switch__MainTableSize_33);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_21, &ll_backend__string_switch__NumOutVars_34);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_35);
    }
    {
      ll_backend__string_switch__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_78, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_78, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
    }
    {
      ll_backend__string_switch__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_76, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_76, 1) = ((MR_Box) (ll_backend__string_switch__Var_78));
    }
    {
      ll_backend__string_switch__ArrayElemTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_36, 1) = ((MR_Box) (ll_backend__string_switch__Var_76));
    }
    {
      ll_backend__string_switch__ArrayElemType_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_37, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_36));
    }
    {
      ll_backend__string_switch__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_84, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_84, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_84, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_21));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_84, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_80, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_80, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_80, 3) = ((MR_Box) (ll_backend__string_switch__Var_84));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__string_switch__Var_80, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
    }
    switch (ll_backend__string_switch__GoalsMayModifyTrail_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__string_switch__AddTrailOps_39 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_69_69, &ll_backend__string_switch__AddTrailOps_39);
        }
        break;
    }
    ll_backend__string_switch__TypeCtorInfo_148_148 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
    {
      ll_backend__string_switch__DummyLaterSolnRow_41 = mercury__list__map_2_f_0(ll_backend__string_switch__TypeCtorInfo_148_148, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[9], ll_backend__string_switch__OutTypes_22);
    }
    ll_backend__string_switch__TypeInfo_152_152 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
    {
      ll_backend__string_switch__LaterSolnArrayCord0_42 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_152_152, ((MR_Box) (ll_backend__string_switch__DummyLaterSolnRow_41)));
    }
    {
      ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(ll_backend__string_switch__CaseSolns_18, ll_backend__string_switch__NumOutVars_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_43, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_42, &ll_backend__string_switch__LaterSolnArrayCord_44, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_45, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_46);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_152_152, ll_backend__string_switch__RevMainRows_43, &ll_backend__string_switch__MainRows_47);
    }
    {
      ll_backend__string_switch__LaterSolnArray_48 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_152_152, ll_backend__string_switch__LaterSolnArrayCord_44);
    }
    {
      ll_backend__string_switch__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_91, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_45));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_91, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__string_switch__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_94, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_46));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_94, 1) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      ll_backend__string_switch__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_93, 0) = ((MR_Box) (ll_backend__string_switch__Var_94));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (ll_backend__string_switch__Var_91));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_90, 1) = ((MR_Box) (ll_backend__string_switch__Var_93));
    }
    ll_backend__string_switch__TypeInfo_153_153 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
    {
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_153_153, ll_backend__string_switch__Var_90, &ll_backend__string_switch__AscendingSortedCountKinds_49);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_153_153, ll_backend__string_switch__AscendingSortedCountKinds_49, &ll_backend__string_switch__DescendingSortedCountKinds_50);
    }
    {
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_50, &ll_backend__string_switch__DescendingSortedKinds_51);
    }
    ll_backend__string_switch__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]);
    {
      ll_backend__string_switch__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_101, 0) = ((MR_Box) (ll_backend__string_switch__Var_99));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_101, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
    }
    {
      ll_backend__string_switch__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_98, 0) = ((MR_Box) (ll_backend__string_switch__Var_99));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_98, 1) = ((MR_Box) (ll_backend__string_switch__Var_101));
    }
    {
      ll_backend__string_switch__MainRowTypes_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_52, 1) = ((MR_Box) (ll_backend__string_switch__Var_98));
    }
    {
      mercury__list__length_2_p_0(ll_backend__string_switch__TypeCtorInfo_148_148, ll_backend__string_switch__MainRowTypes_52, &ll_backend__string_switch__MainNumColumns_53);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_52, ll_backend__string_switch__MainRows_47, &ll_backend__string_switch__MainVectorAddr_54, ll_backend__string_switch__STATE_VARIABLE_CI_69_69, &ll_backend__string_switch__STATE_VARIABLE_CI_104_104);
    }
    {
      ll_backend__string_switch__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_105, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_54));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_105, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__MainVectorAddrRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_55, 1) = ((MR_Box) (ll_backend__string_switch__Var_105));
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_22, ll_backend__string_switch__LaterSolnArray_48, &ll_backend__string_switch__LaterVectorAddr_56, ll_backend__string_switch__STATE_VARIABLE_CI_104_104, &ll_backend__string_switch__STATE_VARIABLE_CI_107_107);
    }
    {
      ll_backend__string_switch__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_108, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_56));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_108, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__LaterVectorAddrRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_57, 1) = ((MR_Box) (ll_backend__string_switch__Var_108));
    }
    {
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_26, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_58, ll_backend__string_switch__STATE_VARIABLE_CLD_0_68, &ll_backend__string_switch__STATE_VARIABLE_CLD_111_111);
    }
    ll_backend__string_switch__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 0)));
    ll_backend__string_switch__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 1)));
    ll_backend__string_switch__MidReg_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 2)));
    ll_backend__string_switch__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 3)));
    ll_backend__string_switch__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 4)));
    ll_backend__string_switch__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 5)));
    ll_backend__string_switch__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 6)));
    ll_backend__string_switch__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 7)));
    ll_backend__string_switch__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 8)));
    ll_backend__string_switch__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 9)));
    {
      ll_backend__string_switch__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_121, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_59));
    }
    {
      ll_backend__string_switch__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_123, 0) = ((MR_Box) (ll_backend__string_switch__MainNumColumns_53));
    }
    {
      ll_backend__string_switch__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_122, 1) = ((MR_Box) (ll_backend__string_switch__Var_123));
    }
    {
      ll_backend__string_switch__Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 2) = ((MR_Box) (ll_backend__string_switch__Var_121));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 3) = ((MR_Box) (ll_backend__string_switch__Var_122));
    }
    {
      ll_backend__string_switch__Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_115, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_55));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_115, 2) = ((MR_Box) (ll_backend__string_switch__Var_118));
    }
    {
      ll_backend__string_switch__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 1) = ((MR_Box) (ll_backend__string_switch__Var_115));
    }
    {
      ll_backend__string_switch__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_58));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 2) = ((MR_Box) (ll_backend__string_switch__Var_114));
    }
    {
      ll_backend__string_switch__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_112, 0) = ((MR_Box) (ll_backend__string_switch__Var_113));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_112, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    {
      ll_backend__string_switch__SetBaseRegCode_60 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__string_switch__Var_112)));
    }
    {
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_31, ll_backend__string_switch__VarRval_17, ll_backend__string_switch__MainVectorAddrRval_55, ll_backend__string_switch__ArrayElemType_37, ll_backend__string_switch__MainTableSize_33, ll_backend__string_switch__MainNumColumns_53, &ll_backend__string_switch__BinarySearchCode_61);
    }
    {
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__string_switch__DescendingSortedKinds_51, (MR_Integer) 1, ll_backend__string_switch__OutVars_21, ll_backend__string_switch__ResumeVars_19, ll_backend__string_switch__EndLabel_25, ll_backend__string_switch__StoreMap_26, ll_backend__string_switch__Liveness_23, ll_backend__string_switch__AddTrailOps_39, ll_backend__string_switch__BaseReg_58, ll_backend__string_switch__LaterVectorAddrRval_57, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65, &ll_backend__string_switch__LookupResultsCode_62, ll_backend__string_switch__STATE_VARIABLE_CI_107_107, ll_backend__string_switch__STATE_VARIABLE_CI_67, ll_backend__string_switch__STATE_VARIABLE_CLD_111_111);
    }
    {
      ll_backend__string_switch__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_129, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_25));
    }
    {
      ll_backend__string_switch__Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_128, 0) = ((MR_Box) (ll_backend__string_switch__Var_129));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_128, 1) = ((MR_Box) ((MR_String) "end of string binary several solns switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_63 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__string_switch__Var_128)));
    }
    {
      ll_backend__string_switch__Var_133 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ll_backend__string_switch__LookupResultsCode_62, ll_backend__string_switch__EndLabelCode_63);
    }
    {
      ll_backend__string_switch__Var_132 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ll_backend__string_switch__SetBaseRegCode_60, ll_backend__string_switch__Var_133);
    }
    {
      ll_backend__string_switch__Var_131 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ll_backend__string_switch__BinarySearchCode_61, ll_backend__string_switch__Var_132);
    }
    {
      *ll_backend__string_switch__Code_28 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_143_143, ll_backend__string_switch__CommentCode_32, ll_backend__string_switch__Var_131);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
  MR_Integer * ll_backend__string_switch__HeadVar__11_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ll_backend__string_switch__HeadVar__11_11 = ll_backend__string_switch__HeadVar__10_10;
          *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
          *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
          *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3;
        }
      else
        {
          MR_String ll_backend__string_switch__Str_26;
          MR_Word ll_backend__string_switch__Soln_27;
          MR_Word ll_backend__string_switch__StrSolns_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__string_switch__StrRval_35;
          MR_Word ll_backend__string_switch__MainRow_38;
          MR_Word ll_backend__string_switch__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__string_switch__Var_56;
          MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;
          MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
          MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
          MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
          MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;

          ll_backend__string_switch__Str_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_55, (MR_Integer) 0)));
          ll_backend__string_switch__Soln_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_55, (MR_Integer) 1)));
          {
            ll_backend__string_switch__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 1) = ((MR_Box) (ll_backend__string_switch__Str_26));
          }
          {
            ll_backend__string_switch__StrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 1) = ((MR_Box) (ll_backend__string_switch__Var_56));
          }
          if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_27)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Word ll_backend__string_switch__OutRvals_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
              MR_Word ll_backend__string_switch__ZeroRval_37;
              MR_Word ll_backend__string_switch__Var_73;
              MR_Word ll_backend__string_switch__Var_74;

              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 + (MR_Integer) 1);
              ll_backend__string_switch__ZeroRval_37 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
              {
                ll_backend__string_switch__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_74, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_74, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_36));
              }
              {
                ll_backend__string_switch__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_73, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_73, 1) = ((MR_Box) (ll_backend__string_switch__Var_74));
              }
              {
                ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__Var_73));
              }
              ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = ll_backend__string_switch__HeadVar__5_5;
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
              ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = ll_backend__string_switch__HeadVar__10_10;
            }
          else
            {
              MR_Word ll_backend__string_switch__TypeInfo_80_80;
              MR_Word ll_backend__string_switch__FirstSolnRvals_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
              MR_Word ll_backend__string_switch__LaterSolns_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 1)));
              MR_Integer ll_backend__string_switch__NumLaterSolns_41;
              MR_Integer ll_backend__string_switch__FirstRowOffset_42;
              MR_Integer ll_backend__string_switch__LastRowOffset_43;
              MR_Word ll_backend__string_switch__FirstRowRval_44;
              MR_Word ll_backend__string_switch__LastRowRval_45;
              MR_Integer ll_backend__string_switch__Var_59;
              MR_Integer ll_backend__string_switch__Var_60;
              MR_Word ll_backend__string_switch__Var_62;
              MR_Word ll_backend__string_switch__Var_63;
              MR_Word ll_backend__string_switch__Var_64;
              MR_Word ll_backend__string_switch__Var_65;
              MR_Word ll_backend__string_switch__Var_68;

              ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = (ll_backend__string_switch__HeadVar__10_10 + (MR_Integer) 1);
              ll_backend__string_switch__TypeInfo_80_80 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
              {
                mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40, &ll_backend__string_switch__NumLaterSolns_41);
              }
              ll_backend__string_switch__FirstRowOffset_42 = (ll_backend__string_switch__HeadVar__5_5 * ll_backend__string_switch__HeadVar__2_2);
              ll_backend__string_switch__Var_60 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
              ll_backend__string_switch__Var_59 = (ll_backend__string_switch__Var_60 - (MR_Integer) 1);
              ll_backend__string_switch__LastRowOffset_43 = (ll_backend__string_switch__Var_59 * ll_backend__string_switch__HeadVar__2_2);
              {
                ll_backend__string_switch__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_62, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_42));
              }
              {
                ll_backend__string_switch__FirstRowRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 1) = ((MR_Box) (ll_backend__string_switch__Var_62));
              }
              {
                ll_backend__string_switch__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_63, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_43));
              }
              {
                ll_backend__string_switch__LastRowRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 1) = ((MR_Box) (ll_backend__string_switch__Var_63));
              }
              {
                ll_backend__string_switch__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_65, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_45));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_65, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_39));
              }
              {
                ll_backend__string_switch__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_64, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_44));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_64, 1) = ((MR_Box) (ll_backend__string_switch__Var_65));
              }
              {
                ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__Var_64));
              }
              ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
              {
                ll_backend__string_switch__Var_68 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40);
              }
              {
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6, ll_backend__string_switch__Var_68);
              }
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
            }
          {
            ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_38));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3));
          }
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__string_switch__next_value_of_HeadVar__1_1 = ll_backend__string_switch__StrSolns_28;
            MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMainRows_0_3 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;
            MR_Integer ll_backend__string_switch__next_value_of_HeadVar__5_5 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
            MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterSolnArray_0_6 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
            MR_Integer ll_backend__string_switch__next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
            MR_Integer ll_backend__string_switch__next_value_of_HeadVar__10_10 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;

            ll_backend__string_switch__HeadVar__10_10 = ll_backend__string_switch__next_value_of_HeadVar__10_10;
            ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8;
            ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterSolnArray_0_6;
            ll_backend__string_switch__HeadVar__5_5 = ll_backend__string_switch__next_value_of_HeadVar__5_5;
            ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMainRows_0_3;
            ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
  MR_Word ll_backend__string_switch__VarRval_15,
  MR_Word ll_backend__string_switch__CaseValues_16,
  MR_Word ll_backend__string_switch__OutVars_17,
  MR_Word ll_backend__string_switch__OutTypes_18,
  MR_Word ll_backend__string_switch__Liveness_19,
  MR_Word ll_backend__string_switch__CanFail_20,
  MR_Word ll_backend__string_switch__EndLabel_21,
  MR_Word ll_backend__string_switch__StoreMap_22,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
  MR_Word * ll_backend__string_switch__Code_24,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_53)
{
  {
    MR_Word ll_backend__string_switch__TypeCtorInfo_100_100;
    MR_Word ll_backend__string_switch__BinarySwitchInfo_27;
    MR_Word ll_backend__string_switch__CommentCode_28;
    MR_Integer ll_backend__string_switch__TableSize_29;
    MR_Integer ll_backend__string_switch__NumOutVars_30;
    MR_Integer ll_backend__string_switch__NumColumns_31;
    MR_Word ll_backend__string_switch__OutElemTypes_32;
    MR_Word ll_backend__string_switch__ArrayElemTypes_33;
    MR_Word ll_backend__string_switch__ArrayElemType_34;
    MR_Word ll_backend__string_switch__RevVectorRvals_35;
    MR_Word ll_backend__string_switch__VectorRvals_36;
    MR_Word ll_backend__string_switch__RowElemTypes_37;
    MR_Word ll_backend__string_switch__VectorAddr_38;
    MR_Word ll_backend__string_switch__VectorAddrRval_39;
    MR_Word ll_backend__string_switch__SetBaseRegCode_40;
    MR_Word ll_backend__string_switch__BinarySearchCode_45;
    MR_Word ll_backend__string_switch__BranchEndCode_47;
    MR_Word ll_backend__string_switch__EndLabelCode_48;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_54_54;
    MR_Word ll_backend__string_switch__Var_65;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_83_83;
    MR_Word ll_backend__string_switch__Var_85;
    MR_Word ll_backend__string_switch__Var_86;
    MR_Word ll_backend__string_switch__Var_88;
    MR_Word ll_backend__string_switch__Var_89;
    MR_Word ll_backend__string_switch__Var_90;
    MR_Word ll_backend__string_switch___MaybeEnd_46;

    {
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_20, &ll_backend__string_switch__BinarySwitchInfo_27, ll_backend__string_switch__STATE_VARIABLE_CI_0_51, &ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__STATE_VARIABLE_CLD_0_53);
    }
    ll_backend__string_switch__TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_28 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[34])));
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[3], ll_backend__string_switch__CaseValues_16, &ll_backend__string_switch__TableSize_29);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_17, &ll_backend__string_switch__NumOutVars_30);
    }
    ll_backend__string_switch__NumColumns_31 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_30);
    {
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_30, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_32);
    }
    {
      ll_backend__string_switch__ArrayElemTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_33, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_33, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_32));
    }
    {
      ll_backend__string_switch__ArrayElemType_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_34, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_33));
    }
    {
      ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(ll_backend__string_switch__CaseValues_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_35);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevVectorRvals_35, &ll_backend__string_switch__VectorRvals_36);
    }
    {
      ll_backend__string_switch__RowElemTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_37, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_37, ll_backend__string_switch__VectorRvals_36, &ll_backend__string_switch__VectorAddr_38, ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__STATE_VARIABLE_CI_52);
    }
    {
      ll_backend__string_switch__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_38));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__VectorAddrRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_39, 1) = ((MR_Box) (ll_backend__string_switch__Var_65));
    }
    if ((ll_backend__string_switch__OutVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__string_switch__SetBaseRegCode_40 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_100_100);
        }
        ll_backend__string_switch__STATE_VARIABLE_CLD_83_83 = ll_backend__string_switch__STATE_VARIABLE_CLD_0_53;
      }
    else
      {
        MR_Word ll_backend__string_switch__BaseReg_43;
        MR_Word ll_backend__string_switch__MidReg_44;
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_68_68;
        MR_Word ll_backend__string_switch__Var_69;
        MR_Word ll_backend__string_switch__Var_70;
        MR_Word ll_backend__string_switch__Var_71;
        MR_Word ll_backend__string_switch__Var_72;
        MR_Word ll_backend__string_switch__Var_75;
        MR_Word ll_backend__string_switch__Var_78;
        MR_Word ll_backend__string_switch__Var_79;
        MR_Word ll_backend__string_switch__Var_80;
        MR_Word ll_backend__string_switch__Var_91;
        MR_Word ll_backend__string_switch__Var_92;
        MR_Word ll_backend__string_switch__Var_93;
        MR_Word ll_backend__string_switch__Var_94;
        MR_Word ll_backend__string_switch__Var_95;
        MR_Word ll_backend__string_switch__Var_96;
        MR_Word ll_backend__string_switch__Var_97;
        MR_Word ll_backend__string_switch__Var_98;
        MR_Word ll_backend__string_switch__Var_99;

        {
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_22, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_43, ll_backend__string_switch__STATE_VARIABLE_CLD_0_53, &ll_backend__string_switch__STATE_VARIABLE_CLD_68_68);
        }
        ll_backend__string_switch__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 0)));
        ll_backend__string_switch__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 1)));
        ll_backend__string_switch__MidReg_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 2)));
        ll_backend__string_switch__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 3)));
        ll_backend__string_switch__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 4)));
        ll_backend__string_switch__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 5)));
        ll_backend__string_switch__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 6)));
        ll_backend__string_switch__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 7)));
        ll_backend__string_switch__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 8)));
        ll_backend__string_switch__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 9)));
        {
          ll_backend__string_switch__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_78, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_44));
        }
        {
          ll_backend__string_switch__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_80, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_31));
        }
        {
          ll_backend__string_switch__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 1) = ((MR_Box) (ll_backend__string_switch__Var_80));
        }
        {
          ll_backend__string_switch__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 2) = ((MR_Box) (ll_backend__string_switch__Var_78));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 3) = ((MR_Box) (ll_backend__string_switch__Var_79));
        }
        {
          ll_backend__string_switch__Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_72, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_39));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1])));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_72, 2) = ((MR_Box) (ll_backend__string_switch__Var_75));
        }
        {
          ll_backend__string_switch__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_71, 1) = ((MR_Box) (ll_backend__string_switch__Var_72));
        }
        {
          ll_backend__string_switch__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_43));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 2) = ((MR_Box) (ll_backend__string_switch__Var_71));
        }
        {
          ll_backend__string_switch__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_69, 0) = ((MR_Box) (ll_backend__string_switch__Var_70));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_69, 1) = ((MR_Box) ((MR_String) "set up base reg"));
        }
        {
          ll_backend__string_switch__SetBaseRegCode_40 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (ll_backend__string_switch__Var_69)));
        }
        {
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__string_switch__OutVars_17, (MR_Integer) 1, ll_backend__string_switch__BaseReg_43, *ll_backend__string_switch__STATE_VARIABLE_CI_52, ll_backend__string_switch__STATE_VARIABLE_CLD_68_68, &ll_backend__string_switch__STATE_VARIABLE_CLD_83_83);
        }
      }
    {
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_27, ll_backend__string_switch__VarRval_15, ll_backend__string_switch__VectorAddrRval_39, ll_backend__string_switch__ArrayElemType_34, ll_backend__string_switch__TableSize_29, ll_backend__string_switch__NumColumns_31, &ll_backend__string_switch__BinarySearchCode_45);
    }
    {
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_22, ll_backend__string_switch__Liveness_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch___MaybeEnd_46, &ll_backend__string_switch__BranchEndCode_47, *ll_backend__string_switch__STATE_VARIABLE_CI_52, ll_backend__string_switch__STATE_VARIABLE_CLD_83_83);
    }
    {
      ll_backend__string_switch__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_86, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
    }
    {
      ll_backend__string_switch__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_85, 0) = ((MR_Box) (ll_backend__string_switch__Var_86));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_85, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_48 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (ll_backend__string_switch__Var_85)));
    }
    {
      ll_backend__string_switch__Var_90 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__BranchEndCode_47, ll_backend__string_switch__EndLabelCode_48);
    }
    {
      ll_backend__string_switch__Var_89 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__SetBaseRegCode_40, ll_backend__string_switch__Var_90);
    }
    {
      ll_backend__string_switch__Var_88 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__BinarySearchCode_45, ll_backend__string_switch__Var_89);
    }
    {
      *ll_backend__string_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__CommentCode_28, ll_backend__string_switch__Var_88);
    }
    *ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50 = ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49;
  }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__string_switch__STATE_VARIABLE_RevRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2;
      else
        {
          MR_String ll_backend__string_switch__Str_7;
          MR_Word ll_backend__string_switch__OutRvals_8;
          MR_Word ll_backend__string_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__string_switch__RowRvals_11;
          MR_Word ll_backend__string_switch__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__string_switch__Var_15;
          MR_Word ll_backend__string_switch__Var_16;
          MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

          ll_backend__string_switch__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_14, (MR_Integer) 0)));
          ll_backend__string_switch__OutRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_14, (MR_Integer) 1)));
          {
            ll_backend__string_switch__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_16, 1) = ((MR_Box) (ll_backend__string_switch__Str_7));
          }
          {
            ll_backend__string_switch__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_15, 1) = ((MR_Box) (ll_backend__string_switch__Var_16));
          }
          {
            ll_backend__string_switch__RowRvals_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 0) = ((MR_Box) (ll_backend__string_switch__Var_15));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_8));
          }
          {
            ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 0) = ((MR_Box) (ll_backend__string_switch__RowRvals_11));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2));
          }
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__string_switch__next_value_of_HeadVar__1_1 = ll_backend__string_switch__Rest_9;
            MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

            ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevRows_0_2;
            ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4)
{
  {
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv7_HeadVar__4_4;

    {
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv7_HeadVar__4_4);
    }
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv7_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
  MR_Box ll_backend__string_switch__wrapper_arg_5,
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
  MR_Box ll_backend__string_switch__wrapper_arg_7,
  MR_Box * ll_backend__string_switch__wrapper_arg_8)
{
  {
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv3_HeadVar__3_3;
    MR_Word ll_backend__string_switch__conv2_HeadVar__5_5;
    MR_Word ll_backend__string_switch__conv1_HeadVar__7_7;
    MR_Word ll_backend__string_switch__conv0_HeadVar__9_9;

    {
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__string_switch__wrapper_arg_1), &ll_backend__string_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__string_switch__wrapper_arg_5), &ll_backend__string_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__string_switch__wrapper_arg_7), &ll_backend__string_switch__conv0_HeadVar__9_9);
    }
    *ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv3_HeadVar__3_3));
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv2_HeadVar__5_5));
    *ll_backend__string_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__string_switch__conv1_HeadVar__7_7));
    *ll_backend__string_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__9_9));
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0(
  MR_Word ll_backend__string_switch__Cases_13,
  MR_Word ll_backend__string_switch__VarRval_14,
  MR_String ll_backend__string_switch__VarName_15,
  MR_Word ll_backend__string_switch__CodeModel_16,
  MR_Word ll_backend__string_switch__CanFail_17,
  MR_Word ll_backend__string_switch__SwitchGoalInfo_18,
  MR_Word ll_backend__string_switch__EndLabel_19,
  MR_Word * ll_backend__string_switch__MaybeEnd_20,
  MR_Word * ll_backend__string_switch__Code_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_47,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_48,
  MR_Word ll_backend__string_switch__CLD_23)
{
  {
    MR_Word ll_backend__string_switch__TypeCtorInfo_115_115;
    MR_Word ll_backend__string_switch__TypeCtorInfo_116_116;
    MR_Word ll_backend__string_switch__TypeCtorInfo_117_117;
    MR_Word ll_backend__string_switch__BinarySwitchInfo_24;
    MR_Word ll_backend__string_switch__BranchStart_25;
    MR_Word ll_backend__string_switch__Params_26;
    MR_Word ll_backend__string_switch__CommentCode_27;
    MR_Word ll_backend__string_switch__CaseLabelMap0_28;
    MR_Word ll_backend__string_switch__CaseLabelMap_29;
    MR_Word ll_backend__string_switch__SortedTable_30;
    MR_Word ll_backend__string_switch__RevTableRows_31;
    MR_Word ll_backend__string_switch__RevTargets_32;
    MR_Integer ll_backend__string_switch__TableSize_33;
    MR_Word ll_backend__string_switch__TableRows_34;
    MR_Word ll_backend__string_switch__Targets_35;
    MR_Word ll_backend__string_switch__TableAddr_38;
    MR_Word ll_backend__string_switch__TableAddrRval_41;
    MR_Word ll_backend__string_switch__BinarySearchCode_42;
    MR_Word ll_backend__string_switch__MidReg_43;
    MR_Word ll_backend__string_switch__ComputedGotoCode_44;
    MR_Word ll_backend__string_switch__CasesCode_45;
    MR_Word ll_backend__string_switch__EndLabelCode_46;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_49_49;
    MR_Word ll_backend__string_switch__Var_54;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_56_56;
    MR_Word ll_backend__string_switch__Var_70;
    MR_Word ll_backend__string_switch__Var_72;
    MR_Word ll_backend__string_switch__Var_73;
    MR_Word ll_backend__string_switch__Var_74;
    MR_Word ll_backend__string_switch__Var_76;
    MR_Word ll_backend__string_switch__Var_79;
    MR_Word ll_backend__string_switch__Var_82;
    MR_Word ll_backend__string_switch__Var_90;
    MR_Word ll_backend__string_switch__Var_91;
    MR_Word ll_backend__string_switch__Var_92;
    MR_Word ll_backend__string_switch__Var_94;
    MR_Word ll_backend__string_switch__Var_95;
    MR_Word ll_backend__string_switch__Var_96;
    MR_Word ll_backend__string_switch__Var_97;
    MR_Word ll_backend__string_switch__Var_98;
    MR_Word ll_backend__string_switch__Var_99;
    MR_Word ll_backend__string_switch__Var_100;
    MR_Word ll_backend__string_switch__Var_101;
    MR_Word ll_backend__string_switch__Var_102;
    MR_Word ll_backend__string_switch__Var_103;
    MR_Word ll_backend__string_switch__Var_104;
    MR_Word ll_backend__string_switch__Var_105;
    MR_Box ll_backend__string_switch__conv6_CaseLabelMap_29;
    MR_Box ll_backend__string_switch__conv5_MaybeEnd_20;
    MR_Box ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56;
    MR_Word ll_backend__string_switch__Var_106;
    MR_Word ll_backend__string_switch__Var_107;
    MR_Word ll_backend__string_switch__Var_108;
    MR_Word ll_backend__string_switch__Var_109;
    MR_Word ll_backend__string_switch__Var_110;
    MR_Word ll_backend__string_switch__Var_111;
    MR_Word ll_backend__string_switch__Var_112;
    MR_Word ll_backend__string_switch__Var_113;
    MR_Word ll_backend__string_switch__Var_114;
    MR_Box ll_backend__string_switch__conv8_CasesCode_45;

    {
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_17, &ll_backend__string_switch__BinarySwitchInfo_24, ll_backend__string_switch__STATE_VARIABLE_CI_0_47, &ll_backend__string_switch__STATE_VARIABLE_CI_49_49, ll_backend__string_switch__CLD_23);
    }
    ll_backend__string_switch__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 0)));
    ll_backend__string_switch__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 1)));
    ll_backend__string_switch__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 2)));
    ll_backend__string_switch__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 3)));
    ll_backend__string_switch__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 4)));
    ll_backend__string_switch__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 5)));
    ll_backend__string_switch__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 6)));
    ll_backend__string_switch__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 7)));
    ll_backend__string_switch__BranchStart_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 8)));
    ll_backend__string_switch__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 9)));
    {
      ll_backend__string_switch__Params_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 0) = ((MR_Box) (ll_backend__string_switch__VarName_15));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_18));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_16));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_25));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
    }
    ll_backend__string_switch__TypeCtorInfo_115_115 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_27 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[32])));
    }
    ll_backend__string_switch__TypeCtorInfo_116_116 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    ll_backend__string_switch__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
    {
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__TypeCtorInfo_117_117, &ll_backend__string_switch__CaseLabelMap0_28);
    }
    {
      ll_backend__string_switch__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 3) = ((MR_Box) (ll_backend__string_switch__Params_26));
    }
    {
      backend_libs__switch_util__string_binary_cases_9_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, (MR_Word) &ll_backend__string_switch_scalar_common_2[0], (MR_Word) &ll_backend__string_switch_scalar_common_1[4], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__string_switch__Cases_13, ll_backend__string_switch__Var_54, ((MR_Box) (ll_backend__string_switch__CaseLabelMap0_28)), &ll_backend__string_switch__conv6_CaseLabelMap_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__string_switch__conv5_MaybeEnd_20, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CI_49_49)), &ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56, &ll_backend__string_switch__SortedTable_30);
    }
    ll_backend__string_switch__CaseLabelMap_29 = ((MR_Word) ll_backend__string_switch__conv6_CaseLabelMap_29);
    *ll_backend__string_switch__MaybeEnd_20 = ((MR_Word) ll_backend__string_switch__conv5_MaybeEnd_20);
    ll_backend__string_switch__STATE_VARIABLE_CI_56_56 = ((MR_Word) ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56);
    {
      ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(ll_backend__string_switch__SortedTable_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_32, (MR_Integer) 0, &ll_backend__string_switch__TableSize_33);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_31, &ll_backend__string_switch__TableRows_34);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_32, &ll_backend__string_switch__Targets_35);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]), ll_backend__string_switch__TableRows_34, &ll_backend__string_switch__TableAddr_38, ll_backend__string_switch__STATE_VARIABLE_CI_56_56, ll_backend__string_switch__STATE_VARIABLE_CI_48);
    }
    {
      ll_backend__string_switch__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_38));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_70, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__TableAddrRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_41, 1) = ((MR_Box) (ll_backend__string_switch__Var_70));
    }
    {
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_24, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__TableAddrRval_41, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[10]), ll_backend__string_switch__TableSize_33, (MR_Integer) 2, &ll_backend__string_switch__BinarySearchCode_42);
    }
    ll_backend__string_switch__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 0)));
    ll_backend__string_switch__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 1)));
    ll_backend__string_switch__MidReg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 2)));
    ll_backend__string_switch__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 3)));
    ll_backend__string_switch__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 4)));
    ll_backend__string_switch__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 5)));
    ll_backend__string_switch__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 6)));
    ll_backend__string_switch__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 7)));
    ll_backend__string_switch__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 8)));
    ll_backend__string_switch__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 9)));
    {
      ll_backend__string_switch__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_82, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_43));
    }
    {
      ll_backend__string_switch__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 2) = ((MR_Box) (ll_backend__string_switch__Var_82));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_79, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[30])));
    }
    {
      ll_backend__string_switch__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 2) = ((MR_Box) (ll_backend__string_switch__Var_79));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21])));
    }
    {
      ll_backend__string_switch__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[33])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_74, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_41));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_74, 3) = ((MR_Box) (ll_backend__string_switch__Var_76));
    }
    {
      ll_backend__string_switch__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 1) = ((MR_Box) (ll_backend__string_switch__Var_74));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 2) = ((MR_Box) (ll_backend__string_switch__Targets_35));
    }
    {
      ll_backend__string_switch__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_72, 0) = ((MR_Box) (ll_backend__string_switch__Var_73));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_72, 1) = ((MR_Box) ((MR_String) "jump to the matching case"));
    }
    {
      ll_backend__string_switch__ComputedGotoCode_44 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ((MR_Box) (ll_backend__string_switch__Var_72)));
    }
    {
      ll_backend__string_switch__Var_90 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_115_115);
    }
    {
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__TypeCtorInfo_117_117, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[8], ll_backend__string_switch__CaseLabelMap_29, ((MR_Box) (ll_backend__string_switch__Var_90)), &ll_backend__string_switch__conv8_CasesCode_45);
    }
    ll_backend__string_switch__CasesCode_45 = ((MR_Word) ll_backend__string_switch__conv8_CasesCode_45);
    {
      ll_backend__string_switch__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_92, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
    }
    {
      ll_backend__string_switch__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_91, 0) = ((MR_Box) (ll_backend__string_switch__Var_92));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_91, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ((MR_Box) (ll_backend__string_switch__Var_91)));
    }
    {
      ll_backend__string_switch__Var_96 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__CasesCode_45, ll_backend__string_switch__EndLabelCode_46);
    }
    {
      ll_backend__string_switch__Var_95 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__ComputedGotoCode_44, ll_backend__string_switch__Var_96);
    }
    {
      ll_backend__string_switch__Var_94 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__BinarySearchCode_42, ll_backend__string_switch__Var_95);
    }
    {
      *ll_backend__string_switch__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__CommentCode_27, ll_backend__string_switch__Var_94);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
  MR_Word ll_backend__string_switch__Info_8,
  MR_Word ll_backend__string_switch__VarRval_9,
  MR_Word ll_backend__string_switch__TableAddrRval_10,
  MR_Word ll_backend__string_switch__ArrayElemType_11,
  MR_Integer ll_backend__string_switch__TableSize_12,
  MR_Integer ll_backend__string_switch__NumColumns_13,
  MR_Word * ll_backend__string_switch__Code_14)
{
  {
    MR_Word ll_backend__string_switch__TypeCtorInfo_154_154 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    MR_Word ll_backend__string_switch__LoReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 0)));
    MR_Word ll_backend__string_switch__HiReg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 1)));
    MR_Word ll_backend__string_switch__MidReg_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 2)));
    MR_Word ll_backend__string_switch__ResultReg_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 3)));
    MR_Word ll_backend__string_switch__LoopStartLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 4)));
    MR_Word ll_backend__string_switch__GtEqLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 5)));
    MR_Word ll_backend__string_switch__EqLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 6)));
    MR_Word ll_backend__string_switch__FailLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 7)));
    MR_Word ll_backend__string_switch__FailCode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 9)));
    MR_Integer ll_backend__string_switch__MaxIndex_25 = (ll_backend__string_switch__TableSize_12 - (MR_Integer) 1);
    MR_Word ll_backend__string_switch__Var_27;
    MR_Word ll_backend__string_switch__Var_28;
    MR_Word ll_backend__string_switch__Var_29;
    MR_Word ll_backend__string_switch__Var_30;
    MR_Word ll_backend__string_switch__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
    MR_Word ll_backend__string_switch__Var_35;
    MR_Word ll_backend__string_switch__Var_36;
    MR_Word ll_backend__string_switch__Var_37;
    MR_Word ll_backend__string_switch__Var_38;
    MR_Word ll_backend__string_switch__Var_39;
    MR_Word ll_backend__string_switch__Var_41;
    MR_Word ll_backend__string_switch__Var_42;
    MR_Word ll_backend__string_switch__Var_43;
    MR_Word ll_backend__string_switch__Var_45;
    MR_Word ll_backend__string_switch__Var_46;
    MR_Word ll_backend__string_switch__Var_47;
    MR_Word ll_backend__string_switch__Var_48;
    MR_Word ll_backend__string_switch__Var_51;
    MR_Word ll_backend__string_switch__Var_52;
    MR_Word ll_backend__string_switch__Var_53;
    MR_Word ll_backend__string_switch__Var_55;
    MR_Word ll_backend__string_switch__Var_56;
    MR_Word ll_backend__string_switch__Var_57;
    MR_Word ll_backend__string_switch__Var_58;
    MR_Word ll_backend__string_switch__Var_61;
    MR_Word ll_backend__string_switch__Var_62;
    MR_Word ll_backend__string_switch__Var_70;
    MR_Word ll_backend__string_switch__Var_71;
    MR_Word ll_backend__string_switch__Var_72;
    MR_Word ll_backend__string_switch__Var_73;
    MR_Word ll_backend__string_switch__Var_75;
    MR_Word ll_backend__string_switch__Var_76;
    MR_Word ll_backend__string_switch__Var_77;
    MR_Word ll_backend__string_switch__Var_80;
    MR_Word ll_backend__string_switch__Var_81;
    MR_Word ll_backend__string_switch__Var_82;
    MR_Word ll_backend__string_switch__Var_84;
    MR_Word ll_backend__string_switch__Var_85;
    MR_Word ll_backend__string_switch__Var_86;
    MR_Word ll_backend__string_switch__Var_87;
    MR_Word ll_backend__string_switch__Var_90;
    MR_Word ll_backend__string_switch__Var_94;
    MR_Word ll_backend__string_switch__Var_96;
    MR_Word ll_backend__string_switch__Var_97;
    MR_Word ll_backend__string_switch__Var_98;
    MR_Word ll_backend__string_switch__Var_99;
    MR_Word ll_backend__string_switch__Var_103;
    MR_Word ll_backend__string_switch__Var_107;
    MR_Word ll_backend__string_switch__Var_108;
    MR_Word ll_backend__string_switch__Var_109;
    MR_Word ll_backend__string_switch__Var_110;
    MR_Word ll_backend__string_switch__Var_112;
    MR_Word ll_backend__string_switch__Var_113;
    MR_Word ll_backend__string_switch__Var_114;
    MR_Word ll_backend__string_switch__Var_116;
    MR_Word ll_backend__string_switch__Var_117;
    MR_Word ll_backend__string_switch__Var_118;
    MR_Word ll_backend__string_switch__Var_119;
    MR_Word ll_backend__string_switch__Var_126;
    MR_Word ll_backend__string_switch__Var_128;
    MR_Word ll_backend__string_switch__Var_129;
    MR_Word ll_backend__string_switch__Var_130;
    MR_Word ll_backend__string_switch__Var_131;
    MR_Word ll_backend__string_switch__Var_139;
    MR_Word ll_backend__string_switch__Var_140;
    MR_Word ll_backend__string_switch__Var_144;
    MR_Word ll_backend__string_switch__Var_145;
    MR_Word ll_backend__string_switch__Var_146;
    MR_Word ll_backend__string_switch__Var_149;
    MR_Word ll_backend__string_switch__Var_150;
    MR_Word ll_backend__string_switch__Var_151;
    MR_Word ll_backend__string_switch__Var_152;
    MR_Word ll_backend__string_switch___BranchStart_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 8)));

    {
      ll_backend__string_switch__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_30, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_30, 2) = ((MR_Box) (ll_backend__string_switch__Var_31));
    }
    {
      ll_backend__string_switch__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_29, 0) = ((MR_Box) (ll_backend__string_switch__Var_30));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_29, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__string_switch__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_39, 0) = ((MR_Box) (ll_backend__string_switch__MaxIndex_25));
    }
    {
      ll_backend__string_switch__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_38, 1) = ((MR_Box) (ll_backend__string_switch__Var_39));
    }
    {
      ll_backend__string_switch__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_37, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_37, 2) = ((MR_Box) (ll_backend__string_switch__Var_38));
    }
    {
      ll_backend__string_switch__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_36, 0) = ((MR_Box) (ll_backend__string_switch__Var_37));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_36, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__string_switch__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_43, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
    }
    {
      ll_backend__string_switch__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_42, 0) = ((MR_Box) (ll_backend__string_switch__Var_43));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_42, 1) = ((MR_Box) ((MR_String) "begin table search loop, nofulljump"));
    }
    {
      ll_backend__string_switch__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_51, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
    }
    {
      ll_backend__string_switch__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_52, 0) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
    }
    {
      ll_backend__string_switch__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[28])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 2) = ((MR_Box) (ll_backend__string_switch__Var_51));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 3) = ((MR_Box) (ll_backend__string_switch__Var_52));
    }
    {
      ll_backend__string_switch__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_53, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
    }
    {
      ll_backend__string_switch__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 1) = ((MR_Box) (ll_backend__string_switch__Var_48));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 2) = ((MR_Box) (ll_backend__string_switch__Var_53));
    }
    {
      ll_backend__string_switch__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_46, 0) = ((MR_Box) (ll_backend__string_switch__Var_47));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_46, 1) = ((MR_Box) ((MR_String) "have we searched all of the table\?"));
    }
    ll_backend__string_switch__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]);
    {
      ll_backend__string_switch__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_61, 1) = ((MR_Box) (ll_backend__string_switch__Var_62));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_61, 2) = ((MR_Box) (ll_backend__string_switch__Var_51));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_61, 3) = ((MR_Box) (ll_backend__string_switch__Var_52));
    }
    {
      ll_backend__string_switch__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[29])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_58, 2) = ((MR_Box) (ll_backend__string_switch__Var_61));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[30])));
    }
    {
      ll_backend__string_switch__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_57, 1) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_57, 2) = ((MR_Box) (ll_backend__string_switch__Var_58));
    }
    {
      ll_backend__string_switch__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_56, 0) = ((MR_Box) (ll_backend__string_switch__Var_57));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_56, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__string_switch__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_76, 1) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_11));
    }
    {
      ll_backend__string_switch__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_80, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
    }
    {
      ll_backend__string_switch__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_82, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_13));
    }
    {
      ll_backend__string_switch__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_81, 1) = ((MR_Box) (ll_backend__string_switch__Var_82));
    }
    {
      ll_backend__string_switch__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_77, 2) = ((MR_Box) (ll_backend__string_switch__Var_80));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_77, 3) = ((MR_Box) (ll_backend__string_switch__Var_81));
    }
    {
      ll_backend__string_switch__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 1) = ((MR_Box) (ll_backend__string_switch__Var_76));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_10));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_75, 3) = ((MR_Box) (ll_backend__string_switch__Var_77));
    }
    {
      ll_backend__string_switch__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_9));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_73, 3) = ((MR_Box) (ll_backend__string_switch__Var_75));
    }
    {
      ll_backend__string_switch__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 1) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 2) = ((MR_Box) (ll_backend__string_switch__Var_73));
    }
    {
      ll_backend__string_switch__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_71, 0) = ((MR_Box) (ll_backend__string_switch__Var_72));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_71, 1) = ((MR_Box) ((MR_String) "compare with the middle element"));
    }
    {
      ll_backend__string_switch__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
    }
    {
      ll_backend__string_switch__Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_87, 2) = ((MR_Box) (ll_backend__string_switch__Var_90));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_87, 3) = ((MR_Box) (ll_backend__string_switch__Var_31));
    }
    {
      ll_backend__string_switch__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_94, 0) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
    }
    {
      ll_backend__string_switch__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_86, 1) = ((MR_Box) (ll_backend__string_switch__Var_87));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_86, 2) = ((MR_Box) (ll_backend__string_switch__Var_94));
    }
    {
      ll_backend__string_switch__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_85, 0) = ((MR_Box) (ll_backend__string_switch__Var_86));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_85, 1) = ((MR_Box) ((MR_String) "branch away unless key is in lo half"));
    }
    ll_backend__string_switch__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
    {
      ll_backend__string_switch__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__string_switch_scalar_common_3[0])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 2) = ((MR_Box) (ll_backend__string_switch__Var_80));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 3) = ((MR_Box) (ll_backend__string_switch__Var_103));
    }
    {
      ll_backend__string_switch__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_98, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_98, 2) = ((MR_Box) (ll_backend__string_switch__Var_99));
    }
    {
      ll_backend__string_switch__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_97, 0) = ((MR_Box) (ll_backend__string_switch__Var_98));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_97, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__string_switch__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_110, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
    }
    {
      ll_backend__string_switch__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_109, 1) = ((MR_Box) (ll_backend__string_switch__Var_110));
    }
    {
      ll_backend__string_switch__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_108, 0) = ((MR_Box) (ll_backend__string_switch__Var_109));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_108, 1) = ((MR_Box) ((MR_String) "go back to search the remaining lo half"));
    }
    {
      ll_backend__string_switch__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 1) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
    }
    {
      ll_backend__string_switch__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_113, 0) = ((MR_Box) (ll_backend__string_switch__Var_114));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_113, 1) = ((MR_Box) ((MR_String) "nofulljump"));
    }
    {
      ll_backend__string_switch__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[31])));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_119, 2) = ((MR_Box) (ll_backend__string_switch__Var_90));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_119, 3) = ((MR_Box) (ll_backend__string_switch__Var_31));
    }
    {
      ll_backend__string_switch__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_126, 0) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
    }
    {
      ll_backend__string_switch__Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 1) = ((MR_Box) (ll_backend__string_switch__Var_119));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_118, 2) = ((MR_Box) (ll_backend__string_switch__Var_126));
    }
    {
      ll_backend__string_switch__Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_117, 0) = ((MR_Box) (ll_backend__string_switch__Var_118));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_117, 1) = ((MR_Box) ((MR_String) "branch away unless key is in hi half"));
    }
    {
      ll_backend__string_switch__Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_131, 1) = ((MR_Box) (ll_backend__string_switch__Var_62));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_131, 2) = ((MR_Box) (ll_backend__string_switch__Var_80));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_131, 3) = ((MR_Box) (ll_backend__string_switch__Var_103));
    }
    {
      ll_backend__string_switch__Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 2) = ((MR_Box) (ll_backend__string_switch__Var_131));
    }
    {
      ll_backend__string_switch__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_129, 0) = ((MR_Box) (ll_backend__string_switch__Var_130));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_129, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__string_switch__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 0) = ((MR_Box) (ll_backend__string_switch__Var_109));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 1) = ((MR_Box) ((MR_String) "go back to search the remaining hi half"));
    }
    {
      ll_backend__string_switch__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
    }
    {
      ll_backend__string_switch__Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_145, 0) = ((MR_Box) (ll_backend__string_switch__Var_146));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_145, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      ll_backend__string_switch__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_144, 0) = ((MR_Box) (ll_backend__string_switch__Var_145));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_139, 0) = ((MR_Box) (ll_backend__string_switch__Var_140));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_139, 1) = ((MR_Box) (ll_backend__string_switch__Var_144));
    }
    {
      ll_backend__string_switch__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_128, 0) = ((MR_Box) (ll_backend__string_switch__Var_129));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_128, 1) = ((MR_Box) (ll_backend__string_switch__Var_139));
    }
    {
      ll_backend__string_switch__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_116, 0) = ((MR_Box) (ll_backend__string_switch__Var_117));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_116, 1) = ((MR_Box) (ll_backend__string_switch__Var_128));
    }
    {
      ll_backend__string_switch__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_112, 0) = ((MR_Box) (ll_backend__string_switch__Var_113));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_112, 1) = ((MR_Box) (ll_backend__string_switch__Var_116));
    }
    {
      ll_backend__string_switch__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_107, 0) = ((MR_Box) (ll_backend__string_switch__Var_108));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_107, 1) = ((MR_Box) (ll_backend__string_switch__Var_112));
    }
    {
      ll_backend__string_switch__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_96, 0) = ((MR_Box) (ll_backend__string_switch__Var_97));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_96, 1) = ((MR_Box) (ll_backend__string_switch__Var_107));
    }
    {
      ll_backend__string_switch__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_84, 0) = ((MR_Box) (ll_backend__string_switch__Var_85));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_84, 1) = ((MR_Box) (ll_backend__string_switch__Var_96));
    }
    {
      ll_backend__string_switch__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_70, 0) = ((MR_Box) (ll_backend__string_switch__Var_71));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_70, 1) = ((MR_Box) (ll_backend__string_switch__Var_84));
    }
    {
      ll_backend__string_switch__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_55, 0) = ((MR_Box) (ll_backend__string_switch__Var_56));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_55, 1) = ((MR_Box) (ll_backend__string_switch__Var_70));
    }
    {
      ll_backend__string_switch__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_45, 0) = ((MR_Box) (ll_backend__string_switch__Var_46));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_45, 1) = ((MR_Box) (ll_backend__string_switch__Var_55));
    }
    {
      ll_backend__string_switch__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_41, 0) = ((MR_Box) (ll_backend__string_switch__Var_42));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_41, 1) = ((MR_Box) (ll_backend__string_switch__Var_45));
    }
    {
      ll_backend__string_switch__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_35, 0) = ((MR_Box) (ll_backend__string_switch__Var_36));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_35, 1) = ((MR_Box) (ll_backend__string_switch__Var_41));
    }
    {
      ll_backend__string_switch__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_28, 0) = ((MR_Box) (ll_backend__string_switch__Var_29));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_28, 1) = ((MR_Box) (ll_backend__string_switch__Var_35));
    }
    {
      ll_backend__string_switch__Var_27 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_154_154, ll_backend__string_switch__Var_28);
    }
    {
      ll_backend__string_switch__Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_152, 1) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
    }
    {
      ll_backend__string_switch__Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_151, 0) = ((MR_Box) (ll_backend__string_switch__Var_152));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_151, 1) = ((MR_Box) ((MR_String) "we found the key"));
    }
    {
      ll_backend__string_switch__Var_150 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_154_154, ((MR_Box) (ll_backend__string_switch__Var_151)));
    }
    {
      ll_backend__string_switch__Var_149 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_154_154, ll_backend__string_switch__FailCode_24, ll_backend__string_switch__Var_150);
    }
    {
      *ll_backend__string_switch__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_154_154, ll_backend__string_switch__Var_27, ll_backend__string_switch__Var_149);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
  MR_Word ll_backend__string_switch__CanFail_6,
  MR_Word * ll_backend__string_switch__Info_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_20,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_22)
{
  {
    MR_Word ll_backend__string_switch__LoReg_10;
    MR_Word ll_backend__string_switch__HiReg_11;
    MR_Word ll_backend__string_switch__MidReg_12;
    MR_Word ll_backend__string_switch__ResultReg_13;
    MR_Word ll_backend__string_switch__LoopStartLabel_14;
    MR_Word ll_backend__string_switch__GtEqLabel_15;
    MR_Word ll_backend__string_switch__EqLabel_16;
    MR_Word ll_backend__string_switch__FailLabel_17;
    MR_Word ll_backend__string_switch__BranchStart_18;
    MR_Word ll_backend__string_switch__FailCode_19;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_24_24;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_26_26;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_28_28;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_30_30;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_31_31;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_32_32;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_33_33;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_34_34;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_35_35;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_36_36;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_37_37;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_38_38;

    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__LoReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_0_22, &ll_backend__string_switch__STATE_VARIABLE_CLD_24_24);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__HiReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_24_24, &ll_backend__string_switch__STATE_VARIABLE_CLD_26_26);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__MidReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_26_26, &ll_backend__string_switch__STATE_VARIABLE_CLD_28_28);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__ResultReg_13, ll_backend__string_switch__STATE_VARIABLE_CLD_28_28, &ll_backend__string_switch__STATE_VARIABLE_CLD_30_30);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__LoReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_30_30, &ll_backend__string_switch__STATE_VARIABLE_CLD_31_31);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__HiReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_31_31, &ll_backend__string_switch__STATE_VARIABLE_CLD_32_32);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__MidReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_32_32, &ll_backend__string_switch__STATE_VARIABLE_CLD_33_33);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__ResultReg_13, ll_backend__string_switch__STATE_VARIABLE_CLD_33_33, &ll_backend__string_switch__STATE_VARIABLE_CLD_34_34);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_14, ll_backend__string_switch__STATE_VARIABLE_CI_0_20, &ll_backend__string_switch__STATE_VARIABLE_CI_35_35);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__GtEqLabel_15, ll_backend__string_switch__STATE_VARIABLE_CI_35_35, &ll_backend__string_switch__STATE_VARIABLE_CI_36_36);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__EqLabel_16, ll_backend__string_switch__STATE_VARIABLE_CI_36_36, &ll_backend__string_switch__STATE_VARIABLE_CI_37_37);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_17, ll_backend__string_switch__STATE_VARIABLE_CI_37_37, &ll_backend__string_switch__STATE_VARIABLE_CI_38_38);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CLD_34_34, &ll_backend__string_switch__BranchStart_18);
    }
    switch (ll_backend__string_switch__CanFail_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__string_switch__FailCode_19, ll_backend__string_switch__STATE_VARIABLE_CI_38_38, ll_backend__string_switch__STATE_VARIABLE_CI_21, ll_backend__string_switch__STATE_VARIABLE_CLD_34_34);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__string_switch__FailCode_19 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[17])));
          }
          *ll_backend__string_switch__STATE_VARIABLE_CI_21 = ll_backend__string_switch__STATE_VARIABLE_CI_38_38;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__string_switch__Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__MidReg_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__ResultReg_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__EqLabel_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailLabel_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__string_switch__BranchStart_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__string_switch__FailCode_19));
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
  MR_Word ll_backend__string_switch__HeadVar__1_1,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ll_backend__string_switch__STATE_VARIABLE_CurIndex_7 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6;
          *ll_backend__string_switch__STATE_VARIABLE_RevTargets_5 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4;
          *ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2;
        }
      else
        {
          MR_String ll_backend__string_switch__Str_17;
          MR_Word ll_backend__string_switch__Label_18;
          MR_Word ll_backend__string_switch__StrLabels_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__string_switch__Row_23;
          MR_Word ll_backend__string_switch__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__string_switch__Var_31;
          MR_Word ll_backend__string_switch__Var_32;
          MR_Word ll_backend__string_switch__Var_33;
          MR_Word ll_backend__string_switch__Var_34;
          MR_Word ll_backend__string_switch__Var_35;
          MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
          MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
          MR_Word ll_backend__string_switch__Var_39;
          MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

          ll_backend__string_switch__Str_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_30, (MR_Integer) 0)));
          ll_backend__string_switch__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_30, (MR_Integer) 1)));
          {
            ll_backend__string_switch__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 1) = ((MR_Box) (ll_backend__string_switch__Str_17));
          }
          {
            ll_backend__string_switch__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_31, 1) = ((MR_Box) (ll_backend__string_switch__Var_32));
          }
          {
            ll_backend__string_switch__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_35, 0) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6));
          }
          {
            ll_backend__string_switch__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_34, 1) = ((MR_Box) (ll_backend__string_switch__Var_35));
          }
          {
            ll_backend__string_switch__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_33, 0) = ((MR_Box) (ll_backend__string_switch__Var_34));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__string_switch__Row_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 0) = ((MR_Box) (ll_backend__string_switch__Var_31));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 1) = ((MR_Box) (ll_backend__string_switch__Var_33));
          }
          {
            ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 0) = ((MR_Box) (ll_backend__string_switch__Row_23));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2));
          }
          {
            ll_backend__string_switch__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_39, 0) = ((MR_Box) (ll_backend__string_switch__Label_18));
          }
          {
            ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 0) = ((MR_Box) (ll_backend__string_switch__Var_39));
            MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4));
          }
          ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40 = (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__string_switch__next_value_of_HeadVar__1_1 = ll_backend__string_switch__StrLabels_19;
            MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTableRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
            MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTargets_0_4 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
            MR_Integer ll_backend__string_switch__next_value_of_STATE_VARIABLE_CurIndex_0_6 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

            ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_CurIndex_0_6;
            ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTargets_0_4;
            ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTableRows_0_2;
            ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(
  MR_Word ll_backend__string_switch__VarRval_12,
  MR_Word ll_backend__string_switch__LookupSwitchInfo_13,
  MR_Word ll_backend__string_switch__CanFail_14,
  MR_Word ll_backend__string_switch__EndLabel_15,
  MR_Word ll_backend__string_switch__StoreMap_16,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32,
  MR_Word * ll_backend__string_switch__Code_18,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_33,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_34,
  MR_Word ll_backend__string_switch__CLD_20)
{
  {
    MR_Word ll_backend__string_switch__CaseConsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 0)));
    MR_Word ll_backend__string_switch__OutVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 1)));
    MR_Word ll_backend__string_switch__OutTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 2)));
    MR_Word ll_backend__string_switch__Liveness_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 3)));

    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_21)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__string_switch__CaseValueMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__CaseValues_26;

        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__CaseValueMap_25, &ll_backend__string_switch__CaseValues_26);
        }
        {
          ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseValues_26, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
        }
      }
    else
      {
        MR_Word ll_backend__string_switch__CaseSolnMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
        MR_Word ll_backend__string_switch__ResumeVars_28;
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_29;
        MR_Word ll_backend__string_switch__CaseSolns_30;
        MR_Word ll_backend__string_switch__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 1)));

        ll_backend__string_switch__ResumeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_35, (MR_Integer) 0)));
        ll_backend__string_switch__GoalsMayModifyTrail_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_35, (MR_Integer) 1)));
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolnMap_27, &ll_backend__string_switch__CaseSolns_30);
        }
        {
          ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseSolns_30, ll_backend__string_switch__ResumeVars_28, ll_backend__string_switch__GoalsMayModifyTrail_29, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
        }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__string_switch__wrapper_arg_2;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

    {
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
    return ll_backend__string_switch__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
  MR_Box ll_backend__string_switch__closure_arg)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

    {
      ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

    {
      ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__420__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
  MR_Word ll_backend__string_switch__VarRval_17,
  MR_Word ll_backend__string_switch__CaseSolns_18,
  MR_Word ll_backend__string_switch__ResumeVars_19,
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
  MR_Word ll_backend__string_switch__OutVars_21,
  MR_Word ll_backend__string_switch__OutTypes_22,
  MR_Word ll_backend__string_switch__Liveness_23,
  MR_Word ll_backend__string_switch__CanFail_24,
  MR_Word ll_backend__string_switch__EndLabel_25,
  MR_Word ll_backend__string_switch__StoreMap_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71,
  MR_Word * ll_backend__string_switch__Code_28,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_72,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_73,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_74)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Word ll_backend__string_switch__TypeCtorInfo_161_161;
    MR_Word ll_backend__string_switch__TypeInfo_170_170;
    MR_Word ll_backend__string_switch__TypeInfo_171_171;
    MR_Word ll_backend__string_switch__HashSwitchInfo_31;
    MR_Word ll_backend__string_switch__CommentCode_32;
    MR_Integer ll_backend__string_switch__TableSize_33;
    MR_Word ll_backend__string_switch__HashSlotsMap_34;
    MR_Word ll_backend__string_switch__HashOp_35;
    MR_Integer ll_backend__string_switch__NumCollisions_36;
    MR_Integer ll_backend__string_switch__HashMask_37;
    MR_Integer ll_backend__string_switch__NumOutVars_38;
    MR_Word ll_backend__string_switch__OutElemTypes_39;
    MR_Integer ll_backend__string_switch__NumColumns_40;
    MR_Integer ll_backend__string_switch__NumPrevColumns_41;
    MR_Word ll_backend__string_switch__ArrayElemTypes_42;
    MR_Word ll_backend__string_switch__MainRowTypes_43;
    MR_Word ll_backend__string_switch__ArrayElemType_44;
    MR_Word ll_backend__string_switch__AddTrailOps_46;
    MR_Word ll_backend__string_switch__DummyOutRvals_48;
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_49;
    MR_Word ll_backend__string_switch__RevMainRows_50;
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_51;
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_52;
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_53;
    MR_Word ll_backend__string_switch__MainRows_54;
    MR_Word ll_backend__string_switch__LaterSolnArray_55;
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_56;
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_57;
    MR_Word ll_backend__string_switch__DescendingSortedKinds_58;
    MR_Word ll_backend__string_switch__MainVectorAddr_59;
    MR_Word ll_backend__string_switch__MainVectorAddrRval_60;
    MR_Word ll_backend__string_switch__LaterVectorAddr_61;
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_62;
    MR_Word ll_backend__string_switch__BaseReg_63;
    MR_Word ll_backend__string_switch__RowStartReg_64;
    MR_Word ll_backend__string_switch__SetBaseRegCode_65;
    MR_Word ll_backend__string_switch__LookupResultsCode_66;
    MR_Word ll_backend__string_switch__MatchCode_67;
    MR_Word ll_backend__string_switch__HashSearchCode_68;
    MR_Word ll_backend__string_switch__EndLabelCode_69;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_75_75;
    MR_Word ll_backend__string_switch__Var_114;
    MR_Word ll_backend__string_switch__Var_118;
    MR_Word ll_backend__string_switch__Var_125;
    MR_Word ll_backend__string_switch__Var_126;
    MR_Word ll_backend__string_switch__Var_128;
    MR_Word ll_backend__string_switch__Var_129;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_132_132;
    MR_Word ll_backend__string_switch__Var_133;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_135_135;
    MR_Word ll_backend__string_switch__Var_136;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_139_139;
    MR_Word ll_backend__string_switch__Var_140;
    MR_Word ll_backend__string_switch__Var_141;
    MR_Word ll_backend__string_switch__Var_142;
    MR_Word ll_backend__string_switch__Var_143;
    MR_Word ll_backend__string_switch__Var_146;
    MR_Word ll_backend__string_switch__Var_150;
    MR_Word ll_backend__string_switch__Var_151;
    MR_Word ll_backend__string_switch__Var_153;
    MR_Word ll_backend__string_switch__Var_154;
    MR_Word ll_backend__string_switch__Var_155;
    MR_Word ll_backend__string_switch__Var_156;
    MR_Word ll_backend__string_switch__Var_157;
    MR_Word ll_backend__string_switch__Var_158;
    MR_Word ll_backend__string_switch__Var_159;
    MR_Word ll_backend__string_switch__Var_160;

    {
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_24, &ll_backend__string_switch__HashSwitchInfo_31, ll_backend__string_switch__STATE_VARIABLE_CI_0_72, &ll_backend__string_switch__STATE_VARIABLE_CI_75_75, ll_backend__string_switch__STATE_VARIABLE_CLD_0_74);
    }
    ll_backend__string_switch__TypeCtorInfo_161_161 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_32 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[27])));
    }
    {
      backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolns_18, (MR_Integer) 1, &ll_backend__string_switch__TableSize_33, &ll_backend__string_switch__HashSlotsMap_34, &ll_backend__string_switch__HashOp_35, &ll_backend__string_switch__NumCollisions_36);
    }
    ll_backend__string_switch__HashMask_37 = (ll_backend__string_switch__TableSize_33 - (MR_Integer) 1);
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_21, &ll_backend__string_switch__NumOutVars_38);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_38, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_39);
    }
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_36 == (MR_Integer) 0);
    if (ll_backend__string_switch__succeeded)
      {
        MR_Word ll_backend__string_switch__Var_85;
        MR_Word ll_backend__string_switch__Var_87;
        MR_Word ll_backend__string_switch__Var_90;
        MR_Word ll_backend__string_switch__Var_91;
        MR_Word ll_backend__string_switch__Var_93;

        ll_backend__string_switch__NumColumns_40 = ((MR_Integer) 3 + ll_backend__string_switch__NumOutVars_38);
        ll_backend__string_switch__NumPrevColumns_41 = (MR_Integer) 1;
        {
          ll_backend__string_switch__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_87, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_87, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_39));
        }
        {
          ll_backend__string_switch__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_85, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_85, 1) = ((MR_Box) (ll_backend__string_switch__Var_87));
        }
        {
          ll_backend__string_switch__ArrayElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 1) = ((MR_Box) (ll_backend__string_switch__Var_85));
        }
        ll_backend__string_switch__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]);
        {
          ll_backend__string_switch__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_93, 0) = ((MR_Box) (ll_backend__string_switch__Var_91));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_93, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
        }
        {
          ll_backend__string_switch__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (ll_backend__string_switch__Var_91));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_90, 1) = ((MR_Box) (ll_backend__string_switch__Var_93));
        }
        {
          ll_backend__string_switch__MainRowTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 1) = ((MR_Box) (ll_backend__string_switch__Var_90));
        }
      }
    else
      {
        MR_Word ll_backend__string_switch__Var_98;
        MR_Word ll_backend__string_switch__Var_100;
        MR_Word ll_backend__string_switch__Var_102;
        MR_Word ll_backend__string_switch__Var_105;
        MR_Word ll_backend__string_switch__Var_106;
        MR_Word ll_backend__string_switch__Var_108;
        MR_Word ll_backend__string_switch__Var_111;

        ll_backend__string_switch__NumColumns_40 = ((MR_Integer) 4 + ll_backend__string_switch__NumOutVars_38);
        ll_backend__string_switch__NumPrevColumns_41 = (MR_Integer) 2;
        {
          ll_backend__string_switch__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_102, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_102, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_39));
        }
        {
          ll_backend__string_switch__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_100, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_100, 1) = ((MR_Box) (ll_backend__string_switch__Var_102));
        }
        {
          ll_backend__string_switch__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_98, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_98, 1) = ((MR_Box) (ll_backend__string_switch__Var_100));
        }
        {
          ll_backend__string_switch__ArrayElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 1) = ((MR_Box) (ll_backend__string_switch__Var_98));
        }
        ll_backend__string_switch__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]);
        {
          ll_backend__string_switch__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_111, 0) = ((MR_Box) (ll_backend__string_switch__Var_106));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_111, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
        }
        {
          ll_backend__string_switch__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_108, 0) = ((MR_Box) (ll_backend__string_switch__Var_106));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_108, 1) = ((MR_Box) (ll_backend__string_switch__Var_111));
        }
        {
          ll_backend__string_switch__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_105, 0) = ((MR_Box) (ll_backend__string_switch__Var_106));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_105, 1) = ((MR_Box) (ll_backend__string_switch__Var_108));
        }
        {
          ll_backend__string_switch__MainRowTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 1) = ((MR_Box) (ll_backend__string_switch__Var_105));
        }
      }
    {
      ll_backend__string_switch__ArrayElemType_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_44, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_42));
    }
    {
      ll_backend__string_switch__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_118, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_118, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_118, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_21));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_118, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_114, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_114, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_114, 3) = ((MR_Box) (ll_backend__string_switch__Var_118));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__string_switch__Var_114, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
    }
    switch (ll_backend__string_switch__GoalsMayModifyTrail_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__string_switch__AddTrailOps_46 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_75_75, &ll_backend__string_switch__AddTrailOps_46);
        }
        break;
    }
    {
      ll_backend__string_switch__DummyOutRvals_48 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[7], ll_backend__string_switch__OutTypes_22);
    }
    ll_backend__string_switch__TypeInfo_170_170 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
    {
      ll_backend__string_switch__LaterSolnArrayCord0_49 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_170_170, ((MR_Box) (ll_backend__string_switch__DummyOutRvals_48)));
    }
    {
      ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_33, ll_backend__string_switch__HashSlotsMap_34, ll_backend__string_switch__DummyOutRvals_48, ll_backend__string_switch__NumOutVars_38, ll_backend__string_switch__NumCollisions_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_50, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_49, &ll_backend__string_switch__LaterSolnArrayCord_51, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_52, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_53);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_170_170, ll_backend__string_switch__RevMainRows_50, &ll_backend__string_switch__MainRows_54);
    }
    {
      ll_backend__string_switch__LaterSolnArray_55 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_170_170, ll_backend__string_switch__LaterSolnArrayCord_51);
    }
    {
      ll_backend__string_switch__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_126, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_52));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_126, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__string_switch__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_129, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_53));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_129, 1) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      ll_backend__string_switch__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_128, 0) = ((MR_Box) (ll_backend__string_switch__Var_129));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_125, 0) = ((MR_Box) (ll_backend__string_switch__Var_126));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_125, 1) = ((MR_Box) (ll_backend__string_switch__Var_128));
    }
    ll_backend__string_switch__TypeInfo_171_171 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
    {
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_171_171, ll_backend__string_switch__Var_125, &ll_backend__string_switch__AscendingSortedCountKinds_56);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_171_171, ll_backend__string_switch__AscendingSortedCountKinds_56, &ll_backend__string_switch__DescendingSortedCountKinds_57);
    }
    {
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_57, &ll_backend__string_switch__DescendingSortedKinds_58);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_43, ll_backend__string_switch__MainRows_54, &ll_backend__string_switch__MainVectorAddr_59, ll_backend__string_switch__STATE_VARIABLE_CI_75_75, &ll_backend__string_switch__STATE_VARIABLE_CI_132_132);
    }
    {
      ll_backend__string_switch__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_133, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_59));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_133, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__MainVectorAddrRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_60, 1) = ((MR_Box) (ll_backend__string_switch__Var_133));
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_22, ll_backend__string_switch__LaterSolnArray_55, &ll_backend__string_switch__LaterVectorAddr_61, ll_backend__string_switch__STATE_VARIABLE_CI_132_132, &ll_backend__string_switch__STATE_VARIABLE_CI_135_135);
    }
    {
      ll_backend__string_switch__Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_136, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_61));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_136, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__LaterVectorAddrRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_62, 1) = ((MR_Box) (ll_backend__string_switch__Var_136));
    }
    {
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_26, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_63, ll_backend__string_switch__STATE_VARIABLE_CLD_0_74, &ll_backend__string_switch__STATE_VARIABLE_CLD_139_139);
    }
    ll_backend__string_switch__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 0)));
    ll_backend__string_switch__RowStartReg_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 1)));
    ll_backend__string_switch__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 2)));
    ll_backend__string_switch__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 3)));
    ll_backend__string_switch__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 4)));
    ll_backend__string_switch__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 5)));
    ll_backend__string_switch__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 6)));
    ll_backend__string_switch__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 7)));
    {
      ll_backend__string_switch__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_146, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_64));
    }
    {
      ll_backend__string_switch__Var_143 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_143, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_60));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_143, 2) = ((MR_Box) (ll_backend__string_switch__Var_146));
    }
    {
      ll_backend__string_switch__Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_142, 1) = ((MR_Box) (ll_backend__string_switch__Var_143));
    }
    {
      ll_backend__string_switch__Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_141, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_63));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_141, 2) = ((MR_Box) (ll_backend__string_switch__Var_142));
    }
    {
      ll_backend__string_switch__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 0) = ((MR_Box) (ll_backend__string_switch__Var_141));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    {
      ll_backend__string_switch__SetBaseRegCode_65 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ((MR_Box) (ll_backend__string_switch__Var_140)));
    }
    {
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__string_switch__DescendingSortedKinds_58, ll_backend__string_switch__NumPrevColumns_41, ll_backend__string_switch__OutVars_21, ll_backend__string_switch__ResumeVars_19, ll_backend__string_switch__EndLabel_25, ll_backend__string_switch__StoreMap_26, ll_backend__string_switch__Liveness_23, ll_backend__string_switch__AddTrailOps_46, ll_backend__string_switch__BaseReg_63, ll_backend__string_switch__LaterVectorAddrRval_62, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71, &ll_backend__string_switch__LookupResultsCode_66, ll_backend__string_switch__STATE_VARIABLE_CI_135_135, ll_backend__string_switch__STATE_VARIABLE_CI_73, ll_backend__string_switch__STATE_VARIABLE_CLD_139_139);
    }
    {
      ll_backend__string_switch__MatchCode_67 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ll_backend__string_switch__SetBaseRegCode_65, ll_backend__string_switch__LookupResultsCode_66);
    }
    {
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_31, ll_backend__string_switch__VarRval_17, ll_backend__string_switch__MainVectorAddrRval_60, ll_backend__string_switch__ArrayElemType_44, ll_backend__string_switch__NumColumns_40, ll_backend__string_switch__HashOp_35, ll_backend__string_switch__HashMask_37, ll_backend__string_switch__NumCollisions_36, ll_backend__string_switch__MatchCode_67, &ll_backend__string_switch__HashSearchCode_68);
    }
    {
      ll_backend__string_switch__Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_151, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_25));
    }
    {
      ll_backend__string_switch__Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_150, 0) = ((MR_Box) (ll_backend__string_switch__Var_151));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_150, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ((MR_Box) (ll_backend__string_switch__Var_150)));
    }
    {
      ll_backend__string_switch__Var_153 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ll_backend__string_switch__HashSearchCode_68, ll_backend__string_switch__EndLabelCode_69);
    }
    {
      *ll_backend__string_switch__Code_28 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_161_161, ll_backend__string_switch__CommentCode_32, ll_backend__string_switch__Var_153);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer ll_backend__string_switch__Slot_16,
  MR_Integer ll_backend__string_switch__TableSize_17,
  MR_Word ll_backend__string_switch__HashSlotMap_18,
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
  MR_Integer ll_backend__string_switch__NumOutVars_20,
  MR_Integer ll_backend__string_switch__NumCollisions_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_16 == ll_backend__string_switch__TableSize_17);

        if (ll_backend__string_switch__succeeded)
          {
            *ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
            *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
            *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
            *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44;
          }
        else
          {
            MR_Word ll_backend__string_switch__MainRow_36;
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;
            MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
            MR_Integer ll_backend__string_switch__Var_82;
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
            MR_Word ll_backend__string_switch__SlotInfo_27;
            MR_Box ll_backend__string_switch__conv0_SlotInfo_27;

            {
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[10], ll_backend__string_switch__HashSlotMap_18, ll_backend__string_switch__Slot_16, &ll_backend__string_switch__conv0_SlotInfo_27);
            }
            if (ll_backend__string_switch__succeeded)
              {
                ll_backend__string_switch__SlotInfo_27 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_27);
                ll_backend__string_switch__succeeded = MR_TRUE;
              }
            if (ll_backend__string_switch__succeeded)
              {
                MR_String ll_backend__string_switch__String_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 0)));
                MR_Integer ll_backend__string_switch__Next_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 1)));
                MR_Word ll_backend__string_switch__Soln_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 2)));
                MR_Word ll_backend__string_switch__StringRval_31;
                MR_Word ll_backend__string_switch__NextSlotRval_32;
                MR_Word ll_backend__string_switch__Var_53;
                MR_Word ll_backend__string_switch__Var_54;

                {
                  ll_backend__string_switch__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_53, 1) = ((MR_Box) (ll_backend__string_switch__String_28));
                }
                {
                  ll_backend__string_switch__StringRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 1) = ((MR_Box) (ll_backend__string_switch__Var_53));
                }
                {
                  ll_backend__string_switch__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_54, 0) = ((MR_Box) (ll_backend__string_switch__Next_29));
                }
                {
                  ll_backend__string_switch__NextSlotRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 1) = ((MR_Box) (ll_backend__string_switch__Var_54));
                }
                if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_30)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word ll_backend__string_switch__OutVarRvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
                    MR_Word ll_backend__string_switch__ZeroRval_34;
                    MR_Word ll_backend__string_switch__MainRowTail_35;
                    MR_Word ll_backend__string_switch__Var_71;

                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 + (MR_Integer) 1);
                    ll_backend__string_switch__ZeroRval_34 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
                    {
                      ll_backend__string_switch__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_71, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_71, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_33));
                    }
                    {
                      ll_backend__string_switch__MainRowTail_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 1) = ((MR_Box) (ll_backend__string_switch__Var_71));
                    }
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
                    if (ll_backend__string_switch__succeeded)
                      {
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
                      }
                    else
                      {
                        MR_Word ll_backend__string_switch__Var_72;

                        {
                          ll_backend__string_switch__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_72, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_72, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
                        }
                        {
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__Var_72));
                        }
                      }
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
                    ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
                  }
                else
                  {
                    MR_Word ll_backend__string_switch__TypeInfo_96_96;
                    MR_Word ll_backend__string_switch__FirstSolnRvals_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
                    MR_Word ll_backend__string_switch__LaterSolns_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 1)));
                    MR_Integer ll_backend__string_switch__NumLaterSolns_39;
                    MR_Integer ll_backend__string_switch__FirstRowOffset_40;
                    MR_Integer ll_backend__string_switch__LastRowOffset_41;
                    MR_Word ll_backend__string_switch__FirstRowRval_42;
                    MR_Word ll_backend__string_switch__LastRowRval_43;
                    MR_Integer ll_backend__string_switch__Var_57;
                    MR_Integer ll_backend__string_switch__Var_58;
                    MR_Word ll_backend__string_switch__Var_60;
                    MR_Word ll_backend__string_switch__Var_61;
                    MR_Word ll_backend__string_switch__Var_62;
                    MR_Word ll_backend__string_switch__Var_66;
                    MR_Word ll_backend__string_switch__MainRowTail_88;

                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = (ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 + (MR_Integer) 1);
                    ll_backend__string_switch__TypeInfo_96_96 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
                    {
                      mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38, &ll_backend__string_switch__NumLaterSolns_39);
                    }
                    ll_backend__string_switch__FirstRowOffset_40 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 * ll_backend__string_switch__NumOutVars_20);
                    ll_backend__string_switch__Var_58 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
                    ll_backend__string_switch__Var_57 = (ll_backend__string_switch__Var_58 - (MR_Integer) 1);
                    ll_backend__string_switch__LastRowOffset_41 = (ll_backend__string_switch__Var_57 * ll_backend__string_switch__NumOutVars_20);
                    {
                      ll_backend__string_switch__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_60, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_40));
                    }
                    {
                      ll_backend__string_switch__FirstRowRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 1) = ((MR_Box) (ll_backend__string_switch__Var_60));
                    }
                    {
                      ll_backend__string_switch__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_61, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_41));
                    }
                    {
                      ll_backend__string_switch__LastRowRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 1) = ((MR_Box) (ll_backend__string_switch__Var_61));
                    }
                    {
                      ll_backend__string_switch__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_62, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_43));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_62, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_37));
                    }
                    {
                      ll_backend__string_switch__MainRowTail_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_42));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 1) = ((MR_Box) (ll_backend__string_switch__Var_62));
                    }
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
                    if (ll_backend__string_switch__succeeded)
                      {
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
                      }
                    else
                      {
                        MR_Word ll_backend__string_switch__Var_63;

                        {
                          ll_backend__string_switch__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_63, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_63, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
                        }
                        {
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__Var_63));
                        }
                      }
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
                    {
                      ll_backend__string_switch__Var_66 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38);
                    }
                    {
                      ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47, ll_backend__string_switch__Var_66);
                    }
                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
                  }
              }
            else
              {
                MR_Word ll_backend__string_switch__Var_79;
                MR_Word ll_backend__string_switch__ZeroRval_91 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
                MR_Word ll_backend__string_switch__MainRowTail_92;

                {
                  ll_backend__string_switch__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_79, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_79, 1) = ((MR_Box) (ll_backend__string_switch__DummyOutRvals_19));
                }
                {
                  ll_backend__string_switch__MainRowTail_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 1) = ((MR_Box) (ll_backend__string_switch__Var_79));
                }
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
                if (ll_backend__string_switch__succeeded)
                  {
                    ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
                  }
                else
                  {
                    MR_Word ll_backend__string_switch__Var_80;

                    {
                      ll_backend__string_switch__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_80, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
                    }
                    {
                      ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__Var_80));
                    }
                  }
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
              }
            {
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_36));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44));
            }
            ll_backend__string_switch__Var_82 = (ll_backend__string_switch__Slot_16 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__string_switch__next_value_of_Slot_16 = ll_backend__string_switch__Var_82;
              MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMainRows_0_44 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
              MR_Integer ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterNextRow_0_46 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
              MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterSolnArray_0_47 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
              MR_Integer ll_backend__string_switch__next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
              MR_Integer ll_backend__string_switch__next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;

              ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49;
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterSolnArray_0_47;
              ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMainRows_0_44;
              ll_backend__string_switch__Slot_16 = ll_backend__string_switch__next_value_of_Slot_16;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__string_switch__wrapper_arg_2;
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

    {
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
    return ll_backend__string_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
  MR_Word ll_backend__string_switch__VarRval_15,
  MR_Word ll_backend__string_switch__CaseValues_16,
  MR_Word ll_backend__string_switch__OutVars_17,
  MR_Word ll_backend__string_switch__OutTypes_18,
  MR_Word ll_backend__string_switch__Liveness_19,
  MR_Word ll_backend__string_switch__CanFail_20,
  MR_Word ll_backend__string_switch__EndLabel_21,
  MR_Word ll_backend__string_switch__StoreMap_22,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
  MR_Word * ll_backend__string_switch__Code_24,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_60)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Word ll_backend__string_switch__TypeCtorInfo_114_114;
    MR_Word ll_backend__string_switch__TypeInfo_115_115;
    MR_Word ll_backend__string_switch__HashSwitchInfo_27;
    MR_Word ll_backend__string_switch__CommentCode_28;
    MR_Integer ll_backend__string_switch__TableSize_29;
    MR_Word ll_backend__string_switch__HashSlotsMap_30;
    MR_Word ll_backend__string_switch__HashOp_31;
    MR_Integer ll_backend__string_switch__NumCollisions_32;
    MR_Integer ll_backend__string_switch__HashMask_33;
    MR_Integer ll_backend__string_switch__NumOutVars_34;
    MR_Word ll_backend__string_switch__OutElemTypes_35;
    MR_Word ll_backend__string_switch__DummyOutRvals_36;
    MR_Integer ll_backend__string_switch__NumPrevColumns_37;
    MR_Integer ll_backend__string_switch__NumColumns_38;
    MR_Word ll_backend__string_switch__ArrayElemTypes_39;
    MR_Word ll_backend__string_switch__RowElemTypes_40;
    MR_Word ll_backend__string_switch__ArrayElemType_41;
    MR_Word ll_backend__string_switch__RevVectorRvals_42;
    MR_Word ll_backend__string_switch__VectorRvals_43;
    MR_Word ll_backend__string_switch__VectorAddr_44;
    MR_Word ll_backend__string_switch__VectorAddrRval_45;
    MR_Word ll_backend__string_switch__SetBaseRegCode_46;
    MR_Word ll_backend__string_switch__BranchEndCode_51;
    MR_Word ll_backend__string_switch__GotoEndLabelCode_52;
    MR_Word ll_backend__string_switch__MatchCode_53;
    MR_Word ll_backend__string_switch__HashSearchCode_54;
    MR_Word ll_backend__string_switch__EndLabelCode_55;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_61_61;
    MR_Word ll_backend__string_switch__Var_84;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_96_96;
    MR_Word ll_backend__string_switch__Var_98;
    MR_Word ll_backend__string_switch__Var_99;
    MR_Word ll_backend__string_switch__Var_100;
    MR_Word ll_backend__string_switch__Var_102;
    MR_Word ll_backend__string_switch__Var_103;
    MR_Word ll_backend__string_switch__Var_104;
    MR_Word ll_backend__string_switch__Var_106;

    {
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_20, &ll_backend__string_switch__HashSwitchInfo_27, ll_backend__string_switch__STATE_VARIABLE_CI_0_58, &ll_backend__string_switch__STATE_VARIABLE_CI_61_61, ll_backend__string_switch__STATE_VARIABLE_CLD_0_60);
    }
    ll_backend__string_switch__TypeCtorInfo_114_114 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_28 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[26])));
    }
    ll_backend__string_switch__TypeInfo_115_115 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
    {
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeInfo_115_115, ll_backend__string_switch__CaseValues_16, (MR_Integer) 1, &ll_backend__string_switch__TableSize_29, &ll_backend__string_switch__HashSlotsMap_30, &ll_backend__string_switch__HashOp_31, &ll_backend__string_switch__NumCollisions_32);
    }
    ll_backend__string_switch__HashMask_33 = (ll_backend__string_switch__TableSize_29 - (MR_Integer) 1);
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_17, &ll_backend__string_switch__NumOutVars_34);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_35);
    }
    {
      ll_backend__string_switch__DummyOutRvals_36 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[6], ll_backend__string_switch__OutTypes_18);
    }
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_32 == (MR_Integer) 0);
    if (ll_backend__string_switch__succeeded)
      {
        ll_backend__string_switch__NumPrevColumns_37 = (MR_Integer) 1;
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_34);
        {
          ll_backend__string_switch__ArrayElemTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
        }
        {
          ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
        }
      }
    else
      {
        MR_Word ll_backend__string_switch__Var_75;
        MR_Word ll_backend__string_switch__Var_78;

        ll_backend__string_switch__NumPrevColumns_37 = (MR_Integer) 2;
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 2 + ll_backend__string_switch__NumOutVars_34);
        {
          ll_backend__string_switch__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_75, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_75, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
        }
        {
          ll_backend__string_switch__ArrayElemTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 1) = ((MR_Box) (ll_backend__string_switch__Var_75));
        }
        {
          ll_backend__string_switch__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0])));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_78, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
        }
        {
          ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__Var_78));
        }
      }
    {
      ll_backend__string_switch__ArrayElemType_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_41, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_39));
    }
    {
      ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_29, ll_backend__string_switch__HashSlotsMap_30, ll_backend__string_switch__NumCollisions_32, ll_backend__string_switch__DummyOutRvals_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_42);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_115_115, ll_backend__string_switch__RevVectorRvals_42, &ll_backend__string_switch__VectorRvals_43);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_40, ll_backend__string_switch__VectorRvals_43, &ll_backend__string_switch__VectorAddr_44, ll_backend__string_switch__STATE_VARIABLE_CI_61_61, ll_backend__string_switch__STATE_VARIABLE_CI_59);
    }
    {
      ll_backend__string_switch__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_44));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__VectorAddrRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_45, 1) = ((MR_Box) (ll_backend__string_switch__Var_84));
    }
    if ((ll_backend__string_switch__OutVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__string_switch__SetBaseRegCode_46 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_114_114);
        }
        ll_backend__string_switch__STATE_VARIABLE_CLD_96_96 = ll_backend__string_switch__STATE_VARIABLE_CLD_0_60;
      }
    else
      {
        MR_Word ll_backend__string_switch__BaseReg_49;
        MR_Word ll_backend__string_switch__RowStartReg_50;
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_87_87;
        MR_Word ll_backend__string_switch__Var_88;
        MR_Word ll_backend__string_switch__Var_89;
        MR_Word ll_backend__string_switch__Var_90;
        MR_Word ll_backend__string_switch__Var_91;
        MR_Word ll_backend__string_switch__Var_94;
        MR_Word ll_backend__string_switch__Var_107;
        MR_Word ll_backend__string_switch__Var_108;
        MR_Word ll_backend__string_switch__Var_109;
        MR_Word ll_backend__string_switch__Var_110;
        MR_Word ll_backend__string_switch__Var_111;
        MR_Word ll_backend__string_switch__Var_112;
        MR_Word ll_backend__string_switch__Var_113;

        {
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_22, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_49, ll_backend__string_switch__STATE_VARIABLE_CLD_0_60, &ll_backend__string_switch__STATE_VARIABLE_CLD_87_87);
        }
        ll_backend__string_switch__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 0)));
        ll_backend__string_switch__RowStartReg_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 1)));
        ll_backend__string_switch__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 2)));
        ll_backend__string_switch__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 3)));
        ll_backend__string_switch__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 4)));
        ll_backend__string_switch__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 5)));
        ll_backend__string_switch__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 6)));
        ll_backend__string_switch__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 7)));
        {
          ll_backend__string_switch__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_94, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_50));
        }
        {
          ll_backend__string_switch__Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_91, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_45));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1])));
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__Var_91, 2) = ((MR_Box) (ll_backend__string_switch__Var_94));
        }
        {
          ll_backend__string_switch__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 1) = ((MR_Box) (ll_backend__string_switch__Var_91));
        }
        {
          ll_backend__string_switch__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_49));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 2) = ((MR_Box) (ll_backend__string_switch__Var_90));
        }
        {
          ll_backend__string_switch__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_88, 0) = ((MR_Box) (ll_backend__string_switch__Var_89));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_88, 1) = ((MR_Box) ((MR_String) "set up base reg"));
        }
        {
          ll_backend__string_switch__SetBaseRegCode_46 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__Var_88)));
        }
        {
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__string_switch__OutVars_17, ll_backend__string_switch__NumPrevColumns_37, ll_backend__string_switch__BaseReg_49, *ll_backend__string_switch__STATE_VARIABLE_CI_59, ll_backend__string_switch__STATE_VARIABLE_CLD_87_87, &ll_backend__string_switch__STATE_VARIABLE_CLD_96_96);
        }
      }
    {
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_22, ll_backend__string_switch__Liveness_19, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57, &ll_backend__string_switch__BranchEndCode_51, *ll_backend__string_switch__STATE_VARIABLE_CI_59, ll_backend__string_switch__STATE_VARIABLE_CLD_96_96);
    }
    {
      ll_backend__string_switch__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_100, 0) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
    }
    {
      ll_backend__string_switch__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 1) = ((MR_Box) (ll_backend__string_switch__Var_100));
    }
    {
      ll_backend__string_switch__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_98, 0) = ((MR_Box) (ll_backend__string_switch__Var_99));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_98, 1) = ((MR_Box) ((MR_String) "go to end of simple hash string lookup switch"));
    }
    {
      ll_backend__string_switch__GotoEndLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__Var_98)));
    }
    {
      ll_backend__string_switch__Var_102 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__BranchEndCode_51, ll_backend__string_switch__GotoEndLabelCode_52);
    }
    {
      ll_backend__string_switch__MatchCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__SetBaseRegCode_46, ll_backend__string_switch__Var_102);
    }
    {
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_27, ll_backend__string_switch__VarRval_15, ll_backend__string_switch__VectorAddrRval_45, ll_backend__string_switch__ArrayElemType_41, ll_backend__string_switch__NumColumns_38, ll_backend__string_switch__HashOp_31, ll_backend__string_switch__HashMask_33, ll_backend__string_switch__NumCollisions_32, ll_backend__string_switch__MatchCode_53, &ll_backend__string_switch__HashSearchCode_54);
    }
    {
      ll_backend__string_switch__Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
    }
    {
      ll_backend__string_switch__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_103, 0) = ((MR_Box) (ll_backend__string_switch__Var_104));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_103, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_55 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__Var_103)));
    }
    {
      ll_backend__string_switch__Var_106 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__HashSearchCode_54, ll_backend__string_switch__EndLabelCode_55);
    }
    {
      *ll_backend__string_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__CommentCode_28, ll_backend__string_switch__Var_106);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer ll_backend__string_switch__Slot_8,
  MR_Integer ll_backend__string_switch__TableSize_9,
  MR_Word ll_backend__string_switch__HashSlotMap_10,
  MR_Integer ll_backend__string_switch__NumCollisions_11,
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_8 == ll_backend__string_switch__TableSize_9);

        if (ll_backend__string_switch__succeeded)
          *ll_backend__string_switch__STATE_VARIABLE_RevRows_22 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21;
        else
          {
            MR_Word ll_backend__string_switch__OutVarRvals_17;
            MR_Word ll_backend__string_switch__NextSlotRval_18;
            MR_Word ll_backend__string_switch__StringRval_19;
            MR_Word ll_backend__string_switch__Row_20;
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;
            MR_Integer ll_backend__string_switch__Var_31;
            MR_Word ll_backend__string_switch__SlotInfo_14;
            MR_Box ll_backend__string_switch__conv0_SlotInfo_14;

            {
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[8], ll_backend__string_switch__HashSlotMap_10, ll_backend__string_switch__Slot_8, &ll_backend__string_switch__conv0_SlotInfo_14);
            }
            if (ll_backend__string_switch__succeeded)
              {
                ll_backend__string_switch__SlotInfo_14 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_14);
                ll_backend__string_switch__succeeded = MR_TRUE;
              }
            if (ll_backend__string_switch__succeeded)
              {
                MR_String ll_backend__string_switch__String_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 0)));
                MR_Integer ll_backend__string_switch__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 1)));
                MR_Word ll_backend__string_switch__Var_23;
                MR_Word ll_backend__string_switch__Var_24;

                ll_backend__string_switch__OutVarRvals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 2)));
                {
                  ll_backend__string_switch__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_23, 0) = ((MR_Box) (ll_backend__string_switch__Next_16));
                }
                {
                  ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 1) = ((MR_Box) (ll_backend__string_switch__Var_23));
                }
                {
                  ll_backend__string_switch__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_24, 1) = ((MR_Box) (ll_backend__string_switch__String_15));
                }
                {
                  ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 1) = ((MR_Box) (ll_backend__string_switch__Var_24));
                }
              }
            else
              {
                ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
                ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[16]);
                ll_backend__string_switch__OutVarRvals_17 = ll_backend__string_switch__DummyOutRvals_12;
              }
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_11 == (MR_Integer) 0);
            if (ll_backend__string_switch__succeeded)
              {
                ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
              }
            else
              {
                MR_Word ll_backend__string_switch__Var_29;

                {
                  ll_backend__string_switch__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_29, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_18));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_29, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
                }
                {
                  ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__Var_29));
                }
              }
            {
              ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 0) = ((MR_Box) (ll_backend__string_switch__Row_20));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21));
            }
            ll_backend__string_switch__Var_31 = (ll_backend__string_switch__Slot_8 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__string_switch__next_value_of_Slot_8 = ll_backend__string_switch__Var_31;
              MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevRows_0_21 = ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;

              ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevRows_0_21;
              ll_backend__string_switch__Slot_8 = ll_backend__string_switch__next_value_of_Slot_8;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3,
  MR_Box * ll_backend__string_switch__wrapper_arg_4)
{
  {
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv0_HeadVar__4_4;

    {
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv0_HeadVar__4_4);
    }
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0(
  MR_Word ll_backend__string_switch__Cases_13,
  MR_Word ll_backend__string_switch__VarRval_14,
  MR_String ll_backend__string_switch__VarName_15,
  MR_Word ll_backend__string_switch__CodeModel_16,
  MR_Word ll_backend__string_switch__CanFail_17,
  MR_Word ll_backend__string_switch__SwitchGoalInfo_18,
  MR_Word ll_backend__string_switch__EndLabel_19,
  MR_Word * ll_backend__string_switch__MaybeEnd_20,
  MR_Word * ll_backend__string_switch__Code_21,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_52,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_53,
  MR_Word ll_backend__string_switch__CLD_23)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Word ll_backend__string_switch__TypeCtorInfo_116_116;
    MR_Word ll_backend__string_switch__TypeCtorInfo_117_117;
    MR_Word ll_backend__string_switch__TypeCtorInfo_118_118;
    MR_Word ll_backend__string_switch__HashSwitchInfo_24;
    MR_Word ll_backend__string_switch__BranchStart_25;
    MR_Word ll_backend__string_switch__Params_26;
    MR_Word ll_backend__string_switch__CommentCode_27;
    MR_Word ll_backend__string_switch__CaseLabelMap0_28;
    MR_Word ll_backend__string_switch__StrsLabels_29;
    MR_Word ll_backend__string_switch__CaseLabelMap_30;
    MR_Integer ll_backend__string_switch__TableSize_31;
    MR_Word ll_backend__string_switch__HashSlotsMap_32;
    MR_Word ll_backend__string_switch__HashOp_33;
    MR_Integer ll_backend__string_switch__NumCollisions_34;
    MR_Integer ll_backend__string_switch__HashMask_35;
    MR_Word ll_backend__string_switch__FailLabel_36;
    MR_Word ll_backend__string_switch__RevTableRows_37;
    MR_Word ll_backend__string_switch__RevTargets_38;
    MR_Word ll_backend__string_switch__TableRows_39;
    MR_Word ll_backend__string_switch__Targets_40;
    MR_Integer ll_backend__string_switch__NumColumns_41;
    MR_Word ll_backend__string_switch__RowElemTypes_42;
    MR_Word ll_backend__string_switch__ArrayElemTypes_43;
    MR_Word ll_backend__string_switch__TableAddr_44;
    MR_Word ll_backend__string_switch__ArrayElemType_45;
    MR_Word ll_backend__string_switch__TableAddrRval_46;
    MR_Word ll_backend__string_switch__SlotReg_47;
    MR_Word ll_backend__string_switch__MatchCode_48;
    MR_Word ll_backend__string_switch__HashLookupCode_49;
    MR_Word ll_backend__string_switch__CasesCode_50;
    MR_Word ll_backend__string_switch__EndLabelCode_51;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_54_54;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_60_60;
    MR_Word ll_backend__string_switch__Var_80;
    MR_Word ll_backend__string_switch__Var_82;
    MR_Word ll_backend__string_switch__Var_83;
    MR_Word ll_backend__string_switch__Var_84;
    MR_Word ll_backend__string_switch__Var_85;
    MR_Word ll_backend__string_switch__Var_89;
    MR_Word ll_backend__string_switch__Var_90;
    MR_Word ll_backend__string_switch__Var_91;
    MR_Word ll_backend__string_switch__Var_93;
    MR_Word ll_backend__string_switch__Var_94;
    MR_Word ll_backend__string_switch__Var_95;
    MR_Word ll_backend__string_switch__Var_96;
    MR_Word ll_backend__string_switch__Var_97;
    MR_Word ll_backend__string_switch__Var_98;
    MR_Word ll_backend__string_switch__Var_99;
    MR_Word ll_backend__string_switch__Var_100;
    MR_Word ll_backend__string_switch__Var_101;
    MR_Word ll_backend__string_switch__Var_102;
    MR_Word ll_backend__string_switch__Var_103;
    MR_Word ll_backend__string_switch__Var_104;
    MR_Word ll_backend__string_switch__Var_105;
    MR_Word ll_backend__string_switch__Var_106;
    MR_Word ll_backend__string_switch__Var_107;
    MR_Word ll_backend__string_switch__Var_108;
    MR_Word ll_backend__string_switch__Var_109;
    MR_Word ll_backend__string_switch__Var_110;
    MR_Word ll_backend__string_switch__Var_111;
    MR_Word ll_backend__string_switch__Var_112;
    MR_Word ll_backend__string_switch__Var_113;
    MR_Word ll_backend__string_switch__Var_114;
    MR_Word ll_backend__string_switch__Var_115;
    MR_Box ll_backend__string_switch__conv1_CasesCode_50;

    {
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_17, &ll_backend__string_switch__HashSwitchInfo_24, ll_backend__string_switch__STATE_VARIABLE_CI_0_52, &ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__CLD_23);
    }
    ll_backend__string_switch__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
    ll_backend__string_switch__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
    ll_backend__string_switch__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
    ll_backend__string_switch__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
    ll_backend__string_switch__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
    ll_backend__string_switch__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
    ll_backend__string_switch__BranchStart_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
    ll_backend__string_switch__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
    {
      ll_backend__string_switch__Params_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 0) = ((MR_Box) (ll_backend__string_switch__VarName_15));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_18));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_16));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_25));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
    }
    ll_backend__string_switch__TypeCtorInfo_116_116 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__string_switch__CommentCode_27 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[23])));
    }
    ll_backend__string_switch__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    ll_backend__string_switch__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
    {
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_117_117, ll_backend__string_switch__TypeCtorInfo_118_118, &ll_backend__string_switch__CaseLabelMap0_28);
    }
    {
      ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(ll_backend__string_switch__Params_26, ll_backend__string_switch__Cases_13, &ll_backend__string_switch__StrsLabels_29, ll_backend__string_switch__CaseLabelMap0_28, &ll_backend__string_switch__CaseLabelMap_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__string_switch__MaybeEnd_20, ll_backend__string_switch__STATE_VARIABLE_CI_54_54, &ll_backend__string_switch__STATE_VARIABLE_CI_60_60);
    }
    {
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeCtorInfo_117_117, ll_backend__string_switch__StrsLabels_29, (MR_Integer) 1, &ll_backend__string_switch__TableSize_31, &ll_backend__string_switch__HashSlotsMap_32, &ll_backend__string_switch__HashOp_33, &ll_backend__string_switch__NumCollisions_34);
    }
    ll_backend__string_switch__HashMask_35 = (ll_backend__string_switch__TableSize_31 - (MR_Integer) 1);
    ll_backend__string_switch__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
    ll_backend__string_switch__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
    ll_backend__string_switch__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
    ll_backend__string_switch__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
    ll_backend__string_switch__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
    ll_backend__string_switch__FailLabel_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
    ll_backend__string_switch__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
    ll_backend__string_switch__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
    {
      ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_31, ll_backend__string_switch__HashSlotsMap_32, ll_backend__string_switch__FailLabel_36, ll_backend__string_switch__NumCollisions_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_38);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_37, &ll_backend__string_switch__TableRows_39);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_38, &ll_backend__string_switch__Targets_40);
    }
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_34 == (MR_Integer) 0);
    if (ll_backend__string_switch__succeeded)
      {
        ll_backend__string_switch__NumColumns_41 = (MR_Integer) 1;
        ll_backend__string_switch__RowElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[24]);
        ll_backend__string_switch__ArrayElemTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[25]);
      }
    else
      {
        ll_backend__string_switch__NumColumns_41 = (MR_Integer) 2;
        ll_backend__string_switch__RowElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]);
        ll_backend__string_switch__ArrayElemTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[14]);
      }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_42, ll_backend__string_switch__TableRows_39, &ll_backend__string_switch__TableAddr_44, ll_backend__string_switch__STATE_VARIABLE_CI_60_60, ll_backend__string_switch__STATE_VARIABLE_CI_53);
    }
    {
      ll_backend__string_switch__ArrayElemType_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_45, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_43));
    }
    {
      ll_backend__string_switch__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_80, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_44));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__TableAddrRval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_46, 1) = ((MR_Box) (ll_backend__string_switch__Var_80));
    }
    ll_backend__string_switch__SlotReg_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
    ll_backend__string_switch__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
    ll_backend__string_switch__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
    ll_backend__string_switch__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
    ll_backend__string_switch__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
    ll_backend__string_switch__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
    ll_backend__string_switch__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
    ll_backend__string_switch__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
    {
      ll_backend__string_switch__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_85, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_47));
    }
    {
      ll_backend__string_switch__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 1) = ((MR_Box) (ll_backend__string_switch__Var_85));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_84, 2) = ((MR_Box) (ll_backend__string_switch__Targets_40));
    }
    {
      ll_backend__string_switch__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_83, 0) = ((MR_Box) (ll_backend__string_switch__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_83, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
    }
    {
      ll_backend__string_switch__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_82, 0) = ((MR_Box) (ll_backend__string_switch__Var_83));
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__string_switch__MatchCode_48 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__Var_82);
    }
    {
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_24, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__TableAddrRval_46, ll_backend__string_switch__ArrayElemType_45, ll_backend__string_switch__NumColumns_41, ll_backend__string_switch__HashOp_33, ll_backend__string_switch__HashMask_35, ll_backend__string_switch__NumCollisions_34, ll_backend__string_switch__MatchCode_48, &ll_backend__string_switch__HashLookupCode_49);
    }
    {
      ll_backend__string_switch__Var_89 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_116_116);
    }
    {
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_117_117, ll_backend__string_switch__TypeCtorInfo_118_118, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[5], ll_backend__string_switch__CaseLabelMap_30, ((MR_Box) (ll_backend__string_switch__Var_89)), &ll_backend__string_switch__conv1_CasesCode_50);
    }
    ll_backend__string_switch__CasesCode_50 = ((MR_Word) ll_backend__string_switch__conv1_CasesCode_50);
    {
      ll_backend__string_switch__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_91, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
    }
    {
      ll_backend__string_switch__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (ll_backend__string_switch__Var_91));
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_90, 1) = ((MR_Box) ((MR_String) "end of hashed string switch"));
    }
    {
      ll_backend__string_switch__EndLabelCode_51 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ((MR_Box) (ll_backend__string_switch__Var_90)));
    }
    {
      ll_backend__string_switch__Var_94 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__CasesCode_50, ll_backend__string_switch__EndLabelCode_51);
    }
    {
      ll_backend__string_switch__Var_93 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__HashLookupCode_49, ll_backend__string_switch__Var_94);
    }
    {
      *ll_backend__string_switch__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__CommentCode_27, ll_backend__string_switch__Var_93);
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
  MR_Word ll_backend__string_switch__Info_11,
  MR_Word ll_backend__string_switch__VarRval_12,
  MR_Word ll_backend__string_switch__TableAddrRval_13,
  MR_Word ll_backend__string_switch__ArrayElemType_14,
  MR_Integer ll_backend__string_switch__NumColumns_15,
  MR_Word ll_backend__string_switch__HashOp_16,
  MR_Integer ll_backend__string_switch__HashMask_17,
  MR_Integer ll_backend__string_switch__NumCollisions_18,
  MR_Word ll_backend__string_switch__MatchCode_19,
  MR_Word * ll_backend__string_switch__Code_20)
{
  {
    MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_18 == (MR_Integer) 0);
    MR_Word ll_backend__string_switch__SlotReg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 0)));
    MR_Word ll_backend__string_switch__RowStartReg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 1)));
    MR_Word ll_backend__string_switch__StringReg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 2)));
    MR_Word ll_backend__string_switch__LoopStartLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 3)));
    MR_Word ll_backend__string_switch__NoMatchLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 4)));
    MR_Word ll_backend__string_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 5)));
    MR_Word ll_backend__string_switch__FailCode_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 7)));
    MR_Word ll_backend__string_switch__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 6)));

    if (ll_backend__string_switch__succeeded)
      {
        MR_Word ll_backend__string_switch__TypeCtorInfo_222_222;
        MR_Word ll_backend__string_switch__BaseReg_28;
        MR_Word ll_backend__string_switch__MultiplyInstrs_29;
        MR_Word ll_backend__string_switch__Var_40;
        MR_Word ll_backend__string_switch__Var_41;
        MR_Word ll_backend__string_switch__Var_42;
        MR_Word ll_backend__string_switch__Var_43;
        MR_Word ll_backend__string_switch__Var_44;
        MR_Word ll_backend__string_switch__Var_47;
        MR_Word ll_backend__string_switch__Var_48;
        MR_Word ll_backend__string_switch__Var_49;
        MR_Word ll_backend__string_switch__Var_51;
        MR_Word ll_backend__string_switch__Var_52;
        MR_Word ll_backend__string_switch__Var_53;
        MR_Word ll_backend__string_switch__Var_54;
        MR_Word ll_backend__string_switch__Var_55;
        MR_Word ll_backend__string_switch__Var_56;
        MR_Word ll_backend__string_switch__Var_57;
        MR_Word ll_backend__string_switch__Var_58;
        MR_Word ll_backend__string_switch__Var_60;
        MR_Word ll_backend__string_switch__Var_61;
        MR_Word ll_backend__string_switch__Var_62;
        MR_Word ll_backend__string_switch__Var_63;
        MR_Word ll_backend__string_switch__Var_65;
        MR_Word ll_backend__string_switch__Var_68;
        MR_Word ll_backend__string_switch__Var_72;
        MR_Word ll_backend__string_switch__Var_75;
        MR_Word ll_backend__string_switch__Var_78;
        MR_Word ll_backend__string_switch__Var_79;
        MR_Word ll_backend__string_switch__Var_80;
        MR_Word ll_backend__string_switch__Var_81;
        MR_Word ll_backend__string_switch__Var_82;
        MR_Word ll_backend__string_switch__Var_83;

        ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumColumns_15 == (MR_Integer) 1);
        if (ll_backend__string_switch__succeeded)
          {
            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__SlotReg_21;
            ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ll_backend__string_switch__Var_30;
            MR_Word ll_backend__string_switch__Var_31;
            MR_Word ll_backend__string_switch__Var_32;
            MR_Word ll_backend__string_switch__Var_35;
            MR_Word ll_backend__string_switch__Var_36;
            MR_Word ll_backend__string_switch__Var_37;

            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__RowStartReg_22;
            {
              ll_backend__string_switch__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_35, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
            }
            {
              ll_backend__string_switch__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_37, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
            }
            {
              ll_backend__string_switch__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_36, 1) = ((MR_Box) (ll_backend__string_switch__Var_37));
            }
            {
              ll_backend__string_switch__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 2) = ((MR_Box) (ll_backend__string_switch__Var_35));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_32, 3) = ((MR_Box) (ll_backend__string_switch__Var_36));
            }
            {
              ll_backend__string_switch__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_31, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_31, 2) = ((MR_Box) (ll_backend__string_switch__Var_32));
            }
            {
              ll_backend__string_switch__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_30, 0) = ((MR_Box) (ll_backend__string_switch__Var_31));
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_30, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
            }
            {
              ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 0) = ((MR_Box) (ll_backend__string_switch__Var_30));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        ll_backend__string_switch__TypeCtorInfo_222_222 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__string_switch__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_47, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
        }
        {
          ll_backend__string_switch__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_49, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
        }
        {
          ll_backend__string_switch__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_48, 1) = ((MR_Box) (ll_backend__string_switch__Var_49));
        }
        {
          ll_backend__string_switch__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_44, 2) = ((MR_Box) (ll_backend__string_switch__Var_47));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_44, 3) = ((MR_Box) (ll_backend__string_switch__Var_48));
        }
        {
          ll_backend__string_switch__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_43, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_43, 2) = ((MR_Box) (ll_backend__string_switch__Var_44));
        }
        {
          ll_backend__string_switch__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_42, 0) = ((MR_Box) (ll_backend__string_switch__Var_43));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_42, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
        }
        {
          ll_backend__string_switch__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_41, 0) = ((MR_Box) (ll_backend__string_switch__Var_42));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_41, 1) = ((MR_Box) (ll_backend__string_switch__MultiplyInstrs_29));
        }
        {
          ll_backend__string_switch__Var_40 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_41);
        }
        {
          ll_backend__string_switch__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_57, 1) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
        }
        {
          ll_backend__string_switch__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_58, 0) = ((MR_Box) (ll_backend__string_switch__BaseReg_28));
        }
        {
          ll_backend__string_switch__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 1) = ((MR_Box) (ll_backend__string_switch__Var_57));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_56, 3) = ((MR_Box) (ll_backend__string_switch__Var_58));
        }
        {
          ll_backend__string_switch__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_55, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_55, 2) = ((MR_Box) (ll_backend__string_switch__Var_56));
        }
        {
          ll_backend__string_switch__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 0) = ((MR_Box) (ll_backend__string_switch__Var_55));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_54, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
        }
        {
          ll_backend__string_switch__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_68, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
        }
        {
          ll_backend__string_switch__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 2) = ((MR_Box) (ll_backend__string_switch__Var_68));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15])));
        }
        {
          ll_backend__string_switch__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 2) = ((MR_Box) (ll_backend__string_switch__Var_68));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_72, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
        }
        {
          ll_backend__string_switch__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_63, 2) = ((MR_Box) (ll_backend__string_switch__Var_65));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_63, 3) = ((MR_Box) (ll_backend__string_switch__Var_72));
        }
        {
          ll_backend__string_switch__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_75, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
        }
        {
          ll_backend__string_switch__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_62, 1) = ((MR_Box) (ll_backend__string_switch__Var_63));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_62, 2) = ((MR_Box) (ll_backend__string_switch__Var_75));
        }
        {
          ll_backend__string_switch__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_61, 0) = ((MR_Box) (ll_backend__string_switch__Var_62));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_61, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
        }
        {
          ll_backend__string_switch__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_60, 0) = ((MR_Box) (ll_backend__string_switch__Var_61));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__string_switch__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_53, 0) = ((MR_Box) (ll_backend__string_switch__Var_54));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_53, 1) = ((MR_Box) (ll_backend__string_switch__Var_60));
        }
        {
          ll_backend__string_switch__Var_52 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_53);
        }
        {
          ll_backend__string_switch__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_83, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
        }
        {
          ll_backend__string_switch__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_82, 0) = ((MR_Box) (ll_backend__string_switch__Var_83));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_82, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
        }
        {
          ll_backend__string_switch__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_81, 0) = ((MR_Box) (ll_backend__string_switch__Var_82));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__string_switch__Var_80 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_81);
        }
        {
          ll_backend__string_switch__Var_79 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_80, ll_backend__string_switch__FailCode_27);
        }
        {
          ll_backend__string_switch__Var_78 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__Var_79);
        }
        {
          ll_backend__string_switch__Var_51 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_52, ll_backend__string_switch__Var_78);
        }
        {
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_222_222, ll_backend__string_switch__Var_40, ll_backend__string_switch__Var_51);
        }
      }
    else
      {
        MR_Word ll_backend__string_switch__TypeCtorInfo_223_223 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__string_switch__Var_86;
        MR_Word ll_backend__string_switch__Var_87;
        MR_Word ll_backend__string_switch__Var_88;
        MR_Word ll_backend__string_switch__Var_89;
        MR_Word ll_backend__string_switch__Var_90;
        MR_Word ll_backend__string_switch__Var_93;
        MR_Word ll_backend__string_switch__Var_94;
        MR_Word ll_backend__string_switch__Var_95;
        MR_Word ll_backend__string_switch__Var_97;
        MR_Word ll_backend__string_switch__Var_98;
        MR_Word ll_backend__string_switch__Var_99;
        MR_Word ll_backend__string_switch__Var_101;
        MR_Word ll_backend__string_switch__Var_102;
        MR_Word ll_backend__string_switch__Var_103;
        MR_Word ll_backend__string_switch__Var_104;
        MR_Word ll_backend__string_switch__Var_107;
        MR_Word ll_backend__string_switch__Var_108;
        MR_Word ll_backend__string_switch__Var_109;
        MR_Word ll_backend__string_switch__Var_111;
        MR_Word ll_backend__string_switch__Var_112;
        MR_Word ll_backend__string_switch__Var_113;
        MR_Word ll_backend__string_switch__Var_114;
        MR_Word ll_backend__string_switch__Var_115;
        MR_Word ll_backend__string_switch__Var_116;
        MR_Word ll_backend__string_switch__Var_118;
        MR_Word ll_backend__string_switch__Var_119;
        MR_Word ll_backend__string_switch__Var_120;
        MR_Word ll_backend__string_switch__Var_121;
        MR_Word ll_backend__string_switch__Var_123;
        MR_Word ll_backend__string_switch__Var_126;
        MR_Word ll_backend__string_switch__Var_127;
        MR_Word ll_backend__string_switch__Var_130;
        MR_Word ll_backend__string_switch__Var_133;
        MR_Word ll_backend__string_switch__Var_136;
        MR_Word ll_backend__string_switch__Var_137;
        MR_Word ll_backend__string_switch__Var_138;
        MR_Word ll_backend__string_switch__Var_139;
        MR_Word ll_backend__string_switch__Var_140;
        MR_Word ll_backend__string_switch__Var_141;
        MR_Word ll_backend__string_switch__Var_143;
        MR_Word ll_backend__string_switch__Var_144;
        MR_Word ll_backend__string_switch__Var_145;
        MR_Word ll_backend__string_switch__Var_146;
        MR_Word ll_backend__string_switch__Var_148;
        MR_Word ll_backend__string_switch__Var_156;
        MR_Word ll_backend__string_switch__Var_157;
        MR_Word ll_backend__string_switch__Var_158;
        MR_Word ll_backend__string_switch__Var_159;
        MR_Word ll_backend__string_switch__Var_166;
        MR_Word ll_backend__string_switch__Var_168;
        MR_Word ll_backend__string_switch__Var_169;
        MR_Word ll_backend__string_switch__Var_170;

        {
          ll_backend__string_switch__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_93, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_93, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
        }
        {
          ll_backend__string_switch__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_95, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
        }
        {
          ll_backend__string_switch__Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_94, 1) = ((MR_Box) (ll_backend__string_switch__Var_95));
        }
        {
          ll_backend__string_switch__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 2) = ((MR_Box) (ll_backend__string_switch__Var_93));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_90, 3) = ((MR_Box) (ll_backend__string_switch__Var_94));
        }
        {
          ll_backend__string_switch__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_89, 2) = ((MR_Box) (ll_backend__string_switch__Var_90));
        }
        {
          ll_backend__string_switch__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_88, 0) = ((MR_Box) (ll_backend__string_switch__Var_89));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_88, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
        }
        {
          ll_backend__string_switch__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_99, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
        }
        {
          ll_backend__string_switch__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_98, 0) = ((MR_Box) (ll_backend__string_switch__Var_99));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_98, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
        }
        {
          ll_backend__string_switch__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_107, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
        }
        {
          ll_backend__string_switch__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_109, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
        }
        {
          ll_backend__string_switch__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_108, 1) = ((MR_Box) (ll_backend__string_switch__Var_109));
        }
        {
          ll_backend__string_switch__Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[18])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 2) = ((MR_Box) (ll_backend__string_switch__Var_107));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_104, 3) = ((MR_Box) (ll_backend__string_switch__Var_108));
        }
        {
          ll_backend__string_switch__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_103, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_103, 2) = ((MR_Box) (ll_backend__string_switch__Var_104));
        }
        {
          ll_backend__string_switch__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_102, 0) = ((MR_Box) (ll_backend__string_switch__Var_103));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_102, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
        }
        {
          ll_backend__string_switch__Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_115, 1) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
        }
        {
          ll_backend__string_switch__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_116, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
        }
        {
          ll_backend__string_switch__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 1) = ((MR_Box) (ll_backend__string_switch__Var_115));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_114, 3) = ((MR_Box) (ll_backend__string_switch__Var_116));
        }
        {
          ll_backend__string_switch__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_113, 2) = ((MR_Box) (ll_backend__string_switch__Var_114));
        }
        {
          ll_backend__string_switch__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_112, 0) = ((MR_Box) (ll_backend__string_switch__Var_113));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_112, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
        }
        {
          ll_backend__string_switch__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_126, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
        }
        ll_backend__string_switch__Var_127 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
        {
          ll_backend__string_switch__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_123, 2) = ((MR_Box) (ll_backend__string_switch__Var_126));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_123, 3) = ((MR_Box) (ll_backend__string_switch__Var_127));
        }
        {
          ll_backend__string_switch__Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 2) = ((MR_Box) (ll_backend__string_switch__Var_126));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_130, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
        }
        {
          ll_backend__string_switch__Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_121, 2) = ((MR_Box) (ll_backend__string_switch__Var_123));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_121, 3) = ((MR_Box) (ll_backend__string_switch__Var_130));
        }
        {
          ll_backend__string_switch__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_133, 0) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
        }
        {
          ll_backend__string_switch__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_120, 1) = ((MR_Box) (ll_backend__string_switch__Var_121));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_120, 2) = ((MR_Box) (ll_backend__string_switch__Var_133));
        }
        {
          ll_backend__string_switch__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_119, 0) = ((MR_Box) (ll_backend__string_switch__Var_120));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_119, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
        }
        {
          ll_backend__string_switch__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_118, 0) = ((MR_Box) (ll_backend__string_switch__Var_119));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__string_switch__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_111, 0) = ((MR_Box) (ll_backend__string_switch__Var_112));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_111, 1) = ((MR_Box) (ll_backend__string_switch__Var_118));
        }
        {
          ll_backend__string_switch__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_101, 0) = ((MR_Box) (ll_backend__string_switch__Var_102));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_101, 1) = ((MR_Box) (ll_backend__string_switch__Var_111));
        }
        {
          ll_backend__string_switch__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_97, 0) = ((MR_Box) (ll_backend__string_switch__Var_98));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_97, 1) = ((MR_Box) (ll_backend__string_switch__Var_101));
        }
        {
          ll_backend__string_switch__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_87, 0) = ((MR_Box) (ll_backend__string_switch__Var_88));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_87, 1) = ((MR_Box) (ll_backend__string_switch__Var_97));
        }
        {
          ll_backend__string_switch__Var_86 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_223_223, ll_backend__string_switch__Var_87);
        }
        {
          ll_backend__string_switch__Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_141, 1) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
        }
        {
          ll_backend__string_switch__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 0) = ((MR_Box) (ll_backend__string_switch__Var_141));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_140, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
        }
        {
          ll_backend__string_switch__Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_148, 2) = ((MR_Box) (ll_backend__string_switch__Var_116));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_148, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21])));
        }
        {
          ll_backend__string_switch__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 1) = ((MR_Box) (ll_backend__string_switch__Var_115));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_146, 3) = ((MR_Box) (ll_backend__string_switch__Var_148));
        }
        {
          ll_backend__string_switch__Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_145, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_145, 2) = ((MR_Box) (ll_backend__string_switch__Var_146));
        }
        {
          ll_backend__string_switch__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_144, 0) = ((MR_Box) (ll_backend__string_switch__Var_145));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_144, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
        }
        {
          ll_backend__string_switch__Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22])));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_159, 2) = ((MR_Box) (ll_backend__string_switch__Var_107));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_159, 3) = ((MR_Box) (ll_backend__string_switch__Var_127));
        }
        {
          ll_backend__string_switch__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_166, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
        }
        {
          ll_backend__string_switch__Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_158, 1) = ((MR_Box) (ll_backend__string_switch__Var_159));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_158, 2) = ((MR_Box) (ll_backend__string_switch__Var_166));
        }
        {
          ll_backend__string_switch__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_157, 0) = ((MR_Box) (ll_backend__string_switch__Var_158));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_157, 1) = ((MR_Box) ((MR_String) "if we have not reached the end of the chain, keep searching"));
        }
        {
          ll_backend__string_switch__Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_170, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
        }
        {
          ll_backend__string_switch__Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_169, 0) = ((MR_Box) (ll_backend__string_switch__Var_170));
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_169, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
        }
        {
          ll_backend__string_switch__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_168, 0) = ((MR_Box) (ll_backend__string_switch__Var_169));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__string_switch__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_156, 0) = ((MR_Box) (ll_backend__string_switch__Var_157));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_156, 1) = ((MR_Box) (ll_backend__string_switch__Var_168));
        }
        {
          ll_backend__string_switch__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_143, 0) = ((MR_Box) (ll_backend__string_switch__Var_144));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_143, 1) = ((MR_Box) (ll_backend__string_switch__Var_156));
        }
        {
          ll_backend__string_switch__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_139, 0) = ((MR_Box) (ll_backend__string_switch__Var_140));
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_139, 1) = ((MR_Box) (ll_backend__string_switch__Var_143));
        }
        {
          ll_backend__string_switch__Var_138 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_223_223, ll_backend__string_switch__Var_139);
        }
        {
          ll_backend__string_switch__Var_137 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_223_223, ll_backend__string_switch__Var_138, ll_backend__string_switch__FailCode_27);
        }
        {
          ll_backend__string_switch__Var_136 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_223_223, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__Var_137);
        }
        {
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_223_223, ll_backend__string_switch__Var_86, ll_backend__string_switch__Var_136);
        }
      }
  }
}

static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
  MR_Word ll_backend__string_switch__CanFail_6,
  MR_Word * ll_backend__string_switch__Info_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_20)
{
  {
    MR_Word ll_backend__string_switch__SlotReg_10;
    MR_Word ll_backend__string_switch__RowStartReg_11;
    MR_Word ll_backend__string_switch__StringReg_12;
    MR_Word ll_backend__string_switch__LoopStartLabel_13;
    MR_Word ll_backend__string_switch__FailLabel_14;
    MR_Word ll_backend__string_switch__NoMatchLabel_15;
    MR_Word ll_backend__string_switch__BranchStart_16;
    MR_Word ll_backend__string_switch__FailCode_17;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_22_22;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_24_24;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_26_26;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_27_27;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_28_28;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_29_29;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_30_30;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_31_31;
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_32_32;

    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__SlotReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_0_20, &ll_backend__string_switch__STATE_VARIABLE_CLD_22_22);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__RowStartReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_22_22, &ll_backend__string_switch__STATE_VARIABLE_CLD_24_24);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__StringReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_24_24, &ll_backend__string_switch__STATE_VARIABLE_CLD_26_26);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__SlotReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_26_26, &ll_backend__string_switch__STATE_VARIABLE_CLD_27_27);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__RowStartReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_27_27, &ll_backend__string_switch__STATE_VARIABLE_CLD_28_28);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__StringReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_28_28, &ll_backend__string_switch__STATE_VARIABLE_CLD_29_29);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_13, ll_backend__string_switch__STATE_VARIABLE_CI_0_18, &ll_backend__string_switch__STATE_VARIABLE_CI_30_30);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_14, ll_backend__string_switch__STATE_VARIABLE_CI_30_30, &ll_backend__string_switch__STATE_VARIABLE_CI_31_31);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__NoMatchLabel_15, ll_backend__string_switch__STATE_VARIABLE_CI_31_31, &ll_backend__string_switch__STATE_VARIABLE_CI_32_32);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CLD_29_29, &ll_backend__string_switch__BranchStart_16);
    }
    switch (ll_backend__string_switch__CanFail_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__string_switch__FailCode_17, ll_backend__string_switch__STATE_VARIABLE_CI_32_32, ll_backend__string_switch__STATE_VARIABLE_CI_19, ll_backend__string_switch__STATE_VARIABLE_CLD_29_29);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__string_switch__FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[17])));
          }
          *ll_backend__string_switch__STATE_VARIABLE_CI_19 = ll_backend__string_switch__STATE_VARIABLE_CI_32_32;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__string_switch__Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__StringReg_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__FailLabel_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__BranchStart_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailCode_17));
    }
  }
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
  MR_Box ll_backend__string_switch__closure_arg,
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box * ll_backend__string_switch__wrapper_arg_3)
{
  {
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
    MR_Word ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12;

    {
      ll_backend__string_switch__add_to_strs_labels_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), &ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12);
    }
    *ll_backend__string_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12));
  }
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
  MR_Word ll_backend__string_switch__Params_1,
  MR_Word ll_backend__string_switch__HeadVar__2_2,
  MR_Word * ll_backend__string_switch__HeadVar__3_3,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_9)
{
  if ((ll_backend__string_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__string_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__string_switch__STATE_VARIABLE_CI_9 = ll_backend__string_switch__STATE_VARIABLE_CI_0_8;
      *ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7 = ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6;
      *ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5 = ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4;
    }
  else
    {
      MR_Word ll_backend__string_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__string_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__string_switch__Label_27;
      MR_Word ll_backend__string_switch__MainTaggedConsId_28;
      MR_Word ll_backend__string_switch__OtherTaggedConsIds_29;
      MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39;
      MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40;
      MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_41_41;
      MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42;
      MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46;
      MR_Word ll_backend__string_switch__Var_47;
      MR_Word ll_backend__string_switch__Var_30;
      MR_Word ll_backend__string_switch__Var_31;
      MR_Box ll_backend__string_switch__conv1_HeadVar__3_3;

      {
        ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(ll_backend__string_switch__Params_1, ll_backend__string_switch__Case_21, &ll_backend__string_switch__Label_27, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4, &ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6, &ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40, ll_backend__string_switch__STATE_VARIABLE_CI_0_8, &ll_backend__string_switch__STATE_VARIABLE_CI_41_41);
      }
      {
        ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(ll_backend__string_switch__Params_1, ll_backend__string_switch__Cases_22, &ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7, ll_backend__string_switch__STATE_VARIABLE_CI_41_41, ll_backend__string_switch__STATE_VARIABLE_CI_9);
      }
      ll_backend__string_switch__MainTaggedConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 0)));
      ll_backend__string_switch__OtherTaggedConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 1)));
      ll_backend__string_switch__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 2)));
      ll_backend__string_switch__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 3)));
      {
        ll_backend__string_switch__add_to_strs_labels_4_p_0(ll_backend__string_switch__Label_27, ll_backend__string_switch__MainTaggedConsId_28, ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42, &ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46);
      }
      {
        ll_backend__string_switch__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_47, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_47, 1) = ((MR_Box) (ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1));
        MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_47, 3) = ((MR_Box) (ll_backend__string_switch__Label_27));
      }
      {
        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__Var_47, ll_backend__string_switch__OtherTaggedConsIds_29, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46)), &ll_backend__string_switch__conv1_HeadVar__3_3);
      }
      *ll_backend__string_switch__HeadVar__3_3 = ((MR_Word) ll_backend__string_switch__conv1_HeadVar__3_3);
    }
}

static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
  MR_Word ll_backend__string_switch__Label_5,
  MR_Word ll_backend__string_switch__TaggedConsId_6,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12)
{
  {
    MR_bool ll_backend__string_switch__succeeded;
    MR_Word ll_backend__string_switch__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__TaggedConsId_6, (MR_Integer) 1)));
    MR_Word ll_backend__string_switch___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__TaggedConsId_6, (MR_Integer) 0)));
    MR_String ll_backend__string_switch__String_10;

    ll_backend__string_switch__succeeded = ((MR_tag((MR_Word) ll_backend__string_switch__Tag_9)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__string_switch__succeeded)
      {
        ll_backend__string_switch__String_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Tag_9, (MR_Integer) 0)));
        {
          MR_Word ll_backend__string_switch__Var_14;

          {
            ll_backend__string_switch__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_14, 0) = ((MR_Box) (ll_backend__string_switch__String_10));
            MR_hl_field(MR_mktag(0), ll_backend__string_switch__Var_14, 1) = ((MR_Box) (ll_backend__string_switch__Label_5));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__string_switch__Var_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11));
          }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.add_to_strs_labels\'/4", (MR_String) "non-string tag");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
  MR_Integer ll_backend__string_switch__Slot_10,
  MR_Integer ll_backend__string_switch__TableSize_11,
  MR_Word ll_backend__string_switch__HashSlotMap_12,
  MR_Word ll_backend__string_switch__FailLabel_13,
  MR_Integer ll_backend__string_switch__NumCollisions_14,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26,
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27,
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_10 == ll_backend__string_switch__TableSize_11);

        if (ll_backend__string_switch__succeeded)
          {
            *ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28 = ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27;
            *ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25;
          }
        else
          {
            MR_Word ll_backend__string_switch__NextSlotRval_21;
            MR_Word ll_backend__string_switch__StringRval_22;
            MR_Word ll_backend__string_switch__Target_23;
            MR_Word ll_backend__string_switch__TableRow_24;
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38;
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39;
            MR_Word ll_backend__string_switch__Var_40;
            MR_Integer ll_backend__string_switch__Var_41;
            MR_Word ll_backend__string_switch__SlotInfo_17;
            MR_Box ll_backend__string_switch__conv0_SlotInfo_17;

            {
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[5], ll_backend__string_switch__HashSlotMap_12, ll_backend__string_switch__Slot_10, &ll_backend__string_switch__conv0_SlotInfo_17);
            }
            if (ll_backend__string_switch__succeeded)
              {
                ll_backend__string_switch__SlotInfo_17 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_17);
                ll_backend__string_switch__succeeded = MR_TRUE;
              }
            if (ll_backend__string_switch__succeeded)
              {
                MR_String ll_backend__string_switch__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 0)));
                MR_Integer ll_backend__string_switch__Next_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 1)));
                MR_Word ll_backend__string_switch__Var_29;
                MR_Word ll_backend__string_switch__Var_30;

                ll_backend__string_switch__Target_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 2)));
                {
                  ll_backend__string_switch__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_29, 0) = ((MR_Box) (ll_backend__string_switch__Next_19));
                }
                {
                  ll_backend__string_switch__NextSlotRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_21, 1) = ((MR_Box) (ll_backend__string_switch__Var_29));
                }
                {
                  ll_backend__string_switch__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__Var_30, 1) = ((MR_Box) (ll_backend__string_switch__String_18));
                }
                {
                  ll_backend__string_switch__StringRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_22, 1) = ((MR_Box) (ll_backend__string_switch__Var_30));
                }
              }
            else
              {
                ll_backend__string_switch__StringRval_22 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[15]);
                ll_backend__string_switch__NextSlotRval_21 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[16]);
                ll_backend__string_switch__Target_23 = ll_backend__string_switch__FailLabel_13;
              }
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_14 == (MR_Integer) 0);
            if (ll_backend__string_switch__succeeded)
              {
                {
                  ll_backend__string_switch__TableRow_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_22));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word ll_backend__string_switch__Var_36;

                {
                  ll_backend__string_switch__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_36, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_21));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__string_switch__TableRow_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_22));
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 1) = ((MR_Box) (ll_backend__string_switch__Var_36));
                }
              }
            {
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38, 0) = ((MR_Box) (ll_backend__string_switch__TableRow_24));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25));
            }
            {
              ll_backend__string_switch__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Var_40, 0) = ((MR_Box) (ll_backend__string_switch__Target_23));
            }
            {
              ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39, 0) = ((MR_Box) (ll_backend__string_switch__Var_40));
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27));
            }
            ll_backend__string_switch__Var_41 = (ll_backend__string_switch__Slot_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__string_switch__next_value_of_Slot_10 = ll_backend__string_switch__Var_41;
              MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTableRows_0_25 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38;
              MR_Word ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMaybeTargets_0_27 = ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39;

              ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevMaybeTargets_0_27;
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25 = ll_backend__string_switch__next_value_of_STATE_VARIABLE_RevTableRows_0_25;
              ll_backend__string_switch__Slot_10 = ll_backend__string_switch__next_value_of_Slot_10;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2)
{
  {
    MR_bool ll_backend__string_switch__succeeded;

    {
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_binary_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3)
{
  {
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

    {
      ll_backend__string_switch____Compare____string_binary_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
  MR_Box ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2)
{
  {
    MR_bool ll_backend__string_switch__succeeded;

    {
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_hash_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
    return ll_backend__string_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
  MR_Box ll_backend__string_switch__wrapper_arg_2,
  MR_Box ll_backend__string_switch__wrapper_arg_3)
{
  {
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

    {
      ll_backend__string_switch____Compare____string_hash_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__string_switch__init(void)
{
}

void mercury__ll_backend__string_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0);
	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0);
}

void mercury__ll_backend__string_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__string_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.string_switch. */
