/*
** Automatically generated from `ml_string_switch.m'
** by the Mercury compiler,
** version rotd-2025-06-03
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.string_encoding.mih"
#include "backend_libs.string_switch_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
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
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_lookup_switch.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__cord__ti_cord_1builtin__type_ctor_info_int_0;

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

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2119__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2099__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__501__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumMatchedCodeUnits_20);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__517__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_29);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__414__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer CaseIdNum_33);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__363__1_2_p_0(
  MR_Integer AfterLastCaseNum_47,
  MR_Integer HeadVar__2_76);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__313__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer CaseIdNum_21);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__248__1_2_p_0(
  MR_Integer AfterLastCaseNum_39,
  MR_Integer HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1562__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__880__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__212__1_2_p_0(
  MR_Word CodeModel_12,
  MR_Word HeadVar__2_37);

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

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_code_for_string_switch_return_case_id_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_24,
  MR_Word * STATE_VARIABLE_CodeMap_25,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_26,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_24,
  MR_Word * STATE_VARIABLE_CodeMap_25,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_26,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_4,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_5,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_7,
  MR_Integer STATE_VARIABLE_CurFirstSolnIndex_0_8,
  MR_Integer * STATE_VARIABLE_CurFirstSolnIndex_9,
  MR_Integer HeadVar__10_10);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RowInitializersCord_0_3,
  MR_Word * STATE_VARIABLE_RowInitializersCord_4,
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
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_3,
  MR_Word * STATE_VARIABLE_RowInitializersCord_4,
  MR_Integer STATE_VARIABLE_CurIndex_0_5,
  MR_Integer * STATE_VARIABLE_CurIndex_6);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0(
  MR_Integer Slot_13,
  MR_Integer TableSize_14,
  MR_Word HashSlotMap_15,
  MR_Word FirstSolnStructType_16,
  MR_Word LaterSolnStructType_17,
  MR_Word MaybeNextSlotId_18,
  MR_Word DummyOutInitializers_19,
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_24,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_25,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_26,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_27,
  MR_Integer STATE_VARIABLE_CurLaterSolnIndex_0_28);

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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_17,
  MR_Word * STATE_VARIABLE_RowInitializersCord_18);

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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_18,
  MR_Word * STATE_VARIABLE_RowInitializersCord_19,
  MR_Word STATE_VARIABLE_RevMap_0_20,
  MR_Word * STATE_VARIABLE_RevMap_21);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_8_p_0_1(
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
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_7,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_8,
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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_5,
  MR_Word * STATE_VARIABLE_RowInitializersCord_6);

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CodeMap_0_4,
  MR_Word * STATE_VARIABLE_CodeMap_5,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_6,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
  MR_Word TaggedConsId_3);

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_arms_of_switch_on_case_id_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CaseCord_0_2,
  MR_Word * STATE_VARIABLE_CaseCord_3);

static void MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_choices_to_nested_switches_8_p_0(
  MR_Word Encoding_1,
  MR_Word VarRval_2,
  MR_Word CaseNumVarLval_3,
  MR_Word Context_4,
  MR_Integer NumMatched_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_SwitchArmsCord_0_7,
  MR_Word * STATE_VARIABLE_SwitchArmsCord_8);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(
  MR_Word Encoding_8,
  MR_Word VarRval_9,
  MR_Word CaseNumVarLval_10,
  MR_Word Context_11,
  MR_Integer NumMatched_12,
  MR_Word TrieNode_13,
  MR_Word * Stmt_14);

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


static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[30][2];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[24][3];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[20][1];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[8][5];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][6];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][15];




static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[30][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_string_switch_scalar_common_3[3])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 5U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_string_switch_scalar_common_3[4])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_string_switch_scalar_common_3[6])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 3U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_string_switch_scalar_common_3[15])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_string_switch_scalar_common_3[17])))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[24][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[2])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[20][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "we found a match; dispatch to the corresponding code")) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "we found a match; look up the results")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) -1)) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) -2)) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "compute the hash value of the input string")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "lookup the string for this hash slot")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "did we find a match\?")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "no collisions; no hash chain loop")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "no match yet, so get next slot in hash chain")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "hash chain loop")) },
  /* row  13 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 3U)) },
  /* row  14 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
  /* row  15 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row  16 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U)) },
  /* row  17 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row  18 */
  { ((MR_Box) ((MR_String) "break out of search loop")) },
  /* row  19 */
  { ((MR_Box) ((MR_String) "jump out of search loop")) },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[8][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0) }
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slot_rev_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_string_switch__cord__ti_cord_1builtin__type_ctor_info_int_0)
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

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0 };

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0 };

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slots",
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0 },
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0) }
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

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0 };

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_binary_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_binary_search_info",
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0 },
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
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

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0[1] = { &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0 };

static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_hash_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_hash_search_info",
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0 },
  { ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0,

};

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2119__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), ((MR_Box) (FailStmts_19)), ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2099__1_2_p_0(
  MR_Word FailStmts_19,
  MR_Word HeadVar__2_49)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]), ((MR_Box) (FailStmts_19)), ((MR_Box) (HeadVar__2_49)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__501__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumMatchedCodeUnits_20)
{
  MR_bool succeeded = (NumMatchedCodeUnits_20 == NumMatched_12);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__517__1_2_p_0(
  MR_Integer NumMatched_12,
  MR_Integer NumRevMatchedCodeUnits_29)
{
  MR_bool succeeded = (NumRevMatchedCodeUnits_29 == NumMatched_12);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__414__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer CaseIdNum_33)
{
  MR_bool succeeded = (CaseIdNum_33 == STATE_VARIABLE_CurCaseNum_0_4);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__363__1_2_p_0(
  MR_Integer AfterLastCaseNum_47,
  MR_Integer HeadVar__2_76)
{
  MR_bool succeeded = (HeadVar__2_76 == AfterLastCaseNum_47);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__313__1_2_p_0(
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer CaseIdNum_21)
{
  MR_bool succeeded = (CaseIdNum_21 == STATE_VARIABLE_CurCaseNum_0_3);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__248__1_2_p_0(
  MR_Integer AfterLastCaseNum_39,
  MR_Integer HeadVar__2_66)
{
  MR_bool succeeded = (HeadVar__2_66 == AfterLastCaseNum_39);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1562__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded = (CodeModel_13 == HeadVar__2_36);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__880__1_2_p_0(
  MR_Word CodeModel_13,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded = (CodeModel_13 == HeadVar__2_36);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__212__1_2_p_0(
  MR_Word CodeModel_12,
  MR_Word HeadVar__2_37)
{
  MR_bool succeeded = (CodeModel_12 == HeadVar__2_37);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
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

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
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

                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
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
                TypeInfo_27_27 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]);
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

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
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

                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

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
                TypeInfo_28_28 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[10]);
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

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_string_switch__make_hash_match_1_f_0(
  MR_Integer Slot_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_5, 0) = ((MR_Box) (Slot_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_code_for_string_switch_return_case_id_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_24,
  MR_Word * STATE_VARIABLE_CodeMap_25,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_26,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0(CodeModel_13, EntryPackedArgsMap_14, TaggedCase_15, CaseId_16, STATE_VARIABLE_CodeMap_0_24, STATE_VARIABLE_CodeMap_25, STATE_VARIABLE_ReachableConstVarMaps_0_26, STATE_VARIABLE_ReachableConstVarMaps_27, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_97_103_103_101_100_95_99_97_115_101_95_99_111_100_101_95_102_111_114_95_115_116_114_105_110_103_95_115_119_105_116_99_104_95_114_101_116_117_114_110_95_99_97_115_101_95_105_100_95_95_91_49_49_93_95_48_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_24,
  MR_Word * STATE_VARIABLE_CodeMap_25,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_26,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word MainTaggedConsId_30;
  MR_Word OtherTaggedConsIds_31;
  MR_Word CaseId_32;
  MR_Word Goal_33;
  MR_Word GoalStmt_34;
  MR_String MainString_35;
  MR_Word OtherStrings_36;
  MR_String Strings_37;
  MR_String CommentString_38;
  MR_Word GoalInfo_40;
  MR_Word Context_41;
  MR_Word Comment_42;
  MR_Word CaseStmt_43;
  MR_Word STATE_VARIABLE_Info_1_44;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;

  *CaseId_16 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 2))));
  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_14, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_44);
  MainTaggedConsId_30 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 0))));
  OtherTaggedConsIds_31 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 1))));
  CaseId_32 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 2))));
  Goal_33 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 3))));
  ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_13, Goal_33, &GoalStmt_34, STATE_VARIABLE_ReachableConstVarMaps_0_26, STATE_VARIABLE_ReachableConstVarMaps_27, STATE_VARIABLE_Info_1_44, STATE_VARIABLE_Info_29);
  MainString_35 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(MainTaggedConsId_30);
  OtherStrings_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[23]), OtherTaggedConsIds_31);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MainString_35));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (OtherStrings_36));
  }
  Strings_37 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_47);
  CommentString_38 = mercury__string__f_43_43_2_f_0((MR_String) "case ", Strings_37);
  GoalInfo_40 = ((MR_Word) ((MR_hl_field(0, Goal_33, 1))));
  Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_40);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (CommentString_38));
  }
  {
    Comment_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Comment_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Comment_42, 1) = ((MR_Box) (Var_49));
    MR_hl_field(3, Comment_42, 2) = ((MR_Box) (Context_41));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (GoalStmt_34));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Comment_42));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    CaseStmt_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CaseStmt_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CaseStmt_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CaseStmt_43, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, CaseStmt_43, 3) = ((MR_Box) (Context_41));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (CaseId_32)), ((MR_Box) (CaseStmt_43)), STATE_VARIABLE_CodeMap_0_24, STATE_VARIABLE_CodeMap_25);
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__lookup_switch_util__get_string_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1562__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__lookup_switch_util__get_string_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0(
  MR_Word VarRval_10,
  MR_Word TaggedCases_11,
  MR_Word LookupSwitchInfo_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word Context_15,
  MR_Word * Defns_16,
  MR_Word * Stmts_17,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word CaseIdConsts_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 0))));
  MR_Word OutVars_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 1))));
  MR_Word OutTypes_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 2))));
  MR_Word STATE_VARIABLE_Info_1_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 3))));

  if (((MR_tag((MR_Word) CaseIdConsts_19)) == (MR_Integer) 0))
  {
    MR_Word CaseIdValueMap_22 = ((MR_Word) ((MR_hl_field(0, CaseIdConsts_19, 0))));
    MR_Word StrValueMap_23;
    MR_Word StrValues_24;
    MR_Word ModuleInfo_47;
    MR_Word ModuleName_48;
    MR_Word MLDS_ModuleName_49;
    MR_Word Target_50;
    MR_Word MLDS_StringType_51;
    MR_Word MLDS_ArgTypes_52;
    MR_Word CaseValues_53;
    MR_Word GlobalData0_54;
    MR_Word StructTypeNum_55;
    MR_Word StructType_56;
    MR_Word FieldIds_57;
    MR_Word GlobalData1_58;
    MR_Word StringFieldId_59;
    MR_Word OutFieldIds_60;
    MR_Word RowInitializersCord_61;
    MR_Integer TableSize_62;
    MR_Word RowInitializers_63;
    MR_Word VectorCommon_64;
    MR_Word GlobalData_65;
    MR_Word BinarySearchInfo_66;
    MR_Word MidVarNameType_71;
    MR_Word MidVarName_75;
    MR_Word MidVarType_76;
    MR_Word MidVarLval_77;
    MR_Word MidVarRval_78;
    MR_Word GetArgStmts_79;
    MR_Word MatchStmts_80;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_Info_1_88;
    MR_Word STATE_VARIABLE_Info_2_89;
    MR_Word STATE_VARIABLE_Info_3_90;
    MR_Word STATE_VARIABLE_Info_4_92;

    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[21]), TaggedCases_11, CaseIdValueMap_22, &StrValueMap_23);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), StrValueMap_23, &StrValues_24);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_30, &ModuleInfo_47);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_47, &ModuleName_48);
    MLDS_ModuleName_49 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_48);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_1_30, &Target_50);
    Var_83 = parse_tree__builtin_lib_types__string_type_0_f_0();
    MLDS_StringType_51 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_47, Var_83);
    {
      MLDS_ArgTypes_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MLDS_ArgTypes_52, 0) = ((MR_Box) (MLDS_StringType_51));
      MR_hl_field(1, MLDS_ArgTypes_52, 1) = ((MR_Box) (OutTypes_21));
    }
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[2]), StrValues_24, &CaseValues_53);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_1_30, &GlobalData0_54);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_49, Context_15, Target_50, MLDS_ArgTypes_52, &StructTypeNum_55, &StructType_56, &FieldIds_57, GlobalData0_54, &GlobalData1_58);
    if ((FieldIds_57 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      StringFieldId_59 = ((MR_Word) ((MR_hl_field(1, FieldIds_57, 0))));
      OutFieldIds_60 = ((MR_Word) ((MR_hl_field(1, FieldIds_57, 1))));
    }
    Var_86 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(CaseValues_53, StructType_56, Var_86, &RowInitializersCord_61, (MR_Integer) 0, &TableSize_62);
    RowInitializers_63 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializersCord_61);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_49, StructTypeNum_55, RowInitializers_63, &VectorCommon_64, GlobalData1_58, &GlobalData_65);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_65, STATE_VARIABLE_Info_1_30, &STATE_VARIABLE_Info_1_88);
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_13, CanFail_14, Context_15, VarRval_10, &BinarySearchInfo_66, STATE_VARIABLE_Info_1_88, &STATE_VARIABLE_Info_2_89);
    MidVarNameType_71 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_66, 4))));
    *Defns_16 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_66, 8))));
    MidVarName_75 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_71, 0))));
    MidVarType_76 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_71, 1))));
    {
      MidVarLval_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MidVarLval_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, MidVarLval_77, 1) = ((MR_Box) (MidVarName_75));
      MR_hl_field(3, MidVarLval_77, 2) = ((MR_Box) (MidVarType_76));
    }
    {
      MidVarRval_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MidVarRval_78, 0) = ((MR_Box) (MidVarLval_77));
    }
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_20, OutTypes_21, OutFieldIds_60, VectorCommon_64, StructType_56, MidVarRval_78, Context_15, &GetArgStmts_79, STATE_VARIABLE_Info_2_89, &STATE_VARIABLE_Info_3_90);
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MatchStmts_80 = GetArgStmts_79;
          STATE_VARIABLE_Info_4_92 = STATE_VARIABLE_Info_3_90;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/11", (MR_String) "model_non");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SetSuccessTrueStmt_81;
          MR_Word Var_94;

          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[15])), Context_15, &SetSuccessTrueStmt_81, STATE_VARIABLE_Info_3_90, &STATE_VARIABLE_Info_4_92);
          {
            Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_94, 0) = ((MR_Box) (SetSuccessTrueStmt_81));
            MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MatchStmts_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), GetArgStmts_79, Var_94);
        }
        break;
    }
    ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_15, (MR_String) "binary string simple lookup switch", BinarySearchInfo_66, VectorCommon_64, TableSize_62, StructType_56, StringFieldId_59, (MR_Word) ((MR_Unsigned) 0U), MatchStmts_80, Stmts_17, STATE_VARIABLE_Info_4_92, STATE_VARIABLE_Info_29);
  }
  else
  {
    MR_Word CaseIdSolnMap_25 = ((MR_Word) ((MR_hl_field(1, CaseIdConsts_19, 0))));
    MR_Word StrSolnMap_27;
    MR_Word StrSolns_28;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[3]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_2));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (CodeModel_13));
      MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_lookup_switch\'/9", (MR_String) "CodeModel != model_non");
    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[22]), TaggedCases_11, CaseIdSolnMap_25, &StrSolnMap_27);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), StrSolnMap_27, &StrSolns_28);
    ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_11_p_0(VarRval_10, StrSolns_28, CodeModel_13, CanFail_14, OutVars_20, OutTypes_21, Context_15, Defns_16, Stmts_17, STATE_VARIABLE_Info_1_30, STATE_VARIABLE_Info_29);
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
  MR_Word FirstSolnRowInitializersCord_48;
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
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_Info_1_85;
  MR_Word STATE_VARIABLE_Info_2_86;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Info_3_89;
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
  MLDS_IntType_27 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (MLDS_IntType_27));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (OutTypes_17));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (MLDS_IntType_27));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    FirstSolnFieldTypes_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FirstSolnFieldTypes_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, FirstSolnFieldTypes_28, 1) = ((MR_Box) (Var_75));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[3]), CaseSolns0_13, &CaseSolns_30);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_72, &GlobalData0_31);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_24, Context_18, Target_25, FirstSolnFieldTypes_28, &FirstSolnStructTypeNum_32, &FirstSolnStructType_33, &FirstSolnFieldIds_34, GlobalData0_31, &GlobalData1_35);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_24, Context_18, Target_25, OutTypes_17, &LaterSolnStructTypeNum_36, &LaterSolnStructType_37, &LaterSolnOutFieldIds_38, GlobalData1_35, &GlobalData2_39);
  succeeded = (FirstSolnFieldIds_34 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    StringFieldIdPrime_40 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_34, 0))));
    Var_77 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_34, 1))));
    succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      NumLaterSolnsFieldIdPrime_41 = ((MR_Word) ((MR_hl_field(1, Var_77, 0))));
      Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, 1))));
      succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstLaterSolnRowFieldIdPrime_42 = ((MR_Word) ((MR_hl_field(1, Var_78, 0))));
        FirstSolnOutFieldIdsPrime_43 = ((MR_Word) ((MR_hl_field(1, Var_78, 1))));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
      return;
    }
  Var_81 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  Var_82 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(CaseSolns_30, FirstSolnStructType_33, LaterSolnStructType_37, Var_81, &FirstSolnRowInitializersCord_48, Var_82, &LaterSolnRowInitializersCord_49, (MR_Integer) 0, &FirstSolnTableSize_50, (MR_Integer) 0);
  FirstSolnRowInitializers_51 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FirstSolnRowInitializersCord_48);
  LaterSolnRowInitializers_52 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializersCord_49);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_24, FirstSolnStructTypeNum_32, FirstSolnRowInitializers_51, &FirstSolnVectorCommon_53, GlobalData2_39, &GlobalData3_54);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_24, LaterSolnStructTypeNum_36, LaterSolnRowInitializers_52, &LaterSolnVectorCommon_55, GlobalData3_54, &GlobalData_56);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_56, STATE_VARIABLE_Info_0_72, &STATE_VARIABLE_Info_1_85);
  ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_14, CanFail_15, Context_18, VarRval_12, &BinarySearchInfo_57, STATE_VARIABLE_Info_1_85, &STATE_VARIABLE_Info_2_86);
  MidVarNameType_62 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_57, 4))));
  *Defns_19 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_57, 8))));
  MidVarName_66 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_62, 0))));
  MidVarType_67 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_62, 1))));
  {
    MidVarLval_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MidVarLval_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MidVarLval_68, 1) = ((MR_Box) (MidVarName_66));
    MR_hl_field(3, MidVarLval_68, 2) = ((MR_Box) (MidVarType_67));
  }
  {
    Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_87, 0) = ((MR_Box) (MidVarLval_68));
  }
  ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_18, Var_87, OutVars_16, OutTypes_17, FirstSolnStructType_33, LaterSolnStructType_37, NumLaterSolnsFieldId_45, FirstLaterSolnRowFieldId_46, FirstSolnOutFieldIds_47, LaterSolnOutFieldIds_38, FirstSolnVectorCommon_53, LaterSolnVectorCommon_55, (MR_Integer) 0, &MatchDefns_69, &SuccessStmts_70, STATE_VARIABLE_Info_2_86, &STATE_VARIABLE_Info_3_89);
  ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_18, (MR_String) "binary string several soln lookup switch", BinarySearchInfo_57, FirstSolnVectorCommon_53, FirstSolnTableSize_50, FirstSolnStructType_33, StringFieldId_44, MatchDefns_69, SuccessStmts_70, Stmts_20, STATE_VARIABLE_Info_3_89, STATE_VARIABLE_Info_73);
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_4,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_5,
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
      *STATE_VARIABLE_FirstSolnRowInitializersCord_5 = STATE_VARIABLE_FirstSolnRowInitializersCord_0_4;
    }
    else
    {
      MR_String Str_23;
      MR_Word Solns_24;
      MR_Word StrSolns_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word StrRval_32;
      MR_Word FirstSolnRowInitializer_36;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_48;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_1_64;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_1_66;
      MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_1_67;
      MR_Integer STATE_VARIABLE_CurFirstSolnIndex_1_68;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8;
      MR_Integer next_value_of_HeadVar__10_10;

      Str_23 = ((MR_String) ((MR_hl_field(0, Var_47, 0))));
      Solns_24 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
      {
        Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(3, Var_48, 1) = ((MR_Box) (Str_23));
      }
      {
        StrRval_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, StrRval_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, StrRval_32, 1) = ((MR_Box) (Var_48));
      }
      if (((MR_tag((MR_Word) Solns_24)) == (MR_Integer) 0))
      {
        MR_Word FirstSolnRvals_33 = ((MR_Word) ((MR_hl_field(0, Solns_24, 0))));
        MR_Word NumLaterSolnsInitializer_34;
        MR_Word FirstLaterSlotInitializer_35;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        NumLaterSolnsInitializer_34 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
        FirstLaterSlotInitializer_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (StrRval_32));
        }
        Var_55 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[19]), FirstSolnRvals_33);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (FirstLaterSlotInitializer_35));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (NumLaterSolnsInitializer_34));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
        }
        {
          FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FirstSolnRowInitializer_36, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(2, FirstSolnRowInitializer_36, 1) = ((MR_Box) (Var_51));
        }
        STATE_VARIABLE_LaterSolnRowInitializersCord_1_64 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
        STATE_VARIABLE_CurLaterSolnIndex_1_66 = HeadVar__10_10;
      }
      else
      {
        MR_Word LaterSolns_37 = ((MR_Word) ((MR_hl_field(1, Solns_24, 1))));
        MR_Integer NumLaterSolns_38;
        MR_Word LaterSolnRowInitializers_39;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word FirstSolnRvals_73 = ((MR_Word) ((MR_hl_field(1, Solns_24, 0))));
        MR_Word NumLaterSolnsInitializer_74;
        MR_Word FirstLaterSlotInitializer_75;

        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_37, &NumLaterSolns_38);
        NumLaterSolnsInitializer_74 = ml_backend__ml_util__gen_init_int_1_f_0(NumLaterSolns_38);
        FirstLaterSlotInitializer_75 = ml_backend__ml_util__gen_init_int_1_f_0(HeadVar__10_10);
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (StrRval_32));
        }
        Var_61 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[20]), FirstSolnRvals_73);
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (FirstLaterSlotInitializer_75));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (NumLaterSolnsInitializer_74));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
        }
        {
          FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FirstSolnRowInitializer_36, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(2, FirstSolnRowInitializer_36, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_5[0]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (HeadVar__3_3));
        }
        LaterSolnRowInitializers_39 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_63, LaterSolns_37);
        Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_39);
        STATE_VARIABLE_LaterSolnRowInitializersCord_1_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_6, Var_65);
        STATE_VARIABLE_CurLaterSolnIndex_1_66 = (MR_Integer) ((MR_Unsigned) HeadVar__10_10 + (MR_Unsigned) NumLaterSolns_38);
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (FirstSolnRowInitializer_36)), STATE_VARIABLE_FirstSolnRowInitializersCord_0_4, &STATE_VARIABLE_FirstSolnRowInitializersCord_1_67);
      STATE_VARIABLE_CurFirstSolnIndex_1_68 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurFirstSolnIndex_0_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrSolns_25;
      next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_4 = STATE_VARIABLE_FirstSolnRowInitializersCord_1_67;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6 = STATE_VARIABLE_LaterSolnRowInitializersCord_1_64;
      next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8 = STATE_VARIABLE_CurFirstSolnIndex_1_68;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_CurLaterSolnIndex_1_66;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FirstSolnRowInitializersCord_0_4 = next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_4;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_6 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
      STATE_VARIABLE_CurFirstSolnIndex_0_8 = next_value_of_STATE_VARIABLE_CurFirstSolnIndex_0_8;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RowInitializersCord_0_3,
  MR_Word * STATE_VARIABLE_RowInitializersCord_4,
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
      *STATE_VARIABLE_RowInitializersCord_4 = STATE_VARIABLE_RowInitializersCord_0_3;
    }
    else
    {
      MR_String Str_14;
      MR_Word Rvals_15;
      MR_Word StrRvals_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word StrRval_20;
      MR_Word RowInitializer_21;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_RowInitializersCord_1_32;
      MR_Integer STATE_VARIABLE_CurIndex_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RowInitializersCord_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_5;

      Str_14 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
      Rvals_15 = ((MR_Word) ((MR_hl_field(0, Var_26, 1))));
      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (Str_14));
      }
      {
        StrRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, StrRval_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, StrRval_20, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (StrRval_20));
      }
      Var_30 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[18]), Rvals_15);
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        RowInitializer_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, RowInitializer_21, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(2, RowInitializer_21, 1) = ((MR_Box) (Var_28));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (RowInitializer_21)), STATE_VARIABLE_RowInitializersCord_0_3, &STATE_VARIABLE_RowInitializersCord_1_32);
      STATE_VARIABLE_CurIndex_1_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrRvals_16;
      next_value_of_STATE_VARIABLE_RowInitializersCord_0_3 = STATE_VARIABLE_RowInitializersCord_1_32;
      next_value_of_STATE_VARIABLE_CurIndex_0_5 = STATE_VARIABLE_CurIndex_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RowInitializersCord_0_3 = next_value_of_STATE_VARIABLE_RowInitializersCord_0_3;
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
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CaseId_16;
  MR_Word conv2_STATE_VARIABLE_CodeMap_25;
  MR_Word conv1_STATE_VARIABLE_ReachableConstVarMaps_27;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  ml_backend__ml_string_switch__ml_gen_tagged_case_code_for_string_switch_return_case_id_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_CaseId_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CodeMap_25, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ReachableConstVarMaps_27, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_2 = ((MR_Box) (conv3_CaseId_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CodeMap_25));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ReachableConstVarMaps_27));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
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
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
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
  MR_Word ReachableConstVarMaps_53;
  MR_Word SortedTable_55;
  MR_Word RowInitializersCord_56;
  MR_Integer TableSize_57;
  MR_Word RowInitializers_58;
  MR_Word GlobalData2_59;
  MR_Word VectorCommon_60;
  MR_Word GlobalData_61;
  MR_Word CaseLabelList_62;
  MR_Word SwitchCases0_63;
  MR_Word SwitchCases_64;
  MR_Word SwitchStmt0_65;
  MR_Word SwitchStmt_66;
  MR_Word STATE_VARIABLE_Info_1_70;
  MR_Word STATE_VARIABLE_Info_2_74;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_Info_3_84;
  MR_Word STATE_VARIABLE_Info_4_86;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Info_5_89;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Integer Var_102;
  MR_Word STATE_VARIABLE_Info_6_105;
  MR_Word Var_107;
  MR_Box conv7_CaseLabelMap_52;
  MR_Box conv6_ReachableConstVarMaps_53;
  MR_Box conv5_STATE_VARIABLE_Info_3_84;
  MR_Box conv4_Var_54;

  ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_7_p_0(CodeModel_13, CanFail_14, Context_16, VarRval_11, &BinarySearchInfo_20, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_1_70);
  MidVarNameType_25 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_20, 4))));
  *Defns_17 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_20, 8))));
  MidVarName_29 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_25, 0))));
  MidVarType_30 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_25, 1))));
  {
    MidVarLval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MidVarLval_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MidVarLval_31, 1) = ((MR_Box) (MidVarName_29));
    MR_hl_field(3, MidVarLval_31, 2) = ((MR_Box) (MidVarType_30));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_70, &ModuleInfo_32);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_32, &ModuleName_33);
  MLDS_ModuleName_34 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_33);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_1_70, &Target_35);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_1_70, &GlobalData0_39);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_34, Context_16, Target_35, (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_1[14])), &StructTypeNum_40, &StructType_41, &FieldIds_42, GlobalData0_39, &GlobalData1_43);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData1_43, STATE_VARIABLE_Info_1_70, &STATE_VARIABLE_Info_2_74);
  if ((FieldIds_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
      return;
    }
  else
  {
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(1, FieldIds_42, 1))));
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(1, FieldIds_42, 0))));

    if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, Var_134, 1))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(1, Var_134, 0))));

      if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        StringFieldId_44 = Var_135;
        CaseNumFieldId_45 = Var_137;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
    }
  }
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), &CaseLabelMap0_51);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (CodeModel_13));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (EntryPackedArgsMap_15));
  }
  backend_libs__string_switch_util__string_binary_cases_11_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Cases_12, Var_82, ((MR_Box) (CaseLabelMap0_51)), &conv7_CaseLabelMap_52, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_ReachableConstVarMaps_53, ((MR_Box) (STATE_VARIABLE_Info_2_74)), &conv5_STATE_VARIABLE_Info_3_84, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_54, &SortedTable_55);
  CaseLabelMap_52 = ((MR_Word) (conv7_CaseLabelMap_52));
  ReachableConstVarMaps_53 = ((MR_Word) (conv6_ReachableConstVarMaps_53));
  STATE_VARIABLE_Info_3_84 = ((MR_Word) (conv5_STATE_VARIABLE_Info_3_84));
  ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_53, STATE_VARIABLE_Info_3_84, &STATE_VARIABLE_Info_4_86);
  Var_87 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(SortedTable_55, StructType_41, Var_87, &RowInitializersCord_56, (MR_Integer) 0, &TableSize_57);
  RowInitializers_58 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializersCord_56);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_4_86, &GlobalData2_59);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_34, StructTypeNum_40, RowInitializers_58, &VectorCommon_60, GlobalData2_59, &GlobalData_61);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_61, STATE_VARIABLE_Info_4_86, &STATE_VARIABLE_Info_5_89);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CaseLabelMap_52, &CaseLabelList_62);
  ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(CaseLabelList_62, (MR_Word) ((MR_Unsigned) 0U), &SwitchCases0_63);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SwitchCases0_63, &SwitchCases_64);
  {
    Var_99 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_99, 0) = ((MR_Box) (MidVarLval_31));
  }
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) (VectorCommon_60));
    MR_hl_field(3, Var_98, 2) = ((MR_Box) (Var_99));
  }
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[1])));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) (StructType_41));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (CaseNumFieldId_45));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_93, 0) = ((MR_Box) (Var_94));
  }
  Var_102 = (MR_Integer) ((MR_Unsigned) TableSize_57 - (MR_Unsigned) 1);
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
  }
  {
    SwitchStmt0_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchStmt0_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SwitchStmt0_65, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
    MR_hl_field(3, SwitchStmt0_65, 2) = ((MR_Box) (Var_93));
    MR_hl_field(3, SwitchStmt0_65, 3) = ((MR_Box) (Var_100));
    MR_hl_field(3, SwitchStmt0_65, 4) = ((MR_Box) (SwitchCases_64));
    MR_hl_field(3, SwitchStmt0_65, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SwitchStmt0_65, 6) = ((MR_Box) (Context_16));
  }
  ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_65, &SwitchStmt_66, STATE_VARIABLE_Info_5_89, &STATE_VARIABLE_Info_6_105);
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (SwitchStmt_66));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(Context_16, (MR_String) "binary string jump switch", BinarySearchInfo_20, VectorCommon_60, TableSize_57, StructType_41, StringFieldId_44, (MR_Word) ((MR_Unsigned) 0U), Var_107, Stmts_18, STATE_VARIABLE_Info_6_105, STATE_VARIABLE_Info_69);
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
  MR_Word CodeModel_24 = ((MR_Unsigned) ((MR_hl_field(0, BinarySearchInfo_15, 0))) & (MR_Integer) 3);
  MR_Word VarRval_25 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 1))));
  MR_Word LoVarNameType_26 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 2))));
  MR_Word HiVarNameType_27 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 3))));
  MR_Word MidVarNameType_28 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 4))));
  MR_Word ResultVarNameType_29 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 5))));
  MR_Word MaybeStopLoopVarNameType_30 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 6))));
  MR_Word FailStmts_31 = ((MR_Word) ((MR_hl_field(0, BinarySearchInfo_15, 7))));
  MR_Word LoVarName_33 = ((MR_Word) ((MR_hl_field(0, LoVarNameType_26, 0))));
  MR_Word LoVarType_34 = ((MR_Word) ((MR_hl_field(0, LoVarNameType_26, 1))));
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
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_109;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_119;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_132;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_188;
  MR_Word Var_189;
  MR_Word Var_190;

  {
    LoVarLval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LoVarLval_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LoVarLval_35, 1) = ((MR_Box) (LoVarName_33));
    MR_hl_field(3, LoVarLval_35, 2) = ((MR_Box) (LoVarType_34));
  }
  {
    LoVarRval_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, LoVarRval_36, 0) = ((MR_Box) (LoVarLval_35));
  }
  HiVarName_37 = ((MR_Word) ((MR_hl_field(0, HiVarNameType_27, 0))));
  HiVarType_38 = ((MR_Word) ((MR_hl_field(0, HiVarNameType_27, 1))));
  {
    HiVarLval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HiVarLval_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HiVarLval_39, 1) = ((MR_Box) (HiVarName_37));
    MR_hl_field(3, HiVarLval_39, 2) = ((MR_Box) (HiVarType_38));
  }
  {
    HiVarRval_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HiVarRval_40, 0) = ((MR_Box) (HiVarLval_39));
  }
  MidVarName_41 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_28, 0))));
  MidVarType_42 = ((MR_Word) ((MR_hl_field(0, MidVarNameType_28, 1))));
  {
    MidVarLval_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MidVarLval_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MidVarLval_43, 1) = ((MR_Box) (MidVarName_41));
    MR_hl_field(3, MidVarLval_43, 2) = ((MR_Box) (MidVarType_42));
  }
  {
    MidVarRval_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MidVarRval_44, 0) = ((MR_Box) (MidVarLval_43));
  }
  ResultVarName_45 = ((MR_Word) ((MR_hl_field(0, ResultVarNameType_29, 0))));
  ResultVarType_46 = ((MR_Word) ((MR_hl_field(0, ResultVarNameType_29, 1))));
  {
    ResultVarLval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ResultVarLval_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ResultVarLval_47, 1) = ((MR_Box) (ResultVarName_45));
    MR_hl_field(3, ResultVarLval_47, 2) = ((MR_Box) (ResultVarType_46));
  }
  {
    ResultVarRval_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultVarRval_48, 0) = ((MR_Box) (ResultVarLval_47));
  }
  Var_79 = parse_tree__builtin_lib_types__string_type_0_f_0();
  Var_81 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17]));
  {
    Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_80, 0) = ((MR_Box) (LoVarLval_35));
    MR_hl_field(2, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    InitLoVarStmt_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitLoVarStmt_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitLoVarStmt_60, 1) = ((MR_Box) (Var_80));
    MR_hl_field(3, InitLoVarStmt_60, 2) = ((MR_Box) (Context_13));
  }
  Var_87 = (MR_Integer) ((MR_Unsigned) TableSize_17 - (MR_Unsigned) 1);
  {
    Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_86, 0) = ((MR_Box) (Var_87));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_84, 0) = ((MR_Box) (HiVarLval_39));
    MR_hl_field(2, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    InitHiVarStmt_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitHiVarStmt_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitHiVarStmt_61, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, InitHiVarStmt_61, 2) = ((MR_Box) (Context_13));
  }
  {
    CrossingTest_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CrossingTest_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, CrossingTest_62, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[27])));
    MR_hl_field(3, CrossingTest_62, 2) = ((MR_Box) (LoVarRval_36));
    MR_hl_field(3, CrossingTest_62, 3) = ((MR_Box) (HiVarRval_40));
  }
  Var_98 = (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[14]));
  {
    Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_97, 1) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_97, 2) = ((MR_Box) (LoVarRval_36));
    MR_hl_field(3, Var_97, 3) = ((MR_Box) (HiVarRval_40));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[13])));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_93, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[28])));
  }
  {
    Var_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_92, 0) = ((MR_Box) (MidVarLval_43));
    MR_hl_field(2, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    AssignMidVarStmt_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, AssignMidVarStmt_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, AssignMidVarStmt_63, 1) = ((MR_Box) (Var_92));
    MR_hl_field(3, AssignMidVarStmt_63, 2) = ((MR_Box) (Context_13));
  }
  Var_109 = (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[1]));
  {
    Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_112, 1) = ((MR_Box) (VectorCommon_16));
    MR_hl_field(3, Var_112, 2) = ((MR_Box) (MidVarRval_44));
  }
  Var_113 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[26]));
  {
    ResultTest_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ResultTest_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ResultTest_65, 1) = ((MR_Box) (Var_113));
    MR_hl_field(3, ResultTest_65, 2) = ((MR_Box) (ResultVarRval_48));
    MR_hl_field(3, ResultTest_65, 3) = ((MR_Box) (Var_81));
  }
  {
    Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_119, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[16])));
    MR_hl_field(3, Var_119, 2) = ((MR_Box) (ResultVarRval_48));
    MR_hl_field(3, Var_119, 3) = ((MR_Box) (Var_81));
  }
  Var_132 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[29]));
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_128, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[16])));
    MR_hl_field(3, Var_128, 2) = ((MR_Box) (MidVarRval_44));
    MR_hl_field(3, Var_128, 3) = ((MR_Box) (Var_132));
  }
  {
    Var_127 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_127, 0) = ((MR_Box) (HiVarLval_39));
    MR_hl_field(2, Var_127, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_126, 1) = ((MR_Box) (Var_127));
    MR_hl_field(3, Var_126, 2) = ((MR_Box) (Context_13));
  }
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_138, 1) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_138, 2) = ((MR_Box) (MidVarRval_44));
    MR_hl_field(3, Var_138, 3) = ((MR_Box) (Var_132));
  }
  {
    Var_137 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_137, 0) = ((MR_Box) (LoVarLval_35));
    MR_hl_field(2, Var_137, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_136, 1) = ((MR_Box) (Var_137));
    MR_hl_field(3, Var_136, 2) = ((MR_Box) (Context_13));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
  }
  {
    UpdateLoOrHiVarStmt_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, UpdateLoOrHiVarStmt_66, 0) = ((MR_Box) (Var_119));
    MR_hl_field(2, UpdateLoOrHiVarStmt_66, 1) = ((MR_Box) (Var_126));
    MR_hl_field(2, UpdateLoOrHiVarStmt_66, 2) = ((MR_Box) (Var_135));
    MR_hl_field(2, UpdateLoOrHiVarStmt_66, 3) = ((MR_Box) (Context_13));
  }
  if ((MaybeStopLoopVarNameType_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SuccessStmt_56;
    MR_Word ModuleInfo_58;
    MR_Word MLDS_StringType_59;
    MR_Word AssignResultVarStmt_64;
    MR_Word LoHiMidResultMaybeStopVarNames_67;
    MR_Word LoopBodyStmts_68;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_157;

    ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_24, (MR_Integer) 1, Context_13, (MR_Word) ((MR_Unsigned) 0U), MatchDefns_20, MatchStmt_21, FailStmts_31, &SetupForFailStmts_55, &SuccessStmt_56, &AfterStmts_57, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_75, &ModuleInfo_58);
    MLDS_StringType_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_58, Var_79);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(0, Var_108, 1) = ((MR_Box) (Var_112));
      MR_hl_field(0, Var_108, 2) = ((MR_Box) (StructType_18));
      MR_hl_field(0, Var_108, 3) = ((MR_Box) (StringFieldId_19));
      MR_hl_field(0, Var_108, 4) = ((MR_Box) (MLDS_StringType_59));
    }
    {
      Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_107, 0) = ((MR_Box) (Var_108));
    }
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, Var_105, 2) = ((MR_Box) (VarRval_25));
      MR_hl_field(3, Var_105, 3) = ((MR_Box) (Var_107));
    }
    {
      Var_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_104, 0) = ((MR_Box) (ResultVarLval_47));
      MR_hl_field(2, Var_104, 1) = ((MR_Box) (Var_105));
    }
    {
      AssignResultVarStmt_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, AssignResultVarStmt_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, AssignResultVarStmt_64, 1) = ((MR_Box) (Var_104));
      MR_hl_field(3, AssignResultVarStmt_64, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_147, 0) = ((MR_Box) (ResultVarName_45));
      MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) (HiVarName_37));
      MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (MidVarName_41));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
    }
    {
      LoHiMidResultMaybeStopVarNames_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LoHiMidResultMaybeStopVarNames_67, 0) = ((MR_Box) (LoVarName_33));
      MR_hl_field(1, LoHiMidResultMaybeStopVarNames_67, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_151, 0) = ((MR_Box) (UpdateLoOrHiVarStmt_66));
    }
    {
      Var_150 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_150, 0) = ((MR_Box) (ResultTest_65));
      MR_hl_field(2, Var_150, 1) = ((MR_Box) (SuccessStmt_56));
      MR_hl_field(2, Var_150, 2) = ((MR_Box) (Var_151));
      MR_hl_field(2, Var_150, 3) = ((MR_Box) (Context_13));
    }
    {
      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) (AssignResultVarStmt_64));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
    }
    {
      LoopBodyStmts_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LoopBodyStmts_68, 0) = ((MR_Box) (AssignMidVarStmt_63));
      MR_hl_field(1, LoopBodyStmts_68, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_157, 2) = ((MR_Box) (LoopBodyStmts_68));
      MR_hl_field(0, Var_157, 3) = ((MR_Box) (Context_13));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(1, Var_155, 1) = ((MR_Box) (CrossingTest_62));
      MR_hl_field(1, Var_155, 2) = ((MR_Box) (Var_157));
      MR_hl_field(1, Var_155, 3) = ((MR_Box) (LoHiMidResultMaybeStopVarNames_67));
      MR_hl_field(1, Var_155, 4) = ((MR_Box) (Context_13));
    }
    {
      Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_153, 0) = ((MR_Box) (InitHiVarStmt_61));
      MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_154));
    }
    {
      SearchStmts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SearchStmts_69, 0) = ((MR_Box) (InitLoVarStmt_60));
      MR_hl_field(1, SearchStmts_69, 1) = ((MR_Box) (Var_153));
    }
  }
  else
  {
    MR_Word StopLoopVarNameType_51 = ((MR_Word) ((MR_hl_field(1, MaybeStopLoopVarNameType_30, 0))));
    MR_Word StopLoopVarName_52 = ((MR_Word) ((MR_hl_field(0, StopLoopVarNameType_51, 0))));
    MR_Word StopLoopVarType_53 = ((MR_Word) ((MR_hl_field(0, StopLoopVarNameType_51, 1))));
    MR_Word StopLoopVarLval0_54;
    MR_Word InitStopLoopVarStmt_208;
    MR_Word StopLoopTest_209;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_222;
    MR_Word Var_224;
    MR_Word LoopBodyStmts_225;
    MR_Word MaybeStopLoopVarLval_256;
    MR_Word StopLoopVarNameList_257;
    MR_Word SuccessStmt_258;
    MR_Word ModuleInfo_259;
    MR_Word MLDS_StringType_260;
    MR_Word AssignResultVarStmt_261;
    MR_Word LoHiMidResultMaybeStopVarNames_262;
    MR_Word Var_267;
    MR_Word Var_268;
    MR_Word Var_269;
    MR_Word Var_270;
    MR_Word Var_271;
    MR_Word Var_272;
    MR_Word Var_273;

    {
      StopLoopVarLval0_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, StopLoopVarLval0_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, StopLoopVarLval0_54, 1) = ((MR_Box) (StopLoopVarName_52));
      MR_hl_field(3, StopLoopVarLval0_54, 2) = ((MR_Box) (StopLoopVarType_53));
    }
    {
      MaybeStopLoopVarLval_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeStopLoopVarLval_256, 0) = ((MR_Box) (StopLoopVarLval0_54));
    }
    {
      StopLoopVarNameList_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StopLoopVarNameList_257, 0) = ((MR_Box) (StopLoopVarName_52));
      MR_hl_field(1, StopLoopVarNameList_257, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_24, (MR_Integer) 1, Context_13, MaybeStopLoopVarLval_256, MatchDefns_20, MatchStmt_21, FailStmts_31, &SetupForFailStmts_55, &SuccessStmt_258, &AfterStmts_57, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_75, &ModuleInfo_259);
    MLDS_StringType_260 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_259, Var_79);
    {
      Var_270 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_270, 0) = ((MR_Box) (Var_109));
      MR_hl_field(0, Var_270, 1) = ((MR_Box) (Var_112));
      MR_hl_field(0, Var_270, 2) = ((MR_Box) (StructType_18));
      MR_hl_field(0, Var_270, 3) = ((MR_Box) (StringFieldId_19));
      MR_hl_field(0, Var_270, 4) = ((MR_Box) (MLDS_StringType_260));
    }
    {
      Var_269 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_269, 0) = ((MR_Box) (Var_270));
    }
    {
      Var_268 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_268, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_268, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, Var_268, 2) = ((MR_Box) (VarRval_25));
      MR_hl_field(3, Var_268, 3) = ((MR_Box) (Var_269));
    }
    {
      Var_267 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_267, 0) = ((MR_Box) (ResultVarLval_47));
      MR_hl_field(2, Var_267, 1) = ((MR_Box) (Var_268));
    }
    {
      AssignResultVarStmt_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, AssignResultVarStmt_261, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, AssignResultVarStmt_261, 1) = ((MR_Box) (Var_267));
      MR_hl_field(3, AssignResultVarStmt_261, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_273, 0) = ((MR_Box) (ResultVarName_45));
      MR_hl_field(1, Var_273, 1) = ((MR_Box) (StopLoopVarNameList_257));
    }
    {
      Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_272, 0) = ((MR_Box) (HiVarName_37));
      MR_hl_field(1, Var_272, 1) = ((MR_Box) (Var_273));
    }
    {
      Var_271 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_271, 0) = ((MR_Box) (MidVarName_41));
      MR_hl_field(1, Var_271, 1) = ((MR_Box) (Var_272));
    }
    {
      LoHiMidResultMaybeStopVarNames_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LoHiMidResultMaybeStopVarNames_262, 0) = ((MR_Box) (LoVarName_33));
      MR_hl_field(1, LoHiMidResultMaybeStopVarNames_262, 1) = ((MR_Box) (Var_271));
    }
    {
      Var_210 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_210, 0) = ((MR_Box) (StopLoopVarLval0_54));
      MR_hl_field(2, Var_210, 1) = ((MR_Box) (Var_81));
    }
    {
      InitStopLoopVarStmt_208 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, InitStopLoopVarStmt_208, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, InitStopLoopVarStmt_208, 1) = ((MR_Box) (Var_210));
      MR_hl_field(3, InitStopLoopVarStmt_208, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_211 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_211, 0) = ((MR_Box) (StopLoopVarLval0_54));
    }
    {
      StopLoopTest_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, StopLoopTest_209, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, StopLoopTest_209, 1) = ((MR_Box) (Var_113));
      MR_hl_field(3, StopLoopTest_209, 2) = ((MR_Box) (Var_211));
      MR_hl_field(3, StopLoopTest_209, 3) = ((MR_Box) (Var_81));
    }
    {
      Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_215, 0) = ((MR_Box) (UpdateLoOrHiVarStmt_66));
    }
    {
      Var_214 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_214, 0) = ((MR_Box) (ResultTest_65));
      MR_hl_field(2, Var_214, 1) = ((MR_Box) (SuccessStmt_258));
      MR_hl_field(2, Var_214, 2) = ((MR_Box) (Var_215));
      MR_hl_field(2, Var_214, 3) = ((MR_Box) (Context_13));
    }
    {
      Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_213, 0) = ((MR_Box) (Var_214));
      MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_212, 0) = ((MR_Box) (AssignResultVarStmt_261));
      MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_213));
    }
    {
      LoopBodyStmts_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LoopBodyStmts_225, 0) = ((MR_Box) (AssignMidVarStmt_63));
      MR_hl_field(1, LoopBodyStmts_225, 1) = ((MR_Box) (Var_212));
    }
    {
      Var_222 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_222, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_222, 2) = ((MR_Box) (StopLoopTest_209));
      MR_hl_field(3, Var_222, 3) = ((MR_Box) (CrossingTest_62));
    }
    {
      Var_224 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_224, 2) = ((MR_Box) (LoopBodyStmts_225));
      MR_hl_field(0, Var_224, 3) = ((MR_Box) (Context_13));
    }
    {
      Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_220, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(1, Var_220, 1) = ((MR_Box) (Var_222));
      MR_hl_field(1, Var_220, 2) = ((MR_Box) (Var_224));
      MR_hl_field(1, Var_220, 3) = ((MR_Box) (LoHiMidResultMaybeStopVarNames_262));
      MR_hl_field(1, Var_220, 4) = ((MR_Box) (Context_13));
    }
    {
      Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var_220));
      MR_hl_field(1, Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_218, 0) = ((MR_Box) (InitStopLoopVarStmt_208));
      MR_hl_field(1, Var_218, 1) = ((MR_Box) (Var_219));
    }
    {
      Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_217, 0) = ((MR_Box) (InitHiVarStmt_61));
      MR_hl_field(1, Var_217, 1) = ((MR_Box) (Var_218));
    }
    {
      SearchStmts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SearchStmts_69, 0) = ((MR_Box) (InitLoVarStmt_60));
      MR_hl_field(1, SearchStmts_69, 1) = ((MR_Box) (Var_217));
    }
  }
  {
    Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_188, 0) = ((MR_Box) (InitialComment_14));
  }
  {
    InitialCommentStmt_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitialCommentStmt_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitialCommentStmt_73, 1) = ((MR_Box) (Var_188));
    MR_hl_field(3, InitialCommentStmt_73, 2) = ((MR_Box) (Context_13));
  }
  {
    Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_189, 0) = ((MR_Box) (InitialCommentStmt_73));
    MR_hl_field(1, Var_189, 1) = ((MR_Box) (SetupForFailStmts_55));
  }
  Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), SearchStmts_69, AfterStmts_57);
  *Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_189, Var_190);
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
  MR_bool succeeded;
  MR_Word IndexType_14 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  MR_Word ResultType_15 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
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
  MR_Word STATE_VARIABLE_Info_1_40;
  MR_Word STATE_VARIABLE_Info_2_42;
  MR_Word STATE_VARIABLE_Info_3_44;
  MR_Word STATE_VARIABLE_Info_4_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_Info_5_52;
  MR_Word ModuleInfo_55;
  MR_Word Globals_56;
  MR_Word SupportsGoto_57;
  MR_String Experiment_58;

  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 6, &LoVarName_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_1_40);
  LoVarDefn_19 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LoVarName_18, IndexType_14, (MR_Word) ((MR_Unsigned) 0U), Context_10);
  {
    LoVarNameType_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LoVarNameType_20, 0) = ((MR_Box) (LoVarName_18));
    MR_hl_field(0, LoVarNameType_20, 1) = ((MR_Box) (IndexType_14));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 8, &HiVarName_21, STATE_VARIABLE_Info_1_40, &STATE_VARIABLE_Info_2_42);
  HiVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(HiVarName_21, IndexType_14, (MR_Word) ((MR_Unsigned) 0U), Context_10);
  {
    HiVarNameType_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HiVarNameType_23, 0) = ((MR_Box) (HiVarName_21));
    MR_hl_field(0, HiVarNameType_23, 1) = ((MR_Box) (IndexType_14));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 7, &MidVarName_24, STATE_VARIABLE_Info_2_42, &STATE_VARIABLE_Info_3_44);
  MidVarDefn_25 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(MidVarName_24, IndexType_14, (MR_Word) ((MR_Unsigned) 0U), Context_10);
  {
    MidVarNameType_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MidVarNameType_26, 0) = ((MR_Box) (MidVarName_24));
    MR_hl_field(0, MidVarNameType_26, 1) = ((MR_Box) (IndexType_14));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 10, &ResultVarName_27, STATE_VARIABLE_Info_3_44, &STATE_VARIABLE_Info_4_46);
  ResultVarDefn_28 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ResultVarName_27, ResultType_15, (MR_Word) ((MR_Unsigned) 0U), Context_10);
  {
    ResultVarNameType_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultVarNameType_29, 0) = ((MR_Box) (ResultVarName_27));
    MR_hl_field(0, ResultVarNameType_29, 1) = ((MR_Box) (ResultType_15));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (ResultVarDefn_28));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MidVarDefn_25));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (HiVarDefn_22));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    AlwaysDefns_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AlwaysDefns_30, 0) = ((MR_Box) (LoVarDefn_19));
    MR_hl_field(1, AlwaysDefns_30, 1) = ((MR_Box) (Var_47));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_4_46, &ModuleInfo_55);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_55, &Globals_56);
  SupportsGoto_57 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(Globals_56);
  libs__globals__lookup_string_option_3_p_0(Globals_56, (MR_Integer) 754, &Experiment_58);
  switch (SupportsGoto_57) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word StopLoopType_59 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
        MR_Word StopLoopVarName_61;
        MR_Word StopLoopVarDefn_62;
        MR_Word StopLoopVarNameType_63;

        ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_61, STATE_VARIABLE_Info_4_46, &STATE_VARIABLE_Info_5_52);
        StopLoopVarDefn_62 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_61, StopLoopType_59, (MR_Word) ((MR_Unsigned) 0U), Context_10);
        {
          StopLoopVarNameType_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StopLoopVarNameType_63, 0) = ((MR_Box) (StopLoopVarName_61));
          MR_hl_field(0, StopLoopVarNameType_63, 1) = ((MR_Box) (StopLoopType_59));
        }
        {
          MaybeStopLoopNameType_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStopLoopNameType_31, 0) = ((MR_Box) (StopLoopVarNameType_63));
        }
        {
          StopLoopVarDefns_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, StopLoopVarDefns_32, 0) = ((MR_Box) (StopLoopVarDefn_62));
          MR_hl_field(1, StopLoopVarDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = (strcmp(Experiment_58, (MR_String) "use_stop_loop") == 0);
        if (succeeded)
        {
          MR_Word StopLoopType_68 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
          MR_Word StopLoopVarName_70;
          MR_Word StopLoopVarDefn_71;
          MR_Word StopLoopVarNameType_72;

          ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_70, STATE_VARIABLE_Info_4_46, &STATE_VARIABLE_Info_5_52);
          StopLoopVarDefn_71 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_70, StopLoopType_68, (MR_Word) ((MR_Unsigned) 0U), Context_10);
          {
            StopLoopVarNameType_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StopLoopVarNameType_72, 0) = ((MR_Box) (StopLoopVarName_70));
            MR_hl_field(0, StopLoopVarNameType_72, 1) = ((MR_Box) (StopLoopType_68));
          }
          {
            MaybeStopLoopNameType_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeStopLoopNameType_31, 0) = ((MR_Box) (StopLoopVarNameType_72));
          }
          {
            StopLoopVarDefns_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StopLoopVarDefns_32, 0) = ((MR_Box) (StopLoopVarDefn_71));
            MR_hl_field(1, StopLoopVarDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MaybeStopLoopNameType_31 = (MR_Word) ((MR_Unsigned) 0U);
          StopLoopVarDefns_32 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_5_52 = STATE_VARIABLE_Info_4_46;
        }
      }
      break;
  }
  Defns_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), AlwaysDefns_30, StopLoopVarDefns_32);
  switch (CanFail_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_8, Context_10, &FailStmts_34, STATE_VARIABLE_Info_5_52, STATE_VARIABLE_Info_36);
      break;
    case (MR_Integer) 1:
      {
        FailStmts_34 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_5_52;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *BinarySearchInfo_12 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (CodeModel_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarRval_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (LoVarNameType_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (HiVarNameType_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (MidVarNameType_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (ResultVarNameType_29));
    MR_hl_field(0, base, 6) = ((MR_Box) (MaybeStopLoopNameType_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (FailStmts_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Defns_33));
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
      MR_Word CaseIdStmt_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CaseIdsStmts_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CaseId_10 = ((MR_Word) ((MR_hl_field(0, CaseIdStmt_7, 0))));
      MR_Word Stmt_11 = ((MR_Word) ((MR_hl_field(0, CaseIdStmt_7, 1))));
      MR_Integer CaseNum_12 = (MR_Integer) (CaseId_10);
      MR_Word MatchCond_13;
      MR_Word SwitchCase_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_SwitchCases_1_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SwitchCases_0_2;

      {
        Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_18, 0) = ((MR_Box) (CaseNum_12));
      }
      {
        Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MatchCond_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MatchCond_13, 0) = ((MR_Box) (Var_17));
      }
      {
        SwitchCase_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SwitchCase_14, 0) = ((MR_Box) (MatchCond_13));
        MR_hl_field(0, SwitchCase_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, SwitchCase_14, 2) = ((MR_Box) (Stmt_11));
      }
      {
        STATE_VARIABLE_SwitchCases_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_SwitchCases_1_20, 0) = ((MR_Box) (SwitchCase_14));
        MR_hl_field(1, STATE_VARIABLE_SwitchCases_1_20, 1) = ((MR_Box) (STATE_VARIABLE_SwitchCases_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CaseIdsStmts_8;
      next_value_of_STATE_VARIABLE_SwitchCases_0_2 = STATE_VARIABLE_SwitchCases_1_20;
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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_3,
  MR_Word * STATE_VARIABLE_RowInitializersCord_4,
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
      *STATE_VARIABLE_RowInitializersCord_4 = STATE_VARIABLE_RowInitializersCord_0_3;
    }
    else
    {
      MR_String Str_14;
      MR_Word CaseId_15;
      MR_Word StrCaseIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer CaseNum_20;
      MR_Word StrRval_21;
      MR_Word CaseNumRval_22;
      MR_Word RowInitializer_23;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_RowInitializersCord_1_36;
      MR_Integer STATE_VARIABLE_CurIndex_1_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RowInitializersCord_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_5;

      Str_14 = ((MR_String) ((MR_hl_field(0, Var_28, 0))));
      CaseId_15 = ((MR_Word) ((MR_hl_field(0, Var_28, 1))));
      CaseNum_20 = (MR_Integer) (CaseId_15);
      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (Str_14));
      }
      {
        StrRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, StrRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, StrRval_21, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_30, 0) = ((MR_Box) (CaseNum_20));
      }
      {
        CaseNumRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CaseNumRval_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, CaseNumRval_22, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (StrRval_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (CaseNumRval_22));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        RowInitializer_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, RowInitializer_23, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(2, RowInitializer_23, 1) = ((MR_Box) (Var_31));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (RowInitializer_23)), STATE_VARIABLE_RowInitializersCord_0_3, &STATE_VARIABLE_RowInitializersCord_1_36);
      STATE_VARIABLE_CurIndex_1_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrCaseIds_16;
      next_value_of_STATE_VARIABLE_RowInitializersCord_0_3 = STATE_VARIABLE_RowInitializersCord_1_36;
      next_value_of_STATE_VARIABLE_CurIndex_0_5 = STATE_VARIABLE_CurIndex_1_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RowInitializersCord_0_3 = next_value_of_STATE_VARIABLE_RowInitializersCord_0_3;
      STATE_VARIABLE_CurIndex_0_5 = next_value_of_STATE_VARIABLE_CurIndex_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__lookup_switch_util__get_string_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__880__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__lookup_switch_util__get_string_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0(
  MR_Word VarRval_10,
  MR_Word TaggedCases_11,
  MR_Word LookupSwitchInfo_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word Context_15,
  MR_Word * Defns_16,
  MR_Word * Stmts_17,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word CaseIdConsts_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 0))));
  MR_Word OutVars_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 1))));
  MR_Word OutTypes_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 2))));
  MR_Word STATE_VARIABLE_Info_1_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_12, 3))));

  if (((MR_tag((MR_Word) CaseIdConsts_19)) == (MR_Integer) 0))
  {
    MR_Word CaseIdValueMap_22 = ((MR_Word) ((MR_hl_field(0, CaseIdConsts_19, 0))));
    MR_Word StrValueMap_23;
    MR_Word StrValues_24;

    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[16]), TaggedCases_11, CaseIdValueMap_22, &StrValueMap_23);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), StrValueMap_23, &StrValues_24);
    ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(VarRval_10, StrValues_24, CodeModel_13, CanFail_14, OutVars_20, OutTypes_21, Context_15, Defns_16, Stmts_17, STATE_VARIABLE_Info_1_30, STATE_VARIABLE_Info_29);
  }
  else
  {
    MR_Word CaseIdSolnMap_25 = ((MR_Word) ((MR_hl_field(1, CaseIdConsts_19, 0))));
    MR_Word StrSolnMap_27;
    MR_Word StrSolns_28;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[3]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_2));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (CodeModel_13));
      MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_lookup_switch\'/9", (MR_String) "CodeModel != model_non");
    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[17]), TaggedCases_11, CaseIdSolnMap_25, &StrSolnMap_27);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), StrSolnMap_27, &StrSolns_28);
    ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(VarRval_10, StrSolns_28, CodeModel_13, CanFail_14, OutVars_20, OutTypes_21, Context_15, Defns_16, Stmts_17, STATE_VARIABLE_Info_1_30, STATE_VARIABLE_Info_29);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_Word FirstSolnRowInitializersCord_68;
  MR_Word LaterSolnRowInitializersCord_69;
  MR_Word FirstSolnRowInitializers_70;
  MR_Word LaterSolnRowInitializers_71;
  MR_Word FirstSolnVectorCommon_72;
  MR_Word GlobalData3_73;
  MR_Word LaterSolnVectorCommon_74;
  MR_Word GlobalData_75;
  MR_Word MatchDefns_76;
  MR_Word SuccessStmts_77;
  MR_Word STATE_VARIABLE_Info_1_89;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_Info_2_105;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_Info_3_108;

  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), CaseSolns_13, (MR_Integer) 1, &TableSize_22, &HashSlotMap_23, &HashOp_24, &NumCollisions_25);
  HashMask_26 = (MR_Integer) ((MR_Unsigned) TableSize_22 - (MR_Unsigned) 1);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_79, &ModuleInfo_27);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_28);
  MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_79, &Target_30);
  MLDS_IntType_32 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  succeeded = (NumCollisions_25 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (MLDS_IntType_32));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (OutTypes_17));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (MLDS_IntType_32));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      FirstSolnFieldTypes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FirstSolnFieldTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, FirstSolnFieldTypes_33, 1) = ((MR_Box) (Var_84));
    }
    LoopPresent_34 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;

    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MLDS_IntType_32));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (OutTypes_17));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (MLDS_IntType_32));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (MLDS_IntType_32));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      FirstSolnFieldTypes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FirstSolnFieldTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, FirstSolnFieldTypes_33, 1) = ((MR_Box) (Var_86));
    }
    LoopPresent_34 = (MR_Integer) 1;
  }
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_14, CanFail_15, LoopPresent_34, Context_18, VarRval_12, &HashSearchInfo_35, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_1_89);
  SlotVarNameType_40 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_35, 3))));
  *Defns_19 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_35, 7))));
  SlotVarName_44 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_40, 0))));
  SlotVarType_45 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_40, 1))));
  {
    SlotVarLval_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotVarLval_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SlotVarLval_46, 1) = ((MR_Box) (SlotVarName_44));
    MR_hl_field(3, SlotVarLval_46, 2) = ((MR_Box) (SlotVarType_45));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_1_89, &GlobalData0_47);
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
      StringFieldIdPrime_56 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_50, 0))));
      Var_90 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_50, 1))));
      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NumLaterSolnsFieldIdPrime_57 = ((MR_Word) ((MR_hl_field(1, Var_90, 0))));
        Var_91 = ((MR_Word) ((MR_hl_field(1, Var_90, 1))));
        succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FirstLaterSolnRowFieldIdPrime_58 = ((MR_Word) ((MR_hl_field(1, Var_91, 0))));
          FirstSolnOutFieldIdsPrime_59 = ((MR_Word) ((MR_hl_field(1, Var_91, 1))));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
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
      StringFieldIdPrime_110 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_50, 0))));
      Var_94 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_50, 1))));
      succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NextSlotFieldIdPrime_65 = ((MR_Word) ((MR_hl_field(1, Var_94, 0))));
        Var_95 = ((MR_Word) ((MR_hl_field(1, Var_94, 1))));
        succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NumLaterSolnsFieldIdPrime_111 = ((MR_Word) ((MR_hl_field(1, Var_95, 0))));
          Var_96 = ((MR_Word) ((MR_hl_field(1, Var_95, 1))));
          succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FirstLaterSolnRowFieldIdPrime_112 = ((MR_Word) ((MR_hl_field(1, Var_96, 0))));
            FirstSolnOutFieldIdsPrime_113 = ((MR_Word) ((MR_hl_field(1, Var_96, 1))));
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
        MaybeNextSlotFieldId_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeNextSlotFieldId_64, 0) = ((MR_Box) (NextSlotFieldIdPrime_65));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
  }
  DummyOutRvals_66 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[14]), OutTypes_17);
  DummyOutInitializers_67 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[15]), DummyOutRvals_66);
  Var_102 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  Var_103 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0((MR_Integer) 0, TableSize_22, HashSlotMap_23, FirstSolnStructType_49, LaterSolnStructType_53, MaybeNextSlotFieldId_64, DummyOutInitializers_67, Var_102, &FirstSolnRowInitializersCord_68, Var_103, &LaterSolnRowInitializersCord_69, (MR_Integer) 0);
  FirstSolnRowInitializers_70 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FirstSolnRowInitializersCord_68);
  LaterSolnRowInitializers_71 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializersCord_69);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, FirstSolnStructTypeNum_48, FirstSolnRowInitializers_70, &FirstSolnVectorCommon_72, GlobalData2_55, &GlobalData3_73);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, LaterSolnStructTypeNum_52, LaterSolnRowInitializers_71, &LaterSolnVectorCommon_74, GlobalData3_73, &GlobalData_75);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_75, STATE_VARIABLE_Info_1_89, &STATE_VARIABLE_Info_2_105);
  {
    Var_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_106, 0) = ((MR_Box) (SlotVarLval_46));
  }
  ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_18, Var_106, OutVars_16, OutTypes_17, FirstSolnStructType_49, LaterSolnStructType_53, NumLaterSolnsFieldId_61, FirstLaterSolnRowFieldId_62, FirstSolnOutFieldIds_63, LaterSolnOutFieldIds_54, FirstSolnVectorCommon_72, LaterSolnVectorCommon_74, (MR_Integer) 0, &MatchDefns_76, &SuccessStmts_77, STATE_VARIABLE_Info_2_105, &STATE_VARIABLE_Info_3_108);
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string several_soln lookup switch", HashSearchInfo_35, HashOp_24, FirstSolnVectorCommon_72, FirstSolnStructType_49, StringFieldId_60, MaybeNextSlotFieldId_64, HashMask_26, MatchDefns_76, SuccessStmts_77, Stmts_20, STATE_VARIABLE_Info_3_108, STATE_VARIABLE_Info_80);
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_24,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_25,
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
      *STATE_VARIABLE_FirstSolnRowInitializersCord_25 = STATE_VARIABLE_FirstSolnRowInitializersCord_0_24;
    }
    else
    {
      MR_Word FirstSolnsRowInitializer_23;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_1_29;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_1_30;
      MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_1_31;
      MR_Integer Var_32;
      MR_Word StringRval_41;
      MR_Word NextSlotRval_42;
      MR_Word NumLaterSolnsRval_44;
      MR_Word FirstLaterSlotRval_45;
      MR_Word FirstSolnOutInitializers_46;
      MR_Word HashSlotMapEntry_37;
      MR_Box conv0_HashSlotMapEntry_37;
      MR_Integer next_value_of_Slot_13;
      MR_Word next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_24;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      MR_Integer next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[6]), HashSlotMap_15, Slot_13, &conv0_HashSlotMapEntry_37);
      if (succeeded)
      {
        HashSlotMapEntry_37 = ((MR_Word) (conv0_HashSlotMapEntry_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_38 = ((MR_String) ((MR_hl_field(0, HashSlotMapEntry_37, 0))));
        MR_Integer Next_39 = ((MR_Integer) ((MR_hl_field(0, HashSlotMapEntry_37, 1))));
        MR_Word Solns_40 = ((MR_Word) ((MR_hl_field(0, HashSlotMapEntry_37, 2))));
        MR_Word Var_50;
        MR_Word Var_51;

        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (String_38));
        }
        {
          StringRval_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_41, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (Next_39));
        }
        {
          NextSlotRval_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_42, 1) = ((MR_Box) (Var_51));
        }
        if (((MR_tag((MR_Word) Solns_40)) == (MR_Integer) 0))
        {
          MR_Word FirstSolnRvals_43 = ((MR_Word) ((MR_hl_field(0, Solns_40, 0))));

          NumLaterSolnsRval_44 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17]));
          FirstLaterSlotRval_45 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19]));
          FirstSolnOutInitializers_46 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[12]), FirstSolnRvals_43);
          STATE_VARIABLE_LaterSolnRowInitializersCord_1_29 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
          STATE_VARIABLE_CurLaterSolnIndex_1_30 = STATE_VARIABLE_CurLaterSolnIndex_0_28;
        }
        else
        {
          MR_Word LaterSolns_47 = ((MR_Word) ((MR_hl_field(1, Solns_40, 1))));
          MR_Integer NumLaterSolns_48;
          MR_Word LaterSolnRowInitializers_49;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word FirstSolnRvals_72 = ((MR_Word) ((MR_hl_field(1, Solns_40, 0))));

          mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_47, &NumLaterSolns_48);
          {
            Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_53, 0) = ((MR_Box) (NumLaterSolns_48));
          }
          {
            NumLaterSolnsRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NumLaterSolnsRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, NumLaterSolnsRval_44, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_54, 0) = ((MR_Box) (STATE_VARIABLE_CurLaterSolnIndex_0_28));
          }
          {
            FirstLaterSlotRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, FirstLaterSlotRval_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, FirstLaterSlotRval_45, 1) = ((MR_Box) (Var_54));
          }
          FirstSolnOutInitializers_46 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[13]), FirstSolnRvals_72);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_5[0]));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0_3));
            MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_56, 3) = ((MR_Box) (LaterSolnStructType_17));
          }
          LaterSolnRowInitializers_49 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_56, LaterSolns_47);
          Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_49);
          STATE_VARIABLE_LaterSolnRowInitializersCord_1_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_26, Var_57);
          STATE_VARIABLE_CurLaterSolnIndex_1_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurLaterSolnIndex_0_28 + (MR_Unsigned) NumLaterSolns_48);
        }
      }
      else
      {
        StringRval_41 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[21]));
        NextSlotRval_42 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[22]));
        NumLaterSolnsRval_44 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19]));
        FirstLaterSlotRval_45 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19]));
        FirstSolnOutInitializers_46 = DummyOutInitializers_19;
        STATE_VARIABLE_CurLaterSolnIndex_1_30 = STATE_VARIABLE_CurLaterSolnIndex_0_28;
        STATE_VARIABLE_LaterSolnRowInitializersCord_1_29 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      }
      if ((MaybeNextSlotId_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (StringRval_41));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (NumLaterSolnsRval_44));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (FirstLaterSlotRval_45));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (FirstSolnOutInitializers_46));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          FirstSolnsRowInitializer_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FirstSolnsRowInitializer_23, 0) = ((MR_Box) (FirstSolnStructType_16));
          MR_hl_field(2, FirstSolnsRowInitializer_23, 1) = ((MR_Box) (Var_66));
        }
      }
      else
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;

        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (StringRval_41));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (NextSlotRval_42));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (NumLaterSolnsRval_44));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (FirstLaterSlotRval_45));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (FirstSolnOutInitializers_46));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
        }
        {
          FirstSolnsRowInitializer_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FirstSolnsRowInitializer_23, 0) = ((MR_Box) (FirstSolnStructType_16));
          MR_hl_field(2, FirstSolnsRowInitializer_23, 1) = ((MR_Box) (Var_58));
        }
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (FirstSolnsRowInitializer_23)), STATE_VARIABLE_FirstSolnRowInitializersCord_0_24, &STATE_VARIABLE_FirstSolnRowInitializersCord_1_31);
      Var_32 = (MR_Integer) ((MR_Unsigned) Slot_13 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_13 = Var_32;
      next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_24 = STATE_VARIABLE_FirstSolnRowInitializersCord_1_31;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26 = STATE_VARIABLE_LaterSolnRowInitializersCord_1_29;
      next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28 = STATE_VARIABLE_CurLaterSolnIndex_1_30;
      Slot_13 = next_value_of_Slot_13;
      STATE_VARIABLE_FirstSolnRowInitializersCord_0_24 = next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_24;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_26 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
      STATE_VARIABLE_CurLaterSolnIndex_0_28 = next_value_of_STATE_VARIABLE_CurLaterSolnIndex_0_28;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_Word RowInitializersCord_60;
  MR_Word RowInitializers_61;
  MR_Word VectorCommon_62;
  MR_Word GlobalData_63;
  MR_Word LookupStmts_64;
  MR_Word FoundMatchCommentStmt_66;
  MR_Word MatchStmts_67;
  MR_Word STATE_VARIABLE_Info_1_76;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_Info_2_87;
  MR_Word STATE_VARIABLE_Info_3_88;
  MR_Word STATE_VARIABLE_Info_4_91;

  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), CaseValues_13, (MR_Integer) 1, &TableSize_22, &HashSlotMap_23, &HashOp_24, &NumCollisions_25);
  HashMask_26 = (MR_Integer) ((MR_Unsigned) TableSize_22 - (MR_Unsigned) 1);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_70, &ModuleInfo_27);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_28);
  MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_70, &Target_30);
  succeeded = (NumCollisions_25 == (MR_Integer) 0);
  if (succeeded)
  {
    {
      MLDS_ArgTypes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MLDS_ArgTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MLDS_ArgTypes_33, 1) = ((MR_Box) (OutTypes_17));
    }
    LoopPresent_34 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_75;

    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (OutTypes_17));
    }
    {
      MLDS_ArgTypes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MLDS_ArgTypes_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MLDS_ArgTypes_33, 1) = ((MR_Box) (Var_75));
    }
    LoopPresent_34 = (MR_Integer) 1;
  }
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_14, CanFail_15, LoopPresent_34, Context_18, VarRval_12, &HashSearchInfo_35, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_1_76);
  SlotVarNameType_40 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_35, 3))));
  *Defns_19 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_35, 7))));
  SlotVarName_44 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_40, 0))));
  SlotVarType_45 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_40, 1))));
  {
    SlotVarLval_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotVarLval_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SlotVarLval_46, 1) = ((MR_Box) (SlotVarName_44));
    MR_hl_field(3, SlotVarLval_46, 2) = ((MR_Box) (SlotVarType_45));
  }
  {
    SlotVarRval_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, SlotVarRval_47, 0) = ((MR_Box) (SlotVarLval_46));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_1_76, &GlobalData0_48);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_29, Context_18, Target_30, MLDS_ArgTypes_33, &StructTypeNum_49, &StructType_50, &FieldIds_51, GlobalData0_48, &GlobalData1_52);
  succeeded = (NumCollisions_25 == (MR_Integer) 0);
  if (succeeded)
    if ((FieldIds_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      StringFieldId_53 = ((MR_Word) ((MR_hl_field(1, FieldIds_51, 0))));
      OutFieldIds_54 = ((MR_Word) ((MR_hl_field(1, FieldIds_51, 1))));
      MaybeNextSlotFieldId_55 = (MR_Word) ((MR_Unsigned) 0U);
    }
  else
  if ((FieldIds_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
      return;
    }
  else
  {
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(1, FieldIds_51, 1))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, FieldIds_51, 0))));

    if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      MR_Word NextSlotFieldId_56;

      StringFieldId_53 = Var_113;
      NextSlotFieldId_56 = ((MR_Word) ((MR_hl_field(1, Var_112, 0))));
      OutFieldIds_54 = ((MR_Word) ((MR_hl_field(1, Var_112, 1))));
      {
        MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeNextSlotFieldId_55, 0) = ((MR_Box) (NextSlotFieldId_56));
      }
    }
  }
  DummyOutRvals_58 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[10]), OutTypes_17);
  DummyOutInitializers_59 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[11]), DummyOutRvals_58);
  Var_86 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0((MR_Integer) 0, TableSize_22, StructType_50, HashSlotMap_23, MaybeNextSlotFieldId_55, DummyOutInitializers_59, Var_86, &RowInitializersCord_60);
  RowInitializers_61 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializersCord_60);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_29, StructTypeNum_49, RowInitializers_61, &VectorCommon_62, GlobalData1_52, &GlobalData_63);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_63, STATE_VARIABLE_Info_1_76, &STATE_VARIABLE_Info_2_87);
  ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_16, OutTypes_17, OutFieldIds_54, VectorCommon_62, StructType_50, SlotVarRval_47, Context_18, &LookupStmts_64, STATE_VARIABLE_Info_2_87, &STATE_VARIABLE_Info_3_88);
  {
    FoundMatchCommentStmt_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FoundMatchCommentStmt_66, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, FoundMatchCommentStmt_66, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[2])));
    MR_hl_field(3, FoundMatchCommentStmt_66, 2) = ((MR_Box) (Context_18));
  }
  switch (CodeModel_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MatchStmts_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MatchStmts_67, 0) = ((MR_Box) (FoundMatchCommentStmt_66));
          MR_hl_field(1, MatchStmts_67, 1) = ((MR_Box) (LookupStmts_64));
        }
        STATE_VARIABLE_Info_4_91 = STATE_VARIABLE_Info_3_88;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "model_non");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessTrueStmt_68;
        MR_Word Var_93;
        MR_Word Var_94;

        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[15])), Context_18, &SetSuccessTrueStmt_68, STATE_VARIABLE_Info_3_88, &STATE_VARIABLE_Info_4_91);
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (FoundMatchCommentStmt_66));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (LookupStmts_64));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (SetSuccessTrueStmt_68));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MatchStmts_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_93, Var_94);
      }
      break;
  }
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string simple lookup switch", HashSearchInfo_35, HashOp_24, VectorCommon_62, StructType_50, StringFieldId_53, MaybeNextSlotFieldId_55, HashMask_26, (MR_Word) ((MR_Unsigned) 0U), MatchStmts_67, Stmts_20, STATE_VARIABLE_Info_4_91, STATE_VARIABLE_Info_71);
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0(
  MR_Integer Slot_9,
  MR_Integer TableSize_10,
  MR_Word StructType_11,
  MR_Word HashSlotMap_12,
  MR_Word MaybeNextSlotId_13,
  MR_Word DummyOutInitializers_14,
  MR_Word STATE_VARIABLE_RowInitializersCord_0_17,
  MR_Word * STATE_VARIABLE_RowInitializersCord_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_9 == TableSize_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RowInitializersCord_18 = STATE_VARIABLE_RowInitializersCord_0_17;
    else
    {
      MR_Word RowInitializer_16;
      MR_Word STATE_VARIABLE_RowInitializersCord_1_19;
      MR_Integer Var_20;
      MR_Word StringRval_28;
      MR_Word NextSlotRval_29;
      MR_Word OutInitializers_30;
      MR_Word HashSlotMapEntry_24;
      MR_Box conv0_HashSlotMapEntry_24;
      MR_Integer next_value_of_Slot_9;
      MR_Word next_value_of_STATE_VARIABLE_RowInitializersCord_0_17;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[5]), HashSlotMap_12, Slot_9, &conv0_HashSlotMapEntry_24);
      if (succeeded)
      {
        HashSlotMapEntry_24 = ((MR_Word) (conv0_HashSlotMapEntry_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_25 = ((MR_String) ((MR_hl_field(0, HashSlotMapEntry_24, 0))));
        MR_Integer Next_26 = ((MR_Integer) ((MR_hl_field(0, HashSlotMapEntry_24, 1))));
        MR_Word OutRvals_27 = ((MR_Word) ((MR_hl_field(0, HashSlotMapEntry_24, 2))));
        MR_Word Var_31;
        MR_Word Var_32;

        {
          Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_31, 1) = ((MR_Box) (String_25));
        }
        {
          StringRval_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_28, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_32, 0) = ((MR_Box) (Next_26));
        }
        {
          NextSlotRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_29, 1) = ((MR_Box) (Var_32));
        }
        OutInitializers_30 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[9]), OutRvals_27);
      }
      else
      {
        StringRval_28 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[21]));
        NextSlotRval_29 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[22]));
        OutInitializers_30 = DummyOutInitializers_14;
      }
      if ((MaybeNextSlotId_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_38;
        MR_Word Var_39;

        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (StringRval_28));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (OutInitializers_30));
        }
        {
          RowInitializer_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RowInitializer_16, 0) = ((MR_Box) (StructType_11));
          MR_hl_field(2, RowInitializer_16, 1) = ((MR_Box) (Var_38));
        }
      }
      else
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;

        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (StringRval_28));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (NextSlotRval_29));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (OutInitializers_30));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
        }
        {
          RowInitializer_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RowInitializer_16, 0) = ((MR_Box) (StructType_11));
          MR_hl_field(2, RowInitializer_16, 1) = ((MR_Box) (Var_34));
        }
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (RowInitializer_16)), STATE_VARIABLE_RowInitializersCord_0_17, &STATE_VARIABLE_RowInitializersCord_1_19);
      Var_20 = (MR_Integer) ((MR_Unsigned) Slot_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_9 = Var_20;
      next_value_of_STATE_VARIABLE_RowInitializersCord_0_17 = STATE_VARIABLE_RowInitializersCord_1_19;
      Slot_9 = next_value_of_Slot_9;
      STATE_VARIABLE_RowInitializersCord_0_17 = next_value_of_STATE_VARIABLE_RowInitializersCord_0_17;
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
  MR_bool succeeded;
  MR_Word CodeMap_20;
  MR_Word ReachableConstVarMaps_21;
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
  MR_Word RowInitializersCord_65;
  MR_Word RevMap_66;
  MR_Word RowInitializers_67;
  MR_Word VectorCommon_68;
  MR_Word GlobalData_69;
  MR_Word RevMapEntries_70;
  MR_Word SlotsCases0_71;
  MR_Word SlotsCases_72;
  MR_Word SwitchStmt0_73;
  MR_Word SwitchStmt_74;
  MR_Word FoundMatchStmts_76;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Info_1_82;
  MR_Word STATE_VARIABLE_Info_2_83;
  MR_Word STATE_VARIABLE_Info_3_90;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word STATE_VARIABLE_Info_4_105;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Integer Var_110;
  MR_Word STATE_VARIABLE_Info_5_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Integer _MaxCaseNum_22;

  Var_80 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
  ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0(CodeModel_13, EntryPackedArgsMap_15, TaggedCases_12, Var_80, &CodeMap_20, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_21, STATE_VARIABLE_Info_0_78, &STATE_VARIABLE_Info_1_82);
  ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_21, STATE_VARIABLE_Info_1_82, &STATE_VARIABLE_Info_2_83);
  backend_libs__string_switch_util__build_str_case_id_list_3_p_0(TaggedCases_12, &_MaxCaseNum_22, &StrsCaseIds_23);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), StrsCaseIds_23, (MR_Integer) 1, &TableSize_24, &HashSlotMap_25, &HashOp_26, &NumCollisions_27);
  HashMask_28 = (MR_Integer) ((MR_Unsigned) TableSize_24 - (MR_Unsigned) 1);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_2_83, &ModuleInfo_29);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_29, &ModuleName_30);
  MLDS_ModuleName_31 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_30);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_2_83, &Target_32);
  succeeded = (NumCollisions_27 == (MR_Integer) 0);
  if (succeeded)
  {
    MLDS_ArgTypes_35 = (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_1[12]));
    LoopPresent_36 = (MR_Integer) 0;
  }
  else
  {
    MLDS_ArgTypes_35 = (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_1[14]));
    LoopPresent_36 = (MR_Integer) 1;
  }
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_8_p_0(CodeModel_13, CanFail_14, LoopPresent_36, Context_16, VarRval_11, &HashSearchInfo_37, STATE_VARIABLE_Info_2_83, &STATE_VARIABLE_Info_3_90);
  SlotVarNameType_42 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_37, 3))));
  *Defns_17 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_37, 7))));
  SlotVarName_46 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_42, 0))));
  SlotVarType_47 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_42, 1))));
  {
    SlotVarLval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotVarLval_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SlotVarLval_48, 1) = ((MR_Box) (SlotVarName_46));
    MR_hl_field(3, SlotVarLval_48, 2) = ((MR_Box) (SlotVarType_47));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_3_90, &GlobalData0_49);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_31, Context_16, Target_32, MLDS_ArgTypes_35, &StructTypeNum_50, &StructType_51, &FieldIds_52, GlobalData0_49, &GlobalData1_53);
  succeeded = (NumCollisions_27 == (MR_Integer) 0);
  if (succeeded)
    if ((FieldIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(1, FieldIds_52, 1))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(1, FieldIds_52, 0))));

      if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        StringFieldId_54 = Var_135;
        MaybeNextSlotFieldId_55 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
    }
  else
  if ((FieldIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
      return;
    }
  else
  {
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, FieldIds_52, 1))));
    MR_Word Var_137 = ((MR_Word) ((MR_hl_field(1, FieldIds_52, 0))));

    if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
        return;
      }
    else
    {
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(1, Var_136, 1))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(1, Var_136, 0))));

      if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        StringFieldId_54 = Var_137;
        {
          MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNextSlotFieldId_55, 0) = ((MR_Box) (Var_139));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/10", (MR_String) "bad FieldIds");
          return;
        }
    }
  }
  Var_103 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  Var_104 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0));
  ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0((MR_Integer) 0, TableSize_24, HashSlotMap_25, StructType_51, MaybeNextSlotFieldId_55, Var_103, &RowInitializersCord_65, Var_104, &RevMap_66);
  RowInitializers_67 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializersCord_65);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_31, StructTypeNum_50, RowInitializers_67, &VectorCommon_68, GlobalData1_53, &GlobalData_69);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_69, STATE_VARIABLE_Info_3_90, &STATE_VARIABLE_Info_4_105);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), RevMap_66, &RevMapEntries_70);
  ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(CodeMap_20, RevMapEntries_70, (MR_Word) ((MR_Unsigned) 0U), &SlotsCases0_71);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SlotsCases0_71, &SlotsCases_72);
  {
    Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_107, 0) = ((MR_Box) (SlotVarLval_48));
  }
  Var_110 = (MR_Integer) ((MR_Unsigned) TableSize_24 - (MR_Unsigned) 1);
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
  }
  {
    SwitchStmt0_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchStmt0_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SwitchStmt0_73, 1) = ((MR_Box) (SlotVarType_47));
    MR_hl_field(3, SwitchStmt0_73, 2) = ((MR_Box) (Var_107));
    MR_hl_field(3, SwitchStmt0_73, 3) = ((MR_Box) (Var_108));
    MR_hl_field(3, SwitchStmt0_73, 4) = ((MR_Box) (SlotsCases_72));
    MR_hl_field(3, SwitchStmt0_73, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SwitchStmt0_73, 6) = ((MR_Box) (Context_16));
  }
  ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_73, &SwitchStmt_74, STATE_VARIABLE_Info_4_105, &STATE_VARIABLE_Info_5_113);
  {
    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_114, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[0])));
    MR_hl_field(3, Var_114, 2) = ((MR_Box) (Context_16));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (SwitchStmt_74));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FoundMatchStmts_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FoundMatchStmts_76, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, FoundMatchStmts_76, 1) = ((MR_Box) (Var_116));
  }
  ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_13_p_0((MR_String) "hashed string jump switch", HashSearchInfo_37, HashOp_26, VectorCommon_68, StructType_51, StringFieldId_54, MaybeNextSlotFieldId_55, HashMask_28, (MR_Word) ((MR_Unsigned) 0U), FoundMatchStmts_76, Stmts_18, STATE_VARIABLE_Info_5_113, STATE_VARIABLE_Info_79);
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
  MR_Word CodeModel_26 = ((((MR_Unsigned) ((MR_hl_field(0, HashSearchInfo_15, 0))) >> 1)) & (MR_Integer) 3);
  MR_Word LoopPresent_27 = ((MR_Unsigned) ((MR_hl_field(0, HashSearchInfo_15, 0))) & (MR_Integer) 1);
  MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 1))));
  MR_Word VarRval_29 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 2))));
  MR_Word SlotVarNameType_30 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 3))));
  MR_Word StringVarNameType_31 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 4))));
  MR_Word MaybeStopLoopVarNameType_32 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 5))));
  MR_Word FailStmts_33 = ((MR_Word) ((MR_hl_field(0, HashSearchInfo_15, 6))));
  MR_Word SlotVarName_35 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_30, 0))));
  MR_Word SlotVarType_36 = ((MR_Word) ((MR_hl_field(0, SlotVarNameType_30, 1))));
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
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_99;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_119;

  {
    SlotVarLval_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotVarLval_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SlotVarLval_37, 1) = ((MR_Box) (SlotVarName_35));
    MR_hl_field(3, SlotVarLval_37, 2) = ((MR_Box) (SlotVarType_36));
  }
  {
    SlotVarRval_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, SlotVarRval_38, 0) = ((MR_Box) (SlotVarLval_37));
  }
  StringVarName_39 = ((MR_Word) ((MR_hl_field(0, StringVarNameType_31, 0))));
  StringVarType_40 = ((MR_Word) ((MR_hl_field(0, StringVarNameType_31, 1))));
  {
    StringVarLval_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StringVarLval_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, StringVarLval_41, 1) = ((MR_Box) (StringVarName_39));
    MR_hl_field(3, StringVarLval_41, 2) = ((MR_Box) (StringVarType_40));
  }
  {
    StringVarRval_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, StringVarRval_42, 0) = ((MR_Box) (StringVarLval_41));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (InitialComment_14));
  }
  {
    InitialCommentStmt_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitialCommentStmt_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitialCommentStmt_52, 1) = ((MR_Box) (Var_75));
    MR_hl_field(3, InitialCommentStmt_52, 2) = ((MR_Box) (Context_28));
  }
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[7])));
    MR_hl_field(3, Var_76, 2) = ((MR_Box) (Context_28));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (HashOp_16));
    MR_hl_field(3, Var_85, 2) = ((MR_Box) (VarRval_29));
  }
  {
    Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_87, 0) = ((MR_Box) (HashMask_21));
  }
  {
    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[23])));
    MR_hl_field(3, Var_82, 2) = ((MR_Box) (Var_85));
    MR_hl_field(3, Var_82, 3) = ((MR_Box) (Var_86));
  }
  {
    Var_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_81, 0) = ((MR_Box) (SlotVarLval_37));
    MR_hl_field(2, Var_81, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
    MR_hl_field(3, Var_80, 2) = ((MR_Box) (Context_28));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    PrepareForMatchStmts_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrepareForMatchStmts_53, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, PrepareForMatchStmts_53, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_95, 1) = ((MR_Box) (StringVarType_40));
  }
  {
    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[24])));
    MR_hl_field(3, Var_90, 2) = ((MR_Box) (StringVarRval_42));
    MR_hl_field(3, Var_90, 3) = ((MR_Box) (Var_94));
  }
  {
    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_96, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
    MR_hl_field(3, Var_96, 2) = ((MR_Box) (StringVarRval_42));
    MR_hl_field(3, Var_96, 3) = ((MR_Box) (VarRval_29));
  }
  {
    FoundMatchCond_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FoundMatchCond_54, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, FoundMatchCond_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, FoundMatchCond_54, 2) = ((MR_Box) (Var_90));
    MR_hl_field(3, FoundMatchCond_54, 3) = ((MR_Box) (Var_96));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[8])));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (Context_28));
  }
  Var_107 = (MR_Word) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[1]));
  {
    Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_110, 1) = ((MR_Box) (VectorCommon_17));
    MR_hl_field(3, Var_110, 2) = ((MR_Box) (SlotVarRval_38));
  }
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (Var_110));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) (StructType_18));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (StringFieldId_19));
    MR_hl_field(0, Var_106, 4) = ((MR_Box) (StringVarType_40));
  }
  {
    Var_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_105, 0) = ((MR_Box) (Var_106));
  }
  {
    Var_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_104, 0) = ((MR_Box) (StringVarLval_41));
    MR_hl_field(2, Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_103, 1) = ((MR_Box) (Var_104));
    MR_hl_field(3, Var_103, 2) = ((MR_Box) (Context_28));
  }
  {
    Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_112, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[9])));
    MR_hl_field(3, Var_112, 2) = ((MR_Box) (Context_28));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_111));
  }
  {
    LookForMatchPrepareStmts_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LookForMatchPrepareStmts_55, 0) = ((MR_Box) (Var_99));
    MR_hl_field(1, LookForMatchPrepareStmts_55, 1) = ((MR_Box) (Var_102));
  }
  Var_119 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17]));
  {
    SlotTest_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotTest_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, SlotTest_56, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[18])));
    MR_hl_field(3, SlotTest_56, 2) = ((MR_Box) (SlotVarRval_38));
    MR_hl_field(3, SlotTest_56, 3) = ((MR_Box) (Var_119));
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
    MR_Word StopLoopVarNameType_45 = ((MR_Word) ((MR_hl_field(1, MaybeStopLoopVarNameType_32, 0))));
    MR_Word StopLoopVarName_46 = ((MR_Word) ((MR_hl_field(0, StopLoopVarNameType_45, 0))));
    MR_Word StopLoopVarType_47 = ((MR_Word) ((MR_hl_field(0, StopLoopVarNameType_45, 1))));
    MR_Word StopLoopVarLval0_48;
    MR_Word InitStopLoopVarStmt_196;
    MR_Word StopLoopTest_198;
    MR_Word Var_199;
    MR_Word Var_203;
    MR_Word MaybeStopLoopVarLval_213;
    MR_Word STATE_VARIABLE_Info_1_218;

    {
      StopLoopVarLval0_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, StopLoopVarLval0_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, StopLoopVarLval0_48, 1) = ((MR_Box) (StopLoopVarName_46));
      MR_hl_field(3, StopLoopVarLval0_48, 2) = ((MR_Box) (StopLoopVarType_47));
    }
    {
      MaybeStopLoopVarLval_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeStopLoopVarLval_213, 0) = ((MR_Box) (StopLoopVarLval0_48));
    }
    {
      StopLoopVarNameList_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StopLoopVarNameList_44, 0) = ((MR_Box) (StopLoopVarName_46));
      MR_hl_field(1, StopLoopVarNameList_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(CodeModel_26, LoopPresent_27, Context_28, MaybeStopLoopVarLval_213, MatchDefns_22, MatchStmts_23, FailStmts_33, &SetupForFailStmts_49, &SuccessStmt_50, &AfterStmts_51, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_1_218);
    {
      Var_199 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_199, 0) = ((MR_Box) (StopLoopVarLval0_48));
      MR_hl_field(2, Var_199, 1) = ((MR_Box) (Var_119));
    }
    {
      InitStopLoopVarStmt_196 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, InitStopLoopVarStmt_196, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, InitStopLoopVarStmt_196, 1) = ((MR_Box) (Var_199));
      MR_hl_field(3, InitStopLoopVarStmt_196, 2) = ((MR_Box) (Context_28));
    }
    {
      InitStopLoopVarStmts_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InitStopLoopVarStmts_57, 0) = ((MR_Box) (InitStopLoopVarStmt_196));
      MR_hl_field(1, InitStopLoopVarStmts_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    switch (CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          InitSuccessStmts_58 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_1_218;
        }
        break;
      case (MR_Integer) 2:
        {
          InitSuccessStmts_58 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_1_218;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitSuccessStmt_189;

          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[25])), Context_28, &InitSuccessStmt_189, STATE_VARIABLE_Info_1_218, STATE_VARIABLE_Info_72);
          {
            InitSuccessStmts_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InitSuccessStmts_58, 0) = ((MR_Box) (InitSuccessStmt_189));
            MR_hl_field(1, InitSuccessStmts_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      Var_203 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_203, 0) = ((MR_Box) (StopLoopVarLval0_48));
    }
    {
      StopLoopTest_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, StopLoopTest_198, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, StopLoopTest_198, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[26])));
      MR_hl_field(3, StopLoopTest_198, 2) = ((MR_Box) (Var_203));
      MR_hl_field(3, StopLoopTest_198, 3) = ((MR_Box) (Var_119));
    }
    {
      LoopTest_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LoopTest_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, LoopTest_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, LoopTest_59, 2) = ((MR_Box) (StopLoopTest_198));
      MR_hl_field(3, LoopTest_59, 3) = ((MR_Box) (SlotTest_56));
    }
  }
  if ((MaybeNextSlotFieldId_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NoLoopCommentStmt_70;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_182;
    MR_Word LookForMatchStmt_183;
    MR_Word SearchStmts_184;

    {
      NoLoopCommentStmt_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, NoLoopCommentStmt_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, NoLoopCommentStmt_70, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[10])));
      MR_hl_field(3, NoLoopCommentStmt_70, 2) = ((MR_Box) (Context_28));
    }
    {
      LookForMatchStmt_183 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LookForMatchStmt_183, 0) = ((MR_Box) (FoundMatchCond_54));
      MR_hl_field(2, LookForMatchStmt_183, 1) = ((MR_Box) (SuccessStmt_50));
      MR_hl_field(2, LookForMatchStmt_183, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, LookForMatchStmt_183, 3) = ((MR_Box) (Context_28));
    }
    {
      Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_179, 0) = ((MR_Box) (NoLoopCommentStmt_70));
      MR_hl_field(1, Var_179, 1) = ((MR_Box) (LookForMatchPrepareStmts_55));
    }
    {
      Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_180, 0) = ((MR_Box) (LookForMatchStmt_183));
      MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_179, Var_180);
    Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitSuccessStmts_58, Var_178);
    SearchStmts_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), PrepareForMatchStmts_53, Var_177);
    {
      Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_182, 0) = ((MR_Box) (InitialCommentStmt_52));
      MR_hl_field(1, Var_182, 1) = ((MR_Box) (SearchStmts_184));
    }
    *Stmts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_182, AfterStmts_51);
  }
  else
  {
    MR_Word NextSlotFieldId_64 = ((MR_Word) ((MR_hl_field(1, MaybeNextSlotFieldId_20, 0))));
    MR_Word NoMatchStmt_65;
    MR_Word LookForMatchStmt_66;
    MR_Word LoopBody_67;
    MR_Word LoopStmts_68;
    MR_Word SearchStmts_69;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_155;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_173;

    {
      Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_142, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[11])));
      MR_hl_field(3, Var_142, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_107));
      MR_hl_field(0, Var_149, 1) = ((MR_Box) (Var_110));
      MR_hl_field(0, Var_149, 2) = ((MR_Box) (StructType_18));
      MR_hl_field(0, Var_149, 3) = ((MR_Box) (NextSlotFieldId_64));
      MR_hl_field(0, Var_149, 4) = ((MR_Box) (SlotVarType_36));
    }
    {
      Var_148 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_148, 0) = ((MR_Box) (Var_149));
    }
    {
      Var_147 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_147, 0) = ((MR_Box) (SlotVarLval_37));
      MR_hl_field(2, Var_147, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_146, 1) = ((MR_Box) (Var_147));
      MR_hl_field(3, Var_146, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
      MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_145));
    }
    {
      NoMatchStmt_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NoMatchStmt_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NoMatchStmt_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NoMatchStmt_65, 2) = ((MR_Box) (Var_141));
      MR_hl_field(0, NoMatchStmt_65, 3) = ((MR_Box) (Context_28));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = ((MR_Box) (NoMatchStmt_65));
    }
    {
      LookForMatchStmt_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LookForMatchStmt_66, 0) = ((MR_Box) (FoundMatchCond_54));
      MR_hl_field(2, LookForMatchStmt_66, 1) = ((MR_Box) (SuccessStmt_50));
      MR_hl_field(2, LookForMatchStmt_66, 2) = ((MR_Box) (Var_155));
      MR_hl_field(2, LookForMatchStmt_66, 3) = ((MR_Box) (Context_28));
    }
    {
      Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_159, 0) = ((MR_Box) (LookForMatchStmt_66));
      MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), LookForMatchPrepareStmts_55, Var_159);
    {
      LoopBody_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LoopBody_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, LoopBody_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, LoopBody_67, 2) = ((MR_Box) (Var_158));
      MR_hl_field(0, LoopBody_67, 3) = ((MR_Box) (Context_28));
    }
    {
      Var_161 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_161, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_161, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[12])));
      MR_hl_field(3, Var_161, 2) = ((MR_Box) (Context_28));
    }
    {
      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_168, 0) = ((MR_Box) (StringVarName_39));
      MR_hl_field(1, Var_168, 1) = ((MR_Box) (StopLoopVarNameList_44));
    }
    {
      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_167, 0) = ((MR_Box) (SlotVarName_35));
      MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_168));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) (LoopTest_59));
      MR_hl_field(1, Var_165, 2) = ((MR_Box) (LoopBody_67));
      MR_hl_field(1, Var_165, 3) = ((MR_Box) (Var_167));
      MR_hl_field(1, Var_165, 4) = ((MR_Box) (Context_28));
    }
    {
      Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
      MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LoopStmts_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LoopStmts_68, 0) = ((MR_Box) (Var_161));
      MR_hl_field(1, LoopStmts_68, 1) = ((MR_Box) (Var_164));
    }
    Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitSuccessStmts_58, LoopStmts_68);
    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitStopLoopVarStmts_57, Var_171);
    SearchStmts_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), PrepareForMatchStmts_53, Var_170);
    {
      Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_172, 0) = ((MR_Box) (InitialCommentStmt_52));
      MR_hl_field(1, Var_172, 1) = ((MR_Box) (SetupForFailStmts_49));
    }
    Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), SearchStmts_69, AfterStmts_51);
    *Stmts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_172, Var_173);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2119__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__2099__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word OnlyFailAfterStmts_24;

  switch (CodeModel_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_46;

        *SetupForFailStmts_20 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[5]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (FailStmts_19));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (*SetupForFailStmts_20));
        }
        mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_det, but FailStmts is not empty");
        OnlyFailAfterStmts_24 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_50;

        *SetupForFailStmts_20 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[5]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (FailStmts_19));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (*SetupForFailStmts_20));
        }
        mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_non, but FailStmts is not empty");
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
        MR_hl_field(0, base, 0) = ((MR_Box) (MatchDefns_17));
        MR_hl_field(0, base, 1) = ((MR_Box) (OnlyFailAfterStmts_24));
        MR_hl_field(0, base, 2) = ((MR_Box) (MatchStmts_18));
        MR_hl_field(0, base, 3) = ((MR_Box) (Context_15));
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
      libs__globals__lookup_string_option_3_p_0(Globals_27, (MR_Integer) 754, &Experiment_29);
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
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;

        {
          BreakCommentStmt_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BreakCommentStmt_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, BreakCommentStmt_30, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[18])));
          MR_hl_field(3, BreakCommentStmt_30, 2) = ((MR_Box) (Context_15));
        }
        {
          BreakStmt_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BreakStmt_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, BreakStmt_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, BreakStmt_31, 2) = ((MR_Box) (Context_15));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (BreakStmt_31));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (BreakCommentStmt_30));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
        }
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_61);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *BodyStmt_21 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (MatchDefns_17));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_60));
          MR_hl_field(0, base, 3) = ((MR_Box) (Context_15));
        }
        *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
      }
      else
      {
        MR_Word EndLabel_32;
        MR_Word GotoCommentStmt_33;
        MR_Word GotoEndStmt_34;
        MR_Word EndLabelStmt_35;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;

        ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&EndLabel_32, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
        {
          GotoCommentStmt_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GotoCommentStmt_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, GotoCommentStmt_33, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[19])));
          MR_hl_field(3, GotoCommentStmt_33, 2) = ((MR_Box) (Context_15));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (EndLabel_32));
        }
        {
          GotoEndStmt_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GotoEndStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GotoEndStmt_34, 1) = ((MR_Box) (Var_67));
          MR_hl_field(3, GotoEndStmt_34, 2) = ((MR_Box) (Context_15));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (GotoEndStmt_34));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (GotoCommentStmt_33));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_70);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *BodyStmt_21 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (MatchDefns_17));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 3) = ((MR_Box) (Context_15));
        }
        {
          EndLabelStmt_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, EndLabelStmt_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, EndLabelStmt_35, 1) = ((MR_Box) (EndLabel_32));
          MR_hl_field(3, EndLabelStmt_35, 2) = ((MR_Box) (Context_15));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (EndLabelStmt_35));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AfterStmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), OnlyFailAfterStmts_24, Var_73);
      }
    }
  }
  else
  {
    MR_Word StopLoopVarLval_36 = ((MR_Word) ((MR_hl_field(1, MaybeStopLoopVarLval_16, 0))));

    succeeded = (LoopPresent_14 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *BodyStmt_21 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MatchDefns_17));
        MR_hl_field(0, base, 1) = ((MR_Box) (OnlyFailAfterStmts_24));
        MR_hl_field(0, base, 2) = ((MR_Box) (MatchStmts_18));
        MR_hl_field(0, base, 3) = ((MR_Box) (Context_15));
      }
      *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word SetStopLoopStmt_37;
      MR_Word Var_76;
      MR_Word Var_81;
      MR_Word Var_82;

      {
        Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_76, 0) = ((MR_Box) (StopLoopVarLval_36));
        MR_hl_field(2, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[29])));
      }
      {
        SetStopLoopStmt_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SetStopLoopStmt_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, SetStopLoopStmt_37, 1) = ((MR_Box) (Var_76));
        MR_hl_field(3, SetStopLoopStmt_37, 2) = ((MR_Box) (Context_15));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (SetStopLoopStmt_37));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), MatchStmts_18, Var_82);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *BodyStmt_21 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MatchDefns_17));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_81));
        MR_hl_field(0, base, 3) = ((MR_Box) (Context_15));
      }
      if ((OnlyFailAfterStmts_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *AfterStmts_22 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, OnlyFailAfterStmts_24, 1))));
        MR_Word Var_115 = ((MR_Word) ((MR_hl_field(1, OnlyFailAfterStmts_24, 0))));

        if ((Var_114 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SuccessTest_42;
          MR_Word AfterStmt_43;
          MR_Word Var_91;

          {
            Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_91, 0) = ((MR_Box) (StopLoopVarLval_36));
          }
          {
            SuccessTest_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SuccessTest_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, SuccessTest_42, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[26])));
            MR_hl_field(3, SuccessTest_42, 2) = ((MR_Box) (Var_91));
            MR_hl_field(3, SuccessTest_42, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17])));
          }
          {
            AfterStmt_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, AfterStmt_43, 0) = ((MR_Box) (SuccessTest_42));
            MR_hl_field(2, AfterStmt_43, 1) = ((MR_Box) (Var_115));
            MR_hl_field(2, AfterStmt_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, AfterStmt_43, 3) = ((MR_Box) (Context_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *AfterStmts_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (AfterStmt_43));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word OnlyFailAfterStmt_102;
          MR_Word SuccessTest_103;
          MR_Word AfterStmt_104;
          MR_Word Var_108;

          {
            OnlyFailAfterStmt_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OnlyFailAfterStmt_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, OnlyFailAfterStmt_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, OnlyFailAfterStmt_102, 2) = ((MR_Box) (OnlyFailAfterStmts_24));
            MR_hl_field(0, OnlyFailAfterStmt_102, 3) = ((MR_Box) (Context_15));
          }
          {
            Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_108, 0) = ((MR_Box) (StopLoopVarLval_36));
          }
          {
            SuccessTest_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SuccessTest_103, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, SuccessTest_103, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[26])));
            MR_hl_field(3, SuccessTest_103, 2) = ((MR_Box) (Var_108));
            MR_hl_field(3, SuccessTest_103, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17])));
          }
          {
            AfterStmt_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, AfterStmt_104, 0) = ((MR_Box) (SuccessTest_103));
            MR_hl_field(2, AfterStmt_104, 1) = ((MR_Box) (OnlyFailAfterStmt_102));
            MR_hl_field(2, AfterStmt_104, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, AfterStmt_104, 3) = ((MR_Box) (Context_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *AfterStmts_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (AfterStmt_104));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
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
  MR_Word STATE_VARIABLE_Info_1_32;
  MR_Word STATE_VARIABLE_Info_2_36;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_Info_3_40;

  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 1, &SlotVarName_16, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_1_32);
  SlotVarType_17 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  SlotVarDefn_18 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(SlotVarName_16, SlotVarType_17, (MR_Word) ((MR_Unsigned) 0U), Context_12);
  {
    SlotVarNameType_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotVarNameType_19, 0) = ((MR_Box) (SlotVarName_16));
    MR_hl_field(0, SlotVarNameType_19, 1) = ((MR_Box) (SlotVarType_17));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 5, &StringVarName_20, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_36);
  StringVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StringVarName_20, (MR_Word) ((MR_Unsigned) 8U), (MR_Word) ((MR_Unsigned) 0U), Context_12);
  {
    StringVarNameType_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StringVarNameType_23, 0) = ((MR_Box) (StringVarName_20));
    MR_hl_field(0, StringVarNameType_23, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (StringVarDefn_22));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    AlwaysDefns_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AlwaysDefns_24, 0) = ((MR_Box) (SlotVarDefn_18));
    MR_hl_field(1, AlwaysDefns_24, 1) = ((MR_Box) (Var_38));
  }
  switch (LoopPresent_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeStopLoopVarNameType_25 = (MR_Word) ((MR_Unsigned) 0U);
        StopLoopVarDefns_26 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_3_40 = STATE_VARIABLE_Info_2_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_43;
        MR_Word Globals_44;
        MR_Word SupportsGoto_45;
        MR_String Experiment_46;

        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_2_36, &ModuleInfo_43);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_43, &Globals_44);
        SupportsGoto_45 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(Globals_44);
        libs__globals__lookup_string_option_3_p_0(Globals_44, (MR_Integer) 754, &Experiment_46);
        switch (SupportsGoto_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word StopLoopType_47 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
              MR_Word StopLoopVarName_49;
              MR_Word StopLoopVarDefn_50;
              MR_Word StopLoopVarNameType_51;

              ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_49, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_40);
              StopLoopVarDefn_50 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_49, StopLoopType_47, (MR_Word) ((MR_Unsigned) 0U), Context_12);
              {
                StopLoopVarNameType_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, StopLoopVarNameType_51, 0) = ((MR_Box) (StopLoopVarName_49));
                MR_hl_field(0, StopLoopVarNameType_51, 1) = ((MR_Box) (StopLoopType_47));
              }
              {
                MaybeStopLoopVarNameType_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeStopLoopVarNameType_25, 0) = ((MR_Box) (StopLoopVarNameType_51));
              }
              {
                StopLoopVarDefns_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, StopLoopVarDefns_26, 0) = ((MR_Box) (StopLoopVarDefn_50));
                MR_hl_field(1, StopLoopVarDefns_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = (strcmp(Experiment_46, (MR_String) "use_stop_loop") == 0);
              if (succeeded)
              {
                MR_Word StopLoopType_57 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
                MR_Word StopLoopVarName_59;
                MR_Word StopLoopVarDefn_60;
                MR_Word StopLoopVarNameType_61;

                ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 9, &StopLoopVarName_59, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_40);
                StopLoopVarDefn_60 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(StopLoopVarName_59, StopLoopType_57, (MR_Word) ((MR_Unsigned) 0U), Context_12);
                {
                  StopLoopVarNameType_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, StopLoopVarNameType_61, 0) = ((MR_Box) (StopLoopVarName_59));
                  MR_hl_field(0, StopLoopVarNameType_61, 1) = ((MR_Box) (StopLoopType_57));
                }
                {
                  MaybeStopLoopVarNameType_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeStopLoopVarNameType_25, 0) = ((MR_Box) (StopLoopVarNameType_61));
                }
                {
                  StopLoopVarDefns_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, StopLoopVarDefns_26, 0) = ((MR_Box) (StopLoopVarDefn_60));
                  MR_hl_field(1, StopLoopVarDefns_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MaybeStopLoopVarNameType_25 = (MR_Word) ((MR_Unsigned) 0U);
                StopLoopVarDefns_26 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Info_3_40 = STATE_VARIABLE_Info_2_36;
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
      ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_9, Context_12, &FailStmts_28, STATE_VARIABLE_Info_3_40, STATE_VARIABLE_Info_30);
      break;
    case (MR_Integer) 1:
      {
        FailStmts_28 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_3_40;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *HashSearchInfo_14 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (CodeModel_9) << 1)) | (MR_Unsigned) (LoopPresent_11)));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarRval_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (SlotVarNameType_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (StringVarNameType_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeStopLoopVarNameType_25));
    MR_hl_field(0, base, 6) = ((MR_Box) (FailStmts_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (Defns_27));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_string_switch__make_hash_match_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
      MR_Word Entry_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Entries_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word CaseId_13 = ((MR_Word) ((MR_hl_field(0, Entry_10, 0))));
      MR_Word HashSlots_14 = ((MR_Word) ((MR_hl_field(0, Entry_10, 1))));
      MR_Integer FirstHashSlot_15 = ((MR_Integer) ((MR_hl_field(0, HashSlots_14, 0))));
      MR_Word LaterHashSlotsCord_16 = ((MR_Word) ((MR_hl_field(0, HashSlots_14, 1))));
      MR_Word LaterHashSlots_17;
      MR_Word FirstMatchCond_18;
      MR_Word LaterMatchConds_19;
      MR_Word CaseStmt_20;
      MR_Word Case_21;
      MR_Word STATE_VARIABLE_Cases_1_25;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Box conv1_CaseStmt_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_3;

      LaterHashSlots_17 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LaterHashSlotsCord_16);
      {
        Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_33, 0) = ((MR_Box) (FirstHashSlot_15));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        FirstMatchCond_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FirstMatchCond_18, 0) = ((MR_Box) (Var_32));
      }
      LaterMatchConds_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[8]), LaterHashSlots_17);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeMap_1, ((MR_Box) (CaseId_13)), &conv1_CaseStmt_20);
      CaseStmt_20 = ((MR_Word) (conv1_CaseStmt_20));
      {
        Case_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Case_21, 0) = ((MR_Box) (FirstMatchCond_18));
        MR_hl_field(0, Case_21, 1) = ((MR_Box) (LaterMatchConds_19));
        MR_hl_field(0, Case_21, 2) = ((MR_Box) (CaseStmt_20));
      }
      {
        STATE_VARIABLE_Cases_1_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Cases_1_25, 0) = ((MR_Box) (Case_21));
        MR_hl_field(1, STATE_VARIABLE_Cases_1_25, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Entries_11;
      next_value_of_STATE_VARIABLE_Cases_0_3 = STATE_VARIABLE_Cases_1_25;
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
  MR_Word STATE_VARIABLE_RowInitializersCord_0_18,
  MR_Word * STATE_VARIABLE_RowInitializersCord_19,
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
      *STATE_VARIABLE_RowInitializersCord_19 = STATE_VARIABLE_RowInitializersCord_0_18;
    }
    else
    {
      MR_Word RowInitializer_17;
      MR_Word STATE_VARIABLE_RevMap_1_22;
      MR_Word STATE_VARIABLE_RowInitializersCord_1_23;
      MR_Integer Var_24;
      MR_Word StringRval_33;
      MR_Word NextSlotRval_34;
      MR_Word HashSlotMapEntry_29;
      MR_Box conv0_HashSlotMapEntry_29;
      MR_Integer next_value_of_Slot_10;
      MR_Word next_value_of_STATE_VARIABLE_RowInitializersCord_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_20;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[4]), HashSlotMap_12, Slot_10, &conv0_HashSlotMapEntry_29);
      if (succeeded)
      {
        HashSlotMapEntry_29 = ((MR_Word) (conv0_HashSlotMapEntry_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_30 = ((MR_String) ((MR_hl_field(0, HashSlotMapEntry_29, 0))));
        MR_Integer Next_31 = ((MR_Integer) ((MR_hl_field(0, HashSlotMapEntry_29, 1))));
        MR_Word CaseId_32 = ((MR_Word) ((MR_hl_field(0, HashSlotMapEntry_29, 2))));
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word OldEntry_35;
        MR_Box conv1_OldEntry_35;

        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (String_30));
        }
        {
          StringRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_33, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_42, 0) = ((MR_Box) (Next_31));
        }
        {
          NextSlotRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_34, 1) = ((MR_Box) (Var_42));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), STATE_VARIABLE_RevMap_0_20, ((MR_Box) (CaseId_32)), &conv1_OldEntry_35);
        if (succeeded)
        {
          OldEntry_35 = ((MR_Word) (conv1_OldEntry_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer OldFirstSlot_36 = ((MR_Integer) ((MR_hl_field(0, OldEntry_35, 0))));
          MR_Word LaterSlotsCord0_37 = ((MR_Word) ((MR_hl_field(0, OldEntry_35, 1))));
          MR_Word LaterSlotsCord_38;
          MR_Word NewEntry_39;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Slot_10)), LaterSlotsCord0_37, &LaterSlotsCord_38);
          {
            NewEntry_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewEntry_39, 0) = ((MR_Box) (OldFirstSlot_36));
            MR_hl_field(0, NewEntry_39, 1) = ((MR_Box) (LaterSlotsCord_38));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), ((MR_Box) (CaseId_32)), ((MR_Box) (NewEntry_39)), STATE_VARIABLE_RevMap_0_20, &STATE_VARIABLE_RevMap_1_22);
        }
        else
        {
          MR_Word Var_43;
          MR_Word NewEntry_56;

          Var_43 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
          {
            NewEntry_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewEntry_56, 0) = ((MR_Box) (Slot_10));
            MR_hl_field(0, NewEntry_56, 1) = ((MR_Box) (Var_43));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0), ((MR_Box) (CaseId_32)), ((MR_Box) (NewEntry_56)), STATE_VARIABLE_RevMap_0_20, &STATE_VARIABLE_RevMap_1_22);
        }
      }
      else
      {
        StringRval_33 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[21]));
        NextSlotRval_34 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[22]));
        STATE_VARIABLE_RevMap_1_22 = STATE_VARIABLE_RevMap_0_20;
      }
      if ((MaybeNextSlotId_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (StringRval_33));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RowInitializer_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RowInitializer_17, 0) = ((MR_Box) (StructType_13));
          MR_hl_field(2, RowInitializer_17, 1) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;

        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (StringRval_33));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (NextSlotRval_34));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          RowInitializer_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RowInitializer_17, 0) = ((MR_Box) (StructType_13));
          MR_hl_field(2, RowInitializer_17, 1) = ((MR_Box) (Var_48));
        }
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (RowInitializer_17)), STATE_VARIABLE_RowInitializersCord_0_18, &STATE_VARIABLE_RowInitializersCord_1_23);
      Var_24 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_10 = Var_24;
      next_value_of_STATE_VARIABLE_RowInitializersCord_0_18 = STATE_VARIABLE_RowInitializersCord_1_23;
      next_value_of_STATE_VARIABLE_RevMap_0_20 = STATE_VARIABLE_RevMap_1_22;
      Slot_10 = next_value_of_Slot_10;
      STATE_VARIABLE_RowInitializersCord_0_18 = next_value_of_STATE_VARIABLE_RowInitializersCord_0_18;
      STATE_VARIABLE_RevMap_0_20 = next_value_of_STATE_VARIABLE_RevMap_0_20;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_lookup_switch__212__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_8_p_0(
  MR_Word VarRval_9,
  MR_Word TaggedCases_10,
  MR_Word LookupSwitchInfo_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word Context_14,
  MR_Word * Stmts_15,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word CaseIdConsts_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_11, 0))));
  MR_Word OutVars_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_11, 1))));
  MR_Word OutTypes_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_11, 2))));
  MR_Integer MaxCaseNum_20;
  MR_Word CaseNumVarLval_21;
  MR_Word CaseNumVarDefn_22;
  MR_Word InitCaseNumVarStmt_23;
  MR_Word GetCaseNumSwitchStmt_24;
  MR_Word STATE_VARIABLE_Info_1_31 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_11, 3))));
  MR_Word STATE_VARIABLE_Info_2_32;
  MR_Word Target_43;
  MR_Word CompilationTarget_44;
  MR_Word Encoding_45;
  MR_Word StrsCaseIds_46;
  MR_Word TopTrieNode_47;
  MR_Word CaseNumVarName_49;
  MR_Word CaseNumVarType_50;
  MR_Word InitAssign_51;

  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_1_31, &Target_43);
  switch (Target_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CompilationTarget_44 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      CompilationTarget_44 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      CompilationTarget_44 = (MR_Integer) 2;
      break;
  }
  Encoding_45 = backend_libs__string_encoding__target_string_encoding_1_f_0(CompilationTarget_44);
  backend_libs__string_switch_util__build_str_case_id_list_3_p_0(TaggedCases_10, &MaxCaseNum_20, &StrsCaseIds_46);
  backend_libs__string_switch_util__create_trie_3_p_0(Encoding_45, StrsCaseIds_46, &TopTrieNode_47);
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 11, &CaseNumVarName_49, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_2_32);
  CaseNumVarType_50 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  CaseNumVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(CaseNumVarName_49, CaseNumVarType_50, (MR_Word) ((MR_Unsigned) 0U), Context_14);
  {
    CaseNumVarLval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CaseNumVarLval_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CaseNumVarLval_21, 1) = ((MR_Box) (CaseNumVarName_49));
    MR_hl_field(3, CaseNumVarLval_21, 2) = ((MR_Box) (CaseNumVarType_50));
  }
  {
    InitAssign_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, InitAssign_51, 0) = ((MR_Box) (CaseNumVarLval_21));
    MR_hl_field(2, InitAssign_51, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19])));
  }
  {
    InitCaseNumVarStmt_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitCaseNumVarStmt_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitCaseNumVarStmt_23, 1) = ((MR_Box) (InitAssign_51));
    MR_hl_field(3, InitCaseNumVarStmt_23, 2) = ((MR_Box) (Context_14));
  }
  ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(Encoding_45, VarRval_9, CaseNumVarLval_21, Context_14, (MR_Integer) 0, TopTrieNode_47, &GetCaseNumSwitchStmt_24);
  if (((MR_tag((MR_Word) CaseIdConsts_17)) == (MR_Integer) 0))
  {
    MR_Word CaseIdValueMap_25 = ((MR_Word) ((MR_hl_field(0, CaseIdConsts_17, 0))));
    MR_Word CaseIdValues_26;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), CaseIdValueMap_25, &CaseIdValues_26);
    ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0(MaxCaseNum_20, CaseNumVarLval_21, CaseNumVarDefn_22, InitCaseNumVarStmt_23, GetCaseNumSwitchStmt_24, CaseIdValues_26, OutVars_18, OutTypes_19, CodeModel_12, CanFail_13, Context_14, Stmts_15, STATE_VARIABLE_Info_2_32, STATE_VARIABLE_Info_30);
  }
  else
  {
    MR_Word CaseIdSolnMap_27 = ((MR_Word) ((MR_hl_field(1, CaseIdConsts_17, 0))));
    MR_Word CaseIdSolns_29;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[3]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_8_p_0_1));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (CodeModel_12));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_lookup_switch\'/8", (MR_String) "CodeModel != model_non");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[1]), CaseIdSolnMap_27, &CaseIdSolns_29);
    ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0(MaxCaseNum_20, CaseNumVarLval_21, CaseNumVarDefn_22, InitCaseNumVarStmt_23, GetCaseNumSwitchStmt_24, CaseIdSolns_29, OutVars_18, OutTypes_19, CanFail_13, Context_14, Stmts_15, STATE_VARIABLE_Info_2_32, STATE_VARIABLE_Info_30);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_several_soln_lookup_switch__363__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
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
  MR_Word FirstSolnRowInitializersCord_48;
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
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Integer Var_76;
  MR_Word STATE_VARIABLE_Info_1_78;
  MR_Word Var_79;
  MR_Word Var_91;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word NumLaterSolnsFieldIdPrime_41;
  MR_Word FirstLaterSolnRowFieldIdPrime_42;
  MR_Word FirstSolnOutFieldIdsPrime_43;
  MR_Word Var_66;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_26);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_26, &ModuleName_27);
  MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_27);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_62, &Target_29);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_62, &GlobalData0_30);
  MLDS_IntType_31 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (MLDS_IntType_31));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (OutTypes_21));
  }
  {
    FirstSolnFieldTypes_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FirstSolnFieldTypes_32, 0) = ((MR_Box) (MLDS_IntType_31));
    MR_hl_field(1, FirstSolnFieldTypes_32, 1) = ((MR_Box) (Var_65));
  }
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_28, Context_23, Target_29, FirstSolnFieldTypes_32, &FirstSolnStructTypeNum_33, &FirstSolnStructType_34, &FirstSolnFieldIds_35, GlobalData0_30, &GlobalData1_36);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_28, Context_23, Target_29, OutTypes_21, &LaterSolnStructTypeNum_37, &LaterSolnStructType_38, &LaterSolnOutFieldIds_39, GlobalData1_36, &GlobalData2_40);
  succeeded = (FirstSolnFieldIds_35 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    NumLaterSolnsFieldIdPrime_41 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_35, 0))));
    Var_66 = ((MR_Word) ((MR_hl_field(1, FirstSolnFieldIds_35, 1))));
    succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FirstLaterSolnRowFieldIdPrime_42 = ((MR_Word) ((MR_hl_field(1, Var_66, 0))));
      FirstSolnOutFieldIdsPrime_43 = ((MR_Word) ((MR_hl_field(1, Var_66, 1))));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_several_soln_lookup_switch\'/13", (MR_String) "bad FieldIds");
      return;
    }
  Var_71 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  Var_72 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0(FirstSolnStructType_34, LaterSolnStructType_38, CaseIdSolns_19, (MR_Integer) 0, &AfterLastCaseNum_47, (MR_Integer) 0, Var_71, &FirstSolnRowInitializersCord_48, Var_72, &LaterSolnRowInitializerCord_49);
  Var_76 = (MR_Integer) ((MR_Unsigned) MaxCaseNum_14 + (MR_Unsigned) 1);
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_several_soln_lookup_switch_13_p_0_1));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (AfterLastCaseNum_47));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (Var_76));
  }
  mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_several_soln_lookup_switch\'/13", (MR_String) "MaxCaseNum + 1 != AfterLastCaseNum");
  FirstSolnRowInitializers_50 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FirstSolnRowInitializersCord_48);
  LaterSolnRowInitializers_51 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializerCord_49);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_28, FirstSolnStructTypeNum_33, FirstSolnRowInitializers_50, &FirstSolnVectorCommon_52, GlobalData2_40, &GlobalData3_53);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_28, LaterSolnStructTypeNum_37, LaterSolnRowInitializers_51, &LaterSolnVectorCommon_54, GlobalData3_53, &GlobalData_55);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_55, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_1_78);
  {
    Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_79, 0) = ((MR_Box) (CaseNumVarLval_15));
  }
  ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_23, Var_79, OutVars_20, OutTypes_21, FirstSolnStructType_34, LaterSolnStructType_38, NumLaterSolnsFieldId_44, FirstLaterSolnRowFieldId_45, FirstSolnOutFieldIds_46, LaterSolnOutFieldIds_39, FirstSolnVectorCommon_52, LaterSolnVectorCommon_54, (MR_Integer) 0, &MatchDefns_56, &SuccessStmts_57, STATE_VARIABLE_Info_1_78, STATE_VARIABLE_Info_63);
  {
    SuccessBlockStmt_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SuccessBlockStmt_58, 0) = ((MR_Box) (MatchDefns_56));
    MR_hl_field(0, SuccessBlockStmt_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SuccessBlockStmt_58, 2) = ((MR_Box) (SuccessStmts_57));
    MR_hl_field(0, SuccessBlockStmt_58, 3) = ((MR_Box) (Context_23));
  }
  switch (CanFail_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IsCaseNumNonNegCond_59;

        {
          IsCaseNumNonNegCond_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, IsCaseNumNonNegCond_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, IsCaseNumNonNegCond_59, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[18])));
          MR_hl_field(3, IsCaseNumNonNegCond_59, 2) = ((MR_Box) (Var_79));
          MR_hl_field(3, IsCaseNumNonNegCond_59, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17])));
        }
        {
          ResultStmt_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ResultStmt_60, 0) = ((MR_Box) (IsCaseNumNonNegCond_59));
          MR_hl_field(2, ResultStmt_60, 1) = ((MR_Box) (SuccessBlockStmt_58));
          MR_hl_field(2, ResultStmt_60, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, ResultStmt_60, 3) = ((MR_Box) (Context_23));
        }
      }
      break;
    case (MR_Integer) 1:
      ResultStmt_60 = SuccessBlockStmt_58;
      break;
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (CaseNumVarDefn_16));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (ResultStmt_60));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (GetCaseNumSwitchStmt_18));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (InitCaseNumVarStmt_17));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Stmt_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Stmt_61, 0) = ((MR_Box) (Var_91));
    MR_hl_field(0, Stmt_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_61, 2) = ((MR_Box) (Var_94));
    MR_hl_field(0, Stmt_61, 3) = ((MR_Box) (Context_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_24 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_61));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_several_soln_lookup_slots__414__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_4,
  MR_Integer * STATE_VARIABLE_CurCaseNum_5,
  MR_Integer HeadVar__6_6,
  MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_0_7,
  MR_Word * STATE_VARIABLE_FirstSolnRowInitializersCord_8,
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
      *STATE_VARIABLE_FirstSolnRowInitializersCord_8 = STATE_VARIABLE_FirstSolnRowInitializersCord_0_7;
      *STATE_VARIABLE_CurCaseNum_5 = STATE_VARIABLE_CurCaseNum_0_4;
    }
    else
    {
      MR_Word CaseIdSolns_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word CaseIdsSolns_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word CaseId_31 = ((MR_Word) ((MR_hl_field(0, CaseIdSolns_25, 0))));
      MR_Word Solns_32 = ((MR_Word) ((MR_hl_field(0, CaseIdSolns_25, 1))));
      MR_Integer CaseIdNum_33 = (MR_Integer) (CaseId_31);
      MR_Word FirstSolnRvals_34;
      MR_Word NumLaterSolnsRval_35;
      MR_Word FirstLaterSlotRval_36;
      MR_Word FirstSolnRowRvals_40;
      MR_Word FirstSolnRowInitializer_41;
      MR_Word Var_49;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_1_59;
      MR_Integer STATE_VARIABLE_CurLaterSolnIndex_1_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_FirstSolnRowInitializersCord_1_65;
      MR_Integer STATE_VARIABLE_CurCaseNum_1_66;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_CurCaseNum_0_4;
      MR_Integer next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_1));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (STATE_VARIABLE_CurCaseNum_0_4));
        MR_hl_field(0, Var_49, 4) = ((MR_Box) (CaseIdNum_33));
      }
      mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_gen_string_trie_several_soln_lookup_slots\'/10", (MR_String) "CaseIdNum != !.CurCaseNum");
      if (((MR_tag((MR_Word) Solns_32)) == (MR_Integer) 0))
      {
        FirstSolnRvals_34 = ((MR_Word) ((MR_hl_field(0, Solns_32, 0))));
        NumLaterSolnsRval_35 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17]));
        FirstLaterSlotRval_36 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19]));
        STATE_VARIABLE_CurLaterSolnIndex_1_61 = HeadVar__6_6;
        STATE_VARIABLE_LaterSolnRowInitializersCord_1_59 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_9;
      }
      else
      {
        MR_Word LaterSolns_37;
        MR_Integer NumLaterSolns_38;
        MR_Word LaterSolnRowInitializers_39;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_60;

        FirstSolnRvals_34 = ((MR_Word) ((MR_hl_field(1, Solns_32, 0))));
        LaterSolns_37 = ((MR_Word) ((MR_hl_field(1, Solns_32, 1))));
        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), LaterSolns_37, &NumLaterSolns_38);
        {
          Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_56, 0) = ((MR_Box) (NumLaterSolns_38));
        }
        {
          NumLaterSolnsRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NumLaterSolnsRval_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NumLaterSolnsRval_35, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_57, 0) = ((MR_Box) (HeadVar__6_6));
        }
        {
          FirstLaterSlotRval_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, FirstLaterSlotRval_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, FirstLaterSlotRval_36, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_5[0]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_several_soln_lookup_slots_10_p_0_2));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (HeadVar__2_2));
        }
        LaterSolnRowInitializers_39 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_string_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_58, LaterSolns_37);
        Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_39);
        STATE_VARIABLE_LaterSolnRowInitializersCord_1_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_9, Var_60);
        STATE_VARIABLE_CurLaterSolnIndex_1_61 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) NumLaterSolns_38);
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (FirstLaterSlotRval_36));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (FirstSolnRvals_34));
      }
      {
        FirstSolnRowRvals_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FirstSolnRowRvals_40, 0) = ((MR_Box) (NumLaterSolnsRval_35));
        MR_hl_field(1, FirstSolnRowRvals_40, 1) = ((MR_Box) (Var_62));
      }
      Var_63 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[7]), FirstSolnRowRvals_40);
      {
        FirstSolnRowInitializer_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, FirstSolnRowInitializer_41, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(2, FirstSolnRowInitializer_41, 1) = ((MR_Box) (Var_63));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (FirstSolnRowInitializer_41)), STATE_VARIABLE_FirstSolnRowInitializersCord_0_7, &STATE_VARIABLE_FirstSolnRowInitializersCord_1_65);
      STATE_VARIABLE_CurCaseNum_1_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurCaseNum_0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CaseIdsSolns_26;
      next_value_of_STATE_VARIABLE_CurCaseNum_0_4 = STATE_VARIABLE_CurCaseNum_1_66;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_CurLaterSolnIndex_1_61;
      next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_7 = STATE_VARIABLE_FirstSolnRowInitializersCord_1_65;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_9 = STATE_VARIABLE_LaterSolnRowInitializersCord_1_59;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CurCaseNum_0_4 = next_value_of_STATE_VARIABLE_CurCaseNum_0_4;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_FirstSolnRowInitializersCord_0_7 = next_value_of_STATE_VARIABLE_FirstSolnRowInitializersCord_0_7;
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_trie_simple_lookup_switch__248__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
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
  MR_Word ResultStmt_52;
  MR_Word Stmt_58;
  MR_Word STATE_VARIABLE_Info_2_70;
  MR_Word STATE_VARIABLE_Info_3_73;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_59, &ModuleInfo_28);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_28, &ModuleName_29);
  MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_29);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_59, &Target_31);
  if ((OutTypes_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    FieldAssignStmts_44 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_2_70 = STATE_VARIABLE_Info_0_59;
  }
  else
  {
    MR_Word GlobalData0_34;
    MR_Word StructTypeNum_35;
    MR_Word StructType_36;
    MR_Word OutFieldIds_37;
    MR_Word GlobalData1_38;
    MR_Integer AfterLastCaseNum_39;
    MR_Word RowInitializersCord_40;
    MR_Word RowInitializers_41;
    MR_Word VectorCommon_42;
    MR_Word GlobalData_43;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Integer Var_66;
    MR_Word STATE_VARIABLE_Info_1_68;
    MR_Word Var_69;

    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_59, &GlobalData0_34);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_30, Context_25, Target_31, OutTypes_22, &StructTypeNum_35, &StructType_36, &OutFieldIds_37, GlobalData0_34, &GlobalData1_38);
    Var_62 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0(StructType_36, CaseIdValues_20, (MR_Integer) 0, &AfterLastCaseNum_39, Var_62, &RowInitializersCord_40);
    Var_66 = (MR_Integer) ((MR_Unsigned) MaxCaseNum_15 + (MR_Unsigned) 1);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_trie_simple_lookup_switch_14_p_0_1));
      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_63, 3) = ((MR_Box) (AfterLastCaseNum_39));
      MR_hl_field(0, Var_63, 4) = ((MR_Box) (Var_66));
    }
    mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_simple_lookup_switch\'/14", (MR_String) "MaxCaseNum + 1 != AfterLastCaseNum");
    RowInitializers_41 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializersCord_40);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_30, StructTypeNum_35, RowInitializers_41, &VectorCommon_42, GlobalData1_38, &GlobalData_43);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_43, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_1_68);
    {
      Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_69, 0) = ((MR_Box) (CaseNumVarLval_16));
    }
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_21, OutTypes_22, OutFieldIds_37, VectorCommon_42, StructType_36, Var_69, Context_25, &FieldAssignStmts_44, STATE_VARIABLE_Info_1_68, &STATE_VARIABLE_Info_2_70);
  }
  {
    FoundMatchCommentStmt_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FoundMatchCommentStmt_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, FoundMatchCommentStmt_46, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_string_switch_scalar_common_3[2])));
    MR_hl_field(3, FoundMatchCommentStmt_46, 2) = ((MR_Box) (Context_25));
  }
  {
    CommentedFieldAssignStmts_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CommentedFieldAssignStmts_47, 0) = ((MR_Box) (FoundMatchCommentStmt_46));
    MR_hl_field(1, CommentedFieldAssignStmts_47, 1) = ((MR_Box) (FieldAssignStmts_44));
  }
  switch (CodeModel_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        LookupStmts_48 = CommentedFieldAssignStmts_47;
        STATE_VARIABLE_Info_3_73 = STATE_VARIABLE_Info_2_70;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_trie_simple_lookup_switch\'/14", (MR_String) "model_non");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessTrueStmt_49;
        MR_Word Var_75;

        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[15])), Context_25, &SetSuccessTrueStmt_49, STATE_VARIABLE_Info_2_70, &STATE_VARIABLE_Info_3_73);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (SetSuccessTrueStmt_49));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        LookupStmts_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CommentedFieldAssignStmts_47, Var_75);
      }
      break;
  }
  {
    LookupStmt_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LookupStmt_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LookupStmt_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LookupStmt_50, 2) = ((MR_Box) (LookupStmts_48));
    MR_hl_field(0, LookupStmt_50, 3) = ((MR_Box) (Context_25));
  }
  switch (CanFail_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailStmts_51;

        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_23, Context_25, &FailStmts_51, STATE_VARIABLE_Info_3_73, STATE_VARIABLE_Info_60);
        if ((FailStmts_51 == (MR_Word) ((MR_Unsigned) 0U)))
          ResultStmt_52 = LookupStmt_50;
        else
        {
          MR_Word Var_115 = ((MR_Word) ((MR_hl_field(1, FailStmts_51, 1))));
          MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, FailStmts_51, 0))));

          if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word IsCaseNumNegCond_57;
            MR_Word Var_89;
            MR_Word Var_93;

            {
              Var_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_89, 0) = ((MR_Box) (CaseNumVarLval_16));
            }
            {
              IsCaseNumNegCond_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, IsCaseNumNegCond_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, IsCaseNumNegCond_57, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[16])));
              MR_hl_field(3, IsCaseNumNegCond_57, 2) = ((MR_Box) (Var_89));
              MR_hl_field(3, IsCaseNumNegCond_57, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17])));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (LookupStmt_50));
            }
            {
              ResultStmt_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ResultStmt_52, 0) = ((MR_Box) (IsCaseNumNegCond_57));
              MR_hl_field(2, ResultStmt_52, 1) = ((MR_Box) (Var_116));
              MR_hl_field(2, ResultStmt_52, 2) = ((MR_Box) (Var_93));
              MR_hl_field(2, ResultStmt_52, 3) = ((MR_Box) (Context_25));
            }
          }
          else
          {
            MR_Word FailStmt_105;
            MR_Word IsCaseNumNegCond_106;
            MR_Word Var_110;
            MR_Word Var_114;

            {
              FailStmt_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FailStmt_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, FailStmt_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, FailStmt_105, 2) = ((MR_Box) (FailStmts_51));
              MR_hl_field(0, FailStmt_105, 3) = ((MR_Box) (Context_25));
            }
            {
              Var_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_110, 0) = ((MR_Box) (CaseNumVarLval_16));
            }
            {
              IsCaseNumNegCond_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, IsCaseNumNegCond_106, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, IsCaseNumNegCond_106, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[16])));
              MR_hl_field(3, IsCaseNumNegCond_106, 2) = ((MR_Box) (Var_110));
              MR_hl_field(3, IsCaseNumNegCond_106, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[17])));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (LookupStmt_50));
            }
            {
              ResultStmt_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ResultStmt_52, 0) = ((MR_Box) (IsCaseNumNegCond_106));
              MR_hl_field(2, ResultStmt_52, 1) = ((MR_Box) (FailStmt_105));
              MR_hl_field(2, ResultStmt_52, 2) = ((MR_Box) (Var_114));
              MR_hl_field(2, ResultStmt_52, 3) = ((MR_Box) (Context_25));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Info_60 = STATE_VARIABLE_Info_3_73;
        ResultStmt_52 = LookupStmt_50;
      }
      break;
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (CaseNumVarDefn_17));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (ResultStmt_52));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (GetCaseNumSwitchStmt_19));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (InitCaseNumVarStmt_18));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
  }
  {
    Stmt_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Stmt_58, 0) = ((MR_Box) (Var_94));
    MR_hl_field(0, Stmt_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_58, 2) = ((MR_Box) (Var_97));
    MR_hl_field(0, Stmt_58, 3) = ((MR_Box) (Context_25));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_26 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_58));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_gen_string_trie_simple_lookup_slots__313__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurCaseNum_0_3,
  MR_Integer * STATE_VARIABLE_CurCaseNum_4,
  MR_Word STATE_VARIABLE_RowInitializersCord_0_5,
  MR_Word * STATE_VARIABLE_RowInitializersCord_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RowInitializersCord_6 = STATE_VARIABLE_RowInitializersCord_0_5;
      *STATE_VARIABLE_CurCaseNum_4 = STATE_VARIABLE_CurCaseNum_0_3;
    }
    else
    {
      MR_Word CaseIdValue_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word CaseIdValues_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word CaseId_19 = ((MR_Word) ((MR_hl_field(0, CaseIdValue_15, 0))));
      MR_Word OutRvals_20 = ((MR_Word) ((MR_hl_field(0, CaseIdValue_15, 1))));
      MR_Integer CaseIdNum_21 = (MR_Integer) (CaseId_19);
      MR_Word OutInitializers_22;
      MR_Word RowInitializer_23;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_RowInitializersCord_1_32;
      MR_Integer STATE_VARIABLE_CurCaseNum_1_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_CurCaseNum_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RowInitializersCord_0_5;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_trie_simple_lookup_slots_6_p_0_1));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (STATE_VARIABLE_CurCaseNum_0_3));
        MR_hl_field(0, Var_28, 4) = ((MR_Box) (CaseIdNum_21));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_gen_string_trie_simple_lookup_slots\'/6", (MR_String) "CaseIdNum != !.CurCaseNum");
      OutInitializers_22 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[6]), OutRvals_20);
      {
        RowInitializer_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, RowInitializer_23, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(2, RowInitializer_23, 1) = ((MR_Box) (OutInitializers_22));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (RowInitializer_23)), STATE_VARIABLE_RowInitializersCord_0_5, &STATE_VARIABLE_RowInitializersCord_1_32);
      STATE_VARIABLE_CurCaseNum_1_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurCaseNum_0_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CaseIdValues_16;
      next_value_of_STATE_VARIABLE_CurCaseNum_0_3 = STATE_VARIABLE_CurCaseNum_1_33;
      next_value_of_STATE_VARIABLE_RowInitializersCord_0_5 = STATE_VARIABLE_RowInitializersCord_1_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CurCaseNum_0_3 = next_value_of_STATE_VARIABLE_CurCaseNum_0_3;
      STATE_VARIABLE_RowInitializersCord_0_5 = next_value_of_STATE_VARIABLE_RowInitializersCord_0_5;
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
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_Word CodeMap_18;
  MR_Word ReachableConstVarMaps_19;
  MR_Integer MaxCaseNum_20;
  MR_Word CaseNumVarLval_21;
  MR_Word CaseNumVarDefn_22;
  MR_Word InitCaseNumVarStmt_23;
  MR_Word GetCaseNumSwitchStmt_24;
  MR_Word CodeCases_25;
  MR_Word CaseNumSwitchArmsCord_26;
  MR_Word CaseNumSwitchArms_27;
  MR_Word CaseNumDefault_28;
  MR_Word CaseNumSwitchRange_29;
  MR_Word CaseSwitchStmt_30;
  MR_Word Stmt_31;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_Info_1_36;
  MR_Word STATE_VARIABLE_Info_2_37;
  MR_Word STATE_VARIABLE_Info_3_38;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Target_56;
  MR_Word CompilationTarget_57;
  MR_Word Encoding_58;
  MR_Word StrsCaseIds_59;
  MR_Word TopTrieNode_60;
  MR_Word CaseNumVarName_62;
  MR_Word CaseNumVarType_63;
  MR_Word InitAssign_64;

  Var_34 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
  ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0(CodeModel_12, EntryPackedArgsMap_14, TaggedCases_11, Var_34, &CodeMap_18, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_19, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_36);
  ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_19, STATE_VARIABLE_Info_1_36, &STATE_VARIABLE_Info_2_37);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_2_37, &Target_56);
  switch (Target_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CompilationTarget_57 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      CompilationTarget_57 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      CompilationTarget_57 = (MR_Integer) 2;
      break;
  }
  Encoding_58 = backend_libs__string_encoding__target_string_encoding_1_f_0(CompilationTarget_57);
  backend_libs__string_switch_util__build_str_case_id_list_3_p_0(TaggedCases_11, &MaxCaseNum_20, &StrsCaseIds_59);
  backend_libs__string_switch_util__create_trie_3_p_0(Encoding_58, StrsCaseIds_59, &TopTrieNode_60);
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 11, &CaseNumVarName_62, STATE_VARIABLE_Info_2_37, &STATE_VARIABLE_Info_3_38);
  CaseNumVarType_63 = (MR_Word) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11]));
  CaseNumVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(CaseNumVarName_62, CaseNumVarType_63, (MR_Word) ((MR_Unsigned) 0U), Context_15);
  {
    CaseNumVarLval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CaseNumVarLval_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CaseNumVarLval_21, 1) = ((MR_Box) (CaseNumVarName_62));
    MR_hl_field(3, CaseNumVarLval_21, 2) = ((MR_Box) (CaseNumVarType_63));
  }
  {
    InitAssign_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, InitAssign_64, 0) = ((MR_Box) (CaseNumVarLval_21));
    MR_hl_field(2, InitAssign_64, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[19])));
  }
  {
    InitCaseNumVarStmt_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitCaseNumVarStmt_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitCaseNumVarStmt_23, 1) = ((MR_Box) (InitAssign_64));
    MR_hl_field(3, InitCaseNumVarStmt_23, 2) = ((MR_Box) (Context_15));
  }
  ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(Encoding_58, VarRval_10, CaseNumVarLval_21, Context_15, (MR_Integer) 0, TopTrieNode_60, &GetCaseNumSwitchStmt_24);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeMap_18, &CodeCases_25);
  Var_39 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0));
  ml_backend__ml_string_switch__ml_generate_arms_of_switch_on_case_id_3_p_0(CodeCases_25, Var_39, &CaseNumSwitchArmsCord_26);
  CaseNumSwitchArms_27 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), CaseNumSwitchArmsCord_26);
  switch (CanFail_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailStmts_71;

        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_12, Context_15, &FailStmts_71, STATE_VARIABLE_Info_3_38, STATE_VARIABLE_Info_33);
        if ((FailStmts_71 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (CodeModel_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CaseNumDefault_28 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 2:
              {
                MR_Word FailStmt_72;

                {
                  FailStmt_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FailStmt_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, FailStmt_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, FailStmt_72, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, FailStmt_72, 3) = ((MR_Box) (Context_15));
                }
                {
                  CaseNumDefault_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CaseNumDefault_28, 0) = ((MR_Box) (FailStmt_72));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_string_switch.ml_gen_default_of_switch_on_case_id\'/6", (MR_String) "failure does not assign to succeeded");
                return;
              }
              break;
          }
        else
        {
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(1, FailStmts_71, 1))));
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, FailStmts_71, 0))));

          if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              CaseNumDefault_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CaseNumDefault_28, 0) = ((MR_Box) (Var_88));
            }
          else
          {
            MR_Word FailStmt_86;

            {
              FailStmt_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FailStmt_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, FailStmt_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, FailStmt_86, 2) = ((MR_Box) (FailStmts_71));
              MR_hl_field(0, FailStmt_86, 3) = ((MR_Box) (Context_15));
            }
            {
              CaseNumDefault_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CaseNumDefault_28, 0) = ((MR_Box) (FailStmt_86));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        CaseNumDefault_28 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_3_38;
      }
      break;
  }
  {
    CaseNumSwitchRange_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CaseNumSwitchRange_29, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, CaseNumSwitchRange_29, 1) = ((MR_Box) (MaxCaseNum_20));
  }
  {
    Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_44, 0) = ((MR_Box) (CaseNumVarLval_21));
  }
  {
    CaseSwitchStmt_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CaseSwitchStmt_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CaseSwitchStmt_30, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
    MR_hl_field(3, CaseSwitchStmt_30, 2) = ((MR_Box) (Var_44));
    MR_hl_field(3, CaseSwitchStmt_30, 3) = ((MR_Box) (CaseNumSwitchRange_29));
    MR_hl_field(3, CaseSwitchStmt_30, 4) = ((MR_Box) (CaseNumSwitchArms_27));
    MR_hl_field(3, CaseSwitchStmt_30, 5) = ((MR_Box) (CaseNumDefault_28));
    MR_hl_field(3, CaseSwitchStmt_30, 6) = ((MR_Box) (Context_15));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (CaseNumVarDefn_22));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (CaseSwitchStmt_30));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (GetCaseNumSwitchStmt_24));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (InitCaseNumVarStmt_23));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Stmt_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Stmt_31, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Stmt_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_31, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, Stmt_31, 3) = ((MR_Box) (Context_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_31));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_tagged_case_codes_for_string_switch_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CodeMap_0_4,
  MR_Word * STATE_VARIABLE_CodeMap_5,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_6,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_ReachableConstVarMaps_7 = STATE_VARIABLE_ReachableConstVarMaps_0_6;
      *STATE_VARIABLE_CodeMap_5 = STATE_VARIABLE_CodeMap_0_4;
    }
    else
    {
      MR_Word TaggedCase_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TaggedCases_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_CodeMap_1_34;
      MR_Word STATE_VARIABLE_ReachableConstVarMaps_1_35;
      MR_Word STATE_VARIABLE_Info_1_36;
      MR_Word MainTaggedConsId_37;
      MR_Word OtherTaggedConsIds_38;
      MR_Word CaseId_39;
      MR_Word Goal_40;
      MR_Word GoalStmt_41;
      MR_String MainString_42;
      MR_Word OtherStrings_43;
      MR_String Strings_44;
      MR_String CommentString_45;
      MR_Word GoalInfo_47;
      MR_Word Context_48;
      MR_Word Comment_49;
      MR_Word CaseStmt_50;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CodeMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ReachableConstVarMaps_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(HeadVar__2_2, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_1_51);
      MainTaggedConsId_37 = ((MR_Word) ((MR_hl_field(0, TaggedCase_23, 0))));
      OtherTaggedConsIds_38 = ((MR_Word) ((MR_hl_field(0, TaggedCase_23, 1))));
      CaseId_39 = ((MR_Word) ((MR_hl_field(0, TaggedCase_23, 2))));
      Goal_40 = ((MR_Word) ((MR_hl_field(0, TaggedCase_23, 3))));
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(HeadVar__1_1, Goal_40, &GoalStmt_41, STATE_VARIABLE_ReachableConstVarMaps_0_6, &STATE_VARIABLE_ReachableConstVarMaps_1_35, STATE_VARIABLE_Info_1_51, &STATE_VARIABLE_Info_1_36);
      MainString_42 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(MainTaggedConsId_37);
      OtherStrings_43 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_string_switch_scalar_common_2[5]), OtherTaggedConsIds_38);
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MainString_42));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (OtherStrings_43));
      }
      Strings_44 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_54);
      CommentString_45 = mercury__string__f_43_43_2_f_0((MR_String) "case ", Strings_44);
      GoalInfo_47 = ((MR_Word) ((MR_hl_field(0, Goal_40, 1))));
      Context_48 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_47);
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (CommentString_45));
      }
      {
        Comment_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Comment_49, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Comment_49, 1) = ((MR_Box) (Var_56));
        MR_hl_field(3, Comment_49, 2) = ((MR_Box) (Context_48));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (GoalStmt_41));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Comment_49));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
      }
      {
        CaseStmt_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CaseStmt_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, CaseStmt_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, CaseStmt_50, 2) = ((MR_Box) (Var_58));
        MR_hl_field(0, CaseStmt_50, 3) = ((MR_Box) (Context_48));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (CaseId_39)), ((MR_Box) (CaseStmt_50)), STATE_VARIABLE_CodeMap_0_4, &STATE_VARIABLE_CodeMap_1_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TaggedCases_24;
      next_value_of_STATE_VARIABLE_CodeMap_0_4 = STATE_VARIABLE_CodeMap_1_34;
      next_value_of_STATE_VARIABLE_ReachableConstVarMaps_0_6 = STATE_VARIABLE_ReachableConstVarMaps_1_35;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_1_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CodeMap_0_4 = next_value_of_STATE_VARIABLE_CodeMap_0_4;
      STATE_VARIABLE_ReachableConstVarMaps_0_6 = next_value_of_STATE_VARIABLE_ReachableConstVarMaps_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
  MR_Word TaggedConsId_3)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Word ConsTag_6 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_3, 1))));
  MR_String ConsString_7;

  succeeded = ((((MR_tag((MR_Word) ConsTag_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_6, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    ConsString_7 = ((MR_String) ((MR_hl_field(3, ConsTag_6, 1))));
    {
      MR_String Var_9;

      Var_9 = mercury__string__f_43_43_2_f_0(ConsString_7, (MR_String) "\"");
      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_9);
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_string_switch.gen_string_switch_case_comment\'/1", (MR_String) "non-string tag");
  return String_4;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_arms_of_switch_on_case_id_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CaseCord_0_2,
  MR_Word * STATE_VARIABLE_CaseCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CaseCord_3 = STATE_VARIABLE_CaseCord_0_2;
    else
    {
      MR_Word CasePair_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CasePairs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CaseId_10 = ((MR_Word) ((MR_hl_field(0, CasePair_7, 0))));
      MR_Word CaseStmt_11 = ((MR_Word) ((MR_hl_field(0, CasePair_7, 1))));
      MR_Integer CaseNum_12 = (MR_Integer) (CaseId_10);
      MR_Word MatchCond_13;
      MR_Word Case_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_CaseCord_1_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CaseCord_0_2;

      {
        Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_18, 0) = ((MR_Box) (CaseNum_12));
      }
      {
        Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MatchCond_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MatchCond_13, 0) = ((MR_Box) (Var_17));
      }
      {
        Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Case_14, 0) = ((MR_Box) (MatchCond_13));
        MR_hl_field(0, Case_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Case_14, 2) = ((MR_Box) (CaseStmt_11));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), ((MR_Box) (Case_14)), STATE_VARIABLE_CaseCord_0_2, &STATE_VARIABLE_CaseCord_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CasePairs_8;
      next_value_of_STATE_VARIABLE_CaseCord_0_2 = STATE_VARIABLE_CaseCord_1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CaseCord_0_2 = next_value_of_STATE_VARIABLE_CaseCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_choices_to_nested_switches_8_p_0(
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
      MR_Word ChoicePair_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ChoicePairs_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Integer CodeUnit_25 = ((MR_Integer) ((MR_hl_field(0, ChoicePair_22, 0))));
      MR_Word SubTrieNode_26 = ((MR_Word) ((MR_hl_field(0, ChoicePair_22, 1))));
      MR_Word SwitchArmStmt_27;
      MR_Word MatchCond_28;
      MR_Word SwitchArm_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_SwitchArmsCord_1_35;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7;

      ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(Encoding_1, VarRval_2, CaseNumVarLval_3, Context_4, NumMatched_5, SubTrieNode_26, &SwitchArmStmt_27);
      {
        Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_33, 0) = ((MR_Box) (CodeUnit_25));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        MatchCond_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MatchCond_28, 0) = ((MR_Box) (Var_32));
      }
      {
        SwitchArm_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SwitchArm_29, 0) = ((MR_Box) (MatchCond_28));
        MR_hl_field(0, SwitchArm_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, SwitchArm_29, 2) = ((MR_Box) (SwitchArmStmt_27));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), ((MR_Box) (SwitchArm_29)), STATE_VARIABLE_SwitchArmsCord_0_7, &STATE_VARIABLE_SwitchArmsCord_1_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ChoicePairs_23;
      next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7 = STATE_VARIABLE_SwitchArmsCord_1_35;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_SwitchArmsCord_0_7 = next_value_of_STATE_VARIABLE_SwitchArmsCord_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__501__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_convert_trie_to_nested_switches__517__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(
  MR_Word Encoding_8,
  MR_Word VarRval_9,
  MR_Word CaseNumVarLval_10,
  MR_Word Context_11,
  MR_Integer NumMatched_12,
  MR_Word TrieNode_13,
  MR_Word * Stmt_14)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) TrieNode_13)) == (MR_Integer) 1))
  {
    MR_Word MaybeEnd_28 = ((MR_Word) ((MR_hl_field(1, TrieNode_13, 2))));
    MR_Integer NumRevMatchedCodeUnits_29;
    MR_Word ChoicePairs_30;
    MR_Word StickCodeUnits_31;
    MR_Word TrieNodeAfterStick_32;
    MR_Word Var_63;
    MR_Word RevMatchedCodeUnits_91 = ((MR_Word) ((MR_hl_field(1, TrieNode_13, 0))));

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_91, &NumRevMatchedCodeUnits_29);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_1));
      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_63, 3) = ((MR_Box) (NumMatched_12));
      MR_hl_field(0, Var_63, 4) = ((MR_Box) (NumRevMatchedCodeUnits_29));
    }
    mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_convert_trie_to_nested_switches\'/7", (MR_String) "NumRevMatchedCodeUnits != NumMatched");
    backend_libs__string_switch_util__chase_any_stick_in_trie_4_p_0(TrieNode_13, &ChoicePairs_30, &StickCodeUnits_31, &TrieNodeAfterStick_32);
    if ((StickCodeUnits_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SwitchArmsCord0_41;
      MR_Word SwitchArms0_42;
      MR_Word SwitchArms_43;
      MR_Word SwitchCodeUnitRval_52;
      MR_Integer Var_74 = (MR_Integer) ((MR_Unsigned) NumMatched_12 + (MR_Unsigned) 1);
      MR_Word Var_75;
      MR_Word Var_82;
      MR_Word Var_83;

      Var_75 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0));
      ml_backend__ml_string_switch__ml_convert_trie_choices_to_nested_switches_8_p_0(Encoding_8, VarRval_9, CaseNumVarLval_10, Context_11, Var_74, ChoicePairs_30, Var_75, &SwitchArmsCord0_41);
      SwitchArms0_42 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SwitchArmsCord0_41);
      if ((MaybeEnd_28 == (MR_Word) ((MR_Unsigned) 0U)))
        SwitchArms_43 = SwitchArms0_42;
      else
      {
        MR_Word EndCaseId_44 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_28, 0))));
        MR_Integer EndCaseNum_47 = (MR_Integer) (EndCaseId_44);
        MR_Word EndCaseNumRval_48;
        MR_Word EndSetCaseNumVarAssign_49;
        MR_Word EndSetCaseNumVarStmt_50;
        MR_Word EndSwitchArm_51;
        MR_Word Var_79;

        {
          Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_79, 0) = ((MR_Box) (EndCaseNum_47));
        }
        {
          EndCaseNumRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, EndCaseNumRval_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, EndCaseNumRval_48, 1) = ((MR_Box) (Var_79));
        }
        {
          EndSetCaseNumVarAssign_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, EndSetCaseNumVarAssign_49, 0) = ((MR_Box) (CaseNumVarLval_10));
          MR_hl_field(2, EndSetCaseNumVarAssign_49, 1) = ((MR_Box) (EndCaseNumRval_48));
        }
        {
          EndSetCaseNumVarStmt_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, EndSetCaseNumVarStmt_50, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, EndSetCaseNumVarStmt_50, 1) = ((MR_Box) (EndSetCaseNumVarAssign_49));
          MR_hl_field(3, EndSetCaseNumVarStmt_50, 2) = ((MR_Box) (Context_11));
        }
        {
          EndSwitchArm_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EndSwitchArm_51, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[5]));
          MR_hl_field(0, EndSwitchArm_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, EndSwitchArm_51, 2) = ((MR_Box) (EndSetCaseNumVarStmt_50));
        }
        {
          SwitchArms_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SwitchArms_43, 0) = ((MR_Box) (EndSwitchArm_51));
          MR_hl_field(1, SwitchArms_43, 1) = ((MR_Box) (SwitchArms0_42));
        }
      }
      {
        Var_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_83, 0) = ((MR_Box) (NumMatched_12));
      }
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_83));
      }
      {
        SwitchCodeUnitRval_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SwitchCodeUnitRval_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, SwitchCodeUnitRval_52, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(3, SwitchCodeUnitRval_52, 2) = ((MR_Box) (VarRval_9));
        MR_hl_field(3, SwitchCodeUnitRval_52, 3) = ((MR_Box) (Var_82));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        *Stmt_14 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
        MR_hl_field(3, base, 2) = ((MR_Box) (SwitchCodeUnitRval_52));
        MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, base, 4) = ((MR_Box) (SwitchArms_43));
        MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 6) = ((MR_Box) (Context_11));
      }
    }
    else
    {
      MR_Word Var_175 = ((MR_Word) ((MR_hl_field(1, StickCodeUnits_31, 1))));

      if ((Var_175 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SwitchArmsCord0_121;
        MR_Word SwitchArms0_122;
        MR_Word SwitchArms_123;
        MR_Word SwitchCodeUnitRval_132;
        MR_Integer Var_134 = (MR_Integer) ((MR_Unsigned) NumMatched_12 + (MR_Unsigned) 1);
        MR_Word Var_135;
        MR_Word Var_142;
        MR_Word Var_143;

        Var_135 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0));
        ml_backend__ml_string_switch__ml_convert_trie_choices_to_nested_switches_8_p_0(Encoding_8, VarRval_9, CaseNumVarLval_10, Context_11, Var_134, ChoicePairs_30, Var_135, &SwitchArmsCord0_121);
        SwitchArms0_122 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SwitchArmsCord0_121);
        if ((MaybeEnd_28 == (MR_Word) ((MR_Unsigned) 0U)))
          SwitchArms_123 = SwitchArms0_122;
        else
        {
          MR_Word EndCaseId_97 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_28, 0))));
          MR_Integer EndCaseNum_100 = (MR_Integer) (EndCaseId_97);
          MR_Word EndCaseNumRval_101;
          MR_Word EndSetCaseNumVarAssign_102;
          MR_Word EndSetCaseNumVarStmt_103;
          MR_Word EndSwitchArm_104;
          MR_Word Var_107;

          {
            Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_107, 0) = ((MR_Box) (EndCaseNum_100));
          }
          {
            EndCaseNumRval_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, EndCaseNumRval_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, EndCaseNumRval_101, 1) = ((MR_Box) (Var_107));
          }
          {
            EndSetCaseNumVarAssign_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, EndSetCaseNumVarAssign_102, 0) = ((MR_Box) (CaseNumVarLval_10));
            MR_hl_field(2, EndSetCaseNumVarAssign_102, 1) = ((MR_Box) (EndCaseNumRval_101));
          }
          {
            EndSetCaseNumVarStmt_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, EndSetCaseNumVarStmt_103, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, EndSetCaseNumVarStmt_103, 1) = ((MR_Box) (EndSetCaseNumVarAssign_102));
            MR_hl_field(3, EndSetCaseNumVarStmt_103, 2) = ((MR_Box) (Context_11));
          }
          {
            EndSwitchArm_104 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, EndSwitchArm_104, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_3[5]));
            MR_hl_field(0, EndSwitchArm_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, EndSwitchArm_104, 2) = ((MR_Box) (EndSetCaseNumVarStmt_103));
          }
          {
            SwitchArms_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SwitchArms_123, 0) = ((MR_Box) (EndSwitchArm_104));
            MR_hl_field(1, SwitchArms_123, 1) = ((MR_Box) (SwitchArms0_122));
          }
        }
        {
          Var_143 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_143, 0) = ((MR_Box) (NumMatched_12));
        }
        {
          Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_142, 1) = ((MR_Box) (Var_143));
        }
        {
          SwitchCodeUnitRval_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SwitchCodeUnitRval_132, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, SwitchCodeUnitRval_132, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, SwitchCodeUnitRval_132, 2) = ((MR_Box) (VarRval_9));
          MR_hl_field(3, SwitchCodeUnitRval_132, 3) = ((MR_Box) (Var_142));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_string_switch_scalar_common_1[11])));
          MR_hl_field(3, base, 2) = ((MR_Box) (SwitchCodeUnitRval_132));
          MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 4) = ((MR_Box) (SwitchArms_123));
          MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, base, 6) = ((MR_Box) (Context_11));
        }
      }
      else
      {
        MR_Integer NumStickCodeUnits_36;
        MR_Word CmpOp_37;
        MR_String MatchedStickStr_38;
        MR_Word AfterStickStmt_39;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Integer Var_71;
        MR_Word MatchedCodeUnits_87;
        MR_Word CondRval_88;

        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), StickCodeUnits_31, &NumStickCodeUnits_36);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (NumStickCodeUnits_36));
        }
        {
          CmpOp_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CmpOp_37, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, CmpOp_37, 1) = ((MR_Box) (NumMatched_12));
          MR_hl_field(3, CmpOp_37, 2) = ((MR_Box) (Var_67));
        }
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_91, &MatchedCodeUnits_87);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_87, StickCodeUnits_31);
        backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_8, Var_68, &MatchedStickStr_38);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (MatchedStickStr_38));
        }
        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
        }
        {
          CondRval_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CondRval_88, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, CondRval_88, 1) = ((MR_Box) (CmpOp_37));
          MR_hl_field(3, CondRval_88, 2) = ((MR_Box) (VarRval_9));
          MR_hl_field(3, CondRval_88, 3) = ((MR_Box) (Var_69));
        }
        Var_71 = (MR_Integer) ((MR_Unsigned) NumMatched_12 + (MR_Unsigned) NumStickCodeUnits_36);
        ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0(Encoding_8, VarRval_9, CaseNumVarLval_10, Context_11, Var_71, TrieNodeAfterStick_32, &AfterStickStmt_39);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_14 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (CondRval_88));
          MR_hl_field(2, base, 1) = ((MR_Box) (AfterStickStmt_39));
          MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 3) = ((MR_Box) (Context_11));
        }
      }
    }
  }
  else
  {
    MR_Word RevMatchedCodeUnits_15 = ((MR_Word) ((MR_hl_field(0, TrieNode_13, 0))));
    MR_Word NotYetMatchedCodeUnits_16 = ((MR_Word) ((MR_hl_field(0, TrieNode_13, 1))));
    MR_Word CaseId_17 = ((MR_Word) ((MR_hl_field(0, TrieNode_13, 2))));
    MR_Word MatchedCodeUnits_18;
    MR_Word AllCodeUnits_19;
    MR_Integer NumMatchedCodeUnits_20;
    MR_String EndStr_21;
    MR_Word CondRval_22;
    MR_Integer CaseNum_23;
    MR_Word CaseNumRval_24;
    MR_Word SetCaseNumVarAssign_25;
    MR_Word SetCaseNumVarStmt_26;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_15, &MatchedCodeUnits_18);
    AllCodeUnits_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_18, NotYetMatchedCodeUnits_16);
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_18, &NumMatchedCodeUnits_20);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_convert_trie_to_nested_switches_7_p_0_2));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (NumMatched_12));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (NumMatchedCodeUnits_20));
    }
    mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_string_switch.ml_convert_trie_to_nested_switches\'/7", (MR_String) "NumMatchedCodeUnits != NumMatched");
    backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_8, AllCodeUnits_19, &EndStr_21);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (NumMatched_12));
      MR_hl_field(3, Var_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (EndStr_21));
    }
    {
      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      CondRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CondRval_22, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, CondRval_22, 1) = ((MR_Box) (Var_57));
      MR_hl_field(3, CondRval_22, 2) = ((MR_Box) (VarRval_9));
      MR_hl_field(3, CondRval_22, 3) = ((MR_Box) (Var_59));
    }
    CaseNum_23 = (MR_Integer) (CaseId_17);
    {
      Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_61, 0) = ((MR_Box) (CaseNum_23));
    }
    {
      CaseNumRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CaseNumRval_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, CaseNumRval_24, 1) = ((MR_Box) (Var_61));
    }
    {
      SetCaseNumVarAssign_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, SetCaseNumVarAssign_25, 0) = ((MR_Box) (CaseNumVarLval_10));
      MR_hl_field(2, SetCaseNumVarAssign_25, 1) = ((MR_Box) (CaseNumRval_24));
    }
    {
      SetCaseNumVarStmt_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SetCaseNumVarStmt_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, SetCaseNumVarStmt_26, 1) = ((MR_Box) (SetCaseNumVarAssign_25));
      MR_hl_field(3, SetCaseNumVarStmt_26, 2) = ((MR_Box) (Context_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Stmt_14 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (CondRval_22));
      MR_hl_field(2, base, 1) = ((MR_Box) (SetCaseNumVarStmt_26));
      MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, base, 3) = ((MR_Box) (Context_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_string_switch____Unify____hash_slots_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_string_switch____Compare____hash_slots_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
