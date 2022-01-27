/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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




#line 154 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 157 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 160 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0;

#line 163 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

#line 166 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

#line 169 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "ll_backend.string_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0;

#line 178 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 181 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10];

#line 184 "ll_backend.string_switch.c"
static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10];

#line 187 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0;

#line 190 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1];

#line 193 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1];

#line 196 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1];

#line 199 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1];

#line 202 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8];

#line 205 "ll_backend.string_switch.c"
static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8];

#line 208 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0;

#line 211 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1];

#line 214 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1];

#line 217 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1];

#line 220 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1];

#line 223 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
#line 226 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 228 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2);

#line 231 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
#line 234 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 236 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 238 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3);

#line 241 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
#line 244 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 246 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2);

#line 249 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
#line 252 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 254 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 256 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3);

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__916__1_2_p_0(
#line 916 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 916 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_82);

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__422__1_2_p_0(
#line 422 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 422 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_111);

#line 554 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
#line 554 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3);

#line 554 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2);

#line 1024 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
#line 1024 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3);

#line 1024 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2);

#line 1080 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_8,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_9,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_10,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_11,
#line 1080 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_12,
#line 1080 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_13,
#line 1080 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_14);

#line 1040 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_4_p_0(
#line 1040 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_5,
#line 1040 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_6,
#line 1040 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
#line 1040 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19);

#line 984 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
#line 984 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
#line 984 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
#line 984 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
#line 984 "string_switch.m"
  MR_Integer * ll_backend__string_switch__HeadVar__11_11);

#line 933 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_3(
#line 933 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 933 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_2(
#line 916 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_1(
#line 916 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 885 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0(
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_16,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_17,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_18,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_19,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_21,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_22,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_23,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_24,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_25,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_62,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_63,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_27,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_64,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_65);

#line 872 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
#line 872 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 872 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
#line 872 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3);

#line 782 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_15,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_16,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_17,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_18,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_19,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_20,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_21,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_23,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52);

#line 745 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
#line 745 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
#line 745 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
#line 745 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
#line 745 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7);

#line 601 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_11,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_13,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_14,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_15,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__HashOp_16,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__HashMask_17,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_18,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__MatchCode_19,
#line 601 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20);

#line 568 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_4_p_0(
#line 568 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_5,
#line 568 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_6,
#line 568 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_16,
#line 568 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_17);

#line 484 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_16,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_17,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_18,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumOutVars_20,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_21,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
#line 484 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
#line 484 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
#line 484 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
#line 484 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52);

#line 434 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_3(
#line 434 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 434 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_2(
#line 422 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_1(
#line 422 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 375 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0(
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_16,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_17,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_18,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_19,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_21,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_22,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_23,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_24,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_25,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_68,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_69,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_27,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_70,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_71);

#line 345 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_8,
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_9,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_10,
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_11,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
#line 345 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22);

#line 271 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1(
#line 271 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 271 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 242 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_15,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_16,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_17,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_18,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_19,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_20,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_21,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_23,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59);

#line 209 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__Label_5,
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__TaggedConsId_6,
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11,
#line 209 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12);

#line 207 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 207 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_3);

#line 192 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__Params_1,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__3_3,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_8,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_9);

#line 161 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_10,
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_11,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_12,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__FailLabel_13,
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_14,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25,
#line 161 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27,
#line 161 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28);

#line 737 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_11_p_0_2(
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 737 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4);

#line 703 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_11_p_0_1(
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_5,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_7,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_8);

#line 154 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_11_p_0_1(
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 154 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4);


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[28][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[2][7];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][12];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[2][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_7[1][4];




static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[28][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[6]))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[8]))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 10)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[4])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[5])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[7])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[8]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[9]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) "fail code in cannot_fail switch"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[11]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 27 */
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
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[8]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_switch_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "string hash jump switch"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "string binary jump switch"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[14])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "string hash simple lookup switch"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "string hash several soln lookup switch"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "unreachable"))
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
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][12] = {
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
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[2][5] = {
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

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__string_switch____vpti_pred_0))
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



#line 1143 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1151 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 1160 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0
  }
};

#line 1168 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1177 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1185 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1193 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1201 "ll_backend.string_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 1209 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1217 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1231 "ll_backend.string_switch.c"
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

#line 1245 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 = {
  (MR_String) "string_binary_switch_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0,
  NULL,
  NULL
};

#line 1260 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

#line 1265 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0
  }
};

#line 1274 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

#line 1279 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1284 "ll_backend.string_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_binary_switch_info",
  {
    ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0
  },
  {
    ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0
};

#line 1305 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1317 "ll_backend.string_switch.c"
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

#line 1329 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 = {
  (MR_String) "string_hash_switch_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0,
  NULL,
  NULL
};

#line 1344 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

#line 1349 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0
  }
};

#line 1358 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

#line 1363 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1368 "ll_backend.string_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_hash_switch_info",
  {
    ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0
  },
  {
    ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0
};

#line 1389 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
#line 1392 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 1394 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2)
#line 1396 "ll_backend.string_switch.c"
{
#line 1398 "ll_backend.string_switch.c"
  {
#line 1400 "ll_backend.string_switch.c"
    MR_bool ll_backend__string_switch__succeeded;

#line 1403 "ll_backend.string_switch.c"
    {
#line 1405 "ll_backend.string_switch.c"
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_binary_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
#line 1408 "ll_backend.string_switch.c"
    return ll_backend__string_switch__succeeded;
#line 1410 "ll_backend.string_switch.c"
  }
#line 1412 "ll_backend.string_switch.c"
}

#line 1415 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
#line 1418 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 1420 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 1422 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3)
#line 1424 "ll_backend.string_switch.c"
{
#line 1426 "ll_backend.string_switch.c"
  {
#line 1428 "ll_backend.string_switch.c"
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

#line 1431 "ll_backend.string_switch.c"
    {
#line 1433 "ll_backend.string_switch.c"
      ll_backend__string_switch____Compare____string_binary_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
#line 1436 "ll_backend.string_switch.c"
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
#line 1438 "ll_backend.string_switch.c"
  }
#line 1440 "ll_backend.string_switch.c"
}

#line 1443 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
#line 1446 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 1448 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2)
#line 1450 "ll_backend.string_switch.c"
{
#line 1452 "ll_backend.string_switch.c"
  {
#line 1454 "ll_backend.string_switch.c"
    MR_bool ll_backend__string_switch__succeeded;

#line 1457 "ll_backend.string_switch.c"
    {
#line 1459 "ll_backend.string_switch.c"
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_hash_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
#line 1462 "ll_backend.string_switch.c"
    return ll_backend__string_switch__succeeded;
#line 1464 "ll_backend.string_switch.c"
  }
#line 1466 "ll_backend.string_switch.c"
}

#line 1469 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
#line 1472 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 1474 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 1476 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3)
#line 1478 "ll_backend.string_switch.c"
{
#line 1480 "ll_backend.string_switch.c"
  {
#line 1482 "ll_backend.string_switch.c"
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

#line 1485 "ll_backend.string_switch.c"
    {
#line 1487 "ll_backend.string_switch.c"
      ll_backend__string_switch____Compare____string_hash_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
#line 1490 "ll_backend.string_switch.c"
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
#line 1492 "ll_backend.string_switch.c"
  }
#line 1494 "ll_backend.string_switch.c"
}

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__916__1_2_p_0(
#line 916 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 916 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_82)
#line 916 "string_switch.m"
{
#line 916 "string_switch.m"
  {
#line 916 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;

#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_20)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_82)));
    }
#line 916 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 916 "string_switch.m"
  }
#line 916 "string_switch.m"
}

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__422__1_2_p_0(
#line 422 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 422 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_111)
#line 422 "string_switch.m"
{
#line 422 "string_switch.m"
  {
#line 422 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;

#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_20)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_111)));
    }
#line 422 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 422 "string_switch.m"
  }
#line 422 "string_switch.m"
}

#line 554 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
#line 554 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3)
#line 554 "string_switch.m"
{
#line 554 "string_switch.m"
  {
#line 554 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 554 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_27 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
#line 554 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_28 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

#line 554 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_27 == ll_backend__string_switch__CastY_28);
#line 554 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1573 "ll_backend.string_switch.c"
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 554 "string_switch.m"
    else
#line 554 "string_switch.m"
      {
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20;

#line 554 "string_switch.m"
        {
#line 554 "string_switch.m"
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_20_20, ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_12_12);
        }
#line 1619 "ll_backend.string_switch.c"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_20_20 == (MR_Integer) 0);
#line 554 "string_switch.m"
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_20_20;
#line 554 "string_switch.m"
        else
#line 554 "string_switch.m"
          {
#line 554 "string_switch.m"
            MR_Word ll_backend__string_switch__V_21_21;

#line 554 "string_switch.m"
            {
#line 554 "string_switch.m"
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_21_21, ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_13_13);
            }
#line 1639 "ll_backend.string_switch.c"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_21_21 == (MR_Integer) 0);
#line 554 "string_switch.m"
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_21_21;
#line 554 "string_switch.m"
            else
#line 554 "string_switch.m"
              {
#line 554 "string_switch.m"
                MR_Word ll_backend__string_switch__V_22_22;

#line 554 "string_switch.m"
                {
#line 554 "string_switch.m"
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_22_22, ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_14_14);
                }
#line 1659 "ll_backend.string_switch.c"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_22_22 == (MR_Integer) 0);
#line 554 "string_switch.m"
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_22_22;
#line 554 "string_switch.m"
                else
#line 554 "string_switch.m"
                  {
#line 554 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_23_23;

#line 554 "string_switch.m"
                    {
#line 554 "string_switch.m"
                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_23_23, ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_15_15);
                    }
#line 1679 "ll_backend.string_switch.c"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_23_23 == (MR_Integer) 0);
#line 554 "string_switch.m"
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_23_23;
#line 554 "string_switch.m"
                    else
#line 554 "string_switch.m"
                      {
#line 554 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_24_24;

#line 554 "string_switch.m"
                        {
#line 554 "string_switch.m"
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_24_24, ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_16_16);
                        }
#line 1699 "ll_backend.string_switch.c"
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_24_24 == (MR_Integer) 0);
#line 554 "string_switch.m"
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_24_24;
#line 554 "string_switch.m"
                        else
#line 554 "string_switch.m"
                          {
#line 554 "string_switch.m"
                            MR_Word ll_backend__string_switch__V_25_25;

#line 554 "string_switch.m"
                            {
#line 554 "string_switch.m"
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_25_25, ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_17_17);
                            }
#line 1719 "ll_backend.string_switch.c"
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_25_25 == (MR_Integer) 0);
#line 554 "string_switch.m"
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_25_25;
#line 554 "string_switch.m"
                            else
#line 554 "string_switch.m"
                              {
#line 554 "string_switch.m"
                                MR_Word ll_backend__string_switch__V_26_26;

#line 554 "string_switch.m"
                                {
#line 554 "string_switch.m"
                                  ll_backend__code_info____Compare____position_info_0_0(&ll_backend__string_switch__V_26_26, ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_18_18);
                                }
#line 1739 "ll_backend.string_switch.c"
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_26_26 == (MR_Integer) 0);
#line 554 "string_switch.m"
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 554 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_26_26;
#line 554 "string_switch.m"
                                else
#line 554 "string_switch.m"
                                  {
#line 554 "string_switch.m"
                                    {
#line 554 "string_switch.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__V_11_11)), ((MR_Box) (ll_backend__string_switch__V_19_19)));
#line 554 "string_switch.m"
                                      return;
                                    }
#line 554 "string_switch.m"
                                  }
#line 554 "string_switch.m"
                              }
#line 554 "string_switch.m"
                          }
#line 554 "string_switch.m"
                      }
#line 554 "string_switch.m"
                  }
#line 554 "string_switch.m"
              }
#line 554 "string_switch.m"
          }
#line 554 "string_switch.m"
      }
#line 554 "string_switch.m"
  }
#line 554 "string_switch.m"
}

#line 554 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 554 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2)
#line 554 "string_switch.m"
{
#line 554 "string_switch.m"
  {
#line 554 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 554 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_19 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
#line 554 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_20 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

#line 554 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_19 == ll_backend__string_switch__CastY_20);
#line 554 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
      ll_backend__string_switch__succeeded = MR_TRUE;
#line 554 "string_switch.m"
    else
#line 554 "string_switch.m"
      {
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeInfo_28_28;
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 554 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));

#line 1842 "ll_backend.string_switch.c"
        {
#line 1844 "ll_backend.string_switch.c"
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_3_3, ll_backend__string_switch__V_11_11);
        }
#line 554 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
          {
#line 1851 "ll_backend.string_switch.c"
            {
#line 1853 "ll_backend.string_switch.c"
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_12_12);
            }
#line 554 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
              {
#line 1860 "ll_backend.string_switch.c"
                {
#line 1862 "ll_backend.string_switch.c"
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_13_13);
                }
#line 554 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                  {
#line 1869 "ll_backend.string_switch.c"
                    {
#line 1871 "ll_backend.string_switch.c"
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_14_14);
                    }
#line 554 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                      {
#line 1878 "ll_backend.string_switch.c"
                        {
#line 1880 "ll_backend.string_switch.c"
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_15_15);
                        }
#line 554 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                          {
#line 1887 "ll_backend.string_switch.c"
                            {
#line 1889 "ll_backend.string_switch.c"
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_16_16);
                            }
#line 554 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                              {
#line 1896 "ll_backend.string_switch.c"
                                {
#line 1898 "ll_backend.string_switch.c"
                                  ll_backend__string_switch__succeeded = ll_backend__code_info____Unify____position_info_0_0(ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_17_17);
                                }
#line 554 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 554 "string_switch.m"
                                  {
#line 1905 "ll_backend.string_switch.c"
                                    ll_backend__string_switch__TypeInfo_28_28 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
#line 1907 "ll_backend.string_switch.c"
                                    {
#line 1909 "ll_backend.string_switch.c"
                                      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_28_28, ((MR_Box) (ll_backend__string_switch__V_10_10)), ((MR_Box) (ll_backend__string_switch__V_18_18)));
                                    }
#line 554 "string_switch.m"
                                  }
#line 554 "string_switch.m"
                              }
#line 554 "string_switch.m"
                          }
#line 554 "string_switch.m"
                      }
#line 554 "string_switch.m"
                  }
#line 554 "string_switch.m"
              }
#line 554 "string_switch.m"
          }
#line 554 "string_switch.m"
      }
#line 554 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 554 "string_switch.m"
  }
#line 554 "string_switch.m"
}

#line 1024 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
#line 1024 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3)
#line 1024 "string_switch.m"
{
#line 1024 "string_switch.m"
  {
#line 1024 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1024 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_33 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
#line 1024 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_34 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

#line 1024 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_33 == ll_backend__string_switch__CastY_34);
#line 1024 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1959 "ll_backend.string_switch.c"
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 1024 "string_switch.m"
    else
#line 1024 "string_switch.m"
      {
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 8)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 9)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_24_24;

#line 1024 "string_switch.m"
        {
#line 1024 "string_switch.m"
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_24_24, ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_14_14);
        }
#line 2013 "ll_backend.string_switch.c"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_24_24 == (MR_Integer) 0);
#line 1024 "string_switch.m"
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_24_24;
#line 1024 "string_switch.m"
        else
#line 1024 "string_switch.m"
          {
#line 1024 "string_switch.m"
            MR_Word ll_backend__string_switch__V_25_25;

#line 1024 "string_switch.m"
            {
#line 1024 "string_switch.m"
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_25_25, ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_15_15);
            }
#line 2033 "ll_backend.string_switch.c"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_25_25 == (MR_Integer) 0);
#line 1024 "string_switch.m"
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_25_25;
#line 1024 "string_switch.m"
            else
#line 1024 "string_switch.m"
              {
#line 1024 "string_switch.m"
                MR_Word ll_backend__string_switch__V_26_26;

#line 1024 "string_switch.m"
                {
#line 1024 "string_switch.m"
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_26_26, ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_16_16);
                }
#line 2053 "ll_backend.string_switch.c"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_26_26 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_26_26;
#line 1024 "string_switch.m"
                else
#line 1024 "string_switch.m"
                  {
#line 1024 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_27_27;

#line 1024 "string_switch.m"
                    {
#line 1024 "string_switch.m"
                      ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_27_27, ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_17_17);
                    }
#line 2073 "ll_backend.string_switch.c"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_27_27 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_27_27;
#line 1024 "string_switch.m"
                    else
#line 1024 "string_switch.m"
                      {
#line 1024 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_28_28;

#line 1024 "string_switch.m"
                        {
#line 1024 "string_switch.m"
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_28_28, ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_18_18);
                        }
#line 2093 "ll_backend.string_switch.c"
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_28_28 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_28_28;
#line 1024 "string_switch.m"
                        else
#line 1024 "string_switch.m"
                          {
#line 1024 "string_switch.m"
                            MR_Word ll_backend__string_switch__V_29_29;

#line 1024 "string_switch.m"
                            {
#line 1024 "string_switch.m"
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_29_29, ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_19_19);
                            }
#line 2113 "ll_backend.string_switch.c"
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_29_29 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_29_29;
#line 1024 "string_switch.m"
                            else
#line 1024 "string_switch.m"
                              {
#line 1024 "string_switch.m"
                                MR_Word ll_backend__string_switch__V_30_30;

#line 1024 "string_switch.m"
                                {
#line 1024 "string_switch.m"
                                  ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_30_30, ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_20_20);
                                }
#line 2133 "ll_backend.string_switch.c"
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_30_30 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_30_30;
#line 1024 "string_switch.m"
                                else
#line 1024 "string_switch.m"
                                  {
#line 1024 "string_switch.m"
                                    MR_Word ll_backend__string_switch__V_31_31;

#line 1024 "string_switch.m"
                                    {
#line 1024 "string_switch.m"
                                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_31_31, ll_backend__string_switch__V_11_11, ll_backend__string_switch__V_21_21);
                                    }
#line 2153 "ll_backend.string_switch.c"
                                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_31_31 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                                    if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_31_31;
#line 1024 "string_switch.m"
                                    else
#line 1024 "string_switch.m"
                                      {
#line 1024 "string_switch.m"
                                        MR_Word ll_backend__string_switch__V_32_32;

#line 1024 "string_switch.m"
                                        {
#line 1024 "string_switch.m"
                                          ll_backend__code_info____Compare____position_info_0_0(&ll_backend__string_switch__V_32_32, ll_backend__string_switch__V_12_12, ll_backend__string_switch__V_22_22);
                                        }
#line 2173 "ll_backend.string_switch.c"
                                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_32_32 == (MR_Integer) 0);
#line 1024 "string_switch.m"
                                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1024 "string_switch.m"
                                        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_32_32;
#line 1024 "string_switch.m"
                                        else
#line 1024 "string_switch.m"
                                          {
#line 1024 "string_switch.m"
                                            {
#line 1024 "string_switch.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__V_13_13)), ((MR_Box) (ll_backend__string_switch__V_23_23)));
#line 1024 "string_switch.m"
                                              return;
                                            }
#line 1024 "string_switch.m"
                                          }
#line 1024 "string_switch.m"
                                      }
#line 1024 "string_switch.m"
                                  }
#line 1024 "string_switch.m"
                              }
#line 1024 "string_switch.m"
                          }
#line 1024 "string_switch.m"
                      }
#line 1024 "string_switch.m"
                  }
#line 1024 "string_switch.m"
              }
#line 1024 "string_switch.m"
          }
#line 1024 "string_switch.m"
      }
#line 1024 "string_switch.m"
  }
#line 1024 "string_switch.m"
}

#line 1024 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 1024 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2)
#line 1024 "string_switch.m"
{
#line 1024 "string_switch.m"
  {
#line 1024 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1024 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_23 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
#line 1024 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_24 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

#line 1024 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_23 == ll_backend__string_switch__CastY_24);
#line 1024 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
      ll_backend__string_switch__succeeded = MR_TRUE;
#line 1024 "string_switch.m"
    else
#line 1024 "string_switch.m"
      {
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeInfo_34_34;
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 8)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 9)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
#line 1024 "string_switch.m"
        MR_Word ll_backend__string_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));

#line 2288 "ll_backend.string_switch.c"
        {
#line 2290 "ll_backend.string_switch.c"
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_3_3, ll_backend__string_switch__V_13_13);
        }
#line 1024 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
          {
#line 2297 "ll_backend.string_switch.c"
            {
#line 2299 "ll_backend.string_switch.c"
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_14_14);
            }
#line 1024 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
              {
#line 2306 "ll_backend.string_switch.c"
                {
#line 2308 "ll_backend.string_switch.c"
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_15_15);
                }
#line 1024 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                  {
#line 2315 "ll_backend.string_switch.c"
                    {
#line 2317 "ll_backend.string_switch.c"
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_16_16);
                    }
#line 1024 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                      {
#line 2324 "ll_backend.string_switch.c"
                        {
#line 2326 "ll_backend.string_switch.c"
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_17_17);
                        }
#line 1024 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                          {
#line 2333 "ll_backend.string_switch.c"
                            {
#line 2335 "ll_backend.string_switch.c"
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_18_18);
                            }
#line 1024 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                              {
#line 2342 "ll_backend.string_switch.c"
                                {
#line 2344 "ll_backend.string_switch.c"
                                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_19_19);
                                }
#line 1024 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                  {
#line 2351 "ll_backend.string_switch.c"
                                    {
#line 2353 "ll_backend.string_switch.c"
                                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_20_20);
                                    }
#line 1024 "string_switch.m"
                                    if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                      {
#line 2360 "ll_backend.string_switch.c"
                                        {
#line 2362 "ll_backend.string_switch.c"
                                          ll_backend__string_switch__succeeded = ll_backend__code_info____Unify____position_info_0_0(ll_backend__string_switch__V_11_11, ll_backend__string_switch__V_21_21);
                                        }
#line 1024 "string_switch.m"
                                        if (ll_backend__string_switch__succeeded)
#line 1024 "string_switch.m"
                                          {
#line 2369 "ll_backend.string_switch.c"
                                            ll_backend__string_switch__TypeInfo_34_34 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
#line 2371 "ll_backend.string_switch.c"
                                            {
#line 2373 "ll_backend.string_switch.c"
                                              return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_34_34, ((MR_Box) (ll_backend__string_switch__V_12_12)), ((MR_Box) (ll_backend__string_switch__V_22_22)));
                                            }
#line 1024 "string_switch.m"
                                          }
#line 1024 "string_switch.m"
                                      }
#line 1024 "string_switch.m"
                                  }
#line 1024 "string_switch.m"
                              }
#line 1024 "string_switch.m"
                          }
#line 1024 "string_switch.m"
                      }
#line 1024 "string_switch.m"
                  }
#line 1024 "string_switch.m"
              }
#line 1024 "string_switch.m"
          }
#line 1024 "string_switch.m"
      }
#line 1024 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 1024 "string_switch.m"
  }
#line 1024 "string_switch.m"
}

#line 1080 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_8,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_9,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_10,
#line 1080 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_11,
#line 1080 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_12,
#line 1080 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_13,
#line 1080 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_14)
#line 1080 "string_switch.m"
{
#line 1085 "string_switch.m"
  {
#line 1085 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__LoReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 0)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__HiReg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 1)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 2)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__ResultReg_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 3)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 4)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__GtEqLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 5)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__EqLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 6)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 7)));
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 9)));
#line 1085 "string_switch.m"
    MR_Integer ll_backend__string_switch__MaxIndex_25 = (ll_backend__string_switch__TableSize_12 - (MR_Integer) 1);
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_27_27;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_28_28;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_29_29;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_30_30;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_35_35;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_36_36;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_37_37;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_38_38;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_39_39;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_41_41;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_42_42;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_43_43;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_45_45;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_46_46;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_47_47;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_48_48;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_50_50;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_51_51;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_52_52;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_54_54;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_55_55;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_56_56;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_57_57;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_59_59;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_67_67;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_68_68;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_69_69;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_70_70;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_72_72;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_73_73;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_74_74;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_76_76;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_78_78;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_80_80;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_81_81;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_83_83;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_85_85;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_111_111;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_112_112;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_119_119;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_121_121;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_122_122;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_123_123;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_124_124;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_131_131;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_132_132;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_136_136;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_137_137;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_138_138;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_141_141;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_142_142;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_143_143;
#line 1085 "string_switch.m"
    MR_Word ll_backend__string_switch__V_144_144;
#line 1086 "string_switch.m"
    MR_Word ll_backend__string_switch___BranchStart_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 8)));

#line 1091 "string_switch.m"
    {
#line 1091 "string_switch.m"
      ll_backend__string_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 2) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1091 "string_switch.m"
    }
#line 1091 "string_switch.m"
    {
#line 1091 "string_switch.m"
      ll_backend__string_switch__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_29_29, 0) = ((MR_Box) (ll_backend__string_switch__V_30_30));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_29_29, 1) = ((MR_Box) ((MR_String) ""));
#line 1091 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_39_39, 0) = ((MR_Box) (ll_backend__string_switch__MaxIndex_25));
#line 1092 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_38_38, 1) = ((MR_Box) (ll_backend__string_switch__V_39_39));
#line 1092 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 2) = ((MR_Box) (ll_backend__string_switch__V_38_38));
#line 1092 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_36_36, 0) = ((MR_Box) (ll_backend__string_switch__V_37_37));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_36_36, 1) = ((MR_Box) ((MR_String) ""));
#line 1092 "string_switch.m"
    }
#line 1093 "string_switch.m"
    {
#line 1093 "string_switch.m"
      ll_backend__string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1093 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
#line 1093 "string_switch.m"
    }
#line 1093 "string_switch.m"
    {
#line 1093 "string_switch.m"
      ll_backend__string_switch__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_42_42, 0) = ((MR_Box) (ll_backend__string_switch__V_43_43));
#line 1093 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_42_42, 1) = ((MR_Box) ((MR_String) "begin table search loop, nofulljump"));
#line 1093 "string_switch.m"
    }
#line 1095 "string_switch.m"
    {
#line 1095 "string_switch.m"
      ll_backend__string_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_50_50, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1095 "string_switch.m"
    }
#line 1095 "string_switch.m"
    {
#line 1095 "string_switch.m"
      ll_backend__string_switch__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_51_51, 0) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1095 "string_switch.m"
    }
#line 1095 "string_switch.m"
    {
#line 1095 "string_switch.m"
      ll_backend__string_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 2) = ((MR_Box) (ll_backend__string_switch__V_50_50));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 3) = ((MR_Box) (ll_backend__string_switch__V_51_51));
#line 1095 "string_switch.m"
    }
#line 1096 "string_switch.m"
    {
#line 1096 "string_switch.m"
      ll_backend__string_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_52_52, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
#line 1096 "string_switch.m"
    }
#line 1095 "string_switch.m"
    {
#line 1095 "string_switch.m"
      ll_backend__string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 1) = ((MR_Box) (ll_backend__string_switch__V_48_48));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 2) = ((MR_Box) (ll_backend__string_switch__V_52_52));
#line 1095 "string_switch.m"
    }
#line 1095 "string_switch.m"
    {
#line 1095 "string_switch.m"
      ll_backend__string_switch__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_46_46, 0) = ((MR_Box) (ll_backend__string_switch__V_47_47));
#line 1095 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_46_46, 1) = ((MR_Box) ((MR_String) "have we searched all of the table\?"));
#line 1095 "string_switch.m"
    }
#line 1100 "string_switch.m"
    {
#line 1100 "string_switch.m"
      ll_backend__string_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1100 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 2) = ((MR_Box) (ll_backend__string_switch__V_50_50));
#line 1100 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 3) = ((MR_Box) (ll_backend__string_switch__V_51_51));
#line 1100 "string_switch.m"
    }
#line 1099 "string_switch.m"
    {
#line 1099 "string_switch.m"
      ll_backend__string_switch__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 2) = ((MR_Box) (ll_backend__string_switch__V_59_59));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
#line 1099 "string_switch.m"
    }
#line 1098 "string_switch.m"
    {
#line 1098 "string_switch.m"
      ll_backend__string_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 1) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 2) = ((MR_Box) (ll_backend__string_switch__V_57_57));
#line 1098 "string_switch.m"
    }
#line 1098 "string_switch.m"
    {
#line 1098 "string_switch.m"
      ll_backend__string_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, 0) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, 1) = ((MR_Box) ((MR_String) ""));
#line 1098 "string_switch.m"
    }
#line 1105 "string_switch.m"
    {
#line 1105 "string_switch.m"
      ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_11));
#line 1105 "string_switch.m"
    }
#line 1108 "string_switch.m"
    {
#line 1108 "string_switch.m"
      ll_backend__string_switch__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_76_76, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
#line 1108 "string_switch.m"
    }
#line 1109 "string_switch.m"
    {
#line 1109 "string_switch.m"
      ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_13));
#line 1109 "string_switch.m"
    }
#line 1109 "string_switch.m"
    {
#line 1109 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 1109 "string_switch.m"
    }
#line 1107 "string_switch.m"
    {
#line 1107 "string_switch.m"
      ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 3) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 1107 "string_switch.m"
    }
#line 1105 "string_switch.m"
    {
#line 1105 "string_switch.m"
      ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_10));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 3) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 1105 "string_switch.m"
    }
#line 1103 "string_switch.m"
    {
#line 1103 "string_switch.m"
      ll_backend__string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1103 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21))));
#line 1103 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_9));
#line 1103 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 3) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 1103 "string_switch.m"
    }
#line 1102 "string_switch.m"
    {
#line 1102 "string_switch.m"
      ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (ll_backend__string_switch__V_70_70));
#line 1102 "string_switch.m"
    }
#line 1102 "string_switch.m"
    {
#line 1102 "string_switch.m"
      ll_backend__string_switch__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 0) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 1) = ((MR_Box) ((MR_String) "compare with the middle element"));
#line 1102 "string_switch.m"
    }
#line 1113 "string_switch.m"
    {
#line 1113 "string_switch.m"
      ll_backend__string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
#line 1113 "string_switch.m"
    }
#line 1113 "string_switch.m"
    {
#line 1113 "string_switch.m"
      ll_backend__string_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 2) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 3) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1113 "string_switch.m"
    }
#line 1114 "string_switch.m"
    {
#line 1114 "string_switch.m"
      ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
#line 1114 "string_switch.m"
    }
#line 1112 "string_switch.m"
    {
#line 1112 "string_switch.m"
      ll_backend__string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 1) = ((MR_Box) (ll_backend__string_switch__V_83_83));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 2) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 1112 "string_switch.m"
    }
#line 1112 "string_switch.m"
    {
#line 1112 "string_switch.m"
      ll_backend__string_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 0) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 1) = ((MR_Box) ((MR_String) "branch away unless key is in lo half"));
#line 1112 "string_switch.m"
    }
#line 1117 "string_switch.m"
    ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20]);
#line 1117 "string_switch.m"
    {
#line 1117 "string_switch.m"
      ll_backend__string_switch__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 3) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 1117 "string_switch.m"
    }
#line 1116 "string_switch.m"
    {
#line 1116 "string_switch.m"
      ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 2) = ((MR_Box) (ll_backend__string_switch__V_94_94));
#line 1116 "string_switch.m"
    }
#line 1116 "string_switch.m"
    {
#line 1116 "string_switch.m"
      ll_backend__string_switch__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_92_92, 0) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
#line 1116 "string_switch.m"
    }
#line 1118 "string_switch.m"
    {
#line 1118 "string_switch.m"
      ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
#line 1118 "string_switch.m"
    }
#line 1118 "string_switch.m"
    {
#line 1118 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 1118 "string_switch.m"
    }
#line 1118 "string_switch.m"
    {
#line 1118 "string_switch.m"
      ll_backend__string_switch__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 1) = ((MR_Box) ((MR_String) "go back to search the remaining lo half"));
#line 1118 "string_switch.m"
    }
#line 1120 "string_switch.m"
    {
#line 1120 "string_switch.m"
      ll_backend__string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 1) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
#line 1120 "string_switch.m"
    }
#line 1120 "string_switch.m"
    {
#line 1120 "string_switch.m"
      ll_backend__string_switch__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) (ll_backend__string_switch__V_108_108));
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) ((MR_String) "nofulljump"));
#line 1120 "string_switch.m"
    }
#line 1123 "string_switch.m"
    {
#line 1123 "string_switch.m"
      ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1123 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 1123 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 2) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 1123 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 3) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1123 "string_switch.m"
    }
#line 1124 "string_switch.m"
    {
#line 1124 "string_switch.m"
      ll_backend__string_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_119_119, 0) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
#line 1124 "string_switch.m"
    }
#line 1122 "string_switch.m"
    {
#line 1122 "string_switch.m"
      ll_backend__string_switch__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1122 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 1) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 1122 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 2) = ((MR_Box) (ll_backend__string_switch__V_119_119));
#line 1122 "string_switch.m"
    }
#line 1122 "string_switch.m"
    {
#line 1122 "string_switch.m"
      ll_backend__string_switch__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 0) = ((MR_Box) (ll_backend__string_switch__V_112_112));
#line 1122 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 1) = ((MR_Box) ((MR_String) "branch away unless key is in hi half"));
#line 1122 "string_switch.m"
    }
#line 1127 "string_switch.m"
    {
#line 1127 "string_switch.m"
      ll_backend__string_switch__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 3) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 1127 "string_switch.m"
    }
#line 1126 "string_switch.m"
    {
#line 1126 "string_switch.m"
      ll_backend__string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1126 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1126 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 2) = ((MR_Box) (ll_backend__string_switch__V_124_124));
#line 1126 "string_switch.m"
    }
#line 1126 "string_switch.m"
    {
#line 1126 "string_switch.m"
      ll_backend__string_switch__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 0) = ((MR_Box) (ll_backend__string_switch__V_123_123));
#line 1126 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 1) = ((MR_Box) ((MR_String) ""));
#line 1126 "string_switch.m"
    }
#line 1128 "string_switch.m"
    {
#line 1128 "string_switch.m"
      ll_backend__string_switch__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 0) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 1128 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 1) = ((MR_Box) ((MR_String) "go back to search the remaining hi half"));
#line 1128 "string_switch.m"
    }
#line 1130 "string_switch.m"
    {
#line 1130 "string_switch.m"
      ll_backend__string_switch__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1130 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_138_138, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
#line 1130 "string_switch.m"
    }
#line 1130 "string_switch.m"
    {
#line 1130 "string_switch.m"
      ll_backend__string_switch__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_137_137, 0) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 1130 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_137_137, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 1130 "string_switch.m"
    }
#line 1132 "string_switch.m"
    {
#line 1132 "string_switch.m"
      ll_backend__string_switch__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_136_136, 0) = ((MR_Box) (ll_backend__string_switch__V_137_137));
#line 1132 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "string_switch.m"
    }
#line 1129 "string_switch.m"
    {
#line 1129 "string_switch.m"
      ll_backend__string_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_131_131, 0) = ((MR_Box) (ll_backend__string_switch__V_132_132));
#line 1129 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_131_131, 1) = ((MR_Box) (ll_backend__string_switch__V_136_136));
#line 1129 "string_switch.m"
    }
#line 1127 "string_switch.m"
    {
#line 1127 "string_switch.m"
      ll_backend__string_switch__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_121_121, 0) = ((MR_Box) (ll_backend__string_switch__V_122_122));
#line 1127 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_121_121, 1) = ((MR_Box) (ll_backend__string_switch__V_131_131));
#line 1127 "string_switch.m"
    }
#line 1125 "string_switch.m"
    {
#line 1125 "string_switch.m"
      ll_backend__string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 1125 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 1) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 1125 "string_switch.m"
    }
#line 1120 "string_switch.m"
    {
#line 1120 "string_switch.m"
      ll_backend__string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (ll_backend__string_switch__V_107_107));
#line 1120 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 1120 "string_switch.m"
    }
#line 1119 "string_switch.m"
    {
#line 1119 "string_switch.m"
      ll_backend__string_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_101_101, 0) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_101_101, 1) = ((MR_Box) (ll_backend__string_switch__V_106_106));
#line 1119 "string_switch.m"
    }
#line 1117 "string_switch.m"
    {
#line 1117 "string_switch.m"
      ll_backend__string_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__V_92_92));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 1) = ((MR_Box) (ll_backend__string_switch__V_101_101));
#line 1117 "string_switch.m"
    }
#line 1115 "string_switch.m"
    {
#line 1115 "string_switch.m"
      ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (ll_backend__string_switch__V_81_81));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 1115 "string_switch.m"
    }
#line 1110 "string_switch.m"
    {
#line 1110 "string_switch.m"
      ll_backend__string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_67_67, 0) = ((MR_Box) (ll_backend__string_switch__V_68_68));
#line 1110 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_67_67, 1) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 1110 "string_switch.m"
    }
#line 1101 "string_switch.m"
    {
#line 1101 "string_switch.m"
      ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (ll_backend__string_switch__V_55_55));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 1) = ((MR_Box) (ll_backend__string_switch__V_67_67));
#line 1101 "string_switch.m"
    }
#line 1097 "string_switch.m"
    {
#line 1097 "string_switch.m"
      ll_backend__string_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_45_45, 0) = ((MR_Box) (ll_backend__string_switch__V_46_46));
#line 1097 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_45_45, 1) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 1097 "string_switch.m"
    }
#line 1094 "string_switch.m"
    {
#line 1094 "string_switch.m"
      ll_backend__string_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_41_41, 0) = ((MR_Box) (ll_backend__string_switch__V_42_42));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_41_41, 1) = ((MR_Box) (ll_backend__string_switch__V_45_45));
#line 1094 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (ll_backend__string_switch__V_36_36));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 1) = ((MR_Box) (ll_backend__string_switch__V_41_41));
#line 1092 "string_switch.m"
    }
#line 1091 "string_switch.m"
    {
#line 1091 "string_switch.m"
      ll_backend__string_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_28_28, 0) = ((MR_Box) (ll_backend__string_switch__V_29_29));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_28_28, 1) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 1091 "string_switch.m"
    }
#line 1090 "string_switch.m"
    {
#line 1090 "string_switch.m"
      ll_backend__string_switch__V_27_27 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__V_28_28);
    }
#line 1135 "string_switch.m"
    {
#line 1135 "string_switch.m"
      ll_backend__string_switch__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1135 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_144_144, 1) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
#line 1135 "string_switch.m"
    }
#line 1135 "string_switch.m"
    {
#line 1135 "string_switch.m"
      ll_backend__string_switch__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_143_143, 0) = ((MR_Box) (ll_backend__string_switch__V_144_144));
#line 1135 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_143_143, 1) = ((MR_Box) ((MR_String) "we found the key"));
#line 1135 "string_switch.m"
    }
#line 1134 "string_switch.m"
    {
#line 1134 "string_switch.m"
      ll_backend__string_switch__V_142_142 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ((MR_Box) (ll_backend__string_switch__V_143_143)));
    }
#line 1133 "string_switch.m"
    {
#line 1133 "string_switch.m"
      ll_backend__string_switch__V_141_141 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__FailCode_24, ll_backend__string_switch__V_142_142);
    }
#line 1132 "string_switch.m"
    {
#line 1132 "string_switch.m"
      *ll_backend__string_switch__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__V_27_27, ll_backend__string_switch__V_141_141);
    }
#line 1085 "string_switch.m"
  }
#line 1080 "string_switch.m"
}

#line 1040 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_4_p_0(
#line 1040 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_5,
#line 1040 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_6,
#line 1040 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
#line 1040 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19)
#line 1040 "string_switch.m"
{
#line 1043 "string_switch.m"
  {
#line 1043 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__LoReg_8;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__HiReg_9;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_10;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__ResultReg_11;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_12;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__GtEqLabel_13;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__EqLabel_14;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_15;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_16;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_17;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_21_21;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_23_23;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_25_25;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_27_27;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_28_28;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_29_29;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_30_30;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_31_31;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_32_32;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_33_33;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_34_34;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_35_35;
#line 1043 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_36_36;

#line 1052 "string_switch.m"
    {
#line 1052 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__LoReg_8, ll_backend__string_switch__STATE_VARIABLE_CI_0_18, &ll_backend__string_switch__STATE_VARIABLE_CI_21_21);
    }
#line 1053 "string_switch.m"
    {
#line 1053 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__HiReg_9, ll_backend__string_switch__STATE_VARIABLE_CI_21_21, &ll_backend__string_switch__STATE_VARIABLE_CI_23_23);
    }
#line 1054 "string_switch.m"
    {
#line 1054 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__MidReg_10, ll_backend__string_switch__STATE_VARIABLE_CI_23_23, &ll_backend__string_switch__STATE_VARIABLE_CI_25_25);
    }
#line 1055 "string_switch.m"
    {
#line 1055 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__ResultReg_11, ll_backend__string_switch__STATE_VARIABLE_CI_25_25, &ll_backend__string_switch__STATE_VARIABLE_CI_27_27);
    }
#line 1056 "string_switch.m"
    {
#line 1056 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__LoReg_8, ll_backend__string_switch__STATE_VARIABLE_CI_27_27, &ll_backend__string_switch__STATE_VARIABLE_CI_28_28);
    }
#line 1057 "string_switch.m"
    {
#line 1057 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__HiReg_9, ll_backend__string_switch__STATE_VARIABLE_CI_28_28, &ll_backend__string_switch__STATE_VARIABLE_CI_29_29);
    }
#line 1058 "string_switch.m"
    {
#line 1058 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__MidReg_10, ll_backend__string_switch__STATE_VARIABLE_CI_29_29, &ll_backend__string_switch__STATE_VARIABLE_CI_30_30);
    }
#line 1059 "string_switch.m"
    {
#line 1059 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__ResultReg_11, ll_backend__string_switch__STATE_VARIABLE_CI_30_30, &ll_backend__string_switch__STATE_VARIABLE_CI_31_31);
    }
#line 1061 "string_switch.m"
    {
#line 1061 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_12, ll_backend__string_switch__STATE_VARIABLE_CI_31_31, &ll_backend__string_switch__STATE_VARIABLE_CI_32_32);
    }
#line 1062 "string_switch.m"
    {
#line 1062 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__GtEqLabel_13, ll_backend__string_switch__STATE_VARIABLE_CI_32_32, &ll_backend__string_switch__STATE_VARIABLE_CI_33_33);
    }
#line 1063 "string_switch.m"
    {
#line 1063 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__EqLabel_14, ll_backend__string_switch__STATE_VARIABLE_CI_33_33, &ll_backend__string_switch__STATE_VARIABLE_CI_34_34);
    }
#line 1064 "string_switch.m"
    {
#line 1064 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_15, ll_backend__string_switch__STATE_VARIABLE_CI_34_34, &ll_backend__string_switch__STATE_VARIABLE_CI_35_35);
    }
#line 1068 "string_switch.m"
    {
#line 1068 "string_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_35_35, &ll_backend__string_switch__BranchStart_16);
    }
#line 1145 "string_switch.m"
    if ((ll_backend__string_switch__CanFail_5 == (MR_Integer) 0))
#line 1146 "string_switch.m"
      {
#line 1146 "string_switch.m"
        ll_backend__code_info__generate_failure_3_p_0(&ll_backend__string_switch__FailCode_17, ll_backend__string_switch__STATE_VARIABLE_CI_35_35, &ll_backend__string_switch__STATE_VARIABLE_CI_36_36);
      }
#line 1145 "string_switch.m"
    else
#line 1148 "string_switch.m"
      {
#line 1149 "string_switch.m"
        {
#line 1149 "string_switch.m"
          ll_backend__string_switch__FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[25])));
        }
#line 1151 "string_switch.m"
        ll_backend__string_switch__STATE_VARIABLE_CI_36_36 = ll_backend__string_switch__STATE_VARIABLE_CI_35_35;
#line 1148 "string_switch.m"
      }
#line 1070 "string_switch.m"
    {
#line 1070 "string_switch.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__string_switch__BranchStart_16, ll_backend__string_switch__STATE_VARIABLE_CI_36_36, ll_backend__string_switch__STATE_VARIABLE_CI_19);
    }
#line 1072 "string_switch.m"
    {
#line 1072 "string_switch.m"
      MR_Word base;
#line 1072 "string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "string_switch.m"
      *ll_backend__string_switch__Info_6 = base;
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_8));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_9));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__MidReg_10));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__ResultReg_11));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_12));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_13));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__EqLabel_14));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailLabel_15));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__string_switch__BranchStart_16));
#line 1072 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__string_switch__FailCode_17));
#line 1072 "string_switch.m"
    }
#line 1043 "string_switch.m"
  }
#line 1040 "string_switch.m"
}

#line 984 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
#line 984 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
#line 984 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
#line 984 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
#line 984 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
#line 984 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
#line 984 "string_switch.m"
  MR_Integer * ll_backend__string_switch__HeadVar__11_11)
#line 984 "string_switch.m"
{
#line 990 "string_switch.m"
  while (MR_TRUE)
#line 990 "string_switch.m"
    {
#line 990 "string_switch.m"
      /* tailcall optimized into a loop */
#line 990 "string_switch.m"
      {
#line 990 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 990 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "string_switch.m"
          {
#line 992 "string_switch.m"
            *ll_backend__string_switch__HeadVar__11_11 = ll_backend__string_switch__HeadVar__10_10;
#line 992 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
#line 991 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
#line 991 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3;
#line 990 "string_switch.m"
          }
#line 990 "string_switch.m"
        else
#line 995 "string_switch.m"
          {
#line 995 "string_switch.m"
            MR_String ll_backend__string_switch__Str_26;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__Soln_27;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__StrSolns_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__StrRval_35;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__MainRow_38;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__V_56_56;
#line 995 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;
#line 995 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
#line 995 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
#line 995 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;

#line 993 "string_switch.m"
            ll_backend__string_switch__Str_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, (MR_Integer) 0)));
#line 993 "string_switch.m"
            ll_backend__string_switch__Soln_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, (MR_Integer) 1)));
#line 996 "string_switch.m"
            {
#line 996 "string_switch.m"
              ll_backend__string_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 996 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 1) = ((MR_Box) (ll_backend__string_switch__Str_26));
#line 996 "string_switch.m"
            }
#line 996 "string_switch.m"
            {
#line 996 "string_switch.m"
              ll_backend__string_switch__StrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 996 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 1) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 996 "string_switch.m"
            }
#line 1004 "string_switch.m"
            if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_27)) == (MR_mktag((MR_Integer) 0))))
#line 998 "string_switch.m"
              {
#line 998 "string_switch.m"
                MR_Word ll_backend__string_switch__OutRvals_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
#line 998 "string_switch.m"
                MR_Word ll_backend__string_switch__ZeroRval_37;
#line 998 "string_switch.m"
                MR_Word ll_backend__string_switch__V_73_73;
#line 998 "string_switch.m"
                MR_Word ll_backend__string_switch__V_74_74;

#line 999 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 + (MR_Integer) 1);
#line 1000 "string_switch.m"
                ll_backend__string_switch__ZeroRval_37 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 1003 "string_switch.m"
                {
#line 1003 "string_switch.m"
                  ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_36));
#line 1003 "string_switch.m"
                }
#line 1003 "string_switch.m"
                {
#line 1003 "string_switch.m"
                  ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 1) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 1003 "string_switch.m"
                }
#line 1003 "string_switch.m"
                {
#line 1003 "string_switch.m"
                  ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
#line 1003 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 1003 "string_switch.m"
                }
#line 1003 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = ll_backend__string_switch__HeadVar__5_5;
#line 1003 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
#line 1003 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = ll_backend__string_switch__HeadVar__10_10;
#line 998 "string_switch.m"
              }
#line 1004 "string_switch.m"
            else
#line 1005 "string_switch.m"
              {
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__TypeInfo_80_80;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__FirstSolnRvals_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__LaterSolns_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 1)));
#line 1005 "string_switch.m"
                MR_Integer ll_backend__string_switch__NumLaterSolns_41;
#line 1005 "string_switch.m"
                MR_Integer ll_backend__string_switch__FirstRowOffset_42;
#line 1005 "string_switch.m"
                MR_Integer ll_backend__string_switch__LastRowOffset_43;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__FirstRowRval_44;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__LastRowRval_45;
#line 1005 "string_switch.m"
                MR_Integer ll_backend__string_switch__V_59_59;
#line 1005 "string_switch.m"
                MR_Integer ll_backend__string_switch__V_60_60;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__V_62_62;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__V_63_63;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__V_64_64;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__V_65_65;
#line 1005 "string_switch.m"
                MR_Word ll_backend__string_switch__V_68_68;

#line 1006 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = (ll_backend__string_switch__HeadVar__10_10 + (MR_Integer) 1);
#line 3702 "ll_backend.string_switch.c"
                ll_backend__string_switch__TypeInfo_80_80 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 1007 "string_switch.m"
                {
#line 1007 "string_switch.m"
                  mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40, &ll_backend__string_switch__NumLaterSolns_41);
                }
#line 1008 "string_switch.m"
                ll_backend__string_switch__FirstRowOffset_42 = (ll_backend__string_switch__HeadVar__5_5 * ll_backend__string_switch__HeadVar__2_2);
#line 1009 "string_switch.m"
                ll_backend__string_switch__V_60_60 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
#line 1009 "string_switch.m"
                ll_backend__string_switch__V_59_59 = (ll_backend__string_switch__V_60_60 - (MR_Integer) 1);
#line 1009 "string_switch.m"
                ll_backend__string_switch__LastRowOffset_43 = (ll_backend__string_switch__V_59_59 * ll_backend__string_switch__HeadVar__2_2);
#line 1010 "string_switch.m"
                {
#line 1010 "string_switch.m"
                  ll_backend__string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_42));
#line 1010 "string_switch.m"
                }
#line 1010 "string_switch.m"
                {
#line 1010 "string_switch.m"
                  ll_backend__string_switch__FirstRowRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1010 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 1) = ((MR_Box) (ll_backend__string_switch__V_62_62));
#line 1010 "string_switch.m"
                }
#line 1011 "string_switch.m"
                {
#line 1011 "string_switch.m"
                  ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_43));
#line 1011 "string_switch.m"
                }
#line 1011 "string_switch.m"
                {
#line 1011 "string_switch.m"
                  ll_backend__string_switch__LastRowRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1011 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 1) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 1011 "string_switch.m"
                }
#line 1012 "string_switch.m"
                {
#line 1012 "string_switch.m"
                  ll_backend__string_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_65_65, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_45));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_65_65, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_39));
#line 1012 "string_switch.m"
                }
#line 1012 "string_switch.m"
                {
#line 1012 "string_switch.m"
                  ll_backend__string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_64_64, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_44));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_64_64, 1) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 1012 "string_switch.m"
                }
#line 1012 "string_switch.m"
                {
#line 1012 "string_switch.m"
                  ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
#line 1012 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__V_64_64));
#line 1012 "string_switch.m"
                }
#line 1013 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
#line 1014 "string_switch.m"
                {
#line 1014 "string_switch.m"
                  ll_backend__string_switch__V_68_68 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40);
                }
#line 1014 "string_switch.m"
                {
#line 1014 "string_switch.m"
                  ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6, ll_backend__string_switch__V_68_68);
                }
#line 1014 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
#line 1005 "string_switch.m"
              }
#line 1016 "string_switch.m"
            {
#line 1016 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_38));
#line 1016 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3));
#line 1016 "string_switch.m"
            }
#line 1017 "string_switch.m"
            /* direct tailcall eliminated */
#line 1017 "string_switch.m"
            {
#line 1017 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__StrSolns_28;
#line 1017 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_3 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;
#line 1017 "string_switch.m"
              MR_Integer ll_backend__string_switch__HeadVar__5__tmp_copy_5 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
#line 1017 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_6 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
#line 1017 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_8 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
#line 1017 "string_switch.m"
              MR_Integer ll_backend__string_switch__HeadVar__10__tmp_copy_10 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;

#line 1017 "string_switch.m"
              ll_backend__string_switch__HeadVar__10_10 = ll_backend__string_switch__HeadVar__10__tmp_copy_10;
#line 1017 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_8;
#line 1017 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_6;
#line 1017 "string_switch.m"
              ll_backend__string_switch__HeadVar__5_5 = ll_backend__string_switch__HeadVar__5__tmp_copy_5;
#line 1017 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_3;
#line 1017 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 1017 "string_switch.m"
            }
#line 1017 "string_switch.m"
            continue;
#line 995 "string_switch.m"
          }
#line 990 "string_switch.m"
      }
#line 990 "string_switch.m"
      break;
#line 990 "string_switch.m"
    }
#line 984 "string_switch.m"
}

#line 933 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_3(
#line 933 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 933 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 933 "string_switch.m"
{
#line 933 "string_switch.m"
  {
#line 933 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 933 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 933 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 933 "string_switch.m"
    {
#line 933 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 933 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 933 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 933 "string_switch.m"
  }
#line 933 "string_switch.m"
}

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_2(
#line 916 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 916 "string_switch.m"
{
#line 916 "string_switch.m"
  {
#line 916 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 916 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
#line 916 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 916 "string_switch.m"
  }
#line 916 "string_switch.m"
}

#line 916 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_1(
#line 916 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 916 "string_switch.m"
{
#line 916 "string_switch.m"
  {
#line 916 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 916 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      return ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__916__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
#line 916 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 916 "string_switch.m"
  }
#line 916 "string_switch.m"
}

#line 885 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0(
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_16,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_17,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_18,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_19,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_21,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_22,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_23,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_24,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_25,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_62,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_63,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_27,
#line 885 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_64,
#line 885 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_65)
#line 885 "string_switch.m"
{
#line 894 "string_switch.m"
  {
#line 894 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_137_137;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_142_142;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_146_146;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_147_147;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_29;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_30;
#line 894 "string_switch.m"
    MR_Integer ll_backend__string_switch__MainTableSize_31;
#line 894 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_32;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_33;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_34;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_35;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__AddTrailOps_37;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyLaterSolnRow_39;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_40;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__RevMainRows_41;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_42;
#line 894 "string_switch.m"
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_43;
#line 894 "string_switch.m"
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_44;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRows_45;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArray_46;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_47;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_48;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedKinds_49;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRowTypes_50;
#line 894 "string_switch.m"
    MR_Integer ll_backend__string_switch__MainNumColumns_51;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddr_52;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddrRval_53;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddr_54;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_55;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__BaseReg_56;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_57;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_58;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_59;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__LookupResultsCode_60;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_61;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_66_66;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_73_73;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_75_75;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_81_81;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_87_87;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_95_95;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_99_99;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_102_102;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_106_106;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_109_109;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_115_115;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_116_116;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_117_117;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_122_122;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_123_123;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_125_125;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_126_126;
#line 894 "string_switch.m"
    MR_Word ll_backend__string_switch__V_127_127;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_128_128;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_129_129;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_130_130;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_131_131;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_132_132;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_133_133;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_134_134;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_135_135;
#line 959 "string_switch.m"
    MR_Word ll_backend__string_switch__V_136_136;

#line 900 "string_switch.m"
    {
#line 900 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_4_p_0(ll_backend__string_switch__CanFail_23, &ll_backend__string_switch__BinarySwitchInfo_29, ll_backend__string_switch__STATE_VARIABLE_CI_0_64, &ll_backend__string_switch__STATE_VARIABLE_CI_66_66);
    }
#line 4128 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 901 "string_switch.m"
    {
#line 901 "string_switch.m"
      ll_backend__string_switch__CommentCode_30 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[27])));
    }
#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[4], ll_backend__string_switch__CaseSolns_17, &ll_backend__string_switch__MainTableSize_31);
    }
#line 906 "string_switch.m"
    {
#line 906 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__OutVars_20, &ll_backend__string_switch__NumOutVars_32);
    }
#line 909 "string_switch.m"
    {
#line 909 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_32, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_33);
    }
#line 911 "string_switch.m"
    {
#line 911 "string_switch.m"
      ll_backend__string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_75_75, 0) = ((MR_Box) ((MR_Integer) 1));
#line 911 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_75_75, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_33));
#line 911 "string_switch.m"
    }
#line 910 "string_switch.m"
    {
#line 910 "string_switch.m"
      ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) ((MR_Integer) 1));
#line 910 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 1) = ((MR_Box) (ll_backend__string_switch__V_75_75));
#line 910 "string_switch.m"
    }
#line 910 "string_switch.m"
    {
#line 910 "string_switch.m"
      ll_backend__string_switch__ArrayElemTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_34, 0) = ((MR_Box) ((MR_Integer) 0));
#line 910 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_34, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 910 "string_switch.m"
    }
#line 912 "string_switch.m"
    {
#line 912 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_35, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_34));
#line 912 "string_switch.m"
    }
#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      ll_backend__string_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[1]));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_1));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_20));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "string_switch.m"
    }
#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_7[0]));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0_2));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 916 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 3) = ((MR_Box) (ll_backend__string_switch__V_81_81));
#line 916 "string_switch.m"
    }
#line 916 "string_switch.m"
    {
#line 916 "string_switch.m"
      mercury__require__expect_4_p_0(ll_backend__string_switch__V_77_77, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/15", (MR_String) "no OutVars");
    }
#line 921 "string_switch.m"
    if ((ll_backend__string_switch__GoalsMayModifyTrail_19 == (MR_Integer) 0))
#line 923 "string_switch.m"
      ll_backend__string_switch__AddTrailOps_37 = (MR_Integer) 1;
#line 921 "string_switch.m"
    else
#line 919 "string_switch.m"
      {
#line 919 "string_switch.m"
        ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_66_66, &ll_backend__string_switch__AddTrailOps_37);
      }
#line 4234 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 933 "string_switch.m"
    {
#line 933 "string_switch.m"
      ll_backend__string_switch__DummyLaterSolnRow_39 = mercury__list__map_2_f_0(ll_backend__string_switch__TypeCtorInfo_142_142, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[9], ll_backend__string_switch__OutTypes_21);
    }
#line 4241 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_146_146 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 934 "string_switch.m"
    {
#line 934 "string_switch.m"
      ll_backend__string_switch__LaterSolnArrayCord0_40 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_146_146, ((MR_Box) (ll_backend__string_switch__DummyLaterSolnRow_39)));
    }
#line 935 "string_switch.m"
    {
#line 935 "string_switch.m"
      ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(ll_backend__string_switch__CaseSolns_17, ll_backend__string_switch__NumOutVars_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_41, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_40, &ll_backend__string_switch__LaterSolnArrayCord_42, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_43, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_44);
    }
#line 939 "string_switch.m"
    {
#line 939 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_146_146, ll_backend__string_switch__RevMainRows_41, &ll_backend__string_switch__MainRows_45);
    }
#line 940 "string_switch.m"
    {
#line 940 "string_switch.m"
      ll_backend__string_switch__LaterSolnArray_46 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_146_146, ll_backend__string_switch__LaterSolnArrayCord_42);
    }
#line 942 "string_switch.m"
    {
#line 942 "string_switch.m"
      ll_backend__string_switch__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_88_88, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_43));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_88_88, 1) = ((MR_Box) ((MR_Integer) 1));
#line 942 "string_switch.m"
    }
#line 943 "string_switch.m"
    {
#line 943 "string_switch.m"
      ll_backend__string_switch__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_44));
#line 943 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_91_91, 1) = ((MR_Box) ((MR_Integer) 2));
#line 943 "string_switch.m"
    }
#line 943 "string_switch.m"
    {
#line 943 "string_switch.m"
      ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 943 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "string_switch.m"
    }
#line 942 "string_switch.m"
    {
#line 942 "string_switch.m"
      ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (ll_backend__string_switch__V_88_88));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 942 "string_switch.m"
    }
#line 4303 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_147_147 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
#line 942 "string_switch.m"
    {
#line 942 "string_switch.m"
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_147_147, ll_backend__string_switch__V_87_87, &ll_backend__string_switch__AscendingSortedCountKinds_47);
    }
#line 945 "string_switch.m"
    {
#line 945 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_147_147, ll_backend__string_switch__AscendingSortedCountKinds_47, &ll_backend__string_switch__DescendingSortedCountKinds_48);
    }
#line 946 "string_switch.m"
    {
#line 946 "string_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_48, &ll_backend__string_switch__DescendingSortedKinds_49);
    }
#line 948 "string_switch.m"
    {
#line 948 "string_switch.m"
      ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 0) = ((MR_Box) ((MR_Integer) 7));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_21));
#line 948 "string_switch.m"
    }
#line 948 "string_switch.m"
    {
#line 948 "string_switch.m"
      ll_backend__string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_95_95, 0) = ((MR_Box) ((MR_Integer) 7));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_95_95, 1) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 948 "string_switch.m"
    }
#line 948 "string_switch.m"
    {
#line 948 "string_switch.m"
      ll_backend__string_switch__MainRowTypes_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_50, 0) = ((MR_Box) ((MR_Integer) 10));
#line 948 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_50, 1) = ((MR_Box) (ll_backend__string_switch__V_95_95));
#line 948 "string_switch.m"
    }
#line 949 "string_switch.m"
    {
#line 949 "string_switch.m"
      mercury__list__length_2_p_0(ll_backend__string_switch__TypeCtorInfo_142_142, ll_backend__string_switch__MainRowTypes_50, &ll_backend__string_switch__MainNumColumns_51);
    }
#line 950 "string_switch.m"
    {
#line 950 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_50, ll_backend__string_switch__MainRows_45, &ll_backend__string_switch__MainVectorAddr_52, ll_backend__string_switch__STATE_VARIABLE_CI_66_66, &ll_backend__string_switch__STATE_VARIABLE_CI_99_99);
    }
#line 951 "string_switch.m"
    {
#line 951 "string_switch.m"
      ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_52));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "string_switch.m"
    }
#line 951 "string_switch.m"
    {
#line 951 "string_switch.m"
      ll_backend__string_switch__MainVectorAddrRval_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_53, 1) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 951 "string_switch.m"
    }
#line 952 "string_switch.m"
    {
#line 952 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__LaterSolnArray_46, &ll_backend__string_switch__LaterVectorAddr_54, ll_backend__string_switch__STATE_VARIABLE_CI_99_99, &ll_backend__string_switch__STATE_VARIABLE_CI_102_102);
    }
#line 953 "string_switch.m"
    {
#line 953 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_54));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "string_switch.m"
    }
#line 953 "string_switch.m"
    {
#line 953 "string_switch.m"
      ll_backend__string_switch__LaterVectorAddrRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_55, 1) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 953 "string_switch.m"
    }
#line 958 "string_switch.m"
    {
#line 958 "string_switch.m"
      ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_25, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_56, ll_backend__string_switch__STATE_VARIABLE_CI_102_102, &ll_backend__string_switch__STATE_VARIABLE_CI_106_106);
    }
#line 959 "string_switch.m"
    ll_backend__string_switch__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 0)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 1)));
#line 959 "string_switch.m"
    ll_backend__string_switch__MidReg_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 2)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 3)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 4)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 5)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 6)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 7)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 8)));
#line 959 "string_switch.m"
    ll_backend__string_switch__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_29, (MR_Integer) 9)));
#line 966 "string_switch.m"
    {
#line 966 "string_switch.m"
      ll_backend__string_switch__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 966 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_115_115, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_57));
#line 966 "string_switch.m"
    }
#line 967 "string_switch.m"
    {
#line 967 "string_switch.m"
      ll_backend__string_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_117_117, 0) = ((MR_Box) (ll_backend__string_switch__MainNumColumns_51));
#line 967 "string_switch.m"
    }
#line 967 "string_switch.m"
    {
#line 967 "string_switch.m"
      ll_backend__string_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 1) = ((MR_Box) (ll_backend__string_switch__V_117_117));
#line 967 "string_switch.m"
    }
#line 965 "string_switch.m"
    {
#line 965 "string_switch.m"
      ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 965 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 965 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 965 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 2) = ((MR_Box) (ll_backend__string_switch__V_115_115));
#line 965 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 3) = ((MR_Box) (ll_backend__string_switch__V_116_116));
#line 965 "string_switch.m"
    }
#line 964 "string_switch.m"
    {
#line 964 "string_switch.m"
      ll_backend__string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 964 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_53));
#line 964 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 964 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_110_110, 2) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 964 "string_switch.m"
    }
#line 963 "string_switch.m"
    {
#line 963 "string_switch.m"
      ll_backend__string_switch__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 963 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 963 "string_switch.m"
    }
#line 962 "string_switch.m"
    {
#line 962 "string_switch.m"
      ll_backend__string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 962 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 962 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_56));
#line 962 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 2) = ((MR_Box) (ll_backend__string_switch__V_109_109));
#line 962 "string_switch.m"
    }
#line 961 "string_switch.m"
    {
#line 961 "string_switch.m"
      ll_backend__string_switch__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) (ll_backend__string_switch__V_108_108));
#line 961 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 961 "string_switch.m"
    }
#line 960 "string_switch.m"
    {
#line 960 "string_switch.m"
      ll_backend__string_switch__SetBaseRegCode_58 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ((MR_Box) (ll_backend__string_switch__V_107_107)));
    }
#line 970 "string_switch.m"
    {
#line 970 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_29, ll_backend__string_switch__VarRval_16, ll_backend__string_switch__MainVectorAddrRval_53, ll_backend__string_switch__ArrayElemType_35, ll_backend__string_switch__MainTableSize_31, ll_backend__string_switch__MainNumColumns_51, &ll_backend__string_switch__BinarySearchCode_59);
    }
#line 974 "string_switch.m"
    {
#line 974 "string_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_15_p_0(ll_backend__string_switch__DescendingSortedKinds_49, (MR_Integer) 1, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__ResumeVars_18, ll_backend__string_switch__EndLabel_24, ll_backend__string_switch__StoreMap_25, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__AddTrailOps_37, ll_backend__string_switch__BaseReg_56, ll_backend__string_switch__LaterVectorAddrRval_55, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_62, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_63, &ll_backend__string_switch__LookupResultsCode_60, ll_backend__string_switch__STATE_VARIABLE_CI_106_106, ll_backend__string_switch__STATE_VARIABLE_CI_65);
    }
#line 978 "string_switch.m"
    {
#line 978 "string_switch.m"
      ll_backend__string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 978 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_24));
#line 978 "string_switch.m"
    }
#line 978 "string_switch.m"
    {
#line 978 "string_switch.m"
      ll_backend__string_switch__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 978 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 0) = ((MR_Box) (ll_backend__string_switch__V_123_123));
#line 978 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 1) = ((MR_Box) ((MR_String) "end of string binary several solns switch"));
#line 978 "string_switch.m"
    }
#line 977 "string_switch.m"
    {
#line 977 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_61 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ((MR_Box) (ll_backend__string_switch__V_122_122)));
    }
#line 982 "string_switch.m"
    {
#line 982 "string_switch.m"
      ll_backend__string_switch__V_127_127 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ll_backend__string_switch__LookupResultsCode_60, ll_backend__string_switch__EndLabelCode_61);
    }
#line 981 "string_switch.m"
    {
#line 981 "string_switch.m"
      ll_backend__string_switch__V_126_126 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ll_backend__string_switch__SetBaseRegCode_58, ll_backend__string_switch__V_127_127);
    }
#line 981 "string_switch.m"
    {
#line 981 "string_switch.m"
      ll_backend__string_switch__V_125_125 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ll_backend__string_switch__BinarySearchCode_59, ll_backend__string_switch__V_126_126);
    }
#line 981 "string_switch.m"
    {
#line 981 "string_switch.m"
      *ll_backend__string_switch__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_137_137, ll_backend__string_switch__CommentCode_30, ll_backend__string_switch__V_125_125);
    }
#line 894 "string_switch.m"
  }
#line 885 "string_switch.m"
}

#line 872 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
#line 872 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 872 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
#line 872 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3)
#line 872 "string_switch.m"
{
#line 876 "string_switch.m"
  while (MR_TRUE)
#line 876 "string_switch.m"
    {
#line 876 "string_switch.m"
      /* tailcall optimized into a loop */
#line 876 "string_switch.m"
      {
#line 876 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 876 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_RevRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2;
#line 876 "string_switch.m"
        else
#line 878 "string_switch.m"
          {
#line 878 "string_switch.m"
            MR_String ll_backend__string_switch__Str_7;
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__OutRvals_8;
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__RowRvals_11;
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__V_15_15;
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__V_16_16;
#line 878 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

#line 877 "string_switch.m"
            ll_backend__string_switch__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, (MR_Integer) 0)));
#line 877 "string_switch.m"
            ll_backend__string_switch__OutRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, (MR_Integer) 1)));
#line 879 "string_switch.m"
            {
#line 879 "string_switch.m"
              ll_backend__string_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_16_16, 1) = ((MR_Box) (ll_backend__string_switch__Str_7));
#line 879 "string_switch.m"
            }
#line 879 "string_switch.m"
            {
#line 879 "string_switch.m"
              ll_backend__string_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_15_15, 1) = ((MR_Box) (ll_backend__string_switch__V_16_16));
#line 879 "string_switch.m"
            }
#line 879 "string_switch.m"
            {
#line 879 "string_switch.m"
              ll_backend__string_switch__RowRvals_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 0) = ((MR_Box) (ll_backend__string_switch__V_15_15));
#line 879 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_8));
#line 879 "string_switch.m"
            }
#line 880 "string_switch.m"
            {
#line 880 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 0) = ((MR_Box) (ll_backend__string_switch__RowRvals_11));
#line 880 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2));
#line 880 "string_switch.m"
            }
#line 881 "string_switch.m"
            /* direct tailcall eliminated */
#line 881 "string_switch.m"
            {
#line 881 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__Rest_9;
#line 881 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_2 = ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

#line 881 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_2;
#line 881 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 881 "string_switch.m"
            }
#line 881 "string_switch.m"
            continue;
#line 878 "string_switch.m"
          }
#line 876 "string_switch.m"
      }
#line 876 "string_switch.m"
      break;
#line 876 "string_switch.m"
    }
#line 872 "string_switch.m"
}

#line 782 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_15,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_16,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_17,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_18,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_19,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_20,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_21,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_23,
#line 782 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
#line 782 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52)
#line 782 "string_switch.m"
{
#line 791 "string_switch.m"
  {
#line 791 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_100_100;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_25;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_26;
#line 791 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_27;
#line 791 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_28;
#line 791 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_29;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_30;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_31;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_32;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__RevVectorRvals_33;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorRvals_34;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_35;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddr_36;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddrRval_37;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_38;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_44;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchEndCode_46;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_48;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_53_53;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_63_63;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_64_64;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_85_85;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_86_86;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 791 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;

#line 797 "string_switch.m"
    {
#line 797 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_4_p_0(ll_backend__string_switch__CanFail_19, &ll_backend__string_switch__BinarySwitchInfo_25, ll_backend__string_switch__STATE_VARIABLE_CI_0_51, &ll_backend__string_switch__STATE_VARIABLE_CI_53_53);
    }
#line 4797 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 798 "string_switch.m"
    {
#line 798 "string_switch.m"
      ll_backend__string_switch__CommentCode_26 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[26])));
    }
#line 802 "string_switch.m"
    {
#line 802 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[3], ll_backend__string_switch__CaseValues_15, &ll_backend__string_switch__TableSize_27);
    }
#line 803 "string_switch.m"
    {
#line 803 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__OutVars_16, &ll_backend__string_switch__NumOutVars_28);
    }
#line 804 "string_switch.m"
    ll_backend__string_switch__NumColumns_29 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_28);
#line 807 "string_switch.m"
    {
#line 807 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_28, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_30);
    }
#line 808 "string_switch.m"
    {
#line 808 "string_switch.m"
      ll_backend__string_switch__ArrayElemTypes_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 808 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_31, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_30));
#line 808 "string_switch.m"
    }
#line 809 "string_switch.m"
    {
#line 809 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 809 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_32, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_31));
#line 809 "string_switch.m"
    }
#line 812 "string_switch.m"
    {
#line 812 "string_switch.m"
      ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(ll_backend__string_switch__CaseValues_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_33);
    }
#line 814 "string_switch.m"
    {
#line 814 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevVectorRvals_33, &ll_backend__string_switch__VectorRvals_34);
    }
#line 815 "string_switch.m"
    {
#line 815 "string_switch.m"
      ll_backend__string_switch__RowElemTypes_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_35, 0) = ((MR_Box) ((MR_Integer) 10));
#line 815 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_35, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_17));
#line 815 "string_switch.m"
    }
#line 816 "string_switch.m"
    {
#line 816 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_35, ll_backend__string_switch__VectorRvals_34, &ll_backend__string_switch__VectorAddr_36, ll_backend__string_switch__STATE_VARIABLE_CI_53_53, &ll_backend__string_switch__STATE_VARIABLE_CI_63_63);
    }
#line 817 "string_switch.m"
    {
#line 817 "string_switch.m"
      ll_backend__string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 817 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 817 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_64_64, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_36));
#line 817 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_64_64, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "string_switch.m"
    }
#line 817 "string_switch.m"
    {
#line 817 "string_switch.m"
      ll_backend__string_switch__VectorAddrRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 817 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_37, 1) = ((MR_Box) (ll_backend__string_switch__V_64_64));
#line 817 "string_switch.m"
    }
#line 856 "string_switch.m"
    ll_backend__string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4888 "ll_backend.string_switch.c"
    if ((ll_backend__string_switch__OutVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4890 "ll_backend.string_switch.c"
      {
#line 856 "string_switch.m"
        MR_Word ll_backend__string_switch___MaybeEnd_45;

#line 821 "string_switch.m"
        {
#line 821 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_38 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_100_100);
        }
#line 856 "string_switch.m"
        {
#line 856 "string_switch.m"
          ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_21, ll_backend__string_switch__Liveness_18, ll_backend__string_switch__V_82_82, &ll_backend__string_switch___MaybeEnd_45, &ll_backend__string_switch__BranchEndCode_46, ll_backend__string_switch__STATE_VARIABLE_CI_63_63, ll_backend__string_switch__STATE_VARIABLE_CI_52);
        }
#line 4905 "ll_backend.string_switch.c"
      }
#line 4907 "ll_backend.string_switch.c"
    else
#line 4909 "ll_backend.string_switch.c"
      {
#line 4911 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__MidReg_43;
#line 4913 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__FinalBaseReg_47;
#line 4915 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_67_67;
#line 4917 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_68_68;
#line 4919 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_69_69;
#line 4921 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_70_70;
#line 4923 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_71_71;
#line 4925 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_74_74;
#line 4927 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_76_76;
#line 4929 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_77_77;
#line 4931 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_78_78;
#line 4933 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_81_109;
#line 4935 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_83_110;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_91_91;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_92_92;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_94_94;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_95_95;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_96_96;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_97_97;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_98_98;
#line 835 "string_switch.m"
        MR_Word ll_backend__string_switch__V_99_99;
#line 856 "string_switch.m"
        MR_Word ll_backend__string_switch___MaybeEnd_106;

#line 828 "string_switch.m"
        {
#line 828 "string_switch.m"
          ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_21, (MR_Integer) 0, &ll_backend__string_switch__FinalBaseReg_47, ll_backend__string_switch__STATE_VARIABLE_CI_63_63, &ll_backend__string_switch__STATE_VARIABLE_CI_67_67);
        }
#line 835 "string_switch.m"
        ll_backend__string_switch__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 0)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 1)));
#line 835 "string_switch.m"
        ll_backend__string_switch__MidReg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 2)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 3)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 4)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 5)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 6)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 7)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 8)));
#line 835 "string_switch.m"
        ll_backend__string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_25, (MR_Integer) 9)));
#line 842 "string_switch.m"
        {
#line 842 "string_switch.m"
          ll_backend__string_switch__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 842 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_76_76, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_43));
#line 842 "string_switch.m"
        }
#line 843 "string_switch.m"
        {
#line 843 "string_switch.m"
          ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_29));
#line 843 "string_switch.m"
        }
#line 843 "string_switch.m"
        {
#line 843 "string_switch.m"
          ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 843 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 843 "string_switch.m"
        }
#line 841 "string_switch.m"
        {
#line 841 "string_switch.m"
          ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 841 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 841 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 841 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 841 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 3) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 841 "string_switch.m"
        }
#line 840 "string_switch.m"
        {
#line 840 "string_switch.m"
          ll_backend__string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 840 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_37));
#line 840 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 840 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_71_71, 2) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 840 "string_switch.m"
        }
#line 839 "string_switch.m"
        {
#line 839 "string_switch.m"
          ll_backend__string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 839 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 1) = ((MR_Box) (ll_backend__string_switch__V_71_71));
#line 839 "string_switch.m"
        }
#line 838 "string_switch.m"
        {
#line 838 "string_switch.m"
          ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (ll_backend__string_switch__FinalBaseReg_47));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (ll_backend__string_switch__V_70_70));
#line 838 "string_switch.m"
        }
#line 837 "string_switch.m"
        {
#line 837 "string_switch.m"
          ll_backend__string_switch__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 837 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 0) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 837 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 837 "string_switch.m"
        }
#line 836 "string_switch.m"
        {
#line 836 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_38 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (ll_backend__string_switch__V_68_68)));
        }
#line 846 "string_switch.m"
        {
#line 846 "string_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__string_switch__OutVars_16, (MR_Integer) 1, ll_backend__string_switch__FinalBaseReg_47, ll_backend__string_switch__STATE_VARIABLE_CI_67_67, &ll_backend__string_switch__STATE_VARIABLE_CI_81_109);
        }
#line 856 "string_switch.m"
        {
#line 856 "string_switch.m"
          ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_21, ll_backend__string_switch__Liveness_18, ll_backend__string_switch__V_82_82, &ll_backend__string_switch___MaybeEnd_106, &ll_backend__string_switch__BranchEndCode_46, ll_backend__string_switch__STATE_VARIABLE_CI_81_109, &ll_backend__string_switch__STATE_VARIABLE_CI_83_110);
        }
#line 862 "string_switch.m"
        {
#line 862 "string_switch.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__FinalBaseReg_47, ll_backend__string_switch__STATE_VARIABLE_CI_83_110, ll_backend__string_switch__STATE_VARIABLE_CI_52);
        }
#line 5087 "ll_backend.string_switch.c"
      }
#line 849 "string_switch.m"
    {
#line 849 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_25, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__VectorAddrRval_37, ll_backend__string_switch__ArrayElemType_32, ll_backend__string_switch__TableSize_27, ll_backend__string_switch__NumColumns_29, &ll_backend__string_switch__BinarySearchCode_44);
    }
#line 866 "string_switch.m"
    {
#line 866 "string_switch.m"
      ll_backend__string_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 866 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_20));
#line 866 "string_switch.m"
    }
#line 866 "string_switch.m"
    {
#line 866 "string_switch.m"
      ll_backend__string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (ll_backend__string_switch__V_86_86));
#line 866 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
#line 866 "string_switch.m"
    }
#line 865 "string_switch.m"
    {
#line 865 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_48 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ((MR_Box) (ll_backend__string_switch__V_85_85)));
    }
#line 870 "string_switch.m"
    {
#line 870 "string_switch.m"
      ll_backend__string_switch__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__BranchEndCode_46, ll_backend__string_switch__EndLabelCode_48);
    }
#line 869 "string_switch.m"
    {
#line 869 "string_switch.m"
      ll_backend__string_switch__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__SetBaseRegCode_38, ll_backend__string_switch__V_90_90);
    }
#line 869 "string_switch.m"
    {
#line 869 "string_switch.m"
      ll_backend__string_switch__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__BinarySearchCode_44, ll_backend__string_switch__V_89_89);
    }
#line 869 "string_switch.m"
    {
#line 869 "string_switch.m"
      *ll_backend__string_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_100_100, ll_backend__string_switch__CommentCode_26, ll_backend__string_switch__V_88_88);
    }
#line 870 "string_switch.m"
    *ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50 = ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49;
#line 791 "string_switch.m"
  }
#line 782 "string_switch.m"
}

#line 745 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
#line 745 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
#line 745 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
#line 745 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
#line 745 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
#line 745 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7)
#line 745 "string_switch.m"
{
#line 750 "string_switch.m"
  while (MR_TRUE)
#line 750 "string_switch.m"
    {
#line 750 "string_switch.m"
      /* tailcall optimized into a loop */
#line 750 "string_switch.m"
      {
#line 750 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 750 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "string_switch.m"
          {
#line 750 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_CurIndex_7 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6;
#line 750 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevTargets_5 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4;
#line 750 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2;
#line 750 "string_switch.m"
          }
#line 750 "string_switch.m"
        else
#line 752 "string_switch.m"
          {
#line 752 "string_switch.m"
            MR_String ll_backend__string_switch__Str_17;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__Label_18;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__StrLabels_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__Row_23;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_31_31;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_32_32;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_33_33;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_34_34;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_35_35;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
#line 752 "string_switch.m"
            MR_Word ll_backend__string_switch__V_39_39;
#line 752 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

#line 751 "string_switch.m"
            ll_backend__string_switch__Str_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, (MR_Integer) 0)));
#line 751 "string_switch.m"
            ll_backend__string_switch__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, (MR_Integer) 1)));
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 1) = ((MR_Box) (ll_backend__string_switch__Str_17));
#line 753 "string_switch.m"
            }
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 1) = ((MR_Box) (ll_backend__string_switch__V_32_32));
#line 753 "string_switch.m"
            }
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6));
#line 753 "string_switch.m"
            }
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_34_34, 1) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 753 "string_switch.m"
            }
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_33_33, 0) = ((MR_Box) (ll_backend__string_switch__V_34_34));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "string_switch.m"
            }
#line 753 "string_switch.m"
            {
#line 753 "string_switch.m"
              ll_backend__string_switch__Row_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 0) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 753 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 1) = ((MR_Box) (ll_backend__string_switch__V_33_33));
#line 753 "string_switch.m"
            }
#line 754 "string_switch.m"
            {
#line 754 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 0) = ((MR_Box) (ll_backend__string_switch__Row_23));
#line 754 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2));
#line 754 "string_switch.m"
            }
#line 755 "string_switch.m"
            {
#line 755 "string_switch.m"
              ll_backend__string_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_39_39, 0) = ((MR_Box) (ll_backend__string_switch__Label_18));
#line 755 "string_switch.m"
            }
#line 755 "string_switch.m"
            {
#line 755 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 0) = ((MR_Box) (ll_backend__string_switch__V_39_39));
#line 755 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4));
#line 755 "string_switch.m"
            }
#line 756 "string_switch.m"
            ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40 = (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 + (MR_Integer) 1);
#line 757 "string_switch.m"
            /* direct tailcall eliminated */
#line 757 "string_switch.m"
            {
#line 757 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__StrLabels_19;
#line 757 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_2 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
#line 757 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0__tmp_copy_4 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
#line 757 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_6 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

#line 757 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_6;
#line 757 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_0__tmp_copy_4;
#line 757 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_2;
#line 757 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 757 "string_switch.m"
            }
#line 757 "string_switch.m"
            continue;
#line 752 "string_switch.m"
          }
#line 750 "string_switch.m"
      }
#line 750 "string_switch.m"
      break;
#line 750 "string_switch.m"
    }
#line 745 "string_switch.m"
}

#line 601 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_11,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_13,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_14,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_15,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__HashOp_16,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__HashMask_17,
#line 601 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_18,
#line 601 "string_switch.m"
  MR_Word ll_backend__string_switch__MatchCode_19,
#line 601 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20)
#line 601 "string_switch.m"
{
#line 607 "string_switch.m"
  {
#line 607 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_18 == (MR_Integer) 0);
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 0)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 1)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__StringReg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 2)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 3)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__NoMatchLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 4)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 5)));
#line 607 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 7)));
#line 608 "string_switch.m"
    MR_Word ll_backend__string_switch__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 6)));

#line 650 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 628 "string_switch.m"
      {
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeCtorInfo_214_214;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__BaseReg_28;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__MultiplyInstrs_29;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_39_39;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_40_40;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_41_41;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_42_42;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_43_43;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_45_45;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_46_46;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_47_47;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_49_49;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_50_50;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_51_51;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_52_52;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_53_53;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_54_54;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_55_55;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_56_56;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_58_58;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_59_59;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_60_60;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_61_61;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_63_63;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_65_65;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_69_69;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_72_72;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_75_75;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_76_76;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_77_77;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_78_78;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_79_79;
#line 628 "string_switch.m"
        MR_Word ll_backend__string_switch__V_80_80;

#line 617 "string_switch.m"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumColumns_15 == (MR_Integer) 1);
#line 620 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 618 "string_switch.m"
          {
#line 618 "string_switch.m"
            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__SlotReg_21;
#line 619 "string_switch.m"
            ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string_switch.m"
          }
#line 620 "string_switch.m"
        else
#line 621 "string_switch.m"
          {
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_30_30;
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_31_31;
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_32_32;
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_34_34;
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_35_35;
#line 621 "string_switch.m"
            MR_Word ll_backend__string_switch__V_36_36;

#line 621 "string_switch.m"
            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__RowStartReg_22;
#line 624 "string_switch.m"
            {
#line 624 "string_switch.m"
              ll_backend__string_switch__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 624 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_34_34, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 624 "string_switch.m"
            }
#line 625 "string_switch.m"
            {
#line 625 "string_switch.m"
              ll_backend__string_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_36_36, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
#line 625 "string_switch.m"
            }
#line 625 "string_switch.m"
            {
#line 625 "string_switch.m"
              ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 625 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_35_35, 1) = ((MR_Box) (ll_backend__string_switch__V_36_36));
#line 625 "string_switch.m"
            }
#line 624 "string_switch.m"
            {
#line 624 "string_switch.m"
              ll_backend__string_switch__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 624 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 624 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 624 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 2) = ((MR_Box) (ll_backend__string_switch__V_34_34));
#line 624 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 3) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 624 "string_switch.m"
            }
#line 623 "string_switch.m"
            {
#line 623 "string_switch.m"
              ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 623 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 623 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 623 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 2) = ((MR_Box) (ll_backend__string_switch__V_32_32));
#line 623 "string_switch.m"
            }
#line 623 "string_switch.m"
            {
#line 623 "string_switch.m"
              ll_backend__string_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, 0) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 623 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
#line 623 "string_switch.m"
            }
#line 627 "string_switch.m"
            {
#line 627 "string_switch.m"
              ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 0) = ((MR_Box) (ll_backend__string_switch__V_30_30));
#line 627 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "string_switch.m"
            }
#line 621 "string_switch.m"
          }
#line 5571 "ll_backend.string_switch.c"
        ll_backend__string_switch__TypeCtorInfo_214_214 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 631 "string_switch.m"
        {
#line 631 "string_switch.m"
          ll_backend__string_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 631 "string_switch.m"
        }
#line 632 "string_switch.m"
        {
#line 632 "string_switch.m"
          ll_backend__string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_47_47, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
#line 632 "string_switch.m"
        }
#line 632 "string_switch.m"
        {
#line 632 "string_switch.m"
          ll_backend__string_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_46_46, 1) = ((MR_Box) (ll_backend__string_switch__V_47_47));
#line 632 "string_switch.m"
        }
#line 631 "string_switch.m"
        {
#line 631 "string_switch.m"
          ll_backend__string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 2) = ((MR_Box) (ll_backend__string_switch__V_45_45));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 3) = ((MR_Box) (ll_backend__string_switch__V_46_46));
#line 631 "string_switch.m"
        }
#line 630 "string_switch.m"
        {
#line 630 "string_switch.m"
          ll_backend__string_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 630 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 630 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 630 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 2) = ((MR_Box) (ll_backend__string_switch__V_43_43));
#line 630 "string_switch.m"
        }
#line 630 "string_switch.m"
        {
#line 630 "string_switch.m"
          ll_backend__string_switch__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_41_41, 0) = ((MR_Box) (ll_backend__string_switch__V_42_42));
#line 630 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_41_41, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
#line 630 "string_switch.m"
        }
#line 633 "string_switch.m"
        {
#line 633 "string_switch.m"
          ll_backend__string_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_40_40, 0) = ((MR_Box) (ll_backend__string_switch__V_41_41));
#line 633 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_40_40, 1) = ((MR_Box) (ll_backend__string_switch__MultiplyInstrs_29));
#line 633 "string_switch.m"
        }
#line 629 "string_switch.m"
        {
#line 629 "string_switch.m"
          ll_backend__string_switch__V_39_39 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_40_40);
        }
#line 637 "string_switch.m"
        {
#line 637 "string_switch.m"
          ll_backend__string_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_55_55, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
#line 637 "string_switch.m"
        }
#line 638 "string_switch.m"
        {
#line 638 "string_switch.m"
          ll_backend__string_switch__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 638 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (ll_backend__string_switch__BaseReg_28));
#line 638 "string_switch.m"
        }
#line 637 "string_switch.m"
        {
#line 637 "string_switch.m"
          ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 1) = ((MR_Box) (ll_backend__string_switch__V_55_55));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 3) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 637 "string_switch.m"
        }
#line 636 "string_switch.m"
        {
#line 636 "string_switch.m"
          ll_backend__string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 2) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 636 "string_switch.m"
        }
#line 636 "string_switch.m"
        {
#line 636 "string_switch.m"
          ll_backend__string_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 0) = ((MR_Box) (ll_backend__string_switch__V_53_53));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
#line 636 "string_switch.m"
        }
#line 642 "string_switch.m"
        {
#line 642 "string_switch.m"
          ll_backend__string_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_65_65, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 642 "string_switch.m"
        }
#line 642 "string_switch.m"
        {
#line 642 "string_switch.m"
          ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 2) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21])));
#line 642 "string_switch.m"
        }
#line 643 "string_switch.m"
        {
#line 643 "string_switch.m"
          ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 643 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 643 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 643 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 643 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 643 "string_switch.m"
        }
#line 641 "string_switch.m"
        {
#line 641 "string_switch.m"
          ll_backend__string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 2) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 3) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 641 "string_switch.m"
        }
#line 644 "string_switch.m"
        {
#line 644 "string_switch.m"
          ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 644 "string_switch.m"
        }
#line 640 "string_switch.m"
        {
#line 640 "string_switch.m"
          ll_backend__string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 640 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 1) = ((MR_Box) (ll_backend__string_switch__V_61_61));
#line 640 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 2) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 640 "string_switch.m"
        }
#line 640 "string_switch.m"
        {
#line 640 "string_switch.m"
          ll_backend__string_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_59_59, 0) = ((MR_Box) (ll_backend__string_switch__V_60_60));
#line 640 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_59_59, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
#line 640 "string_switch.m"
        }
#line 646 "string_switch.m"
        {
#line 646 "string_switch.m"
          ll_backend__string_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_58_58, 0) = ((MR_Box) (ll_backend__string_switch__V_59_59));
#line 646 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "string_switch.m"
        }
#line 639 "string_switch.m"
        {
#line 639 "string_switch.m"
          ll_backend__string_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_51_51, 0) = ((MR_Box) (ll_backend__string_switch__V_52_52));
#line 639 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_51_51, 1) = ((MR_Box) (ll_backend__string_switch__V_58_58));
#line 639 "string_switch.m"
        }
#line 635 "string_switch.m"
        {
#line 635 "string_switch.m"
          ll_backend__string_switch__V_50_50 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_51_51);
        }
#line 647 "string_switch.m"
        {
#line 647 "string_switch.m"
          ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 647 "string_switch.m"
        }
#line 647 "string_switch.m"
        {
#line 647 "string_switch.m"
          ll_backend__string_switch__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 647 "string_switch.m"
        }
#line 649 "string_switch.m"
        {
#line 649 "string_switch.m"
          ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 649 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "string_switch.m"
        }
#line 646 "string_switch.m"
        {
#line 646 "string_switch.m"
          ll_backend__string_switch__V_77_77 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_78_78);
        }
#line 649 "string_switch.m"
        {
#line 649 "string_switch.m"
          ll_backend__string_switch__V_76_76 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_77_77, ll_backend__string_switch__FailCode_27);
        }
#line 646 "string_switch.m"
        {
#line 646 "string_switch.m"
          ll_backend__string_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__V_76_76);
        }
#line 646 "string_switch.m"
        {
#line 646 "string_switch.m"
          ll_backend__string_switch__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_50_50, ll_backend__string_switch__V_75_75);
        }
#line 634 "string_switch.m"
        {
#line 634 "string_switch.m"
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_39_39, ll_backend__string_switch__V_49_49);
        }
#line 628 "string_switch.m"
      }
#line 650 "string_switch.m"
    else
#line 651 "string_switch.m"
      {
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeCtorInfo_215_215 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_83_83;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_84_84;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_85_85;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_86_86;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_87_87;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_89_89;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_90_90;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_91_91;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_94_94;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_95_95;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_97_97;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_98_98;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_99_99;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_100_100;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_102_102;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_103_103;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_104_104;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_106_106;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_107_107;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_108_108;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_109_109;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_110_110;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_111_111;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_113_113;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_114_114;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_115_115;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_116_116;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_118_118;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_120_120;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_121_121;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_124_124;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_127_127;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_130_130;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_131_131;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_132_132;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_133_133;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_134_134;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_135_135;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_137_137;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_138_138;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_139_139;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_140_140;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_142_142;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_149_149;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_150_150;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_151_151;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_152_152;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_158_158;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_160_160;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_161_161;
#line 651 "string_switch.m"
        MR_Word ll_backend__string_switch__V_162_162;

#line 653 "string_switch.m"
        {
#line 653 "string_switch.m"
          ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 653 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
#line 654 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 654 "string_switch.m"
        }
#line 653 "string_switch.m"
        {
#line 653 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 2) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 3) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 653 "string_switch.m"
        }
#line 652 "string_switch.m"
        {
#line 652 "string_switch.m"
          ll_backend__string_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 2) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 652 "string_switch.m"
        }
#line 652 "string_switch.m"
        {
#line 652 "string_switch.m"
          ll_backend__string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (ll_backend__string_switch__V_86_86));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
#line 652 "string_switch.m"
        }
#line 656 "string_switch.m"
        {
#line 656 "string_switch.m"
          ll_backend__string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_95_95, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
#line 656 "string_switch.m"
        }
#line 656 "string_switch.m"
        {
#line 656 "string_switch.m"
          ll_backend__string_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 0) = ((MR_Box) (ll_backend__string_switch__V_95_95));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
#line 656 "string_switch.m"
        }
#line 659 "string_switch.m"
        {
#line 659 "string_switch.m"
          ll_backend__string_switch__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 659 "string_switch.m"
        }
#line 659 "string_switch.m"
        {
#line 659 "string_switch.m"
          ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
#line 659 "string_switch.m"
        }
#line 659 "string_switch.m"
        {
#line 659 "string_switch.m"
          ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 659 "string_switch.m"
        }
#line 659 "string_switch.m"
        {
#line 659 "string_switch.m"
          ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 2) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 3) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 659 "string_switch.m"
        }
#line 658 "string_switch.m"
        {
#line 658 "string_switch.m"
          ll_backend__string_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 2) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 658 "string_switch.m"
        }
#line 658 "string_switch.m"
        {
#line 658 "string_switch.m"
          ll_backend__string_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) (ll_backend__string_switch__V_99_99));
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
#line 658 "string_switch.m"
        }
#line 662 "string_switch.m"
        {
#line 662 "string_switch.m"
          ll_backend__string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
#line 662 "string_switch.m"
        }
#line 663 "string_switch.m"
        {
#line 663 "string_switch.m"
          ll_backend__string_switch__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 663 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 663 "string_switch.m"
        }
#line 662 "string_switch.m"
        {
#line 662 "string_switch.m"
          ll_backend__string_switch__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 3) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 662 "string_switch.m"
        }
#line 661 "string_switch.m"
        {
#line 661 "string_switch.m"
          ll_backend__string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 2) = ((MR_Box) (ll_backend__string_switch__V_109_109));
#line 661 "string_switch.m"
        }
#line 661 "string_switch.m"
        {
#line 661 "string_switch.m"
          ll_backend__string_switch__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) (ll_backend__string_switch__V_108_108));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
#line 661 "string_switch.m"
        }
#line 667 "string_switch.m"
        {
#line 667 "string_switch.m"
          ll_backend__string_switch__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_120_120, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 667 "string_switch.m"
        }
#line 667 "string_switch.m"
        ll_backend__string_switch__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 667 "string_switch.m"
        {
#line 667 "string_switch.m"
          ll_backend__string_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 2) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 3) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 667 "string_switch.m"
        }
#line 668 "string_switch.m"
        {
#line 668 "string_switch.m"
          ll_backend__string_switch__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 2) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 668 "string_switch.m"
        }
#line 666 "string_switch.m"
        {
#line 666 "string_switch.m"
          ll_backend__string_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 2) = ((MR_Box) (ll_backend__string_switch__V_118_118));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 3) = ((MR_Box) (ll_backend__string_switch__V_124_124));
#line 666 "string_switch.m"
        }
#line 669 "string_switch.m"
        {
#line 669 "string_switch.m"
          ll_backend__string_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_127_127, 0) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
#line 669 "string_switch.m"
        }
#line 665 "string_switch.m"
        {
#line 665 "string_switch.m"
          ll_backend__string_switch__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 665 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 1) = ((MR_Box) (ll_backend__string_switch__V_116_116));
#line 665 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 2) = ((MR_Box) (ll_backend__string_switch__V_127_127));
#line 665 "string_switch.m"
        }
#line 665 "string_switch.m"
        {
#line 665 "string_switch.m"
          ll_backend__string_switch__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_114_114, 0) = ((MR_Box) (ll_backend__string_switch__V_115_115));
#line 665 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_114_114, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
#line 665 "string_switch.m"
        }
#line 671 "string_switch.m"
        {
#line 671 "string_switch.m"
          ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (ll_backend__string_switch__V_114_114));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "string_switch.m"
        }
#line 664 "string_switch.m"
        {
#line 664 "string_switch.m"
          ll_backend__string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (ll_backend__string_switch__V_107_107));
#line 664 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 664 "string_switch.m"
        }
#line 660 "string_switch.m"
        {
#line 660 "string_switch.m"
          ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 0) = ((MR_Box) (ll_backend__string_switch__V_98_98));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 1) = ((MR_Box) (ll_backend__string_switch__V_106_106));
#line 660 "string_switch.m"
        }
#line 657 "string_switch.m"
        {
#line 657 "string_switch.m"
          ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (ll_backend__string_switch__V_94_94));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 657 "string_switch.m"
        }
#line 655 "string_switch.m"
        {
#line 655 "string_switch.m"
          ll_backend__string_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 655 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 1) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 655 "string_switch.m"
        }
#line 651 "string_switch.m"
        {
#line 651 "string_switch.m"
          ll_backend__string_switch__V_83_83 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_84_84);
        }
#line 672 "string_switch.m"
        {
#line 672 "string_switch.m"
          ll_backend__string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_135_135, 1) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
#line 672 "string_switch.m"
        }
#line 672 "string_switch.m"
        {
#line 672 "string_switch.m"
          ll_backend__string_switch__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_134_134, 0) = ((MR_Box) (ll_backend__string_switch__V_135_135));
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_134_134, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
#line 672 "string_switch.m"
        }
#line 676 "string_switch.m"
        {
#line 676 "string_switch.m"
          ll_backend__string_switch__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 2) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
#line 676 "string_switch.m"
        }
#line 675 "string_switch.m"
        {
#line 675 "string_switch.m"
          ll_backend__string_switch__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 675 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 675 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 675 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 675 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 3) = ((MR_Box) (ll_backend__string_switch__V_142_142));
#line 675 "string_switch.m"
        }
#line 674 "string_switch.m"
        {
#line 674 "string_switch.m"
          ll_backend__string_switch__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 2) = ((MR_Box) (ll_backend__string_switch__V_140_140));
#line 674 "string_switch.m"
        }
#line 674 "string_switch.m"
        {
#line 674 "string_switch.m"
          ll_backend__string_switch__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (ll_backend__string_switch__V_139_139));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_138_138, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
#line 674 "string_switch.m"
        }
#line 679 "string_switch.m"
        {
#line 679 "string_switch.m"
          ll_backend__string_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 2) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 3) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 679 "string_switch.m"
        }
#line 680 "string_switch.m"
        {
#line 680 "string_switch.m"
          ll_backend__string_switch__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_158_158, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
#line 680 "string_switch.m"
        }
#line 679 "string_switch.m"
        {
#line 679 "string_switch.m"
          ll_backend__string_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 1) = ((MR_Box) (ll_backend__string_switch__V_152_152));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 2) = ((MR_Box) (ll_backend__string_switch__V_158_158));
#line 679 "string_switch.m"
        }
#line 678 "string_switch.m"
        {
#line 678 "string_switch.m"
          ll_backend__string_switch__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_150_150, 0) = ((MR_Box) (ll_backend__string_switch__V_151_151));
#line 678 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_150_150, 1) = ((MR_Box) ((MR_String) "if we have not reached the end of the chain, keep searching"));
#line 678 "string_switch.m"
        }
#line 682 "string_switch.m"
        {
#line 682 "string_switch.m"
          ll_backend__string_switch__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 682 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_162_162, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 682 "string_switch.m"
        }
#line 682 "string_switch.m"
        {
#line 682 "string_switch.m"
          ll_backend__string_switch__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_161_161, 0) = ((MR_Box) (ll_backend__string_switch__V_162_162));
#line 682 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_161_161, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 682 "string_switch.m"
        }
#line 684 "string_switch.m"
        {
#line 684 "string_switch.m"
          ll_backend__string_switch__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_160_160, 0) = ((MR_Box) (ll_backend__string_switch__V_161_161));
#line 684 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "string_switch.m"
        }
#line 681 "string_switch.m"
        {
#line 681 "string_switch.m"
          ll_backend__string_switch__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_149_149, 0) = ((MR_Box) (ll_backend__string_switch__V_150_150));
#line 681 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_149_149, 1) = ((MR_Box) (ll_backend__string_switch__V_160_160));
#line 681 "string_switch.m"
        }
#line 677 "string_switch.m"
        {
#line 677 "string_switch.m"
          ll_backend__string_switch__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_137_137, 0) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_137_137, 1) = ((MR_Box) (ll_backend__string_switch__V_149_149));
#line 677 "string_switch.m"
        }
#line 673 "string_switch.m"
        {
#line 673 "string_switch.m"
          ll_backend__string_switch__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_133_133, 0) = ((MR_Box) (ll_backend__string_switch__V_134_134));
#line 673 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_133_133, 1) = ((MR_Box) (ll_backend__string_switch__V_137_137));
#line 673 "string_switch.m"
        }
#line 671 "string_switch.m"
        {
#line 671 "string_switch.m"
          ll_backend__string_switch__V_132_132 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_133_133);
        }
#line 684 "string_switch.m"
        {
#line 684 "string_switch.m"
          ll_backend__string_switch__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_132_132, ll_backend__string_switch__FailCode_27);
        }
#line 671 "string_switch.m"
        {
#line 671 "string_switch.m"
          ll_backend__string_switch__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__V_131_131);
        }
#line 671 "string_switch.m"
        {
#line 671 "string_switch.m"
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_83_83, ll_backend__string_switch__V_130_130);
        }
#line 651 "string_switch.m"
      }
#line 607 "string_switch.m"
  }
#line 601 "string_switch.m"
}

#line 568 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_4_p_0(
#line 568 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_5,
#line 568 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_6,
#line 568 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_16,
#line 568 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_17)
#line 568 "string_switch.m"
{
#line 571 "string_switch.m"
  {
#line 571 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_8;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_9;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__StringReg_10;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_11;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_12;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__NoMatchLabel_13;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_14;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_15;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_19_19;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_21_21;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_23_23;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_24_24;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_25_25;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_26_26;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_27_27;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_28_28;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_29_29;
#line 571 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_30_30;

#line 581 "string_switch.m"
    {
#line 581 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__SlotReg_8, ll_backend__string_switch__STATE_VARIABLE_CI_0_16, &ll_backend__string_switch__STATE_VARIABLE_CI_19_19);
    }
#line 582 "string_switch.m"
    {
#line 582 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__RowStartReg_9, ll_backend__string_switch__STATE_VARIABLE_CI_19_19, &ll_backend__string_switch__STATE_VARIABLE_CI_21_21);
    }
#line 583 "string_switch.m"
    {
#line 583 "string_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__StringReg_10, ll_backend__string_switch__STATE_VARIABLE_CI_21_21, &ll_backend__string_switch__STATE_VARIABLE_CI_23_23);
    }
#line 584 "string_switch.m"
    {
#line 584 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__SlotReg_8, ll_backend__string_switch__STATE_VARIABLE_CI_23_23, &ll_backend__string_switch__STATE_VARIABLE_CI_24_24);
    }
#line 585 "string_switch.m"
    {
#line 585 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__RowStartReg_9, ll_backend__string_switch__STATE_VARIABLE_CI_24_24, &ll_backend__string_switch__STATE_VARIABLE_CI_25_25);
    }
#line 586 "string_switch.m"
    {
#line 586 "string_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__StringReg_10, ll_backend__string_switch__STATE_VARIABLE_CI_25_25, &ll_backend__string_switch__STATE_VARIABLE_CI_26_26);
    }
#line 588 "string_switch.m"
    {
#line 588 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_11, ll_backend__string_switch__STATE_VARIABLE_CI_26_26, &ll_backend__string_switch__STATE_VARIABLE_CI_27_27);
    }
#line 589 "string_switch.m"
    {
#line 589 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_12, ll_backend__string_switch__STATE_VARIABLE_CI_27_27, &ll_backend__string_switch__STATE_VARIABLE_CI_28_28);
    }
#line 590 "string_switch.m"
    {
#line 590 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__NoMatchLabel_13, ll_backend__string_switch__STATE_VARIABLE_CI_28_28, &ll_backend__string_switch__STATE_VARIABLE_CI_29_29);
    }
#line 594 "string_switch.m"
    {
#line 594 "string_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_29_29, &ll_backend__string_switch__BranchStart_14);
    }
#line 1145 "string_switch.m"
    if ((ll_backend__string_switch__CanFail_5 == (MR_Integer) 0))
#line 1146 "string_switch.m"
      {
#line 1146 "string_switch.m"
        ll_backend__code_info__generate_failure_3_p_0(&ll_backend__string_switch__FailCode_15, ll_backend__string_switch__STATE_VARIABLE_CI_29_29, &ll_backend__string_switch__STATE_VARIABLE_CI_30_30);
      }
#line 1145 "string_switch.m"
    else
#line 1148 "string_switch.m"
      {
#line 1149 "string_switch.m"
        {
#line 1149 "string_switch.m"
          ll_backend__string_switch__FailCode_15 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[25])));
        }
#line 1151 "string_switch.m"
        ll_backend__string_switch__STATE_VARIABLE_CI_30_30 = ll_backend__string_switch__STATE_VARIABLE_CI_29_29;
#line 1148 "string_switch.m"
      }
#line 596 "string_switch.m"
    {
#line 596 "string_switch.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__string_switch__BranchStart_14, ll_backend__string_switch__STATE_VARIABLE_CI_30_30, ll_backend__string_switch__STATE_VARIABLE_CI_17);
    }
#line 598 "string_switch.m"
    {
#line 598 "string_switch.m"
      MR_Word base;
#line 598 "string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 598 "string_switch.m"
      *ll_backend__string_switch__Info_6 = base;
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_8));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_9));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__StringReg_10));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_11));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_13));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__FailLabel_12));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__BranchStart_14));
#line 598 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailCode_15));
#line 598 "string_switch.m"
    }
#line 571 "string_switch.m"
  }
#line 568 "string_switch.m"
}

#line 484 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_16,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_17,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_18,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumOutVars_20,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_21,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
#line 484 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
#line 484 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
#line 484 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
#line 484 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
#line 484 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
#line 484 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52)
#line 484 "string_switch.m"
{
#line 496 "string_switch.m"
  while (MR_TRUE)
#line 496 "string_switch.m"
    {
#line 496 "string_switch.m"
      /* tailcall optimized into a loop */
#line 496 "string_switch.m"
      {
#line 496 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_16 == ll_backend__string_switch__TableSize_17);

#line 496 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 495 "string_switch.m"
          {
#line 495 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 495 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 495 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 495 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44;
#line 495 "string_switch.m"
          }
#line 496 "string_switch.m"
        else
#line 543 "string_switch.m"
          {
#line 543 "string_switch.m"
            MR_Word ll_backend__string_switch__MainRow_36;
#line 543 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;
#line 543 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
#line 543 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
#line 543 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
#line 543 "string_switch.m"
            MR_Integer ll_backend__string_switch__V_82_82;
#line 543 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
#line 532 "string_switch.m"
            MR_Word ll_backend__string_switch__SlotInfo_27;
#line 497 "string_switch.m"
            MR_Box ll_backend__string_switch__conv0_SlotInfo_27;

#line 497 "string_switch.m"
            {
#line 497 "string_switch.m"
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[10], ll_backend__string_switch__HashSlotMap_18, ll_backend__string_switch__Slot_16, &ll_backend__string_switch__conv0_SlotInfo_27);
            }
#line 497 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 497 "string_switch.m"
              {
#line 497 "string_switch.m"
                ll_backend__string_switch__SlotInfo_27 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_27);
#line 497 "string_switch.m"
                ll_backend__string_switch__succeeded = MR_TRUE;
#line 497 "string_switch.m"
              }
#line 532 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 498 "string_switch.m"
              {
#line 498 "string_switch.m"
                MR_String ll_backend__string_switch__String_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 0)));
#line 498 "string_switch.m"
                MR_Integer ll_backend__string_switch__Next_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 1)));
#line 498 "string_switch.m"
                MR_Word ll_backend__string_switch__Soln_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 2)));
#line 498 "string_switch.m"
                MR_Word ll_backend__string_switch__StringRval_31;
#line 498 "string_switch.m"
                MR_Word ll_backend__string_switch__NextSlotRval_32;
#line 498 "string_switch.m"
                MR_Word ll_backend__string_switch__V_53_53;
#line 498 "string_switch.m"
                MR_Word ll_backend__string_switch__V_54_54;

#line 499 "string_switch.m"
                {
#line 499 "string_switch.m"
                  ll_backend__string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 1) = ((MR_Box) (ll_backend__string_switch__String_28));
#line 499 "string_switch.m"
                }
#line 499 "string_switch.m"
                {
#line 499 "string_switch.m"
                  ll_backend__string_switch__StringRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 1) = ((MR_Box) (ll_backend__string_switch__V_53_53));
#line 499 "string_switch.m"
                }
#line 500 "string_switch.m"
                {
#line 500 "string_switch.m"
                  ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (ll_backend__string_switch__Next_29));
#line 500 "string_switch.m"
                }
#line 500 "string_switch.m"
                {
#line 500 "string_switch.m"
                  ll_backend__string_switch__NextSlotRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 500 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 1) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 500 "string_switch.m"
                }
#line 514 "string_switch.m"
                if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_30)) == (MR_mktag((MR_Integer) 0))))
#line 502 "string_switch.m"
                  {
#line 502 "string_switch.m"
                    MR_Word ll_backend__string_switch__OutVarRvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
#line 502 "string_switch.m"
                    MR_Word ll_backend__string_switch__ZeroRval_34;
#line 502 "string_switch.m"
                    MR_Word ll_backend__string_switch__MainRowTail_35;
#line 502 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_71_71;

#line 503 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 + (MR_Integer) 1);
#line 504 "string_switch.m"
                    ll_backend__string_switch__ZeroRval_34 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 508 "string_switch.m"
                    {
#line 508 "string_switch.m"
                      ll_backend__string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
#line 508 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_33));
#line 508 "string_switch.m"
                    }
#line 508 "string_switch.m"
                    {
#line 508 "string_switch.m"
                      ll_backend__string_switch__MainRowTail_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
#line 508 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 1) = ((MR_Box) (ll_backend__string_switch__V_71_71));
#line 508 "string_switch.m"
                    }
#line 509 "string_switch.m"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 511 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 510 "string_switch.m"
                      {
#line 510 "string_switch.m"
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 510 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
#line 510 "string_switch.m"
                      }
#line 511 "string_switch.m"
                    else
#line 512 "string_switch.m"
                      {
#line 512 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_72_72;

#line 512 "string_switch.m"
                        {
#line 512 "string_switch.m"
                          ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
#line 512 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
#line 512 "string_switch.m"
                        }
#line 512 "string_switch.m"
                        {
#line 512 "string_switch.m"
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 512 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 512 "string_switch.m"
                        }
#line 512 "string_switch.m"
                      }
#line 512 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
#line 512 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 512 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 502 "string_switch.m"
                  }
#line 514 "string_switch.m"
                else
#line 515 "string_switch.m"
                  {
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__TypeInfo_96_96;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__FirstSolnRvals_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__LaterSolns_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 1)));
#line 515 "string_switch.m"
                    MR_Integer ll_backend__string_switch__NumLaterSolns_39;
#line 515 "string_switch.m"
                    MR_Integer ll_backend__string_switch__FirstRowOffset_40;
#line 515 "string_switch.m"
                    MR_Integer ll_backend__string_switch__LastRowOffset_41;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__FirstRowRval_42;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__LastRowRval_43;
#line 515 "string_switch.m"
                    MR_Integer ll_backend__string_switch__V_57_57;
#line 515 "string_switch.m"
                    MR_Integer ll_backend__string_switch__V_58_58;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_60_60;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_61_61;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_62_62;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_66_66;
#line 515 "string_switch.m"
                    MR_Word ll_backend__string_switch__MainRowTail_88;

#line 516 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = (ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 + (MR_Integer) 1);
#line 6957 "ll_backend.string_switch.c"
                    ll_backend__string_switch__TypeInfo_96_96 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 517 "string_switch.m"
                    {
#line 517 "string_switch.m"
                      mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38, &ll_backend__string_switch__NumLaterSolns_39);
                    }
#line 518 "string_switch.m"
                    ll_backend__string_switch__FirstRowOffset_40 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 * ll_backend__string_switch__NumOutVars_20);
#line 519 "string_switch.m"
                    ll_backend__string_switch__V_58_58 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
#line 519 "string_switch.m"
                    ll_backend__string_switch__V_57_57 = (ll_backend__string_switch__V_58_58 - (MR_Integer) 1);
#line 520 "string_switch.m"
                    ll_backend__string_switch__LastRowOffset_41 = (ll_backend__string_switch__V_57_57 * ll_backend__string_switch__NumOutVars_20);
#line 521 "string_switch.m"
                    {
#line 521 "string_switch.m"
                      ll_backend__string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_60_60, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_40));
#line 521 "string_switch.m"
                    }
#line 521 "string_switch.m"
                    {
#line 521 "string_switch.m"
                      ll_backend__string_switch__FirstRowRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 1) = ((MR_Box) (ll_backend__string_switch__V_60_60));
#line 521 "string_switch.m"
                    }
#line 522 "string_switch.m"
                    {
#line 522 "string_switch.m"
                      ll_backend__string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_61_61, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_41));
#line 522 "string_switch.m"
                    }
#line 522 "string_switch.m"
                    {
#line 522 "string_switch.m"
                      ll_backend__string_switch__LastRowRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 1) = ((MR_Box) (ll_backend__string_switch__V_61_61));
#line 522 "string_switch.m"
                    }
#line 523 "string_switch.m"
                    {
#line 523 "string_switch.m"
                      ll_backend__string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_43));
#line 523 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_37));
#line 523 "string_switch.m"
                    }
#line 523 "string_switch.m"
                    {
#line 523 "string_switch.m"
                      ll_backend__string_switch__MainRowTail_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_42));
#line 523 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 1) = ((MR_Box) (ll_backend__string_switch__V_62_62));
#line 523 "string_switch.m"
                    }
#line 524 "string_switch.m"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 526 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 525 "string_switch.m"
                      {
#line 525 "string_switch.m"
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 525 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
#line 525 "string_switch.m"
                      }
#line 526 "string_switch.m"
                    else
#line 527 "string_switch.m"
                      {
#line 527 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_63_63;

#line 527 "string_switch.m"
                        {
#line 527 "string_switch.m"
                          ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
#line 527 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
#line 527 "string_switch.m"
                        }
#line 527 "string_switch.m"
                        {
#line 527 "string_switch.m"
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 527 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 527 "string_switch.m"
                        }
#line 527 "string_switch.m"
                      }
#line 529 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
#line 530 "string_switch.m"
                    {
#line 530 "string_switch.m"
                      ll_backend__string_switch__V_66_66 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38);
                    }
#line 530 "string_switch.m"
                    {
#line 530 "string_switch.m"
                      ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47, ll_backend__string_switch__V_66_66);
                    }
#line 530 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 515 "string_switch.m"
                  }
#line 498 "string_switch.m"
              }
#line 532 "string_switch.m"
            else
#line 534 "string_switch.m"
              {
#line 534 "string_switch.m"
                MR_Word ll_backend__string_switch__V_79_79;
#line 534 "string_switch.m"
                MR_Word ll_backend__string_switch__ZeroRval_91 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 534 "string_switch.m"
                MR_Word ll_backend__string_switch__MainRowTail_92;

#line 537 "string_switch.m"
                {
#line 537 "string_switch.m"
                  ll_backend__string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 537 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) (ll_backend__string_switch__DummyOutRvals_19));
#line 537 "string_switch.m"
                }
#line 537 "string_switch.m"
                {
#line 537 "string_switch.m"
                  ll_backend__string_switch__MainRowTail_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 537 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 1) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 537 "string_switch.m"
                }
#line 538 "string_switch.m"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 540 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 539 "string_switch.m"
                  {
#line 539 "string_switch.m"
                    ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "string_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 539 "string_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
#line 539 "string_switch.m"
                  }
#line 540 "string_switch.m"
                else
#line 541 "string_switch.m"
                  {
#line 541 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_80_80;

#line 541 "string_switch.m"
                    {
#line 541 "string_switch.m"
                      ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22])));
#line 541 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
#line 541 "string_switch.m"
                    }
#line 541 "string_switch.m"
                    {
#line 541 "string_switch.m"
                      ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 541 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 541 "string_switch.m"
                    }
#line 541 "string_switch.m"
                  }
#line 541 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 541 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 541 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 541 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
#line 534 "string_switch.m"
              }
#line 544 "string_switch.m"
            {
#line 544 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_36));
#line 544 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44));
#line 544 "string_switch.m"
            }
#line 545 "string_switch.m"
            ll_backend__string_switch__V_82_82 = (ll_backend__string_switch__Slot_16 + (MR_Integer) 1);
#line 545 "string_switch.m"
            /* direct tailcall eliminated */
#line 545 "string_switch.m"
            {
#line 545 "string_switch.m"
              MR_Integer ll_backend__string_switch__Slot__tmp_copy_16 = ll_backend__string_switch__V_82_82;
#line 545 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_44 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
#line 545 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0__tmp_copy_46 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
#line 545 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_47 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
#line 545 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_49 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
#line 545 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0__tmp_copy_51 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;

#line 545 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0__tmp_copy_51;
#line 545 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_49;
#line 545 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_47;
#line 545 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0__tmp_copy_46;
#line 545 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_44;
#line 545 "string_switch.m"
              ll_backend__string_switch__Slot_16 = ll_backend__string_switch__Slot__tmp_copy_16;
#line 545 "string_switch.m"
            }
#line 545 "string_switch.m"
            continue;
#line 543 "string_switch.m"
          }
#line 496 "string_switch.m"
      }
#line 496 "string_switch.m"
      break;
#line 496 "string_switch.m"
    }
#line 484 "string_switch.m"
}

#line 434 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_3(
#line 434 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 434 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 434 "string_switch.m"
{
#line 434 "string_switch.m"
  {
#line 434 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 434 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 434 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 434 "string_switch.m"
    {
#line 434 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 434 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 434 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 434 "string_switch.m"
  }
#line 434 "string_switch.m"
}

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_2(
#line 422 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 422 "string_switch.m"
{
#line 422 "string_switch.m"
  {
#line 422 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 422 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
#line 422 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 422 "string_switch.m"
  }
#line 422 "string_switch.m"
}

#line 422 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_1(
#line 422 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 422 "string_switch.m"
{
#line 422 "string_switch.m"
  {
#line 422 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 422 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      return ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__422__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
#line 422 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 422 "string_switch.m"
  }
#line 422 "string_switch.m"
}

#line 375 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0(
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_16,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_17,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_18,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_19,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_20,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_21,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_22,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_23,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_24,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_25,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_68,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_69,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_27,
#line 375 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_70,
#line 375 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_71)
#line 375 "string_switch.m"
{
#line 384 "string_switch.m"
  {
#line 384 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_153_153;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_162_162;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_163_163;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_29;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_30;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_31;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_32;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_33;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_34;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_35;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_36;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_37;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_38;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumPrevColumns_39;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_40;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRowTypes_41;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_42;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__AddTrailOps_44;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyOutRvals_46;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_47;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__RevMainRows_48;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_49;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_50;
#line 384 "string_switch.m"
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_51;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRows_52;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArray_53;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_54;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_55;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedKinds_56;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddr_57;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddrRval_58;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddr_59;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_60;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__BaseReg_61;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_62;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_63;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__LookupResultsCode_64;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_65;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSearchCode_66;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_67;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_72_72;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_117_117;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_118_118;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_120_120;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_121_121;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_124_124;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_125_125;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_127_127;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_128_128;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_131_131;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_132_132;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_133_133;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_134_134;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_135_135;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_138_138;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_142_142;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_143_143;
#line 384 "string_switch.m"
    MR_Word ll_backend__string_switch__V_145_145;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_146_146;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_147_147;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_148_148;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_149_149;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_150_150;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_151_151;
#line 464 "string_switch.m"
    MR_Word ll_backend__string_switch__V_152_152;

#line 390 "string_switch.m"
    {
#line 390 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_4_p_0(ll_backend__string_switch__CanFail_23, &ll_backend__string_switch__HashSwitchInfo_29, ll_backend__string_switch__STATE_VARIABLE_CI_0_70, &ll_backend__string_switch__STATE_VARIABLE_CI_72_72);
    }
#line 7492 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_153_153 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 391 "string_switch.m"
    {
#line 391 "string_switch.m"
      ll_backend__string_switch__CommentCode_30 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[24])));
    }
#line 396 "string_switch.m"
    {
#line 396 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[8], ll_backend__string_switch__CaseSolns_17, (MR_Integer) 1, &ll_backend__string_switch__TableSize_31, &ll_backend__string_switch__HashSlotsMap_32, &ll_backend__string_switch__HashOp_33, &ll_backend__string_switch__NumCollisions_34);
    }
#line 398 "string_switch.m"
    ll_backend__string_switch__HashMask_35 = (ll_backend__string_switch__TableSize_31 - (MR_Integer) 1);
#line 400 "string_switch.m"
    {
#line 400 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__OutVars_20, &ll_backend__string_switch__NumOutVars_36);
    }
#line 403 "string_switch.m"
    {
#line 403 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_36, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_37);
    }
#line 404 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_34 == (MR_Integer) 0);
#line 410 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 405 "string_switch.m"
      {
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_82_82;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_84_84;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_87_87;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_89_89;

#line 405 "string_switch.m"
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 3 + ll_backend__string_switch__NumOutVars_36);
#line 406 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_39 = (MR_Integer) 1;
#line 408 "string_switch.m"
        {
#line 408 "string_switch.m"
          ll_backend__string_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) ((MR_Integer) 1));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_37));
#line 408 "string_switch.m"
        }
#line 408 "string_switch.m"
        {
#line 408 "string_switch.m"
          ll_backend__string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) ((MR_Integer) 1));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_82_82, 1) = ((MR_Box) (ll_backend__string_switch__V_84_84));
#line 408 "string_switch.m"
        }
#line 407 "string_switch.m"
        {
#line 407 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_40, 0) = ((MR_Box) ((MR_Integer) 0));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 407 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) ((MR_Integer) 7));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_21));
#line 409 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) ((MR_Integer) 7));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 409 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__MainRowTypes_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_41, 0) = ((MR_Box) ((MR_Integer) 10));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_41, 1) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 409 "string_switch.m"
        }
#line 405 "string_switch.m"
      }
#line 410 "string_switch.m"
    else
#line 411 "string_switch.m"
      {
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_95_95;
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_97_97;
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_100_100;
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_102_102;
#line 411 "string_switch.m"
        MR_Word ll_backend__string_switch__V_104_104;

#line 411 "string_switch.m"
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 4 + ll_backend__string_switch__NumOutVars_36);
#line 412 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_39 = (MR_Integer) 2;
#line 414 "string_switch.m"
        {
#line 414 "string_switch.m"
          ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 0) = ((MR_Box) ((MR_Integer) 1));
#line 414 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_37));
#line 414 "string_switch.m"
        }
#line 414 "string_switch.m"
        {
#line 414 "string_switch.m"
          ll_backend__string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_95_95, 0) = ((MR_Box) ((MR_Integer) 1));
#line 414 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_95_95, 1) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 414 "string_switch.m"
        }
#line 413 "string_switch.m"
        {
#line 413 "string_switch.m"
          ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) ((MR_Integer) 1));
#line 413 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (ll_backend__string_switch__V_95_95));
#line 413 "string_switch.m"
        }
#line 413 "string_switch.m"
        {
#line 413 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_40, 0) = ((MR_Box) ((MR_Integer) 0));
#line 413 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 413 "string_switch.m"
        }
#line 416 "string_switch.m"
        {
#line 416 "string_switch.m"
          ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) ((MR_Integer) 7));
#line 416 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_21));
#line 416 "string_switch.m"
        }
#line 415 "string_switch.m"
        {
#line 415 "string_switch.m"
          ll_backend__string_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) ((MR_Integer) 7));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_102_102, 1) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 415 "string_switch.m"
        }
#line 415 "string_switch.m"
        {
#line 415 "string_switch.m"
          ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) ((MR_Integer) 7));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 415 "string_switch.m"
        }
#line 415 "string_switch.m"
        {
#line 415 "string_switch.m"
          ll_backend__string_switch__MainRowTypes_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_41, 0) = ((MR_Box) ((MR_Integer) 10));
#line 415 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_41, 1) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 415 "string_switch.m"
        }
#line 411 "string_switch.m"
      }
#line 418 "string_switch.m"
    {
#line 418 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_42, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_40));
#line 418 "string_switch.m"
    }
#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      ll_backend__string_switch__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[1]));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_1));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_20));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "string_switch.m"
    }
#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      ll_backend__string_switch__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_7[0]));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0_2));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 422 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_106_106, 3) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 422 "string_switch.m"
    }
#line 422 "string_switch.m"
    {
#line 422 "string_switch.m"
      mercury__require__expect_4_p_0(ll_backend__string_switch__V_106_106, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/15", (MR_String) "no OutVars");
    }
#line 427 "string_switch.m"
    if ((ll_backend__string_switch__GoalsMayModifyTrail_19 == (MR_Integer) 0))
#line 429 "string_switch.m"
      ll_backend__string_switch__AddTrailOps_44 = (MR_Integer) 1;
#line 427 "string_switch.m"
    else
#line 425 "string_switch.m"
      {
#line 425 "string_switch.m"
        ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_72_72, &ll_backend__string_switch__AddTrailOps_44);
      }
#line 434 "string_switch.m"
    {
#line 434 "string_switch.m"
      ll_backend__string_switch__DummyOutRvals_46 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[8], ll_backend__string_switch__OutTypes_21);
    }
#line 7759 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_162_162 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 435 "string_switch.m"
    {
#line 435 "string_switch.m"
      ll_backend__string_switch__LaterSolnArrayCord0_47 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_162_162, ((MR_Box) (ll_backend__string_switch__DummyOutRvals_46)));
    }
#line 436 "string_switch.m"
    {
#line 436 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_31, ll_backend__string_switch__HashSlotsMap_32, ll_backend__string_switch__DummyOutRvals_46, ll_backend__string_switch__NumOutVars_36, ll_backend__string_switch__NumCollisions_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_48, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_47, &ll_backend__string_switch__LaterSolnArrayCord_49, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_50, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_51);
    }
#line 441 "string_switch.m"
    {
#line 441 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_162_162, ll_backend__string_switch__RevMainRows_48, &ll_backend__string_switch__MainRows_52);
    }
#line 442 "string_switch.m"
    {
#line 442 "string_switch.m"
      ll_backend__string_switch__LaterSolnArray_53 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_162_162, ll_backend__string_switch__LaterSolnArrayCord_49);
    }
#line 444 "string_switch.m"
    {
#line 444 "string_switch.m"
      ll_backend__string_switch__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_118_118, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_50));
#line 444 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_118_118, 1) = ((MR_Box) ((MR_Integer) 1));
#line 444 "string_switch.m"
    }
#line 445 "string_switch.m"
    {
#line 445 "string_switch.m"
      ll_backend__string_switch__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_121_121, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_51));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_121_121, 1) = ((MR_Box) ((MR_Integer) 2));
#line 445 "string_switch.m"
    }
#line 445 "string_switch.m"
    {
#line 445 "string_switch.m"
      ll_backend__string_switch__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_120_120, 0) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "string_switch.m"
    }
#line 444 "string_switch.m"
    {
#line 444 "string_switch.m"
      ll_backend__string_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_117_117, 0) = ((MR_Box) (ll_backend__string_switch__V_118_118));
#line 444 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_117_117, 1) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 444 "string_switch.m"
    }
#line 7821 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_163_163 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
#line 444 "string_switch.m"
    {
#line 444 "string_switch.m"
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_163_163, ll_backend__string_switch__V_117_117, &ll_backend__string_switch__AscendingSortedCountKinds_54);
    }
#line 447 "string_switch.m"
    {
#line 447 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_163_163, ll_backend__string_switch__AscendingSortedCountKinds_54, &ll_backend__string_switch__DescendingSortedCountKinds_55);
    }
#line 448 "string_switch.m"
    {
#line 448 "string_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_55, &ll_backend__string_switch__DescendingSortedKinds_56);
    }
#line 450 "string_switch.m"
    {
#line 450 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_41, ll_backend__string_switch__MainRows_52, &ll_backend__string_switch__MainVectorAddr_57, ll_backend__string_switch__STATE_VARIABLE_CI_72_72, &ll_backend__string_switch__STATE_VARIABLE_CI_124_124);
    }
#line 451 "string_switch.m"
    {
#line 451 "string_switch.m"
      ll_backend__string_switch__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 451 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 451 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_125_125, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_57));
#line 451 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_125_125, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "string_switch.m"
    }
#line 451 "string_switch.m"
    {
#line 451 "string_switch.m"
      ll_backend__string_switch__MainVectorAddrRval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_58, 1) = ((MR_Box) (ll_backend__string_switch__V_125_125));
#line 451 "string_switch.m"
    }
#line 452 "string_switch.m"
    {
#line 452 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__LaterSolnArray_53, &ll_backend__string_switch__LaterVectorAddr_59, ll_backend__string_switch__STATE_VARIABLE_CI_124_124, &ll_backend__string_switch__STATE_VARIABLE_CI_127_127);
    }
#line 453 "string_switch.m"
    {
#line 453 "string_switch.m"
      ll_backend__string_switch__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 453 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 453 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_59));
#line 453 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "string_switch.m"
    }
#line 453 "string_switch.m"
    {
#line 453 "string_switch.m"
      ll_backend__string_switch__LaterVectorAddrRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_60, 1) = ((MR_Box) (ll_backend__string_switch__V_128_128));
#line 453 "string_switch.m"
    }
#line 458 "string_switch.m"
    {
#line 458 "string_switch.m"
      ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_25, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_61, ll_backend__string_switch__STATE_VARIABLE_CI_127_127, &ll_backend__string_switch__STATE_VARIABLE_CI_131_131);
    }
#line 464 "string_switch.m"
    ll_backend__string_switch__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 0)));
#line 464 "string_switch.m"
    ll_backend__string_switch__RowStartReg_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 1)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 2)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 3)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 4)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 5)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 6)));
#line 464 "string_switch.m"
    ll_backend__string_switch__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_29, (MR_Integer) 7)));
#line 467 "string_switch.m"
    {
#line 467 "string_switch.m"
      ll_backend__string_switch__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_62));
#line 467 "string_switch.m"
    }
#line 467 "string_switch.m"
    {
#line 467 "string_switch.m"
      ll_backend__string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_135_135, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_58));
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_135_135, 2) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 467 "string_switch.m"
    }
#line 467 "string_switch.m"
    {
#line 467 "string_switch.m"
      ll_backend__string_switch__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 467 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_134_134, 1) = ((MR_Box) (ll_backend__string_switch__V_135_135));
#line 467 "string_switch.m"
    }
#line 466 "string_switch.m"
    {
#line 466 "string_switch.m"
      ll_backend__string_switch__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 466 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 466 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_133_133, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_61));
#line 466 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_133_133, 2) = ((MR_Box) (ll_backend__string_switch__V_134_134));
#line 466 "string_switch.m"
    }
#line 466 "string_switch.m"
    {
#line 466 "string_switch.m"
      ll_backend__string_switch__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 0) = ((MR_Box) (ll_backend__string_switch__V_133_133));
#line 466 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 466 "string_switch.m"
    }
#line 465 "string_switch.m"
    {
#line 465 "string_switch.m"
      ll_backend__string_switch__SetBaseRegCode_63 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ((MR_Box) (ll_backend__string_switch__V_132_132)));
    }
#line 470 "string_switch.m"
    {
#line 470 "string_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_15_p_0(ll_backend__string_switch__DescendingSortedKinds_56, ll_backend__string_switch__NumPrevColumns_39, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__ResumeVars_18, ll_backend__string_switch__EndLabel_24, ll_backend__string_switch__StoreMap_25, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__AddTrailOps_44, ll_backend__string_switch__BaseReg_61, ll_backend__string_switch__LaterVectorAddrRval_60, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_68, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_69, &ll_backend__string_switch__LookupResultsCode_64, ll_backend__string_switch__STATE_VARIABLE_CI_131_131, ll_backend__string_switch__STATE_VARIABLE_CI_71);
    }
#line 473 "string_switch.m"
    {
#line 473 "string_switch.m"
      ll_backend__string_switch__MatchCode_65 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ll_backend__string_switch__SetBaseRegCode_63, ll_backend__string_switch__LookupResultsCode_64);
    }
#line 475 "string_switch.m"
    {
#line 475 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_29, ll_backend__string_switch__VarRval_16, ll_backend__string_switch__MainVectorAddrRval_58, ll_backend__string_switch__ArrayElemType_42, ll_backend__string_switch__NumColumns_38, ll_backend__string_switch__HashOp_33, ll_backend__string_switch__HashMask_35, ll_backend__string_switch__NumCollisions_34, ll_backend__string_switch__MatchCode_65, &ll_backend__string_switch__HashSearchCode_66);
    }
#line 479 "string_switch.m"
    {
#line 479 "string_switch.m"
      ll_backend__string_switch__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 479 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_143_143, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_24));
#line 479 "string_switch.m"
    }
#line 479 "string_switch.m"
    {
#line 479 "string_switch.m"
      ll_backend__string_switch__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_142_142, 0) = ((MR_Box) (ll_backend__string_switch__V_143_143));
#line 479 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_142_142, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
#line 479 "string_switch.m"
    }
#line 478 "string_switch.m"
    {
#line 478 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_67 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ((MR_Box) (ll_backend__string_switch__V_142_142)));
    }
#line 482 "string_switch.m"
    {
#line 482 "string_switch.m"
      ll_backend__string_switch__V_145_145 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ll_backend__string_switch__HashSearchCode_66, ll_backend__string_switch__EndLabelCode_67);
    }
#line 482 "string_switch.m"
    {
#line 482 "string_switch.m"
      *ll_backend__string_switch__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_153_153, ll_backend__string_switch__CommentCode_30, ll_backend__string_switch__V_145_145);
    }
#line 384 "string_switch.m"
  }
#line 375 "string_switch.m"
}

#line 345 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_8,
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_9,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_10,
#line 345 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_11,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
#line 345 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
#line 345 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22)
#line 345 "string_switch.m"
{
#line 353 "string_switch.m"
  while (MR_TRUE)
#line 353 "string_switch.m"
    {
#line 353 "string_switch.m"
      /* tailcall optimized into a loop */
#line 353 "string_switch.m"
      {
#line 353 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_8 == ll_backend__string_switch__TableSize_9);

#line 353 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 351 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_RevRows_22 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21;
#line 353 "string_switch.m"
        else
#line 362 "string_switch.m"
          {
#line 362 "string_switch.m"
            MR_Word ll_backend__string_switch__OutVarRvals_17;
#line 362 "string_switch.m"
            MR_Word ll_backend__string_switch__NextSlotRval_18;
#line 362 "string_switch.m"
            MR_Word ll_backend__string_switch__StringRval_19;
#line 362 "string_switch.m"
            MR_Word ll_backend__string_switch__Row_20;
#line 362 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;
#line 362 "string_switch.m"
            MR_Integer ll_backend__string_switch__V_31_31;
#line 358 "string_switch.m"
            MR_Word ll_backend__string_switch__SlotInfo_14;
#line 354 "string_switch.m"
            MR_Box ll_backend__string_switch__conv0_SlotInfo_14;

#line 354 "string_switch.m"
            {
#line 354 "string_switch.m"
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__HashSlotMap_10, ll_backend__string_switch__Slot_8, &ll_backend__string_switch__conv0_SlotInfo_14);
            }
#line 354 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 354 "string_switch.m"
              {
#line 354 "string_switch.m"
                ll_backend__string_switch__SlotInfo_14 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_14);
#line 354 "string_switch.m"
                ll_backend__string_switch__succeeded = MR_TRUE;
#line 354 "string_switch.m"
              }
#line 358 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 355 "string_switch.m"
              {
#line 355 "string_switch.m"
                MR_String ll_backend__string_switch__String_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 0)));
#line 355 "string_switch.m"
                MR_Integer ll_backend__string_switch__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 1)));
#line 355 "string_switch.m"
                MR_Word ll_backend__string_switch__V_23_23;
#line 355 "string_switch.m"
                MR_Word ll_backend__string_switch__V_24_24;

#line 355 "string_switch.m"
                ll_backend__string_switch__OutVarRvals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 2)));
#line 356 "string_switch.m"
                {
#line 356 "string_switch.m"
                  ll_backend__string_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_23_23, 0) = ((MR_Box) (ll_backend__string_switch__Next_16));
#line 356 "string_switch.m"
                }
#line 356 "string_switch.m"
                {
#line 356 "string_switch.m"
                  ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 1) = ((MR_Box) (ll_backend__string_switch__V_23_23));
#line 356 "string_switch.m"
                }
#line 357 "string_switch.m"
                {
#line 357 "string_switch.m"
                  ll_backend__string_switch__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 357 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_24_24, 1) = ((MR_Box) (ll_backend__string_switch__String_15));
#line 357 "string_switch.m"
                }
#line 357 "string_switch.m"
                {
#line 357 "string_switch.m"
                  ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 357 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 1) = ((MR_Box) (ll_backend__string_switch__V_24_24));
#line 357 "string_switch.m"
                }
#line 355 "string_switch.m"
              }
#line 358 "string_switch.m"
            else
#line 359 "string_switch.m"
              {
#line 359 "string_switch.m"
                ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 360 "string_switch.m"
                ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22]);
#line 361 "string_switch.m"
                ll_backend__string_switch__OutVarRvals_17 = ll_backend__string_switch__DummyOutRvals_12;
#line 359 "string_switch.m"
              }
#line 363 "string_switch.m"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_11 == (MR_Integer) 0);
#line 365 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 364 "string_switch.m"
              {
#line 364 "string_switch.m"
                ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "string_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
#line 364 "string_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
#line 364 "string_switch.m"
              }
#line 365 "string_switch.m"
            else
#line 366 "string_switch.m"
              {
#line 366 "string_switch.m"
                MR_Word ll_backend__string_switch__V_29_29;

#line 366 "string_switch.m"
                {
#line 366 "string_switch.m"
                  ll_backend__string_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_29_29, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_18));
#line 366 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_29_29, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
#line 366 "string_switch.m"
                }
#line 366 "string_switch.m"
                {
#line 366 "string_switch.m"
                  ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
#line 366 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__V_29_29));
#line 366 "string_switch.m"
                }
#line 366 "string_switch.m"
              }
#line 368 "string_switch.m"
            {
#line 368 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 0) = ((MR_Box) (ll_backend__string_switch__Row_20));
#line 368 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21));
#line 368 "string_switch.m"
            }
#line 369 "string_switch.m"
            ll_backend__string_switch__V_31_31 = (ll_backend__string_switch__Slot_8 + (MR_Integer) 1);
#line 369 "string_switch.m"
            /* direct tailcall eliminated */
#line 369 "string_switch.m"
            {
#line 369 "string_switch.m"
              MR_Integer ll_backend__string_switch__Slot__tmp_copy_8 = ll_backend__string_switch__V_31_31;
#line 369 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_21 = ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;

#line 369 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_21;
#line 369 "string_switch.m"
              ll_backend__string_switch__Slot_8 = ll_backend__string_switch__Slot__tmp_copy_8;
#line 369 "string_switch.m"
            }
#line 369 "string_switch.m"
            continue;
#line 362 "string_switch.m"
          }
#line 353 "string_switch.m"
      }
#line 353 "string_switch.m"
      break;
#line 353 "string_switch.m"
    }
#line 345 "string_switch.m"
}

#line 271 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1(
#line 271 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 271 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 271 "string_switch.m"
{
#line 271 "string_switch.m"
  {
#line 271 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 271 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 271 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 271 "string_switch.m"
    {
#line 271 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 271 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 271 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 271 "string_switch.m"
  }
#line 271 "string_switch.m"
}

#line 242 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_15,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_16,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_17,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_18,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_19,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_20,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_21,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_23,
#line 242 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
#line 242 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59)
#line 242 "string_switch.m"
{
#line 251 "string_switch.m"
  {
#line 251 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_114_114;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_115_115;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_25;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_26;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_27;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_28;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_29;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_30;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_31;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_32;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_33;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyOutRvals_34;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumPrevColumns_35;
#line 251 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_36;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_37;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_38;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_39;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__RevVectorRvals_40;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorRvals_41;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddr_42;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddrRval_43;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_44;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchEndCode_50;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__GotoEndLabelCode_52;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_53;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSearchCode_54;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_55;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_60_60;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_81_81;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 251 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;

#line 257 "string_switch.m"
    {
#line 257 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_4_p_0(ll_backend__string_switch__CanFail_19, &ll_backend__string_switch__HashSwitchInfo_25, ll_backend__string_switch__STATE_VARIABLE_CI_0_58, &ll_backend__string_switch__STATE_VARIABLE_CI_60_60);
    }
#line 8392 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_114_114 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 258 "string_switch.m"
    {
#line 258 "string_switch.m"
      ll_backend__string_switch__CommentCode_26 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[23])));
    }
#line 8399 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_115_115 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 263 "string_switch.m"
    {
#line 263 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeInfo_115_115, ll_backend__string_switch__CaseValues_15, (MR_Integer) 1, &ll_backend__string_switch__TableSize_27, &ll_backend__string_switch__HashSlotsMap_28, &ll_backend__string_switch__HashOp_29, &ll_backend__string_switch__NumCollisions_30);
    }
#line 265 "string_switch.m"
    ll_backend__string_switch__HashMask_31 = (ll_backend__string_switch__TableSize_27 - (MR_Integer) 1);
#line 267 "string_switch.m"
    {
#line 267 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__OutVars_16, &ll_backend__string_switch__NumOutVars_32);
    }
#line 270 "string_switch.m"
    {
#line 270 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_32, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_33);
    }
#line 271 "string_switch.m"
    {
#line 271 "string_switch.m"
      ll_backend__string_switch__DummyOutRvals_34 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[7], ll_backend__string_switch__OutTypes_17);
    }
#line 272 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_30 == (MR_Integer) 0);
#line 277 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 273 "string_switch.m"
      {
#line 273 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_35 = (MR_Integer) 1;
#line 274 "string_switch.m"
        ll_backend__string_switch__NumColumns_36 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_32);
#line 275 "string_switch.m"
        {
#line 275 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_37, 0) = ((MR_Box) ((MR_Integer) 0));
#line 275 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_37, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_33));
#line 275 "string_switch.m"
        }
#line 276 "string_switch.m"
        {
#line 276 "string_switch.m"
          ll_backend__string_switch__RowElemTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_38, 0) = ((MR_Box) ((MR_Integer) 10));
#line 276 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_38, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_17));
#line 276 "string_switch.m"
        }
#line 273 "string_switch.m"
      }
#line 277 "string_switch.m"
    else
#line 278 "string_switch.m"
      {
#line 278 "string_switch.m"
        MR_Word ll_backend__string_switch__V_74_74;
#line 278 "string_switch.m"
        MR_Word ll_backend__string_switch__V_77_77;

#line 278 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_35 = (MR_Integer) 2;
#line 279 "string_switch.m"
        ll_backend__string_switch__NumColumns_36 = ((MR_Integer) 2 + ll_backend__string_switch__NumOutVars_32);
#line 280 "string_switch.m"
        {
#line 280 "string_switch.m"
          ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) ((MR_Integer) 1));
#line 280 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_33));
#line 280 "string_switch.m"
        }
#line 280 "string_switch.m"
        {
#line 280 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_37, 0) = ((MR_Box) ((MR_Integer) 0));
#line 280 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_37, 1) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 280 "string_switch.m"
        }
#line 281 "string_switch.m"
        {
#line 281 "string_switch.m"
          ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) ((MR_Integer) 7));
#line 281 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_17));
#line 281 "string_switch.m"
        }
#line 281 "string_switch.m"
        {
#line 281 "string_switch.m"
          ll_backend__string_switch__RowElemTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_38, 0) = ((MR_Box) ((MR_Integer) 10));
#line 281 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_38, 1) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 281 "string_switch.m"
        }
#line 278 "string_switch.m"
      }
#line 283 "string_switch.m"
    {
#line 283 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_39, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_37));
#line 283 "string_switch.m"
    }
#line 286 "string_switch.m"
    {
#line 286 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_27, ll_backend__string_switch__HashSlotsMap_28, ll_backend__string_switch__NumCollisions_30, ll_backend__string_switch__DummyOutRvals_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_40);
    }
#line 288 "string_switch.m"
    {
#line 288 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_115_115, ll_backend__string_switch__RevVectorRvals_40, &ll_backend__string_switch__VectorRvals_41);
    }
#line 289 "string_switch.m"
    {
#line 289 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_38, ll_backend__string_switch__VectorRvals_41, &ll_backend__string_switch__VectorAddr_42, ll_backend__string_switch__STATE_VARIABLE_CI_60_60, &ll_backend__string_switch__STATE_VARIABLE_CI_81_81);
    }
#line 290 "string_switch.m"
    {
#line 290 "string_switch.m"
      ll_backend__string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 290 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 290 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_42));
#line 290 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "string_switch.m"
    }
#line 290 "string_switch.m"
    {
#line 290 "string_switch.m"
      ll_backend__string_switch__VectorAddrRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_43, 1) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 290 "string_switch.m"
    }
#line 8555 "ll_backend.string_switch.c"
    if ((ll_backend__string_switch__OutVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8557 "ll_backend.string_switch.c"
      {
#line 294 "string_switch.m"
        {
#line 294 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_44 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_114_114);
        }
#line 320 "string_switch.m"
        {
#line 320 "string_switch.m"
          ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_21, ll_backend__string_switch__Liveness_18, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57, &ll_backend__string_switch__BranchEndCode_50, ll_backend__string_switch__STATE_VARIABLE_CI_81_81, ll_backend__string_switch__STATE_VARIABLE_CI_59);
        }
#line 8569 "ll_backend.string_switch.c"
      }
#line 8571 "ll_backend.string_switch.c"
    else
#line 8573 "ll_backend.string_switch.c"
      {
#line 8575 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__RowStartReg_49;
#line 8577 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__FinalBaseReg_51;
#line 8579 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_85_85;
#line 8581 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_86_86;
#line 8583 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_87_87;
#line 8585 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_88_88;
#line 8587 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_89_89;
#line 8589 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__V_92_92;
#line 8591 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_94_124;
#line 8593 "ll_backend.string_switch.c"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_96_125;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_107_107;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_108_108;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_109_109;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_110_110;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_111_111;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_112_112;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_113_113;

#line 301 "string_switch.m"
        {
#line 301 "string_switch.m"
          ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_21, (MR_Integer) 0, &ll_backend__string_switch__FinalBaseReg_51, ll_backend__string_switch__STATE_VARIABLE_CI_81_81, &ll_backend__string_switch__STATE_VARIABLE_CI_85_85);
        }
#line 308 "string_switch.m"
        ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 0)));
#line 308 "string_switch.m"
        ll_backend__string_switch__RowStartReg_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 1)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 2)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 3)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 4)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 5)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 6)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_25, (MR_Integer) 7)));
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_92_92, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_49));
#line 311 "string_switch.m"
        }
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_43));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_89_89, 2) = ((MR_Box) (ll_backend__string_switch__V_92_92));
#line 311 "string_switch.m"
        }
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 1) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 311 "string_switch.m"
        }
#line 310 "string_switch.m"
        {
#line 310 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (ll_backend__string_switch__FinalBaseReg_51));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 2) = ((MR_Box) (ll_backend__string_switch__V_88_88));
#line 310 "string_switch.m"
        }
#line 310 "string_switch.m"
        {
#line 310 "string_switch.m"
          ll_backend__string_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_86_86, 0) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_86_86, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 310 "string_switch.m"
        }
#line 309 "string_switch.m"
        {
#line 309 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_44 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__V_86_86)));
        }
#line 314 "string_switch.m"
        {
#line 314 "string_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__string_switch__OutVars_16, ll_backend__string_switch__NumPrevColumns_35, ll_backend__string_switch__FinalBaseReg_51, ll_backend__string_switch__STATE_VARIABLE_CI_85_85, &ll_backend__string_switch__STATE_VARIABLE_CI_94_124);
        }
#line 320 "string_switch.m"
        {
#line 320 "string_switch.m"
          ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_21, ll_backend__string_switch__Liveness_18, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57, &ll_backend__string_switch__BranchEndCode_50, ll_backend__string_switch__STATE_VARIABLE_CI_94_124, &ll_backend__string_switch__STATE_VARIABLE_CI_96_125);
        }
#line 326 "string_switch.m"
        {
#line 326 "string_switch.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__string_switch__FinalBaseReg_51, ll_backend__string_switch__STATE_VARIABLE_CI_96_125, ll_backend__string_switch__STATE_VARIABLE_CI_59);
        }
#line 8703 "ll_backend.string_switch.c"
      }
#line 330 "string_switch.m"
    {
#line 330 "string_switch.m"
      ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 330 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) (ll_backend__string_switch__EndLabel_20));
#line 330 "string_switch.m"
    }
#line 330 "string_switch.m"
    {
#line 330 "string_switch.m"
      ll_backend__string_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 330 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 1) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 330 "string_switch.m"
    }
#line 330 "string_switch.m"
    {
#line 330 "string_switch.m"
      ll_backend__string_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) (ll_backend__string_switch__V_99_99));
#line 330 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "go to end of simple hash string lookup switch"));
#line 330 "string_switch.m"
    }
#line 329 "string_switch.m"
    {
#line 329 "string_switch.m"
      ll_backend__string_switch__GotoEndLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__V_98_98)));
    }
#line 333 "string_switch.m"
    {
#line 333 "string_switch.m"
      ll_backend__string_switch__V_102_102 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__BranchEndCode_50, ll_backend__string_switch__GotoEndLabelCode_52);
    }
#line 333 "string_switch.m"
    {
#line 333 "string_switch.m"
      ll_backend__string_switch__MatchCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__SetBaseRegCode_44, ll_backend__string_switch__V_102_102);
    }
#line 334 "string_switch.m"
    {
#line 334 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_25, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__VectorAddrRval_43, ll_backend__string_switch__ArrayElemType_39, ll_backend__string_switch__NumColumns_36, ll_backend__string_switch__HashOp_29, ll_backend__string_switch__HashMask_31, ll_backend__string_switch__NumCollisions_30, ll_backend__string_switch__MatchCode_53, &ll_backend__string_switch__HashSearchCode_54);
    }
#line 339 "string_switch.m"
    {
#line 339 "string_switch.m"
      ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 339 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_104_104, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_20));
#line 339 "string_switch.m"
    }
#line 339 "string_switch.m"
    {
#line 339 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 339 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
#line 339 "string_switch.m"
    }
#line 338 "string_switch.m"
    {
#line 338 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_55 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ((MR_Box) (ll_backend__string_switch__V_103_103)));
    }
#line 343 "string_switch.m"
    {
#line 343 "string_switch.m"
      ll_backend__string_switch__V_106_106 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__HashSearchCode_54, ll_backend__string_switch__EndLabelCode_55);
    }
#line 343 "string_switch.m"
    {
#line 343 "string_switch.m"
      *ll_backend__string_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__CommentCode_26, ll_backend__string_switch__V_106_106);
    }
#line 251 "string_switch.m"
  }
#line 242 "string_switch.m"
}

#line 209 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__Label_5,
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__TaggedConsId_6,
#line 209 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11,
#line 209 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12)
#line 209 "string_switch.m"
{
#line 212 "string_switch.m"
  {
#line 212 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 212 "string_switch.m"
    MR_Word ll_backend__string_switch__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__TaggedConsId_6, (MR_Integer) 1)));
#line 213 "string_switch.m"
    MR_Word ll_backend__string_switch___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__TaggedConsId_6, (MR_Integer) 0)));
#line 216 "string_switch.m"
    MR_String ll_backend__string_switch__String_10;

#line 214 "string_switch.m"
    ll_backend__string_switch__succeeded = ((MR_tag((MR_Word) ll_backend__string_switch__Tag_9)) == (MR_mktag((MR_Integer) 1)));
#line 214 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 214 "string_switch.m"
      {
#line 214 "string_switch.m"
        ll_backend__string_switch__String_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Tag_9, (MR_Integer) 0)));
#line 215 "string_switch.m"
        {
#line 215 "string_switch.m"
          MR_Word ll_backend__string_switch__V_14_14;

#line 215 "string_switch.m"
          {
#line 215 "string_switch.m"
            ll_backend__string_switch__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "string_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, 0) = ((MR_Box) (ll_backend__string_switch__String_10));
#line 215 "string_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, 1) = ((MR_Box) (ll_backend__string_switch__Label_5));
#line 215 "string_switch.m"
          }
#line 215 "string_switch.m"
          {
#line 215 "string_switch.m"
            MR_Word base;
#line 215 "string_switch.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_StrsLabels_12 = base;
#line 215 "string_switch.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__string_switch__V_14_14));
#line 215 "string_switch.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_StrsLabels_0_11));
#line 215 "string_switch.m"
          }
#line 215 "string_switch.m"
        }
#line 214 "string_switch.m"
      }
#line 214 "string_switch.m"
    else
#line 217 "string_switch.m"
      {
#line 217 "string_switch.m"
        {
#line 217 "string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.add_to_strs_labels\'/4", (MR_String) "non-string tag");
#line 217 "string_switch.m"
          return;
        }
#line 217 "string_switch.m"
      }
#line 212 "string_switch.m"
  }
#line 209 "string_switch.m"
}

#line 207 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 207 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 207 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_3)
#line 207 "string_switch.m"
{
#line 207 "string_switch.m"
  {
#line 207 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 207 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12;

#line 207 "string_switch.m"
    {
#line 207 "string_switch.m"
      ll_backend__string_switch__add_to_strs_labels_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), &ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12);
    }
#line 207 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__string_switch__conv0_STATE_VARIABLE_StrsLabels_12));
#line 207 "string_switch.m"
  }
#line 207 "string_switch.m"
}

#line 192 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__Params_1,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__3_3,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7,
#line 192 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_8,
#line 192 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_9)
#line 192 "string_switch.m"
{
#line 197 "string_switch.m"
  {
#line 197 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;

#line 197 "string_switch.m"
    if ((ll_backend__string_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "string_switch.m"
      {
#line 197 "string_switch.m"
        *ll_backend__string_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "string_switch.m"
        *ll_backend__string_switch__STATE_VARIABLE_CI_9 = ll_backend__string_switch__STATE_VARIABLE_CI_0_8;
#line 198 "string_switch.m"
        *ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7 = ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6;
#line 198 "string_switch.m"
        *ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5 = ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4;
#line 197 "string_switch.m"
      }
#line 197 "string_switch.m"
    else
#line 200 "string_switch.m"
      {
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__Label_27;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__MainTaggedConsId_28;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__OtherTaggedConsIds_29;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_41_41;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46;
#line 200 "string_switch.m"
        MR_Word ll_backend__string_switch__V_47_47;
#line 205 "string_switch.m"
        MR_Integer ll_backend__string_switch__V_30_30;
#line 205 "string_switch.m"
        MR_Word ll_backend__string_switch__V_31_31;
#line 207 "string_switch.m"
        MR_Box ll_backend__string_switch__conv1_HeadVar__3_3;

#line 201 "string_switch.m"
        {
#line 201 "string_switch.m"
          ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(ll_backend__string_switch__Params_1, ll_backend__string_switch__Case_21, &ll_backend__string_switch__Label_27, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_0_4, &ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_6, &ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40, ll_backend__string_switch__STATE_VARIABLE_CI_0_8, &ll_backend__string_switch__STATE_VARIABLE_CI_41_41);
        }
#line 203 "string_switch.m"
        {
#line 203 "string_switch.m"
          ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(ll_backend__string_switch__Params_1, ll_backend__string_switch__Cases_22, &ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_39_39, ll_backend__string_switch__STATE_VARIABLE_CaseLabelMap_5, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_40_40, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_7, ll_backend__string_switch__STATE_VARIABLE_CI_41_41, ll_backend__string_switch__STATE_VARIABLE_CI_9);
        }
#line 205 "string_switch.m"
        ll_backend__string_switch__MainTaggedConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 0)));
#line 205 "string_switch.m"
        ll_backend__string_switch__OtherTaggedConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 1)));
#line 205 "string_switch.m"
        ll_backend__string_switch__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 2)));
#line 205 "string_switch.m"
        ll_backend__string_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 3)));
#line 206 "string_switch.m"
        {
#line 206 "string_switch.m"
          ll_backend__string_switch__add_to_strs_labels_4_p_0(ll_backend__string_switch__Label_27, ll_backend__string_switch__MainTaggedConsId_28, ll_backend__string_switch__STATE_VARIABLE_StrsLabels_42_42, &ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46);
        }
#line 207 "string_switch.m"
        {
#line 207 "string_switch.m"
          ll_backend__string_switch__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_47_47, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1]));
#line 207 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_47_47, 1) = ((MR_Box) (ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1));
#line 207 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_47_47, 3) = ((MR_Box) (ll_backend__string_switch__Label_27));
#line 207 "string_switch.m"
        }
#line 207 "string_switch.m"
        {
#line 207 "string_switch.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[5], ll_backend__string_switch__V_47_47, ll_backend__string_switch__OtherTaggedConsIds_29, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46)), &ll_backend__string_switch__conv1_HeadVar__3_3);
        }
#line 207 "string_switch.m"
        *ll_backend__string_switch__HeadVar__3_3 = ((MR_Word) ll_backend__string_switch__conv1_HeadVar__3_3);
#line 200 "string_switch.m"
      }
#line 197 "string_switch.m"
  }
#line 192 "string_switch.m"
}

#line 161 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_10,
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_11,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_12,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__FailLabel_13,
#line 161 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_14,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25,
#line 161 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26,
#line 161 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27,
#line 161 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28)
#line 161 "string_switch.m"
{
#line 170 "string_switch.m"
  while (MR_TRUE)
#line 170 "string_switch.m"
    {
#line 170 "string_switch.m"
      /* tailcall optimized into a loop */
#line 170 "string_switch.m"
      {
#line 170 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_10 == ll_backend__string_switch__TableSize_11);

#line 170 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 169 "string_switch.m"
          {
#line 169 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_28 = ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27;
#line 169 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevTableRows_26 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25;
#line 169 "string_switch.m"
          }
#line 170 "string_switch.m"
        else
#line 180 "string_switch.m"
          {
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__NextSlotRval_21;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__StringRval_22;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__Target_23;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__TableRow_24;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39;
#line 180 "string_switch.m"
            MR_Word ll_backend__string_switch__V_40_40;
#line 180 "string_switch.m"
            MR_Integer ll_backend__string_switch__V_41_41;
#line 176 "string_switch.m"
            MR_Word ll_backend__string_switch__SlotInfo_17;
#line 171 "string_switch.m"
            MR_Box ll_backend__string_switch__conv0_SlotInfo_17;

#line 171 "string_switch.m"
            {
#line 171 "string_switch.m"
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[4], ll_backend__string_switch__HashSlotMap_12, ll_backend__string_switch__Slot_10, &ll_backend__string_switch__conv0_SlotInfo_17);
            }
#line 171 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 171 "string_switch.m"
              {
#line 171 "string_switch.m"
                ll_backend__string_switch__SlotInfo_17 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_17);
#line 171 "string_switch.m"
                ll_backend__string_switch__succeeded = MR_TRUE;
#line 171 "string_switch.m"
              }
#line 176 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 172 "string_switch.m"
              {
#line 172 "string_switch.m"
                MR_String ll_backend__string_switch__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 0)));
#line 172 "string_switch.m"
                MR_Integer ll_backend__string_switch__Next_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 1)));
#line 172 "string_switch.m"
                MR_Word ll_backend__string_switch__V_29_29;
#line 172 "string_switch.m"
                MR_Word ll_backend__string_switch__V_30_30;

#line 172 "string_switch.m"
                ll_backend__string_switch__Target_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_17, (MR_Integer) 2)));
#line 173 "string_switch.m"
                {
#line 173 "string_switch.m"
                  ll_backend__string_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_29_29, 0) = ((MR_Box) (ll_backend__string_switch__Next_19));
#line 173 "string_switch.m"
                }
#line 173 "string_switch.m"
                {
#line 173 "string_switch.m"
                  ll_backend__string_switch__NextSlotRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 173 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_21, 1) = ((MR_Box) (ll_backend__string_switch__V_29_29));
#line 173 "string_switch.m"
                }
#line 174 "string_switch.m"
                {
#line 174 "string_switch.m"
                  ll_backend__string_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 174 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 1) = ((MR_Box) (ll_backend__string_switch__String_18));
#line 174 "string_switch.m"
                }
#line 174 "string_switch.m"
                {
#line 174 "string_switch.m"
                  ll_backend__string_switch__StringRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 174 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_22, 1) = ((MR_Box) (ll_backend__string_switch__V_30_30));
#line 174 "string_switch.m"
                }
#line 172 "string_switch.m"
              }
#line 176 "string_switch.m"
            else
#line 177 "string_switch.m"
              {
#line 177 "string_switch.m"
                ll_backend__string_switch__StringRval_22 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 178 "string_switch.m"
                ll_backend__string_switch__NextSlotRval_21 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22]);
#line 179 "string_switch.m"
                ll_backend__string_switch__Target_23 = ll_backend__string_switch__FailLabel_13;
#line 177 "string_switch.m"
              }
#line 181 "string_switch.m"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_14 == (MR_Integer) 0);
#line 183 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 182 "string_switch.m"
              {
#line 182 "string_switch.m"
                {
#line 182 "string_switch.m"
                  ll_backend__string_switch__TableRow_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_22));
#line 182 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "string_switch.m"
                }
#line 182 "string_switch.m"
              }
#line 183 "string_switch.m"
            else
#line 184 "string_switch.m"
              {
#line 184 "string_switch.m"
                MR_Word ll_backend__string_switch__V_36_36;

#line 184 "string_switch.m"
                {
#line 184 "string_switch.m"
                  ll_backend__string_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_36_36, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_21));
#line 184 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "string_switch.m"
                }
#line 184 "string_switch.m"
                {
#line 184 "string_switch.m"
                  ll_backend__string_switch__TableRow_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_22));
#line 184 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__TableRow_24, 1) = ((MR_Box) (ll_backend__string_switch__V_36_36));
#line 184 "string_switch.m"
                }
#line 184 "string_switch.m"
              }
#line 186 "string_switch.m"
            {
#line 186 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38, 0) = ((MR_Box) (ll_backend__string_switch__TableRow_24));
#line 186 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25));
#line 186 "string_switch.m"
            }
#line 187 "string_switch.m"
            {
#line 187 "string_switch.m"
              ll_backend__string_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_40_40, 0) = ((MR_Box) (ll_backend__string_switch__Target_23));
#line 187 "string_switch.m"
            }
#line 187 "string_switch.m"
            {
#line 187 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39, 0) = ((MR_Box) (ll_backend__string_switch__V_40_40));
#line 187 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27));
#line 187 "string_switch.m"
            }
#line 188 "string_switch.m"
            ll_backend__string_switch__V_41_41 = (ll_backend__string_switch__Slot_10 + (MR_Integer) 1);
#line 188 "string_switch.m"
            /* direct tailcall eliminated */
#line 188 "string_switch.m"
            {
#line 188 "string_switch.m"
              MR_Integer ll_backend__string_switch__Slot__tmp_copy_10 = ll_backend__string_switch__V_41_41;
#line 188 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_25 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_38_38;
#line 188 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0__tmp_copy_27 = ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_39_39;

#line 188 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0_27 = ll_backend__string_switch__STATE_VARIABLE_RevMaybeTargets_0__tmp_copy_27;
#line 188 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_25 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_25;
#line 188 "string_switch.m"
              ll_backend__string_switch__Slot_10 = ll_backend__string_switch__Slot__tmp_copy_10;
#line 188 "string_switch.m"
            }
#line 188 "string_switch.m"
            continue;
#line 180 "string_switch.m"
          }
#line 170 "string_switch.m"
      }
#line 170 "string_switch.m"
      break;
#line 170 "string_switch.m"
    }
#line 161 "string_switch.m"
}

#line 68 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_binary_lookup_switch_10_p_0(
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_11,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__LookupSwitchInfo_12,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_13,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_14,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_15,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27,
#line 68 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28,
#line 68 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_17,
#line 68 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_29,
#line 68 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_30)
#line 68 "string_switch.m"
{
#line 764 "string_switch.m"
  {
#line 764 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 764 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseConsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 0)));
#line 764 "string_switch.m"
    MR_Word ll_backend__string_switch__OutVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 1)));
#line 764 "string_switch.m"
    MR_Word ll_backend__string_switch__OutTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 2)));
#line 764 "string_switch.m"
    MR_Word ll_backend__string_switch__Liveness_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 3)));

#line 772 "string_switch.m"
    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_19)) == (MR_mktag((MR_Integer) 0))))
#line 768 "string_switch.m"
      {
#line 768 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValues_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 0)));

#line 769 "string_switch.m"
        {
#line 769 "string_switch.m"
          ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(ll_backend__string_switch__VarRval_11, ll_backend__string_switch__CaseValues_23, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__CanFail_13, ll_backend__string_switch__EndLabel_14, ll_backend__string_switch__StoreMap_15, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28, ll_backend__string_switch__Code_17, ll_backend__string_switch__STATE_VARIABLE_CI_0_29, ll_backend__string_switch__STATE_VARIABLE_CI_30);
#line 769 "string_switch.m"
          return;
        }
#line 768 "string_switch.m"
      }
#line 772 "string_switch.m"
    else
#line 774 "string_switch.m"
      {
#line 774 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolns_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 0)));
#line 774 "string_switch.m"
        MR_Word ll_backend__string_switch__ResumeVars_25;
#line 774 "string_switch.m"
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_26;
#line 774 "string_switch.m"
        MR_Word ll_backend__string_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 1)));

#line 774 "string_switch.m"
        ll_backend__string_switch__ResumeVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_31_31, (MR_Integer) 0)));
#line 774 "string_switch.m"
        ll_backend__string_switch__GoalsMayModifyTrail_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_31_31, (MR_Integer) 1)));
#line 775 "string_switch.m"
        {
#line 775 "string_switch.m"
          ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_p_0(ll_backend__string_switch__VarRval_11, ll_backend__string_switch__CaseSolns_24, ll_backend__string_switch__ResumeVars_25, ll_backend__string_switch__GoalsMayModifyTrail_26, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__CanFail_13, ll_backend__string_switch__EndLabel_14, ll_backend__string_switch__StoreMap_15, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28, ll_backend__string_switch__Code_17, ll_backend__string_switch__STATE_VARIABLE_CI_0_29, ll_backend__string_switch__STATE_VARIABLE_CI_30);
#line 775 "string_switch.m"
          return;
        }
#line 774 "string_switch.m"
      }
#line 764 "string_switch.m"
  }
#line 68 "string_switch.m"
}

#line 737 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_11_p_0_2(
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 737 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 737 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4)
#line 737 "string_switch.m"
{
#line 737 "string_switch.m"
  {
#line 737 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 737 "string_switch.m"
    MR_Word ll_backend__string_switch__conv7_HeadVar__4_4;

#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv7_HeadVar__4_4);
    }
#line 737 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv7_HeadVar__4_4));
#line 737 "string_switch.m"
  }
#line 737 "string_switch.m"
}

#line 703 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_11_p_0_1(
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_5,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
#line 703 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_7,
#line 703 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_8)
#line 703 "string_switch.m"
{
#line 703 "string_switch.m"
  {
#line 703 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 703 "string_switch.m"
    MR_Word ll_backend__string_switch__conv3_HeadVar__3_3;
#line 703 "string_switch.m"
    MR_Word ll_backend__string_switch__conv2_HeadVar__5_5;
#line 703 "string_switch.m"
    MR_Word ll_backend__string_switch__conv1_HeadVar__7_7;
#line 703 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__9_9;

#line 703 "string_switch.m"
    {
#line 703 "string_switch.m"
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__string_switch__wrapper_arg_1), &ll_backend__string_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__string_switch__wrapper_arg_5), &ll_backend__string_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__string_switch__wrapper_arg_7), &ll_backend__string_switch__conv0_HeadVar__9_9);
    }
#line 703 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv3_HeadVar__3_3));
#line 703 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv2_HeadVar__5_5));
#line 703 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__string_switch__conv1_HeadVar__7_7));
#line 703 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__9_9));
#line 703 "string_switch.m"
  }
#line 703 "string_switch.m"
}

#line 64 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_11_p_0(
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__Cases_12,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_13,
#line 64 "string_switch.m"
  MR_String ll_backend__string_switch__VarName_14,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__CodeModel_15,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_16,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__SwitchGoalInfo_17,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_18,
#line 64 "string_switch.m"
  MR_Word * ll_backend__string_switch__MaybeEnd_19,
#line 64 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20,
#line 64 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_45,
#line 64 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_46)
#line 64 "string_switch.m"
{
#line 691 "string_switch.m"
  {
#line 691 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_110_110;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_111_111;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_112_112;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_22;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_23;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__Params_24;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_25;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap0_26;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap_27;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__SortedTable_28;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTableRows_29;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTargets_30;
#line 691 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_31;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TableRows_32;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__Targets_33;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddr_36;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddrRval_39;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_40;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_41;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__ComputedGotoCode_42;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__CasesCode_43;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_44;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_47_47;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_52_52;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_54_54;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_67_67;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_69_69;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_70_70;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_71_71;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_73_73;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_75_75;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_85_85;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_86_86;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_87_87;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;
#line 691 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_95_95;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_96_96;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 693 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 702 "string_switch.m"
    MR_Box ll_backend__string_switch__conv6_CaseLabelMap_27;
#line 702 "string_switch.m"
    MR_Box ll_backend__string_switch__conv5_MaybeEnd_19;
#line 702 "string_switch.m"
    MR_Box ll_backend__string_switch__conv4_STATE_VARIABLE_CI_54_54;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_105_105;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 721 "string_switch.m"
    MR_Word ll_backend__string_switch__V_109_109;
#line 737 "string_switch.m"
    MR_Box ll_backend__string_switch__conv8_CasesCode_43;

#line 692 "string_switch.m"
    {
#line 692 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_4_p_0(ll_backend__string_switch__CanFail_16, &ll_backend__string_switch__BinarySwitchInfo_22, ll_backend__string_switch__STATE_VARIABLE_CI_0_45, &ll_backend__string_switch__STATE_VARIABLE_CI_47_47);
    }
#line 693 "string_switch.m"
    ll_backend__string_switch__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 0)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 1)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 2)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 3)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 4)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 5)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 6)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 7)));
#line 693 "string_switch.m"
    ll_backend__string_switch__BranchStart_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 8)));
#line 693 "string_switch.m"
    ll_backend__string_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 9)));
#line 694 "string_switch.m"
    {
#line 694 "string_switch.m"
      ll_backend__string_switch__Params_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 694 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 0) = ((MR_Box) (ll_backend__string_switch__VarName_14));
#line 694 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_17));
#line 694 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_15));
#line 694 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_23));
#line 694 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_18));
#line 694 "string_switch.m"
    }
#line 9660 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_110_110 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 696 "string_switch.m"
    {
#line 696 "string_switch.m"
      ll_backend__string_switch__CommentCode_25 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[18])));
    }
#line 9667 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_111_111 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 9669 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_112_112 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 701 "string_switch.m"
    {
#line 701 "string_switch.m"
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_111_111, ll_backend__string_switch__TypeCtorInfo_112_112, &ll_backend__string_switch__CaseLabelMap0_26);
    }
#line 703 "string_switch.m"
    {
#line 703 "string_switch.m"
      ll_backend__string_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 703 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0]));
#line 703 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_11_p_0_1));
#line 703 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 703 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 3) = ((MR_Box) (ll_backend__string_switch__Params_24));
#line 703 "string_switch.m"
    }
#line 702 "string_switch.m"
    {
#line 702 "string_switch.m"
      backend_libs__switch_util__string_binary_cases_9_p_0(ll_backend__string_switch__TypeCtorInfo_111_111, (MR_Word) &ll_backend__string_switch_scalar_common_2[0], (MR_Word) &ll_backend__string_switch_scalar_common_1[3], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__string_switch__Cases_12, ll_backend__string_switch__V_52_52, ((MR_Box) (ll_backend__string_switch__CaseLabelMap0_26)), &ll_backend__string_switch__conv6_CaseLabelMap_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__string_switch__conv5_MaybeEnd_19, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CI_47_47)), &ll_backend__string_switch__conv4_STATE_VARIABLE_CI_54_54, &ll_backend__string_switch__SortedTable_28);
    }
#line 702 "string_switch.m"
    ll_backend__string_switch__CaseLabelMap_27 = ((MR_Word) ll_backend__string_switch__conv6_CaseLabelMap_27);
#line 702 "string_switch.m"
    *ll_backend__string_switch__MaybeEnd_19 = ((MR_Word) ll_backend__string_switch__conv5_MaybeEnd_19);
#line 702 "string_switch.m"
    ll_backend__string_switch__STATE_VARIABLE_CI_54_54 = ((MR_Word) ll_backend__string_switch__conv4_STATE_VARIABLE_CI_54_54);
#line 706 "string_switch.m"
    {
#line 706 "string_switch.m"
      ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(ll_backend__string_switch__SortedTable_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_30, (MR_Integer) 0, &ll_backend__string_switch__TableSize_31);
    }
#line 708 "string_switch.m"
    {
#line 708 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_29, &ll_backend__string_switch__TableRows_32);
    }
#line 709 "string_switch.m"
    {
#line 709 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_30, &ll_backend__string_switch__Targets_33);
    }
#line 712 "string_switch.m"
    {
#line 712 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]), ll_backend__string_switch__TableRows_32, &ll_backend__string_switch__TableAddr_36, ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__STATE_VARIABLE_CI_46);
    }
#line 715 "string_switch.m"
    {
#line 715 "string_switch.m"
      ll_backend__string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 715 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 715 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_67_67, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_36));
#line 715 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_67_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 715 "string_switch.m"
    }
#line 715 "string_switch.m"
    {
#line 715 "string_switch.m"
      ll_backend__string_switch__TableAddrRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 715 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_39, 1) = ((MR_Box) (ll_backend__string_switch__V_67_67));
#line 715 "string_switch.m"
    }
#line 717 "string_switch.m"
    {
#line 717 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_22, ll_backend__string_switch__VarRval_13, ll_backend__string_switch__TableAddrRval_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[2]), ll_backend__string_switch__TableSize_31, (MR_Integer) 2, &ll_backend__string_switch__BinarySearchCode_40);
    }
#line 721 "string_switch.m"
    ll_backend__string_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 0)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 1)));
#line 721 "string_switch.m"
    ll_backend__string_switch__MidReg_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 2)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 3)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 4)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 5)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 6)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 7)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 8)));
#line 721 "string_switch.m"
    ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_22, (MR_Integer) 9)));
#line 729 "string_switch.m"
    {
#line 729 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 729 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_41));
#line 729 "string_switch.m"
    }
#line 728 "string_switch.m"
    {
#line 728 "string_switch.m"
      ll_backend__string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 728 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 728 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 728 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 2) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 728 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
#line 728 "string_switch.m"
    }
#line 727 "string_switch.m"
    {
#line 727 "string_switch.m"
      ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 727 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 727 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 2) = ((MR_Box) (ll_backend__string_switch__V_75_75));
#line 727 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
#line 727 "string_switch.m"
    }
#line 725 "string_switch.m"
    {
#line 725 "string_switch.m"
      ll_backend__string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 725 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 725 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[3])));
#line 725 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_39));
#line 725 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 3) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 725 "string_switch.m"
    }
#line 724 "string_switch.m"
    {
#line 724 "string_switch.m"
      ll_backend__string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 1) = ((MR_Box) (ll_backend__string_switch__V_71_71));
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 2) = ((MR_Box) (ll_backend__string_switch__Targets_33));
#line 724 "string_switch.m"
    }
#line 724 "string_switch.m"
    {
#line 724 "string_switch.m"
      ll_backend__string_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (ll_backend__string_switch__V_70_70));
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) ((MR_String) "jump to the matching case"));
#line 724 "string_switch.m"
    }
#line 723 "string_switch.m"
    {
#line 723 "string_switch.m"
      ll_backend__string_switch__ComputedGotoCode_42 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ((MR_Box) (ll_backend__string_switch__V_69_69)));
    }
#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      ll_backend__string_switch__V_85_85 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_110_110);
    }
#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_111_111, ll_backend__string_switch__TypeCtorInfo_112_112, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[6], ll_backend__string_switch__CaseLabelMap_27, ((MR_Box) (ll_backend__string_switch__V_85_85)), &ll_backend__string_switch__conv8_CasesCode_43);
    }
#line 737 "string_switch.m"
    ll_backend__string_switch__CasesCode_43 = ((MR_Word) ll_backend__string_switch__conv8_CasesCode_43);
#line 739 "string_switch.m"
    {
#line 739 "string_switch.m"
      ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 739 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_18));
#line 739 "string_switch.m"
    }
#line 739 "string_switch.m"
    {
#line 739 "string_switch.m"
      ll_backend__string_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_86_86, 0) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 739 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_86_86, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
#line 739 "string_switch.m"
    }
#line 738 "string_switch.m"
    {
#line 738 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_44 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ((MR_Box) (ll_backend__string_switch__V_86_86)));
    }
#line 743 "string_switch.m"
    {
#line 743 "string_switch.m"
      ll_backend__string_switch__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ll_backend__string_switch__CasesCode_43, ll_backend__string_switch__EndLabelCode_44);
    }
#line 742 "string_switch.m"
    {
#line 742 "string_switch.m"
      ll_backend__string_switch__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ll_backend__string_switch__ComputedGotoCode_42, ll_backend__string_switch__V_91_91);
    }
#line 742 "string_switch.m"
    {
#line 742 "string_switch.m"
      ll_backend__string_switch__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ll_backend__string_switch__BinarySearchCode_40, ll_backend__string_switch__V_90_90);
    }
#line 742 "string_switch.m"
    {
#line 742 "string_switch.m"
      *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_110_110, ll_backend__string_switch__CommentCode_25, ll_backend__string_switch__V_89_89);
    }
#line 691 "string_switch.m"
  }
#line 64 "string_switch.m"
}

#line 59 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_hash_lookup_switch_10_p_0(
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_11,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__LookupSwitchInfo_12,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_13,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_14,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_15,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27,
#line 59 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28,
#line 59 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_17,
#line 59 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_29,
#line 59 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_30)
#line 59 "string_switch.m"
{
#line 224 "string_switch.m"
  {
#line 224 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseConsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 0)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__OutVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 1)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__OutTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 2)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__Liveness_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_12, (MR_Integer) 3)));

#line 232 "string_switch.m"
    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_19)) == (MR_mktag((MR_Integer) 0))))
#line 228 "string_switch.m"
      {
#line 228 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValues_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 0)));

#line 229 "string_switch.m"
        {
#line 229 "string_switch.m"
          ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(ll_backend__string_switch__VarRval_11, ll_backend__string_switch__CaseValues_23, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__CanFail_13, ll_backend__string_switch__EndLabel_14, ll_backend__string_switch__StoreMap_15, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28, ll_backend__string_switch__Code_17, ll_backend__string_switch__STATE_VARIABLE_CI_0_29, ll_backend__string_switch__STATE_VARIABLE_CI_30);
#line 229 "string_switch.m"
          return;
        }
#line 228 "string_switch.m"
      }
#line 232 "string_switch.m"
    else
#line 234 "string_switch.m"
      {
#line 234 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolns_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 0)));
#line 234 "string_switch.m"
        MR_Word ll_backend__string_switch__ResumeVars_25;
#line 234 "string_switch.m"
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_26;
#line 234 "string_switch.m"
        MR_Word ll_backend__string_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_19, (MR_Integer) 1)));

#line 234 "string_switch.m"
        ll_backend__string_switch__ResumeVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_31_31, (MR_Integer) 0)));
#line 234 "string_switch.m"
        ll_backend__string_switch__GoalsMayModifyTrail_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_31_31, (MR_Integer) 1)));
#line 235 "string_switch.m"
        {
#line 235 "string_switch.m"
          ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_p_0(ll_backend__string_switch__VarRval_11, ll_backend__string_switch__CaseSolns_24, ll_backend__string_switch__ResumeVars_25, ll_backend__string_switch__GoalsMayModifyTrail_26, ll_backend__string_switch__OutVars_20, ll_backend__string_switch__OutTypes_21, ll_backend__string_switch__Liveness_22, ll_backend__string_switch__CanFail_13, ll_backend__string_switch__EndLabel_14, ll_backend__string_switch__StoreMap_15, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_27, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_28, ll_backend__string_switch__Code_17, ll_backend__string_switch__STATE_VARIABLE_CI_0_29, ll_backend__string_switch__STATE_VARIABLE_CI_30);
#line 235 "string_switch.m"
          return;
        }
#line 234 "string_switch.m"
      }
#line 224 "string_switch.m"
  }
#line 59 "string_switch.m"
}

#line 154 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_11_p_0_1(
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 154 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 154 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4)
#line 154 "string_switch.m"
{
#line 154 "string_switch.m"
  {
#line 154 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 154 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__4_4;

#line 154 "string_switch.m"
    {
#line 154 "string_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv0_HeadVar__4_4);
    }
#line 154 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__4_4));
#line 154 "string_switch.m"
  }
#line 154 "string_switch.m"
}

#line 55 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_11_p_0(
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__Cases_12,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_13,
#line 55 "string_switch.m"
  MR_String ll_backend__string_switch__VarName_14,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__CodeModel_15,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_16,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__SwitchGoalInfo_17,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_18,
#line 55 "string_switch.m"
  MR_Word * ll_backend__string_switch__MaybeEnd_19,
#line 55 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20,
#line 55 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_50,
#line 55 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_51)
#line 55 "string_switch.m"
{
#line 102 "string_switch.m"
  {
#line 102 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_113_113;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_114_114;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_115_115;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_22;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_23;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__Params_24;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_25;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap0_26;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__StrsLabels_27;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap_28;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_29;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_30;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_31;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_32;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_33;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_34;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTableRows_35;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTargets_36;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableRows_37;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__Targets_38;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_39;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_40;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_41;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddr_42;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_43;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddrRval_44;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_45;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_46;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashLookupCode_47;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CasesCode_48;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_49;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_52_52;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_58_58;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_79_79;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_80_80;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_81_81;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_86_86;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_87_87;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_95_95;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_96_96;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_105_105;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_109_109;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_111_111;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_112_112;
#line 154 "string_switch.m"
    MR_Box ll_backend__string_switch__conv1_CasesCode_48;

#line 103 "string_switch.m"
    {
#line 103 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_4_p_0(ll_backend__string_switch__CanFail_16, &ll_backend__string_switch__HashSwitchInfo_22, ll_backend__string_switch__STATE_VARIABLE_CI_0_50, &ll_backend__string_switch__STATE_VARIABLE_CI_52_52);
    }
#line 104 "string_switch.m"
    ll_backend__string_switch__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 0)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 1)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 2)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 3)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 4)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 5)));
#line 104 "string_switch.m"
    ll_backend__string_switch__BranchStart_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 6)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 7)));
#line 105 "string_switch.m"
    {
#line 105 "string_switch.m"
      ll_backend__string_switch__Params_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 0) = ((MR_Box) (ll_backend__string_switch__VarName_14));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_17));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_15));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_23));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_24, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_18));
#line 105 "string_switch.m"
    }
#line 10225 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_113_113 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 107 "string_switch.m"
    {
#line 107 "string_switch.m"
      ll_backend__string_switch__CommentCode_25 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[15])));
    }
#line 10232 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_114_114 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 10234 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_115_115 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 112 "string_switch.m"
    {
#line 112 "string_switch.m"
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__TypeCtorInfo_115_115, &ll_backend__string_switch__CaseLabelMap0_26);
    }
#line 113 "string_switch.m"
    {
#line 113 "string_switch.m"
      ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(ll_backend__string_switch__Params_24, ll_backend__string_switch__Cases_12, &ll_backend__string_switch__StrsLabels_27, ll_backend__string_switch__CaseLabelMap0_26, &ll_backend__string_switch__CaseLabelMap_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__string_switch__MaybeEnd_19, ll_backend__string_switch__STATE_VARIABLE_CI_52_52, &ll_backend__string_switch__STATE_VARIABLE_CI_58_58);
    }
#line 117 "string_switch.m"
    {
#line 117 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__StrsLabels_27, (MR_Integer) 1, &ll_backend__string_switch__TableSize_29, &ll_backend__string_switch__HashSlotsMap_30, &ll_backend__string_switch__HashOp_31, &ll_backend__string_switch__NumCollisions_32);
    }
#line 119 "string_switch.m"
    ll_backend__string_switch__HashMask_33 = (ll_backend__string_switch__TableSize_29 - (MR_Integer) 1);
#line 122 "string_switch.m"
    ll_backend__string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 0)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 1)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 2)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 3)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 4)));
#line 122 "string_switch.m"
    ll_backend__string_switch__FailLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 5)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 6)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 7)));
#line 123 "string_switch.m"
    {
#line 123 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_29, ll_backend__string_switch__HashSlotsMap_30, ll_backend__string_switch__FailLabel_34, ll_backend__string_switch__NumCollisions_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_36);
    }
#line 125 "string_switch.m"
    {
#line 125 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_35, &ll_backend__string_switch__TableRows_37);
    }
#line 126 "string_switch.m"
    {
#line 126 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_36, &ll_backend__string_switch__Targets_38);
    }
#line 129 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_32 == (MR_Integer) 0);
#line 133 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 130 "string_switch.m"
      {
#line 130 "string_switch.m"
        ll_backend__string_switch__NumColumns_39 = (MR_Integer) 1;
#line 131 "string_switch.m"
        ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[16]);
#line 132 "string_switch.m"
        ll_backend__string_switch__ArrayElemTypes_41 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[17]);
#line 130 "string_switch.m"
      }
#line 133 "string_switch.m"
    else
#line 134 "string_switch.m"
      {
#line 134 "string_switch.m"
        ll_backend__string_switch__NumColumns_39 = (MR_Integer) 2;
#line 135 "string_switch.m"
        ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]);
#line 136 "string_switch.m"
        ll_backend__string_switch__ArrayElemTypes_41 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[14]);
#line 134 "string_switch.m"
      }
#line 138 "string_switch.m"
    {
#line 138 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_40, ll_backend__string_switch__TableRows_37, &ll_backend__string_switch__TableAddr_42, ll_backend__string_switch__STATE_VARIABLE_CI_58_58, ll_backend__string_switch__STATE_VARIABLE_CI_51);
    }
#line 139 "string_switch.m"
    {
#line 139 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_43, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_41));
#line 139 "string_switch.m"
    }
#line 140 "string_switch.m"
    {
#line 140 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_42));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 140 "string_switch.m"
    }
#line 140 "string_switch.m"
    {
#line 140 "string_switch.m"
      ll_backend__string_switch__TableAddrRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_44, 1) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 140 "string_switch.m"
    }
#line 142 "string_switch.m"
    ll_backend__string_switch__SlotReg_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 0)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 1)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 2)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 3)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 4)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 5)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 6)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_22, (MR_Integer) 7)));
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_45));
#line 145 "string_switch.m"
    }
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_81_81, 1) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_81_81, 2) = ((MR_Box) (ll_backend__string_switch__Targets_38));
#line 145 "string_switch.m"
    }
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (ll_backend__string_switch__V_81_81));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
#line 145 "string_switch.m"
    }
#line 147 "string_switch.m"
    {
#line 147 "string_switch.m"
      ll_backend__string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 147 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "string_switch.m"
    }
#line 143 "string_switch.m"
    {
#line 143 "string_switch.m"
      ll_backend__string_switch__MatchCode_46 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__V_79_79);
    }
#line 149 "string_switch.m"
    {
#line 149 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_22, ll_backend__string_switch__VarRval_13, ll_backend__string_switch__TableAddrRval_44, ll_backend__string_switch__ArrayElemType_43, ll_backend__string_switch__NumColumns_39, ll_backend__string_switch__HashOp_31, ll_backend__string_switch__HashMask_33, ll_backend__string_switch__NumCollisions_32, ll_backend__string_switch__MatchCode_46, &ll_backend__string_switch__HashLookupCode_47);
    }
#line 154 "string_switch.m"
    {
#line 154 "string_switch.m"
      ll_backend__string_switch__V_86_86 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_113_113);
    }
#line 154 "string_switch.m"
    {
#line 154 "string_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_114_114, ll_backend__string_switch__TypeCtorInfo_115_115, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[5], ll_backend__string_switch__CaseLabelMap_28, ((MR_Box) (ll_backend__string_switch__V_86_86)), &ll_backend__string_switch__conv1_CasesCode_48);
    }
#line 154 "string_switch.m"
    ll_backend__string_switch__CasesCode_48 = ((MR_Word) ll_backend__string_switch__conv1_CasesCode_48);
#line 156 "string_switch.m"
    {
#line 156 "string_switch.m"
      ll_backend__string_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_18));
#line 156 "string_switch.m"
    }
#line 156 "string_switch.m"
    {
#line 156 "string_switch.m"
      ll_backend__string_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (ll_backend__string_switch__V_88_88));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) ((MR_String) "end of hashed string switch"));
#line 156 "string_switch.m"
    }
#line 155 "string_switch.m"
    {
#line 155 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_49 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (ll_backend__string_switch__V_87_87)));
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      ll_backend__string_switch__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__CasesCode_48, ll_backend__string_switch__EndLabelCode_49);
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      ll_backend__string_switch__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__HashLookupCode_47, ll_backend__string_switch__V_91_91);
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__CommentCode_25, ll_backend__string_switch__V_90_90);
    }
#line 102 "string_switch.m"
  }
#line 55 "string_switch.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.string_switch. */
