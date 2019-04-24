/*
** Automatically generated from `ml_string_switch.m'
** by the Mercury compiler,
** version rotd-2019-04-24
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


// :- module ml_backend.ml_string_switch.
// :- implementation.

/*
INIT mercury__ml_backend__ml_string_switch__init
ENDINIT
*/

#include "ml_backend.ml_string_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.string_encoding.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_lookup_switch.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0[1];

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0[9];

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0[9];

static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_binary_search_info_0_0[9];

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0[1];

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0[9];

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0[9];

static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0[9];

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0[1];

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_0[3];

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_trie_node_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_1[3];

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_1[3];

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_trie_node_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_trie_node_0[2];

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_trie_node_0[2];

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2264__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2244__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__chase_one_cond_trie_nodes__715__1_2_p_0(
  MR_Integer NumMatched_14,
  MR_Integer HeadVar__2_34);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__611__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_23);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__662__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_84);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__517__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word LeafMatched_11);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__531__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word ChoiceMatched_19);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__392__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer CaseIdNum_33);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__342__1_2_p_0(
  MR_Integer AfterLastCaseNum_47,
  MR_Integer HeadVar__2_76);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__292__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer CaseIdNum_21);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__227__1_2_p_0(
  MR_Integer AfterLastCaseNum_39,
  MR_Integer HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1708__1_2_p_0(
  MR_Word CodeModel_14,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__1029__1_2_p_0(
  MR_Word CodeModel_14,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__191__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_37);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____trie_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____trie_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_string_switch__make_hash_match_1_f_0(
  MR_Integer Slot_3);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0(
  MR_Word CodeModel_11,
  MR_Word EntryPackedArgsMap_12,
  MR_Word TaggedCase_13,
  MR_Word * CaseId_14,
  MR_Word STATE_VARIABLE_CodeMap_0_21,
  MR_Word * STATE_VARIABLE_CodeMap_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseSolns0_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_4,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_5,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_7,
  MR_Integer STATE_VARIABLE_CurFirstSolnIndex_0_8,
  MR_Integer * STATE_VARIABLE_CurFirstSolnIndex_9,
  MR_Integer HeadVar__10_10);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseValues0_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_3,
  MR_Word * STATE_VARIABLE_RevRowInitializers_4,
  MR_Integer STATE_VARIABLE_CurIndex_0_5,
  MR_Integer * STATE_VARIABLE_CurIndex_6);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(
  MR_Word Context_13,
  MR_String InitialComment_14,
  MR_Word BinarySearchInfo_15,
  MR_Word VectorCommon_16,
  MR_Integer TableSize_17,
  MR_Word StructType_18,
  MR_Word StringFieldId_19,
  MR_Word MatchDefns_20,
  MR_Word MatchStmt_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word * STATE_VARIABLE_Info_75);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word Context_10,
  MR_Word VarRval_11,
  MR_Word * BinarySearchInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SwitchCases_0_2,
  MR_Word * STATE_VARIABLE_SwitchCases_3);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_3,
  MR_Word * STATE_VARIABLE_RevRowInitializers_4,
  MR_Integer STATE_VARIABLE_CurIndex_0_5,
  MR_Integer * STATE_VARIABLE_CurIndex_6);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseSolns_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_79,
  MR_Word * STATE_VARIABLE_Info_80);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0(
  MR_Integer Slot_13,
  MR_Integer TableSize_14,
  MR_Word HashSlotMap_15,
  MR_Word FirstSolnStructType_16,
  MR_Word LaterSolnStructType_17,
  MR_Word MaybeNextSlotId_18,
  MR_Word DummyOutInitializers_19,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_24,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_25,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_26,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_27,
  MR_Integer STATE_VARIABLE_CurLaterSolnIndex_0_28);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(
  MR_Integer Slot_12,
  MR_Word HashSlotMap_13,
  MR_Word FirstSolnStructType_14,
  MR_Word LaterSolnStructType_15,
  MR_Word MaybeNextSlotId_16,
  MR_Word DummyOutInitializers_17,
  MR_Word * FirstSolnsRowInitializer_18,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_35,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_36,
  MR_Integer STATE_VARIABLE_CurLaterSolnIndex_0_37,
  MR_Integer * STATE_VARIABLE_CurLaterSolnIndex_38);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseValues_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0(
  MR_Integer Slot_9,
  MR_Integer TableSize_10,
  MR_Word StructType_11,
  MR_Word HashSlotMap_12,
  MR_Word MaybeNextSlotId_13,
  MR_Word DummyOutInitializers_14,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_17,
  MR_Word * STATE_VARIABLE_RevRowInitializers_18);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0(
  MR_String InitialComment_14,
  MR_Word HashSearchInfo_15,
  MR_Word HashOp_16,
  MR_Word VectorCommon_17,
  MR_Word StructType_18,
  MR_Word StringFieldId_19,
  MR_Word MaybeNextSlotFieldId_20,
  MR_Integer HashMask_21,
  MR_Word MatchDefns_22,
  MR_Word MatchStmts_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(
  MR_Word CodeModel_13,
  MR_Word LoopPresent_14,
  MR_Word Context_15,
  MR_Word MaybeStopLoopVarLval_16,
  MR_Word MatchDefns_17,
  MR_Word MatchStmts_18,
  MR_Word FailStmts_19,
  MR_Word * SetupForFailStmts_20,
  MR_Word * BodyStmt_21,
  MR_Word * AfterStmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(
  MR_Word CodeModel_9,
  MR_Word CanFail_10,
  MR_Word LoopPresent_11,
  MR_Word Context_12,
  MR_Word VarRval_13,
  MR_Word * HashSearchInfo_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(
  MR_Word CodeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cases_0_3,
  MR_Word * STATE_VARIABLE_Cases_4);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0(
  MR_Integer Slot_10,
  MR_Integer TableSize_11,
  MR_Word HashSlotMap_12,
  MR_Word StructType_13,
  MR_Word MaybeNextSlotId_14,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_18,
  MR_Word * STATE_VARIABLE_RevRowInitializers_19,
  MR_Word STATE_VARIABLE_RevMap_0_20,
  MR_Word * STATE_VARIABLE_RevMap_21);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0(
  MR_Integer MaxCaseNum_14,
  MR_Word CaseNumVarLval_15,
  MR_Word CaseNumVarDefn_16,
  MR_Word InitCaseNumVarStmt_17,
  MR_Word GetCaseNumSwitchStmt_18,
  MR_Word CaseIdSolns_19,
  MR_Word OutVars_20,
  MR_Word OutTypes_21,
  MR_Word CanFail_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer * STATE_VARIABLE_CurCaseNum_5,
  MR_Integer HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_7,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_8,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_9,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_10);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0(
  MR_Integer MaxCaseNum_15,
  MR_Word CaseNumVarLval_16,
  MR_Word CaseNumVarDefn_17,
  MR_Word InitCaseNumVarStmt_18,
  MR_Word GetCaseNumSwitchStmt_19,
  MR_Word CaseIdValues_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word CodeModel_23,
  MR_Word CanFail_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_maybe_switch_failure_6_p_0(
  MR_Word CodeModel_7,
  MR_Word CanFail_8,
  MR_Word Context_9,
  MR_Word * FailStmts_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer * STATE_VARIABLE_CurCaseNum_4,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_5,
  MR_Word * STATE_VARIABLE_RevRowInitializers_6);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CodeMap_0_4,
  MR_Word * STATE_VARIABLE_CodeMap_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
  MR_Word TaggedConsId_3);

static void MR_CALL 
ml_backend__ml_string_switch__generate_trie_arms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSwitchCases_0_2,
  MR_Word * STATE_VARIABLE_RevSwitchCases_3);

static void MR_CALL 
ml_backend__ml_string_switch__create_nested_switch_trie_10_p_0(
  MR_Word TaggedCases_11,
  MR_Word Context_12,
  MR_Word VarRval_13,
  MR_Integer * MaxCaseNum_14,
  MR_Word * CaseNumVarLval_15,
  MR_Word * CaseNumVarDefn_16,
  MR_Word * InitCaseNumVarStmt_17,
  MR_Word * GetCaseNumSwitchStmt_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxCaseNum_0_2,
  MR_Integer * STATE_VARIABLE_MaxCaseNum_3,
  MR_Word STATE_VARIABLE_RevStrsCaseIds_0_4,
  MR_Word * STATE_VARIABLE_RevStrsCaseIds_5);

static void MR_CALL 
ml_backend__ml_string_switch__add_to_strs_case_ids_4_p_0(
  MR_Word CaseId_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_RevStrsCaseIds_0_11,
  MR_Word * STATE_VARIABLE_RevStrsCaseIds_12);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0(
  MR_Word Encoding_10,
  MR_Word VarRval_11,
  MR_Word CaseNumVarLval_12,
  MR_Word Context_13,
  MR_Integer NumMatched_14,
  MR_Word TrieNode_15,
  MR_Word RevCond0_16,
  MR_Word * RevCond_17,
  MR_Word * ThenStmt_18);

static void MR_CALL 
ml_backend__ml_string_switch__convert_trie_choices_to_nested_switches_8_p_0(
  MR_Word Encoding_1,
  MR_Word VarRval_2,
  MR_Word CaseNumVarLval_3,
  MR_Word Context_4,
  MR_Integer NumMatched_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_SwitchArmsCord_0_7,
  MR_Word * STATE_VARIABLE_SwitchArmsCord_8);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0(
  MR_Word Encoding_8,
  MR_Word VarRval_9,
  MR_Word CaseNumVarLval_10,
  MR_Word Context_11,
  MR_Integer NumMatched_12,
  MR_Word TrieNode_13,
  MR_Word * Stmt_14);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TrieNode_0_3,
  MR_Word * STATE_VARIABLE_TrieNode_4);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0(
  MR_Word InsertMatched_6,
  MR_Word InsertNotYetMatched_7,
  MR_Word InsertCaseId_8,
  MR_Word TrieNode0_9,
  MR_Word * TrieNode_10);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_string_switch____Compare____trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[31][2];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[25][3];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[9][5];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[18][1];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][7];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][6];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_7[1][13];




static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[0])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[2])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[4])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[7])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[17])))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[5])),
    ((MR_Box) (ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[18][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "we found a match; look up the results"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "break out of search loop"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "jump out of search loop"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "compute the hash value of the input string"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "lookup the string for this hash slot"))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "did we find a match\?"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "no collisions; no hash chain loop"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "no match yet, so get next slot in hash chain"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "hash chain loop"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "we found a match; dispatch to the corresponding code"))
  },
  /* row 16 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_7[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slot_rev_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slot_rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0 = {
  (MR_String) "hash_slots",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0
};

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0
};

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slots",
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0 },
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
};

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0[9] = {
  (MR_String) "mbsi_code_model",
  (MR_String) "mbsi_switch_var",
  (MR_String) "mbsi_lo_var",
  (MR_String) "mbsi_hi_var",
  (MR_String) "mbsi_mid_var",
  (MR_String) "mbsi_result_var",
  (MR_String) "mbsi_stop_loop_var",
  (MR_String) "mbsi_fail_statements",
  (MR_String) "mbsi_defns"
};

static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_binary_search_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0 = {
  (MR_String) "ml_binary_search_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_binary_search_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0
};

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_binary_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_binary_search_info",
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0 },
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
};

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0[9] = {
  (MR_String) "mhsi_code_model",
  (MR_String) "mhsi_loop_present",
  (MR_String) "mhsi_context",
  (MR_String) "mhsi_switch_var",
  (MR_String) "mhsi_slot_var",
  (MR_String) "mhsi_string_var",
  (MR_String) "mhsi_stop_loop_var",
  (MR_String) "mhsi_fail_statements",
  (MR_String) "mhsi_defns"
};

static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0 = {
  (MR_String) "ml_hash_search_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0
};

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_hash_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_hash_search_info",
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0 },
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
};

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_0[3] = {
  (MR_String) "leaf_matched",
  (MR_String) "leaf_unmatched",
  NULL
};

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_0 = {
  (MR_String) "trie_leaf",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_trie_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_1[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_trie_node_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0)
};

static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_1[3] = {
  (MR_String) "choice_matched",
  (MR_String) "choice_next_level",
  (MR_String) "choice_end"
};

static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_1 = {
  (MR_String) "trie_choice",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_trie_node_0_1,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_trie_node_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_1[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_1
};

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_trie_node_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_trie_node_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_trie_node_0[2] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_1,
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_trie_node_0_0
};

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_trie_node_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____trie_node_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____trie_node_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "trie_node",
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_trie_node_0 },
  {     ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_trie_node_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_trie_node_0
};

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2264__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), ((MR_Box) (FailStmts_19)), ((MR_Box) (HeadVar__2_49)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2244__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_53)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), ((MR_Box) (FailStmts_19)), ((MR_Box) (HeadVar__2_53)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__chase_one_cond_trie_nodes__715__1_2_p_0(
  MR_Integer NumMatched_14,
  MR_Integer HeadVar__2_34)
{
  {
    MR_bool succeeded = (HeadVar__2_34 == NumMatched_14);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__611__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_23)
{
  {
    MR_bool succeeded = (NumRevMatchedCodeUnits_23 == NumMatched_12);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__662__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_84)
{
  {
    MR_bool succeeded = (NumRevMatchedCodeUnits_84 == NumMatched_12);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__517__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word LeafMatched_11)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), ((MR_Box) (LeafMatched_11)), ((MR_Box) (InsertMatched_6)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__531__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word ChoiceMatched_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), ((MR_Box) (ChoiceMatched_19)), ((MR_Box) (InsertMatched_6)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__392__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer CaseIdNum_33)
{
  {
    MR_bool succeeded = (CaseIdNum_33 == STATE_VARIABLE_CurCaseNum_0_4);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__342__1_2_p_0(
  MR_Integer AfterLastCaseNum_47,
  MR_Integer HeadVar__2_76)
{
  {
    MR_bool succeeded = (HeadVar__2_76 == AfterLastCaseNum_47);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__292__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer CaseIdNum_21)
{
  {
    MR_bool succeeded = (CaseIdNum_21 == STATE_VARIABLE_CurCaseNum_0_3);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__227__1_2_p_0(
  MR_Integer AfterLastCaseNum_39,
  MR_Integer HeadVar__2_66)
{
  {
    MR_bool succeeded = (HeadVar__2_66 == AfterLastCaseNum_39);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1708__1_2_p_0(
  MR_Word CodeModel_14,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (CodeModel_14 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__1029__1_2_p_0(
  MR_Word CodeModel_14,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (CodeModel_14 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__191__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded = (CodeModel_13 == HeadVar__2_37);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____trie_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_32 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_33 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_32 == CastY_33);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_26;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), &SubResult1_26, ((MR_Box) (Var_42)), ((MR_Box) (ArgY1_25)));
        succeeded = (SubResult1_26 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_26;
        else
        {
          MR_Word SubResult2_29;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[5]), &SubResult2_29, ((MR_Box) (Var_41)), ((MR_Box) (ArgY2_28)));
          succeeded = (SubResult2_29 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_29;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Var_40)), ((MR_Box) (ArgY3_31)));
          }
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (Var_45)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (Var_44)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
          {
            MR_Integer Var_46 = (MR_Integer) (Var_43);
            MR_Integer Var_47 = (MR_Integer) (ArgY3_11);

            succeeded = (Var_46 < Var_47);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_46 > Var_47);
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

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____trie_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_12;
      MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_14;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_17_17 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
          }
        }
      }
    }
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;
      MR_Integer Var_23;
      MR_Integer Var_24;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_20_20 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            Var_23 = (MR_Integer) (ArgX3_7);
            Var_24 = (MR_Integer) (ArgY3_8);
            succeeded = (Var_23 == Var_24);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
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

          mercury__term____Compare____context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(
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
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_29_29 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
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
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
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

        ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(
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
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
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
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_30_30 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
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
ml_backend__ml_string_switch____Compare____hash_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_string_switch__make_hash_match_1_f_0(
  MR_Integer Slot_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Slot_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_5));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_String_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0(
  MR_Word CodeModel_11,
  MR_Word EntryPackedArgsMap_12,
  MR_Word TaggedCase_13,
  MR_Word * CaseId_14,
  MR_Word STATE_VARIABLE_CodeMap_0_21,
  MR_Word * STATE_VARIABLE_CodeMap_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word MainTaggedConsId_38;
    MR_Word OtherTaggedConsIds_39;
    MR_Word CaseId_40;
    MR_Word Goal_41;
    MR_Word GoalStmt_42;
    MR_String MainString_43;
    MR_Word OtherStrings_44;
    MR_String Strings_45;
    MR_String CommentString_46;
    MR_Word GoalInfo_48;
    MR_Word Context_49;
    MR_Word Comment_50;
    MR_Word CaseStmt_51;
    MR_Word STATE_VARIABLE_Info_31_52;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;

    *CaseId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_12, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_31_52);
    MainTaggedConsId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 0))));
    OtherTaggedConsIds_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 1))));
    CaseId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 2))));
    Goal_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 3))));
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_11, Goal_41, &GoalStmt_42, STATE_VARIABLE_Info_31_52, STATE_VARIABLE_Info_24);
    MainString_43 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(MainTaggedConsId_38);
    OtherStrings_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[24]), OtherTaggedConsIds_39);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MainString_43));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (OtherStrings_44));
    }
    Strings_45 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_56);
    CommentString_46 = mercury__string__f_43_43_2_f_0((MR_String) "case ", Strings_45);
    GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_41, (MR_Integer) 1))));
    Context_49 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_48);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CommentString_46));
    }
    {
      Comment_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Comment_50, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Comment_50, 1) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(3), Comment_50, 2) = ((MR_Box) (Context_49));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (GoalStmt_42));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Comment_50));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      CaseStmt_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CaseStmt_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), CaseStmt_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), CaseStmt_51, 2) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), CaseStmt_51, 3) = ((MR_Box) (Context_49));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (CaseId_40)), ((MR_Box) (CaseStmt_51)), STATE_VARIABLE_CodeMap_0_21, STATE_VARIABLE_CodeMap_22);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1708__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(
  MR_Word VarRval_11,
  MR_Word TaggedCases_12,
  MR_Word LookupSwitchInfo_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word CaseIdConsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 0))));
    MR_Word OutVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 1))));
    MR_Word OutTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) CaseIdConsts_20)) == (MR_Integer) 0))
    {
      MR_Word CaseIdValueMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdConsts_20, (MR_Integer) 0))));
      MR_Word StrValueMap_24;
      MR_Word StrValues_25;

      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[22]), TaggedCases_12, CaseIdValueMap_23, &StrValueMap_24);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), StrValueMap_24, &StrValues_25);
      ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_11_p_0(VarRval_11, StrValues_25, CodeModel_14, CanFail_15, OutVars_21, OutTypes_22, Context_16, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    }
    else
    {
      MR_Word CaseIdSolnMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseIdConsts_20, (MR_Integer) 0))));
      MR_Word StrSolnMap_28;
      MR_Word StrSolns_29;
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (CodeModel_14));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_lookup_switch\'/10", (MR_String) "CodeModel != model_non");
      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[23]), TaggedCases_12, CaseIdSolnMap_26, &StrSolnMap_28);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), StrSolnMap_28, &StrSolns_29);
      ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_11_p_0(VarRval_11, StrSolns_29, CodeModel_14, CanFail_15, OutVars_21, OutTypes_22, Context_16, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    }
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseSolns0_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_22;
    MR_Word ModuleName_23;
    MR_Word MLDS_ModuleName_24;
    MR_Word Target_25;
    MR_Word MLDS_IntType_27;
    MR_Word FirstSolnFieldTypes_28;
    MR_Word CaseSolns_30;
    MR_Word GlobalData0_31;
    MR_Word FirstSolnStructTypeNum_32;
    MR_Word FirstSolnStructType_33;
    MR_Word FirstSolnFieldIds_34;
    MR_Word GlobalData1_35;
    MR_Word LaterSolnStructTypeNum_36;
    MR_Word LaterSolnStructType_37;
    MR_Word LaterSolnOutFieldIds_38;
    MR_Word GlobalData2_39;
    MR_Word StringFieldId_44;
    MR_Word NumLaterSolnsFieldId_45;
    MR_Word FirstLaterSolnRowFieldId_46;
    MR_Word FirstSolnOutFieldIds_47;
    MR_Word RevFirstSolnRowInitializers_48;
    MR_Word LaterSolnRowInitializersCord_49;
    MR_Integer FirstSolnTableSize_50;
    MR_Word FirstSolnRowInitializers_51;
    MR_Word LaterSolnRowInitializers_52;
    MR_Word FirstSolnVectorCommon_53;
    MR_Word GlobalData3_54;
    MR_Word LaterSolnVectorCommon_55;
    MR_Word GlobalData_56;
    MR_Word BinarySearchInfo_57;
    MR_Word MidVarNameType_62;
    MR_Word MidVarName_66;
    MR_Word MidVarType_67;
    MR_Word MidVarLval_68;
    MR_Word MatchDefns_69;
    MR_Word SuccessStmts_70;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Info_89_89;
    MR_Word StringFieldIdPrime_40;
    MR_Word NumLaterSolnsFieldIdPrime_41;
    MR_Word FirstLaterSolnRowFieldIdPrime_42;
    MR_Word FirstSolnOutFieldIdsPrime_43;
    MR_Word Var_77;
    MR_Word Var_78;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_72, &ModuleInfo_22);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_22, &ModuleName_23);
    MLDS_ModuleName_24 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_23);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_72, &Target_25);
    MLDS_IntType_27 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MLDS_IntType_27));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (OutTypes_17));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MLDS_IntType_27));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      FirstSolnFieldTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_28, 1) = ((MR_Box) (Var_75));
    }
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[3]), CaseSolns0_13, &CaseSolns_30);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_72, &GlobalData0_31);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_24, Context_18, Target_25, FirstSolnFieldTypes_28, &FirstSolnStructTypeNum_32, &FirstSolnStructType_33, &FirstSolnFieldIds_34, GlobalData0_31, &GlobalData1_35);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_24, Context_18, Target_25, OutTypes_17, &LaterSolnStructTypeNum_36, &LaterSolnStructType_37, &LaterSolnOutFieldIds_38, GlobalData1_35, &GlobalData2_39);
    succeeded = (FirstSolnFieldIds_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      StringFieldIdPrime_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_34, (MR_Integer) 0))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_34, (MR_Integer) 1))));
      succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NumLaterSolnsFieldIdPrime_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 0))));
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 1))));
        succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FirstLaterSolnRowFieldIdPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0))));
          FirstSolnOutFieldIdsPrime_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      StringFieldId_44 = StringFieldIdPrime_40;
      NumLaterSolnsFieldId_45 = NumLaterSolnsFieldIdPrime_41;
      FirstLaterSolnRowFieldId_46 = FirstLaterSolnRowFieldIdPrime_42;
      FirstSolnOutFieldIds_47 = FirstSolnOutFieldIdsPrime_43;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    }
    Var_82 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(CaseSolns_30, FirstSolnStructType_33, LaterSolnStructType_37, (MR_Word) ((MR_Unsigned) 0U), &RevFirstSolnRowInitializers_48, Var_82, &LaterSolnRowInitializersCord_49, (MR_Integer) 0, &FirstSolnTableSize_50, (MR_Integer) 0);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevFirstSolnRowInitializers_48, &FirstSolnRowInitializers_51);
    LaterSolnRowInitializers_52 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializersCord_49);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_24, FirstSolnStructTypeNum_32, FirstSolnRowInitializers_51, &FirstSolnVectorCommon_53, GlobalData2_39, &GlobalData3_54);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_24, LaterSolnStructTypeNum_36, LaterSolnRowInitializers_52, &LaterSolnVectorCommon_55, GlobalData3_54, &GlobalData_56);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_56, STATE_VARIABLE_Info_0_72, &STATE_VARIABLE_Info_85_85);
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_14, CanFail_15, Context_18, VarRval_12, &BinarySearchInfo_57, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_86_86);
    MidVarNameType_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_57, (MR_Integer) 4))));
    *Defns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_57, (MR_Integer) 8))));
    MidVarName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_62, (MR_Integer) 0))));
    MidVarType_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_62, (MR_Integer) 1))));
    {
      MidVarLval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MidVarLval_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MidVarLval_68, 1) = ((MR_Box) (MidVarName_66));
      MR_hl_field(MR_mktag(3), MidVarLval_68, 2) = ((MR_Box) (MidVarType_67));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (MidVarLval_68));
    }
    ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_18, Var_87, OutVars_16, OutTypes_17, FirstSolnStructType_33, LaterSolnStructType_37, NumLaterSolnsFieldId_45, FirstLaterSolnRowFieldId_46, FirstSolnOutFieldIds_47, LaterSolnOutFieldIds_38, FirstSolnVectorCommon_53, LaterSolnVectorCommon_55, (MR_Integer) 1, &MatchDefns_69, &SuccessStmts_70, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_89_89);
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_18, (MR_String) "binary string several soln lookup switch", BinarySearchInfo_57, FirstSolnVectorCommon_53, FirstSolnTableSize_50, FirstSolnStructType_33, StringFieldId_44, MatchDefns_69, SuccessStmts_70, Stmts_20, STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Info_73);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_4,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_5,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_7,
  MR_Integer STATE_VARIABLE_CurFirstSolnIndex_0_8,
  MR_Integer * STATE_VARIABLE_CurFirstSolnIndex_9,
  MR_Integer HeadVar__10_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurFirstSolnIndex_9 = STATE_VARIABLE_CurFirstSolnIndex_0_8;
      *STATE_VARIABLE_LaterSolnRowInitializersCord_7 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
      *STATE_VARIABLE_RevFirstSolnRowInitializers_5 = STATE_VARIABLE_RevFirstSolnRowInitializers_0_4;
    }
    else
    {
      MR_String Str_23;
      MR_Word Solns_24;
      MR_Word StrSolns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word StrRval_32;
      MR_Word FirstSolnRowInitializer_36;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_48;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_56_56;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_58_58;
      MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_67_67;
      MR_Integer STATE_VARIABLE_CurFirstSolnIndex_68_68;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_4;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8;
      MR_Integer next_value_of_HeadVar__10_10;

      Str_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
      Solns_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Str_23));
      }
      {
        StrRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StrRval_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), StrRval_32, 1) = ((MR_Box) (Var_48));
      }
      if (((MR_tag((MR_Word) Solns_24)) == (MR_Integer) 0))
      {
        MR_Word FirstSolnRvals_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Solns_24, (MR_Integer) 0))));
        MR_Word NumLaterSolnsInitializer_34;
        MR_Word FirstLaterSlotInitializer_35;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;

        NumLaterSolnsInitializer_34 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
        FirstLaterSlotInitializer_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (StrRval_32));
        }
        Var_65 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[20]), FirstSolnRvals_33);
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (FirstLaterSlotInitializer_35));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (NumLaterSolnsInitializer_34));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
        }
        {
          FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_36, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_36, 1) = ((MR_Box) (Var_61));
        }
        STATE_VARIABLE_LaterSolnRowInitializersCord_56_56 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
        STATE_VARIABLE_CurLaterSolnIndex_58_58 = HeadVar__10_10;
      }
      else
      {
        MR_Word LaterSolns_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_24, (MR_Integer) 1))));
        MR_Integer NumLaterSolns_38;
        MR_Word LaterSolnRowInitializers_39;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word FirstSolnRvals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_24, (MR_Integer) 0))));
        MR_Word NumLaterSolnsInitializer_74;
        MR_Word FirstLaterSlotInitializer_75;

        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_37, &NumLaterSolns_38);
        NumLaterSolnsInitializer_74 = ml_backend__ml_util__gen_init_int_1_f_0(NumLaterSolns_38);
        FirstLaterSlotInitializer_75 = ml_backend__ml_util__gen_init_int_1_f_0(HeadVar__10_10);
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (StrRval_32));
        }
        Var_53 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[21]), FirstSolnRvals_73);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (FirstLaterSlotInitializer_75));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NumLaterSolnsInitializer_74));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
        }
        {
          FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_36, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_36, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (HeadVar__3_3));
        }
        LaterSolnRowInitializers_39 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_55, LaterSolns_37);
        Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_39);
        STATE_VARIABLE_LaterSolnRowInitializersCord_56_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_6, Var_57);
        STATE_VARIABLE_CurLaterSolnIndex_58_58 = (MR_Integer) ((MR_Unsigned) HeadVar__10_10 + (MR_Unsigned) NumLaterSolns_38);
      }
      {
        STATE_VARIABLE_RevFirstSolnRowInitializers_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_67_67, 0) = ((MR_Box) (FirstSolnRowInitializer_36));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_67_67, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_4));
      }
      STATE_VARIABLE_CurFirstSolnIndex_68_68 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurFirstSolnIndex_0_8 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrSolns_25;
      next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_4 = STATE_VARIABLE_RevFirstSolnRowInitializers_67_67;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6 = STATE_VARIABLE_LaterSolnRowInitializersCord_56_56;
      next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8 = STATE_VARIABLE_CurFirstSolnIndex_68_68;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_CurLaterSolnIndex_58_58;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevFirstSolnRowInitializers_0_4 = next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_4;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_6 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
      STATE_VARIABLE_CurFirstSolnIndex_0_8 = next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseValues0_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59)
{
  {
    MR_Word ModuleInfo_22;
    MR_Word ModuleName_23;
    MR_Word MLDS_ModuleName_24;
    MR_Word Target_25;
    MR_Word MLDS_StringType_26;
    MR_Word MLDS_ArgTypes_27;
    MR_Word CaseValues_28;
    MR_Word GlobalData0_29;
    MR_Word StructTypeNum_30;
    MR_Word StructType_31;
    MR_Word FieldIds_32;
    MR_Word GlobalData1_33;
    MR_Word StringFieldId_34;
    MR_Word OutFieldIds_35;
    MR_Word RevRowInitializers_36;
    MR_Integer TableSize_37;
    MR_Word RowInitializers_38;
    MR_Word VectorCommon_39;
    MR_Word GlobalData_40;
    MR_Word BinarySearchInfo_41;
    MR_Word MidVarNameType_46;
    MR_Word MidVarName_50;
    MR_Word MidVarType_51;
    MR_Word MidVarLval_52;
    MR_Word MidVarRval_53;
    MR_Word GetArgStmts_54;
    MR_Word MatchStmts_55;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_71_71;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_58, &ModuleInfo_22);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_22, &ModuleName_23);
    MLDS_ModuleName_24 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_23);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_58, &Target_25);
    Var_60 = parse_tree__builtin_lib_types__string_type_0_f_0();
    MLDS_StringType_26 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_22, Var_60);
    {
      MLDS_ArgTypes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MLDS_ArgTypes_27, 0) = ((MR_Box) (MLDS_StringType_26));
      MR_hl_field(MR_mktag(1), MLDS_ArgTypes_27, 1) = ((MR_Box) (OutTypes_17));
    }
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[2]), CaseValues0_13, &CaseValues_28);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_58, &GlobalData0_29);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_24, Context_18, Target_25, MLDS_ArgTypes_27, &StructTypeNum_30, &StructType_31, &FieldIds_32, GlobalData0_29, &GlobalData1_33);
    if ((FieldIds_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    }
    else
    {
      StringFieldId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_32, (MR_Integer) 0))));
      OutFieldIds_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_32, (MR_Integer) 1))));
    }
    ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(CaseValues_28, StructType_31, (MR_Word) ((MR_Unsigned) 0U), &RevRowInitializers_36, (MR_Integer) 0, &TableSize_37);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevRowInitializers_36, &RowInitializers_38);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_24, StructTypeNum_30, RowInitializers_38, &VectorCommon_39, GlobalData1_33, &GlobalData_40);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_40, STATE_VARIABLE_Info_0_58, &STATE_VARIABLE_Info_65_65);
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_14, CanFail_15, Context_18, VarRval_12, &BinarySearchInfo_41, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_66_66);
    MidVarNameType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_41, (MR_Integer) 4))));
    *Defns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_41, (MR_Integer) 8))));
    MidVarName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_46, (MR_Integer) 0))));
    MidVarType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_46, (MR_Integer) 1))));
    {
      MidVarLval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MidVarLval_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MidVarLval_52, 1) = ((MR_Box) (MidVarName_50));
      MR_hl_field(MR_mktag(3), MidVarLval_52, 2) = ((MR_Box) (MidVarType_51));
    }
    {
      MidVarRval_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MidVarRval_53, 0) = ((MR_Box) (MidVarLval_52));
    }
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_16, OutTypes_17, OutFieldIds_35, VectorCommon_39, StructType_31, MidVarRval_53, Context_18, &GetArgStmts_54, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_67_67);
    switch (CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MatchStmts_55 = GetArgStmts_54;
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_67_67;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/11", (MR_String) "model_non");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SetSuccessTrueStmt_56;
          MR_Word Var_73;

          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[15])), Context_18, &SetSuccessTrueStmt_56, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_71_71);
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SetSuccessTrueStmt_56));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MatchStmts_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), GetArgStmts_54, Var_73);
        }
        break;
    }
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_18, (MR_String) "binary string simple lookup switch", BinarySearchInfo_41, VectorCommon_39, TableSize_37, StructType_31, StringFieldId_34, (MR_Word) ((MR_Unsigned) 0U), MatchStmts_55, Stmts_20, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_59);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_3,
  MR_Word * STATE_VARIABLE_RevRowInitializers_4,
  MR_Integer STATE_VARIABLE_CurIndex_0_5,
  MR_Integer * STATE_VARIABLE_CurIndex_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurIndex_6 = STATE_VARIABLE_CurIndex_0_5;
      *STATE_VARIABLE_RevRowInitializers_4 = STATE_VARIABLE_RevRowInitializers_0_3;
    }
    else
    {
      MR_String Str_14;
      MR_Word Rvals_15;
      MR_Word StrRvals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word StrRval_20;
      MR_Word RowInitializer_21;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_RevRowInitializers_32_32;
      MR_Integer STATE_VARIABLE_CurIndex_33_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevRowInitializers_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_5;

      Str_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
      Rvals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Str_14));
      }
      {
        StrRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StrRval_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), StrRval_20, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (StrRval_20));
      }
      Var_30 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[19]), Rvals_15);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        RowInitializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RowInitializer_21, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(2), RowInitializer_21, 1) = ((MR_Box) (Var_28));
      }
      {
        STATE_VARIABLE_RevRowInitializers_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_32_32, 0) = ((MR_Box) (RowInitializer_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevRowInitializers_0_3));
      }
      STATE_VARIABLE_CurIndex_33_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_5 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrRvals_16;
      next_value_of_STATE_VARIABLE_RevRowInitializers_0_3 = STATE_VARIABLE_RevRowInitializers_32_32;
      next_value_of_STATE_VARIABLE_CurIndex_0_5 = STATE_VARIABLE_CurIndex_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevRowInitializers_0_3 = next_value_of_STATE_VARIABLE_RevRowInitializers_0_3;
      STATE_VARIABLE_CurIndex_0_5 = next_value_of_STATE_VARIABLE_CurIndex_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CaseId_14;
    MR_Word conv1_STATE_VARIABLE_CodeMap_22;
    MR_Word conv0_STATE_VARIABLE_Info_24;

    ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_CaseId_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CodeMap_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_24);
    *wrapper_arg_2 = ((MR_Box) (conv2_CaseId_14));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CodeMap_22));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0(
  MR_Word VarRval_11,
  MR_Word Cases_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word EntryPackedArgsMap_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68)
{
  {
    MR_Word BinarySearchInfo_20;
    MR_Word MidVarNameType_25;
    MR_Word MidVarName_29;
    MR_Word MidVarType_30;
    MR_Word MidVarLval_31;
    MR_Word ModuleInfo_32;
    MR_Word ModuleName_33;
    MR_Word MLDS_ModuleName_34;
    MR_Word Target_35;
    MR_Word GlobalData0_39;
    MR_Word StructTypeNum_40;
    MR_Word StructType_41;
    MR_Word FieldIds_42;
    MR_Word GlobalData1_43;
    MR_Word StringFieldId_44;
    MR_Word CaseNumFieldId_45;
    MR_Word CaseLabelMap0_51;
    MR_Word CaseLabelMap_52;
    MR_Word SortedTable_54;
    MR_Word RevRowInitializers_55;
    MR_Integer TableSize_56;
    MR_Word RowInitializers_57;
    MR_Word GlobalData2_58;
    MR_Word VectorCommon_59;
    MR_Word GlobalData_60;
    MR_Word CaseLabelList_61;
    MR_Word SwitchCases0_62;
    MR_Word SwitchCases_63;
    MR_Word SwitchStmt0_64;
    MR_Word SwitchStmt_65;
    MR_Word STATE_VARIABLE_Info_69_69;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_Info_82_82;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Integer Var_99;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_104;
    MR_Box conv5_CaseLabelMap_52;
    MR_Box conv4_STATE_VARIABLE_Info_82_82;
    MR_Box conv3_Var_53;

    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_13, CanFail_14, Context_16, VarRval_11, &BinarySearchInfo_20, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_69_69);
    MidVarNameType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_20, (MR_Integer) 4))));
    *Defns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_20, (MR_Integer) 8))));
    MidVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_25, (MR_Integer) 0))));
    MidVarType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_25, (MR_Integer) 1))));
    {
      MidVarLval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MidVarLval_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MidVarLval_31, 1) = ((MR_Box) (MidVarName_29));
      MR_hl_field(MR_mktag(3), MidVarLval_31, 2) = ((MR_Box) (MidVarType_30));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_69_69, &ModuleInfo_32);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_32, &ModuleName_33);
    MLDS_ModuleName_34 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_33);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_69_69, &Target_35);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_69_69, &GlobalData0_39);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_34, Context_16, Target_35, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_1[27])), &StructTypeNum_40, &StructType_41, &FieldIds_42, GlobalData0_39, &GlobalData1_43);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData1_43, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_73_73);
    if ((FieldIds_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
        return;
      }
    }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_42, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_42, (MR_Integer) 0))));

      if ((Var_128 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
      }
      else
      {
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 1))));
        MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 0))));

        if ((Var_130 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          StringFieldId_44 = Var_129;
          CaseNumFieldId_45 = Var_131;
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
            return;
          }
        }
      }
    }
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), &CaseLabelMap0_51);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (CodeModel_13));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (EntryPackedArgsMap_15));
    }
    backend_libs__switch_util__string_binary_cases_9_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Cases_12, Var_81, ((MR_Box) (CaseLabelMap0_51)), &conv5_CaseLabelMap_52, ((MR_Box) (STATE_VARIABLE_Info_73_73)), &conv4_STATE_VARIABLE_Info_82_82, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_53, &SortedTable_54);
    CaseLabelMap_52 = ((MR_Word) (conv5_CaseLabelMap_52));
    STATE_VARIABLE_Info_82_82 = ((MR_Word) (conv4_STATE_VARIABLE_Info_82_82));
    ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(SortedTable_54, StructType_41, (MR_Word) ((MR_Unsigned) 0U), &RevRowInitializers_55, (MR_Integer) 0, &TableSize_56);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevRowInitializers_55, &RowInitializers_57);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_82_82, &GlobalData2_58);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_34, StructTypeNum_40, RowInitializers_57, &VectorCommon_59, GlobalData2_58, &GlobalData_60);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_60, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_86_86);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CaseLabelMap_52, &CaseLabelList_61);
    ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(CaseLabelList_61, (MR_Word) ((MR_Unsigned) 0U), &SwitchCases0_62);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SwitchCases0_62, &SwitchCases_63);
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (MidVarLval_31));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (VectorCommon_59));
      MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) (Var_96));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[10])));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (StructType_41));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (CaseNumFieldId_45));
      MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) ((MR_Unsigned) 8U));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (Var_91));
    }
    Var_99 = (MR_Integer) ((MR_Unsigned) TableSize_56 - (MR_Unsigned) (MR_Integer) 1);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
    }
    {
      SwitchStmt0_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13])));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 3) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 4) = ((MR_Box) (SwitchCases_63));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_64, 6) = ((MR_Box) (Context_16));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_64, &SwitchStmt_65, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_102_102);
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SwitchStmt_65));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_16, (MR_String) "binary string jump switch", BinarySearchInfo_20, VectorCommon_59, TableSize_56, StructType_41, StringFieldId_44, (MR_Word) ((MR_Unsigned) 0U), Var_104, Stmts_18, STATE_VARIABLE_Info_102_102, STATE_VARIABLE_Info_68);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(
  MR_Word Context_13,
  MR_String InitialComment_14,
  MR_Word BinarySearchInfo_15,
  MR_Word VectorCommon_16,
  MR_Integer TableSize_17,
  MR_Word StructType_18,
  MR_Word StringFieldId_19,
  MR_Word MatchDefns_20,
  MR_Word MatchStmt_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word * STATE_VARIABLE_Info_75)
{
  {
    MR_Word CodeModel_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word VarRval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 1))));
    MR_Word LoVarNameType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 2))));
    MR_Word HiVarNameType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 3))));
    MR_Word MidVarNameType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 4))));
    MR_Word ResultVarNameType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 5))));
    MR_Word MaybeStopLoopVarNameType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 6))));
    MR_Word FailStmts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BinarySearchInfo_15, (MR_Integer) 7))));
    MR_Word LoVarName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LoVarNameType_26, (MR_Integer) 0))));
    MR_Word LoVarType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LoVarNameType_26, (MR_Integer) 1))));
    MR_Word LoVarLval_35;
    MR_Word LoVarRval_36;
    MR_Word HiVarName_37;
    MR_Word HiVarType_38;
    MR_Word HiVarLval_39;
    MR_Word HiVarRval_40;
    MR_Word MidVarName_41;
    MR_Word MidVarType_42;
    MR_Word MidVarLval_43;
    MR_Word MidVarRval_44;
    MR_Word ResultVarName_45;
    MR_Word ResultVarType_46;
    MR_Word ResultVarLval_47;
    MR_Word ResultVarRval_48;
    MR_Word SetupForFailStmts_55;
    MR_Word AfterStmts_57;
    MR_Word InitLoVarStmt_60;
    MR_Word InitHiVarStmt_61;
    MR_Word CrossingTest_62;
    MR_Word AssignMidVarStmt_63;
    MR_Word ResultTest_65;
    MR_Word UpdateLoOrHiVarStmt_66;
    MR_Word SearchStmts_69;
    MR_Word InitialCommentStmt_73;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Integer Var_87;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_115;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_126;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;

    {
      LoVarLval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LoVarLval_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), LoVarLval_35, 1) = ((MR_Box) (LoVarName_33));
      MR_hl_field(MR_mktag(3), LoVarLval_35, 2) = ((MR_Box) (LoVarType_34));
    }
    {
      LoVarRval_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LoVarRval_36, 0) = ((MR_Box) (LoVarLval_35));
    }
    HiVarName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HiVarNameType_27, (MR_Integer) 0))));
    HiVarType_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HiVarNameType_27, (MR_Integer) 1))));
    {
      HiVarLval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HiVarLval_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HiVarLval_39, 1) = ((MR_Box) (HiVarName_37));
      MR_hl_field(MR_mktag(3), HiVarLval_39, 2) = ((MR_Box) (HiVarType_38));
    }
    {
      HiVarRval_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HiVarRval_40, 0) = ((MR_Box) (HiVarLval_39));
    }
    MidVarName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_28, (MR_Integer) 0))));
    MidVarType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MidVarNameType_28, (MR_Integer) 1))));
    {
      MidVarLval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MidVarLval_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MidVarLval_43, 1) = ((MR_Box) (MidVarName_41));
      MR_hl_field(MR_mktag(3), MidVarLval_43, 2) = ((MR_Box) (MidVarType_42));
    }
    {
      MidVarRval_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MidVarRval_44, 0) = ((MR_Box) (MidVarLval_43));
    }
    ResultVarName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResultVarNameType_29, (MR_Integer) 0))));
    ResultVarType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResultVarNameType_29, (MR_Integer) 1))));
    {
      ResultVarLval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ResultVarLval_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ResultVarLval_47, 1) = ((MR_Box) (ResultVarName_45));
      MR_hl_field(MR_mktag(3), ResultVarLval_47, 2) = ((MR_Box) (ResultVarType_46));
    }
    {
      ResultVarRval_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ResultVarRval_48, 0) = ((MR_Box) (ResultVarLval_47));
    }
    Var_79 = parse_tree__builtin_lib_types__string_type_0_f_0();
    Var_81 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12]));
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (LoVarLval_35));
      MR_hl_field(MR_mktag(2), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      InitLoVarStmt_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitLoVarStmt_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), InitLoVarStmt_60, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(3), InitLoVarStmt_60, 2) = ((MR_Box) (Context_13));
    }
    Var_87 = (MR_Integer) ((MR_Unsigned) TableSize_17 - (MR_Unsigned) (MR_Integer) 1);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (HiVarLval_39));
      MR_hl_field(MR_mktag(2), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      InitHiVarStmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitHiVarStmt_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), InitHiVarStmt_61, 1) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(3), InitHiVarStmt_61, 2) = ((MR_Box) (Context_13));
    }
    {
      CrossingTest_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CrossingTest_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), CrossingTest_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[28])));
      MR_hl_field(MR_mktag(3), CrossingTest_62, 2) = ((MR_Box) (LoVarRval_36));
      MR_hl_field(MR_mktag(3), CrossingTest_62, 3) = ((MR_Box) (HiVarRval_40));
    }
    Var_96 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[16]));
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) (LoVarRval_36));
      MR_hl_field(MR_mktag(3), Var_95, 3) = ((MR_Box) (HiVarRval_40));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[29])));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[30])));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (MidVarLval_43));
      MR_hl_field(MR_mktag(2), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      AssignMidVarStmt_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AssignMidVarStmt_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), AssignMidVarStmt_63, 1) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(3), AssignMidVarStmt_63, 2) = ((MR_Box) (Context_13));
    }
    Var_106 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[10]));
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (VectorCommon_16));
      MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (MidVarRval_44));
    }
    Var_110 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11]));
    {
      ResultTest_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ResultTest_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), ResultTest_65, 1) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(3), ResultTest_65, 2) = ((MR_Box) (ResultVarRval_48));
      MR_hl_field(MR_mktag(3), ResultTest_65, 3) = ((MR_Box) (Var_81));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[16])));
      MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (ResultVarRval_48));
      MR_hl_field(MR_mktag(3), Var_115, 3) = ((MR_Box) (Var_81));
    }
    Var_126 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[21]));
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_4[16])));
      MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (MidVarRval_44));
      MR_hl_field(MR_mktag(3), Var_123, 3) = ((MR_Box) (Var_126));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (HiVarLval_39));
      MR_hl_field(MR_mktag(2), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(3), Var_132, 2) = ((MR_Box) (MidVarRval_44));
      MR_hl_field(MR_mktag(3), Var_132, 3) = ((MR_Box) (Var_126));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_131, 0) = ((MR_Box) (LoVarLval_35));
      MR_hl_field(MR_mktag(2), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(3), Var_130, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
    }
    {
      UpdateLoOrHiVarStmt_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UpdateLoOrHiVarStmt_66, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(2), UpdateLoOrHiVarStmt_66, 1) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(2), UpdateLoOrHiVarStmt_66, 2) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(2), UpdateLoOrHiVarStmt_66, 3) = ((MR_Box) (Context_13));
    }
    if ((MaybeStopLoopVarNameType_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SuccessStmt_56;
      MR_Word ModuleInfo_58;
      MR_Word MLDS_StringType_59;
      MR_Word AssignResultVarStmt_64;
      MR_Word LoHiMidResultMaybeStopVarNames_67;
      MR_Word LoopBodyStmts_68;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_176;

      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_24, (MR_Integer) 1, Context_13, (MR_Word) ((MR_Unsigned) 0U), MatchDefns_20, MatchStmt_21, FailStmts_31, &SetupForFailStmts_55, &SuccessStmt_56, &AfterStmts_57, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_75, &ModuleInfo_58);
      MLDS_StringType_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_58, Var_79);
      {
        Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) (StructType_18));
        MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (StringFieldId_19));
        MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) (MLDS_StringType_59));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_104, 0) = ((MR_Box) (Var_105));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(3), Var_102, 2) = ((MR_Box) (VarRval_25));
        MR_hl_field(MR_mktag(3), Var_102, 3) = ((MR_Box) (Var_104));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (ResultVarLval_47));
        MR_hl_field(MR_mktag(2), Var_101, 1) = ((MR_Box) (Var_102));
      }
      {
        AssignResultVarStmt_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_64, 1) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_64, 2) = ((MR_Box) (Context_13));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (ResultVarName_45));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (HiVarName_37));
        MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MidVarName_41));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_139));
      }
      {
        LoHiMidResultMaybeStopVarNames_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LoHiMidResultMaybeStopVarNames_67, 0) = ((MR_Box) (LoVarName_33));
        MR_hl_field(MR_mktag(1), LoHiMidResultMaybeStopVarNames_67, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (UpdateLoOrHiVarStmt_66));
      }
      {
        Var_169 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_169, 0) = ((MR_Box) (ResultTest_65));
        MR_hl_field(MR_mktag(2), Var_169, 1) = ((MR_Box) (SuccessStmt_56));
        MR_hl_field(MR_mktag(2), Var_169, 2) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(2), Var_169, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (AssignResultVarStmt_64));
        MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
      }
      {
        LoopBodyStmts_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LoopBodyStmts_68, 0) = ((MR_Box) (AssignMidVarStmt_63));
        MR_hl_field(MR_mktag(1), LoopBodyStmts_68, 1) = ((MR_Box) (Var_167));
      }
      {
        Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) (LoopBodyStmts_68));
        MR_hl_field(MR_mktag(0), Var_176, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_174, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (CrossingTest_62));
        MR_hl_field(MR_mktag(1), Var_174, 2) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(1), Var_174, 3) = ((MR_Box) (LoHiMidResultMaybeStopVarNames_67));
        MR_hl_field(MR_mktag(1), Var_174, 4) = ((MR_Box) (Context_13));
      }
      {
        Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (InitHiVarStmt_61));
        MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
      }
      {
        SearchStmts_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SearchStmts_69, 0) = ((MR_Box) (InitLoVarStmt_60));
        MR_hl_field(MR_mktag(1), SearchStmts_69, 1) = ((MR_Box) (Var_172));
      }
    }
    else
    {
      MR_Word StopLoopVarNameType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStopLoopVarNameType_30, (MR_Integer) 0))));
      MR_Word StopLoopVarName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StopLoopVarNameType_51, (MR_Integer) 0))));
      MR_Word StopLoopVarType_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StopLoopVarNameType_51, (MR_Integer) 1))));
      MR_Word StopLoopVarLval0_54;
      MR_Word InitStopLoopVarStmt_200;
      MR_Word StopLoopTest_201;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word Var_204;
      MR_Word Var_205;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_Word Var_209;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word Var_214;
      MR_Word Var_216;
      MR_Word LoopBodyStmts_220;
      MR_Word MaybeStopLoopVarLval_257;
      MR_Word StopLoopVarNameList_258;
      MR_Word SuccessStmt_259;
      MR_Word ModuleInfo_260;
      MR_Word MLDS_StringType_261;
      MR_Word AssignResultVarStmt_262;
      MR_Word LoHiMidResultMaybeStopVarNames_263;
      MR_Word Var_268;
      MR_Word Var_269;
      MR_Word Var_270;
      MR_Word Var_271;
      MR_Word Var_272;
      MR_Word Var_273;
      MR_Word Var_274;

      {
        StopLoopVarLval0_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_54, 1) = ((MR_Box) (StopLoopVarName_52));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_54, 2) = ((MR_Box) (StopLoopVarType_53));
      }
      {
        MaybeStopLoopVarLval_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeStopLoopVarLval_257, 0) = ((MR_Box) (StopLoopVarLval0_54));
      }
      {
        StopLoopVarNameList_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StopLoopVarNameList_258, 0) = ((MR_Box) (StopLoopVarName_52));
        MR_hl_field(MR_mktag(1), StopLoopVarNameList_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_24, (MR_Integer) 1, Context_13, MaybeStopLoopVarLval_257, MatchDefns_20, MatchStmt_21, FailStmts_31, &SetupForFailStmts_55, &SuccessStmt_259, &AfterStmts_57, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_75, &ModuleInfo_260);
      MLDS_StringType_261 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_260, Var_79);
      {
        Var_271 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_271, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), Var_271, 1) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), Var_271, 2) = ((MR_Box) (StructType_18));
        MR_hl_field(MR_mktag(0), Var_271, 3) = ((MR_Box) (StringFieldId_19));
        MR_hl_field(MR_mktag(0), Var_271, 4) = ((MR_Box) (MLDS_StringType_261));
      }
      {
        Var_270 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_270, 0) = ((MR_Box) (Var_271));
      }
      {
        Var_269 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_269, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_269, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(3), Var_269, 2) = ((MR_Box) (VarRval_25));
        MR_hl_field(MR_mktag(3), Var_269, 3) = ((MR_Box) (Var_270));
      }
      {
        Var_268 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_268, 0) = ((MR_Box) (ResultVarLval_47));
        MR_hl_field(MR_mktag(2), Var_268, 1) = ((MR_Box) (Var_269));
      }
      {
        AssignResultVarStmt_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_262, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_262, 1) = ((MR_Box) (Var_268));
        MR_hl_field(MR_mktag(3), AssignResultVarStmt_262, 2) = ((MR_Box) (Context_13));
      }
      {
        Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (ResultVarName_45));
        MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (StopLoopVarNameList_258));
      }
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (HiVarName_37));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_274));
      }
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (MidVarName_41));
        MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) (Var_273));
      }
      {
        LoHiMidResultMaybeStopVarNames_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LoHiMidResultMaybeStopVarNames_263, 0) = ((MR_Box) (LoVarName_33));
        MR_hl_field(MR_mktag(1), LoHiMidResultMaybeStopVarNames_263, 1) = ((MR_Box) (Var_272));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_202, 0) = ((MR_Box) (StopLoopVarLval0_54));
        MR_hl_field(MR_mktag(2), Var_202, 1) = ((MR_Box) (Var_81));
      }
      {
        InitStopLoopVarStmt_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_200, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_200, 1) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_200, 2) = ((MR_Box) (Context_13));
      }
      {
        Var_203 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_203, 0) = ((MR_Box) (StopLoopVarLval0_54));
      }
      {
        StopLoopTest_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StopLoopTest_201, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), StopLoopTest_201, 1) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(3), StopLoopTest_201, 2) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(3), StopLoopTest_201, 3) = ((MR_Box) (Var_81));
      }
      {
        Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (UpdateLoOrHiVarStmt_66));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_206, 0) = ((MR_Box) (ResultTest_65));
        MR_hl_field(MR_mktag(2), Var_206, 1) = ((MR_Box) (SuccessStmt_259));
        MR_hl_field(MR_mktag(2), Var_206, 2) = ((MR_Box) (Var_207));
        MR_hl_field(MR_mktag(2), Var_206, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Var_206));
        MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (AssignResultVarStmt_262));
        MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_205));
      }
      {
        LoopBodyStmts_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LoopBodyStmts_220, 0) = ((MR_Box) (AssignMidVarStmt_63));
        MR_hl_field(MR_mktag(1), LoopBodyStmts_220, 1) = ((MR_Box) (Var_204));
      }
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_214, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_214, 2) = ((MR_Box) (StopLoopTest_201));
        MR_hl_field(MR_mktag(3), Var_214, 3) = ((MR_Box) (CrossingTest_62));
      }
      {
        Var_216 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_216, 2) = ((MR_Box) (LoopBodyStmts_220));
        MR_hl_field(MR_mktag(0), Var_216, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_212, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
        MR_hl_field(MR_mktag(1), Var_212, 2) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(1), Var_212, 3) = ((MR_Box) (LoHiMidResultMaybeStopVarNames_263));
        MR_hl_field(MR_mktag(1), Var_212, 4) = ((MR_Box) (Context_13));
      }
      {
        Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Var_212));
        MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (InitStopLoopVarStmt_200));
        MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
      }
      {
        Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (InitHiVarStmt_61));
        MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
      }
      {
        SearchStmts_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SearchStmts_69, 0) = ((MR_Box) (InitLoVarStmt_60));
        MR_hl_field(MR_mktag(1), SearchStmts_69, 1) = ((MR_Box) (Var_209));
      }
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (InitialComment_14));
    }
    {
      InitialCommentStmt_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_73, 1) = ((MR_Box) (Var_180));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_73, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (InitialCommentStmt_73));
      MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (SetupForFailStmts_55));
    }
    Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), SearchStmts_69, AfterStmts_57);
    *Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_181, Var_182);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word Context_10,
  MR_Word VarRval_11,
  MR_Word * BinarySearchInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word ResultType_15 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    MR_Word LoVarName_18;
    MR_Word LoVarDefn_19;
    MR_Word LoVarNameType_20;
    MR_Word HiVarName_21;
    MR_Word HiVarDefn_22;
    MR_Word HiVarNameType_23;
    MR_Word MidVarName_24;
    MR_Word MidVarDefn_25;
    MR_Word MidVarNameType_26;
    MR_Word ResultVarName_27;
    MR_Word ResultVarDefn_28;
    MR_Word ResultVarNameType_29;
    MR_Word AlwaysDefns_30;
    MR_Word MaybeStopLoopNameType_31;
    MR_Word StopLoopVarDefns_32;
    MR_Word Defns_33;
    MR_Word FailStmts_34;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word ModuleInfo_63;
    MR_Word Globals_64;
    MR_Word SupportsGoto_65;
    MR_String Experiment_66;

    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 6, &LoVarName_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_40_40);
    LoVarDefn_19 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LoVarName_18, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
    {
      LoVarNameType_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LoVarNameType_20, 0) = ((MR_Box) (LoVarName_18));
      MR_hl_field(MR_mktag(0), LoVarNameType_20, 1) = ((MR_Box) (ResultType_15));
    }
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 8, &HiVarName_21, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42);
    HiVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(HiVarName_21, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
    {
      HiVarNameType_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HiVarNameType_23, 0) = ((MR_Box) (HiVarName_21));
      MR_hl_field(MR_mktag(0), HiVarNameType_23, 1) = ((MR_Box) (ResultType_15));
    }
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 7, &MidVarName_24, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_44_44);
    MidVarDefn_25 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(MidVarName_24, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
    {
      MidVarNameType_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MidVarNameType_26, 0) = ((MR_Box) (MidVarName_24));
      MR_hl_field(MR_mktag(0), MidVarNameType_26, 1) = ((MR_Box) (ResultType_15));
    }
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 10, &ResultVarName_27, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
    ResultVarDefn_28 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ResultVarName_27, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
    {
      ResultVarNameType_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ResultVarNameType_29, 0) = ((MR_Box) (ResultVarName_27));
      MR_hl_field(MR_mktag(0), ResultVarNameType_29, 1) = ((MR_Box) (ResultType_15));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ResultVarDefn_28));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MidVarDefn_25));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (HiVarDefn_22));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      AlwaysDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), AlwaysDefns_30, 0) = ((MR_Box) (LoVarDefn_19));
      MR_hl_field(MR_mktag(1), AlwaysDefns_30, 1) = ((MR_Box) (Var_47));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_46_46, &ModuleInfo_63);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_63, &Globals_64);
    SupportsGoto_65 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(Globals_64);
    libs__globals__lookup_string_option_3_p_0(Globals_64, (MR_Integer) 691, &Experiment_66);
    switch (SupportsGoto_65) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StopLoopVarName_69;
          MR_Word StopLoopVarDefn_70;
          MR_Word StopLoopVarNameType_71;

          ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_69, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_52_52);
          StopLoopVarDefn_70 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_69, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
          {
            StopLoopVarNameType_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StopLoopVarNameType_71, 0) = ((MR_Box) (StopLoopVarName_69));
            MR_hl_field(MR_mktag(0), StopLoopVarNameType_71, 1) = ((MR_Box) (ResultType_15));
          }
          {
            MaybeStopLoopNameType_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeStopLoopNameType_31, 0) = ((MR_Box) (StopLoopVarNameType_71));
          }
          {
            StopLoopVarDefns_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StopLoopVarDefns_32, 0) = ((MR_Box) (StopLoopVarDefn_70));
            MR_hl_field(MR_mktag(1), StopLoopVarDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = (strcmp(Experiment_66, (MR_String) "use_stop_loop") == 0);
          if (succeeded)
          {
            MR_Word StopLoopVarName_86;
            MR_Word StopLoopVarDefn_87;
            MR_Word StopLoopVarNameType_88;

            ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_86, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_52_52);
            StopLoopVarDefn_87 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_86, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
            {
              StopLoopVarNameType_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StopLoopVarNameType_88, 0) = ((MR_Box) (StopLoopVarName_86));
              MR_hl_field(MR_mktag(0), StopLoopVarNameType_88, 1) = ((MR_Box) (ResultType_15));
            }
            {
              MaybeStopLoopNameType_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeStopLoopNameType_31, 0) = ((MR_Box) (StopLoopVarNameType_88));
            }
            {
              StopLoopVarDefns_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StopLoopVarDefns_32, 0) = ((MR_Box) (StopLoopVarDefn_87));
              MR_hl_field(MR_mktag(1), StopLoopVarDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MaybeStopLoopNameType_31 = (MR_Word) ((MR_Unsigned) 0U);
            StopLoopVarDefns_32 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_52_52 = STATE_VARIABLE_Info_46_46;
          }
        }
        break;
    }
    Defns_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), AlwaysDefns_30, StopLoopVarDefns_32);
    switch (CanFail_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_8, Context_10, &FailStmts_34, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_36);
        break;
      case (MR_Integer) 1:
        {
          FailStmts_34 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_52_52;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *BinarySearchInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (CodeModel_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarRval_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LoVarNameType_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HiVarNameType_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MidVarNameType_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ResultVarNameType_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeStopLoopNameType_31));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FailStmts_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Defns_33));
    }
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SwitchCases_0_2,
  MR_Word * STATE_VARIABLE_SwitchCases_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SwitchCases_3 = STATE_VARIABLE_SwitchCases_0_2;
    else
    {
      MR_Word CaseIdStmt_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CaseIdsStmts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CaseId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdStmt_7, (MR_Integer) 0))));
      MR_Word Stmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdStmt_7, (MR_Integer) 1))));
      MR_Integer CaseNum_12 = (MR_Integer) (CaseId_10);
      MR_Word MatchCond_13;
      MR_Word SwitchCase_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_SwitchCases_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SwitchCases_0_2;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (CaseNum_12));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MatchCond_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MatchCond_13, 0) = ((MR_Box) (Var_17));
      }
      {
        SwitchCase_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SwitchCase_14, 0) = ((MR_Box) (MatchCond_13));
        MR_hl_field(MR_mktag(0), SwitchCase_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SwitchCase_14, 2) = ((MR_Box) (Stmt_11));
      }
      {
        STATE_VARIABLE_SwitchCases_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_SwitchCases_20_20, 0) = ((MR_Box) (SwitchCase_14));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_SwitchCases_20_20, 1) = ((MR_Box) (STATE_VARIABLE_SwitchCases_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CaseIdsStmts_8;
      next_value_of_STATE_VARIABLE_SwitchCases_0_2 = STATE_VARIABLE_SwitchCases_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SwitchCases_0_2 = next_value_of_STATE_VARIABLE_SwitchCases_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_3,
  MR_Word * STATE_VARIABLE_RevRowInitializers_4,
  MR_Integer STATE_VARIABLE_CurIndex_0_5,
  MR_Integer * STATE_VARIABLE_CurIndex_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurIndex_6 = STATE_VARIABLE_CurIndex_0_5;
      *STATE_VARIABLE_RevRowInitializers_4 = STATE_VARIABLE_RevRowInitializers_0_3;
    }
    else
    {
      MR_String Str_14;
      MR_Word CaseId_15;
      MR_Word StrCaseIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer CaseNum_20;
      MR_Word StrRval_21;
      MR_Word CaseNumRval_22;
      MR_Word RowInitializer_23;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_RevRowInitializers_36_36;
      MR_Integer STATE_VARIABLE_CurIndex_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevRowInitializers_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_5;

      Str_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
      CaseId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
      CaseNum_20 = (MR_Integer) (CaseId_15);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Str_14));
      }
      {
        StrRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StrRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), StrRval_21, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (CaseNum_20));
      }
      {
        CaseNumRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CaseNumRval_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), CaseNumRval_22, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (StrRval_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (CaseNumRval_22));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        RowInitializer_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RowInitializer_23, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(2), RowInitializer_23, 1) = ((MR_Box) (Var_31));
      }
      {
        STATE_VARIABLE_RevRowInitializers_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_36_36, 0) = ((MR_Box) (RowInitializer_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevRowInitializers_0_3));
      }
      STATE_VARIABLE_CurIndex_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_5 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrCaseIds_16;
      next_value_of_STATE_VARIABLE_RevRowInitializers_0_3 = STATE_VARIABLE_RevRowInitializers_36_36;
      next_value_of_STATE_VARIABLE_CurIndex_0_5 = STATE_VARIABLE_CurIndex_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevRowInitializers_0_3 = next_value_of_STATE_VARIABLE_RevRowInitializers_0_3;
      STATE_VARIABLE_CurIndex_0_5 = next_value_of_STATE_VARIABLE_CurIndex_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__1029__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(
  MR_Word VarRval_11,
  MR_Word TaggedCases_12,
  MR_Word LookupSwitchInfo_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word CaseIdConsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 0))));
    MR_Word OutVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 1))));
    MR_Word OutTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_13, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) CaseIdConsts_20)) == (MR_Integer) 0))
    {
      MR_Word CaseIdValueMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdConsts_20, (MR_Integer) 0))));
      MR_Word StrValueMap_24;
      MR_Word StrValues_25;

      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[17]), TaggedCases_12, CaseIdValueMap_23, &StrValueMap_24);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), StrValueMap_24, &StrValues_25);
      ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(VarRval_11, StrValues_25, CodeModel_14, CanFail_15, OutVars_21, OutTypes_22, Context_16, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    }
    else
    {
      MR_Word CaseIdSolnMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseIdConsts_20, (MR_Integer) 0))));
      MR_Word StrSolnMap_28;
      MR_Word StrSolns_29;
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (CodeModel_14));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_lookup_switch\'/10", (MR_String) "CodeModel != model_non");
      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[18]), TaggedCases_12, CaseIdSolnMap_26, &StrSolnMap_28);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), StrSolnMap_28, &StrSolns_29);
      ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(VarRval_11, StrSolns_29, CodeModel_14, CanFail_15, OutVars_21, OutTypes_22, Context_16, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseSolns_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_79,
  MR_Word * STATE_VARIABLE_Info_80)
{
  {
    MR_bool succeeded;
    MR_Integer TableSize_22;
    MR_Word HashSlotMap_23;
    MR_Word HashOp_24;
    MR_Integer NumCollisions_25;
    MR_Integer HashMask_26;
    MR_Word ModuleInfo_27;
    MR_Word ModuleName_28;
    MR_Word MLDS_ModuleName_29;
    MR_Word Target_30;
    MR_Word MLDS_IntType_32;
    MR_Word FirstSolnFieldTypes_33;
    MR_Word LoopPresent_34;
    MR_Word HashSearchInfo_35;
    MR_Word SlotVarNameType_40;
    MR_Word SlotVarName_44;
    MR_Word SlotVarType_45;
    MR_Word SlotVarLval_46;
    MR_Word GlobalData0_47;
    MR_Word FirstSolnStructTypeNum_48;
    MR_Word FirstSolnStructType_49;
    MR_Word FirstSolnFieldIds_50;
    MR_Word GlobalData1_51;
    MR_Word LaterSolnStructTypeNum_52;
    MR_Word LaterSolnStructType_53;
    MR_Word LaterSolnOutFieldIds_54;
    MR_Word GlobalData2_55;
    MR_Word StringFieldId_60;
    MR_Word NumLaterSolnsFieldId_61;
    MR_Word FirstLaterSolnRowFieldId_62;
    MR_Word FirstSolnOutFieldIds_63;
    MR_Word MaybeNextSlotFieldId_64;
    MR_Word DummyOutRvals_66;
    MR_Word DummyOutInitializers_67;
    MR_Word RevFirstSolnRowInitializers_68;
    MR_Word LaterSolnRowInitializersCord_69;
    MR_Word FirstSolnRowInitializers_70;
    MR_Word LaterSolnRowInitializers_71;
    MR_Word FirstSolnVectorCommon_72;
    MR_Word GlobalData3_73;
    MR_Word LaterSolnVectorCommon_74;
    MR_Word GlobalData_75;
    MR_Word MatchDefns_76;
    MR_Word SuccessStmts_77;
    MR_Word STATE_VARIABLE_Info_89_89;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_Info_105_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_Info_108_108;

    backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), CaseSolns_13, (MR_Integer) 1, &TableSize_22, &HashSlotMap_23, &HashOp_24, &NumCollisions_25);
    HashMask_26 = (MR_Integer) ((MR_Unsigned) TableSize_22 - (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_79, &ModuleInfo_27);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_28);
    MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_79, &Target_30);
    MLDS_IntType_32 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    succeeded = (NumCollisions_25 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_84;
      MR_Word Var_85;

      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MLDS_IntType_32));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (OutTypes_17));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MLDS_IntType_32));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
      }
      {
        FirstSolnFieldTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_33, 1) = ((MR_Box) (Var_84));
      }
      LoopPresent_34 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MLDS_IntType_32));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (OutTypes_17));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MLDS_IntType_32));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MLDS_IntType_32));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
      }
      {
        FirstSolnFieldTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_33, 1) = ((MR_Box) (Var_86));
      }
      LoopPresent_34 = (MR_Integer) 1;
    }
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_14, CanFail_15, LoopPresent_34, Context_18, VarRval_12, &HashSearchInfo_35, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_89_89);
    SlotVarNameType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_35, (MR_Integer) 3))));
    *Defns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_35, (MR_Integer) 7))));
    SlotVarName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_40, (MR_Integer) 0))));
    SlotVarType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_40, (MR_Integer) 1))));
    {
      SlotVarLval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 1) = ((MR_Box) (SlotVarName_44));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 2) = ((MR_Box) (SlotVarType_45));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_89_89, &GlobalData0_47);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_29, Context_18, Target_30, FirstSolnFieldTypes_33, &FirstSolnStructTypeNum_48, &FirstSolnStructType_49, &FirstSolnFieldIds_50, GlobalData0_47, &GlobalData1_51);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_29, Context_18, Target_30, OutTypes_17, &LaterSolnStructTypeNum_52, &LaterSolnStructType_53, &LaterSolnOutFieldIds_54, GlobalData1_51, &GlobalData2_55);
    succeeded = (NumCollisions_25 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word StringFieldIdPrime_56;
      MR_Word NumLaterSolnsFieldIdPrime_57;
      MR_Word FirstLaterSolnRowFieldIdPrime_58;
      MR_Word FirstSolnOutFieldIdsPrime_59;
      MR_Word Var_90;
      MR_Word Var_91;

      succeeded = (FirstSolnFieldIds_50 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        StringFieldIdPrime_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_50, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_50, (MR_Integer) 1))));
        succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NumLaterSolnsFieldIdPrime_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
          Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
          succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FirstLaterSolnRowFieldIdPrime_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
            FirstSolnOutFieldIdsPrime_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        StringFieldId_60 = StringFieldIdPrime_56;
        NumLaterSolnsFieldId_61 = NumLaterSolnsFieldIdPrime_57;
        FirstLaterSolnRowFieldId_62 = FirstLaterSolnRowFieldIdPrime_58;
        FirstSolnOutFieldIds_63 = FirstSolnOutFieldIdsPrime_59;
        MaybeNextSlotFieldId_64 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
          return;
        }
      }
    }
    else
    {
      MR_Word NextSlotFieldIdPrime_65;
      MR_Word StringFieldIdPrime_110;
      MR_Word NumLaterSolnsFieldIdPrime_111;
      MR_Word FirstLaterSolnRowFieldIdPrime_112;
      MR_Word FirstSolnOutFieldIdsPrime_113;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;

      succeeded = (FirstSolnFieldIds_50 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        StringFieldIdPrime_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_50, (MR_Integer) 0))));
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_50, (MR_Integer) 1))));
        succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NextSlotFieldIdPrime_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1))));
          succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NumLaterSolnsFieldIdPrime_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
            Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
            succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FirstLaterSolnRowFieldIdPrime_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_96, (MR_Integer) 0))));
              FirstSolnOutFieldIdsPrime_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_96, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        StringFieldId_60 = StringFieldIdPrime_110;
        NumLaterSolnsFieldId_61 = NumLaterSolnsFieldIdPrime_111;
        FirstLaterSolnRowFieldId_62 = FirstLaterSolnRowFieldIdPrime_112;
        FirstSolnOutFieldIds_63 = FirstSolnOutFieldIdsPrime_113;
        {
          MaybeNextSlotFieldId_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeNextSlotFieldId_64, 0) = ((MR_Box) (NextSlotFieldIdPrime_65));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
          return;
        }
      }
    }
    DummyOutRvals_66 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[15]), OutTypes_17);
    DummyOutInitializers_67 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[16]), DummyOutRvals_66);
    Var_103 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0((MR_Integer) 0, TableSize_22, HashSlotMap_23, FirstSolnStructType_49, LaterSolnStructType_53, MaybeNextSlotFieldId_64, DummyOutInitializers_67, (MR_Word) ((MR_Unsigned) 0U), &RevFirstSolnRowInitializers_68, Var_103, &LaterSolnRowInitializersCord_69, (MR_Integer) 0);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevFirstSolnRowInitializers_68, &FirstSolnRowInitializers_70);
    LaterSolnRowInitializers_71 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializersCord_69);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, FirstSolnStructTypeNum_48, FirstSolnRowInitializers_70, &FirstSolnVectorCommon_72, GlobalData2_55, &GlobalData3_73);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, LaterSolnStructTypeNum_52, LaterSolnRowInitializers_71, &LaterSolnVectorCommon_74, GlobalData3_73, &GlobalData_75);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_75, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_105_105);
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (SlotVarLval_46));
    }
    ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_18, Var_106, OutVars_16, OutTypes_17, FirstSolnStructType_49, LaterSolnStructType_53, NumLaterSolnsFieldId_61, FirstLaterSolnRowFieldId_62, FirstSolnOutFieldIds_63, LaterSolnOutFieldIds_54, FirstSolnVectorCommon_72, LaterSolnVectorCommon_74, (MR_Integer) 1, &MatchDefns_76, &SuccessStmts_77, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_108_108);
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string several_soln lookup switch", HashSearchInfo_35, HashOp_24, FirstSolnVectorCommon_72, FirstSolnStructType_49, StringFieldId_60, MaybeNextSlotFieldId_64, HashMask_26, MatchDefns_76, SuccessStmts_77, Stmts_20, STATE_VARIABLE_Info_108_108, STATE_VARIABLE_Info_80);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0(
  MR_Integer Slot_13,
  MR_Integer TableSize_14,
  MR_Word HashSlotMap_15,
  MR_Word FirstSolnStructType_16,
  MR_Word LaterSolnStructType_17,
  MR_Word MaybeNextSlotId_18,
  MR_Word DummyOutInitializers_19,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_24,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_25,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_26,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_27,
  MR_Integer STATE_VARIABLE_CurLaterSolnIndex_0_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_13 == TableSize_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_LaterSolnRowInitializersCord_27 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      *STATE_VARIABLE_RevFirstSolnRowInitializers_25 = STATE_VARIABLE_RevFirstSolnRowInitializers_0_24;
    }
    else
    {
      MR_Word FirstSolnsRowInitializer_23;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_29_29;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_30_30;
      MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_31_31;
      MR_Integer Var_32;
      MR_Integer next_value_of_Slot_13;
      MR_Word next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_24;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      MR_Integer next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28;

      ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(Slot_13, HashSlotMap_15, FirstSolnStructType_16, LaterSolnStructType_17, MaybeNextSlotId_18, DummyOutInitializers_19, &FirstSolnsRowInitializer_23, STATE_VARIABLE_LaterSolnRowInitializersCord_0_26, &STATE_VARIABLE_LaterSolnRowInitializersCord_29_29, STATE_VARIABLE_CurLaterSolnIndex_0_28, &STATE_VARIABLE_CurLaterSolnIndex_30_30);
      {
        STATE_VARIABLE_RevFirstSolnRowInitializers_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_31_31, 0) = ((MR_Box) (FirstSolnsRowInitializer_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_24));
      }
      Var_32 = (MR_Integer) ((MR_Unsigned) Slot_13 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_13 = Var_32;
      next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_24 = STATE_VARIABLE_RevFirstSolnRowInitializers_31_31;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26 = STATE_VARIABLE_LaterSolnRowInitializersCord_29_29;
      next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28 = STATE_VARIABLE_CurLaterSolnIndex_30_30;
      Slot_13 = next_value_of_Slot_13;
      STATE_VARIABLE_RevFirstSolnRowInitializers_0_24 = next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_24;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_26 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      STATE_VARIABLE_CurLaterSolnIndex_0_28 = next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    conv3_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(
  MR_Integer Slot_12,
  MR_Word HashSlotMap_13,
  MR_Word FirstSolnStructType_14,
  MR_Word LaterSolnStructType_15,
  MR_Word MaybeNextSlotId_16,
  MR_Word DummyOutInitializers_17,
  MR_Word * FirstSolnsRowInitializer_18,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_35,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_36,
  MR_Integer STATE_VARIABLE_CurLaterSolnIndex_0_37,
  MR_Integer * STATE_VARIABLE_CurLaterSolnIndex_38)
{
  {
    MR_bool succeeded;
    MR_Word StringRval_25;
    MR_Word NextSlotRval_26;
    MR_Word NumLaterSolnsRval_28;
    MR_Word FirstLaterSlotRval_29;
    MR_Word FirstSolnOutInitializers_30;
    MR_Word HashSlotMapEntry_21;
    MR_Box conv0_HashSlotMapEntry_21;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[6]), HashSlotMap_13, Slot_12, &conv0_HashSlotMapEntry_21);
    if (succeeded)
    {
      HashSlotMapEntry_21 = ((MR_Word) (conv0_HashSlotMapEntry_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String String_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_21, (MR_Integer) 0))));
      MR_Integer Next_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_21, (MR_Integer) 1))));
      MR_Word Solns_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_21, (MR_Integer) 2))));
      MR_Word Var_39;
      MR_Word Var_40;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (String_22));
      }
      {
        StringRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StringRval_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), StringRval_25, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Next_23));
      }
      {
        NextSlotRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NextSlotRval_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), NextSlotRval_26, 1) = ((MR_Box) (Var_40));
      }
      if (((MR_tag((MR_Word) Solns_24)) == (MR_Integer) 0))
      {
        MR_Word FirstSolnRvals_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Solns_24, (MR_Integer) 0))));

        NumLaterSolnsRval_28 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12]));
        FirstLaterSlotRval_29 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[14]));
        FirstSolnOutInitializers_30 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[13]), FirstSolnRvals_27);
        *STATE_VARIABLE_LaterSolnRowInitializersCord_36 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_35;
        *STATE_VARIABLE_CurLaterSolnIndex_38 = STATE_VARIABLE_CurLaterSolnIndex_0_37;
      }
      else
      {
        MR_Word LaterSolns_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_24, (MR_Integer) 1))));
        MR_Integer NumLaterSolns_32;
        MR_Word LaterSolnRowInitializers_33;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word FirstSolnRvals_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_24, (MR_Integer) 0))));

        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_31, &NumLaterSolns_32);
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (NumLaterSolns_32));
        }
        {
          NumLaterSolnsRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NumLaterSolnsRval_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), NumLaterSolnsRval_28, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (STATE_VARIABLE_CurLaterSolnIndex_0_37));
        }
        {
          FirstLaterSlotRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), FirstLaterSlotRval_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), FirstLaterSlotRval_29, 1) = ((MR_Box) (Var_42));
        }
        FirstSolnOutInitializers_30 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[14]), FirstSolnRvals_75);
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3));
          MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (LaterSolnStructType_15));
        }
        LaterSolnRowInitializers_33 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_44, LaterSolns_31);
        Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_33);
        *STATE_VARIABLE_LaterSolnRowInitializersCord_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_35, Var_46);
        *STATE_VARIABLE_CurLaterSolnIndex_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurLaterSolnIndex_0_37 + (MR_Unsigned) NumLaterSolns_32);
      }
    }
    else
    {
      StringRval_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[19]));
      NextSlotRval_26 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[20]));
      NumLaterSolnsRval_28 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[14]));
      FirstLaterSlotRval_29 = NumLaterSolnsRval_28;
      FirstSolnOutInitializers_30 = DummyOutInitializers_17;
      *STATE_VARIABLE_CurLaterSolnIndex_38 = STATE_VARIABLE_CurLaterSolnIndex_0_37;
      *STATE_VARIABLE_LaterSolnRowInitializersCord_36 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_35;
    }
    if ((MaybeNextSlotId_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (StringRval_25));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (NumLaterSolnsRval_28));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (FirstLaterSlotRval_29));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (FirstSolnOutInitializers_30));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *FirstSolnsRowInitializer_18 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (FirstSolnStructType_14));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_61));
      }
    }
    else
    {
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (StringRval_25));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (NextSlotRval_26));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (NumLaterSolnsRval_28));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (FirstLaterSlotRval_29));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (FirstSolnOutInitializers_30));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *FirstSolnsRowInitializer_18 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (FirstSolnStructType_14));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_67));
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(
  MR_Word VarRval_12,
  MR_Word CaseValues_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_bool succeeded;
    MR_Integer TableSize_22;
    MR_Word HashSlotMap_23;
    MR_Word HashOp_24;
    MR_Integer NumCollisions_25;
    MR_Integer HashMask_26;
    MR_Word ModuleInfo_27;
    MR_Word ModuleName_28;
    MR_Word MLDS_ModuleName_29;
    MR_Word Target_30;
    MR_Word MLDS_ArgTypes_33;
    MR_Word LoopPresent_34;
    MR_Word HashSearchInfo_35;
    MR_Word SlotVarNameType_40;
    MR_Word SlotVarName_44;
    MR_Word SlotVarType_45;
    MR_Word SlotVarLval_46;
    MR_Word SlotVarRval_47;
    MR_Word GlobalData0_48;
    MR_Word StructTypeNum_49;
    MR_Word StructType_50;
    MR_Word FieldIds_51;
    MR_Word GlobalData1_52;
    MR_Word StringFieldId_53;
    MR_Word OutFieldIds_54;
    MR_Word MaybeNextSlotFieldId_55;
    MR_Word DummyOutRvals_58;
    MR_Word DummyOutInitializers_59;
    MR_Word RevRowInitializers_60;
    MR_Word RowInitializers_61;
    MR_Word VectorCommon_62;
    MR_Word GlobalData_63;
    MR_Word LookupStmts_64;
    MR_Word FoundMatchCommentStmt_66;
    MR_Word MatchStmts_67;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Word STATE_VARIABLE_Info_87_87;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_Word STATE_VARIABLE_Info_93_93;

    backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), CaseValues_13, (MR_Integer) 1, &TableSize_22, &HashSlotMap_23, &HashOp_24, &NumCollisions_25);
    HashMask_26 = (MR_Integer) ((MR_Unsigned) TableSize_22 - (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_70, &ModuleInfo_27);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_28);
    MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_70, &Target_30);
    succeeded = (NumCollisions_25 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MLDS_ArgTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MLDS_ArgTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), MLDS_ArgTypes_33, 1) = ((MR_Box) (OutTypes_17));
      }
      LoopPresent_34 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_75;

      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13])));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (OutTypes_17));
      }
      {
        MLDS_ArgTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MLDS_ArgTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), MLDS_ArgTypes_33, 1) = ((MR_Box) (Var_75));
      }
      LoopPresent_34 = (MR_Integer) 1;
    }
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_14, CanFail_15, LoopPresent_34, Context_18, VarRval_12, &HashSearchInfo_35, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_76_76);
    SlotVarNameType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_35, (MR_Integer) 3))));
    *Defns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_35, (MR_Integer) 7))));
    SlotVarName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_40, (MR_Integer) 0))));
    SlotVarType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_40, (MR_Integer) 1))));
    {
      SlotVarLval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 1) = ((MR_Box) (SlotVarName_44));
      MR_hl_field(MR_mktag(3), SlotVarLval_46, 2) = ((MR_Box) (SlotVarType_45));
    }
    {
      SlotVarRval_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), SlotVarRval_47, 0) = ((MR_Box) (SlotVarLval_46));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_76_76, &GlobalData0_48);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_29, Context_18, Target_30, MLDS_ArgTypes_33, &StructTypeNum_49, &StructType_50, &FieldIds_51, GlobalData0_48, &GlobalData1_52);
    succeeded = (NumCollisions_25 == (MR_Integer) 0);
    if (succeeded)
      if ((FieldIds_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
          return;
        }
      }
      else
      {
        StringFieldId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_51, (MR_Integer) 0))));
        OutFieldIds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_51, (MR_Integer) 1))));
        MaybeNextSlotFieldId_55 = (MR_Word) ((MR_Unsigned) 0U);
      }
    else
    if ((FieldIds_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    }
    else
    {
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_51, (MR_Integer) 1))));
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_51, (MR_Integer) 0))));

      if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
          return;
        }
      }
      else
      {
        MR_Word NextSlotFieldId_56;

        StringFieldId_53 = Var_114;
        NextSlotFieldId_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 0))));
        OutFieldIds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 1))));
        {
          MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeNextSlotFieldId_55, 0) = ((MR_Box) (NextSlotFieldId_56));
        }
      }
    }
    DummyOutRvals_58 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[11]), OutTypes_17);
    DummyOutInitializers_59 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[12]), DummyOutRvals_58);
    ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0((MR_Integer) 0, TableSize_22, StructType_50, HashSlotMap_23, MaybeNextSlotFieldId_55, DummyOutInitializers_59, (MR_Word) ((MR_Unsigned) 0U), &RevRowInitializers_60);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevRowInitializers_60, &RowInitializers_61);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, StructTypeNum_49, RowInitializers_61, &VectorCommon_62, GlobalData1_52, &GlobalData_63);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_63, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_87_87);
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_16, OutTypes_17, OutFieldIds_54, VectorCommon_62, StructType_50, SlotVarRval_47, Context_18, &LookupStmts_64, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
    {
      FoundMatchCommentStmt_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_66, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[3])));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_66, 2) = ((MR_Box) (Context_18));
    }
    switch (CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MatchStmts_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MatchStmts_67, 0) = ((MR_Box) (FoundMatchCommentStmt_66));
            MR_hl_field(MR_mktag(1), MatchStmts_67, 1) = ((MR_Box) (LookupStmts_64));
          }
          STATE_VARIABLE_Info_93_93 = STATE_VARIABLE_Info_88_88;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "model_non");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SetSuccessTrueStmt_68;
          MR_Word Var_95;
          MR_Word Var_96;

          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[15])), Context_18, &SetSuccessTrueStmt_68, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_93_93);
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (FoundMatchCommentStmt_66));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (LookupStmts_64));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (SetSuccessTrueStmt_68));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MatchStmts_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_95, Var_96);
        }
        break;
    }
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string simple lookup switch", HashSearchInfo_35, HashOp_24, VectorCommon_62, StructType_50, StringFieldId_53, MaybeNextSlotFieldId_55, HashMask_26, (MR_Word) ((MR_Unsigned) 0U), MatchStmts_67, Stmts_20, STATE_VARIABLE_Info_93_93, STATE_VARIABLE_Info_71);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0(
  MR_Integer Slot_9,
  MR_Integer TableSize_10,
  MR_Word StructType_11,
  MR_Word HashSlotMap_12,
  MR_Word MaybeNextSlotId_13,
  MR_Word DummyOutInitializers_14,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_17,
  MR_Word * STATE_VARIABLE_RevRowInitializers_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_9 == TableSize_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RevRowInitializers_18 = STATE_VARIABLE_RevRowInitializers_0_17;
    else
    {
      MR_Word RowInitializer_16;
      MR_Word STATE_VARIABLE_RevRowInitializers_19_19;
      MR_Integer Var_20;
      MR_Word StringRval_33;
      MR_Word NextSlotRval_34;
      MR_Word OutInitializers_35;
      MR_Word HashSlotMapEntry_29;
      MR_Box conv0_HashSlotMapEntry_29;
      MR_Integer next_value_of_Slot_9;
      MR_Word next_value_of_STATE_VARIABLE_RevRowInitializers_0_17;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[5]), HashSlotMap_12, Slot_9, &conv0_HashSlotMapEntry_29);
      if (succeeded)
      {
        HashSlotMapEntry_29 = ((MR_Word) (conv0_HashSlotMapEntry_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_29, (MR_Integer) 0))));
        MR_Integer Next_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_29, (MR_Integer) 1))));
        MR_Word OutRvals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_29, (MR_Integer) 2))));
        MR_Word Var_37;
        MR_Word Var_38;

        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (String_30));
        }
        {
          StringRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StringRval_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), StringRval_33, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Next_31));
        }
        {
          NextSlotRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NextSlotRval_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), NextSlotRval_34, 1) = ((MR_Box) (Var_38));
        }
        OutInitializers_35 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[10]), OutRvals_32);
      }
      else
      {
        StringRval_33 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[19]));
        NextSlotRval_34 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[20]));
        OutInitializers_35 = DummyOutInitializers_14;
      }
      if ((MaybeNextSlotId_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_44;
        MR_Word Var_45;

        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (StringRval_33));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (OutInitializers_35));
        }
        {
          RowInitializer_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RowInitializer_16, 0) = ((MR_Box) (StructType_11));
          MR_hl_field(MR_mktag(2), RowInitializer_16, 1) = ((MR_Box) (Var_44));
        }
      }
      else
      {
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;

        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (StringRval_33));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (NextSlotRval_34));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (OutInitializers_35));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
        }
        {
          RowInitializer_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RowInitializer_16, 0) = ((MR_Box) (StructType_11));
          MR_hl_field(MR_mktag(2), RowInitializer_16, 1) = ((MR_Box) (Var_46));
        }
      }
      {
        STATE_VARIABLE_RevRowInitializers_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_19_19, 0) = ((MR_Box) (RowInitializer_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevRowInitializers_0_17));
      }
      Var_20 = (MR_Integer) ((MR_Unsigned) Slot_9 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_9 = Var_20;
      next_value_of_STATE_VARIABLE_RevRowInitializers_0_17 = STATE_VARIABLE_RevRowInitializers_19_19;
      Slot_9 = next_value_of_Slot_9;
      STATE_VARIABLE_RevRowInitializers_0_17 = next_value_of_STATE_VARIABLE_RevRowInitializers_0_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_10_p_0(
  MR_Word VarRval_11,
  MR_Word TaggedCases_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word EntryPackedArgsMap_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79)
{
  {
    MR_bool succeeded;
    MR_Word CodeMap_20;
    MR_Word RevStrsCaseIds_22;
    MR_Word StrsCaseIds_23;
    MR_Integer TableSize_24;
    MR_Word HashSlotMap_25;
    MR_Word HashOp_26;
    MR_Integer NumCollisions_27;
    MR_Integer HashMask_28;
    MR_Word ModuleInfo_29;
    MR_Word ModuleName_30;
    MR_Word MLDS_ModuleName_31;
    MR_Word Target_32;
    MR_Word MLDS_ArgTypes_35;
    MR_Word LoopPresent_36;
    MR_Word HashSearchInfo_37;
    MR_Word SlotVarNameType_42;
    MR_Word SlotVarName_46;
    MR_Word SlotVarType_47;
    MR_Word SlotVarLval_48;
    MR_Word GlobalData0_49;
    MR_Word StructTypeNum_50;
    MR_Word StructType_51;
    MR_Word FieldIds_52;
    MR_Word GlobalData1_53;
    MR_Word StringFieldId_54;
    MR_Word MaybeNextSlotFieldId_55;
    MR_Word RevRowInitializers_65;
    MR_Word RevMap_66;
    MR_Word RowInitializers_67;
    MR_Word VectorCommon_68;
    MR_Word GlobalData_69;
    MR_Word RevList_70;
    MR_Word SlotsCases0_71;
    MR_Word SlotsCases_72;
    MR_Word SwitchStmt0_73;
    MR_Word SwitchStmt_74;
    MR_Word FoundMatchStmts_76;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_Info_81_81;
    MR_Word STATE_VARIABLE_Info_90_90;
    MR_Word Var_104;
    MR_Word STATE_VARIABLE_Info_105_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Integer Var_110;
    MR_Word STATE_VARIABLE_Info_113_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Integer _MaxCaseNum_21;

    Var_80 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
    ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(CodeModel_13, EntryPackedArgsMap_15, TaggedCases_12, Var_80, &CodeMap_20, STATE_VARIABLE_Info_0_78, &STATE_VARIABLE_Info_81_81);
    ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0(TaggedCases_12, (MR_Integer) -1, &_MaxCaseNum_21, (MR_Word) ((MR_Unsigned) 0U), &RevStrsCaseIds_22);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[0]), RevStrsCaseIds_22, &StrsCaseIds_23);
    backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), StrsCaseIds_23, (MR_Integer) 1, &TableSize_24, &HashSlotMap_25, &HashOp_26, &NumCollisions_27);
    HashMask_28 = (MR_Integer) ((MR_Unsigned) TableSize_24 - (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_81_81, &ModuleInfo_29);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_29, &ModuleName_30);
    MLDS_ModuleName_31 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_30);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_81_81, &Target_32);
    succeeded = (NumCollisions_27 == (MR_Integer) 0);
    if (succeeded)
    {
      MLDS_ArgTypes_35 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_1[25]));
      LoopPresent_36 = (MR_Integer) 0;
    }
    else
    {
      MLDS_ArgTypes_35 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_1[27]));
      LoopPresent_36 = (MR_Integer) 1;
    }
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_13, CanFail_14, LoopPresent_36, Context_16, VarRval_11, &HashSearchInfo_37, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_90_90);
    SlotVarNameType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_37, (MR_Integer) 3))));
    *Defns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_37, (MR_Integer) 7))));
    SlotVarName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_42, (MR_Integer) 0))));
    SlotVarType_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_42, (MR_Integer) 1))));
    {
      SlotVarLval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotVarLval_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SlotVarLval_48, 1) = ((MR_Box) (SlotVarName_46));
      MR_hl_field(MR_mktag(3), SlotVarLval_48, 2) = ((MR_Box) (SlotVarType_47));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_90_90, &GlobalData0_49);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_31, Context_16, Target_32, MLDS_ArgTypes_35, &StructTypeNum_50, &StructType_51, &FieldIds_52, GlobalData0_49, &GlobalData1_53);
    succeeded = (NumCollisions_27 == (MR_Integer) 0);
    if (succeeded)
      if ((FieldIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
      }
      else
      {
        MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_52, (MR_Integer) 1))));
        MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_52, (MR_Integer) 0))));

        if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          StringFieldId_54 = Var_137;
          MaybeNextSlotFieldId_55 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
            return;
          }
        }
      }
    else
    if ((FieldIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
        return;
      }
    }
    else
    {
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_52, (MR_Integer) 1))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_52, (MR_Integer) 0))));

      if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
      }
      else
      {
        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_138, (MR_Integer) 1))));
        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_138, (MR_Integer) 0))));

        if ((Var_140 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          StringFieldId_54 = Var_139;
          {
            MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNextSlotFieldId_55, 0) = ((MR_Box) (Var_141));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
            return;
          }
        }
      }
    }
    Var_104 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0));
    ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0((MR_Integer) 0, TableSize_24, HashSlotMap_25, StructType_51, MaybeNextSlotFieldId_55, (MR_Word) ((MR_Unsigned) 0U), &RevRowInitializers_65, Var_104, &RevMap_66);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevRowInitializers_65, &RowInitializers_67);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_31, StructTypeNum_50, RowInitializers_67, &VectorCommon_68, GlobalData1_53, &GlobalData_69);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_69, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_105_105);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), RevMap_66, &RevList_70);
    ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(CodeMap_20, RevList_70, (MR_Word) ((MR_Unsigned) 0U), &SlotsCases0_71);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SlotsCases0_71, &SlotsCases_72);
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_107, 0) = ((MR_Box) (SlotVarLval_48));
    }
    Var_110 = (MR_Integer) ((MR_Unsigned) TableSize_24 - (MR_Unsigned) (MR_Integer) 1);
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
    }
    {
      SwitchStmt0_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 1) = ((MR_Box) (SlotVarType_47));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 2) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 3) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 4) = ((MR_Box) (SlotsCases_72));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 6) = ((MR_Box) (Context_16));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_73, &SwitchStmt_74, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_113_113);
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[15])));
      MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (Context_16));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (SwitchStmt_74));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FoundMatchStmts_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FoundMatchStmts_76, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(1), FoundMatchStmts_76, 1) = ((MR_Box) (Var_116));
    }
    ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string jump switch", HashSearchInfo_37, HashOp_26, VectorCommon_68, StructType_51, StringFieldId_54, MaybeNextSlotFieldId_55, HashMask_28, (MR_Word) ((MR_Unsigned) 0U), FoundMatchStmts_76, Stmts_18, STATE_VARIABLE_Info_113_113, STATE_VARIABLE_Info_79);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0(
  MR_String InitialComment_14,
  MR_Word HashSearchInfo_15,
  MR_Word HashOp_16,
  MR_Word VectorCommon_17,
  MR_Word StructType_18,
  MR_Word StringFieldId_19,
  MR_Word MaybeNextSlotFieldId_20,
  MR_Integer HashMask_21,
  MR_Word MatchDefns_22,
  MR_Word MatchStmts_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  {
    MR_Word CodeModel_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word LoopPresent_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 1))));
    MR_Word VarRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 2))));
    MR_Word SlotVarNameType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 3))));
    MR_Word StringVarNameType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 4))));
    MR_Word MaybeStopLoopVarNameType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 5))));
    MR_Word FailStmts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSearchInfo_15, (MR_Integer) 6))));
    MR_Word SlotVarName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_30, (MR_Integer) 0))));
    MR_Word SlotVarType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotVarNameType_30, (MR_Integer) 1))));
    MR_Word SlotVarLval_37;
    MR_Word SlotVarRval_38;
    MR_Word StringVarName_39;
    MR_Word StringVarType_40;
    MR_Word StringVarLval_41;
    MR_Word StringVarRval_42;
    MR_Word StopLoopVarNameList_44;
    MR_Word SetupForFailStmts_49;
    MR_Word SuccessStmt_50;
    MR_Word AfterStmts_51;
    MR_Word InitialCommentStmt_52;
    MR_Word PrepareForMatchStmts_53;
    MR_Word FoundMatchCond_54;
    MR_Word LookForMatchPrepareStmts_55;
    MR_Word SlotTest_56;
    MR_Word InitStopLoopVarStmts_57;
    MR_Word InitSuccessStmts_58;
    MR_Word LoopTest_59;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_116;

    {
      SlotVarLval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotVarLval_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SlotVarLval_37, 1) = ((MR_Box) (SlotVarName_35));
      MR_hl_field(MR_mktag(3), SlotVarLval_37, 2) = ((MR_Box) (SlotVarType_36));
    }
    {
      SlotVarRval_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), SlotVarRval_38, 0) = ((MR_Box) (SlotVarLval_37));
    }
    StringVarName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StringVarNameType_31, (MR_Integer) 0))));
    StringVarType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StringVarNameType_31, (MR_Integer) 1))));
    {
      StringVarLval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StringVarLval_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), StringVarLval_41, 1) = ((MR_Box) (StringVarName_39));
      MR_hl_field(MR_mktag(3), StringVarLval_41, 2) = ((MR_Box) (StringVarType_40));
    }
    {
      StringVarRval_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), StringVarRval_42, 0) = ((MR_Box) (StringVarLval_41));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InitialComment_14));
    }
    {
      InitialCommentStmt_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_52, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(3), InitialCommentStmt_52, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[8])));
      MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (HashOp_16));
      MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (VarRval_29));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (HashMask_21));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[22])));
      MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (Var_86));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (SlotVarLval_37));
      MR_hl_field(MR_mktag(2), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      PrepareForMatchStmts_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PrepareForMatchStmts_53, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), PrepareForMatchStmts_53, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (StringVarType_40));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[23])));
      MR_hl_field(MR_mktag(3), Var_90, 2) = ((MR_Box) (StringVarRval_42));
      MR_hl_field(MR_mktag(3), Var_90, 3) = ((MR_Box) (Var_93));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) (StringVarRval_42));
      MR_hl_field(MR_mktag(3), Var_95, 3) = ((MR_Box) (VarRval_29));
    }
    {
      FoundMatchCond_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FoundMatchCond_54, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), FoundMatchCond_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), FoundMatchCond_54, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(3), FoundMatchCond_54, 3) = ((MR_Box) (Var_95));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[9])));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (Context_28));
    }
    Var_105 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[10]));
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (VectorCommon_17));
      MR_hl_field(MR_mktag(3), Var_108, 2) = ((MR_Box) (SlotVarRval_38));
    }
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) (StructType_18));
      MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (StringFieldId_19));
      MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) (StringVarType_40));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (Var_104));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_102, 0) = ((MR_Box) (StringVarLval_41));
      MR_hl_field(MR_mktag(2), Var_102, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(3), Var_101, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[11])));
      MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_109));
    }
    {
      LookForMatchPrepareStmts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LookForMatchPrepareStmts_55, 0) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(1), LookForMatchPrepareStmts_55, 1) = ((MR_Box) (Var_100));
    }
    Var_116 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12]));
    {
      SlotTest_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotTest_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), SlotTest_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[17])));
      MR_hl_field(MR_mktag(3), SlotTest_56, 2) = ((MR_Box) (SlotVarRval_38));
      MR_hl_field(MR_mktag(3), SlotTest_56, 3) = ((MR_Box) (Var_116));
    }
    if ((MaybeStopLoopVarNameType_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      StopLoopVarNameList_44 = (MR_Word) ((MR_Unsigned) 0U);
      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_26, LoopPresent_27, Context_28, (MR_Word) ((MR_Unsigned) 0U), MatchDefns_22, MatchStmts_23, FailStmts_33, &SetupForFailStmts_49, &SuccessStmt_50, &AfterStmts_51, STATE_VARIABLE_Info_0_71, STATE_VARIABLE_Info_72);
      InitStopLoopVarStmts_57 = (MR_Word) ((MR_Unsigned) 0U);
      InitSuccessStmts_58 = (MR_Word) ((MR_Unsigned) 0U);
      LoopTest_59 = SlotTest_56;
    }
    else
    {
      MR_Word StopLoopVarNameType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStopLoopVarNameType_32, (MR_Integer) 0))));
      MR_Word StopLoopVarName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StopLoopVarNameType_45, (MR_Integer) 0))));
      MR_Word StopLoopVarType_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StopLoopVarNameType_45, (MR_Integer) 1))));
      MR_Word StopLoopVarLval0_48;
      MR_Word InitStopLoopVarStmt_192;
      MR_Word StopLoopTest_194;
      MR_Word Var_195;
      MR_Word Var_202;
      MR_Word MaybeStopLoopVarLval_217;
      MR_Word STATE_VARIABLE_Info_74_222;

      {
        StopLoopVarLval0_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_48, 1) = ((MR_Box) (StopLoopVarName_46));
        MR_hl_field(MR_mktag(3), StopLoopVarLval0_48, 2) = ((MR_Box) (StopLoopVarType_47));
      }
      {
        MaybeStopLoopVarLval_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeStopLoopVarLval_217, 0) = ((MR_Box) (StopLoopVarLval0_48));
      }
      {
        StopLoopVarNameList_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StopLoopVarNameList_44, 0) = ((MR_Box) (StopLoopVarName_46));
        MR_hl_field(MR_mktag(1), StopLoopVarNameList_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_26, LoopPresent_27, Context_28, MaybeStopLoopVarLval_217, MatchDefns_22, MatchStmts_23, FailStmts_33, &SetupForFailStmts_49, &SuccessStmt_50, &AfterStmts_51, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_74_222);
      {
        Var_195 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_195, 0) = ((MR_Box) (StopLoopVarLval0_48));
        MR_hl_field(MR_mktag(2), Var_195, 1) = ((MR_Box) (Var_116));
      }
      {
        InitStopLoopVarStmt_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_192, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_192, 1) = ((MR_Box) (Var_195));
        MR_hl_field(MR_mktag(3), InitStopLoopVarStmt_192, 2) = ((MR_Box) (Context_28));
      }
      {
        InitStopLoopVarStmts_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InitStopLoopVarStmts_57, 0) = ((MR_Box) (InitStopLoopVarStmt_192));
        MR_hl_field(MR_mktag(1), InitStopLoopVarStmts_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      switch (CodeModel_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InitSuccessStmts_58 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_74_222;
          }
          break;
        case (MR_Integer) 2:
          {
            InitSuccessStmts_58 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_74_222;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InitSuccessStmt_183;

            ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[24])), Context_28, &InitSuccessStmt_183, STATE_VARIABLE_Info_74_222, STATE_VARIABLE_Info_72);
            {
              InitSuccessStmts_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InitSuccessStmts_58, 0) = ((MR_Box) (InitSuccessStmt_183));
              MR_hl_field(MR_mktag(1), InitSuccessStmts_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_202, 0) = ((MR_Box) (StopLoopVarLval0_48));
      }
      {
        StopLoopTest_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StopLoopTest_194, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), StopLoopTest_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11])));
        MR_hl_field(MR_mktag(3), StopLoopTest_194, 2) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(3), StopLoopTest_194, 3) = ((MR_Box) (Var_116));
      }
      {
        LoopTest_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LoopTest_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), LoopTest_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), LoopTest_59, 2) = ((MR_Box) (StopLoopTest_194));
        MR_hl_field(MR_mktag(3), LoopTest_59, 3) = ((MR_Box) (SlotTest_56));
      }
    }
    if ((MaybeNextSlotFieldId_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NoLoopCommentStmt_70;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_143;
      MR_Word LookForMatchStmt_179;
      MR_Word SearchStmts_180;

      {
        NoLoopCommentStmt_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NoLoopCommentStmt_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), NoLoopCommentStmt_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[12])));
        MR_hl_field(MR_mktag(3), NoLoopCommentStmt_70, 2) = ((MR_Box) (Context_28));
      }
      {
        LookForMatchStmt_179 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_179, 0) = ((MR_Box) (FoundMatchCond_54));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_179, 1) = ((MR_Box) (SuccessStmt_50));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_179, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_179, 3) = ((MR_Box) (Context_28));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (NoLoopCommentStmt_70));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (LookForMatchPrepareStmts_55));
      }
      {
        Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (LookForMatchStmt_179));
        MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_140, Var_141);
      Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitSuccessStmts_58, Var_139);
      SearchStmts_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), PrepareForMatchStmts_53, Var_138);
      {
        Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (InitialCommentStmt_52));
        MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (SearchStmts_180));
      }
      *Stmts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_143, AfterStmts_51);
    }
    else
    {
      MR_Word NextSlotFieldId_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNextSlotFieldId_20, (MR_Integer) 0))));
      MR_Word NoMatchStmt_65;
      MR_Word LookForMatchStmt_66;
      MR_Word LoopBody_67;
      MR_Word LoopStmts_68;
      MR_Word SearchStmts_69;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_160;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_166;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;

      {
        Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[13])));
        MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) (Context_28));
      }
      {
        Var_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), Var_154, 2) = ((MR_Box) (StructType_18));
        MR_hl_field(MR_mktag(0), Var_154, 3) = ((MR_Box) (NextSlotFieldId_64));
        MR_hl_field(MR_mktag(0), Var_154, 4) = ((MR_Box) (SlotVarType_36));
      }
      {
        Var_153 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_153, 0) = ((MR_Box) (Var_154));
      }
      {
        Var_152 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_152, 0) = ((MR_Box) (SlotVarLval_37));
        MR_hl_field(MR_mktag(2), Var_152, 1) = ((MR_Box) (Var_153));
      }
      {
        Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (Context_28));
      }
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_150));
      }
      {
        NoMatchStmt_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NoMatchStmt_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoMatchStmt_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoMatchStmt_65, 2) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(0), NoMatchStmt_65, 3) = ((MR_Box) (Context_28));
      }
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (NoMatchStmt_65));
      }
      {
        LookForMatchStmt_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_66, 0) = ((MR_Box) (FoundMatchCond_54));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_66, 1) = ((MR_Box) (SuccessStmt_50));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_66, 2) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(2), LookForMatchStmt_66, 3) = ((MR_Box) (Context_28));
      }
      {
        Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (LookForMatchStmt_66));
        MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), LookForMatchPrepareStmts_55, Var_164);
      {
        LoopBody_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LoopBody_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), LoopBody_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), LoopBody_67, 2) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), LoopBody_67, 3) = ((MR_Box) (Context_28));
      }
      {
        Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[14])));
        MR_hl_field(MR_mktag(3), Var_166, 2) = ((MR_Box) (Context_28));
      }
      {
        Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (StringVarName_39));
        MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (StopLoopVarNameList_44));
      }
      {
        Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (SlotVarName_35));
        MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
      }
      {
        Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_170, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (LoopTest_59));
        MR_hl_field(MR_mktag(1), Var_170, 2) = ((MR_Box) (LoopBody_67));
        MR_hl_field(MR_mktag(1), Var_170, 3) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(1), Var_170, 4) = ((MR_Box) (Context_28));
      }
      {
        Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        LoopStmts_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LoopStmts_68, 0) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(1), LoopStmts_68, 1) = ((MR_Box) (Var_169));
      }
      Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitSuccessStmts_58, LoopStmts_68);
      Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitStopLoopVarStmts_57, Var_176);
      SearchStmts_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), PrepareForMatchStmts_53, Var_175);
      {
        Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (InitialCommentStmt_52));
        MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (SetupForFailStmts_49));
      }
      Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), SearchStmts_69, AfterStmts_51);
      *Stmts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_177, Var_178);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2264__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2244__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(
  MR_Word CodeModel_13,
  MR_Word LoopPresent_14,
  MR_Word Context_15,
  MR_Word MaybeStopLoopVarLval_16,
  MR_Word MatchDefns_17,
  MR_Word MatchStmts_18,
  MR_Word FailStmts_19,
  MR_Word * SetupForFailStmts_20,
  MR_Word * BodyStmt_21,
  MR_Word * AfterStmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word OnlyFailAfterStmts_24;

    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_50;

          *SetupForFailStmts_20 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[6]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (FailStmts_19));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_det, but FailStmts is not empty");
          OnlyFailAfterStmts_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_46;

          *SetupForFailStmts_20 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[6]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (FailStmts_19));
            MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_non, but FailStmts is not empty");
          OnlyFailAfterStmts_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeStopLoopVarLval_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *SetupForFailStmts_20 = (MR_Word) ((MR_Unsigned) 0U);
          OnlyFailAfterStmts_24 = FailStmts_19;
        }
        else
        {
          *SetupForFailStmts_20 = FailStmts_19;
          OnlyFailAfterStmts_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    if ((MaybeStopLoopVarLval_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (LoopPresent_14 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *BodyStmt_21 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchDefns_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MatchStmts_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_15));
        }
        *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
      }
      else
      {
        MR_Word ModuleInfo_26;
        MR_Word Globals_27;
        MR_Word SupportsBreakContinue_28;
        MR_String Experiment_29;

        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_26);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_27);
        SupportsBreakContinue_28 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(Globals_27);
        libs__globals__lookup_string_option_3_p_0(Globals_27, (MR_Integer) 691, &Experiment_29);
        succeeded = (SupportsBreakContinue_28 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (strcmp(Experiment_29, (MR_String) "use_end_label") == 0);
            succeeded = !(succeeded);
          }
        }
        if (succeeded)
        {
          MR_Word BreakCommentStmt_30;
          MR_Word BreakStmt_31;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          {
            BreakCommentStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), BreakCommentStmt_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), BreakCommentStmt_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[5])));
            MR_hl_field(MR_mktag(3), BreakCommentStmt_30, 2) = ((MR_Box) (Context_15));
          }
          {
            BreakStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), BreakStmt_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), BreakStmt_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), BreakStmt_31, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (BreakStmt_31));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (BreakCommentStmt_30));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
          }
          Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_82);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *BodyStmt_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchDefns_17));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_15));
          }
          *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
        }
        else
        {
          MR_String EndLabel_32;
          MR_Word GotoCommentStmt_33;
          MR_Word GotoEndStmt_34;
          MR_Word EndLabelStmt_35;
          MR_Word Var_88;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_94;

          ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&EndLabel_32, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
          {
            GotoCommentStmt_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GotoCommentStmt_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), GotoCommentStmt_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[6])));
            MR_hl_field(MR_mktag(3), GotoCommentStmt_33, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (EndLabel_32));
          }
          {
            GotoEndStmt_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GotoEndStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), GotoEndStmt_34, 1) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(3), GotoEndStmt_34, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (GotoEndStmt_34));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (GotoCommentStmt_33));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
          }
          Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_91);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *BodyStmt_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchDefns_17));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_15));
          }
          {
            EndLabelStmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), EndLabelStmt_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), EndLabelStmt_35, 1) = ((MR_Box) (EndLabel_32));
            MR_hl_field(MR_mktag(3), EndLabelStmt_35, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (EndLabelStmt_35));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *AfterStmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), OnlyFailAfterStmts_24, Var_94);
        }
      }
    }
    else
    {
      MR_Word StopLoopVarLval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStopLoopVarLval_16, (MR_Integer) 0))));

      succeeded = (LoopPresent_14 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *BodyStmt_21 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchDefns_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MatchStmts_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_15));
        }
        *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word SetStopLoopStmt_37;
        MR_Word Var_55;
        MR_Word Var_60;
        MR_Word Var_61;

        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (StopLoopVarLval_36));
          MR_hl_field(MR_mktag(2), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[21])));
        }
        {
          SetStopLoopStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SetStopLoopStmt_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), SetStopLoopStmt_37, 1) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(3), SetStopLoopStmt_37, 2) = ((MR_Box) (Context_15));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (SetStopLoopStmt_37));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_61);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *BodyStmt_21 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchDefns_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_15));
        }
        if ((OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U)))
          *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OnlyFailAfterStmts_24, (MR_Integer) 1))));
          MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OnlyFailAfterStmts_24, (MR_Integer) 0))));

          if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word SuccessTest_42;
            MR_Word AfterStmt_43;
            MR_Word Var_69;

            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (StopLoopVarLval_36));
            }
            {
              SuccessTest_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SuccessTest_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), SuccessTest_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11])));
              MR_hl_field(MR_mktag(3), SuccessTest_42, 2) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(3), SuccessTest_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])));
            }
            {
              AfterStmt_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AfterStmt_43, 0) = ((MR_Box) (SuccessTest_42));
              MR_hl_field(MR_mktag(2), AfterStmt_43, 1) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(2), AfterStmt_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), AfterStmt_43, 3) = ((MR_Box) (Context_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *AfterStmts_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AfterStmt_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word OnlyFailAfterStmt_101;
            MR_Word SuccessTest_102;
            MR_Word AfterStmt_103;
            MR_Word Var_106;

            {
              OnlyFailAfterStmt_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OnlyFailAfterStmt_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), OnlyFailAfterStmt_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), OnlyFailAfterStmt_101, 2) = ((MR_Box) (OnlyFailAfterStmts_24));
              MR_hl_field(MR_mktag(0), OnlyFailAfterStmt_101, 3) = ((MR_Box) (Context_15));
            }
            {
              Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (StopLoopVarLval_36));
            }
            {
              SuccessTest_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SuccessTest_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), SuccessTest_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11])));
              MR_hl_field(MR_mktag(3), SuccessTest_102, 2) = ((MR_Box) (Var_106));
              MR_hl_field(MR_mktag(3), SuccessTest_102, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])));
            }
            {
              AfterStmt_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AfterStmt_103, 0) = ((MR_Box) (SuccessTest_102));
              MR_hl_field(MR_mktag(2), AfterStmt_103, 1) = ((MR_Box) (OnlyFailAfterStmt_101));
              MR_hl_field(MR_mktag(2), AfterStmt_103, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), AfterStmt_103, 3) = ((MR_Box) (Context_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *AfterStmts_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AfterStmt_103));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
    }
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(
  MR_Word CodeModel_9,
  MR_Word CanFail_10,
  MR_Word LoopPresent_11,
  MR_Word Context_12,
  MR_Word VarRval_13,
  MR_Word * HashSearchInfo_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word SlotVarName_16;
    MR_Word SlotVarType_17;
    MR_Word SlotVarDefn_18;
    MR_Word SlotVarNameType_19;
    MR_Word StringVarName_20;
    MR_Word StringVarDefn_22;
    MR_Word StringVarNameType_23;
    MR_Word AlwaysDefns_24;
    MR_Word MaybeStopLoopVarNameType_25;
    MR_Word StopLoopVarDefns_26;
    MR_Word Defns_27;
    MR_Word FailStmts_28;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Info_40_40;

    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 1, &SlotVarName_16, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
    SlotVarType_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    SlotVarDefn_18 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(SlotVarName_16, SlotVarType_17, (MR_Word) ((MR_Unsigned) 0U), Context_12);
    {
      SlotVarNameType_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotVarNameType_19, 0) = ((MR_Box) (SlotVarName_16));
      MR_hl_field(MR_mktag(0), SlotVarNameType_19, 1) = ((MR_Box) (SlotVarType_17));
    }
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 5, &StringVarName_20, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_36_36);
    StringVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StringVarName_20, (MR_Word) ((MR_Unsigned) 8U), (MR_Word) ((MR_Unsigned) 0U), Context_12);
    {
      StringVarNameType_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StringVarNameType_23, 0) = ((MR_Box) (StringVarName_20));
      MR_hl_field(MR_mktag(0), StringVarNameType_23, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (StringVarDefn_22));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      AlwaysDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), AlwaysDefns_24, 0) = ((MR_Box) (SlotVarDefn_18));
      MR_hl_field(MR_mktag(1), AlwaysDefns_24, 1) = ((MR_Box) (Var_38));
    }
    switch (LoopPresent_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeStopLoopVarNameType_25 = (MR_Word) ((MR_Unsigned) 0U);
          StopLoopVarDefns_26 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_36_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_51;
          MR_Word Globals_52;
          MR_Word SupportsGoto_53;
          MR_String Experiment_54;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_36_36, &ModuleInfo_51);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_51, &Globals_52);
          SupportsGoto_53 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(Globals_52);
          libs__globals__lookup_string_option_3_p_0(Globals_52, (MR_Integer) 691, &Experiment_54);
          switch (SupportsGoto_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word StopLoopVarName_57;
                MR_Word StopLoopVarDefn_58;
                MR_Word StopLoopVarNameType_59;

                ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_57, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_40_40);
                StopLoopVarDefn_58 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_57, SlotVarType_17, (MR_Word) ((MR_Unsigned) 0U), Context_12);
                {
                  StopLoopVarNameType_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StopLoopVarNameType_59, 0) = ((MR_Box) (StopLoopVarName_57));
                  MR_hl_field(MR_mktag(0), StopLoopVarNameType_59, 1) = ((MR_Box) (SlotVarType_17));
                }
                {
                  MaybeStopLoopVarNameType_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeStopLoopVarNameType_25, 0) = ((MR_Box) (StopLoopVarNameType_59));
                }
                {
                  StopLoopVarDefns_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StopLoopVarDefns_26, 0) = ((MR_Box) (StopLoopVarDefn_58));
                  MR_hl_field(MR_mktag(1), StopLoopVarDefns_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = (strcmp(Experiment_54, (MR_String) "use_stop_loop") == 0);
                if (succeeded)
                {
                  MR_Word StopLoopVarName_75;
                  MR_Word StopLoopVarDefn_76;
                  MR_Word StopLoopVarNameType_77;

                  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_75, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_40_40);
                  StopLoopVarDefn_76 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_75, SlotVarType_17, (MR_Word) ((MR_Unsigned) 0U), Context_12);
                  {
                    StopLoopVarNameType_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), StopLoopVarNameType_77, 0) = ((MR_Box) (StopLoopVarName_75));
                    MR_hl_field(MR_mktag(0), StopLoopVarNameType_77, 1) = ((MR_Box) (SlotVarType_17));
                  }
                  {
                    MaybeStopLoopVarNameType_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeStopLoopVarNameType_25, 0) = ((MR_Box) (StopLoopVarNameType_77));
                  }
                  {
                    StopLoopVarDefns_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), StopLoopVarDefns_26, 0) = ((MR_Box) (StopLoopVarDefn_76));
                    MR_hl_field(MR_mktag(1), StopLoopVarDefns_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MaybeStopLoopVarNameType_25 = (MR_Word) ((MR_Unsigned) 0U);
                  StopLoopVarDefns_26 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_36_36;
                }
              }
              break;
          }
        }
        break;
    }
    Defns_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), AlwaysDefns_24, StopLoopVarDefns_26);
    switch (CanFail_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_9, Context_12, &FailStmts_28, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_30);
        break;
      case (MR_Integer) 1:
        {
          FailStmts_28 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_40_40;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *HashSearchInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (CodeModel_9) << 1)) | (MR_Unsigned) (LoopPresent_11)));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarRval_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SlotVarNameType_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (StringVarNameType_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeStopLoopVarNameType_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FailStmts_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Defns_27));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_string_switch__make_hash_match_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(
  MR_Word CodeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cases_0_3,
  MR_Word * STATE_VARIABLE_Cases_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cases_4 = STATE_VARIABLE_Cases_0_3;
    else
    {
      MR_Word Entry_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Entries_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CaseId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_10, (MR_Integer) 0))));
      MR_Word HashSlots_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_10, (MR_Integer) 1))));
      MR_Integer FirstHashSlot_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashSlots_14, (MR_Integer) 0))));
      MR_Word RevLaterHashSlots_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSlots_14, (MR_Integer) 1))));
      MR_Word LaterHashSlots_17;
      MR_Word FirstMatchCond_18;
      MR_Word LaterMatchConds_19;
      MR_Word CaseStmt_20;
      MR_Word Case_21;
      MR_Word STATE_VARIABLE_Cases_25_25;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Box conv1_CaseStmt_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_3;

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLaterHashSlots_16, &LaterHashSlots_17);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (FirstHashSlot_15));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        FirstMatchCond_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMatchCond_18, 0) = ((MR_Box) (Var_34));
      }
      LaterMatchConds_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[9]), LaterHashSlots_17);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeMap_1, ((MR_Box) (CaseId_13)), &conv1_CaseStmt_20);
      CaseStmt_20 = ((MR_Word) (conv1_CaseStmt_20));
      {
        Case_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_21, 0) = ((MR_Box) (FirstMatchCond_18));
        MR_hl_field(MR_mktag(0), Case_21, 1) = ((MR_Box) (LaterMatchConds_19));
        MR_hl_field(MR_mktag(0), Case_21, 2) = ((MR_Box) (CaseStmt_20));
      }
      {
        STATE_VARIABLE_Cases_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Cases_25_25, 0) = ((MR_Box) (Case_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Cases_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Entries_11;
      next_value_of_STATE_VARIABLE_Cases_0_3 = STATE_VARIABLE_Cases_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cases_0_3 = next_value_of_STATE_VARIABLE_Cases_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0(
  MR_Integer Slot_10,
  MR_Integer TableSize_11,
  MR_Word HashSlotMap_12,
  MR_Word StructType_13,
  MR_Word MaybeNextSlotId_14,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_18,
  MR_Word * STATE_VARIABLE_RevRowInitializers_19,
  MR_Word STATE_VARIABLE_RevMap_0_20,
  MR_Word * STATE_VARIABLE_RevMap_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_10 == TableSize_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RevMap_21 = STATE_VARIABLE_RevMap_0_20;
      *STATE_VARIABLE_RevRowInitializers_19 = STATE_VARIABLE_RevRowInitializers_0_18;
    }
    else
    {
      MR_Word RowInitializer_17;
      MR_Word STATE_VARIABLE_RevMap_22_22;
      MR_Word STATE_VARIABLE_RevRowInitializers_23_23;
      MR_Integer Var_24;
      MR_Word StringRval_40;
      MR_Word NextSlotRval_41;
      MR_Word HashSlotMapEntry_36;
      MR_Box conv0_HashSlotMapEntry_36;
      MR_Integer next_value_of_Slot_10;
      MR_Word next_value_of_STATE_VARIABLE_RevRowInitializers_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_20;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[4]), HashSlotMap_12, Slot_10, &conv0_HashSlotMapEntry_36);
      if (succeeded)
      {
        HashSlotMapEntry_36 = ((MR_Word) (conv0_HashSlotMapEntry_36));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_36, (MR_Integer) 0))));
        MR_Integer Next_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_36, (MR_Integer) 1))));
        MR_Word CaseId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashSlotMapEntry_36, (MR_Integer) 2))));
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word OldEntry_42;
        MR_Box conv1_OldEntry_42;

        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (String_37));
        }
        {
          StringRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StringRval_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), StringRval_40, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Next_38));
        }
        {
          NextSlotRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NextSlotRval_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), NextSlotRval_41, 1) = ((MR_Box) (Var_48));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), STATE_VARIABLE_RevMap_0_20, ((MR_Box) (CaseId_39)), &conv1_OldEntry_42);
        if (succeeded)
        {
          OldEntry_42 = ((MR_Word) (conv1_OldEntry_42));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer OldFirstSlot_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldEntry_42, (MR_Integer) 0))));
          MR_Word OldLaterSlots_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_42, (MR_Integer) 1))));
          MR_Word NewEntry_45;
          MR_Word Var_49;

          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Slot_10));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (OldLaterSlots_44));
          }
          {
            NewEntry_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewEntry_45, 0) = ((MR_Box) (OldFirstSlot_43));
            MR_hl_field(MR_mktag(0), NewEntry_45, 1) = ((MR_Box) (Var_49));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), ((MR_Box) (CaseId_39)), ((MR_Box) (NewEntry_45)), STATE_VARIABLE_RevMap_0_20, &STATE_VARIABLE_RevMap_22_22);
        }
        else
        {
          MR_Word NewEntry_65;

          {
            NewEntry_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewEntry_65, 0) = ((MR_Box) (Slot_10));
            MR_hl_field(MR_mktag(0), NewEntry_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), ((MR_Box) (CaseId_39)), ((MR_Box) (NewEntry_65)), STATE_VARIABLE_RevMap_0_20, &STATE_VARIABLE_RevMap_22_22);
        }
      }
      else
      {
        StringRval_40 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[19]));
        NextSlotRval_41 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[20]));
        STATE_VARIABLE_RevMap_22_22 = STATE_VARIABLE_RevMap_0_20;
      }
      if ((MaybeNextSlotId_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_57;
        MR_Word Var_58;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (StringRval_40));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RowInitializer_17, 0) = ((MR_Box) (StructType_13));
          MR_hl_field(MR_mktag(2), RowInitializer_17, 1) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (StringRval_40));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (NextSlotRval_41));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
        }
        {
          RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RowInitializer_17, 0) = ((MR_Box) (StructType_13));
          MR_hl_field(MR_mktag(2), RowInitializer_17, 1) = ((MR_Box) (Var_60));
        }
      }
      {
        STATE_VARIABLE_RevRowInitializers_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_23_23, 0) = ((MR_Box) (RowInitializer_17));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevRowInitializers_0_18));
      }
      Var_24 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_10 = Var_24;
      next_value_of_STATE_VARIABLE_RevRowInitializers_0_18 = STATE_VARIABLE_RevRowInitializers_23_23;
      next_value_of_STATE_VARIABLE_RevMap_0_20 = STATE_VARIABLE_RevMap_22_22;
      Slot_10 = next_value_of_Slot_10;
      STATE_VARIABLE_RevRowInitializers_0_18 = next_value_of_STATE_VARIABLE_RevRowInitializers_0_18;
      STATE_VARIABLE_RevMap_0_20 = next_value_of_STATE_VARIABLE_RevMap_0_20;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__191__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0(
  MR_Word VarRval_10,
  MR_Word TaggedCases_11,
  MR_Word LookupSwitchInfo_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  {
    MR_bool succeeded;
    MR_Integer MaxCaseNum_18;
    MR_Word CaseNumVarLval_19;
    MR_Word CaseNumVarDefn_20;
    MR_Word InitCaseNumVarStmt_21;
    MR_Word GetCaseNumSwitchStmt_22;
    MR_Word CaseIdConsts_23;
    MR_Word OutVars_24;
    MR_Word OutTypes_25;
    MR_Word STATE_VARIABLE_Info_33_33;

    ml_backend__ml_string_switch__create_nested_switch_trie_10_p_0(TaggedCases_11, Context_15, VarRval_10, &MaxCaseNum_18, &CaseNumVarLval_19, &CaseNumVarDefn_20, &InitCaseNumVarStmt_21, &GetCaseNumSwitchStmt_22, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_33_33);
    CaseIdConsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_12, (MR_Integer) 0))));
    OutVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_12, (MR_Integer) 1))));
    OutTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_12, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) CaseIdConsts_23)) == (MR_Integer) 0))
    {
      MR_Word CaseIdValueMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdConsts_23, (MR_Integer) 0))));
      MR_Word CaseIdValues_27;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), CaseIdValueMap_26, &CaseIdValues_27);
      ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0(MaxCaseNum_18, CaseNumVarLval_19, CaseNumVarDefn_20, InitCaseNumVarStmt_21, GetCaseNumSwitchStmt_22, CaseIdValues_27, OutVars_24, OutTypes_25, CodeModel_13, CanFail_14, Context_15, Stmts_16, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_32);
    }
    else
    {
      MR_Word CaseIdSolnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseIdConsts_23, (MR_Integer) 0))));
      MR_Word CaseIdSolns_30;
      MR_Word Var_34;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_lookup_switch\'/9", (MR_String) "CodeModel != model_non");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), CaseIdSolnMap_28, &CaseIdSolns_30);
      ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0(MaxCaseNum_18, CaseNumVarLval_19, CaseNumVarDefn_20, InitCaseNumVarStmt_21, GetCaseNumSwitchStmt_22, CaseIdSolns_30, OutVars_24, OutTypes_25, CanFail_14, Context_15, Stmts_16, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_32);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__342__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0(
  MR_Integer MaxCaseNum_14,
  MR_Word CaseNumVarLval_15,
  MR_Word CaseNumVarDefn_16,
  MR_Word InitCaseNumVarStmt_17,
  MR_Word GetCaseNumSwitchStmt_18,
  MR_Word CaseIdSolns_19,
  MR_Word OutVars_20,
  MR_Word OutTypes_21,
  MR_Word CanFail_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_26;
    MR_Word ModuleName_27;
    MR_Word MLDS_ModuleName_28;
    MR_Word Target_29;
    MR_Word GlobalData0_30;
    MR_Word MLDS_IntType_31;
    MR_Word FirstSolnFieldTypes_32;
    MR_Word FirstSolnStructTypeNum_33;
    MR_Word FirstSolnStructType_34;
    MR_Word FirstSolnFieldIds_35;
    MR_Word GlobalData1_36;
    MR_Word LaterSolnStructTypeNum_37;
    MR_Word LaterSolnStructType_38;
    MR_Word LaterSolnOutFieldIds_39;
    MR_Word GlobalData2_40;
    MR_Word NumLaterSolnsFieldId_44;
    MR_Word FirstLaterSolnRowFieldId_45;
    MR_Word FirstSolnOutFieldIds_46;
    MR_Integer AfterLastCaseNum_47;
    MR_Word RevFirstSolnRowInitializers_48;
    MR_Word LaterSolnRowInitializerCord_49;
    MR_Word FirstSolnRowInitializers_50;
    MR_Word LaterSolnRowInitializers_51;
    MR_Word FirstSolnVectorCommon_52;
    MR_Word GlobalData3_53;
    MR_Word LaterSolnVectorCommon_54;
    MR_Word GlobalData_55;
    MR_Word MatchDefns_56;
    MR_Word SuccessStmts_57;
    MR_Word SuccessBlockStmt_58;
    MR_Word ResultStmt_60;
    MR_Word Stmt_61;
    MR_Word Var_65;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer Var_76;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word Var_79;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word NumLaterSolnsFieldIdPrime_41;
    MR_Word FirstLaterSolnRowFieldIdPrime_42;
    MR_Word FirstSolnOutFieldIdsPrime_43;
    MR_Word Var_66;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_26);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_26, &ModuleName_27);
    MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_27);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_62, &Target_29);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_62, &GlobalData0_30);
    MLDS_IntType_31 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MLDS_IntType_31));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (OutTypes_21));
    }
    {
      FirstSolnFieldTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_32, 0) = ((MR_Box) (MLDS_IntType_31));
      MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_32, 1) = ((MR_Box) (Var_65));
    }
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_28, Context_23, Target_29, FirstSolnFieldTypes_32, &FirstSolnStructTypeNum_33, &FirstSolnStructType_34, &FirstSolnFieldIds_35, GlobalData0_30, &GlobalData1_36);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_28, Context_23, Target_29, OutTypes_21, &LaterSolnStructTypeNum_37, &LaterSolnStructType_38, &LaterSolnOutFieldIds_39, GlobalData1_36, &GlobalData2_40);
    succeeded = (FirstSolnFieldIds_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      NumLaterSolnsFieldIdPrime_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_35, (MR_Integer) 0))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnFieldIds_35, (MR_Integer) 1))));
      succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstLaterSolnRowFieldIdPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));
        FirstSolnOutFieldIdsPrime_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      NumLaterSolnsFieldId_44 = NumLaterSolnsFieldIdPrime_41;
      FirstLaterSolnRowFieldId_45 = FirstLaterSolnRowFieldIdPrime_42;
      FirstSolnOutFieldIds_46 = FirstSolnOutFieldIdsPrime_43;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_several_soln_lookup_switch\'/13", (MR_String) "bad FieldIds");
        return;
      }
    }
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0(FirstSolnStructType_34, LaterSolnStructType_38, CaseIdSolns_19, (MR_Integer) 0, &AfterLastCaseNum_47, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevFirstSolnRowInitializers_48, Var_72, &LaterSolnRowInitializerCord_49);
    Var_76 = (MR_Integer) ((MR_Unsigned) MaxCaseNum_14 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (AfterLastCaseNum_47));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Var_76));
    }
    mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_several_soln_lookup_switch\'/13", (MR_String) "MaxCaseNum + 1 != AfterLastCaseNum");
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevFirstSolnRowInitializers_48, &FirstSolnRowInitializers_50);
    LaterSolnRowInitializers_51 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializerCord_49);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_28, FirstSolnStructTypeNum_33, FirstSolnRowInitializers_50, &FirstSolnVectorCommon_52, GlobalData2_40, &GlobalData3_53);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_28, LaterSolnStructTypeNum_37, LaterSolnRowInitializers_51, &LaterSolnVectorCommon_54, GlobalData3_53, &GlobalData_55);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_55, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_78_78);
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (CaseNumVarLval_15));
    }
    ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_23, Var_79, OutVars_20, OutTypes_21, FirstSolnStructType_34, LaterSolnStructType_38, NumLaterSolnsFieldId_44, FirstLaterSolnRowFieldId_45, FirstSolnOutFieldIds_46, LaterSolnOutFieldIds_39, FirstSolnVectorCommon_52, LaterSolnVectorCommon_54, (MR_Integer) 1, &MatchDefns_56, &SuccessStmts_57, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_63);
    {
      SuccessBlockStmt_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SuccessBlockStmt_58, 0) = ((MR_Box) (MatchDefns_56));
      MR_hl_field(MR_mktag(0), SuccessBlockStmt_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SuccessBlockStmt_58, 2) = ((MR_Box) (SuccessStmts_57));
      MR_hl_field(MR_mktag(0), SuccessBlockStmt_58, 3) = ((MR_Box) (Context_23));
    }
    switch (CanFail_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IsCaseNumNonNegCond_59;

          {
            IsCaseNumNonNegCond_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), IsCaseNumNonNegCond_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), IsCaseNumNonNegCond_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[17])));
            MR_hl_field(MR_mktag(3), IsCaseNumNonNegCond_59, 2) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(3), IsCaseNumNonNegCond_59, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])));
          }
          {
            ResultStmt_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ResultStmt_60, 0) = ((MR_Box) (IsCaseNumNonNegCond_59));
            MR_hl_field(MR_mktag(2), ResultStmt_60, 1) = ((MR_Box) (SuccessBlockStmt_58));
            MR_hl_field(MR_mktag(2), ResultStmt_60, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), ResultStmt_60, 3) = ((MR_Box) (Context_23));
          }
        }
        break;
      case (MR_Integer) 1:
        ResultStmt_60 = SuccessBlockStmt_58;
        break;
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (CaseNumVarDefn_16));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ResultStmt_60));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (GetCaseNumSwitchStmt_18));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (InitCaseNumVarStmt_17));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Stmt_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_61, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), Stmt_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_61, 2) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Stmt_61, 3) = ((MR_Box) (Context_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__392__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer * STATE_VARIABLE_CurCaseNum_5,
  MR_Integer HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_7,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_8,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_9,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LaterSolnRowInitializersCord_10 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;
      *STATE_VARIABLE_RevFirstSolnRowInitializers_8 = STATE_VARIABLE_RevFirstSolnRowInitializers_0_7;
      *STATE_VARIABLE_CurCaseNum_5 = STATE_VARIABLE_CurCaseNum_0_4;
    }
    else
    {
      MR_Word CaseIdSolns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word CaseIdsSolns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word CaseId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdSolns_25, (MR_Integer) 0))));
      MR_Word Solns_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdSolns_25, (MR_Integer) 1))));
      MR_Integer CaseIdNum_33 = (MR_Integer) (CaseId_31);
      MR_Word FirstSolnRvals_34;
      MR_Word NumLaterSolnsRval_35;
      MR_Word FirstLaterSlotRval_36;
      MR_Word FirstSolnRowRvals_40;
      MR_Word FirstSolnRowInitializer_41;
      MR_Word Var_49;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_55_55;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_57_57;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_65_65;
      MR_Integer STATE_VARIABLE_CurCaseNum_66_66;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurCaseNum_0_4;
      MR_Integer next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_7;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (STATE_VARIABLE_CurCaseNum_0_4));
        MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (CaseIdNum_33));
      }
      mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_gen_string_trie_several_soln_lookup_slots\'/10", (MR_String) "CaseIdNum != !.CurCaseNum");
      if (((MR_tag((MR_Word) Solns_32)) == (MR_Integer) 0))
      {
        FirstSolnRvals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Solns_32, (MR_Integer) 0))));
        NumLaterSolnsRval_35 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12]));
        FirstLaterSlotRval_36 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[14]));
        STATE_VARIABLE_CurLaterSolnIndex_57_57 = HeadVar__6_6;
        STATE_VARIABLE_LaterSolnRowInitializersCord_55_55 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;
      }
      else
      {
        MR_Word LaterSolns_37;
        MR_Integer NumLaterSolns_38;
        MR_Word LaterSolnRowInitializers_39;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;

        FirstSolnRvals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_32, (MR_Integer) 0))));
        LaterSolns_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solns_32, (MR_Integer) 1))));
        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_37, &NumLaterSolns_38);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (NumLaterSolns_38));
        }
        {
          NumLaterSolnsRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NumLaterSolnsRval_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), NumLaterSolnsRval_35, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (HeadVar__6_6));
        }
        {
          FirstLaterSlotRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), FirstLaterSlotRval_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), FirstLaterSlotRval_36, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_2));
          MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (HeadVar__2_2));
        }
        LaterSolnRowInitializers_39 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_54, LaterSolns_37);
        Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_39);
        STATE_VARIABLE_LaterSolnRowInitializersCord_55_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_9, Var_56);
        STATE_VARIABLE_CurLaterSolnIndex_57_57 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) NumLaterSolns_38);
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (FirstLaterSlotRval_36));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (FirstSolnRvals_34));
      }
      {
        FirstSolnRowRvals_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstSolnRowRvals_40, 0) = ((MR_Box) (NumLaterSolnsRval_35));
        MR_hl_field(MR_mktag(1), FirstSolnRowRvals_40, 1) = ((MR_Box) (Var_62));
      }
      Var_63 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[8]), FirstSolnRowRvals_40);
      {
        FirstSolnRowInitializer_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_41, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_41, 1) = ((MR_Box) (Var_63));
      }
      {
        STATE_VARIABLE_RevFirstSolnRowInitializers_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_65_65, 0) = ((MR_Box) (FirstSolnRowInitializer_41));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_65_65, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_7));
      }
      STATE_VARIABLE_CurCaseNum_66_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurCaseNum_0_4 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CaseIdsSolns_26;
      next_value_of_STATE_VARIABLE_CurCaseNum_0_4 = STATE_VARIABLE_CurCaseNum_66_66;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_CurLaterSolnIndex_57_57;
      next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_7 = STATE_VARIABLE_RevFirstSolnRowInitializers_65_65;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_9 = STATE_VARIABLE_LaterSolnRowInitializersCord_55_55;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CurCaseNum_0_4 = next_value_of_STATE_VARIABLE_CurCaseNum_0_4;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevFirstSolnRowInitializers_0_7 = next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_7;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_9 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__227__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0(
  MR_Integer MaxCaseNum_15,
  MR_Word CaseNumVarLval_16,
  MR_Word CaseNumVarDefn_17,
  MR_Word InitCaseNumVarStmt_18,
  MR_Word GetCaseNumSwitchStmt_19,
  MR_Word CaseIdValues_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word CodeModel_23,
  MR_Word CanFail_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_28;
    MR_Word ModuleName_29;
    MR_Word MLDS_ModuleName_30;
    MR_Word Target_31;
    MR_Word FieldAssignStmts_44;
    MR_Word FoundMatchCommentStmt_46;
    MR_Word CommentedFieldAssignStmts_47;
    MR_Word LookupStmts_48;
    MR_Word LookupStmt_50;
    MR_Word FailStmts_51;
    MR_Word ResultStmt_52;
    MR_Word Stmt_58;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_59, &ModuleInfo_28);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_28, &ModuleName_29);
    MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_29);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_59, &Target_31);
    if ((OutTypes_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      FieldAssignStmts_44 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_70_70 = STATE_VARIABLE_Info_0_59;
    }
    else
    {
      MR_Word GlobalData0_34;
      MR_Word StructTypeNum_35;
      MR_Word StructType_36;
      MR_Word OutFieldIds_37;
      MR_Word GlobalData1_38;
      MR_Integer AfterLastCaseNum_39;
      MR_Word RevRowInitializers_40;
      MR_Word RowInitializers_41;
      MR_Word VectorCommon_42;
      MR_Word GlobalData_43;
      MR_Word Var_63;
      MR_Integer Var_66;
      MR_Word STATE_VARIABLE_Info_68_68;
      MR_Word Var_69;

      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_59, &GlobalData0_34);
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_30, Context_25, Target_31, OutTypes_22, &StructTypeNum_35, &StructType_36, &OutFieldIds_37, GlobalData0_34, &GlobalData1_38);
      ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0(StructType_36, CaseIdValues_20, (MR_Integer) 0, &AfterLastCaseNum_39, (MR_Word) ((MR_Unsigned) 0U), &RevRowInitializers_40);
      Var_66 = (MR_Integer) ((MR_Unsigned) MaxCaseNum_15 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (AfterLastCaseNum_39));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (Var_66));
      }
      mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_simple_lookup_switch\'/14", (MR_String) "MaxCaseNum + 1 != AfterLastCaseNum");
      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevRowInitializers_40, &RowInitializers_41);
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_30, StructTypeNum_35, RowInitializers_41, &VectorCommon_42, GlobalData1_38, &GlobalData_43);
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_43, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_68_68);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (CaseNumVarLval_16));
      }
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_21, OutTypes_22, OutFieldIds_37, VectorCommon_42, StructType_36, Var_69, Context_25, &FieldAssignStmts_44, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
    }
    {
      FoundMatchCommentStmt_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_4[3])));
      MR_hl_field(MR_mktag(3), FoundMatchCommentStmt_46, 2) = ((MR_Box) (Context_25));
    }
    {
      CommentedFieldAssignStmts_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CommentedFieldAssignStmts_47, 0) = ((MR_Box) (FoundMatchCommentStmt_46));
      MR_hl_field(MR_mktag(1), CommentedFieldAssignStmts_47, 1) = ((MR_Box) (FieldAssignStmts_44));
    }
    switch (CodeModel_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          LookupStmts_48 = CommentedFieldAssignStmts_47;
          STATE_VARIABLE_Info_75_75 = STATE_VARIABLE_Info_70_70;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_simple_lookup_switch\'/14", (MR_String) "model_non");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SetSuccessTrueStmt_49;
          MR_Word Var_77;

          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[15])), Context_25, &SetSuccessTrueStmt_49, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_75_75);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (SetSuccessTrueStmt_49));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          LookupStmts_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CommentedFieldAssignStmts_47, Var_77);
        }
        break;
    }
    {
      LookupStmt_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LookupStmt_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), LookupStmt_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), LookupStmt_50, 2) = ((MR_Box) (LookupStmts_48));
      MR_hl_field(MR_mktag(0), LookupStmt_50, 3) = ((MR_Box) (Context_25));
    }
    ml_backend__ml_string_switch__ml_gen_maybe_switch_failure_6_p_0(CodeModel_23, CanFail_24, Context_25, &FailStmts_51, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_60);
    if ((FailStmts_51 == (MR_Word) ((MR_Unsigned) 0U)))
      ResultStmt_52 = LookupStmt_50;
    else
    {
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FailStmts_51, (MR_Integer) 1))));
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FailStmts_51, (MR_Integer) 0))));

      if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word IsCaseNumNegCond_57;
        MR_Word Var_88;
        MR_Word Var_92;

        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (CaseNumVarLval_16));
        }
        {
          IsCaseNumNegCond_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[16])));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_57, 2) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_57, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LookupStmt_50));
        }
        {
          ResultStmt_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 0) = ((MR_Box) (IsCaseNumNegCond_57));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 1) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 2) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 3) = ((MR_Box) (Context_25));
        }
      }
      else
      {
        MR_Word FailStmt_104;
        MR_Word IsCaseNumNegCond_105;
        MR_Word Var_108;
        MR_Word Var_112;

        {
          FailStmt_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FailStmt_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), FailStmt_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), FailStmt_104, 2) = ((MR_Box) (FailStmts_51));
          MR_hl_field(MR_mktag(0), FailStmt_104, 3) = ((MR_Box) (Context_25));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (CaseNumVarLval_16));
        }
        {
          IsCaseNumNegCond_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_105, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[16])));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_105, 2) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(3), IsCaseNumNegCond_105, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[12])));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (LookupStmt_50));
        }
        {
          ResultStmt_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 0) = ((MR_Box) (IsCaseNumNegCond_105));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 1) = ((MR_Box) (FailStmt_104));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 2) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(2), ResultStmt_52, 3) = ((MR_Box) (Context_25));
        }
      }
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (CaseNumVarDefn_17));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (ResultStmt_52));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (GetCaseNumSwitchStmt_19));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (InitCaseNumVarStmt_18));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Stmt_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_58, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Stmt_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_58, 2) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), Stmt_58, 3) = ((MR_Box) (Context_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_58));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_maybe_switch_failure_6_p_0(
  MR_Word CodeModel_7,
  MR_Word CanFail_8,
  MR_Word Context_9,
  MR_Word * FailStmts_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  switch (CanFail_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_7, Context_9, FailStmts_10, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
      break;
    case (MR_Integer) 1:
      {
        *FailStmts_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__292__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer * STATE_VARIABLE_CurCaseNum_4,
  MR_Word STATE_VARIABLE_RevRowInitializers_0_5,
  MR_Word * STATE_VARIABLE_RevRowInitializers_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevRowInitializers_6 = STATE_VARIABLE_RevRowInitializers_0_5;
      *STATE_VARIABLE_CurCaseNum_4 = STATE_VARIABLE_CurCaseNum_0_3;
    }
    else
    {
      MR_Word CaseIdValue_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CaseIdValues_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CaseId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdValue_15, (MR_Integer) 0))));
      MR_Word OutRvals_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdValue_15, (MR_Integer) 1))));
      MR_Integer CaseIdNum_21 = (MR_Integer) (CaseId_19);
      MR_Word OutInitializers_22;
      MR_Word RowInitializer_23;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_RevRowInitializers_32_32;
      MR_Integer STATE_VARIABLE_CurCaseNum_33_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_CurCaseNum_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevRowInitializers_0_5;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (STATE_VARIABLE_CurCaseNum_0_3));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (CaseIdNum_21));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_gen_string_trie_simple_lookup_slots\'/6", (MR_String) "CaseIdNum != !.CurCaseNum");
      OutInitializers_22 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[7]), OutRvals_20);
      {
        RowInitializer_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RowInitializer_23, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(2), RowInitializer_23, 1) = ((MR_Box) (OutInitializers_22));
      }
      {
        STATE_VARIABLE_RevRowInitializers_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_32_32, 0) = ((MR_Box) (RowInitializer_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRowInitializers_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevRowInitializers_0_5));
      }
      STATE_VARIABLE_CurCaseNum_33_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurCaseNum_0_3 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CaseIdValues_16;
      next_value_of_STATE_VARIABLE_CurCaseNum_0_3 = STATE_VARIABLE_CurCaseNum_33_33;
      next_value_of_STATE_VARIABLE_RevRowInitializers_0_5 = STATE_VARIABLE_RevRowInitializers_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CurCaseNum_0_3 = next_value_of_STATE_VARIABLE_CurCaseNum_0_3;
      STATE_VARIABLE_RevRowInitializers_0_5 = next_value_of_STATE_VARIABLE_RevRowInitializers_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_9_p_0(
  MR_Word VarRval_10,
  MR_Word TaggedCases_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_Word CodeMap_18;
    MR_Integer MaxCaseNum_19;
    MR_Word CaseNumVarLval_20;
    MR_Word CaseNumVarDefn_21;
    MR_Word InitCaseNumVarStmt_22;
    MR_Word GetCaseNumSwitchStmt_23;
    MR_Word CodeCases_24;
    MR_Word RevCaseNumSwitchArms_25;
    MR_Word CaseNumSwitchArms_26;
    MR_Word FailStmts_27;
    MR_Word CaseNumDefault_28;
    MR_Word CaseNumSwitchRange_33;
    MR_Word CaseSwitchStmt_34;
    MR_Word Stmt_35;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    Var_38 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
    ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(CodeModel_12, EntryPackedArgsMap_14, TaggedCases_11, Var_38, &CodeMap_18, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_39_39);
    ml_backend__ml_string_switch__create_nested_switch_trie_10_p_0(TaggedCases_11, Context_15, VarRval_10, &MaxCaseNum_19, &CaseNumVarLval_20, &CaseNumVarDefn_21, &InitCaseNumVarStmt_22, &GetCaseNumSwitchStmt_23, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeMap_18, &CodeCases_24);
    ml_backend__ml_string_switch__generate_trie_arms_3_p_0(CodeCases_24, (MR_Word) ((MR_Unsigned) 0U), &RevCaseNumSwitchArms_25);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), RevCaseNumSwitchArms_25, &CaseNumSwitchArms_26);
    switch (CanFail_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_12, Context_15, &FailStmts_27, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_37);
        break;
      case (MR_Integer) 1:
        {
          FailStmts_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_40_40;
        }
        break;
    }
    if ((FailStmts_27 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (CodeModel_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CaseNumDefault_28 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word FailStmt_29;

            {
              FailStmt_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FailStmt_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FailStmt_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FailStmt_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FailStmt_29, 3) = ((MR_Box) (Context_15));
            }
            {
              CaseNumDefault_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CaseNumDefault_28, 0) = ((MR_Box) (FailStmt_29));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_jump_switch\'/9", (MR_String) "failure does not assign to succeeded");
              return;
            }
          }
          break;
      }
    else
    {
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FailStmts_27, (MR_Integer) 1))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FailStmts_27, (MR_Integer) 0))));

      if ((Var_69 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          CaseNumDefault_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CaseNumDefault_28, 0) = ((MR_Box) (Var_70));
        }
      else
      {
        MR_Word FailStmt_68;

        {
          FailStmt_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FailStmt_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), FailStmt_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), FailStmt_68, 2) = ((MR_Box) (FailStmts_27));
          MR_hl_field(MR_mktag(0), FailStmt_68, 3) = ((MR_Box) (Context_15));
        }
        {
          CaseNumDefault_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CaseNumDefault_28, 0) = ((MR_Box) (FailStmt_68));
        }
      }
    }
    {
      CaseNumSwitchRange_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CaseNumSwitchRange_33, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), CaseNumSwitchRange_33, 1) = ((MR_Box) (MaxCaseNum_19));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (CaseNumVarLval_20));
    }
    {
      CaseSwitchStmt_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13])));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 2) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 3) = ((MR_Box) (CaseNumSwitchRange_33));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 4) = ((MR_Box) (CaseNumSwitchArms_26));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 5) = ((MR_Box) (CaseNumDefault_28));
      MR_hl_field(MR_mktag(3), CaseSwitchStmt_34, 6) = ((MR_Box) (Context_15));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (CaseNumVarDefn_21));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (CaseSwitchStmt_34));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (GetCaseNumSwitchStmt_23));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (InitCaseNumVarStmt_22));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Stmt_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_35, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Stmt_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_35, 2) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Stmt_35, 3) = ((MR_Box) (Context_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_35));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_String_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CodeMap_0_4,
  MR_Word * STATE_VARIABLE_CodeMap_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_CodeMap_5 = STATE_VARIABLE_CodeMap_0_4;
    }
    else
    {
      MR_Word TaggedCase_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TaggedCases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CodeMap_26_26;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word MainTaggedConsId_39;
      MR_Word OtherTaggedConsIds_40;
      MR_Word CaseId_41;
      MR_Word Goal_42;
      MR_Word GoalStmt_43;
      MR_String MainString_44;
      MR_Word OtherStrings_45;
      MR_String Strings_46;
      MR_String CommentString_47;
      MR_Word GoalInfo_49;
      MR_Word Context_50;
      MR_Word Comment_51;
      MR_Word CaseStmt_52;
      MR_Word STATE_VARIABLE_Info_31_53;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CodeMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(HeadVar__2_2, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_31_53);
      MainTaggedConsId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_18, (MR_Integer) 0))));
      OtherTaggedConsIds_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_18, (MR_Integer) 1))));
      CaseId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_18, (MR_Integer) 2))));
      Goal_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_18, (MR_Integer) 3))));
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(HeadVar__1_1, Goal_42, &GoalStmt_43, STATE_VARIABLE_Info_31_53, &STATE_VARIABLE_Info_27_27);
      MainString_44 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(MainTaggedConsId_39);
      OtherStrings_45 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[6]), OtherTaggedConsIds_40);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MainString_44));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (OtherStrings_45));
      }
      Strings_46 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_57);
      CommentString_47 = mercury__string__f_43_43_2_f_0((MR_String) "case ", Strings_46);
      GoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_42, (MR_Integer) 1))));
      Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_49);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CommentString_47));
      }
      {
        Comment_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Comment_51, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Comment_51, 1) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(3), Comment_51, 2) = ((MR_Box) (Context_50));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (GoalStmt_43));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Comment_51));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
      }
      {
        CaseStmt_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CaseStmt_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CaseStmt_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CaseStmt_52, 2) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), CaseStmt_52, 3) = ((MR_Box) (Context_50));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (CaseId_41)), ((MR_Box) (CaseStmt_52)), STATE_VARIABLE_CodeMap_0_4, &STATE_VARIABLE_CodeMap_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TaggedCases_19;
      next_value_of_STATE_VARIABLE_CodeMap_0_4 = STATE_VARIABLE_CodeMap_26_26;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CodeMap_0_4 = next_value_of_STATE_VARIABLE_CodeMap_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
  MR_Word TaggedConsId_3)
{
  {
    MR_bool succeeded;
    MR_String String_4;
    MR_Word ConsTag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_3, (MR_Integer) 1))));
    MR_String ConsString_7;

    succeeded = ((((MR_tag((MR_Word) ConsTag_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      ConsString_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1))));
      {
        MR_String Var_9;

        Var_9 = mercury__string__f_43_43_2_f_0(ConsString_7, (MR_String) "\"");
        String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_9);
      }
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_string_switch.gen_string_switch_case_comment\'/1", (MR_String) "non-string tag");
    }
    return String_4;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__generate_trie_arms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSwitchCases_0_2,
  MR_Word * STATE_VARIABLE_RevSwitchCases_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevSwitchCases_3 = STATE_VARIABLE_RevSwitchCases_0_2;
    else
    {
      MR_Word CasePair_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CasePairs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CaseId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CasePair_7, (MR_Integer) 0))));
      MR_Word CaseStmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CasePair_7, (MR_Integer) 1))));
      MR_Integer CaseNum_12 = (MR_Integer) (CaseId_10);
      MR_Word MatchCond_13;
      MR_Word Case_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_RevSwitchCases_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSwitchCases_0_2;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (CaseNum_12));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MatchCond_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MatchCond_13, 0) = ((MR_Box) (Var_17));
      }
      {
        Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MatchCond_13));
        MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (CaseStmt_11));
      }
      {
        STATE_VARIABLE_RevSwitchCases_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSwitchCases_20_20, 0) = ((MR_Box) (Case_14));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSwitchCases_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevSwitchCases_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CasePairs_8;
      next_value_of_STATE_VARIABLE_RevSwitchCases_0_2 = STATE_VARIABLE_RevSwitchCases_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevSwitchCases_0_2 = next_value_of_STATE_VARIABLE_RevSwitchCases_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__create_nested_switch_trie_10_p_0(
  MR_Word TaggedCases_11,
  MR_Word Context_12,
  MR_Word VarRval_13,
  MR_Integer * MaxCaseNum_14,
  MR_Word * CaseNumVarLval_15,
  MR_Word * CaseNumVarDefn_16,
  MR_Word * InitCaseNumVarStmt_17,
  MR_Word * GetCaseNumSwitchStmt_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word Target_20;
    MR_Word CompilationTarget_21;
    MR_Word Encoding_22;
    MR_Word TopTrieNode_23;
    MR_Word StrsCaseIds_32;
    MR_Word CaseNumVarName_54;
    MR_Word CaseNumVarType_55;
    MR_Word InitAssign_56;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_24, &Target_20);
    switch (Target_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CompilationTarget_21 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        CompilationTarget_21 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        CompilationTarget_21 = (MR_Integer) 2;
        break;
    }
    Encoding_22 = backend_libs__string_encoding__target_string_encoding_1_f_0(CompilationTarget_21);
    ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0(TaggedCases_11, (MR_Integer) -1, MaxCaseNum_14, (MR_Word) ((MR_Unsigned) 0U), &StrsCaseIds_32);
    if ((StrsCaseIds_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_43;

      Var_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0));
      {
        TopTrieNode_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TopTrieNode_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TopTrieNode_23, 1) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), TopTrieNode_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word HeadStrCaseId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StrsCaseIds_32, (MR_Integer) 0))));
      MR_Word TailStrCaseIds_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StrsCaseIds_32, (MR_Integer) 1))));
      MR_String HeadStr_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadStrCaseId_33, (MR_Integer) 0))));
      MR_Word HeadCaseId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadStrCaseId_33, (MR_Integer) 1))));
      MR_Word HeadStrCodeUnits_37;
      MR_Word TopTrieNode1_38;

      backend_libs__string_encoding__to_code_unit_list_3_p_0(Encoding_22, HeadStr_35, &HeadStrCodeUnits_37);
      {
        TopTrieNode1_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TopTrieNode1_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), TopTrieNode1_38, 1) = ((MR_Box) (HeadStrCodeUnits_37));
        MR_hl_field(MR_mktag(0), TopTrieNode1_38, 2) = ((MR_Box) (HeadCaseId_36));
      }
      ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0(Encoding_22, TailStrCaseIds_34, TopTrieNode1_38, &TopTrieNode_23);
    }
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 11, &CaseNumVarName_54, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
    CaseNumVarType_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13]));
    *CaseNumVarDefn_16 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(CaseNumVarName_54, CaseNumVarType_55, (MR_Word) ((MR_Unsigned) 0U), Context_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *CaseNumVarLval_15 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CaseNumVarName_54));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CaseNumVarType_55));
    }
    {
      InitAssign_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), InitAssign_56, 0) = ((MR_Box) (*CaseNumVarLval_15));
      MR_hl_field(MR_mktag(2), InitAssign_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[14])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *InitCaseNumVarStmt_17 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InitAssign_56));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_12));
    }
    ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0(Encoding_22, VarRval_13, *CaseNumVarLval_15, Context_12, (MR_Integer) 0, TopTrieNode_23, GetCaseNumSwitchStmt_18);
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevStrsCaseIds_12;

    ml_backend__ml_string_switch__add_to_strs_case_ids_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevStrsCaseIds_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevStrsCaseIds_12));
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxCaseNum_0_2,
  MR_Integer * STATE_VARIABLE_MaxCaseNum_3,
  MR_Word STATE_VARIABLE_RevStrsCaseIds_0_4,
  MR_Word * STATE_VARIABLE_RevStrsCaseIds_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevStrsCaseIds_5 = STATE_VARIABLE_RevStrsCaseIds_0_4;
      *STATE_VARIABLE_MaxCaseNum_3 = STATE_VARIABLE_MaxCaseNum_0_2;
    }
    else
    {
      MR_Word TaggedCase_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TaggedCases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainTaggedConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_12, (MR_Integer) 0))));
      MR_Word OtherTaggedConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_12, (MR_Integer) 1))));
      MR_Word CaseId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_12, (MR_Integer) 2))));
      MR_Integer CaseNum_20 = (MR_Integer) (CaseId_18);
      MR_Integer STATE_VARIABLE_MaxCaseNum_25_25;
      MR_Word STATE_VARIABLE_RevStrsCaseIds_26_26;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_RevStrsCaseIds_28_28;
      MR_Box conv1_STATE_VARIABLE_RevStrsCaseIds_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxCaseNum_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevStrsCaseIds_0_4;

      mercury__int__max_3_p_0(CaseNum_20, STATE_VARIABLE_MaxCaseNum_0_2, &STATE_VARIABLE_MaxCaseNum_25_25);
      ml_backend__ml_string_switch__add_to_strs_case_ids_4_p_0(CaseId_18, MainTaggedConsId_16, STATE_VARIABLE_RevStrsCaseIds_0_4, &STATE_VARIABLE_RevStrsCaseIds_26_26);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_string_switch__build_str_case_id_assoc_list_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (CaseId_18));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[3]), Var_27, OtherTaggedConsIds_17, ((MR_Box) (STATE_VARIABLE_RevStrsCaseIds_26_26)), &conv1_STATE_VARIABLE_RevStrsCaseIds_28_28);
      STATE_VARIABLE_RevStrsCaseIds_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_RevStrsCaseIds_28_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TaggedCases_13;
      next_value_of_STATE_VARIABLE_MaxCaseNum_0_2 = STATE_VARIABLE_MaxCaseNum_25_25;
      next_value_of_STATE_VARIABLE_RevStrsCaseIds_0_4 = STATE_VARIABLE_RevStrsCaseIds_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxCaseNum_0_2 = next_value_of_STATE_VARIABLE_MaxCaseNum_0_2;
      STATE_VARIABLE_RevStrsCaseIds_0_4 = next_value_of_STATE_VARIABLE_RevStrsCaseIds_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__add_to_strs_case_ids_4_p_0(
  MR_Word CaseId_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_RevStrsCaseIds_0_11,
  MR_Word * STATE_VARIABLE_RevStrsCaseIds_12)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_6, (MR_Integer) 1))));
    MR_String String_10;

    succeeded = ((((MR_tag((MR_Word) ConsTag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      String_10 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (String_10));
          MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (CaseId_5));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevStrsCaseIds_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevStrsCaseIds_0_11));
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.add_to_strs_case_ids\'/4", (MR_String) "non-string tag");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__chase_one_cond_trie_nodes__715__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0(
  MR_Word Encoding_10,
  MR_Word VarRval_11,
  MR_Word CaseNumVarLval_12,
  MR_Word Context_13,
  MR_Integer NumMatched_14,
  MR_Word TrieNode_15,
  MR_Word RevCond0_16,
  MR_Word * RevCond_17,
  MR_Word * ThenStmt_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TrieNode_15)) == (MR_Integer) 1);
    MR_Word RevMatchedCodeUnits_19;
    MR_Word OneChoicePair_23;
    MR_Word TypeCtorInfo_44_44;
    MR_Word TypeCtorInfo_45_45;
    MR_Word ChoiceMap_20;
    MR_Word MaybeEnd_21;
    MR_Word ChoicePairs_22;
    MR_Word Var_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevMatchedCodeUnits_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_15, (MR_Integer) 0))));
      ChoiceMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_15, (MR_Integer) 1))));
      MaybeEnd_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_15, (MR_Integer) 2))));
      TypeCtorInfo_44_44 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      TypeCtorInfo_45_45 = (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0);
      mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_44_44, TypeCtorInfo_45_45, ChoiceMap_20, &ChoicePairs_22);
      succeeded = (MaybeEnd_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ChoicePairs_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OneChoicePair_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChoicePairs_22, (MR_Integer) 0))));
          Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChoicePairs_22, (MR_Integer) 1))));
          succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer OneCodeUnit_24;
      MR_Word OneSubTrieNode_25;
      MR_Word CurCodeUnitRval_26;
      MR_Word OneCodeUnitConst_27;
      MR_Word CurCond_28;
      MR_Word RevCond1_29;
      MR_Word Var_31;
      MR_Integer Var_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Integer Var_42;
      MR_Integer next_value_of_NumMatched_14;
      MR_Word next_value_of_TrieNode_15;
      MR_Word next_value_of_RevCond0_16;

      Var_34 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_19);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (NumMatched_14));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Var_34));
      }
      mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140ml_backend.ml_string_switch.chase_one_cond_trie_nodes\'/9", (MR_String) "length(RevMatchedCodeUnits) != NumMatched");
      OneCodeUnit_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OneChoicePair_23, (MR_Integer) 0))));
      OneSubTrieNode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneChoicePair_23, (MR_Integer) 1))));
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (NumMatched_14));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        CurCodeUnitRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_26, 2) = ((MR_Box) (VarRval_11));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_26, 3) = ((MR_Box) (Var_36));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (OneCodeUnit_24));
      }
      {
        OneCodeUnitConst_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OneCodeUnitConst_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), OneCodeUnitConst_27, 1) = ((MR_Box) (Var_38));
      }
      {
        CurCond_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CurCond_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), CurCond_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11])));
        MR_hl_field(MR_mktag(3), CurCond_28, 2) = ((MR_Box) (CurCodeUnitRval_26));
        MR_hl_field(MR_mktag(3), CurCond_28, 3) = ((MR_Box) (OneCodeUnitConst_27));
      }
      {
        RevCond1_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), RevCond1_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), RevCond1_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), RevCond1_29, 2) = ((MR_Box) (RevCond0_16));
        MR_hl_field(MR_mktag(3), RevCond1_29, 3) = ((MR_Box) (CurCond_28));
      }
      Var_42 = (MR_Integer) ((MR_Unsigned) NumMatched_14 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_NumMatched_14 = Var_42;
      next_value_of_TrieNode_15 = OneSubTrieNode_25;
      next_value_of_RevCond0_16 = RevCond1_29;
      NumMatched_14 = next_value_of_NumMatched_14;
      TrieNode_15 = next_value_of_TrieNode_15;
      RevCond0_16 = next_value_of_RevCond0_16;
      continue;
    }
    else
    {
      *RevCond_17 = RevCond0_16;
      ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0(Encoding_10, VarRval_11, CaseNumVarLval_12, Context_13, NumMatched_14, TrieNode_15, ThenStmt_18);
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__convert_trie_choices_to_nested_switches_8_p_0(
  MR_Word Encoding_1,
  MR_Word VarRval_2,
  MR_Word CaseNumVarLval_3,
  MR_Word Context_4,
  MR_Integer NumMatched_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_SwitchArmsCord_0_7,
  MR_Word * STATE_VARIABLE_SwitchArmsCord_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SwitchArmsCord_8 = STATE_VARIABLE_SwitchArmsCord_0_7;
    else
    {
      MR_Word ChoicePair_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word ChoicePairs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Integer CodeUnit_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ChoicePair_22, (MR_Integer) 0))));
      MR_Word SubTrieNode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChoicePair_22, (MR_Integer) 1))));
      MR_Word SwitchArmStmt_27;
      MR_Word MatchCond_28;
      MR_Word SwitchArm_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_SwitchArmsCord_35_35;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7;

      ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0(Encoding_1, VarRval_2, CaseNumVarLval_3, Context_4, NumMatched_5, SubTrieNode_26, &SwitchArmStmt_27);
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (CodeUnit_25));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        MatchCond_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MatchCond_28, 0) = ((MR_Box) (Var_32));
      }
      {
        SwitchArm_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SwitchArm_29, 0) = ((MR_Box) (MatchCond_28));
        MR_hl_field(MR_mktag(0), SwitchArm_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SwitchArm_29, 2) = ((MR_Box) (SwitchArmStmt_27));
      }
      STATE_VARIABLE_SwitchArmsCord_35_35 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), STATE_VARIABLE_SwitchArmsCord_0_7, ((MR_Box) (SwitchArm_29)));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ChoicePairs_23;
      next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7 = STATE_VARIABLE_SwitchArmsCord_35_35;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_SwitchArmsCord_0_7 = next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__611__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__662__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0(
  MR_Word Encoding_8,
  MR_Word VarRval_9,
  MR_Word CaseNumVarLval_10,
  MR_Word Context_11,
  MR_Integer NumMatched_12,
  MR_Word TrieNode_13,
  MR_Word * Stmt_14)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TrieNode_13)) == (MR_Integer) 1))
    {
      MR_Word ChoiceMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_13, (MR_Integer) 1))));
      MR_Word MaybeEnd_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_13, (MR_Integer) 2))));
      MR_Word CurCodeUnitRval_29;
      MR_Word ChoicePairs_30;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word RevMatchedCodeUnits_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode_13, (MR_Integer) 0))));
      MR_Word OneChoicePair_31;
      MR_Word Var_54;

      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (NumMatched_12));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        CurCodeUnitRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_29, 2) = ((MR_Box) (VarRval_9));
        MR_hl_field(MR_mktag(3), CurCodeUnitRval_29, 3) = ((MR_Box) (Var_52));
      }
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), ChoiceMap_27, &ChoicePairs_30);
      succeeded = (MaybeEnd_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ChoicePairs_30 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OneChoicePair_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChoicePairs_30, (MR_Integer) 0))));
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChoicePairs_30, (MR_Integer) 1))));
          succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Integer OneCodeUnit_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OneChoicePair_31, (MR_Integer) 0))));
        MR_Word OneSubTrieNode_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneChoicePair_31, (MR_Integer) 1))));
        MR_Word OneCodeUnitConst_34;
        MR_Word FirstCond_35;
        MR_Word AllCond_36;
        MR_Word ThenStmt_37;
        MR_Word Var_55;
        MR_Integer Var_58;

        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (OneCodeUnit_32));
        }
        {
          OneCodeUnitConst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OneCodeUnitConst_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), OneCodeUnitConst_34, 1) = ((MR_Box) (Var_55));
        }
        {
          FirstCond_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), FirstCond_35, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), FirstCond_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[11])));
          MR_hl_field(MR_mktag(3), FirstCond_35, 2) = ((MR_Box) (CurCodeUnitRval_29));
          MR_hl_field(MR_mktag(3), FirstCond_35, 3) = ((MR_Box) (OneCodeUnitConst_34));
        }
        Var_58 = (MR_Integer) ((MR_Unsigned) NumMatched_12 + (MR_Unsigned) (MR_Integer) 1);
        ml_backend__ml_string_switch__chase_one_cond_trie_nodes_9_p_0(Encoding_8, VarRval_9, CaseNumVarLval_10, Context_11, Var_58, OneSubTrieNode_33, FirstCond_35, &AllCond_36, &ThenStmt_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_14 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (AllCond_36));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ThenStmt_37));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_11));
        }
      }
      else
      {
        MR_Word SwitchArmsCord0_38;
        MR_Word SwitchArms0_39;
        MR_Word SwitchArms_40;
        MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) NumMatched_12 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word Var_62;
        MR_Word Var_68;
        MR_Integer NumRevMatchedCodeUnits_84;

        Var_62 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0));
        ml_backend__ml_string_switch__convert_trie_choices_to_nested_switches_8_p_0(Encoding_8, VarRval_9, CaseNumVarLval_10, Context_11, Var_61, ChoicePairs_30, Var_62, &SwitchArmsCord0_38);
        SwitchArms0_39 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SwitchArmsCord0_38);
        if ((MaybeEnd_28 == (MR_Word) ((MR_Unsigned) 0U)))
          SwitchArms_40 = SwitchArms0_39;
        else
        {
          MR_Word EndCaseId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_28, (MR_Integer) 0))));
          MR_Integer EndCaseNum_42 = (MR_Integer) (EndCaseId_41);
          MR_Word EndCaseNumRval_43;
          MR_Word EndSetCaseNumVarAssign_44;
          MR_Word EndSetCaseNumVarStmt_45;
          MR_Word EndSwitchArm_48;
          MR_Word Var_64;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (EndCaseNum_42));
          }
          {
            EndCaseNumRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), EndCaseNumRval_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), EndCaseNumRval_43, 1) = ((MR_Box) (Var_64));
          }
          {
            EndSetCaseNumVarAssign_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), EndSetCaseNumVarAssign_44, 0) = ((MR_Box) (CaseNumVarLval_10));
            MR_hl_field(MR_mktag(2), EndSetCaseNumVarAssign_44, 1) = ((MR_Box) (EndCaseNumRval_43));
          }
          {
            EndSetCaseNumVarStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), EndSetCaseNumVarStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), EndSetCaseNumVarStmt_45, 1) = ((MR_Box) (EndSetCaseNumVarAssign_44));
            MR_hl_field(MR_mktag(3), EndSetCaseNumVarStmt_45, 2) = ((MR_Box) (Context_11));
          }
          {
            EndSwitchArm_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EndSwitchArm_48, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), EndSwitchArm_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), EndSwitchArm_48, 2) = ((MR_Box) (EndSetCaseNumVarStmt_45));
          }
          {
            SwitchArms_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SwitchArms_40, 0) = ((MR_Box) (EndSwitchArm_48));
            MR_hl_field(MR_mktag(1), SwitchArms_40, 1) = ((MR_Box) (SwitchArms0_39));
          }
        }
        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_86, &NumRevMatchedCodeUnits_84);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (NumMatched_12));
          MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (NumRevMatchedCodeUnits_84));
        }
        mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140ml_backend.ml_string_switch.convert_trie_to_nested_switches\'/7", (MR_String) "NumRevMatchedCodeUnits != NumMatched");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_14 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_1[13])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CurCodeUnitRval_29));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SwitchArms_40));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_11));
        }
      }
    }
    else
    {
      MR_Word RevMatchedCodeUnits_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode_13, (MR_Integer) 0))));
      MR_Word NotYetMatchedCodeUnits_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode_13, (MR_Integer) 1))));
      MR_Word CaseId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode_13, (MR_Integer) 2))));
      MR_Integer CaseNum_18 = (MR_Integer) (CaseId_17);
      MR_Word CaseNumRval_19;
      MR_Word SetCaseNumVarAssign_20;
      MR_Word SetCaseNumVarStmt_21;
      MR_Word AllCodeUnits_22;
      MR_Integer NumRevMatchedCodeUnits_23;
      MR_Word StringRval_25;
      MR_Word CondRval_26;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_82;
      MR_String String_24;

      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (CaseNum_18));
      }
      {
        CaseNumRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CaseNumRval_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), CaseNumRval_19, 1) = ((MR_Box) (Var_74));
      }
      {
        SetCaseNumVarAssign_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), SetCaseNumVarAssign_20, 0) = ((MR_Box) (CaseNumVarLval_10));
        MR_hl_field(MR_mktag(2), SetCaseNumVarAssign_20, 1) = ((MR_Box) (CaseNumRval_19));
      }
      {
        SetCaseNumVarStmt_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SetCaseNumVarStmt_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), SetCaseNumVarStmt_21, 1) = ((MR_Box) (SetCaseNumVarAssign_20));
        MR_hl_field(MR_mktag(3), SetCaseNumVarStmt_21, 2) = ((MR_Box) (Context_11));
      }
      Var_75 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_15);
      AllCodeUnits_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_75, NotYetMatchedCodeUnits_16);
      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_15, &NumRevMatchedCodeUnits_23);
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_string_switch__convert_trie_to_nested_switches_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (NumMatched_12));
        MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (NumRevMatchedCodeUnits_23));
      }
      mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140ml_backend.ml_string_switch.convert_trie_to_nested_switches\'/7", (MR_String) "NumRevMatchedCodeUnits != NumMatched");
      succeeded = backend_libs__string_encoding__from_code_unit_list_3_p_0(Encoding_8, AllCodeUnits_22, &String_24);
      if (succeeded)
      {
        MR_Word Var_79;

        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (String_24));
        }
        {
          StringRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StringRval_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), StringRval_25, 1) = ((MR_Box) (Var_79));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.convert_trie_to_nested_switches\'/7", (MR_String) "code units cannot be turned back into string");
          return;
        }
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (NumMatched_12));
      }
      {
        CondRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CondRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), CondRval_26, 1) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(3), CondRval_26, 2) = ((MR_Box) (VarRval_9));
        MR_hl_field(MR_mktag(3), CondRval_26, 3) = ((MR_Box) (StringRval_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Stmt_14 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (CondRval_26));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (SetCaseNumVarStmt_21));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_11));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__517__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__531__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TrieNode_0_3,
  MR_Word * STATE_VARIABLE_TrieNode_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TrieNode_4 = STATE_VARIABLE_TrieNode_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Str_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 0))));
      MR_Word CaseId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 1))));
      MR_Word StrCodeUnits_15;
      MR_Word STATE_VARIABLE_TrieNode_19_19;
      MR_Word ChoiceMap0_29;
      MR_Word MaybeEnd0_30;
      MR_Word ChoiceMap_35;
      MR_Word MaybeEnd_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TrieNode_0_3;

      backend_libs__string_encoding__to_code_unit_list_3_p_0(HeadVar__1_1, Str_13, &StrCodeUnits_15);
      if (((MR_tag((MR_Word) STATE_VARIABLE_TrieNode_0_3)) == (MR_Integer) 1))
      {
        MR_Word ChoiceMatched_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 0))));
        MR_Word Var_37;

        ChoiceMap0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 1))));
        MaybeEnd0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 2))));
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (ChoiceMatched_34));
        }
        mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_node\'/5", (MR_String) "ChoiceMatched didn\'t");
      }
      else
      {
        MR_Word LeafMatched_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 0))));
        MR_Word LeafNotYetMatched_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 1))));
        MR_Word LeafCaseId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TrieNode_0_3, (MR_Integer) 2))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ml_backend__ml_string_switch__insert_cases_into_trie_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (LeafMatched_26));
        }
        mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_node\'/5", (MR_String) "LeafMatched didn\'t");
        if ((LeafNotYetMatched_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ChoiceMap0_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0));
          {
            MaybeEnd0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnd0_30, 0) = ((MR_Box) (LeafCaseId_28));
          }
        }
        else
        {
          MR_Integer LeafFirstCodeUnit_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LeafNotYetMatched_27, (MR_Integer) 0))));
          MR_Word LeafLaterCodeUnits_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeafNotYetMatched_27, (MR_Integer) 1))));
          MR_Word NewLeaf_33;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (LeafFirstCodeUnit_31));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (LeafMatched_26));
          }
          {
            NewLeaf_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewLeaf_33, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), NewLeaf_33, 1) = ((MR_Box) (LeafLaterCodeUnits_32));
            MR_hl_field(MR_mktag(0), NewLeaf_33, 2) = ((MR_Box) (LeafCaseId_28));
          }
          ChoiceMap0_29 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), ((MR_Box) (LeafFirstCodeUnit_31)), ((MR_Box) (NewLeaf_33)));
          MaybeEnd0_30 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      if ((StrCodeUnits_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ChoiceMap_35 = ChoiceMap0_29;
        if ((MaybeEnd0_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeEnd_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnd_36, 0) = ((MR_Box) (CaseId_14));
          }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_choice\'/7", (MR_String) "two strings end at same trie node");
            return;
          }
        }
      }
      else
      {
        MR_Integer InsertFirstCodeUnit_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StrCodeUnits_15, (MR_Integer) 0))));
        MR_Word InsertLaterCodeUnits_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StrCodeUnits_15, (MR_Integer) 1))));
        MR_Word SubTrieNode0_60;
        MR_Box conv0_SubTrieNode0_60;

        MaybeEnd_36 = MaybeEnd0_30;
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), ChoiceMap0_29, InsertFirstCodeUnit_58, &conv0_SubTrieNode0_60);
        if (succeeded)
        {
          SubTrieNode0_60 = ((MR_Word) (conv0_SubTrieNode0_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word SubTrieNode_61;
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (InsertFirstCodeUnit_58));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0(Var_62, InsertLaterCodeUnits_59, CaseId_14, SubTrieNode0_60, &SubTrieNode_61);
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), InsertFirstCodeUnit_58, ((MR_Box) (SubTrieNode_61)), ChoiceMap0_29, &ChoiceMap_35);
        }
        else
        {
          MR_Word Var_63;
          MR_Word SubTrieNode_66;

          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (InsertFirstCodeUnit_58));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubTrieNode_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubTrieNode_66, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), SubTrieNode_66, 1) = ((MR_Box) (InsertLaterCodeUnits_59));
            MR_hl_field(MR_mktag(0), SubTrieNode_66, 2) = ((MR_Box) (CaseId_14));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), InsertFirstCodeUnit_58, ((MR_Box) (SubTrieNode_66)), ChoiceMap0_29, &ChoiceMap_35);
        }
      }
      {
        STATE_VARIABLE_TrieNode_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_19_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_19_19, 1) = ((MR_Box) (ChoiceMap_35));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TrieNode_19_19, 2) = ((MR_Box) (MaybeEnd_36));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_TrieNode_0_3 = STATE_VARIABLE_TrieNode_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TrieNode_0_3 = next_value_of_STATE_VARIABLE_TrieNode_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__517__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__insert_case_into_trie_node__531__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0(
  MR_Word InsertMatched_6,
  MR_Word InsertNotYetMatched_7,
  MR_Word InsertCaseId_8,
  MR_Word TrieNode0_9,
  MR_Word * TrieNode_10)
{
  {
    MR_bool succeeded;
    MR_Word ChoiceMap0_14;
    MR_Word MaybeEnd0_15;
    MR_Word ChoiceMap_20;
    MR_Word MaybeEnd_21;

    if (((MR_tag((MR_Word) TrieNode0_9)) == (MR_Integer) 1))
    {
      MR_Word ChoiceMatched_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode0_9, (MR_Integer) 0))));
      MR_Word Var_22;

      ChoiceMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode0_9, (MR_Integer) 1))));
      MaybeEnd0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrieNode0_9, (MR_Integer) 2))));
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (InsertMatched_6));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (ChoiceMatched_19));
      }
      mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_node\'/5", (MR_String) "ChoiceMatched didn\'t");
    }
    else
    {
      MR_Word LeafMatched_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode0_9, (MR_Integer) 0))));
      MR_Word LeafNotYetMatched_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode0_9, (MR_Integer) 1))));
      MR_Word LeafCaseId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrieNode0_9, (MR_Integer) 2))));
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (InsertMatched_6));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (LeafMatched_11));
      }
      mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_node\'/5", (MR_String) "LeafMatched didn\'t");
      if ((LeafNotYetMatched_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ChoiceMap0_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0));
        {
          MaybeEnd0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnd0_15, 0) = ((MR_Box) (LeafCaseId_13));
        }
      }
      else
      {
        MR_Integer LeafFirstCodeUnit_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LeafNotYetMatched_12, (MR_Integer) 0))));
        MR_Word LeafLaterCodeUnits_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeafNotYetMatched_12, (MR_Integer) 1))));
        MR_Word NewLeaf_18;
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (LeafFirstCodeUnit_16));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (LeafMatched_11));
        }
        {
          NewLeaf_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewLeaf_18, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(0), NewLeaf_18, 1) = ((MR_Box) (LeafLaterCodeUnits_17));
          MR_hl_field(MR_mktag(0), NewLeaf_18, 2) = ((MR_Box) (LeafCaseId_13));
        }
        ChoiceMap0_14 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), ((MR_Box) (LeafFirstCodeUnit_16)), ((MR_Box) (NewLeaf_18)));
        MaybeEnd0_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    if ((InsertNotYetMatched_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ChoiceMap_20 = ChoiceMap0_14;
      if ((MaybeEnd0_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeEnd_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnd_21, 0) = ((MR_Box) (InsertCaseId_8));
        }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.insert_case_into_trie_choice\'/7", (MR_String) "two strings end at same trie node");
          return;
        }
      }
    }
    else
    {
      MR_Integer InsertFirstCodeUnit_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), InsertNotYetMatched_7, (MR_Integer) 0))));
      MR_Word InsertLaterCodeUnits_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InsertNotYetMatched_7, (MR_Integer) 1))));
      MR_Word SubTrieNode0_45;
      MR_Box conv0_SubTrieNode0_45;

      MaybeEnd_21 = MaybeEnd0_15;
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), ChoiceMap0_14, InsertFirstCodeUnit_43, &conv0_SubTrieNode0_45);
      if (succeeded)
      {
        SubTrieNode0_45 = ((MR_Word) (conv0_SubTrieNode0_45));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word SubTrieNode_46;
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (InsertFirstCodeUnit_43));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (InsertMatched_6));
        }
        ml_backend__ml_string_switch__insert_case_into_trie_node_5_p_0(Var_47, InsertLaterCodeUnits_44, InsertCaseId_8, SubTrieNode0_45, &SubTrieNode_46);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), InsertFirstCodeUnit_43, ((MR_Box) (SubTrieNode_46)), ChoiceMap0_14, &ChoiceMap_20);
      }
      else
      {
        MR_Word Var_48;
        MR_Word SubTrieNode_51;

        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (InsertFirstCodeUnit_43));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (InsertMatched_6));
        }
        {
          SubTrieNode_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubTrieNode_51, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(0), SubTrieNode_51, 1) = ((MR_Box) (InsertLaterCodeUnits_44));
          MR_hl_field(MR_mktag(0), SubTrieNode_51, 2) = ((MR_Box) (InsertCaseId_8));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0), InsertFirstCodeUnit_43, ((MR_Box) (SubTrieNode_51)), ChoiceMap0_14, &ChoiceMap_20);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *TrieNode_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InsertMatched_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ChoiceMap_20));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MaybeEnd_21));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_string_switch____Unify____hash_slots_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_string_switch____Compare____hash_slots_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_string_switch____Unify____trie_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_string_switch____Compare____trie_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_string_switch__init(void)
{
}

void mercury__ml_backend__ml_string_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slot_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_binary_search_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_hash_search_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_trie_node_0);
}

void mercury__ml_backend__ml_string_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_string_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_string_switch.
