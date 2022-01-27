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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 162 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 165 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

#line 168 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

#line 171 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

#line 174 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "ll_backend.string_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0;

#line 183 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 186 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10];

#line 189 "ll_backend.string_switch.c"
static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10];

#line 192 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0;

#line 195 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1];

#line 198 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1];

#line 201 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1];

#line 204 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1];

#line 207 "ll_backend.string_switch.c"
static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8];

#line 210 "ll_backend.string_switch.c"
static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8];

#line 213 "ll_backend.string_switch.c"
static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0;

#line 216 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1];

#line 219 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1];

#line 222 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1];

#line 225 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1];

#line 228 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
#line 231 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 233 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2);

#line 236 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
#line 239 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 241 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 243 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3);

#line 246 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
#line 249 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 251 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2);

#line 254 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
#line 257 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 259 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 261 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3);

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__905__1_2_p_0(
#line 905 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 905 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_85);

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__416__1_2_p_0(
#line 416 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 416 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_114);

#line 549 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
#line 549 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3);

#line 549 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2);

#line 1013 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
#line 1013 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3);

#line 1013 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2);

#line 1069 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_8,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_9,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_10,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_11,
#line 1069 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_12,
#line 1069 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_13,
#line 1069 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_14);

#line 1029 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_6,
#line 1029 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_7,
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_20,
#line 1029 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_21,
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_22);

#line 973 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
#line 973 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
#line 973 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
#line 973 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
#line 973 "string_switch.m"
  MR_Integer * ll_backend__string_switch__HeadVar__11_11);

#line 922 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3(
#line 922 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 922 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
#line 905 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
#line 905 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 874 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_17,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_18,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_19,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_22,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_23,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_24,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_25,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_26,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_28,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_66,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_67,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_68);

#line 861 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
#line 861 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 861 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
#line 861 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3);

#line 779 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_15,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_16,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_17,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_18,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_19,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_20,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_21,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_22,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_24,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_53);

#line 740 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
#line 740 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
#line 740 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
#line 740 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
#line 740 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7);

#line 596 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_11,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_13,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_14,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_15,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__HashOp_16,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__HashMask_17,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_18,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__MatchCode_19,
#line 596 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20);

#line 563 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_6,
#line 563 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_7,
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
#line 563 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19,
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_20);

#line 479 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_16,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_17,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_18,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumOutVars_20,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_21,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
#line 479 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
#line 479 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
#line 479 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
#line 479 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52);

#line 428 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3(
#line 428 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 428 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
#line 416 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
#line 416 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg);

#line 369 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_17,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_18,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_19,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_22,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_23,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_24,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_25,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_26,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_28,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_72,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_73,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_74);

#line 339 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_8,
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_9,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_10,
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_11,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
#line 339 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22);

#line 273 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
#line 273 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 273 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1);

#line 244 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_15,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_16,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_17,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_18,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_19,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_20,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_21,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_22,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_24,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_60);

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

#line 732 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_2(
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 732 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4);

#line 698 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_5,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_7,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_8);

#line 154 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0_1(
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
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_switch_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3)),
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
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1152 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1160 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 1169 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

#line 1177 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1186 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1194 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1202 "ll_backend.string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1210 "ll_backend.string_switch.c"
static const MR_VA_PseudoTypeInfo_Struct0 ll_backend__string_switch____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 1218 "ll_backend.string_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1226 "ll_backend.string_switch.c"
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

#line 1240 "ll_backend.string_switch.c"
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

#line 1254 "ll_backend.string_switch.c"
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

#line 1269 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

#line 1274 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0
  }
};

#line 1283 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

#line 1288 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1293 "ll_backend.string_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1310 "ll_backend.string_switch.c"
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

#line 1322 "ll_backend.string_switch.c"
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

#line 1334 "ll_backend.string_switch.c"
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

#line 1349 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

#line 1354 "ll_backend.string_switch.c"
static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0
  }
};

#line 1363 "ll_backend.string_switch.c"
static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

#line 1368 "ll_backend.string_switch.c"
static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1373 "ll_backend.string_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1390 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
#line 1393 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 1395 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2)
#line 1397 "ll_backend.string_switch.c"
{
#line 1399 "ll_backend.string_switch.c"
  {
#line 1401 "ll_backend.string_switch.c"
    MR_bool ll_backend__string_switch__succeeded;

#line 1404 "ll_backend.string_switch.c"
    {
#line 1406 "ll_backend.string_switch.c"
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_binary_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
#line 1409 "ll_backend.string_switch.c"
    return ll_backend__string_switch__succeeded;
#line 1411 "ll_backend.string_switch.c"
  }
#line 1413 "ll_backend.string_switch.c"
}

#line 1416 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
#line 1419 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 1421 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 1423 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3)
#line 1425 "ll_backend.string_switch.c"
{
#line 1427 "ll_backend.string_switch.c"
  {
#line 1429 "ll_backend.string_switch.c"
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

#line 1432 "ll_backend.string_switch.c"
    {
#line 1434 "ll_backend.string_switch.c"
      ll_backend__string_switch____Compare____string_binary_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
#line 1437 "ll_backend.string_switch.c"
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
#line 1439 "ll_backend.string_switch.c"
  }
#line 1441 "ll_backend.string_switch.c"
}

#line 1444 "ll_backend.string_switch.c"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
#line 1447 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 1449 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2)
#line 1451 "ll_backend.string_switch.c"
{
#line 1453 "ll_backend.string_switch.c"
  {
#line 1455 "ll_backend.string_switch.c"
    MR_bool ll_backend__string_switch__succeeded;

#line 1458 "ll_backend.string_switch.c"
    {
#line 1460 "ll_backend.string_switch.c"
      ll_backend__string_switch__succeeded = ll_backend__string_switch____Unify____string_hash_switch_info_0_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2));
    }
#line 1463 "ll_backend.string_switch.c"
    return ll_backend__string_switch__succeeded;
#line 1465 "ll_backend.string_switch.c"
  }
#line 1467 "ll_backend.string_switch.c"
}

#line 1470 "ll_backend.string_switch.c"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
#line 1473 "ll_backend.string_switch.c"
  MR_Box * ll_backend__string_switch__wrapper_arg_1,
#line 1475 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 1477 "ll_backend.string_switch.c"
  MR_Box ll_backend__string_switch__wrapper_arg_3)
#line 1479 "ll_backend.string_switch.c"
{
#line 1481 "ll_backend.string_switch.c"
  {
#line 1483 "ll_backend.string_switch.c"
    MR_Word ll_backend__string_switch__conv0_HeadVar__1_1;

#line 1486 "ll_backend.string_switch.c"
    {
#line 1488 "ll_backend.string_switch.c"
      ll_backend__string_switch____Compare____string_hash_switch_info_0_0(&ll_backend__string_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3));
    }
#line 1491 "ll_backend.string_switch.c"
    *ll_backend__string_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__1_1));
#line 1493 "ll_backend.string_switch.c"
  }
#line 1495 "ll_backend.string_switch.c"
}

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__905__1_2_p_0(
#line 905 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 905 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_85)
#line 905 "string_switch.m"
{
#line 905 "string_switch.m"
  {
#line 905 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;

#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_21)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_85)));
    }
#line 905 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 905 "string_switch.m"
  }
#line 905 "string_switch.m"
}

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__416__1_2_p_0(
#line 416 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 416 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_114)
#line 416 "string_switch.m"
{
#line 416 "string_switch.m"
  {
#line 416 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;

#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[9], ((MR_Box) (ll_backend__string_switch__OutVars_21)), ((MR_Box) (ll_backend__string_switch__HeadVar__2_114)));
    }
#line 416 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 416 "string_switch.m"
  }
#line 416 "string_switch.m"
}

#line 549 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
#line 549 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3)
#line 549 "string_switch.m"
{
#line 549 "string_switch.m"
  {
#line 549 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 549 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_27 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
#line 549 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_28 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

#line 549 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_27 == ll_backend__string_switch__CastY_28);
#line 549 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1574 "ll_backend.string_switch.c"
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 549 "string_switch.m"
    else
#line 549 "string_switch.m"
      {
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20;

#line 549 "string_switch.m"
        {
#line 549 "string_switch.m"
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_20_20, ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_12_12);
        }
#line 1620 "ll_backend.string_switch.c"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_20_20 == (MR_Integer) 0);
#line 549 "string_switch.m"
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_20_20;
#line 549 "string_switch.m"
        else
#line 549 "string_switch.m"
          {
#line 549 "string_switch.m"
            MR_Word ll_backend__string_switch__V_21_21;

#line 549 "string_switch.m"
            {
#line 549 "string_switch.m"
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_21_21, ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_13_13);
            }
#line 1640 "ll_backend.string_switch.c"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_21_21 == (MR_Integer) 0);
#line 549 "string_switch.m"
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_21_21;
#line 549 "string_switch.m"
            else
#line 549 "string_switch.m"
              {
#line 549 "string_switch.m"
                MR_Word ll_backend__string_switch__V_22_22;

#line 549 "string_switch.m"
                {
#line 549 "string_switch.m"
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_22_22, ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_14_14);
                }
#line 1660 "ll_backend.string_switch.c"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_22_22 == (MR_Integer) 0);
#line 549 "string_switch.m"
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_22_22;
#line 549 "string_switch.m"
                else
#line 549 "string_switch.m"
                  {
#line 549 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_23_23;

#line 549 "string_switch.m"
                    {
#line 549 "string_switch.m"
                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_23_23, ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_15_15);
                    }
#line 1680 "ll_backend.string_switch.c"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_23_23 == (MR_Integer) 0);
#line 549 "string_switch.m"
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_23_23;
#line 549 "string_switch.m"
                    else
#line 549 "string_switch.m"
                      {
#line 549 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_24_24;

#line 549 "string_switch.m"
                        {
#line 549 "string_switch.m"
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_24_24, ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_16_16);
                        }
#line 1700 "ll_backend.string_switch.c"
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_24_24 == (MR_Integer) 0);
#line 549 "string_switch.m"
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_24_24;
#line 549 "string_switch.m"
                        else
#line 549 "string_switch.m"
                          {
#line 549 "string_switch.m"
                            MR_Word ll_backend__string_switch__V_25_25;

#line 549 "string_switch.m"
                            {
#line 549 "string_switch.m"
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_25_25, ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_17_17);
                            }
#line 1720 "ll_backend.string_switch.c"
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_25_25 == (MR_Integer) 0);
#line 549 "string_switch.m"
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_25_25;
#line 549 "string_switch.m"
                            else
#line 549 "string_switch.m"
                              {
#line 549 "string_switch.m"
                                MR_Word ll_backend__string_switch__V_26_26;

#line 549 "string_switch.m"
                                {
#line 549 "string_switch.m"
                                  ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__string_switch__V_26_26, ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_18_18);
                                }
#line 1740 "ll_backend.string_switch.c"
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_26_26 == (MR_Integer) 0);
#line 549 "string_switch.m"
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 549 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_26_26;
#line 549 "string_switch.m"
                                else
#line 549 "string_switch.m"
                                  {
#line 549 "string_switch.m"
                                    {
#line 549 "string_switch.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__V_11_11)), ((MR_Box) (ll_backend__string_switch__V_19_19)));
#line 549 "string_switch.m"
                                      return;
                                    }
#line 549 "string_switch.m"
                                  }
#line 549 "string_switch.m"
                              }
#line 549 "string_switch.m"
                          }
#line 549 "string_switch.m"
                      }
#line 549 "string_switch.m"
                  }
#line 549 "string_switch.m"
              }
#line 549 "string_switch.m"
          }
#line 549 "string_switch.m"
      }
#line 549 "string_switch.m"
  }
#line 549 "string_switch.m"
}

#line 549 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 549 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2)
#line 549 "string_switch.m"
{
#line 549 "string_switch.m"
  {
#line 549 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 549 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_19 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
#line 549 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_20 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

#line 549 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_19 == ll_backend__string_switch__CastY_20);
#line 549 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
      ll_backend__string_switch__succeeded = MR_TRUE;
#line 549 "string_switch.m"
    else
#line 549 "string_switch.m"
      {
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeInfo_28_28;
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 549 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));

#line 1843 "ll_backend.string_switch.c"
        {
#line 1845 "ll_backend.string_switch.c"
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_3_3, ll_backend__string_switch__V_11_11);
        }
#line 549 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
          {
#line 1852 "ll_backend.string_switch.c"
            {
#line 1854 "ll_backend.string_switch.c"
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_12_12);
            }
#line 549 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
              {
#line 1861 "ll_backend.string_switch.c"
                {
#line 1863 "ll_backend.string_switch.c"
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_13_13);
                }
#line 549 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                  {
#line 1870 "ll_backend.string_switch.c"
                    {
#line 1872 "ll_backend.string_switch.c"
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_14_14);
                    }
#line 549 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                      {
#line 1879 "ll_backend.string_switch.c"
                        {
#line 1881 "ll_backend.string_switch.c"
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_15_15);
                        }
#line 549 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                          {
#line 1888 "ll_backend.string_switch.c"
                            {
#line 1890 "ll_backend.string_switch.c"
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_16_16);
                            }
#line 549 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                              {
#line 1897 "ll_backend.string_switch.c"
                                {
#line 1899 "ll_backend.string_switch.c"
                                  ll_backend__string_switch__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_17_17);
                                }
#line 549 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 549 "string_switch.m"
                                  {
#line 1906 "ll_backend.string_switch.c"
                                    ll_backend__string_switch__TypeInfo_28_28 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
#line 1908 "ll_backend.string_switch.c"
                                    {
#line 1910 "ll_backend.string_switch.c"
                                      return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_28_28, ((MR_Box) (ll_backend__string_switch__V_10_10)), ((MR_Box) (ll_backend__string_switch__V_18_18)));
                                    }
#line 549 "string_switch.m"
                                  }
#line 549 "string_switch.m"
                              }
#line 549 "string_switch.m"
                          }
#line 549 "string_switch.m"
                      }
#line 549 "string_switch.m"
                  }
#line 549 "string_switch.m"
              }
#line 549 "string_switch.m"
          }
#line 549 "string_switch.m"
      }
#line 549 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 549 "string_switch.m"
  }
#line 549 "string_switch.m"
}

#line 1013 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
#line 1013 "string_switch.m"
  MR_Word * ll_backend__string_switch__HeadVar__1_1,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__3_3)
#line 1013 "string_switch.m"
{
#line 1013 "string_switch.m"
  {
#line 1013 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1013 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_33 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;
#line 1013 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_34 = (MR_Integer) ll_backend__string_switch__HeadVar__3_3;

#line 1013 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_33 == ll_backend__string_switch__CastY_34);
#line 1013 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1960 "ll_backend.string_switch.c"
      *ll_backend__string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 1013 "string_switch.m"
    else
#line 1013 "string_switch.m"
      {
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 8)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__3_3, (MR_Integer) 9)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_24_24;

#line 1013 "string_switch.m"
        {
#line 1013 "string_switch.m"
          ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_24_24, ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_14_14);
        }
#line 2014 "ll_backend.string_switch.c"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_24_24 == (MR_Integer) 0);
#line 1013 "string_switch.m"
        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_24_24;
#line 1013 "string_switch.m"
        else
#line 1013 "string_switch.m"
          {
#line 1013 "string_switch.m"
            MR_Word ll_backend__string_switch__V_25_25;

#line 1013 "string_switch.m"
            {
#line 1013 "string_switch.m"
              ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_25_25, ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_15_15);
            }
#line 2034 "ll_backend.string_switch.c"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_25_25 == (MR_Integer) 0);
#line 1013 "string_switch.m"
            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_25_25;
#line 1013 "string_switch.m"
            else
#line 1013 "string_switch.m"
              {
#line 1013 "string_switch.m"
                MR_Word ll_backend__string_switch__V_26_26;

#line 1013 "string_switch.m"
                {
#line 1013 "string_switch.m"
                  ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_26_26, ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_16_16);
                }
#line 2054 "ll_backend.string_switch.c"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_26_26 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_26_26;
#line 1013 "string_switch.m"
                else
#line 1013 "string_switch.m"
                  {
#line 1013 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_27_27;

#line 1013 "string_switch.m"
                    {
#line 1013 "string_switch.m"
                      ll_backend__llds____Compare____lval_0_0(&ll_backend__string_switch__V_27_27, ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_17_17);
                    }
#line 2074 "ll_backend.string_switch.c"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_27_27 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_27_27;
#line 1013 "string_switch.m"
                    else
#line 1013 "string_switch.m"
                      {
#line 1013 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_28_28;

#line 1013 "string_switch.m"
                        {
#line 1013 "string_switch.m"
                          ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_28_28, ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_18_18);
                        }
#line 2094 "ll_backend.string_switch.c"
                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_28_28 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_28_28;
#line 1013 "string_switch.m"
                        else
#line 1013 "string_switch.m"
                          {
#line 1013 "string_switch.m"
                            MR_Word ll_backend__string_switch__V_29_29;

#line 1013 "string_switch.m"
                            {
#line 1013 "string_switch.m"
                              ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_29_29, ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_19_19);
                            }
#line 2114 "ll_backend.string_switch.c"
                            ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_29_29 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                            ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                              *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_29_29;
#line 1013 "string_switch.m"
                            else
#line 1013 "string_switch.m"
                              {
#line 1013 "string_switch.m"
                                MR_Word ll_backend__string_switch__V_30_30;

#line 1013 "string_switch.m"
                                {
#line 1013 "string_switch.m"
                                  ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_30_30, ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_20_20);
                                }
#line 2134 "ll_backend.string_switch.c"
                                ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_30_30 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                                ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                  *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_30_30;
#line 1013 "string_switch.m"
                                else
#line 1013 "string_switch.m"
                                  {
#line 1013 "string_switch.m"
                                    MR_Word ll_backend__string_switch__V_31_31;

#line 1013 "string_switch.m"
                                    {
#line 1013 "string_switch.m"
                                      ll_backend__llds____Compare____label_0_0(&ll_backend__string_switch__V_31_31, ll_backend__string_switch__V_11_11, ll_backend__string_switch__V_21_21);
                                    }
#line 2154 "ll_backend.string_switch.c"
                                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_31_31 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                                    ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                                    if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                      *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_31_31;
#line 1013 "string_switch.m"
                                    else
#line 1013 "string_switch.m"
                                      {
#line 1013 "string_switch.m"
                                        MR_Word ll_backend__string_switch__V_32_32;

#line 1013 "string_switch.m"
                                        {
#line 1013 "string_switch.m"
                                          ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__string_switch__V_32_32, ll_backend__string_switch__V_12_12, ll_backend__string_switch__V_22_22);
                                        }
#line 2174 "ll_backend.string_switch.c"
                                        ll_backend__string_switch__succeeded = (ll_backend__string_switch__V_32_32 == (MR_Integer) 0);
#line 1013 "string_switch.m"
                                        ll_backend__string_switch__succeeded = !(ll_backend__string_switch__succeeded);
#line 1013 "string_switch.m"
                                        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                          *ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__V_32_32;
#line 1013 "string_switch.m"
                                        else
#line 1013 "string_switch.m"
                                          {
#line 1013 "string_switch.m"
                                            {
#line 1013 "string_switch.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[2], ll_backend__string_switch__HeadVar__1_1, ((MR_Box) (ll_backend__string_switch__V_13_13)), ((MR_Box) (ll_backend__string_switch__V_23_23)));
#line 1013 "string_switch.m"
                                              return;
                                            }
#line 1013 "string_switch.m"
                                          }
#line 1013 "string_switch.m"
                                      }
#line 1013 "string_switch.m"
                                  }
#line 1013 "string_switch.m"
                              }
#line 1013 "string_switch.m"
                          }
#line 1013 "string_switch.m"
                      }
#line 1013 "string_switch.m"
                  }
#line 1013 "string_switch.m"
              }
#line 1013 "string_switch.m"
          }
#line 1013 "string_switch.m"
      }
#line 1013 "string_switch.m"
  }
#line 1013 "string_switch.m"
}

#line 1013 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 1013 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__2_2)
#line 1013 "string_switch.m"
{
#line 1013 "string_switch.m"
  {
#line 1013 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1013 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastX_23 = (MR_Integer) ll_backend__string_switch__HeadVar__1_1;
#line 1013 "string_switch.m"
    MR_Integer ll_backend__string_switch__CastY_24 = (MR_Integer) ll_backend__string_switch__HeadVar__2_2;

#line 1013 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__CastX_23 == ll_backend__string_switch__CastY_24);
#line 1013 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
      ll_backend__string_switch__succeeded = MR_TRUE;
#line 1013 "string_switch.m"
    else
#line 1013 "string_switch.m"
      {
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeInfo_34_34;
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 8)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 9)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 8)));
#line 1013 "string_switch.m"
        MR_Word ll_backend__string_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HeadVar__2_2, (MR_Integer) 9)));

#line 2289 "ll_backend.string_switch.c"
        {
#line 2291 "ll_backend.string_switch.c"
          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_3_3, ll_backend__string_switch__V_13_13);
        }
#line 1013 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
          {
#line 2298 "ll_backend.string_switch.c"
            {
#line 2300 "ll_backend.string_switch.c"
              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_4_4, ll_backend__string_switch__V_14_14);
            }
#line 1013 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
              {
#line 2307 "ll_backend.string_switch.c"
                {
#line 2309 "ll_backend.string_switch.c"
                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_5_5, ll_backend__string_switch__V_15_15);
                }
#line 1013 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                  {
#line 2316 "ll_backend.string_switch.c"
                    {
#line 2318 "ll_backend.string_switch.c"
                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__string_switch__V_6_6, ll_backend__string_switch__V_16_16);
                    }
#line 1013 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                      {
#line 2325 "ll_backend.string_switch.c"
                        {
#line 2327 "ll_backend.string_switch.c"
                          ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_7_7, ll_backend__string_switch__V_17_17);
                        }
#line 1013 "string_switch.m"
                        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                          {
#line 2334 "ll_backend.string_switch.c"
                            {
#line 2336 "ll_backend.string_switch.c"
                              ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_8_8, ll_backend__string_switch__V_18_18);
                            }
#line 1013 "string_switch.m"
                            if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                              {
#line 2343 "ll_backend.string_switch.c"
                                {
#line 2345 "ll_backend.string_switch.c"
                                  ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_9_9, ll_backend__string_switch__V_19_19);
                                }
#line 1013 "string_switch.m"
                                if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                  {
#line 2352 "ll_backend.string_switch.c"
                                    {
#line 2354 "ll_backend.string_switch.c"
                                      ll_backend__string_switch__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__string_switch__V_10_10, ll_backend__string_switch__V_20_20);
                                    }
#line 1013 "string_switch.m"
                                    if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                      {
#line 2361 "ll_backend.string_switch.c"
                                        {
#line 2363 "ll_backend.string_switch.c"
                                          ll_backend__string_switch__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__string_switch__V_11_11, ll_backend__string_switch__V_21_21);
                                        }
#line 1013 "string_switch.m"
                                        if (ll_backend__string_switch__succeeded)
#line 1013 "string_switch.m"
                                          {
#line 2370 "ll_backend.string_switch.c"
                                            ll_backend__string_switch__TypeInfo_34_34 = (MR_Word) &ll_backend__string_switch_scalar_common_1[2];
#line 2372 "ll_backend.string_switch.c"
                                            {
#line 2374 "ll_backend.string_switch.c"
                                              return ll_backend__string_switch__succeeded = mercury__builtin__unify_2_p_0(ll_backend__string_switch__TypeInfo_34_34, ((MR_Box) (ll_backend__string_switch__V_12_12)), ((MR_Box) (ll_backend__string_switch__V_22_22)));
                                            }
#line 1013 "string_switch.m"
                                          }
#line 1013 "string_switch.m"
                                      }
#line 1013 "string_switch.m"
                                  }
#line 1013 "string_switch.m"
                              }
#line 1013 "string_switch.m"
                          }
#line 1013 "string_switch.m"
                      }
#line 1013 "string_switch.m"
                  }
#line 1013 "string_switch.m"
              }
#line 1013 "string_switch.m"
          }
#line 1013 "string_switch.m"
      }
#line 1013 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 1013 "string_switch.m"
  }
#line 1013 "string_switch.m"
}

#line 1069 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_8,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_9,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_10,
#line 1069 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_11,
#line 1069 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_12,
#line 1069 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_13,
#line 1069 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_14)
#line 1069 "string_switch.m"
{
#line 1074 "string_switch.m"
  {
#line 1074 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__LoReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 0)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__HiReg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 1)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 2)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__ResultReg_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 3)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 4)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__GtEqLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 5)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__EqLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 6)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 7)));
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 9)));
#line 1074 "string_switch.m"
    MR_Integer ll_backend__string_switch__MaxIndex_25 = (ll_backend__string_switch__TableSize_12 - (MR_Integer) 1);
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_27_27;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_28_28;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_29_29;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_30_30;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_35_35;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_36_36;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_37_37;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_38_38;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_39_39;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_41_41;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_42_42;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_43_43;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_45_45;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_46_46;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_47_47;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_48_48;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_50_50;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_51_51;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_52_52;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_54_54;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_55_55;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_56_56;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_57_57;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_59_59;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_67_67;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_68_68;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_69_69;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_70_70;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_72_72;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_73_73;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_74_74;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_76_76;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_78_78;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_80_80;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_81_81;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_83_83;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_85_85;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_111_111;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_112_112;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_119_119;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_121_121;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_122_122;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_123_123;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_124_124;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_131_131;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_132_132;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_136_136;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_137_137;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_138_138;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_141_141;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_142_142;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_143_143;
#line 1074 "string_switch.m"
    MR_Word ll_backend__string_switch__V_144_144;
#line 1075 "string_switch.m"
    MR_Word ll_backend__string_switch___BranchStart_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_8, (MR_Integer) 8)));

#line 1080 "string_switch.m"
    {
#line 1080 "string_switch.m"
      ll_backend__string_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_30_30, 2) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1080 "string_switch.m"
    }
#line 1080 "string_switch.m"
    {
#line 1080 "string_switch.m"
      ll_backend__string_switch__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_29_29, 0) = ((MR_Box) (ll_backend__string_switch__V_30_30));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_29_29, 1) = ((MR_Box) ((MR_String) ""));
#line 1080 "string_switch.m"
    }
#line 1081 "string_switch.m"
    {
#line 1081 "string_switch.m"
      ll_backend__string_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_39_39, 0) = ((MR_Box) (ll_backend__string_switch__MaxIndex_25));
#line 1081 "string_switch.m"
    }
#line 1081 "string_switch.m"
    {
#line 1081 "string_switch.m"
      ll_backend__string_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_38_38, 1) = ((MR_Box) (ll_backend__string_switch__V_39_39));
#line 1081 "string_switch.m"
    }
#line 1081 "string_switch.m"
    {
#line 1081 "string_switch.m"
      ll_backend__string_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_37_37, 2) = ((MR_Box) (ll_backend__string_switch__V_38_38));
#line 1081 "string_switch.m"
    }
#line 1081 "string_switch.m"
    {
#line 1081 "string_switch.m"
      ll_backend__string_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_36_36, 0) = ((MR_Box) (ll_backend__string_switch__V_37_37));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_36_36, 1) = ((MR_Box) ((MR_String) ""));
#line 1081 "string_switch.m"
    }
#line 1082 "string_switch.m"
    {
#line 1082 "string_switch.m"
      ll_backend__string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1082 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
#line 1082 "string_switch.m"
    }
#line 1082 "string_switch.m"
    {
#line 1082 "string_switch.m"
      ll_backend__string_switch__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_42_42, 0) = ((MR_Box) (ll_backend__string_switch__V_43_43));
#line 1082 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_42_42, 1) = ((MR_Box) ((MR_String) "begin table search loop, nofulljump"));
#line 1082 "string_switch.m"
    }
#line 1084 "string_switch.m"
    {
#line 1084 "string_switch.m"
      ll_backend__string_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_50_50, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1084 "string_switch.m"
    }
#line 1084 "string_switch.m"
    {
#line 1084 "string_switch.m"
      ll_backend__string_switch__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_51_51, 0) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1084 "string_switch.m"
    }
#line 1084 "string_switch.m"
    {
#line 1084 "string_switch.m"
      ll_backend__string_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 2) = ((MR_Box) (ll_backend__string_switch__V_50_50));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_48_48, 3) = ((MR_Box) (ll_backend__string_switch__V_51_51));
#line 1084 "string_switch.m"
    }
#line 1085 "string_switch.m"
    {
#line 1085 "string_switch.m"
      ll_backend__string_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_52_52, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
#line 1085 "string_switch.m"
    }
#line 1084 "string_switch.m"
    {
#line 1084 "string_switch.m"
      ll_backend__string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 1) = ((MR_Box) (ll_backend__string_switch__V_48_48));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_47_47, 2) = ((MR_Box) (ll_backend__string_switch__V_52_52));
#line 1084 "string_switch.m"
    }
#line 1084 "string_switch.m"
    {
#line 1084 "string_switch.m"
      ll_backend__string_switch__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_46_46, 0) = ((MR_Box) (ll_backend__string_switch__V_47_47));
#line 1084 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_46_46, 1) = ((MR_Box) ((MR_String) "have we searched all of the table\?"));
#line 1084 "string_switch.m"
    }
#line 1089 "string_switch.m"
    {
#line 1089 "string_switch.m"
      ll_backend__string_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1089 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 2) = ((MR_Box) (ll_backend__string_switch__V_50_50));
#line 1089 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_59_59, 3) = ((MR_Box) (ll_backend__string_switch__V_51_51));
#line 1089 "string_switch.m"
    }
#line 1088 "string_switch.m"
    {
#line 1088 "string_switch.m"
      ll_backend__string_switch__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1088 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1088 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 2) = ((MR_Box) (ll_backend__string_switch__V_59_59));
#line 1088 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_57_57, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
#line 1088 "string_switch.m"
    }
#line 1087 "string_switch.m"
    {
#line 1087 "string_switch.m"
      ll_backend__string_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1087 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 1) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
#line 1087 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 2) = ((MR_Box) (ll_backend__string_switch__V_57_57));
#line 1087 "string_switch.m"
    }
#line 1087 "string_switch.m"
    {
#line 1087 "string_switch.m"
      ll_backend__string_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, 0) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 1087 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, 1) = ((MR_Box) ((MR_String) ""));
#line 1087 "string_switch.m"
    }
#line 1094 "string_switch.m"
    {
#line 1094 "string_switch.m"
      ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_11));
#line 1094 "string_switch.m"
    }
#line 1097 "string_switch.m"
    {
#line 1097 "string_switch.m"
      ll_backend__string_switch__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_76_76, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_17));
#line 1097 "string_switch.m"
    }
#line 1098 "string_switch.m"
    {
#line 1098 "string_switch.m"
      ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_13));
#line 1098 "string_switch.m"
    }
#line 1098 "string_switch.m"
    {
#line 1098 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1098 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 1098 "string_switch.m"
    }
#line 1096 "string_switch.m"
    {
#line 1096 "string_switch.m"
      ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1096 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1096 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1096 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_74_74, 3) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 1096 "string_switch.m"
    }
#line 1094 "string_switch.m"
    {
#line 1094 "string_switch.m"
      ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_10));
#line 1094 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 3) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 1094 "string_switch.m"
    }
#line 1092 "string_switch.m"
    {
#line 1092 "string_switch.m"
      ll_backend__string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_9));
#line 1092 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 3) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 1092 "string_switch.m"
    }
#line 1091 "string_switch.m"
    {
#line 1091 "string_switch.m"
      ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (ll_backend__string_switch__V_70_70));
#line 1091 "string_switch.m"
    }
#line 1091 "string_switch.m"
    {
#line 1091 "string_switch.m"
      ll_backend__string_switch__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 0) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 1091 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_68_68, 1) = ((MR_Box) ((MR_String) "compare with the middle element"));
#line 1091 "string_switch.m"
    }
#line 1102 "string_switch.m"
    {
#line 1102 "string_switch.m"
      ll_backend__string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (ll_backend__string_switch__ResultReg_18));
#line 1102 "string_switch.m"
    }
#line 1102 "string_switch.m"
    {
#line 1102 "string_switch.m"
      ll_backend__string_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 2) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 1102 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 3) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1102 "string_switch.m"
    }
#line 1103 "string_switch.m"
    {
#line 1103 "string_switch.m"
      ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
#line 1103 "string_switch.m"
    }
#line 1101 "string_switch.m"
    {
#line 1101 "string_switch.m"
      ll_backend__string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 1) = ((MR_Box) (ll_backend__string_switch__V_83_83));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_82_82, 2) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 1101 "string_switch.m"
    }
#line 1101 "string_switch.m"
    {
#line 1101 "string_switch.m"
      ll_backend__string_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 0) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 1101 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_81_81, 1) = ((MR_Box) ((MR_String) "branch away unless key is in lo half"));
#line 1101 "string_switch.m"
    }
#line 1106 "string_switch.m"
    ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20]);
#line 1106 "string_switch.m"
    {
#line 1106 "string_switch.m"
      ll_backend__string_switch__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_94_94, 3) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 1106 "string_switch.m"
    }
#line 1105 "string_switch.m"
    {
#line 1105 "string_switch.m"
      ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_16));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_93_93, 2) = ((MR_Box) (ll_backend__string_switch__V_94_94));
#line 1105 "string_switch.m"
    }
#line 1105 "string_switch.m"
    {
#line 1105 "string_switch.m"
      ll_backend__string_switch__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_92_92, 0) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 1105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
#line 1105 "string_switch.m"
    }
#line 1107 "string_switch.m"
    {
#line 1107 "string_switch.m"
      ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_19));
#line 1107 "string_switch.m"
    }
#line 1107 "string_switch.m"
    {
#line 1107 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 1107 "string_switch.m"
    }
#line 1107 "string_switch.m"
    {
#line 1107 "string_switch.m"
      ll_backend__string_switch__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 1107 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 1) = ((MR_Box) ((MR_String) "go back to search the remaining lo half"));
#line 1107 "string_switch.m"
    }
#line 1109 "string_switch.m"
    {
#line 1109 "string_switch.m"
      ll_backend__string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 1) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_20));
#line 1109 "string_switch.m"
    }
#line 1109 "string_switch.m"
    {
#line 1109 "string_switch.m"
      ll_backend__string_switch__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) (ll_backend__string_switch__V_108_108));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) ((MR_String) "nofulljump"));
#line 1109 "string_switch.m"
    }
#line 1112 "string_switch.m"
    {
#line 1112 "string_switch.m"
      ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 2) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 1112 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_113_113, 3) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 1112 "string_switch.m"
    }
#line 1113 "string_switch.m"
    {
#line 1113 "string_switch.m"
      ll_backend__string_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_119_119, 0) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
#line 1113 "string_switch.m"
    }
#line 1111 "string_switch.m"
    {
#line 1111 "string_switch.m"
      ll_backend__string_switch__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1111 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 1) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 1111 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 2) = ((MR_Box) (ll_backend__string_switch__V_119_119));
#line 1111 "string_switch.m"
    }
#line 1111 "string_switch.m"
    {
#line 1111 "string_switch.m"
      ll_backend__string_switch__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 0) = ((MR_Box) (ll_backend__string_switch__V_112_112));
#line 1111 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 1) = ((MR_Box) ((MR_String) "branch away unless key is in hi half"));
#line 1111 "string_switch.m"
    }
#line 1116 "string_switch.m"
    {
#line 1116 "string_switch.m"
      ll_backend__string_switch__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 2) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 3) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 1116 "string_switch.m"
    }
#line 1115 "string_switch.m"
    {
#line 1115 "string_switch.m"
      ll_backend__string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 1) = ((MR_Box) (ll_backend__string_switch__LoReg_15));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_123_123, 2) = ((MR_Box) (ll_backend__string_switch__V_124_124));
#line 1115 "string_switch.m"
    }
#line 1115 "string_switch.m"
    {
#line 1115 "string_switch.m"
      ll_backend__string_switch__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 0) = ((MR_Box) (ll_backend__string_switch__V_123_123));
#line 1115 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_122_122, 1) = ((MR_Box) ((MR_String) ""));
#line 1115 "string_switch.m"
    }
#line 1117 "string_switch.m"
    {
#line 1117 "string_switch.m"
      ll_backend__string_switch__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 0) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 1117 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_132_132, 1) = ((MR_Box) ((MR_String) "go back to search the remaining hi half"));
#line 1117 "string_switch.m"
    }
#line 1119 "string_switch.m"
    {
#line 1119 "string_switch.m"
      ll_backend__string_switch__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_138_138, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_22));
#line 1119 "string_switch.m"
    }
#line 1119 "string_switch.m"
    {
#line 1119 "string_switch.m"
      ll_backend__string_switch__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_137_137, 0) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 1119 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_137_137, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 1119 "string_switch.m"
    }
#line 1121 "string_switch.m"
    {
#line 1121 "string_switch.m"
      ll_backend__string_switch__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_136_136, 0) = ((MR_Box) (ll_backend__string_switch__V_137_137));
#line 1121 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "string_switch.m"
    }
#line 1118 "string_switch.m"
    {
#line 1118 "string_switch.m"
      ll_backend__string_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_131_131, 0) = ((MR_Box) (ll_backend__string_switch__V_132_132));
#line 1118 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_131_131, 1) = ((MR_Box) (ll_backend__string_switch__V_136_136));
#line 1118 "string_switch.m"
    }
#line 1116 "string_switch.m"
    {
#line 1116 "string_switch.m"
      ll_backend__string_switch__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_121_121, 0) = ((MR_Box) (ll_backend__string_switch__V_122_122));
#line 1116 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_121_121, 1) = ((MR_Box) (ll_backend__string_switch__V_131_131));
#line 1116 "string_switch.m"
    }
#line 1114 "string_switch.m"
    {
#line 1114 "string_switch.m"
      ll_backend__string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 1114 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 1) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 1114 "string_switch.m"
    }
#line 1109 "string_switch.m"
    {
#line 1109 "string_switch.m"
      ll_backend__string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (ll_backend__string_switch__V_107_107));
#line 1109 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 1109 "string_switch.m"
    }
#line 1108 "string_switch.m"
    {
#line 1108 "string_switch.m"
      ll_backend__string_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_101_101, 0) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 1108 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_101_101, 1) = ((MR_Box) (ll_backend__string_switch__V_106_106));
#line 1108 "string_switch.m"
    }
#line 1106 "string_switch.m"
    {
#line 1106 "string_switch.m"
      ll_backend__string_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__V_92_92));
#line 1106 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 1) = ((MR_Box) (ll_backend__string_switch__V_101_101));
#line 1106 "string_switch.m"
    }
#line 1104 "string_switch.m"
    {
#line 1104 "string_switch.m"
      ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (ll_backend__string_switch__V_81_81));
#line 1104 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 1104 "string_switch.m"
    }
#line 1099 "string_switch.m"
    {
#line 1099 "string_switch.m"
      ll_backend__string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_67_67, 0) = ((MR_Box) (ll_backend__string_switch__V_68_68));
#line 1099 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_67_67, 1) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 1099 "string_switch.m"
    }
#line 1090 "string_switch.m"
    {
#line 1090 "string_switch.m"
      ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (ll_backend__string_switch__V_55_55));
#line 1090 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 1) = ((MR_Box) (ll_backend__string_switch__V_67_67));
#line 1090 "string_switch.m"
    }
#line 1086 "string_switch.m"
    {
#line 1086 "string_switch.m"
      ll_backend__string_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_45_45, 0) = ((MR_Box) (ll_backend__string_switch__V_46_46));
#line 1086 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_45_45, 1) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 1086 "string_switch.m"
    }
#line 1083 "string_switch.m"
    {
#line 1083 "string_switch.m"
      ll_backend__string_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_41_41, 0) = ((MR_Box) (ll_backend__string_switch__V_42_42));
#line 1083 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_41_41, 1) = ((MR_Box) (ll_backend__string_switch__V_45_45));
#line 1083 "string_switch.m"
    }
#line 1081 "string_switch.m"
    {
#line 1081 "string_switch.m"
      ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (ll_backend__string_switch__V_36_36));
#line 1081 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 1) = ((MR_Box) (ll_backend__string_switch__V_41_41));
#line 1081 "string_switch.m"
    }
#line 1080 "string_switch.m"
    {
#line 1080 "string_switch.m"
      ll_backend__string_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_28_28, 0) = ((MR_Box) (ll_backend__string_switch__V_29_29));
#line 1080 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_28_28, 1) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 1080 "string_switch.m"
    }
#line 1079 "string_switch.m"
    {
#line 1079 "string_switch.m"
      ll_backend__string_switch__V_27_27 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__V_28_28);
    }
#line 1124 "string_switch.m"
    {
#line 1124 "string_switch.m"
      ll_backend__string_switch__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1124 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_144_144, 1) = ((MR_Box) (ll_backend__string_switch__EqLabel_21));
#line 1124 "string_switch.m"
    }
#line 1124 "string_switch.m"
    {
#line 1124 "string_switch.m"
      ll_backend__string_switch__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_143_143, 0) = ((MR_Box) (ll_backend__string_switch__V_144_144));
#line 1124 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_143_143, 1) = ((MR_Box) ((MR_String) "we found the key"));
#line 1124 "string_switch.m"
    }
#line 1123 "string_switch.m"
    {
#line 1123 "string_switch.m"
      ll_backend__string_switch__V_142_142 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ((MR_Box) (ll_backend__string_switch__V_143_143)));
    }
#line 1122 "string_switch.m"
    {
#line 1122 "string_switch.m"
      ll_backend__string_switch__V_141_141 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__FailCode_24, ll_backend__string_switch__V_142_142);
    }
#line 1121 "string_switch.m"
    {
#line 1121 "string_switch.m"
      *ll_backend__string_switch__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_146_146, ll_backend__string_switch__V_27_27, ll_backend__string_switch__V_141_141);
    }
#line 1074 "string_switch.m"
  }
#line 1069 "string_switch.m"
}

#line 1029 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_6,
#line 1029 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_7,
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_20,
#line 1029 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_21,
#line 1029 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_22)
#line 1029 "string_switch.m"
{
#line 1033 "string_switch.m"
  {
#line 1033 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__LoReg_10;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__HiReg_11;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_12;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__ResultReg_13;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_14;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__GtEqLabel_15;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__EqLabel_16;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_17;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_18;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_19;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_24_24;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_26_26;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_28_28;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_30_30;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_31_31;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_32_32;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_33_33;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_34_34;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_35_35;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_36_36;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_37_37;
#line 1033 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_38_38;

#line 1042 "string_switch.m"
    {
#line 1042 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__LoReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_0_22, &ll_backend__string_switch__STATE_VARIABLE_CLD_24_24);
    }
#line 1043 "string_switch.m"
    {
#line 1043 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__HiReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_24_24, &ll_backend__string_switch__STATE_VARIABLE_CLD_26_26);
    }
#line 1044 "string_switch.m"
    {
#line 1044 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__MidReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_26_26, &ll_backend__string_switch__STATE_VARIABLE_CLD_28_28);
    }
#line 1045 "string_switch.m"
    {
#line 1045 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__ResultReg_13, ll_backend__string_switch__STATE_VARIABLE_CLD_28_28, &ll_backend__string_switch__STATE_VARIABLE_CLD_30_30);
    }
#line 1046 "string_switch.m"
    {
#line 1046 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__LoReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_30_30, &ll_backend__string_switch__STATE_VARIABLE_CLD_31_31);
    }
#line 1047 "string_switch.m"
    {
#line 1047 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__HiReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_31_31, &ll_backend__string_switch__STATE_VARIABLE_CLD_32_32);
    }
#line 1048 "string_switch.m"
    {
#line 1048 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__MidReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_32_32, &ll_backend__string_switch__STATE_VARIABLE_CLD_33_33);
    }
#line 1049 "string_switch.m"
    {
#line 1049 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__ResultReg_13, ll_backend__string_switch__STATE_VARIABLE_CLD_33_33, &ll_backend__string_switch__STATE_VARIABLE_CLD_34_34);
    }
#line 1051 "string_switch.m"
    {
#line 1051 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_14, ll_backend__string_switch__STATE_VARIABLE_CI_0_20, &ll_backend__string_switch__STATE_VARIABLE_CI_35_35);
    }
#line 1052 "string_switch.m"
    {
#line 1052 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__GtEqLabel_15, ll_backend__string_switch__STATE_VARIABLE_CI_35_35, &ll_backend__string_switch__STATE_VARIABLE_CI_36_36);
    }
#line 1053 "string_switch.m"
    {
#line 1053 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__EqLabel_16, ll_backend__string_switch__STATE_VARIABLE_CI_36_36, &ll_backend__string_switch__STATE_VARIABLE_CI_37_37);
    }
#line 1054 "string_switch.m"
    {
#line 1054 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_17, ll_backend__string_switch__STATE_VARIABLE_CI_37_37, &ll_backend__string_switch__STATE_VARIABLE_CI_38_38);
    }
#line 1058 "string_switch.m"
    {
#line 1058 "string_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CLD_34_34, &ll_backend__string_switch__BranchStart_18);
    }
#line 1134 "string_switch.m"
#line 1134 "string_switch.m"
    switch (ll_backend__string_switch__CanFail_6) {
#line 1134 "string_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "string_switch.m"
      case (MR_Integer) 0:
#line 1135 "string_switch.m"
        {
#line 1135 "string_switch.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__string_switch__FailCode_19, ll_backend__string_switch__STATE_VARIABLE_CI_38_38, ll_backend__string_switch__STATE_VARIABLE_CI_21, ll_backend__string_switch__STATE_VARIABLE_CLD_34_34);
        }
#line 1134 "string_switch.m"
        break;
#line 1134 "string_switch.m"
      case (MR_Integer) 1:
#line 1137 "string_switch.m"
        {
#line 1138 "string_switch.m"
          {
#line 1138 "string_switch.m"
            ll_backend__string_switch__FailCode_19 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[25])));
          }
#line 1137 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_CI_21 = ll_backend__string_switch__STATE_VARIABLE_CI_38_38;
#line 1137 "string_switch.m"
        }
#line 1134 "string_switch.m"
        break;
#line 1134 "string_switch.m"
    }
#line 1061 "string_switch.m"
    {
#line 1061 "string_switch.m"
      MR_Word base;
#line 1061 "string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "string_switch.m"
      *ll_backend__string_switch__Info_7 = base;
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__LoReg_10));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__HiReg_11));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__MidReg_12));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__ResultReg_13));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_14));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__GtEqLabel_15));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__EqLabel_16));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailLabel_17));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__string_switch__BranchStart_18));
#line 1061 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__string_switch__FailCode_19));
#line 1061 "string_switch.m"
    }
#line 1033 "string_switch.m"
  }
#line 1029 "string_switch.m"
}

#line 973 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__2_2,
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3,
#line 973 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__5_5,
#line 973 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6,
#line 973 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8,
#line 973 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9,
#line 973 "string_switch.m"
  MR_Integer ll_backend__string_switch__HeadVar__10_10,
#line 973 "string_switch.m"
  MR_Integer * ll_backend__string_switch__HeadVar__11_11)
#line 973 "string_switch.m"
{
#line 979 "string_switch.m"
  while (MR_TRUE)
#line 979 "string_switch.m"
    {
#line 979 "string_switch.m"
      /* tailcall optimized into a loop */
#line 979 "string_switch.m"
      {
#line 979 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 979 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "string_switch.m"
          {
#line 981 "string_switch.m"
            *ll_backend__string_switch__HeadVar__11_11 = ll_backend__string_switch__HeadVar__10_10;
#line 981 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_9 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
#line 980 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_7 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
#line 980 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_4 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3;
#line 979 "string_switch.m"
          }
#line 979 "string_switch.m"
        else
#line 984 "string_switch.m"
          {
#line 984 "string_switch.m"
            MR_String ll_backend__string_switch__Str_26;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__Soln_27;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__StrSolns_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__StrRval_35;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__MainRow_38;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__V_56_56;
#line 984 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;
#line 984 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
#line 984 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
#line 984 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;

#line 982 "string_switch.m"
            ll_backend__string_switch__Str_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, (MR_Integer) 0)));
#line 982 "string_switch.m"
            ll_backend__string_switch__Soln_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_55_55, (MR_Integer) 1)));
#line 985 "string_switch.m"
            {
#line 985 "string_switch.m"
              ll_backend__string_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_56_56, 1) = ((MR_Box) (ll_backend__string_switch__Str_26));
#line 985 "string_switch.m"
            }
#line 985 "string_switch.m"
            {
#line 985 "string_switch.m"
              ll_backend__string_switch__StrRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__StrRval_35, 1) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 985 "string_switch.m"
            }
#line 993 "string_switch.m"
            if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_27)) == (MR_mktag((MR_Integer) 0))))
#line 987 "string_switch.m"
              {
#line 987 "string_switch.m"
                MR_Word ll_backend__string_switch__OutRvals_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
#line 987 "string_switch.m"
                MR_Word ll_backend__string_switch__ZeroRval_37;
#line 987 "string_switch.m"
                MR_Word ll_backend__string_switch__V_73_73;
#line 987 "string_switch.m"
                MR_Word ll_backend__string_switch__V_74_74;

#line 988 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 + (MR_Integer) 1);
#line 989 "string_switch.m"
                ll_backend__string_switch__ZeroRval_37 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 992 "string_switch.m"
                {
#line 992 "string_switch.m"
                  ll_backend__string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_74_74, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_36));
#line 992 "string_switch.m"
                }
#line 992 "string_switch.m"
                {
#line 992 "string_switch.m"
                  ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_37));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_73_73, 1) = ((MR_Box) (ll_backend__string_switch__V_74_74));
#line 992 "string_switch.m"
                }
#line 992 "string_switch.m"
                {
#line 992 "string_switch.m"
                  ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
#line 992 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 992 "string_switch.m"
                }
#line 987 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = ll_backend__string_switch__HeadVar__5_5;
#line 987 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6;
#line 987 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = ll_backend__string_switch__HeadVar__10_10;
#line 987 "string_switch.m"
              }
#line 993 "string_switch.m"
            else
#line 994 "string_switch.m"
              {
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__TypeInfo_80_80;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__FirstSolnRvals_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 0)));
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__LaterSolns_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_27, (MR_Integer) 1)));
#line 994 "string_switch.m"
                MR_Integer ll_backend__string_switch__NumLaterSolns_41;
#line 994 "string_switch.m"
                MR_Integer ll_backend__string_switch__FirstRowOffset_42;
#line 994 "string_switch.m"
                MR_Integer ll_backend__string_switch__LastRowOffset_43;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__FirstRowRval_44;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__LastRowRval_45;
#line 994 "string_switch.m"
                MR_Integer ll_backend__string_switch__V_59_59;
#line 994 "string_switch.m"
                MR_Integer ll_backend__string_switch__V_60_60;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__V_62_62;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__V_63_63;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__V_64_64;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__V_65_65;
#line 994 "string_switch.m"
                MR_Word ll_backend__string_switch__V_68_68;

#line 995 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57 = (ll_backend__string_switch__HeadVar__10_10 + (MR_Integer) 1);
#line 3709 "ll_backend.string_switch.c"
                ll_backend__string_switch__TypeInfo_80_80 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 996 "string_switch.m"
                {
#line 996 "string_switch.m"
                  mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40, &ll_backend__string_switch__NumLaterSolns_41);
                }
#line 997 "string_switch.m"
                ll_backend__string_switch__FirstRowOffset_42 = (ll_backend__string_switch__HeadVar__5_5 * ll_backend__string_switch__HeadVar__2_2);
#line 998 "string_switch.m"
                ll_backend__string_switch__V_60_60 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
#line 998 "string_switch.m"
                ll_backend__string_switch__V_59_59 = (ll_backend__string_switch__V_60_60 - (MR_Integer) 1);
#line 998 "string_switch.m"
                ll_backend__string_switch__LastRowOffset_43 = (ll_backend__string_switch__V_59_59 * ll_backend__string_switch__HeadVar__2_2);
#line 999 "string_switch.m"
                {
#line 999 "string_switch.m"
                  ll_backend__string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_42));
#line 999 "string_switch.m"
                }
#line 999 "string_switch.m"
                {
#line 999 "string_switch.m"
                  ll_backend__string_switch__FirstRowRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 999 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_44, 1) = ((MR_Box) (ll_backend__string_switch__V_62_62));
#line 999 "string_switch.m"
                }
#line 1000 "string_switch.m"
                {
#line 1000 "string_switch.m"
                  ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_43));
#line 1000 "string_switch.m"
                }
#line 1000 "string_switch.m"
                {
#line 1000 "string_switch.m"
                  ll_backend__string_switch__LastRowRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1000 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_45, 1) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 1000 "string_switch.m"
                }
#line 1001 "string_switch.m"
                {
#line 1001 "string_switch.m"
                  ll_backend__string_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_65_65, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_45));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_65_65, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_39));
#line 1001 "string_switch.m"
                }
#line 1001 "string_switch.m"
                {
#line 1001 "string_switch.m"
                  ll_backend__string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_64_64, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_44));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_64_64, 1) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 1001 "string_switch.m"
                }
#line 1001 "string_switch.m"
                {
#line 1001 "string_switch.m"
                  ll_backend__string_switch__MainRow_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 0) = ((MR_Box) (ll_backend__string_switch__StrRval_35));
#line 1001 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_38, 1) = ((MR_Box) (ll_backend__string_switch__V_64_64));
#line 1001 "string_switch.m"
                }
#line 1002 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66 = (ll_backend__string_switch__HeadVar__5_5 + ll_backend__string_switch__NumLaterSolns_41);
#line 1003 "string_switch.m"
                {
#line 1003 "string_switch.m"
                  ll_backend__string_switch__V_68_68 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__LaterSolns_40);
                }
#line 1003 "string_switch.m"
                {
#line 1003 "string_switch.m"
                  ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_80_80, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6, ll_backend__string_switch__V_68_68);
                }
#line 994 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8;
#line 994 "string_switch.m"
              }
#line 1005 "string_switch.m"
            {
#line 1005 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_38));
#line 1005 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3));
#line 1005 "string_switch.m"
            }
#line 1006 "string_switch.m"
            /* direct tailcall eliminated */
#line 1006 "string_switch.m"
            {
#line 1006 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__StrSolns_28;
#line 1006 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_3 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_75_75;
#line 1006 "string_switch.m"
              MR_Integer ll_backend__string_switch__HeadVar__5__tmp_copy_5 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_66_66;
#line 1006 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_6 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_67_67;
#line 1006 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_8 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_69_69;
#line 1006 "string_switch.m"
              MR_Integer ll_backend__string_switch__HeadVar__10__tmp_copy_10 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_57_57;

#line 1006 "string_switch.m"
              ll_backend__string_switch__HeadVar__10_10 = ll_backend__string_switch__HeadVar__10__tmp_copy_10;
#line 1006 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_8 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_8;
#line 1006 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_6 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_6;
#line 1006 "string_switch.m"
              ll_backend__string_switch__HeadVar__5_5 = ll_backend__string_switch__HeadVar__5__tmp_copy_5;
#line 1006 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_3 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_3;
#line 1006 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 1006 "string_switch.m"
            }
#line 1006 "string_switch.m"
            continue;
#line 984 "string_switch.m"
          }
#line 979 "string_switch.m"
      }
#line 979 "string_switch.m"
      break;
#line 979 "string_switch.m"
    }
#line 973 "string_switch.m"
}

#line 922 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_3(
#line 922 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 922 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 922 "string_switch.m"
{
#line 922 "string_switch.m"
  {
#line 922 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 922 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 922 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 922 "string_switch.m"
    {
#line 922 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 922 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 922 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 922 "string_switch.m"
  }
#line 922 "string_switch.m"
}

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
#line 905 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 905 "string_switch.m"
{
#line 905 "string_switch.m"
  {
#line 905 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 905 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
#line 905 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 905 "string_switch.m"
  }
#line 905 "string_switch.m"
}

#line 905 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
#line 905 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 905 "string_switch.m"
{
#line 905 "string_switch.m"
  {
#line 905 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 905 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      return ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__905__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
#line 905 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 905 "string_switch.m"
  }
#line 905 "string_switch.m"
}

#line 874 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_17,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_18,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_19,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_22,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_23,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_24,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_25,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_26,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_28,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_66,
#line 874 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_67,
#line 874 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_68)
#line 874 "string_switch.m"
{
#line 883 "string_switch.m"
  {
#line 883 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_140_140;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_145_145;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_149_149;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_150_150;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_31;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_32;
#line 883 "string_switch.m"
    MR_Integer ll_backend__string_switch__MainTableSize_33;
#line 883 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_34;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_35;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_36;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_37;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__AddTrailOps_39;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyLaterSolnRow_41;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_42;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__RevMainRows_43;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_44;
#line 883 "string_switch.m"
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_45;
#line 883 "string_switch.m"
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_46;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRows_47;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArray_48;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_49;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_50;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedKinds_51;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRowTypes_52;
#line 883 "string_switch.m"
    MR_Integer ll_backend__string_switch__MainNumColumns_53;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddr_54;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddrRval_55;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddr_56;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_57;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__BaseReg_58;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_59;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_60;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_61;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__LookupResultsCode_62;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_63;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_69_69;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_76_76;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_78_78;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_80_80;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_84_84;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_102_102;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_105_105;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_109_109;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_111_111;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_112_112;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_116_116;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_118_118;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_119_119;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_120_120;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_125_125;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_126_126;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_128_128;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_129_129;
#line 883 "string_switch.m"
    MR_Word ll_backend__string_switch__V_130_130;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_131_131;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_132_132;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_133_133;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_134_134;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_135_135;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_136_136;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_137_137;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_138_138;
#line 948 "string_switch.m"
    MR_Word ll_backend__string_switch__V_139_139;

#line 889 "string_switch.m"
    {
#line 889 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_24, &ll_backend__string_switch__BinarySwitchInfo_31, ll_backend__string_switch__STATE_VARIABLE_CI_0_66, &ll_backend__string_switch__STATE_VARIABLE_CI_69_69, ll_backend__string_switch__STATE_VARIABLE_CLD_0_68);
    }
#line 4137 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_140_140 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 890 "string_switch.m"
    {
#line 890 "string_switch.m"
      ll_backend__string_switch__CommentCode_32 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[27])));
    }
#line 894 "string_switch.m"
    {
#line 894 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[4], ll_backend__string_switch__CaseSolns_18, &ll_backend__string_switch__MainTableSize_33);
    }
#line 895 "string_switch.m"
    {
#line 895 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_21, &ll_backend__string_switch__NumOutVars_34);
    }
#line 898 "string_switch.m"
    {
#line 898 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_35);
    }
#line 900 "string_switch.m"
    {
#line 900 "string_switch.m"
      ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) ((MR_Integer) 1));
#line 900 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
#line 900 "string_switch.m"
    }
#line 899 "string_switch.m"
    {
#line 899 "string_switch.m"
      ll_backend__string_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_76_76, 0) = ((MR_Box) ((MR_Integer) 1));
#line 899 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_76_76, 1) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 899 "string_switch.m"
    }
#line 899 "string_switch.m"
    {
#line 899 "string_switch.m"
      ll_backend__string_switch__ArrayElemTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
#line 899 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_36, 1) = ((MR_Box) (ll_backend__string_switch__V_76_76));
#line 899 "string_switch.m"
    }
#line 901 "string_switch.m"
    {
#line 901 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_37, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_36));
#line 901 "string_switch.m"
    }
#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      ll_backend__string_switch__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[1]));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_21));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "string_switch.m"
    }
#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      ll_backend__string_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_7[0]));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 905 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_80_80, 3) = ((MR_Box) (ll_backend__string_switch__V_84_84));
#line 905 "string_switch.m"
    }
#line 905 "string_switch.m"
    {
#line 905 "string_switch.m"
      mercury__require__expect_4_p_0(ll_backend__string_switch__V_80_80, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
    }
#line 910 "string_switch.m"
#line 910 "string_switch.m"
    switch (ll_backend__string_switch__GoalsMayModifyTrail_20) {
#line 910 "string_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 910 "string_switch.m"
      case (MR_Integer) 0:
#line 912 "string_switch.m"
        ll_backend__string_switch__AddTrailOps_39 = (MR_Integer) 1;
#line 910 "string_switch.m"
        break;
#line 910 "string_switch.m"
      case (MR_Integer) 1:
#line 908 "string_switch.m"
        {
#line 908 "string_switch.m"
          ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_69_69, &ll_backend__string_switch__AddTrailOps_39);
        }
#line 910 "string_switch.m"
        break;
#line 910 "string_switch.m"
    }
#line 4254 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_145_145 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 922 "string_switch.m"
    {
#line 922 "string_switch.m"
      ll_backend__string_switch__DummyLaterSolnRow_41 = mercury__list__map_2_f_0(ll_backend__string_switch__TypeCtorInfo_145_145, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[9], ll_backend__string_switch__OutTypes_22);
    }
#line 4261 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_149_149 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 923 "string_switch.m"
    {
#line 923 "string_switch.m"
      ll_backend__string_switch__LaterSolnArrayCord0_42 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_149_149, ((MR_Box) (ll_backend__string_switch__DummyLaterSolnRow_41)));
    }
#line 924 "string_switch.m"
    {
#line 924 "string_switch.m"
      ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(ll_backend__string_switch__CaseSolns_18, ll_backend__string_switch__NumOutVars_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_43, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_42, &ll_backend__string_switch__LaterSolnArrayCord_44, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_45, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_46);
    }
#line 928 "string_switch.m"
    {
#line 928 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_149_149, ll_backend__string_switch__RevMainRows_43, &ll_backend__string_switch__MainRows_47);
    }
#line 929 "string_switch.m"
    {
#line 929 "string_switch.m"
      ll_backend__string_switch__LaterSolnArray_48 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_149_149, ll_backend__string_switch__LaterSolnArrayCord_44);
    }
#line 931 "string_switch.m"
    {
#line 931 "string_switch.m"
      ll_backend__string_switch__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_45));
#line 931 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_91_91, 1) = ((MR_Box) ((MR_Integer) 1));
#line 931 "string_switch.m"
    }
#line 932 "string_switch.m"
    {
#line 932 "string_switch.m"
      ll_backend__string_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_46));
#line 932 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 1) = ((MR_Box) ((MR_Integer) 2));
#line 932 "string_switch.m"
    }
#line 932 "string_switch.m"
    {
#line 932 "string_switch.m"
      ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (ll_backend__string_switch__V_94_94));
#line 932 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "string_switch.m"
    }
#line 931 "string_switch.m"
    {
#line 931 "string_switch.m"
      ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 931 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 931 "string_switch.m"
    }
#line 4323 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_150_150 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
#line 931 "string_switch.m"
    {
#line 931 "string_switch.m"
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_150_150, ll_backend__string_switch__V_90_90, &ll_backend__string_switch__AscendingSortedCountKinds_49);
    }
#line 934 "string_switch.m"
    {
#line 934 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_150_150, ll_backend__string_switch__AscendingSortedCountKinds_49, &ll_backend__string_switch__DescendingSortedCountKinds_50);
    }
#line 935 "string_switch.m"
    {
#line 935 "string_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_50, &ll_backend__string_switch__DescendingSortedKinds_51);
    }
#line 937 "string_switch.m"
    {
#line 937 "string_switch.m"
      ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) ((MR_Integer) 7));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
#line 937 "string_switch.m"
    }
#line 937 "string_switch.m"
    {
#line 937 "string_switch.m"
      ll_backend__string_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) ((MR_Integer) 7));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 937 "string_switch.m"
    }
#line 937 "string_switch.m"
    {
#line 937 "string_switch.m"
      ll_backend__string_switch__MainRowTypes_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_52, 0) = ((MR_Box) ((MR_Integer) 10));
#line 937 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_52, 1) = ((MR_Box) (ll_backend__string_switch__V_98_98));
#line 937 "string_switch.m"
    }
#line 938 "string_switch.m"
    {
#line 938 "string_switch.m"
      mercury__list__length_2_p_0(ll_backend__string_switch__TypeCtorInfo_145_145, ll_backend__string_switch__MainRowTypes_52, &ll_backend__string_switch__MainNumColumns_53);
    }
#line 939 "string_switch.m"
    {
#line 939 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_52, ll_backend__string_switch__MainRows_47, &ll_backend__string_switch__MainVectorAddr_54, ll_backend__string_switch__STATE_VARIABLE_CI_69_69, &ll_backend__string_switch__STATE_VARIABLE_CI_102_102);
    }
#line 940 "string_switch.m"
    {
#line 940 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 940 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 940 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_54));
#line 940 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "string_switch.m"
    }
#line 940 "string_switch.m"
    {
#line 940 "string_switch.m"
      ll_backend__string_switch__MainVectorAddrRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 940 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_55, 1) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 940 "string_switch.m"
    }
#line 941 "string_switch.m"
    {
#line 941 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_22, ll_backend__string_switch__LaterSolnArray_48, &ll_backend__string_switch__LaterVectorAddr_56, ll_backend__string_switch__STATE_VARIABLE_CI_102_102, &ll_backend__string_switch__STATE_VARIABLE_CI_105_105);
    }
#line 942 "string_switch.m"
    {
#line 942 "string_switch.m"
      ll_backend__string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_56));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_106_106, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "string_switch.m"
    }
#line 942 "string_switch.m"
    {
#line 942 "string_switch.m"
      ll_backend__string_switch__LaterVectorAddrRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 942 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_57, 1) = ((MR_Box) (ll_backend__string_switch__V_106_106));
#line 942 "string_switch.m"
    }
#line 947 "string_switch.m"
    {
#line 947 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_26, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_58, ll_backend__string_switch__STATE_VARIABLE_CLD_0_68, &ll_backend__string_switch__STATE_VARIABLE_CLD_109_109);
    }
#line 948 "string_switch.m"
    ll_backend__string_switch__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 0)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 1)));
#line 948 "string_switch.m"
    ll_backend__string_switch__MidReg_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 2)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 3)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 4)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 5)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 6)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 7)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 8)));
#line 948 "string_switch.m"
    ll_backend__string_switch__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_31, (MR_Integer) 9)));
#line 955 "string_switch.m"
    {
#line 955 "string_switch.m"
      ll_backend__string_switch__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 955 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_118_118, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_59));
#line 955 "string_switch.m"
    }
#line 956 "string_switch.m"
    {
#line 956 "string_switch.m"
      ll_backend__string_switch__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_120_120, 0) = ((MR_Box) (ll_backend__string_switch__MainNumColumns_53));
#line 956 "string_switch.m"
    }
#line 956 "string_switch.m"
    {
#line 956 "string_switch.m"
      ll_backend__string_switch__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 956 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_119_119, 1) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 956 "string_switch.m"
    }
#line 954 "string_switch.m"
    {
#line 954 "string_switch.m"
      ll_backend__string_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 954 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 954 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 954 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 2) = ((MR_Box) (ll_backend__string_switch__V_118_118));
#line 954 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 3) = ((MR_Box) (ll_backend__string_switch__V_119_119));
#line 954 "string_switch.m"
    }
#line 953 "string_switch.m"
    {
#line 953 "string_switch.m"
      ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_55));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 953 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_113_113, 2) = ((MR_Box) (ll_backend__string_switch__V_116_116));
#line 953 "string_switch.m"
    }
#line 952 "string_switch.m"
    {
#line 952 "string_switch.m"
      ll_backend__string_switch__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 952 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_112_112, 1) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 952 "string_switch.m"
    }
#line 951 "string_switch.m"
    {
#line 951 "string_switch.m"
      ll_backend__string_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_111_111, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_58));
#line 951 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_111_111, 2) = ((MR_Box) (ll_backend__string_switch__V_112_112));
#line 951 "string_switch.m"
    }
#line 950 "string_switch.m"
    {
#line 950 "string_switch.m"
      ll_backend__string_switch__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 950 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_110_110, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 950 "string_switch.m"
    }
#line 949 "string_switch.m"
    {
#line 949 "string_switch.m"
      ll_backend__string_switch__SetBaseRegCode_60 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ((MR_Box) (ll_backend__string_switch__V_110_110)));
    }
#line 959 "string_switch.m"
    {
#line 959 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_31, ll_backend__string_switch__VarRval_17, ll_backend__string_switch__MainVectorAddrRval_55, ll_backend__string_switch__ArrayElemType_37, ll_backend__string_switch__MainTableSize_33, ll_backend__string_switch__MainNumColumns_53, &ll_backend__string_switch__BinarySearchCode_61);
    }
#line 963 "string_switch.m"
    {
#line 963 "string_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__string_switch__DescendingSortedKinds_51, (MR_Integer) 1, ll_backend__string_switch__OutVars_21, ll_backend__string_switch__ResumeVars_19, ll_backend__string_switch__EndLabel_25, ll_backend__string_switch__StoreMap_26, ll_backend__string_switch__Liveness_23, ll_backend__string_switch__AddTrailOps_39, ll_backend__string_switch__BaseReg_58, ll_backend__string_switch__LaterVectorAddrRval_57, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_64, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_65, &ll_backend__string_switch__LookupResultsCode_62, ll_backend__string_switch__STATE_VARIABLE_CI_105_105, ll_backend__string_switch__STATE_VARIABLE_CI_67, ll_backend__string_switch__STATE_VARIABLE_CLD_109_109);
    }
#line 967 "string_switch.m"
    {
#line 967 "string_switch.m"
      ll_backend__string_switch__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_126_126, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_25));
#line 967 "string_switch.m"
    }
#line 967 "string_switch.m"
    {
#line 967 "string_switch.m"
      ll_backend__string_switch__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_125_125, 0) = ((MR_Box) (ll_backend__string_switch__V_126_126));
#line 967 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_125_125, 1) = ((MR_Box) ((MR_String) "end of string binary several solns switch"));
#line 967 "string_switch.m"
    }
#line 966 "string_switch.m"
    {
#line 966 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_63 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ((MR_Box) (ll_backend__string_switch__V_125_125)));
    }
#line 971 "string_switch.m"
    {
#line 971 "string_switch.m"
      ll_backend__string_switch__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ll_backend__string_switch__LookupResultsCode_62, ll_backend__string_switch__EndLabelCode_63);
    }
#line 970 "string_switch.m"
    {
#line 970 "string_switch.m"
      ll_backend__string_switch__V_129_129 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ll_backend__string_switch__SetBaseRegCode_60, ll_backend__string_switch__V_130_130);
    }
#line 970 "string_switch.m"
    {
#line 970 "string_switch.m"
      ll_backend__string_switch__V_128_128 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ll_backend__string_switch__BinarySearchCode_61, ll_backend__string_switch__V_129_129);
    }
#line 970 "string_switch.m"
    {
#line 970 "string_switch.m"
      *ll_backend__string_switch__Code_28 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_140_140, ll_backend__string_switch__CommentCode_32, ll_backend__string_switch__V_128_128);
    }
#line 883 "string_switch.m"
  }
#line 874 "string_switch.m"
}

#line 861 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
#line 861 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 861 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2,
#line 861 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_3)
#line 861 "string_switch.m"
{
#line 865 "string_switch.m"
  while (MR_TRUE)
#line 865 "string_switch.m"
    {
#line 865 "string_switch.m"
      /* tailcall optimized into a loop */
#line 865 "string_switch.m"
      {
#line 865 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 865 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_RevRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2;
#line 865 "string_switch.m"
        else
#line 867 "string_switch.m"
          {
#line 867 "string_switch.m"
            MR_String ll_backend__string_switch__Str_7;
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__OutRvals_8;
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__RowRvals_11;
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__V_15_15;
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__V_16_16;
#line 867 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

#line 866 "string_switch.m"
            ll_backend__string_switch__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, (MR_Integer) 0)));
#line 866 "string_switch.m"
            ll_backend__string_switch__OutRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_14_14, (MR_Integer) 1)));
#line 868 "string_switch.m"
            {
#line 868 "string_switch.m"
              ll_backend__string_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_16_16, 1) = ((MR_Box) (ll_backend__string_switch__Str_7));
#line 868 "string_switch.m"
            }
#line 868 "string_switch.m"
            {
#line 868 "string_switch.m"
              ll_backend__string_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_15_15, 1) = ((MR_Box) (ll_backend__string_switch__V_16_16));
#line 868 "string_switch.m"
            }
#line 868 "string_switch.m"
            {
#line 868 "string_switch.m"
              ll_backend__string_switch__RowRvals_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 0) = ((MR_Box) (ll_backend__string_switch__V_15_15));
#line 868 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowRvals_11, 1) = ((MR_Box) (ll_backend__string_switch__OutRvals_8));
#line 868 "string_switch.m"
            }
#line 869 "string_switch.m"
            {
#line 869 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 0) = ((MR_Box) (ll_backend__string_switch__RowRvals_11));
#line 869 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2));
#line 869 "string_switch.m"
            }
#line 870 "string_switch.m"
            /* direct tailcall eliminated */
#line 870 "string_switch.m"
            {
#line 870 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__Rest_9;
#line 870 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_2 = ll_backend__string_switch__STATE_VARIABLE_RevRows_17_17;

#line 870 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_2;
#line 870 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 870 "string_switch.m"
            }
#line 870 "string_switch.m"
            continue;
#line 867 "string_switch.m"
          }
#line 865 "string_switch.m"
      }
#line 865 "string_switch.m"
      break;
#line 865 "string_switch.m"
    }
#line 861 "string_switch.m"
}

#line 779 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_15,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_16,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_17,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_18,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_19,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_20,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_21,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_22,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_24,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_51,
#line 779 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_52,
#line 779 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_53)
#line 779 "string_switch.m"
{
#line 788 "string_switch.m"
  {
#line 788 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_99_99;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_27;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_28;
#line 788 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_29;
#line 788 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_30;
#line 788 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_31;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_32;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_33;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_34;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__RevVectorRvals_35;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorRvals_36;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_37;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddr_38;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddrRval_39;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_40;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_45;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchEndCode_47;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_48;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_54_54;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_65_65;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_82_82;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_84_84;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_85_85;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_87_87;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 788 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 851 "string_switch.m"
    MR_Word ll_backend__string_switch___MaybeEnd_46;

#line 794 "string_switch.m"
    {
#line 794 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_20, &ll_backend__string_switch__BinarySwitchInfo_27, ll_backend__string_switch__STATE_VARIABLE_CI_0_51, &ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__STATE_VARIABLE_CLD_0_53);
    }
#line 4819 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 795 "string_switch.m"
    {
#line 795 "string_switch.m"
      ll_backend__string_switch__CommentCode_28 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[26])));
    }
#line 799 "string_switch.m"
    {
#line 799 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_2[3], ll_backend__string_switch__CaseValues_16, &ll_backend__string_switch__TableSize_29);
    }
#line 800 "string_switch.m"
    {
#line 800 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_17, &ll_backend__string_switch__NumOutVars_30);
    }
#line 801 "string_switch.m"
    ll_backend__string_switch__NumColumns_31 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_30);
#line 804 "string_switch.m"
    {
#line 804 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_30, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_32);
    }
#line 805 "string_switch.m"
    {
#line 805 "string_switch.m"
      ll_backend__string_switch__ArrayElemTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 805 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_33, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_32));
#line 805 "string_switch.m"
    }
#line 806 "string_switch.m"
    {
#line 806 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_34, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_33));
#line 806 "string_switch.m"
    }
#line 809 "string_switch.m"
    {
#line 809 "string_switch.m"
      ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(ll_backend__string_switch__CaseValues_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_35);
    }
#line 811 "string_switch.m"
    {
#line 811 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevVectorRvals_35, &ll_backend__string_switch__VectorRvals_36);
    }
#line 812 "string_switch.m"
    {
#line 812 "string_switch.m"
      ll_backend__string_switch__RowElemTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_37, 0) = ((MR_Box) ((MR_Integer) 10));
#line 812 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_37, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
#line 812 "string_switch.m"
    }
#line 813 "string_switch.m"
    {
#line 813 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_37, ll_backend__string_switch__VectorRvals_36, &ll_backend__string_switch__VectorAddr_38, ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__STATE_VARIABLE_CI_52);
    }
#line 814 "string_switch.m"
    {
#line 814 "string_switch.m"
      ll_backend__string_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 814 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 814 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_65_65, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_38));
#line 814 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_65_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 814 "string_switch.m"
    }
#line 814 "string_switch.m"
    {
#line 814 "string_switch.m"
      ll_backend__string_switch__VectorAddrRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 814 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_39, 1) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 814 "string_switch.m"
    }
#line 819 "string_switch.m"
    if ((ll_backend__string_switch__OutVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "string_switch.m"
      {
#line 818 "string_switch.m"
        {
#line 818 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_40 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_99_99);
        }
#line 817 "string_switch.m"
        ll_backend__string_switch__STATE_VARIABLE_CLD_82_82 = ll_backend__string_switch__STATE_VARIABLE_CLD_0_53;
#line 817 "string_switch.m"
      }
#line 819 "string_switch.m"
    else
#line 820 "string_switch.m"
      {
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__BaseReg_43;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__MidReg_44;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_68_68;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_69_69;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_70_70;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_71_71;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_72_72;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_75_75;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_77_77;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_78_78;
#line 820 "string_switch.m"
        MR_Word ll_backend__string_switch__V_79_79;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_90_90;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_91_91;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_92_92;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_94_94;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_95_95;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_96_96;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_97_97;
#line 830 "string_switch.m"
        MR_Word ll_backend__string_switch__V_98_98;

#line 824 "string_switch.m"
        {
#line 824 "string_switch.m"
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_22, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_43, ll_backend__string_switch__STATE_VARIABLE_CLD_0_53, &ll_backend__string_switch__STATE_VARIABLE_CLD_68_68);
        }
#line 830 "string_switch.m"
        ll_backend__string_switch__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 0)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 1)));
#line 830 "string_switch.m"
        ll_backend__string_switch__MidReg_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 2)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 3)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 4)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 5)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 6)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 7)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 8)));
#line 830 "string_switch.m"
        ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_27, (MR_Integer) 9)));
#line 837 "string_switch.m"
        {
#line 837 "string_switch.m"
          ll_backend__string_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 837 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_44));
#line 837 "string_switch.m"
        }
#line 838 "string_switch.m"
        {
#line 838 "string_switch.m"
          ll_backend__string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_31));
#line 838 "string_switch.m"
        }
#line 838 "string_switch.m"
        {
#line 838 "string_switch.m"
          ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 838 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_78_78, 1) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 838 "string_switch.m"
        }
#line 836 "string_switch.m"
        {
#line 836 "string_switch.m"
          ll_backend__string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 836 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 836 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 836 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 2) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 836 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 3) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 836 "string_switch.m"
        }
#line 835 "string_switch.m"
        {
#line 835 "string_switch.m"
          ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 835 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_39));
#line 835 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 835 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_72_72, 2) = ((MR_Box) (ll_backend__string_switch__V_75_75));
#line 835 "string_switch.m"
        }
#line 834 "string_switch.m"
        {
#line 834 "string_switch.m"
          ll_backend__string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 834 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 834 "string_switch.m"
        }
#line 833 "string_switch.m"
        {
#line 833 "string_switch.m"
          ll_backend__string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 833 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 833 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_43));
#line 833 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_70_70, 2) = ((MR_Box) (ll_backend__string_switch__V_71_71));
#line 833 "string_switch.m"
        }
#line 832 "string_switch.m"
        {
#line 832 "string_switch.m"
          ll_backend__string_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (ll_backend__string_switch__V_70_70));
#line 832 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 832 "string_switch.m"
        }
#line 831 "string_switch.m"
        {
#line 831 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_40 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__string_switch__V_69_69)));
        }
#line 841 "string_switch.m"
        {
#line 841 "string_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__string_switch__OutVars_17, (MR_Integer) 1, ll_backend__string_switch__BaseReg_43, *ll_backend__string_switch__STATE_VARIABLE_CI_52, ll_backend__string_switch__STATE_VARIABLE_CLD_68_68, &ll_backend__string_switch__STATE_VARIABLE_CLD_82_82);
        }
#line 820 "string_switch.m"
      }
#line 844 "string_switch.m"
    {
#line 844 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_27, ll_backend__string_switch__VarRval_15, ll_backend__string_switch__VectorAddrRval_39, ll_backend__string_switch__ArrayElemType_34, ll_backend__string_switch__TableSize_29, ll_backend__string_switch__NumColumns_31, &ll_backend__string_switch__BinarySearchCode_45);
    }
#line 851 "string_switch.m"
    {
#line 851 "string_switch.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_22, ll_backend__string_switch__Liveness_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch___MaybeEnd_46, &ll_backend__string_switch__BranchEndCode_47, *ll_backend__string_switch__STATE_VARIABLE_CI_52, ll_backend__string_switch__STATE_VARIABLE_CLD_82_82);
    }
#line 855 "string_switch.m"
    {
#line 855 "string_switch.m"
      ll_backend__string_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 855 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_85_85, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
#line 855 "string_switch.m"
    }
#line 855 "string_switch.m"
    {
#line 855 "string_switch.m"
      ll_backend__string_switch__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 855 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 855 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
#line 855 "string_switch.m"
    }
#line 854 "string_switch.m"
    {
#line 854 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_48 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__string_switch__V_84_84)));
    }
#line 859 "string_switch.m"
    {
#line 859 "string_switch.m"
      ll_backend__string_switch__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ll_backend__string_switch__BranchEndCode_47, ll_backend__string_switch__EndLabelCode_48);
    }
#line 858 "string_switch.m"
    {
#line 858 "string_switch.m"
      ll_backend__string_switch__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ll_backend__string_switch__SetBaseRegCode_40, ll_backend__string_switch__V_89_89);
    }
#line 858 "string_switch.m"
    {
#line 858 "string_switch.m"
      ll_backend__string_switch__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ll_backend__string_switch__BinarySearchCode_45, ll_backend__string_switch__V_88_88);
    }
#line 858 "string_switch.m"
    {
#line 858 "string_switch.m"
      *ll_backend__string_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_99_99, ll_backend__string_switch__CommentCode_28, ll_backend__string_switch__V_87_87);
    }
#line 788 "string_switch.m"
    *ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_50 = ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_49;
#line 788 "string_switch.m"
  }
#line 779 "string_switch.m"
}

#line 740 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__HeadVar__1_1,
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2,
#line 740 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3,
#line 740 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4,
#line 740 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevTargets_5,
#line 740 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6,
#line 740 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_CurIndex_7)
#line 740 "string_switch.m"
{
#line 745 "string_switch.m"
  while (MR_TRUE)
#line 745 "string_switch.m"
    {
#line 745 "string_switch.m"
      /* tailcall optimized into a loop */
#line 745 "string_switch.m"
      {
#line 745 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded;

#line 745 "string_switch.m"
        if ((ll_backend__string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "string_switch.m"
          {
#line 745 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_CurIndex_7 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6;
#line 745 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevTargets_5 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4;
#line 745 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevTableRows_3 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2;
#line 745 "string_switch.m"
          }
#line 745 "string_switch.m"
        else
#line 747 "string_switch.m"
          {
#line 747 "string_switch.m"
            MR_String ll_backend__string_switch__Str_17;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__Label_18;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__StrLabels_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__Row_23;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_31_31;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_32_32;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_33_33;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_34_34;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_35_35;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
#line 747 "string_switch.m"
            MR_Word ll_backend__string_switch__V_39_39;
#line 747 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

#line 746 "string_switch.m"
            ll_backend__string_switch__Str_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, (MR_Integer) 0)));
#line 746 "string_switch.m"
            ll_backend__string_switch__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, (MR_Integer) 1)));
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 1) = ((MR_Box) (ll_backend__string_switch__Str_17));
#line 748 "string_switch.m"
            }
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 1) = ((MR_Box) (ll_backend__string_switch__V_32_32));
#line 748 "string_switch.m"
            }
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6));
#line 748 "string_switch.m"
            }
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_34_34, 1) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 748 "string_switch.m"
            }
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_33_33, 0) = ((MR_Box) (ll_backend__string_switch__V_34_34));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "string_switch.m"
            }
#line 748 "string_switch.m"
            {
#line 748 "string_switch.m"
              ll_backend__string_switch__Row_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 0) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 748 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_23, 1) = ((MR_Box) (ll_backend__string_switch__V_33_33));
#line 748 "string_switch.m"
            }
#line 749 "string_switch.m"
            {
#line 749 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 0) = ((MR_Box) (ll_backend__string_switch__Row_23));
#line 749 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2));
#line 749 "string_switch.m"
            }
#line 750 "string_switch.m"
            {
#line 750 "string_switch.m"
              ll_backend__string_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_39_39, 0) = ((MR_Box) (ll_backend__string_switch__Label_18));
#line 750 "string_switch.m"
            }
#line 750 "string_switch.m"
            {
#line 750 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 0) = ((MR_Box) (ll_backend__string_switch__V_39_39));
#line 750 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4));
#line 750 "string_switch.m"
            }
#line 751 "string_switch.m"
            ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40 = (ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 + (MR_Integer) 1);
#line 752 "string_switch.m"
            /* direct tailcall eliminated */
#line 752 "string_switch.m"
            {
#line 752 "string_switch.m"
              MR_Word ll_backend__string_switch__HeadVar__1__tmp_copy_1 = ll_backend__string_switch__StrLabels_19;
#line 752 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_2 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_37_37;
#line 752 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevTargets_0__tmp_copy_4 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_38_38;
#line 752 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_6 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_40_40;

#line 752 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_CurIndex_0_6 = ll_backend__string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_6;
#line 752 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTargets_0_4 = ll_backend__string_switch__STATE_VARIABLE_RevTargets_0__tmp_copy_4;
#line 752 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0_2 = ll_backend__string_switch__STATE_VARIABLE_RevTableRows_0__tmp_copy_2;
#line 752 "string_switch.m"
              ll_backend__string_switch__HeadVar__1_1 = ll_backend__string_switch__HeadVar__1__tmp_copy_1;
#line 752 "string_switch.m"
            }
#line 752 "string_switch.m"
            continue;
#line 747 "string_switch.m"
          }
#line 745 "string_switch.m"
      }
#line 745 "string_switch.m"
      break;
#line 745 "string_switch.m"
    }
#line 740 "string_switch.m"
}

#line 596 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__Info_11,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__TableAddrRval_13,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__ArrayElemType_14,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumColumns_15,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__HashOp_16,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__HashMask_17,
#line 596 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_18,
#line 596 "string_switch.m"
  MR_Word ll_backend__string_switch__MatchCode_19,
#line 596 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_20)
#line 596 "string_switch.m"
{
#line 602 "string_switch.m"
  {
#line 602 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_18 == (MR_Integer) 0);
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 0)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 1)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__StringReg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 2)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 3)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__NoMatchLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 4)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 5)));
#line 602 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 7)));
#line 603 "string_switch.m"
    MR_Word ll_backend__string_switch__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Info_11, (MR_Integer) 6)));

#line 645 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 623 "string_switch.m"
      {
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeCtorInfo_214_214;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__BaseReg_28;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__MultiplyInstrs_29;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_39_39;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_40_40;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_41_41;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_42_42;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_43_43;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_45_45;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_46_46;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_47_47;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_49_49;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_50_50;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_51_51;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_52_52;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_53_53;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_54_54;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_55_55;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_56_56;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_58_58;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_59_59;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_60_60;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_61_61;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_63_63;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_65_65;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_69_69;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_72_72;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_75_75;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_76_76;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_77_77;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_78_78;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_79_79;
#line 623 "string_switch.m"
        MR_Word ll_backend__string_switch__V_80_80;

#line 612 "string_switch.m"
        ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumColumns_15 == (MR_Integer) 1);
#line 615 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 613 "string_switch.m"
          {
#line 613 "string_switch.m"
            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__SlotReg_21;
#line 614 "string_switch.m"
            ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "string_switch.m"
          }
#line 615 "string_switch.m"
        else
#line 616 "string_switch.m"
          {
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_30_30;
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_31_31;
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_32_32;
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_34_34;
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_35_35;
#line 616 "string_switch.m"
            MR_Word ll_backend__string_switch__V_36_36;

#line 616 "string_switch.m"
            ll_backend__string_switch__BaseReg_28 = ll_backend__string_switch__RowStartReg_22;
#line 619 "string_switch.m"
            {
#line 619 "string_switch.m"
              ll_backend__string_switch__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 619 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_34_34, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 619 "string_switch.m"
            }
#line 620 "string_switch.m"
            {
#line 620 "string_switch.m"
              ll_backend__string_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_36_36, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
#line 620 "string_switch.m"
            }
#line 620 "string_switch.m"
            {
#line 620 "string_switch.m"
              ll_backend__string_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 620 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_35_35, 1) = ((MR_Box) (ll_backend__string_switch__V_36_36));
#line 620 "string_switch.m"
            }
#line 619 "string_switch.m"
            {
#line 619 "string_switch.m"
              ll_backend__string_switch__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 619 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 619 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 619 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 2) = ((MR_Box) (ll_backend__string_switch__V_34_34));
#line 619 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_32_32, 3) = ((MR_Box) (ll_backend__string_switch__V_35_35));
#line 619 "string_switch.m"
            }
#line 618 "string_switch.m"
            {
#line 618 "string_switch.m"
              ll_backend__string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 618 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 618 "string_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_31_31, 2) = ((MR_Box) (ll_backend__string_switch__V_32_32));
#line 618 "string_switch.m"
            }
#line 618 "string_switch.m"
            {
#line 618 "string_switch.m"
              ll_backend__string_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, 0) = ((MR_Box) (ll_backend__string_switch__V_31_31));
#line 618 "string_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_30_30, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
#line 618 "string_switch.m"
            }
#line 622 "string_switch.m"
            {
#line 622 "string_switch.m"
              ll_backend__string_switch__MultiplyInstrs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 0) = ((MR_Box) (ll_backend__string_switch__V_30_30));
#line 622 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__MultiplyInstrs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "string_switch.m"
            }
#line 616 "string_switch.m"
          }
#line 5574 "ll_backend.string_switch.c"
        ll_backend__string_switch__TypeCtorInfo_214_214 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 626 "string_switch.m"
        {
#line 626 "string_switch.m"
          ll_backend__string_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_45_45, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 626 "string_switch.m"
        }
#line 627 "string_switch.m"
        {
#line 627 "string_switch.m"
          ll_backend__string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_47_47, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
#line 627 "string_switch.m"
        }
#line 627 "string_switch.m"
        {
#line 627 "string_switch.m"
          ll_backend__string_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 627 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_46_46, 1) = ((MR_Box) (ll_backend__string_switch__V_47_47));
#line 627 "string_switch.m"
        }
#line 626 "string_switch.m"
        {
#line 626 "string_switch.m"
          ll_backend__string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 2) = ((MR_Box) (ll_backend__string_switch__V_45_45));
#line 626 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_43_43, 3) = ((MR_Box) (ll_backend__string_switch__V_46_46));
#line 626 "string_switch.m"
        }
#line 625 "string_switch.m"
        {
#line 625 "string_switch.m"
          ll_backend__string_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 625 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 625 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 625 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_42_42, 2) = ((MR_Box) (ll_backend__string_switch__V_43_43));
#line 625 "string_switch.m"
        }
#line 625 "string_switch.m"
        {
#line 625 "string_switch.m"
          ll_backend__string_switch__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_41_41, 0) = ((MR_Box) (ll_backend__string_switch__V_42_42));
#line 625 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_41_41, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
#line 625 "string_switch.m"
        }
#line 628 "string_switch.m"
        {
#line 628 "string_switch.m"
          ll_backend__string_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_40_40, 0) = ((MR_Box) (ll_backend__string_switch__V_41_41));
#line 628 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_40_40, 1) = ((MR_Box) (ll_backend__string_switch__MultiplyInstrs_29));
#line 628 "string_switch.m"
        }
#line 624 "string_switch.m"
        {
#line 624 "string_switch.m"
          ll_backend__string_switch__V_39_39 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_40_40);
        }
#line 632 "string_switch.m"
        {
#line 632 "string_switch.m"
          ll_backend__string_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_55_55, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
#line 632 "string_switch.m"
        }
#line 633 "string_switch.m"
        {
#line 633 "string_switch.m"
          ll_backend__string_switch__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_56_56, 0) = ((MR_Box) (ll_backend__string_switch__BaseReg_28));
#line 633 "string_switch.m"
        }
#line 632 "string_switch.m"
        {
#line 632 "string_switch.m"
          ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 1) = ((MR_Box) (ll_backend__string_switch__V_55_55));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 632 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_54_54, 3) = ((MR_Box) (ll_backend__string_switch__V_56_56));
#line 632 "string_switch.m"
        }
#line 631 "string_switch.m"
        {
#line 631 "string_switch.m"
          ll_backend__string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 2) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 631 "string_switch.m"
        }
#line 631 "string_switch.m"
        {
#line 631 "string_switch.m"
          ll_backend__string_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 0) = ((MR_Box) (ll_backend__string_switch__V_53_53));
#line 631 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_52_52, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
#line 631 "string_switch.m"
        }
#line 637 "string_switch.m"
        {
#line 637 "string_switch.m"
          ll_backend__string_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_65_65, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 637 "string_switch.m"
        }
#line 637 "string_switch.m"
        {
#line 637 "string_switch.m"
          ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 2) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 637 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_63_63, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21])));
#line 637 "string_switch.m"
        }
#line 638 "string_switch.m"
        {
#line 638 "string_switch.m"
          ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 638 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 638 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (ll_backend__string_switch__V_65_65));
#line 638 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 638 "string_switch.m"
        }
#line 636 "string_switch.m"
        {
#line 636 "string_switch.m"
          ll_backend__string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 2) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 636 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_61_61, 3) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 636 "string_switch.m"
        }
#line 639 "string_switch.m"
        {
#line 639 "string_switch.m"
          ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 639 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 639 "string_switch.m"
        }
#line 635 "string_switch.m"
        {
#line 635 "string_switch.m"
          ll_backend__string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 635 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 635 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 1) = ((MR_Box) (ll_backend__string_switch__V_61_61));
#line 635 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_60_60, 2) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 635 "string_switch.m"
        }
#line 635 "string_switch.m"
        {
#line 635 "string_switch.m"
          ll_backend__string_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_59_59, 0) = ((MR_Box) (ll_backend__string_switch__V_60_60));
#line 635 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_59_59, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
#line 635 "string_switch.m"
        }
#line 641 "string_switch.m"
        {
#line 641 "string_switch.m"
          ll_backend__string_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_58_58, 0) = ((MR_Box) (ll_backend__string_switch__V_59_59));
#line 641 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "string_switch.m"
        }
#line 634 "string_switch.m"
        {
#line 634 "string_switch.m"
          ll_backend__string_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_51_51, 0) = ((MR_Box) (ll_backend__string_switch__V_52_52));
#line 634 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_51_51, 1) = ((MR_Box) (ll_backend__string_switch__V_58_58));
#line 634 "string_switch.m"
        }
#line 630 "string_switch.m"
        {
#line 630 "string_switch.m"
          ll_backend__string_switch__V_50_50 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_51_51);
        }
#line 642 "string_switch.m"
        {
#line 642 "string_switch.m"
          ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 642 "string_switch.m"
        }
#line 642 "string_switch.m"
        {
#line 642 "string_switch.m"
          ll_backend__string_switch__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 642 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 642 "string_switch.m"
        }
#line 644 "string_switch.m"
        {
#line 644 "string_switch.m"
          ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 644 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "string_switch.m"
        }
#line 641 "string_switch.m"
        {
#line 641 "string_switch.m"
          ll_backend__string_switch__V_77_77 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_78_78);
        }
#line 644 "string_switch.m"
        {
#line 644 "string_switch.m"
          ll_backend__string_switch__V_76_76 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_77_77, ll_backend__string_switch__FailCode_27);
        }
#line 641 "string_switch.m"
        {
#line 641 "string_switch.m"
          ll_backend__string_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__V_76_76);
        }
#line 641 "string_switch.m"
        {
#line 641 "string_switch.m"
          ll_backend__string_switch__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_50_50, ll_backend__string_switch__V_75_75);
        }
#line 629 "string_switch.m"
        {
#line 629 "string_switch.m"
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_214_214, ll_backend__string_switch__V_39_39, ll_backend__string_switch__V_49_49);
        }
#line 623 "string_switch.m"
      }
#line 645 "string_switch.m"
    else
#line 646 "string_switch.m"
      {
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__TypeCtorInfo_215_215 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_83_83;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_84_84;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_85_85;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_86_86;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_87_87;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_89_89;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_90_90;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_91_91;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_94_94;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_95_95;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_97_97;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_98_98;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_99_99;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_100_100;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_102_102;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_103_103;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_104_104;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_106_106;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_107_107;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_108_108;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_109_109;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_110_110;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_111_111;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_113_113;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_114_114;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_115_115;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_116_116;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_118_118;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_120_120;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_121_121;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_124_124;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_127_127;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_130_130;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_131_131;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_132_132;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_133_133;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_134_134;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_135_135;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_137_137;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_138_138;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_139_139;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_140_140;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_142_142;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_149_149;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_150_150;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_151_151;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_152_152;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_158_158;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_160_160;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_161_161;
#line 646 "string_switch.m"
        MR_Word ll_backend__string_switch__V_162_162;

#line 648 "string_switch.m"
        {
#line 648 "string_switch.m"
          ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (ll_backend__string_switch__HashOp_16));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 2) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 648 "string_switch.m"
        }
#line 649 "string_switch.m"
        {
#line 649 "string_switch.m"
          ll_backend__string_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_91_91, 0) = ((MR_Box) (ll_backend__string_switch__HashMask_17));
#line 649 "string_switch.m"
        }
#line 649 "string_switch.m"
        {
#line 649 "string_switch.m"
          ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 649 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (ll_backend__string_switch__V_91_91));
#line 649 "string_switch.m"
        }
#line 648 "string_switch.m"
        {
#line 648 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 2) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 648 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_87_87, 3) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 648 "string_switch.m"
        }
#line 647 "string_switch.m"
        {
#line 647 "string_switch.m"
          ll_backend__string_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_86_86, 2) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 647 "string_switch.m"
        }
#line 647 "string_switch.m"
        {
#line 647 "string_switch.m"
          ll_backend__string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) (ll_backend__string_switch__V_86_86));
#line 647 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_85_85, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
#line 647 "string_switch.m"
        }
#line 651 "string_switch.m"
        {
#line 651 "string_switch.m"
          ll_backend__string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 651 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_95_95, 1) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
#line 651 "string_switch.m"
        }
#line 651 "string_switch.m"
        {
#line 651 "string_switch.m"
          ll_backend__string_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 0) = ((MR_Box) (ll_backend__string_switch__V_95_95));
#line 651 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
#line 651 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 654 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_104_104, 0) = ((MR_Box) (ll_backend__string_switch__NumColumns_15));
#line 654 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__V_104_104));
#line 654 "string_switch.m"
        }
#line 654 "string_switch.m"
        {
#line 654 "string_switch.m"
          ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 2) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 654 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_100_100, 3) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 654 "string_switch.m"
        }
#line 653 "string_switch.m"
        {
#line 653 "string_switch.m"
          ll_backend__string_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_99_99, 2) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 653 "string_switch.m"
        }
#line 653 "string_switch.m"
        {
#line 653 "string_switch.m"
          ll_backend__string_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) (ll_backend__string_switch__V_99_99));
#line 653 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
#line 653 "string_switch.m"
        }
#line 657 "string_switch.m"
        {
#line 657 "string_switch.m"
          ll_backend__string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_110_110, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemType_14));
#line 657 "string_switch.m"
        }
#line 658 "string_switch.m"
        {
#line 658 "string_switch.m"
          ll_backend__string_switch__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 658 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_111_111, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_22));
#line 658 "string_switch.m"
        }
#line 657 "string_switch.m"
        {
#line 657 "string_switch.m"
          ll_backend__string_switch__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 657 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_109_109, 3) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 657 "string_switch.m"
        }
#line 656 "string_switch.m"
        {
#line 656 "string_switch.m"
          ll_backend__string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 1) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_108_108, 2) = ((MR_Box) (ll_backend__string_switch__V_109_109));
#line 656 "string_switch.m"
        }
#line 656 "string_switch.m"
        {
#line 656 "string_switch.m"
          ll_backend__string_switch__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) (ll_backend__string_switch__V_108_108));
#line 656 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
#line 656 "string_switch.m"
        }
#line 662 "string_switch.m"
        {
#line 662 "string_switch.m"
          ll_backend__string_switch__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_120_120, 0) = ((MR_Box) (ll_backend__string_switch__StringReg_23));
#line 662 "string_switch.m"
        }
#line 662 "string_switch.m"
        ll_backend__string_switch__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 662 "string_switch.m"
        {
#line 662 "string_switch.m"
          ll_backend__string_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 2) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 662 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_118_118, 3) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 662 "string_switch.m"
        }
#line 663 "string_switch.m"
        {
#line 663 "string_switch.m"
          ll_backend__string_switch__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 663 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 663 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 663 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 2) = ((MR_Box) (ll_backend__string_switch__V_120_120));
#line 663 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_124_124, 3) = ((MR_Box) (ll_backend__string_switch__VarRval_12));
#line 663 "string_switch.m"
        }
#line 661 "string_switch.m"
        {
#line 661 "string_switch.m"
          ll_backend__string_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 2) = ((MR_Box) (ll_backend__string_switch__V_118_118));
#line 661 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_116_116, 3) = ((MR_Box) (ll_backend__string_switch__V_124_124));
#line 661 "string_switch.m"
        }
#line 664 "string_switch.m"
        {
#line 664 "string_switch.m"
          ll_backend__string_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_127_127, 0) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
#line 664 "string_switch.m"
        }
#line 660 "string_switch.m"
        {
#line 660 "string_switch.m"
          ll_backend__string_switch__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 1) = ((MR_Box) (ll_backend__string_switch__V_116_116));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_115_115, 2) = ((MR_Box) (ll_backend__string_switch__V_127_127));
#line 660 "string_switch.m"
        }
#line 660 "string_switch.m"
        {
#line 660 "string_switch.m"
          ll_backend__string_switch__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_114_114, 0) = ((MR_Box) (ll_backend__string_switch__V_115_115));
#line 660 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_114_114, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
#line 660 "string_switch.m"
        }
#line 666 "string_switch.m"
        {
#line 666 "string_switch.m"
          ll_backend__string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (ll_backend__string_switch__V_114_114));
#line 666 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "string_switch.m"
        }
#line 659 "string_switch.m"
        {
#line 659 "string_switch.m"
          ll_backend__string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 0) = ((MR_Box) (ll_backend__string_switch__V_107_107));
#line 659 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_106_106, 1) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 659 "string_switch.m"
        }
#line 655 "string_switch.m"
        {
#line 655 "string_switch.m"
          ll_backend__string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 0) = ((MR_Box) (ll_backend__string_switch__V_98_98));
#line 655 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_97_97, 1) = ((MR_Box) (ll_backend__string_switch__V_106_106));
#line 655 "string_switch.m"
        }
#line 652 "string_switch.m"
        {
#line 652 "string_switch.m"
          ll_backend__string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (ll_backend__string_switch__V_94_94));
#line 652 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_93_93, 1) = ((MR_Box) (ll_backend__string_switch__V_97_97));
#line 652 "string_switch.m"
        }
#line 650 "string_switch.m"
        {
#line 650 "string_switch.m"
          ll_backend__string_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 650 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_84_84, 1) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 650 "string_switch.m"
        }
#line 646 "string_switch.m"
        {
#line 646 "string_switch.m"
          ll_backend__string_switch__V_83_83 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_84_84);
        }
#line 667 "string_switch.m"
        {
#line 667 "string_switch.m"
          ll_backend__string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_135_135, 1) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_25));
#line 667 "string_switch.m"
        }
#line 667 "string_switch.m"
        {
#line 667 "string_switch.m"
          ll_backend__string_switch__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_134_134, 0) = ((MR_Box) (ll_backend__string_switch__V_135_135));
#line 667 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_134_134, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
#line 667 "string_switch.m"
        }
#line 671 "string_switch.m"
        {
#line 671 "string_switch.m"
          ll_backend__string_switch__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 2) = ((MR_Box) (ll_backend__string_switch__V_111_111));
#line 671 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_142_142, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
#line 671 "string_switch.m"
        }
#line 670 "string_switch.m"
        {
#line 670 "string_switch.m"
          ll_backend__string_switch__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 670 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 670 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 1) = ((MR_Box) (ll_backend__string_switch__V_110_110));
#line 670 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_13));
#line 670 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_140_140, 3) = ((MR_Box) (ll_backend__string_switch__V_142_142));
#line 670 "string_switch.m"
        }
#line 669 "string_switch.m"
        {
#line 669 "string_switch.m"
          ll_backend__string_switch__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 1) = ((MR_Box) (ll_backend__string_switch__SlotReg_21));
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_139_139, 2) = ((MR_Box) (ll_backend__string_switch__V_140_140));
#line 669 "string_switch.m"
        }
#line 669 "string_switch.m"
        {
#line 669 "string_switch.m"
          ll_backend__string_switch__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (ll_backend__string_switch__V_139_139));
#line 669 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_138_138, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
#line 669 "string_switch.m"
        }
#line 674 "string_switch.m"
        {
#line 674 "string_switch.m"
          ll_backend__string_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 2) = ((MR_Box) (ll_backend__string_switch__V_102_102));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_152_152, 3) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 674 "string_switch.m"
        }
#line 675 "string_switch.m"
        {
#line 675 "string_switch.m"
          ll_backend__string_switch__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_158_158, 0) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_24));
#line 675 "string_switch.m"
        }
#line 674 "string_switch.m"
        {
#line 674 "string_switch.m"
          ll_backend__string_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 1) = ((MR_Box) (ll_backend__string_switch__V_152_152));
#line 674 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_151_151, 2) = ((MR_Box) (ll_backend__string_switch__V_158_158));
#line 674 "string_switch.m"
        }
#line 673 "string_switch.m"
        {
#line 673 "string_switch.m"
          ll_backend__string_switch__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_150_150, 0) = ((MR_Box) (ll_backend__string_switch__V_151_151));
#line 673 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_150_150, 1) = ((MR_Box) ((MR_String) "if we have not reached the end of the chain, keep searching"));
#line 673 "string_switch.m"
        }
#line 677 "string_switch.m"
        {
#line 677 "string_switch.m"
          ll_backend__string_switch__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_162_162, 1) = ((MR_Box) (ll_backend__string_switch__FailLabel_26));
#line 677 "string_switch.m"
        }
#line 677 "string_switch.m"
        {
#line 677 "string_switch.m"
          ll_backend__string_switch__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_161_161, 0) = ((MR_Box) (ll_backend__string_switch__V_162_162));
#line 677 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_161_161, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
#line 677 "string_switch.m"
        }
#line 679 "string_switch.m"
        {
#line 679 "string_switch.m"
          ll_backend__string_switch__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_160_160, 0) = ((MR_Box) (ll_backend__string_switch__V_161_161));
#line 679 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "string_switch.m"
        }
#line 676 "string_switch.m"
        {
#line 676 "string_switch.m"
          ll_backend__string_switch__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_149_149, 0) = ((MR_Box) (ll_backend__string_switch__V_150_150));
#line 676 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_149_149, 1) = ((MR_Box) (ll_backend__string_switch__V_160_160));
#line 676 "string_switch.m"
        }
#line 672 "string_switch.m"
        {
#line 672 "string_switch.m"
          ll_backend__string_switch__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_137_137, 0) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 672 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_137_137, 1) = ((MR_Box) (ll_backend__string_switch__V_149_149));
#line 672 "string_switch.m"
        }
#line 668 "string_switch.m"
        {
#line 668 "string_switch.m"
          ll_backend__string_switch__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_133_133, 0) = ((MR_Box) (ll_backend__string_switch__V_134_134));
#line 668 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_133_133, 1) = ((MR_Box) (ll_backend__string_switch__V_137_137));
#line 668 "string_switch.m"
        }
#line 666 "string_switch.m"
        {
#line 666 "string_switch.m"
          ll_backend__string_switch__V_132_132 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_133_133);
        }
#line 679 "string_switch.m"
        {
#line 679 "string_switch.m"
          ll_backend__string_switch__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_132_132, ll_backend__string_switch__FailCode_27);
        }
#line 666 "string_switch.m"
        {
#line 666 "string_switch.m"
          ll_backend__string_switch__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__MatchCode_19, ll_backend__string_switch__V_131_131);
        }
#line 666 "string_switch.m"
        {
#line 666 "string_switch.m"
          *ll_backend__string_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_215_215, ll_backend__string_switch__V_83_83, ll_backend__string_switch__V_130_130);
        }
#line 646 "string_switch.m"
      }
#line 602 "string_switch.m"
  }
#line 596 "string_switch.m"
}

#line 563 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_6,
#line 563 "string_switch.m"
  MR_Word * ll_backend__string_switch__Info_7,
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_18,
#line 563 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_19,
#line 563 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_20)
#line 563 "string_switch.m"
{
#line 567 "string_switch.m"
  {
#line 567 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_10;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_11;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__StringReg_12;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__LoopStartLabel_13;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_14;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__NoMatchLabel_15;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_16;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__FailCode_17;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_22_22;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_24_24;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_26_26;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_27_27;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_28_28;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_29_29;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_30_30;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_31_31;
#line 567 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_32_32;

#line 577 "string_switch.m"
    {
#line 577 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__SlotReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_0_20, &ll_backend__string_switch__STATE_VARIABLE_CLD_22_22);
    }
#line 578 "string_switch.m"
    {
#line 578 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__RowStartReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_22_22, &ll_backend__string_switch__STATE_VARIABLE_CLD_24_24);
    }
#line 579 "string_switch.m"
    {
#line 579 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__string_switch__StringReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_24_24, &ll_backend__string_switch__STATE_VARIABLE_CLD_26_26);
    }
#line 580 "string_switch.m"
    {
#line 580 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__SlotReg_10, ll_backend__string_switch__STATE_VARIABLE_CLD_26_26, &ll_backend__string_switch__STATE_VARIABLE_CLD_27_27);
    }
#line 581 "string_switch.m"
    {
#line 581 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__RowStartReg_11, ll_backend__string_switch__STATE_VARIABLE_CLD_27_27, &ll_backend__string_switch__STATE_VARIABLE_CLD_28_28);
    }
#line 582 "string_switch.m"
    {
#line 582 "string_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__string_switch__StringReg_12, ll_backend__string_switch__STATE_VARIABLE_CLD_28_28, &ll_backend__string_switch__STATE_VARIABLE_CLD_29_29);
    }
#line 584 "string_switch.m"
    {
#line 584 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__LoopStartLabel_13, ll_backend__string_switch__STATE_VARIABLE_CI_0_18, &ll_backend__string_switch__STATE_VARIABLE_CI_30_30);
    }
#line 585 "string_switch.m"
    {
#line 585 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__FailLabel_14, ll_backend__string_switch__STATE_VARIABLE_CI_30_30, &ll_backend__string_switch__STATE_VARIABLE_CI_31_31);
    }
#line 586 "string_switch.m"
    {
#line 586 "string_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__string_switch__NoMatchLabel_15, ll_backend__string_switch__STATE_VARIABLE_CI_31_31, &ll_backend__string_switch__STATE_VARIABLE_CI_32_32);
    }
#line 590 "string_switch.m"
    {
#line 590 "string_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CLD_29_29, &ll_backend__string_switch__BranchStart_16);
    }
#line 1134 "string_switch.m"
#line 1134 "string_switch.m"
    switch (ll_backend__string_switch__CanFail_6) {
#line 1134 "string_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "string_switch.m"
      case (MR_Integer) 0:
#line 1135 "string_switch.m"
        {
#line 1135 "string_switch.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__string_switch__FailCode_17, ll_backend__string_switch__STATE_VARIABLE_CI_32_32, ll_backend__string_switch__STATE_VARIABLE_CI_19, ll_backend__string_switch__STATE_VARIABLE_CLD_29_29);
        }
#line 1134 "string_switch.m"
        break;
#line 1134 "string_switch.m"
      case (MR_Integer) 1:
#line 1137 "string_switch.m"
        {
#line 1138 "string_switch.m"
          {
#line 1138 "string_switch.m"
            ll_backend__string_switch__FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[25])));
          }
#line 1137 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_CI_19 = ll_backend__string_switch__STATE_VARIABLE_CI_32_32;
#line 1137 "string_switch.m"
        }
#line 1134 "string_switch.m"
        break;
#line 1134 "string_switch.m"
    }
#line 593 "string_switch.m"
    {
#line 593 "string_switch.m"
      MR_Word base;
#line 593 "string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 593 "string_switch.m"
      *ll_backend__string_switch__Info_7 = base;
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_10));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__string_switch__RowStartReg_11));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__string_switch__StringReg_12));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__string_switch__LoopStartLabel_13));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__string_switch__NoMatchLabel_15));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__string_switch__FailLabel_14));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__string_switch__BranchStart_16));
#line 593 "string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__string_switch__FailCode_17));
#line 593 "string_switch.m"
    }
#line 567 "string_switch.m"
  }
#line 563 "string_switch.m"
}

#line 479 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_16,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_17,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_18,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_19,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumOutVars_20,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_21,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44,
#line 479 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46,
#line 479 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47,
#line 479 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49,
#line 479 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50,
#line 479 "string_switch.m"
  MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
#line 479 "string_switch.m"
  MR_Integer * ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52)
#line 479 "string_switch.m"
{
#line 491 "string_switch.m"
  while (MR_TRUE)
#line 491 "string_switch.m"
    {
#line 491 "string_switch.m"
      /* tailcall optimized into a loop */
#line 491 "string_switch.m"
      {
#line 491 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_16 == ll_backend__string_switch__TableSize_17);

#line 491 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 490 "string_switch.m"
          {
#line 490 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_52 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 490 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_50 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 490 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_48 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 490 "string_switch.m"
            *ll_backend__string_switch__STATE_VARIABLE_RevMainRows_45 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44;
#line 490 "string_switch.m"
          }
#line 491 "string_switch.m"
        else
#line 538 "string_switch.m"
          {
#line 538 "string_switch.m"
            MR_Word ll_backend__string_switch__MainRow_36;
#line 538 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;
#line 538 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
#line 538 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
#line 538 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
#line 538 "string_switch.m"
            MR_Integer ll_backend__string_switch__V_82_82;
#line 538 "string_switch.m"
            MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
#line 527 "string_switch.m"
            MR_Word ll_backend__string_switch__SlotInfo_27;
#line 492 "string_switch.m"
            MR_Box ll_backend__string_switch__conv0_SlotInfo_27;

#line 492 "string_switch.m"
            {
#line 492 "string_switch.m"
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[10], ll_backend__string_switch__HashSlotMap_18, ll_backend__string_switch__Slot_16, &ll_backend__string_switch__conv0_SlotInfo_27);
            }
#line 492 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 492 "string_switch.m"
              {
#line 492 "string_switch.m"
                ll_backend__string_switch__SlotInfo_27 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_27);
#line 492 "string_switch.m"
                ll_backend__string_switch__succeeded = MR_TRUE;
#line 492 "string_switch.m"
              }
#line 527 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 493 "string_switch.m"
              {
#line 493 "string_switch.m"
                MR_String ll_backend__string_switch__String_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 0)));
#line 493 "string_switch.m"
                MR_Integer ll_backend__string_switch__Next_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 1)));
#line 493 "string_switch.m"
                MR_Word ll_backend__string_switch__Soln_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_27, (MR_Integer) 2)));
#line 493 "string_switch.m"
                MR_Word ll_backend__string_switch__StringRval_31;
#line 493 "string_switch.m"
                MR_Word ll_backend__string_switch__NextSlotRval_32;
#line 493 "string_switch.m"
                MR_Word ll_backend__string_switch__V_53_53;
#line 493 "string_switch.m"
                MR_Word ll_backend__string_switch__V_54_54;

#line 494 "string_switch.m"
                {
#line 494 "string_switch.m"
                  ll_backend__string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_53_53, 1) = ((MR_Box) (ll_backend__string_switch__String_28));
#line 494 "string_switch.m"
                }
#line 494 "string_switch.m"
                {
#line 494 "string_switch.m"
                  ll_backend__string_switch__StringRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_31, 1) = ((MR_Box) (ll_backend__string_switch__V_53_53));
#line 494 "string_switch.m"
                }
#line 495 "string_switch.m"
                {
#line 495 "string_switch.m"
                  ll_backend__string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (ll_backend__string_switch__Next_29));
#line 495 "string_switch.m"
                }
#line 495 "string_switch.m"
                {
#line 495 "string_switch.m"
                  ll_backend__string_switch__NextSlotRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_32, 1) = ((MR_Box) (ll_backend__string_switch__V_54_54));
#line 495 "string_switch.m"
                }
#line 509 "string_switch.m"
                if (((MR_tag((MR_Word) ll_backend__string_switch__Soln_30)) == (MR_mktag((MR_Integer) 0))))
#line 497 "string_switch.m"
                  {
#line 497 "string_switch.m"
                    MR_Word ll_backend__string_switch__OutVarRvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
#line 497 "string_switch.m"
                    MR_Word ll_backend__string_switch__ZeroRval_34;
#line 497 "string_switch.m"
                    MR_Word ll_backend__string_switch__MainRowTail_35;
#line 497 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_71_71;

#line 498 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = (ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 + (MR_Integer) 1);
#line 499 "string_switch.m"
                    ll_backend__string_switch__ZeroRval_34 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 503 "string_switch.m"
                    {
#line 503 "string_switch.m"
                      ll_backend__string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
#line 503 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_33));
#line 503 "string_switch.m"
                    }
#line 503 "string_switch.m"
                    {
#line 503 "string_switch.m"
                      ll_backend__string_switch__MainRowTail_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_34));
#line 503 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_35, 1) = ((MR_Box) (ll_backend__string_switch__V_71_71));
#line 503 "string_switch.m"
                    }
#line 504 "string_switch.m"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 506 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 505 "string_switch.m"
                      {
#line 505 "string_switch.m"
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 505 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
#line 505 "string_switch.m"
                      }
#line 506 "string_switch.m"
                    else
#line 507 "string_switch.m"
                      {
#line 507 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_72_72;

#line 507 "string_switch.m"
                        {
#line 507 "string_switch.m"
                          ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
#line 507 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_35));
#line 507 "string_switch.m"
                        }
#line 507 "string_switch.m"
                        {
#line 507 "string_switch.m"
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 507 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 507 "string_switch.m"
                        }
#line 507 "string_switch.m"
                      }
#line 497 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
#line 497 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 497 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 497 "string_switch.m"
                  }
#line 509 "string_switch.m"
                else
#line 510 "string_switch.m"
                  {
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__TypeInfo_96_96;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__FirstSolnRvals_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 0)));
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__LaterSolns_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__Soln_30, (MR_Integer) 1)));
#line 510 "string_switch.m"
                    MR_Integer ll_backend__string_switch__NumLaterSolns_39;
#line 510 "string_switch.m"
                    MR_Integer ll_backend__string_switch__FirstRowOffset_40;
#line 510 "string_switch.m"
                    MR_Integer ll_backend__string_switch__LastRowOffset_41;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__FirstRowRval_42;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__LastRowRval_43;
#line 510 "string_switch.m"
                    MR_Integer ll_backend__string_switch__V_57_57;
#line 510 "string_switch.m"
                    MR_Integer ll_backend__string_switch__V_58_58;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_60_60;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_61_61;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_62_62;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_66_66;
#line 510 "string_switch.m"
                    MR_Word ll_backend__string_switch__MainRowTail_88;

#line 511 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = (ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 + (MR_Integer) 1);
#line 6966 "ll_backend.string_switch.c"
                    ll_backend__string_switch__TypeInfo_96_96 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 512 "string_switch.m"
                    {
#line 512 "string_switch.m"
                      mercury__list__length_2_p_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38, &ll_backend__string_switch__NumLaterSolns_39);
                    }
#line 513 "string_switch.m"
                    ll_backend__string_switch__FirstRowOffset_40 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 * ll_backend__string_switch__NumOutVars_20);
#line 514 "string_switch.m"
                    ll_backend__string_switch__V_58_58 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
#line 514 "string_switch.m"
                    ll_backend__string_switch__V_57_57 = (ll_backend__string_switch__V_58_58 - (MR_Integer) 1);
#line 515 "string_switch.m"
                    ll_backend__string_switch__LastRowOffset_41 = (ll_backend__string_switch__V_57_57 * ll_backend__string_switch__NumOutVars_20);
#line 516 "string_switch.m"
                    {
#line 516 "string_switch.m"
                      ll_backend__string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_60_60, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowOffset_40));
#line 516 "string_switch.m"
                    }
#line 516 "string_switch.m"
                    {
#line 516 "string_switch.m"
                      ll_backend__string_switch__FirstRowRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 516 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__FirstRowRval_42, 1) = ((MR_Box) (ll_backend__string_switch__V_60_60));
#line 516 "string_switch.m"
                    }
#line 517 "string_switch.m"
                    {
#line 517 "string_switch.m"
                      ll_backend__string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_61_61, 0) = ((MR_Box) (ll_backend__string_switch__LastRowOffset_41));
#line 517 "string_switch.m"
                    }
#line 517 "string_switch.m"
                    {
#line 517 "string_switch.m"
                      ll_backend__string_switch__LastRowRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "string_switch.m"
                      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LastRowRval_43, 1) = ((MR_Box) (ll_backend__string_switch__V_61_61));
#line 517 "string_switch.m"
                    }
#line 518 "string_switch.m"
                    {
#line 518 "string_switch.m"
                      ll_backend__string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 0) = ((MR_Box) (ll_backend__string_switch__LastRowRval_43));
#line 518 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_62_62, 1) = ((MR_Box) (ll_backend__string_switch__FirstSolnRvals_37));
#line 518 "string_switch.m"
                    }
#line 518 "string_switch.m"
                    {
#line 518 "string_switch.m"
                      ll_backend__string_switch__MainRowTail_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 0) = ((MR_Box) (ll_backend__string_switch__FirstRowRval_42));
#line 518 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_88, 1) = ((MR_Box) (ll_backend__string_switch__V_62_62));
#line 518 "string_switch.m"
                    }
#line 519 "string_switch.m"
                    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 521 "string_switch.m"
                    if (ll_backend__string_switch__succeeded)
#line 520 "string_switch.m"
                      {
#line 520 "string_switch.m"
                        ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 520 "string_switch.m"
                        MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
#line 520 "string_switch.m"
                      }
#line 521 "string_switch.m"
                    else
#line 522 "string_switch.m"
                      {
#line 522 "string_switch.m"
                        MR_Word ll_backend__string_switch__V_63_63;

#line 522 "string_switch.m"
                        {
#line 522 "string_switch.m"
                          ll_backend__string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_32));
#line 522 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_63_63, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_88));
#line 522 "string_switch.m"
                        }
#line 522 "string_switch.m"
                        {
#line 522 "string_switch.m"
                          ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_31));
#line 522 "string_switch.m"
                          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_63_63));
#line 522 "string_switch.m"
                        }
#line 522 "string_switch.m"
                      }
#line 524 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = (ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 + ll_backend__string_switch__NumLaterSolns_39);
#line 525 "string_switch.m"
                    {
#line 525 "string_switch.m"
                      ll_backend__string_switch__V_66_66 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__LaterSolns_38);
                    }
#line 525 "string_switch.m"
                    {
#line 525 "string_switch.m"
                      ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeInfo_96_96, ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47, ll_backend__string_switch__V_66_66);
                    }
#line 510 "string_switch.m"
                    ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 510 "string_switch.m"
                  }
#line 493 "string_switch.m"
              }
#line 527 "string_switch.m"
            else
#line 529 "string_switch.m"
              {
#line 529 "string_switch.m"
                MR_Word ll_backend__string_switch__V_79_79;
#line 529 "string_switch.m"
                MR_Word ll_backend__string_switch__ZeroRval_91 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 529 "string_switch.m"
                MR_Word ll_backend__string_switch__MainRowTail_92;

#line 532 "string_switch.m"
                {
#line 532 "string_switch.m"
                  ll_backend__string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 532 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) (ll_backend__string_switch__DummyOutRvals_19));
#line 532 "string_switch.m"
                }
#line 532 "string_switch.m"
                {
#line 532 "string_switch.m"
                  ll_backend__string_switch__MainRowTail_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 532 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTail_92, 1) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 532 "string_switch.m"
                }
#line 533 "string_switch.m"
                ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_21 == (MR_Integer) 0);
#line 535 "string_switch.m"
                if (ll_backend__string_switch__succeeded)
#line 534 "string_switch.m"
                  {
#line 534 "string_switch.m"
                    ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "string_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 534 "string_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
#line 534 "string_switch.m"
                  }
#line 535 "string_switch.m"
                else
#line 536 "string_switch.m"
                  {
#line 536 "string_switch.m"
                    MR_Word ll_backend__string_switch__V_80_80;

#line 536 "string_switch.m"
                    {
#line 536 "string_switch.m"
                      ll_backend__string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22])));
#line 536 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_80_80, 1) = ((MR_Box) (ll_backend__string_switch__MainRowTail_92));
#line 536 "string_switch.m"
                    }
#line 536 "string_switch.m"
                    {
#line 536 "string_switch.m"
                      ll_backend__string_switch__MainRow_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 0) = ((MR_Box) (ll_backend__string_switch__ZeroRval_91));
#line 536 "string_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRow_36, 1) = ((MR_Box) (ll_backend__string_switch__V_80_80));
#line 536 "string_switch.m"
                    }
#line 536 "string_switch.m"
                  }
#line 529 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
#line 529 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49;
#line 529 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47;
#line 529 "string_switch.m"
                ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46;
#line 529 "string_switch.m"
              }
#line 539 "string_switch.m"
            {
#line 539 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 0) = ((MR_Box) (ll_backend__string_switch__MainRow_36));
#line 539 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44));
#line 539 "string_switch.m"
            }
#line 540 "string_switch.m"
            ll_backend__string_switch__V_82_82 = (ll_backend__string_switch__Slot_16 + (MR_Integer) 1);
#line 540 "string_switch.m"
            /* direct tailcall eliminated */
#line 540 "string_switch.m"
            {
#line 540 "string_switch.m"
              MR_Integer ll_backend__string_switch__Slot__tmp_copy_16 = ll_backend__string_switch__V_82_82;
#line 540 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_44 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_81_81;
#line 540 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0__tmp_copy_46 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_64_93;
#line 540 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_47 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_65_65;
#line 540 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_49 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_67_67;
#line 540 "string_switch.m"
              MR_Integer ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0__tmp_copy_51 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_55_55;

#line 540 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = ll_backend__string_switch__STATE_VARIABLE_SeveralSolnsCaseCount_0__tmp_copy_51;
#line 540 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0_49 = ll_backend__string_switch__STATE_VARIABLE_OneSolnCaseCount_0__tmp_copy_49;
#line 540 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0_47 = ll_backend__string_switch__STATE_VARIABLE_LaterSolnArray_0__tmp_copy_47;
#line 540 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0_46 = ll_backend__string_switch__STATE_VARIABLE_LaterNextRow_0__tmp_copy_46;
#line 540 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0_44 = ll_backend__string_switch__STATE_VARIABLE_RevMainRows_0__tmp_copy_44;
#line 540 "string_switch.m"
              ll_backend__string_switch__Slot_16 = ll_backend__string_switch__Slot__tmp_copy_16;
#line 540 "string_switch.m"
            }
#line 540 "string_switch.m"
            continue;
#line 538 "string_switch.m"
          }
#line 491 "string_switch.m"
      }
#line 491 "string_switch.m"
      break;
#line 491 "string_switch.m"
    }
#line 479 "string_switch.m"
}

#line 428 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_3(
#line 428 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 428 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 428 "string_switch.m"
{
#line 428 "string_switch.m"
  {
#line 428 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 428 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 428 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 428 "string_switch.m"
    {
#line 428 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 428 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 428 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 428 "string_switch.m"
  }
#line 428 "string_switch.m"
}

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
#line 416 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 416 "string_switch.m"
{
#line 416 "string_switch.m"
  {
#line 416 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 416 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      return ll_backend__string_switch__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))));
    }
#line 416 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 416 "string_switch.m"
  }
#line 416 "string_switch.m"
}

#line 416 "string_switch.m"
static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
#line 416 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg)
#line 416 "string_switch.m"
{
#line 416 "string_switch.m"
  {
#line 416 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 416 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;

#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      return ll_backend__string_switch__succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__416__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 4))));
    }
#line 416 "string_switch.m"
    return ll_backend__string_switch__succeeded;
#line 416 "string_switch.m"
  }
#line 416 "string_switch.m"
}

#line 369 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_17,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseSolns_18,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__ResumeVars_19,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__GoalsMayModifyTrail_20,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_21,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_22,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_23,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_24,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_25,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_26,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_28,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_72,
#line 369 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_73,
#line 369 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_74)
#line 369 "string_switch.m"
{
#line 378 "string_switch.m"
  {
#line 378 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_156_156;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_165_165;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_166_166;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_31;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_32;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_33;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_34;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_35;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_36;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_37;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_38;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_39;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_40;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumPrevColumns_41;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_42;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRowTypes_43;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_44;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__AddTrailOps_46;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyOutRvals_48;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord0_49;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__RevMainRows_50;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArrayCord_51;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__OneSolnCaseCount_52;
#line 378 "string_switch.m"
    MR_Integer ll_backend__string_switch__SeveralSolnsCaseCount_53;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__MainRows_54;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterSolnArray_55;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__AscendingSortedCountKinds_56;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedCountKinds_57;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__DescendingSortedKinds_58;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddr_59;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__MainVectorAddrRval_60;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddr_61;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LaterVectorAddrRval_62;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__BaseReg_63;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__RowStartReg_64;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_65;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__LookupResultsCode_66;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_67;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSearchCode_68;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_69;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_75_75;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_109_109;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_120_120;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_121_121;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_123_123;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_124_124;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_127_127;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_128_128;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_130_130;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_131_131;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_134_134;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_135_135;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_136_136;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_137_137;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_138_138;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_141_141;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_145_145;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_146_146;
#line 378 "string_switch.m"
    MR_Word ll_backend__string_switch__V_148_148;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_149_149;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_150_150;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_151_151;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_152_152;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_153_153;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_154_154;
#line 458 "string_switch.m"
    MR_Word ll_backend__string_switch__V_155_155;

#line 384 "string_switch.m"
    {
#line 384 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_24, &ll_backend__string_switch__HashSwitchInfo_31, ll_backend__string_switch__STATE_VARIABLE_CI_0_72, &ll_backend__string_switch__STATE_VARIABLE_CI_75_75, ll_backend__string_switch__STATE_VARIABLE_CLD_0_74);
    }
#line 7503 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_156_156 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 385 "string_switch.m"
    {
#line 385 "string_switch.m"
      ll_backend__string_switch__CommentCode_32 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[24])));
    }
#line 390 "string_switch.m"
    {
#line 390 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolns_18, (MR_Integer) 1, &ll_backend__string_switch__TableSize_33, &ll_backend__string_switch__HashSlotsMap_34, &ll_backend__string_switch__HashOp_35, &ll_backend__string_switch__NumCollisions_36);
    }
#line 392 "string_switch.m"
    ll_backend__string_switch__HashMask_37 = (ll_backend__string_switch__TableSize_33 - (MR_Integer) 1);
#line 394 "string_switch.m"
    {
#line 394 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_21, &ll_backend__string_switch__NumOutVars_38);
    }
#line 397 "string_switch.m"
    {
#line 397 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_38, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_39);
    }
#line 398 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_36 == (MR_Integer) 0);
#line 404 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 399 "string_switch.m"
      {
#line 399 "string_switch.m"
        MR_Word ll_backend__string_switch__V_85_85;
#line 399 "string_switch.m"
        MR_Word ll_backend__string_switch__V_87_87;
#line 399 "string_switch.m"
        MR_Word ll_backend__string_switch__V_90_90;
#line 399 "string_switch.m"
        MR_Word ll_backend__string_switch__V_92_92;

#line 399 "string_switch.m"
        ll_backend__string_switch__NumColumns_40 = ((MR_Integer) 3 + ll_backend__string_switch__NumOutVars_38);
#line 400 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_41 = (MR_Integer) 1;
#line 402 "string_switch.m"
        {
#line 402 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) ((MR_Integer) 1));
#line 402 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_39));
#line 402 "string_switch.m"
        }
#line 402 "string_switch.m"
        {
#line 402 "string_switch.m"
          ll_backend__string_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_85_85, 0) = ((MR_Box) ((MR_Integer) 1));
#line 402 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_85_85, 1) = ((MR_Box) (ll_backend__string_switch__V_87_87));
#line 402 "string_switch.m"
        }
#line 401 "string_switch.m"
        {
#line 401 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
#line 401 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 1) = ((MR_Box) (ll_backend__string_switch__V_85_85));
#line 401 "string_switch.m"
        }
#line 403 "string_switch.m"
        {
#line 403 "string_switch.m"
          ll_backend__string_switch__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_92_92, 0) = ((MR_Box) ((MR_Integer) 7));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_92_92, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
#line 403 "string_switch.m"
        }
#line 403 "string_switch.m"
        {
#line 403 "string_switch.m"
          ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) ((MR_Integer) 7));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (ll_backend__string_switch__V_92_92));
#line 403 "string_switch.m"
        }
#line 403 "string_switch.m"
        {
#line 403 "string_switch.m"
          ll_backend__string_switch__MainRowTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 0) = ((MR_Box) ((MR_Integer) 10));
#line 403 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 1) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 403 "string_switch.m"
        }
#line 399 "string_switch.m"
      }
#line 404 "string_switch.m"
    else
#line 405 "string_switch.m"
      {
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_96_96;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_98_98;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_100_100;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_103_103;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_105_105;
#line 405 "string_switch.m"
        MR_Word ll_backend__string_switch__V_107_107;

#line 405 "string_switch.m"
        ll_backend__string_switch__NumColumns_40 = ((MR_Integer) 4 + ll_backend__string_switch__NumOutVars_38);
#line 406 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_41 = (MR_Integer) 2;
#line 408 "string_switch.m"
        {
#line 408 "string_switch.m"
          ll_backend__string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 0) = ((MR_Box) ((MR_Integer) 1));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_100_100, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_39));
#line 408 "string_switch.m"
        }
#line 408 "string_switch.m"
        {
#line 408 "string_switch.m"
          ll_backend__string_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) ((MR_Integer) 1));
#line 408 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) (ll_backend__string_switch__V_100_100));
#line 408 "string_switch.m"
        }
#line 407 "string_switch.m"
        {
#line 407 "string_switch.m"
          ll_backend__string_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_96_96, 1) = ((MR_Box) (ll_backend__string_switch__V_98_98));
#line 407 "string_switch.m"
        }
#line 407 "string_switch.m"
        {
#line 407 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
#line 407 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_42, 1) = ((MR_Box) (ll_backend__string_switch__V_96_96));
#line 407 "string_switch.m"
        }
#line 410 "string_switch.m"
        {
#line 410 "string_switch.m"
          ll_backend__string_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_107_107, 0) = ((MR_Box) ((MR_Integer) 7));
#line 410 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_107_107, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_22));
#line 410 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_105_105, 0) = ((MR_Box) ((MR_Integer) 7));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_105_105, 1) = ((MR_Box) (ll_backend__string_switch__V_107_107));
#line 409 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) ((MR_Integer) 7));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__V_105_105));
#line 409 "string_switch.m"
        }
#line 409 "string_switch.m"
        {
#line 409 "string_switch.m"
          ll_backend__string_switch__MainRowTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 0) = ((MR_Box) ((MR_Integer) 10));
#line 409 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__MainRowTypes_43, 1) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 409 "string_switch.m"
        }
#line 405 "string_switch.m"
      }
#line 412 "string_switch.m"
    {
#line 412 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_44, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_42));
#line 412 "string_switch.m"
    }
#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      ll_backend__string_switch__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_113_113, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[1]));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_113_113, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_113_113, 3) = ((MR_Box) (ll_backend__string_switch__OutVars_21));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_113_113, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "string_switch.m"
    }
#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      ll_backend__string_switch__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_109_109, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_7[0]));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_109_109, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 416 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_109_109, 3) = ((MR_Box) (ll_backend__string_switch__V_113_113));
#line 416 "string_switch.m"
    }
#line 416 "string_switch.m"
    {
#line 416 "string_switch.m"
      mercury__require__expect_4_p_0(ll_backend__string_switch__V_109_109, (MR_String) "ll_backend.string_switch", (MR_String) "predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
    }
#line 421 "string_switch.m"
#line 421 "string_switch.m"
    switch (ll_backend__string_switch__GoalsMayModifyTrail_20) {
#line 421 "string_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 421 "string_switch.m"
      case (MR_Integer) 0:
#line 423 "string_switch.m"
        ll_backend__string_switch__AddTrailOps_46 = (MR_Integer) 1;
#line 421 "string_switch.m"
        break;
#line 421 "string_switch.m"
      case (MR_Integer) 1:
#line 419 "string_switch.m"
        {
#line 419 "string_switch.m"
          ll_backend__code_info__get_emit_trail_ops_2_p_0(ll_backend__string_switch__STATE_VARIABLE_CI_75_75, &ll_backend__string_switch__AddTrailOps_46);
        }
#line 421 "string_switch.m"
        break;
#line 421 "string_switch.m"
    }
#line 428 "string_switch.m"
    {
#line 428 "string_switch.m"
      ll_backend__string_switch__DummyOutRvals_48 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[8], ll_backend__string_switch__OutTypes_22);
    }
#line 7781 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_165_165 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 429 "string_switch.m"
    {
#line 429 "string_switch.m"
      ll_backend__string_switch__LaterSolnArrayCord0_49 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeInfo_165_165, ((MR_Box) (ll_backend__string_switch__DummyOutRvals_48)));
    }
#line 430 "string_switch.m"
    {
#line 430 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_33, ll_backend__string_switch__HashSlotsMap_34, ll_backend__string_switch__DummyOutRvals_48, ll_backend__string_switch__NumOutVars_38, ll_backend__string_switch__NumCollisions_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevMainRows_50, (MR_Integer) 1, ll_backend__string_switch__LaterSolnArrayCord0_49, &ll_backend__string_switch__LaterSolnArrayCord_51, (MR_Integer) 0, &ll_backend__string_switch__OneSolnCaseCount_52, (MR_Integer) 0, &ll_backend__string_switch__SeveralSolnsCaseCount_53);
    }
#line 435 "string_switch.m"
    {
#line 435 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_165_165, ll_backend__string_switch__RevMainRows_50, &ll_backend__string_switch__MainRows_54);
    }
#line 436 "string_switch.m"
    {
#line 436 "string_switch.m"
      ll_backend__string_switch__LaterSolnArray_55 = mercury__cord__list_1_f_0(ll_backend__string_switch__TypeInfo_165_165, ll_backend__string_switch__LaterSolnArrayCord_51);
    }
#line 438 "string_switch.m"
    {
#line 438 "string_switch.m"
      ll_backend__string_switch__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_121_121, 0) = ((MR_Box) (ll_backend__string_switch__OneSolnCaseCount_52));
#line 438 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_121_121, 1) = ((MR_Box) ((MR_Integer) 1));
#line 438 "string_switch.m"
    }
#line 439 "string_switch.m"
    {
#line 439 "string_switch.m"
      ll_backend__string_switch__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_124_124, 0) = ((MR_Box) (ll_backend__string_switch__SeveralSolnsCaseCount_53));
#line 439 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_124_124, 1) = ((MR_Box) ((MR_Integer) 2));
#line 439 "string_switch.m"
    }
#line 439 "string_switch.m"
    {
#line 439 "string_switch.m"
      ll_backend__string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_123_123, 0) = ((MR_Box) (ll_backend__string_switch__V_124_124));
#line 439 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "string_switch.m"
    }
#line 438 "string_switch.m"
    {
#line 438 "string_switch.m"
      ll_backend__string_switch__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_120_120, 0) = ((MR_Box) (ll_backend__string_switch__V_121_121));
#line 438 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_120_120, 1) = ((MR_Box) (ll_backend__string_switch__V_123_123));
#line 438 "string_switch.m"
    }
#line 7843 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_166_166 = (MR_Word) &ll_backend__string_switch_scalar_common_2[2];
#line 438 "string_switch.m"
    {
#line 438 "string_switch.m"
      mercury__list__sort_2_p_0(ll_backend__string_switch__TypeInfo_166_166, ll_backend__string_switch__V_120_120, &ll_backend__string_switch__AscendingSortedCountKinds_56);
    }
#line 441 "string_switch.m"
    {
#line 441 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_166_166, ll_backend__string_switch__AscendingSortedCountKinds_56, &ll_backend__string_switch__DescendingSortedCountKinds_57);
    }
#line 442 "string_switch.m"
    {
#line 442 "string_switch.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0, ll_backend__string_switch__DescendingSortedCountKinds_57, &ll_backend__string_switch__DescendingSortedKinds_58);
    }
#line 444 "string_switch.m"
    {
#line 444 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__MainRowTypes_43, ll_backend__string_switch__MainRows_54, &ll_backend__string_switch__MainVectorAddr_59, ll_backend__string_switch__STATE_VARIABLE_CI_75_75, &ll_backend__string_switch__STATE_VARIABLE_CI_127_127);
    }
#line 445 "string_switch.m"
    {
#line 445 "string_switch.m"
      ll_backend__string_switch__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 1) = ((MR_Box) (ll_backend__string_switch__MainVectorAddr_59));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_128_128, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "string_switch.m"
    }
#line 445 "string_switch.m"
    {
#line 445 "string_switch.m"
      ll_backend__string_switch__MainVectorAddrRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 445 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__MainVectorAddrRval_60, 1) = ((MR_Box) (ll_backend__string_switch__V_128_128));
#line 445 "string_switch.m"
    }
#line 446 "string_switch.m"
    {
#line 446 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__OutTypes_22, ll_backend__string_switch__LaterSolnArray_55, &ll_backend__string_switch__LaterVectorAddr_61, ll_backend__string_switch__STATE_VARIABLE_CI_127_127, &ll_backend__string_switch__STATE_VARIABLE_CI_130_130);
    }
#line 447 "string_switch.m"
    {
#line 447 "string_switch.m"
      ll_backend__string_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 447 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 447 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_131_131, 1) = ((MR_Box) (ll_backend__string_switch__LaterVectorAddr_61));
#line 447 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_131_131, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "string_switch.m"
    }
#line 447 "string_switch.m"
    {
#line 447 "string_switch.m"
      ll_backend__string_switch__LaterVectorAddrRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 447 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__LaterVectorAddrRval_62, 1) = ((MR_Box) (ll_backend__string_switch__V_131_131));
#line 447 "string_switch.m"
    }
#line 452 "string_switch.m"
    {
#line 452 "string_switch.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_26, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_63, ll_backend__string_switch__STATE_VARIABLE_CLD_0_74, &ll_backend__string_switch__STATE_VARIABLE_CLD_134_134);
    }
#line 458 "string_switch.m"
    ll_backend__string_switch__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 0)));
#line 458 "string_switch.m"
    ll_backend__string_switch__RowStartReg_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 1)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 2)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 3)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 4)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 5)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 6)));
#line 458 "string_switch.m"
    ll_backend__string_switch__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_31, (MR_Integer) 7)));
#line 461 "string_switch.m"
    {
#line 461 "string_switch.m"
      ll_backend__string_switch__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_141_141, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_64));
#line 461 "string_switch.m"
    }
#line 461 "string_switch.m"
    {
#line 461 "string_switch.m"
      ll_backend__string_switch__V_138_138 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_138_138, 0) = ((MR_Box) (ll_backend__string_switch__MainVectorAddrRval_60));
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_138_138, 2) = ((MR_Box) (ll_backend__string_switch__V_141_141));
#line 461 "string_switch.m"
    }
#line 461 "string_switch.m"
    {
#line 461 "string_switch.m"
      ll_backend__string_switch__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 461 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_137_137, 1) = ((MR_Box) (ll_backend__string_switch__V_138_138));
#line 461 "string_switch.m"
    }
#line 460 "string_switch.m"
    {
#line 460 "string_switch.m"
      ll_backend__string_switch__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_136_136, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_63));
#line 460 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_136_136, 2) = ((MR_Box) (ll_backend__string_switch__V_137_137));
#line 460 "string_switch.m"
    }
#line 460 "string_switch.m"
    {
#line 460 "string_switch.m"
      ll_backend__string_switch__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_135_135, 0) = ((MR_Box) (ll_backend__string_switch__V_136_136));
#line 460 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_135_135, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 460 "string_switch.m"
    }
#line 459 "string_switch.m"
    {
#line 459 "string_switch.m"
      ll_backend__string_switch__SetBaseRegCode_65 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__string_switch__V_135_135)));
    }
#line 464 "string_switch.m"
    {
#line 464 "string_switch.m"
      ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(ll_backend__string_switch__DescendingSortedKinds_58, ll_backend__string_switch__NumPrevColumns_41, ll_backend__string_switch__OutVars_21, ll_backend__string_switch__ResumeVars_19, ll_backend__string_switch__EndLabel_25, ll_backend__string_switch__StoreMap_26, ll_backend__string_switch__Liveness_23, ll_backend__string_switch__AddTrailOps_46, ll_backend__string_switch__BaseReg_63, ll_backend__string_switch__LaterVectorAddrRval_62, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_70, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_71, &ll_backend__string_switch__LookupResultsCode_66, ll_backend__string_switch__STATE_VARIABLE_CI_130_130, ll_backend__string_switch__STATE_VARIABLE_CI_73, ll_backend__string_switch__STATE_VARIABLE_CLD_134_134);
    }
#line 468 "string_switch.m"
    {
#line 468 "string_switch.m"
      ll_backend__string_switch__MatchCode_67 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ll_backend__string_switch__SetBaseRegCode_65, ll_backend__string_switch__LookupResultsCode_66);
    }
#line 470 "string_switch.m"
    {
#line 470 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_31, ll_backend__string_switch__VarRval_17, ll_backend__string_switch__MainVectorAddrRval_60, ll_backend__string_switch__ArrayElemType_44, ll_backend__string_switch__NumColumns_40, ll_backend__string_switch__HashOp_35, ll_backend__string_switch__HashMask_37, ll_backend__string_switch__NumCollisions_36, ll_backend__string_switch__MatchCode_67, &ll_backend__string_switch__HashSearchCode_68);
    }
#line 474 "string_switch.m"
    {
#line 474 "string_switch.m"
      ll_backend__string_switch__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 474 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_146_146, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_25));
#line 474 "string_switch.m"
    }
#line 474 "string_switch.m"
    {
#line 474 "string_switch.m"
      ll_backend__string_switch__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_145_145, 0) = ((MR_Box) (ll_backend__string_switch__V_146_146));
#line 474 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_145_145, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
#line 474 "string_switch.m"
    }
#line 473 "string_switch.m"
    {
#line 473 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__string_switch__V_145_145)));
    }
#line 477 "string_switch.m"
    {
#line 477 "string_switch.m"
      ll_backend__string_switch__V_148_148 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ll_backend__string_switch__HashSearchCode_68, ll_backend__string_switch__EndLabelCode_69);
    }
#line 477 "string_switch.m"
    {
#line 477 "string_switch.m"
      *ll_backend__string_switch__Code_28 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_156_156, ll_backend__string_switch__CommentCode_32, ll_backend__string_switch__V_148_148);
    }
#line 378 "string_switch.m"
  }
#line 369 "string_switch.m"
}

#line 339 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__Slot_8,
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__TableSize_9,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__HashSlotMap_10,
#line 339 "string_switch.m"
  MR_Integer ll_backend__string_switch__NumCollisions_11,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__DummyOutRvals_12,
#line 339 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21,
#line 339 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_RevRows_22)
#line 339 "string_switch.m"
{
#line 347 "string_switch.m"
  while (MR_TRUE)
#line 347 "string_switch.m"
    {
#line 347 "string_switch.m"
      /* tailcall optimized into a loop */
#line 347 "string_switch.m"
      {
#line 347 "string_switch.m"
        MR_bool ll_backend__string_switch__succeeded = (ll_backend__string_switch__Slot_8 == ll_backend__string_switch__TableSize_9);

#line 347 "string_switch.m"
        if (ll_backend__string_switch__succeeded)
#line 347 "string_switch.m"
          *ll_backend__string_switch__STATE_VARIABLE_RevRows_22 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21;
#line 347 "string_switch.m"
        else
#line 356 "string_switch.m"
          {
#line 356 "string_switch.m"
            MR_Word ll_backend__string_switch__OutVarRvals_17;
#line 356 "string_switch.m"
            MR_Word ll_backend__string_switch__NextSlotRval_18;
#line 356 "string_switch.m"
            MR_Word ll_backend__string_switch__StringRval_19;
#line 356 "string_switch.m"
            MR_Word ll_backend__string_switch__Row_20;
#line 356 "string_switch.m"
            MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;
#line 356 "string_switch.m"
            MR_Integer ll_backend__string_switch__V_31_31;
#line 352 "string_switch.m"
            MR_Word ll_backend__string_switch__SlotInfo_14;
#line 348 "string_switch.m"
            MR_Box ll_backend__string_switch__conv0_SlotInfo_14;

#line 348 "string_switch.m"
            {
#line 348 "string_switch.m"
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[8], ll_backend__string_switch__HashSlotMap_10, ll_backend__string_switch__Slot_8, &ll_backend__string_switch__conv0_SlotInfo_14);
            }
#line 348 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 348 "string_switch.m"
              {
#line 348 "string_switch.m"
                ll_backend__string_switch__SlotInfo_14 = ((MR_Word) ll_backend__string_switch__conv0_SlotInfo_14);
#line 348 "string_switch.m"
                ll_backend__string_switch__succeeded = MR_TRUE;
#line 348 "string_switch.m"
              }
#line 352 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 349 "string_switch.m"
              {
#line 349 "string_switch.m"
                MR_String ll_backend__string_switch__String_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 0)));
#line 349 "string_switch.m"
                MR_Integer ll_backend__string_switch__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 1)));
#line 349 "string_switch.m"
                MR_Word ll_backend__string_switch__V_23_23;
#line 349 "string_switch.m"
                MR_Word ll_backend__string_switch__V_24_24;

#line 349 "string_switch.m"
                ll_backend__string_switch__OutVarRvals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__SlotInfo_14, (MR_Integer) 2)));
#line 350 "string_switch.m"
                {
#line 350 "string_switch.m"
                  ll_backend__string_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_23_23, 0) = ((MR_Box) (ll_backend__string_switch__Next_16));
#line 350 "string_switch.m"
                }
#line 350 "string_switch.m"
                {
#line 350 "string_switch.m"
                  ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__NextSlotRval_18, 1) = ((MR_Box) (ll_backend__string_switch__V_23_23));
#line 350 "string_switch.m"
                }
#line 351 "string_switch.m"
                {
#line 351 "string_switch.m"
                  ll_backend__string_switch__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_24_24, 1) = ((MR_Box) (ll_backend__string_switch__String_15));
#line 351 "string_switch.m"
                }
#line 351 "string_switch.m"
                {
#line 351 "string_switch.m"
                  ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "string_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__string_switch__StringRval_19, 1) = ((MR_Box) (ll_backend__string_switch__V_24_24));
#line 351 "string_switch.m"
                }
#line 349 "string_switch.m"
              }
#line 352 "string_switch.m"
            else
#line 353 "string_switch.m"
              {
#line 353 "string_switch.m"
                ll_backend__string_switch__StringRval_19 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[21]);
#line 354 "string_switch.m"
                ll_backend__string_switch__NextSlotRval_18 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[22]);
#line 355 "string_switch.m"
                ll_backend__string_switch__OutVarRvals_17 = ll_backend__string_switch__DummyOutRvals_12;
#line 353 "string_switch.m"
              }
#line 357 "string_switch.m"
            ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_11 == (MR_Integer) 0);
#line 359 "string_switch.m"
            if (ll_backend__string_switch__succeeded)
#line 358 "string_switch.m"
              {
#line 358 "string_switch.m"
                ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "string_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
#line 358 "string_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
#line 358 "string_switch.m"
              }
#line 359 "string_switch.m"
            else
#line 360 "string_switch.m"
              {
#line 360 "string_switch.m"
                MR_Word ll_backend__string_switch__V_29_29;

#line 360 "string_switch.m"
                {
#line 360 "string_switch.m"
                  ll_backend__string_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_29_29, 0) = ((MR_Box) (ll_backend__string_switch__NextSlotRval_18));
#line 360 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_29_29, 1) = ((MR_Box) (ll_backend__string_switch__OutVarRvals_17));
#line 360 "string_switch.m"
                }
#line 360 "string_switch.m"
                {
#line 360 "string_switch.m"
                  ll_backend__string_switch__Row_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 0) = ((MR_Box) (ll_backend__string_switch__StringRval_19));
#line 360 "string_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__string_switch__Row_20, 1) = ((MR_Box) (ll_backend__string_switch__V_29_29));
#line 360 "string_switch.m"
                }
#line 360 "string_switch.m"
              }
#line 362 "string_switch.m"
            {
#line 362 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 0) = ((MR_Box) (ll_backend__string_switch__Row_20));
#line 362 "string_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30, 1) = ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21));
#line 362 "string_switch.m"
            }
#line 363 "string_switch.m"
            ll_backend__string_switch__V_31_31 = (ll_backend__string_switch__Slot_8 + (MR_Integer) 1);
#line 363 "string_switch.m"
            /* direct tailcall eliminated */
#line 363 "string_switch.m"
            {
#line 363 "string_switch.m"
              MR_Integer ll_backend__string_switch__Slot__tmp_copy_8 = ll_backend__string_switch__V_31_31;
#line 363 "string_switch.m"
              MR_Word ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_21 = ll_backend__string_switch__STATE_VARIABLE_RevRows_30_30;

#line 363 "string_switch.m"
              ll_backend__string_switch__STATE_VARIABLE_RevRows_0_21 = ll_backend__string_switch__STATE_VARIABLE_RevRows_0__tmp_copy_21;
#line 363 "string_switch.m"
              ll_backend__string_switch__Slot_8 = ll_backend__string_switch__Slot__tmp_copy_8;
#line 363 "string_switch.m"
            }
#line 363 "string_switch.m"
            continue;
#line 356 "string_switch.m"
          }
#line 347 "string_switch.m"
      }
#line 347 "string_switch.m"
      break;
#line 347 "string_switch.m"
    }
#line 339 "string_switch.m"
}

#line 273 "string_switch.m"
static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
#line 273 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 273 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1)
#line 273 "string_switch.m"
{
#line 273 "string_switch.m"
  {
#line 273 "string_switch.m"
    MR_Box ll_backend__string_switch__wrapper_arg_2;
#line 273 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 273 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__2_2;

#line 273 "string_switch.m"
    {
#line 273 "string_switch.m"
      ll_backend__string_switch__conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1));
    }
#line 273 "string_switch.m"
    ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__2_2));
#line 273 "string_switch.m"
    return ll_backend__string_switch__wrapper_arg_2;
#line 273 "string_switch.m"
  }
#line 273 "string_switch.m"
}

#line 244 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_15,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__CaseValues_16,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__OutVars_17,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__OutTypes_18,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__Liveness_19,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_20,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_21,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_22,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_24,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_58,
#line 244 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_59,
#line 244 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_0_60)
#line 244 "string_switch.m"
{
#line 253 "string_switch.m"
  {
#line 253 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_113_113;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeInfo_114_114;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_27;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_28;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_29;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_30;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_31;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_32;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_33;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumOutVars_34;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__OutElemTypes_35;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__DummyOutRvals_36;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumPrevColumns_37;
#line 253 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_38;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_39;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_40;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_41;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__RevVectorRvals_42;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorRvals_43;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddr_44;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__VectorAddrRval_45;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__SetBaseRegCode_46;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchEndCode_51;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__GotoEndLabelCode_52;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_53;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSearchCode_54;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_55;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_61_61;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_83_83;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_95_95;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 253 "string_switch.m"
    MR_Word ll_backend__string_switch__V_105_105;

#line 259 "string_switch.m"
    {
#line 259 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_20, &ll_backend__string_switch__HashSwitchInfo_27, ll_backend__string_switch__STATE_VARIABLE_CI_0_58, &ll_backend__string_switch__STATE_VARIABLE_CI_61_61, ll_backend__string_switch__STATE_VARIABLE_CLD_0_60);
    }
#line 8416 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_113_113 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 260 "string_switch.m"
    {
#line 260 "string_switch.m"
      ll_backend__string_switch__CommentCode_28 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[23])));
    }
#line 8423 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeInfo_114_114 = (MR_Word) &ll_backend__string_switch_scalar_common_1[0];
#line 265 "string_switch.m"
    {
#line 265 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeInfo_114_114, ll_backend__string_switch__CaseValues_16, (MR_Integer) 1, &ll_backend__string_switch__TableSize_29, &ll_backend__string_switch__HashSlotsMap_30, &ll_backend__string_switch__HashOp_31, &ll_backend__string_switch__NumCollisions_32);
    }
#line 267 "string_switch.m"
    ll_backend__string_switch__HashMask_33 = (ll_backend__string_switch__TableSize_29 - (MR_Integer) 1);
#line 269 "string_switch.m"
    {
#line 269 "string_switch.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[7], ll_backend__string_switch__OutVars_17, &ll_backend__string_switch__NumOutVars_34);
    }
#line 272 "string_switch.m"
    {
#line 272 "string_switch.m"
      mercury__list__duplicate_3_p_0((MR_Word) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0, ll_backend__string_switch__NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &ll_backend__string_switch__OutElemTypes_35);
    }
#line 273 "string_switch.m"
    {
#line 273 "string_switch.m"
      ll_backend__string_switch__DummyOutRvals_36 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__string_switch_scalar_common_2[7], ll_backend__string_switch__OutTypes_18);
    }
#line 274 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_32 == (MR_Integer) 0);
#line 279 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 275 "string_switch.m"
      {
#line 275 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_37 = (MR_Integer) 1;
#line 276 "string_switch.m"
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 1 + ll_backend__string_switch__NumOutVars_34);
#line 277 "string_switch.m"
        {
#line 277 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
#line 277 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
#line 277 "string_switch.m"
        }
#line 278 "string_switch.m"
        {
#line 278 "string_switch.m"
          ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 0) = ((MR_Box) ((MR_Integer) 10));
#line 278 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
#line 278 "string_switch.m"
        }
#line 275 "string_switch.m"
      }
#line 279 "string_switch.m"
    else
#line 280 "string_switch.m"
      {
#line 280 "string_switch.m"
        MR_Word ll_backend__string_switch__V_75_75;
#line 280 "string_switch.m"
        MR_Word ll_backend__string_switch__V_78_78;

#line 280 "string_switch.m"
        ll_backend__string_switch__NumPrevColumns_37 = (MR_Integer) 2;
#line 281 "string_switch.m"
        ll_backend__string_switch__NumColumns_38 = ((MR_Integer) 2 + ll_backend__string_switch__NumOutVars_34);
#line 282 "string_switch.m"
        {
#line 282 "string_switch.m"
          ll_backend__string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_75_75, 0) = ((MR_Box) ((MR_Integer) 1));
#line 282 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_75_75, 1) = ((MR_Box) (ll_backend__string_switch__OutElemTypes_35));
#line 282 "string_switch.m"
        }
#line 282 "string_switch.m"
        {
#line 282 "string_switch.m"
          ll_backend__string_switch__ArrayElemTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
#line 282 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemTypes_39, 1) = ((MR_Box) (ll_backend__string_switch__V_75_75));
#line 282 "string_switch.m"
        }
#line 283 "string_switch.m"
        {
#line 283 "string_switch.m"
          ll_backend__string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 0) = ((MR_Box) ((MR_Integer) 7));
#line 283 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_78_78, 1) = ((MR_Box) (ll_backend__string_switch__OutTypes_18));
#line 283 "string_switch.m"
        }
#line 283 "string_switch.m"
        {
#line 283 "string_switch.m"
          ll_backend__string_switch__RowElemTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 0) = ((MR_Box) ((MR_Integer) 10));
#line 283 "string_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__string_switch__RowElemTypes_40, 1) = ((MR_Box) (ll_backend__string_switch__V_78_78));
#line 283 "string_switch.m"
        }
#line 280 "string_switch.m"
      }
#line 285 "string_switch.m"
    {
#line 285 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_41, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_39));
#line 285 "string_switch.m"
    }
#line 288 "string_switch.m"
    {
#line 288 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_29, ll_backend__string_switch__HashSlotsMap_30, ll_backend__string_switch__NumCollisions_32, ll_backend__string_switch__DummyOutRvals_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevVectorRvals_42);
    }
#line 290 "string_switch.m"
    {
#line 290 "string_switch.m"
      mercury__list__reverse_2_p_0(ll_backend__string_switch__TypeInfo_114_114, ll_backend__string_switch__RevVectorRvals_42, &ll_backend__string_switch__VectorRvals_43);
    }
#line 291 "string_switch.m"
    {
#line 291 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_40, ll_backend__string_switch__VectorRvals_43, &ll_backend__string_switch__VectorAddr_44, ll_backend__string_switch__STATE_VARIABLE_CI_61_61, ll_backend__string_switch__STATE_VARIABLE_CI_59);
    }
#line 292 "string_switch.m"
    {
#line 292 "string_switch.m"
      ll_backend__string_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 292 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 292 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 1) = ((MR_Box) (ll_backend__string_switch__VectorAddr_44));
#line 292 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "string_switch.m"
    }
#line 292 "string_switch.m"
    {
#line 292 "string_switch.m"
      ll_backend__string_switch__VectorAddrRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__VectorAddrRval_45, 1) = ((MR_Box) (ll_backend__string_switch__V_83_83));
#line 292 "string_switch.m"
    }
#line 297 "string_switch.m"
    if ((ll_backend__string_switch__OutVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "string_switch.m"
      {
#line 296 "string_switch.m"
        {
#line 296 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_46 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_113_113);
        }
#line 295 "string_switch.m"
        ll_backend__string_switch__STATE_VARIABLE_CLD_95_95 = ll_backend__string_switch__STATE_VARIABLE_CLD_0_60;
#line 295 "string_switch.m"
      }
#line 297 "string_switch.m"
    else
#line 298 "string_switch.m"
      {
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__BaseReg_49;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__RowStartReg_50;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__STATE_VARIABLE_CLD_86_86;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__V_87_87;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__V_88_88;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__V_89_89;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__V_90_90;
#line 298 "string_switch.m"
        MR_Word ll_backend__string_switch__V_93_93;
#line 308 "string_switch.m"
        MR_Word ll_backend__string_switch__V_106_106;
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

#line 302 "string_switch.m"
        {
#line 302 "string_switch.m"
          ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__string_switch__StoreMap_22, (MR_Integer) 0, &ll_backend__string_switch__BaseReg_49, ll_backend__string_switch__STATE_VARIABLE_CLD_0_60, &ll_backend__string_switch__STATE_VARIABLE_CLD_86_86);
        }
#line 308 "string_switch.m"
        ll_backend__string_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 0)));
#line 308 "string_switch.m"
        ll_backend__string_switch__RowStartReg_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 1)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 2)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 3)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 4)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 5)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 6)));
#line 308 "string_switch.m"
        ll_backend__string_switch__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_27, (MR_Integer) 7)));
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_93_93, 0) = ((MR_Box) (ll_backend__string_switch__RowStartReg_50));
#line 311 "string_switch.m"
        }
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (ll_backend__string_switch__VectorAddrRval_45));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[6])));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(2), ll_backend__string_switch__V_90_90, 2) = ((MR_Box) (ll_backend__string_switch__V_93_93));
#line 311 "string_switch.m"
        }
#line 311 "string_switch.m"
        {
#line 311 "string_switch.m"
          ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 311 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 311 "string_switch.m"
        }
#line 310 "string_switch.m"
        {
#line 310 "string_switch.m"
          ll_backend__string_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 1) = ((MR_Box) (ll_backend__string_switch__BaseReg_49));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_88_88, 2) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 310 "string_switch.m"
        }
#line 310 "string_switch.m"
        {
#line 310 "string_switch.m"
          ll_backend__string_switch__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_87_87, 0) = ((MR_Box) (ll_backend__string_switch__V_88_88));
#line 310 "string_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_87_87, 1) = ((MR_Box) ((MR_String) "set up base reg"));
#line 310 "string_switch.m"
        }
#line 309 "string_switch.m"
        {
#line 309 "string_switch.m"
          ll_backend__string_switch__SetBaseRegCode_46 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (ll_backend__string_switch__V_87_87)));
        }
#line 314 "string_switch.m"
        {
#line 314 "string_switch.m"
          ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__string_switch__OutVars_17, ll_backend__string_switch__NumPrevColumns_37, ll_backend__string_switch__BaseReg_49, *ll_backend__string_switch__STATE_VARIABLE_CI_59, ll_backend__string_switch__STATE_VARIABLE_CLD_86_86, &ll_backend__string_switch__STATE_VARIABLE_CLD_95_95);
        }
#line 298 "string_switch.m"
      }
#line 320 "string_switch.m"
    {
#line 320 "string_switch.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__string_switch__StoreMap_22, ll_backend__string_switch__Liveness_19, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_56, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_57, &ll_backend__string_switch__BranchEndCode_51, *ll_backend__string_switch__STATE_VARIABLE_CI_59, ll_backend__string_switch__STATE_VARIABLE_CLD_95_95);
    }
#line 324 "string_switch.m"
    {
#line 324 "string_switch.m"
      ll_backend__string_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 324 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_99_99, 0) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
#line 324 "string_switch.m"
    }
#line 324 "string_switch.m"
    {
#line 324 "string_switch.m"
      ll_backend__string_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 324 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_98_98, 1) = ((MR_Box) (ll_backend__string_switch__V_99_99));
#line 324 "string_switch.m"
    }
#line 324 "string_switch.m"
    {
#line 324 "string_switch.m"
      ll_backend__string_switch__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_97_97, 0) = ((MR_Box) (ll_backend__string_switch__V_98_98));
#line 324 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_97_97, 1) = ((MR_Box) ((MR_String) "go to end of simple hash string lookup switch"));
#line 324 "string_switch.m"
    }
#line 323 "string_switch.m"
    {
#line 323 "string_switch.m"
      ll_backend__string_switch__GotoEndLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (ll_backend__string_switch__V_97_97)));
    }
#line 327 "string_switch.m"
    {
#line 327 "string_switch.m"
      ll_backend__string_switch__V_101_101 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__BranchEndCode_51, ll_backend__string_switch__GotoEndLabelCode_52);
    }
#line 327 "string_switch.m"
    {
#line 327 "string_switch.m"
      ll_backend__string_switch__MatchCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__SetBaseRegCode_46, ll_backend__string_switch__V_101_101);
    }
#line 328 "string_switch.m"
    {
#line 328 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_27, ll_backend__string_switch__VarRval_15, ll_backend__string_switch__VectorAddrRval_45, ll_backend__string_switch__ArrayElemType_41, ll_backend__string_switch__NumColumns_38, ll_backend__string_switch__HashOp_31, ll_backend__string_switch__HashMask_33, ll_backend__string_switch__NumCollisions_32, ll_backend__string_switch__MatchCode_53, &ll_backend__string_switch__HashSearchCode_54);
    }
#line 333 "string_switch.m"
    {
#line 333 "string_switch.m"
      ll_backend__string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_103_103, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_21));
#line 333 "string_switch.m"
    }
#line 333 "string_switch.m"
    {
#line 333 "string_switch.m"
      ll_backend__string_switch__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 0) = ((MR_Box) (ll_backend__string_switch__V_103_103));
#line 333 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_102_102, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
#line 333 "string_switch.m"
    }
#line 332 "string_switch.m"
    {
#line 332 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_55 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ((MR_Box) (ll_backend__string_switch__V_102_102)));
    }
#line 337 "string_switch.m"
    {
#line 337 "string_switch.m"
      ll_backend__string_switch__V_105_105 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__HashSearchCode_54, ll_backend__string_switch__EndLabelCode_55);
    }
#line 337 "string_switch.m"
    {
#line 337 "string_switch.m"
      *ll_backend__string_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__CommentCode_28, ll_backend__string_switch__V_105_105);
    }
#line 253 "string_switch.m"
  }
#line 244 "string_switch.m"
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
        MR_Word ll_backend__string_switch__V_30_30;
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
        ll_backend__string_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__Case_21, (MR_Integer) 2)));
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
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[6], ll_backend__string_switch__V_47_47, ll_backend__string_switch__OtherTaggedConsIds_29, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_StrsLabels_46_46)), &ll_backend__string_switch__conv1_HeadVar__3_3);
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
              ll_backend__string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[5], ll_backend__string_switch__HashSlotMap_12, ll_backend__string_switch__Slot_10, &ll_backend__string_switch__conv0_SlotInfo_17);
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

#line 71 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__LookupSwitchInfo_13,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_14,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_15,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_16,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31,
#line 71 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32,
#line 71 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_18,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_33,
#line 71 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_34,
#line 71 "string_switch.m"
  MR_Word ll_backend__string_switch__CLD_20)
#line 71 "string_switch.m"
{
#line 759 "string_switch.m"
  {
#line 759 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 759 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseConsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 0)));
#line 759 "string_switch.m"
    MR_Word ll_backend__string_switch__OutVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 1)));
#line 759 "string_switch.m"
    MR_Word ll_backend__string_switch__OutTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 2)));
#line 759 "string_switch.m"
    MR_Word ll_backend__string_switch__Liveness_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 3)));

#line 768 "string_switch.m"
    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_21)) == (MR_mktag((MR_Integer) 0))))
#line 763 "string_switch.m"
      {
#line 763 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValueMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
#line 763 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValues_26;

#line 764 "string_switch.m"
        {
#line 764 "string_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__CaseValueMap_25, &ll_backend__string_switch__CaseValues_26);
        }
#line 765 "string_switch.m"
        {
#line 765 "string_switch.m"
          ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseValues_26, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
#line 765 "string_switch.m"
          return;
        }
#line 763 "string_switch.m"
      }
#line 768 "string_switch.m"
    else
#line 770 "string_switch.m"
      {
#line 770 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolnMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
#line 770 "string_switch.m"
        MR_Word ll_backend__string_switch__ResumeVars_28;
#line 770 "string_switch.m"
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_29;
#line 770 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolns_30;
#line 770 "string_switch.m"
        MR_Word ll_backend__string_switch__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 1)));

#line 770 "string_switch.m"
        ll_backend__string_switch__ResumeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_35_35, (MR_Integer) 0)));
#line 770 "string_switch.m"
        ll_backend__string_switch__GoalsMayModifyTrail_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_35_35, (MR_Integer) 1)));
#line 771 "string_switch.m"
        {
#line 771 "string_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolnMap_27, &ll_backend__string_switch__CaseSolns_30);
        }
#line 772 "string_switch.m"
        {
#line 772 "string_switch.m"
          ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseSolns_30, ll_backend__string_switch__ResumeVars_28, ll_backend__string_switch__GoalsMayModifyTrail_29, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
#line 772 "string_switch.m"
          return;
        }
#line 770 "string_switch.m"
      }
#line 759 "string_switch.m"
  }
#line 71 "string_switch.m"
}

#line 732 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_2(
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_2,
#line 732 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 732 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4)
#line 732 "string_switch.m"
{
#line 732 "string_switch.m"
  {
#line 732 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 732 "string_switch.m"
    MR_Word ll_backend__string_switch__conv7_HeadVar__4_4;

#line 732 "string_switch.m"
    {
#line 732 "string_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__string_switch__wrapper_arg_1), ((MR_Word) ll_backend__string_switch__wrapper_arg_2), ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv7_HeadVar__4_4);
    }
#line 732 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv7_HeadVar__4_4));
#line 732 "string_switch.m"
  }
#line 732 "string_switch.m"
}

#line 698 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__closure_arg,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_1,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_2,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_3,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_4,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_5,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_6,
#line 698 "string_switch.m"
  MR_Box ll_backend__string_switch__wrapper_arg_7,
#line 698 "string_switch.m"
  MR_Box * ll_backend__string_switch__wrapper_arg_8)
#line 698 "string_switch.m"
{
#line 698 "string_switch.m"
  {
#line 698 "string_switch.m"
    MR_Box ll_backend__string_switch__closure = ll_backend__string_switch__closure_arg;
#line 698 "string_switch.m"
    MR_Word ll_backend__string_switch__conv3_HeadVar__3_3;
#line 698 "string_switch.m"
    MR_Word ll_backend__string_switch__conv2_HeadVar__5_5;
#line 698 "string_switch.m"
    MR_Word ll_backend__string_switch__conv1_HeadVar__7_7;
#line 698 "string_switch.m"
    MR_Word ll_backend__string_switch__conv0_HeadVar__9_9;

#line 698 "string_switch.m"
    {
#line 698 "string_switch.m"
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__string_switch__wrapper_arg_1), &ll_backend__string_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__string_switch__wrapper_arg_3), &ll_backend__string_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__string_switch__wrapper_arg_5), &ll_backend__string_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__string_switch__wrapper_arg_7), &ll_backend__string_switch__conv0_HeadVar__9_9);
    }
#line 698 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__string_switch__conv3_HeadVar__3_3));
#line 698 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__string_switch__conv2_HeadVar__5_5));
#line 698 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__string_switch__conv1_HeadVar__7_7));
#line 698 "string_switch.m"
    *ll_backend__string_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__string_switch__conv0_HeadVar__9_9));
#line 698 "string_switch.m"
  }
#line 698 "string_switch.m"
}

#line 66 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0(
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__Cases_13,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 66 "string_switch.m"
  MR_String ll_backend__string_switch__VarName_15,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__CodeModel_16,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_17,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__SwitchGoalInfo_18,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_19,
#line 66 "string_switch.m"
  MR_Word * ll_backend__string_switch__MaybeEnd_20,
#line 66 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_21,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_47,
#line 66 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_48,
#line 66 "string_switch.m"
  MR_Word ll_backend__string_switch__CLD_23)
#line 66 "string_switch.m"
{
#line 686 "string_switch.m"
  {
#line 686 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_112_112;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_113_113;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_114_114;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySwitchInfo_24;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_25;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__Params_26;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_27;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap0_28;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap_29;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__SortedTable_30;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTableRows_31;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTargets_32;
#line 686 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_33;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TableRows_34;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__Targets_35;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddr_38;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddrRval_41;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__BinarySearchCode_42;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__MidReg_43;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__ComputedGotoCode_44;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__CasesCode_45;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_46;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_49_49;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_54_54;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_56_56;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_69_69;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_71_71;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_72_72;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_73_73;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_75_75;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_77_77;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_79_79;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_87_87;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_91_91;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 686 "string_switch.m"
    MR_Word ll_backend__string_switch__V_93_93;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_94_94;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_95_95;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_96_96;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_97_97;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_98_98;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_100_100;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_101_101;
#line 688 "string_switch.m"
    MR_Word ll_backend__string_switch__V_102_102;
#line 697 "string_switch.m"
    MR_Box ll_backend__string_switch__conv6_CaseLabelMap_29;
#line 697 "string_switch.m"
    MR_Box ll_backend__string_switch__conv5_MaybeEnd_20;
#line 697 "string_switch.m"
    MR_Box ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_103_103;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_104_104;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_105_105;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_107_107;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_108_108;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_109_109;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_110_110;
#line 716 "string_switch.m"
    MR_Word ll_backend__string_switch__V_111_111;
#line 732 "string_switch.m"
    MR_Box ll_backend__string_switch__conv8_CasesCode_45;

#line 687 "string_switch.m"
    {
#line 687 "string_switch.m"
      ll_backend__string_switch__init_string_binary_switch_info_5_p_0(ll_backend__string_switch__CanFail_17, &ll_backend__string_switch__BinarySwitchInfo_24, ll_backend__string_switch__STATE_VARIABLE_CI_0_47, &ll_backend__string_switch__STATE_VARIABLE_CI_49_49, ll_backend__string_switch__CLD_23);
    }
#line 688 "string_switch.m"
    ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 0)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 1)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 2)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 3)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 4)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 5)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 6)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 7)));
#line 688 "string_switch.m"
    ll_backend__string_switch__BranchStart_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 8)));
#line 688 "string_switch.m"
    ll_backend__string_switch__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 9)));
#line 689 "string_switch.m"
    {
#line 689 "string_switch.m"
      ll_backend__string_switch__Params_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 689 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 0) = ((MR_Box) (ll_backend__string_switch__VarName_15));
#line 689 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_18));
#line 689 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_16));
#line 689 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_25));
#line 689 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
#line 689 "string_switch.m"
    }
#line 9690 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_112_112 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 691 "string_switch.m"
    {
#line 691 "string_switch.m"
      ll_backend__string_switch__CommentCode_27 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[18])));
    }
#line 9697 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_113_113 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 9699 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_114_114 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 696 "string_switch.m"
    {
#line 696 "string_switch.m"
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__TypeCtorInfo_114_114, &ll_backend__string_switch__CaseLabelMap0_28);
    }
#line 698 "string_switch.m"
    {
#line 698 "string_switch.m"
      ll_backend__string_switch__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 698 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_54_54, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0]));
#line 698 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_54_54, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_1));
#line 698 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 698 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_54_54, 3) = ((MR_Box) (ll_backend__string_switch__Params_26));
#line 698 "string_switch.m"
    }
#line 697 "string_switch.m"
    {
#line 697 "string_switch.m"
      backend_libs__switch_util__string_binary_cases_9_p_0(ll_backend__string_switch__TypeCtorInfo_113_113, (MR_Word) &ll_backend__string_switch_scalar_common_2[0], (MR_Word) &ll_backend__string_switch_scalar_common_1[4], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__string_switch__Cases_13, ll_backend__string_switch__V_54_54, ((MR_Box) (ll_backend__string_switch__CaseLabelMap0_28)), &ll_backend__string_switch__conv6_CaseLabelMap_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__string_switch__conv5_MaybeEnd_20, ((MR_Box) (ll_backend__string_switch__STATE_VARIABLE_CI_49_49)), &ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56, &ll_backend__string_switch__SortedTable_30);
    }
#line 697 "string_switch.m"
    ll_backend__string_switch__CaseLabelMap_29 = ((MR_Word) ll_backend__string_switch__conv6_CaseLabelMap_29);
#line 697 "string_switch.m"
    *ll_backend__string_switch__MaybeEnd_20 = ((MR_Word) ll_backend__string_switch__conv5_MaybeEnd_20);
#line 697 "string_switch.m"
    ll_backend__string_switch__STATE_VARIABLE_CI_56_56 = ((MR_Word) ll_backend__string_switch__conv4_STATE_VARIABLE_CI_56_56);
#line 701 "string_switch.m"
    {
#line 701 "string_switch.m"
      ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(ll_backend__string_switch__SortedTable_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_32, (MR_Integer) 0, &ll_backend__string_switch__TableSize_33);
    }
#line 703 "string_switch.m"
    {
#line 703 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_31, &ll_backend__string_switch__TableRows_34);
    }
#line 704 "string_switch.m"
    {
#line 704 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_32, &ll_backend__string_switch__Targets_35);
    }
#line 707 "string_switch.m"
    {
#line 707 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]), ll_backend__string_switch__TableRows_34, &ll_backend__string_switch__TableAddr_38, ll_backend__string_switch__STATE_VARIABLE_CI_56_56, ll_backend__string_switch__STATE_VARIABLE_CI_48);
    }
#line 710 "string_switch.m"
    {
#line 710 "string_switch.m"
      ll_backend__string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 710 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 710 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_38));
#line 710 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_69_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "string_switch.m"
    }
#line 710 "string_switch.m"
    {
#line 710 "string_switch.m"
      ll_backend__string_switch__TableAddrRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 710 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_41, 1) = ((MR_Box) (ll_backend__string_switch__V_69_69));
#line 710 "string_switch.m"
    }
#line 712 "string_switch.m"
    {
#line 712 "string_switch.m"
      ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(ll_backend__string_switch__BinarySwitchInfo_24, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__TableAddrRval_41, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[2]), ll_backend__string_switch__TableSize_33, (MR_Integer) 2, &ll_backend__string_switch__BinarySearchCode_42);
    }
#line 716 "string_switch.m"
    ll_backend__string_switch__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 0)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 1)));
#line 716 "string_switch.m"
    ll_backend__string_switch__MidReg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 2)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 3)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 4)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 5)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 6)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 7)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 8)));
#line 716 "string_switch.m"
    ll_backend__string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__BinarySwitchInfo_24, (MR_Integer) 9)));
#line 724 "string_switch.m"
    {
#line 724 "string_switch.m"
      ll_backend__string_switch__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (ll_backend__string_switch__MidReg_43));
#line 724 "string_switch.m"
    }
#line 723 "string_switch.m"
    {
#line 723 "string_switch.m"
      ll_backend__string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 723 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 723 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 2) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 723 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_77_77, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[19])));
#line 723 "string_switch.m"
    }
#line 722 "string_switch.m"
    {
#line 722 "string_switch.m"
      ll_backend__string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 722 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 2) = ((MR_Box) (ll_backend__string_switch__V_77_77));
#line 722 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_75_75, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__string_switch_scalar_common_1[20])));
#line 722 "string_switch.m"
    }
#line 720 "string_switch.m"
    {
#line 720 "string_switch.m"
      ll_backend__string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 720 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 720 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_3[3])));
#line 720 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 2) = ((MR_Box) (ll_backend__string_switch__TableAddrRval_41));
#line 720 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_73_73, 3) = ((MR_Box) (ll_backend__string_switch__V_75_75));
#line 720 "string_switch.m"
    }
#line 719 "string_switch.m"
    {
#line 719 "string_switch.m"
      ll_backend__string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 719 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 719 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 1) = ((MR_Box) (ll_backend__string_switch__V_73_73));
#line 719 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_72_72, 2) = ((MR_Box) (ll_backend__string_switch__Targets_35));
#line 719 "string_switch.m"
    }
#line 719 "string_switch.m"
    {
#line 719 "string_switch.m"
      ll_backend__string_switch__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 719 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_71_71, 0) = ((MR_Box) (ll_backend__string_switch__V_72_72));
#line 719 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_71_71, 1) = ((MR_Box) ((MR_String) "jump to the matching case"));
#line 719 "string_switch.m"
    }
#line 718 "string_switch.m"
    {
#line 718 "string_switch.m"
      ll_backend__string_switch__ComputedGotoCode_44 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ((MR_Box) (ll_backend__string_switch__V_71_71)));
    }
#line 732 "string_switch.m"
    {
#line 732 "string_switch.m"
      ll_backend__string_switch__V_87_87 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_112_112);
    }
#line 732 "string_switch.m"
    {
#line 732 "string_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_113_113, ll_backend__string_switch__TypeCtorInfo_114_114, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[6], ll_backend__string_switch__CaseLabelMap_29, ((MR_Box) (ll_backend__string_switch__V_87_87)), &ll_backend__string_switch__conv8_CasesCode_45);
    }
#line 732 "string_switch.m"
    ll_backend__string_switch__CasesCode_45 = ((MR_Word) ll_backend__string_switch__conv8_CasesCode_45);
#line 734 "string_switch.m"
    {
#line 734 "string_switch.m"
      ll_backend__string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 734 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
#line 734 "string_switch.m"
    }
#line 734 "string_switch.m"
    {
#line 734 "string_switch.m"
      ll_backend__string_switch__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_88_88, 0) = ((MR_Box) (ll_backend__string_switch__V_89_89));
#line 734 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_88_88, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
#line 734 "string_switch.m"
    }
#line 733 "string_switch.m"
    {
#line 733 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ((MR_Box) (ll_backend__string_switch__V_88_88)));
    }
#line 738 "string_switch.m"
    {
#line 738 "string_switch.m"
      ll_backend__string_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ll_backend__string_switch__CasesCode_45, ll_backend__string_switch__EndLabelCode_46);
    }
#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      ll_backend__string_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ll_backend__string_switch__ComputedGotoCode_44, ll_backend__string_switch__V_93_93);
    }
#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      ll_backend__string_switch__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ll_backend__string_switch__BinarySearchCode_42, ll_backend__string_switch__V_92_92);
    }
#line 737 "string_switch.m"
    {
#line 737 "string_switch.m"
      *ll_backend__string_switch__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_112_112, ll_backend__string_switch__CommentCode_27, ll_backend__string_switch__V_91_91);
    }
#line 686 "string_switch.m"
  }
#line 66 "string_switch.m"
}

#line 61 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_12,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__LookupSwitchInfo_13,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_14,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_15,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__StoreMap_16,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31,
#line 61 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32,
#line 61 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_18,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_33,
#line 61 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_34,
#line 61 "string_switch.m"
  MR_Word ll_backend__string_switch__CLD_20)
#line 61 "string_switch.m"
{
#line 224 "string_switch.m"
  {
#line 224 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseConsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 0)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__OutVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 1)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__OutTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 2)));
#line 224 "string_switch.m"
    MR_Word ll_backend__string_switch__Liveness_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__LookupSwitchInfo_13, (MR_Integer) 3)));

#line 233 "string_switch.m"
    if (((MR_tag((MR_Word) ll_backend__string_switch__CaseConsts_21)) == (MR_mktag((MR_Integer) 0))))
#line 228 "string_switch.m"
      {
#line 228 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValueMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
#line 228 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseValues_26;

#line 229 "string_switch.m"
        {
#line 229 "string_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__CaseValueMap_25, &ll_backend__string_switch__CaseValues_26);
        }
#line 230 "string_switch.m"
        {
#line 230 "string_switch.m"
          ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseValues_26, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
#line 230 "string_switch.m"
          return;
        }
#line 228 "string_switch.m"
      }
#line 233 "string_switch.m"
    else
#line 235 "string_switch.m"
      {
#line 235 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolnMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 0)));
#line 235 "string_switch.m"
        MR_Word ll_backend__string_switch__ResumeVars_28;
#line 235 "string_switch.m"
        MR_Word ll_backend__string_switch__GoalsMayModifyTrail_29;
#line 235 "string_switch.m"
        MR_Word ll_backend__string_switch__CaseSolns_30;
#line 235 "string_switch.m"
        MR_Word ll_backend__string_switch__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__string_switch__CaseConsts_21, (MR_Integer) 1)));

#line 235 "string_switch.m"
        ll_backend__string_switch__ResumeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_35_35, (MR_Integer) 0)));
#line 235 "string_switch.m"
        ll_backend__string_switch__GoalsMayModifyTrail_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_35_35, (MR_Integer) 1)));
#line 236 "string_switch.m"
        {
#line 236 "string_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__string_switch_scalar_common_1[3], ll_backend__string_switch__CaseSolnMap_27, &ll_backend__string_switch__CaseSolns_30);
        }
#line 237 "string_switch.m"
        {
#line 237 "string_switch.m"
          ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(ll_backend__string_switch__VarRval_12, ll_backend__string_switch__CaseSolns_30, ll_backend__string_switch__ResumeVars_28, ll_backend__string_switch__GoalsMayModifyTrail_29, ll_backend__string_switch__OutVars_22, ll_backend__string_switch__OutTypes_23, ll_backend__string_switch__Liveness_24, ll_backend__string_switch__CanFail_14, ll_backend__string_switch__EndLabel_15, ll_backend__string_switch__StoreMap_16, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_0_31, ll_backend__string_switch__STATE_VARIABLE_MaybeEnd_32, ll_backend__string_switch__Code_18, ll_backend__string_switch__STATE_VARIABLE_CI_0_33, ll_backend__string_switch__STATE_VARIABLE_CI_34, ll_backend__string_switch__CLD_20);
#line 237 "string_switch.m"
          return;
        }
#line 235 "string_switch.m"
      }
#line 224 "string_switch.m"
  }
#line 61 "string_switch.m"
}

#line 154 "string_switch.m"
static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0_1(
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

#line 56 "string_switch.m"
void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0(
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__Cases_13,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__VarRval_14,
#line 56 "string_switch.m"
  MR_String ll_backend__string_switch__VarName_15,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__CodeModel_16,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__CanFail_17,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__SwitchGoalInfo_18,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__EndLabel_19,
#line 56 "string_switch.m"
  MR_Word * ll_backend__string_switch__MaybeEnd_20,
#line 56 "string_switch.m"
  MR_Word * ll_backend__string_switch__Code_21,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_0_52,
#line 56 "string_switch.m"
  MR_Word * ll_backend__string_switch__STATE_VARIABLE_CI_53,
#line 56 "string_switch.m"
  MR_Word ll_backend__string_switch__CLD_23)
#line 56 "string_switch.m"
{
#line 102 "string_switch.m"
  {
#line 102 "string_switch.m"
    MR_bool ll_backend__string_switch__succeeded;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_115_115;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_116_116;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TypeCtorInfo_117_117;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSwitchInfo_24;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__BranchStart_25;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__Params_26;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CommentCode_27;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap0_28;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__StrsLabels_29;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CaseLabelMap_30;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__TableSize_31;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashSlotsMap_32;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashOp_33;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumCollisions_34;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__HashMask_35;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__FailLabel_36;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTableRows_37;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RevTargets_38;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableRows_39;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__Targets_40;
#line 102 "string_switch.m"
    MR_Integer ll_backend__string_switch__NumColumns_41;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__RowElemTypes_42;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemTypes_43;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddr_44;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__ArrayElemType_45;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__TableAddrRval_46;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__SlotReg_47;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__MatchCode_48;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__HashLookupCode_49;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__CasesCode_50;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__EndLabelCode_51;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_54_54;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__STATE_VARIABLE_CI_60_60;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_79_79;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_81_81;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_82_82;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_83_83;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_84_84;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_88_88;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_89_89;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_90_90;
#line 102 "string_switch.m"
    MR_Word ll_backend__string_switch__V_92_92;
#line 102 "string_switch.m"
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
#line 104 "string_switch.m"
    MR_Word ll_backend__string_switch__V_99_99;
#line 104 "string_switch.m"
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
#line 122 "string_switch.m"
    MR_Word ll_backend__string_switch__V_106_106;
#line 122 "string_switch.m"
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
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_113_113;
#line 142 "string_switch.m"
    MR_Word ll_backend__string_switch__V_114_114;
#line 154 "string_switch.m"
    MR_Box ll_backend__string_switch__conv1_CasesCode_50;

#line 103 "string_switch.m"
    {
#line 103 "string_switch.m"
      ll_backend__string_switch__init_string_hash_switch_info_5_p_0(ll_backend__string_switch__CanFail_17, &ll_backend__string_switch__HashSwitchInfo_24, ll_backend__string_switch__STATE_VARIABLE_CI_0_52, &ll_backend__string_switch__STATE_VARIABLE_CI_54_54, ll_backend__string_switch__CLD_23);
    }
#line 104 "string_switch.m"
    ll_backend__string_switch__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
#line 104 "string_switch.m"
    ll_backend__string_switch__BranchStart_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
#line 104 "string_switch.m"
    ll_backend__string_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
#line 105 "string_switch.m"
    {
#line 105 "string_switch.m"
      ll_backend__string_switch__Params_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 0) = ((MR_Box) (ll_backend__string_switch__VarName_15));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 1) = ((MR_Box) (ll_backend__string_switch__SwitchGoalInfo_18));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 2) = ((MR_Box) (ll_backend__string_switch__CodeModel_16));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 3) = ((MR_Box) (ll_backend__string_switch__BranchStart_25));
#line 105 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__Params_26, 4) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
#line 105 "string_switch.m"
    }
#line 10273 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_115_115 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 107 "string_switch.m"
    {
#line 107 "string_switch.m"
      ll_backend__string_switch__CommentCode_27 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ((MR_Box) (&ll_backend__string_switch_scalar_common_1[15])));
    }
#line 10280 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_116_116 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 10282 "ll_backend.string_switch.c"
    ll_backend__string_switch__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 112 "string_switch.m"
    {
#line 112 "string_switch.m"
      mercury__map__init_1_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__TypeCtorInfo_117_117, &ll_backend__string_switch__CaseLabelMap0_28);
    }
#line 113 "string_switch.m"
    {
#line 113 "string_switch.m"
      ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(ll_backend__string_switch__Params_26, ll_backend__string_switch__Cases_13, &ll_backend__string_switch__StrsLabels_29, ll_backend__string_switch__CaseLabelMap0_28, &ll_backend__string_switch__CaseLabelMap_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__string_switch__MaybeEnd_20, ll_backend__string_switch__STATE_VARIABLE_CI_54_54, &ll_backend__string_switch__STATE_VARIABLE_CI_60_60);
    }
#line 117 "string_switch.m"
    {
#line 117 "string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__StrsLabels_29, (MR_Integer) 1, &ll_backend__string_switch__TableSize_31, &ll_backend__string_switch__HashSlotsMap_32, &ll_backend__string_switch__HashOp_33, &ll_backend__string_switch__NumCollisions_34);
    }
#line 119 "string_switch.m"
    ll_backend__string_switch__HashMask_35 = (ll_backend__string_switch__TableSize_31 - (MR_Integer) 1);
#line 122 "string_switch.m"
    ll_backend__string_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
#line 122 "string_switch.m"
    ll_backend__string_switch__FailLabel_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
#line 122 "string_switch.m"
    ll_backend__string_switch__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
#line 123 "string_switch.m"
    {
#line 123 "string_switch.m"
      ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, ll_backend__string_switch__TableSize_31, ll_backend__string_switch__HashSlotsMap_32, ll_backend__string_switch__FailLabel_36, ll_backend__string_switch__NumCollisions_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTableRows_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__string_switch__RevTargets_38);
    }
#line 125 "string_switch.m"
    {
#line 125 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[0], ll_backend__string_switch__RevTableRows_37, &ll_backend__string_switch__TableRows_39);
    }
#line 126 "string_switch.m"
    {
#line 126 "string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__string_switch_scalar_common_1[1], ll_backend__string_switch__RevTargets_38, &ll_backend__string_switch__Targets_40);
    }
#line 129 "string_switch.m"
    ll_backend__string_switch__succeeded = (ll_backend__string_switch__NumCollisions_34 == (MR_Integer) 0);
#line 133 "string_switch.m"
    if (ll_backend__string_switch__succeeded)
#line 130 "string_switch.m"
      {
#line 130 "string_switch.m"
        ll_backend__string_switch__NumColumns_41 = (MR_Integer) 1;
#line 131 "string_switch.m"
        ll_backend__string_switch__RowElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[16]);
#line 132 "string_switch.m"
        ll_backend__string_switch__ArrayElemTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[17]);
#line 130 "string_switch.m"
      }
#line 133 "string_switch.m"
    else
#line 134 "string_switch.m"
      {
#line 134 "string_switch.m"
        ll_backend__string_switch__NumColumns_41 = (MR_Integer) 2;
#line 135 "string_switch.m"
        ll_backend__string_switch__RowElemTypes_42 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[12]);
#line 136 "string_switch.m"
        ll_backend__string_switch__ArrayElemTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__string_switch_scalar_common_1[14]);
#line 134 "string_switch.m"
      }
#line 138 "string_switch.m"
    {
#line 138 "string_switch.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__string_switch__RowElemTypes_42, ll_backend__string_switch__TableRows_39, &ll_backend__string_switch__TableAddr_44, ll_backend__string_switch__STATE_VARIABLE_CI_60_60, ll_backend__string_switch__STATE_VARIABLE_CI_53);
    }
#line 139 "string_switch.m"
    {
#line 139 "string_switch.m"
      ll_backend__string_switch__ArrayElemType_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__ArrayElemType_45, 0) = ((MR_Box) (ll_backend__string_switch__ArrayElemTypes_43));
#line 139 "string_switch.m"
    }
#line 140 "string_switch.m"
    {
#line 140 "string_switch.m"
      ll_backend__string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_79_79, 1) = ((MR_Box) (ll_backend__string_switch__TableAddr_44));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_79_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 140 "string_switch.m"
    }
#line 140 "string_switch.m"
    {
#line 140 "string_switch.m"
      ll_backend__string_switch__TableAddrRval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__TableAddrRval_46, 1) = ((MR_Box) (ll_backend__string_switch__V_79_79));
#line 140 "string_switch.m"
    }
#line 142 "string_switch.m"
    ll_backend__string_switch__SlotReg_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 0)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 1)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 2)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 3)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 4)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 5)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 6)));
#line 142 "string_switch.m"
    ll_backend__string_switch__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__string_switch__HashSwitchInfo_24, (MR_Integer) 7)));
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_84_84, 0) = ((MR_Box) (ll_backend__string_switch__SlotReg_47));
#line 145 "string_switch.m"
    }
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 1) = ((MR_Box) (ll_backend__string_switch__V_84_84));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_83_83, 2) = ((MR_Box) (ll_backend__string_switch__Targets_40));
#line 145 "string_switch.m"
    }
#line 145 "string_switch.m"
    {
#line 145 "string_switch.m"
      ll_backend__string_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_82_82, 0) = ((MR_Box) (ll_backend__string_switch__V_83_83));
#line 145 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_82_82, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
#line 145 "string_switch.m"
    }
#line 147 "string_switch.m"
    {
#line 147 "string_switch.m"
      ll_backend__string_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_81_81, 0) = ((MR_Box) (ll_backend__string_switch__V_82_82));
#line 147 "string_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__string_switch__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "string_switch.m"
    }
#line 143 "string_switch.m"
    {
#line 143 "string_switch.m"
      ll_backend__string_switch__MatchCode_48 = mercury__cord__from_list_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__V_81_81);
    }
#line 149 "string_switch.m"
    {
#line 149 "string_switch.m"
      ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(ll_backend__string_switch__HashSwitchInfo_24, ll_backend__string_switch__VarRval_14, ll_backend__string_switch__TableAddrRval_46, ll_backend__string_switch__ArrayElemType_45, ll_backend__string_switch__NumColumns_41, ll_backend__string_switch__HashOp_33, ll_backend__string_switch__HashMask_35, ll_backend__string_switch__NumCollisions_34, ll_backend__string_switch__MatchCode_48, &ll_backend__string_switch__HashLookupCode_49);
    }
#line 154 "string_switch.m"
    {
#line 154 "string_switch.m"
      ll_backend__string_switch__V_88_88 = mercury__cord__empty_0_f_0(ll_backend__string_switch__TypeCtorInfo_115_115);
    }
#line 154 "string_switch.m"
    {
#line 154 "string_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__string_switch__TypeCtorInfo_116_116, ll_backend__string_switch__TypeCtorInfo_117_117, (MR_Word) &ll_backend__string_switch_scalar_common_1[2], (MR_Word) &ll_backend__string_switch_scalar_common_2[5], ll_backend__string_switch__CaseLabelMap_30, ((MR_Box) (ll_backend__string_switch__V_88_88)), &ll_backend__string_switch__conv1_CasesCode_50);
    }
#line 154 "string_switch.m"
    ll_backend__string_switch__CasesCode_50 = ((MR_Word) ll_backend__string_switch__conv1_CasesCode_50);
#line 156 "string_switch.m"
    {
#line 156 "string_switch.m"
      ll_backend__string_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__string_switch__V_90_90, 1) = ((MR_Box) (ll_backend__string_switch__EndLabel_19));
#line 156 "string_switch.m"
    }
#line 156 "string_switch.m"
    {
#line 156 "string_switch.m"
      ll_backend__string_switch__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_89_89, 0) = ((MR_Box) (ll_backend__string_switch__V_90_90));
#line 156 "string_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__string_switch__V_89_89, 1) = ((MR_Box) ((MR_String) "end of hashed string switch"));
#line 156 "string_switch.m"
    }
#line 155 "string_switch.m"
    {
#line 155 "string_switch.m"
      ll_backend__string_switch__EndLabelCode_51 = mercury__cord__singleton_1_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ((MR_Box) (ll_backend__string_switch__V_89_89)));
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      ll_backend__string_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__CasesCode_50, ll_backend__string_switch__EndLabelCode_51);
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      ll_backend__string_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__HashLookupCode_49, ll_backend__string_switch__V_93_93);
    }
#line 159 "string_switch.m"
    {
#line 159 "string_switch.m"
      *ll_backend__string_switch__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__string_switch__TypeCtorInfo_115_115, ll_backend__string_switch__CommentCode_27, ll_backend__string_switch__V_92_92);
    }
#line 102 "string_switch.m"
  }
#line 56 "string_switch.m"
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
