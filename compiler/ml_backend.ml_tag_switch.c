/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2022-03-15
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


// :- module ml_backend.ml_tag_switch.
// :- implementation.

/*
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#include "ml_backend.ml_tag_switch.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_is_a_case_split_between_ptags_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_may_use_tag_switch_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_may_use_tag_switch_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_may_use_tag_switch_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[2];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_contains_label_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_contains_label_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_contains_label_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_has_local_vars_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_has_local_vars_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_has_local_vars_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_will_gen_aux_pred_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_will_gen_aux_pred_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_will_gen_aux_pred_0[2];

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__433__1_2_p_0(
  MR_Word OtherPtags_24,
  MR_Word HeadVar__2_59);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__408__1_2_p_0(
  MR_Word SecTagLocn_25,
  MR_Word SecTagLocn1_28);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer Stag_3);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word _CaseId_5,
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10);

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word CaseIdPtagsMap_3,
  MR_Word * IsAnyCaseSplit_4);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_func_7_p_0(
  MR_Word FuncDefn_8,
  MR_Word STATE_VARIABLE_HasLabel_0_21,
  MR_Word * STATE_VARIABLE_HasLabel_22,
  MR_Word STATE_VARIABLE_HasAuxPred_0_23,
  MR_Word * STATE_VARIABLE_HasAuxPred_24,
  MR_Word STATE_VARIABLE_HasLocalVars_0_25,
  MR_Word * STATE_VARIABLE_HasLocalVars_26);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_case_7_p_0(
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_HasLabel_0_15,
  MR_Word * STATE_VARIABLE_HasLabel_16,
  MR_Word STATE_VARIABLE_HasAuxPred_0_17,
  MR_Word * STATE_VARIABLE_HasAuxPred_18,
  MR_Word STATE_VARIABLE_HasLocalVars_0_19,
  MR_Word * STATE_VARIABLE_HasLocalVars_20);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_34,
  MR_Word * STATE_VARIABLE_CodeMap_35,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_36,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_37,
  MR_Word STATE_VARIABLE_MayUseTagSwitch_0_38,
  MR_Word * STATE_VARIABLE_MayUseTagSwitch_39,
  MR_Word Info0_20,
  MR_Word * Info_21);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(
  MR_Word Stmt_8,
  MR_Word STATE_VARIABLE_HasLabel_0_46,
  MR_Word * STATE_VARIABLE_HasLabel_47,
  MR_Word STATE_VARIABLE_HasAuxPred_0_48,
  MR_Word * STATE_VARIABLE_HasAuxPred_49,
  MR_Word STATE_VARIABLE_HasLocalVars_0_50,
  MR_Word * STATE_VARIABLE_HasLocalVars_51);

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_9_p_0_1(
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
ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word Var_3,
  MR_Word CanFail_4,
  MR_Word CodeModel_5,
  MR_Word PtagCountMap_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_9,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(
  MR_Word PtagCase_13,
  MR_Word CodeMap_14,
  MR_Word Var_15,
  MR_Word CanFail_16,
  MR_Word CodeModel_17,
  MR_Word PtagCountMap_18,
  MR_Word Context_19,
  MR_Word * MLDS_Case_20,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_48,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_13_p_0(
  MR_Word Cases_14,
  MR_Word CodeMap_15,
  MR_Word Ptag_16,
  MR_Word StagLocn_17,
  MR_Word Var_18,
  MR_Word CodeModel_19,
  MR_Word CanFail_20,
  MR_Word Context_21,
  MR_Word * Stmt_22,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_38,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_5,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMap_0_2,
  MR_Word * STATE_VARIABLE_RevMap_3);

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_8_p_0(
  MR_Word CodeMap_9,
  MR_Word CaseId_10,
  MR_Word CodeModel_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_18,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Word Ptag_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[12][3];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[9][2];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[4][5];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][15];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[3][10];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_6[1][7];




static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[4])),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[5]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_stag_cases_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____code_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____code_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "code_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0 = {
  (MR_String) "no_case_is_split_between_ptags",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1 = {
  (MR_String) "some_case_is_split_between_ptags",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "is_a_case_split_between_ptags",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_is_a_case_split_between_ptags_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_0 = {
  (MR_String) "may_not_use_tag_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_1 = {
  (MR_String) "may_use_tag_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_may_use_tag_switch_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_may_use_tag_switch_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_may_use_tag_switch_0_1
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_may_use_tag_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "may_use_tag_switch",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_may_use_tag_switch_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_may_use_tag_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_may_use_tag_switch_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0 = {
  (MR_String) "immediate",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1 = {
  (MR_String) "generate",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "maybe_code",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stag_rev_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0 = {
  (MR_String) "stags",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stags",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_0 = {
  (MR_String) "does_not_contain_label",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_1 = {
  (MR_String) "does_contain_label",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_contains_label_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_contains_label_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_contains_label_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_contains_label_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stmt_contains_label",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_contains_label_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_contains_label_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_contains_label_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_0 = {
  (MR_String) "has_no_local_vars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_1 = {
  (MR_String) "has_local_vars",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_has_local_vars_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_has_local_vars_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_has_local_vars_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_has_local_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stmt_has_local_vars",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_has_local_vars_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_has_local_vars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_has_local_vars_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_0 = {
  (MR_String) "will_not_gen_aux_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_1 = {
  (MR_String) "will_gen_aux_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_will_gen_aux_pred_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_will_gen_aux_pred_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_stmt_will_gen_aux_pred_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_will_gen_aux_pred_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stmt_will_gen_aux_pred",
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_stmt_will_gen_aux_pred_0 },
  { ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_ordinal_ordered_stmt_will_gen_aux_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stmt_will_gen_aux_pred_0,

};

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__433__1_2_p_0(
  MR_Word OtherPtags_24,
  MR_Word HeadVar__2_59)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[3]), ((MR_Box) (OtherPtags_24)), ((MR_Box) (HeadVar__2_59)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__408__1_2_p_0(
  MR_Word SecTagLocn_25,
  MR_Word SecTagLocn1_28)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(SecTagLocn_25, SecTagLocn1_28);
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0(
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
ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0(
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
ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0(
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
ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[4]), &SubResult1_14, ((MR_Box) (Var_23)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_22, ArgY2_16);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      ml_backend__mlds____Compare____mlds_stmt_0_0(HeadVar__1_1, Var_24, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0(
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
ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
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
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer Stag_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Stag_3));
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

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word _CaseId_5,
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10)
{
  ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(Ptags_6, STATE_VARIABLE_IsAnyCaseSplit_0_9, STATE_VARIABLE_IsAnyCaseSplit_10);
}

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10)
{
  MR_bool succeeded;
  MR_Box conv0__OnlyPtag_8;

  succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), Ptags_6, &conv0__OnlyPtag_8);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_IsAnyCaseSplit_10 = STATE_VARIABLE_IsAnyCaseSplit_0_9;
  else
    *STATE_VARIABLE_IsAnyCaseSplit_10 = (MR_Integer) 1;
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IsAnyCaseSplit_10;

  ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IsAnyCaseSplit_10);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IsAnyCaseSplit_10));
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word CaseIdPtagsMap_3,
  MR_Word * IsAnyCaseSplit_4)
{
  MR_Box conv1_IsAnyCaseSplit_4;

  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[11]), CaseIdPtagsMap_3, ((MR_Box) ((MR_Integer) 0)), &conv1_IsAnyCaseSplit_4);
  *IsAnyCaseSplit_4 = ((MR_Word) (conv1_IsAnyCaseSplit_4));
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_func_7_p_0(
  MR_Word FuncDefn_8,
  MR_Word STATE_VARIABLE_HasLabel_0_21,
  MR_Word * STATE_VARIABLE_HasLabel_22,
  MR_Word STATE_VARIABLE_HasAuxPred_0_23,
  MR_Word * STATE_VARIABLE_HasAuxPred_24,
  MR_Word STATE_VARIABLE_HasLocalVars_0_25,
  MR_Word * STATE_VARIABLE_HasLocalVars_26)
{
  MR_Word FuncBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_8, (MR_Integer) 5))));

  if ((FuncBody_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_HasLabel_22 = STATE_VARIABLE_HasLabel_0_21;
    *STATE_VARIABLE_HasAuxPred_24 = STATE_VARIABLE_HasAuxPred_0_23;
    *STATE_VARIABLE_HasLocalVars_26 = STATE_VARIABLE_HasLocalVars_0_25;
  }
  else
  {
    MR_Word Stmt_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncBody_17, (MR_Integer) 0))));

    ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(Stmt_20, STATE_VARIABLE_HasLabel_0_21, STATE_VARIABLE_HasLabel_22, STATE_VARIABLE_HasAuxPred_0_23, STATE_VARIABLE_HasAuxPred_24, STATE_VARIABLE_HasLocalVars_0_25, STATE_VARIABLE_HasLocalVars_26);
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_case_7_p_0(
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_HasLabel_0_15,
  MR_Word * STATE_VARIABLE_HasLabel_16,
  MR_Word STATE_VARIABLE_HasAuxPred_0_17,
  MR_Word * STATE_VARIABLE_HasAuxPred_18,
  MR_Word STATE_VARIABLE_HasLocalVars_0_19,
  MR_Word * STATE_VARIABLE_HasLocalVars_20)
{
  MR_Word Stmt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));

  ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(Stmt_14, STATE_VARIABLE_HasLabel_0_15, STATE_VARIABLE_HasLabel_16, STATE_VARIABLE_HasAuxPred_0_17, STATE_VARIABLE_HasAuxPred_18, STATE_VARIABLE_HasLocalVars_0_19, STATE_VARIABLE_HasLocalVars_20);
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_12_p_0(
  MR_Word CodeModel_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word TaggedCase_15,
  MR_Word * CaseId_16,
  MR_Word STATE_VARIABLE_CodeMap_0_34,
  MR_Word * STATE_VARIABLE_CodeMap_35,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_36,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_37,
  MR_Word STATE_VARIABLE_MayUseTagSwitch_0_38,
  MR_Word * STATE_VARIABLE_MayUseTagSwitch_39,
  MR_Word Info0_20,
  MR_Word * Info_21)
{
  MR_bool succeeded;
  MR_Word Info1_22;
  MR_Word OtherTaggedConsIds_24;
  MR_Word Goal_25;
  MR_Word Stmt_26;
  MR_Word Info2_27;
  MR_Word MaybeCode_28;

  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_14, Info0_20, &Info1_22);
  OtherTaggedConsIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 1))));
  *CaseId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 2))));
  Goal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 3))));
  ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_13, Goal_25, &Stmt_26, STATE_VARIABLE_ReachableConstVarMaps_0_36, STATE_VARIABLE_ReachableConstVarMaps_37, Info1_22, &Info2_27);
  if ((OtherTaggedConsIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MaybeCode_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeCode_28, 0) = ((MR_Box) (Stmt_26));
    }
    *Info_21 = Info2_27;
    *STATE_VARIABLE_MayUseTagSwitch_39 = STATE_VARIABLE_MayUseTagSwitch_0_38;
  }
  else
  {
    MR_Word HasLabel_31;
    MR_Word HasAuxPred_32;
    MR_Word HasLocalVars_33;

    ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(Stmt_26, (MR_Integer) 0, &HasLabel_31, (MR_Integer) 0, &HasAuxPred_32, (MR_Integer) 0, &HasLocalVars_33);
    succeeded = (HasAuxPred_32 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (HasLocalVars_33 == (MR_Integer) 1);
    if (succeeded)
    {
      *STATE_VARIABLE_MayUseTagSwitch_39 = (MR_Integer) 0;
      {
        MaybeCode_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCode_28, 0) = ((MR_Box) (EntryPackedArgsMap_14));
        MR_hl_field(MR_mktag(1), MaybeCode_28, 1) = ((MR_Box) (Goal_25));
      }
      *Info_21 = Info1_22;
    }
    else
    {
      succeeded = (HasLabel_31 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HasAuxPred_32 == (MR_Integer) 1);
      if (succeeded)
      {
        {
          MaybeCode_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCode_28, 0) = ((MR_Box) (EntryPackedArgsMap_14));
          MR_hl_field(MR_mktag(1), MaybeCode_28, 1) = ((MR_Box) (Goal_25));
        }
        *Info_21 = Info1_22;
      }
      else
      {
        {
          MaybeCode_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeCode_28, 0) = ((MR_Box) (Stmt_26));
        }
        *Info_21 = Info2_27;
      }
      *STATE_VARIABLE_MayUseTagSwitch_39 = STATE_VARIABLE_MayUseTagSwitch_0_38;
    }
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), ((MR_Box) (*CaseId_16)), ((MR_Box) (MaybeCode_28)), STATE_VARIABLE_CodeMap_0_34, STATE_VARIABLE_CodeMap_35);
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_HasLabel_16;
  MR_Word conv13_STATE_VARIABLE_HasAuxPred_18;
  MR_Word conv12_STATE_VARIABLE_HasLocalVars_20;

  ml_backend__ml_tag_switch__acc_dup_properties_of_case_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_HasLabel_16, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_HasAuxPred_18, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_HasLocalVars_20);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_HasLabel_16));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_HasAuxPred_18));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_HasLocalVars_20));
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_HasLabel_47;
  MR_Word conv7_STATE_VARIABLE_HasAuxPred_49;
  MR_Word conv6_STATE_VARIABLE_HasLocalVars_51;

  ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_HasLabel_47, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_HasAuxPred_49, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_HasLocalVars_51);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_HasLabel_47));
  *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_HasAuxPred_49));
  *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_HasLocalVars_51));
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_HasLabel_22;
  MR_Word conv1_STATE_VARIABLE_HasAuxPred_24;
  MR_Word conv0_STATE_VARIABLE_HasLocalVars_26;

  ml_backend__ml_tag_switch__acc_dup_properties_of_func_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_HasLabel_22, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_HasAuxPred_24, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_HasLocalVars_26);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_HasLabel_22));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_HasAuxPred_24));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_HasLocalVars_26));
}

static void MR_CALL 
ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(
  MR_Word Stmt_8,
  MR_Word STATE_VARIABLE_HasLabel_0_46,
  MR_Word * STATE_VARIABLE_HasLabel_47,
  MR_Word STATE_VARIABLE_HasAuxPred_0_48,
  MR_Word * STATE_VARIABLE_HasAuxPred_49,
  MR_Word STATE_VARIABLE_HasLocalVars_0_50,
  MR_Word * STATE_VARIABLE_HasLocalVars_51)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_8, (MR_Integer) 0))));
          MR_Word FuncDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_8, (MR_Integer) 1))));
          MR_Word BlockStmts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_8, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_HasLocalVars_77_77;
          MR_Word STATE_VARIABLE_HasLabel_80_80;
          MR_Word STATE_VARIABLE_HasAuxPred_81_81;
          MR_Word STATE_VARIABLE_HasLocalVars_82_82;
          MR_Box conv11_STATE_VARIABLE_HasLabel_47;
          MR_Box conv10_STATE_VARIABLE_HasAuxPred_49;
          MR_Box conv9_STATE_VARIABLE_HasLocalVars_51;

          if ((LocalVarDefns_12 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_HasLocalVars_77_77 = STATE_VARIABLE_HasLocalVars_0_50;
          else
            STATE_VARIABLE_HasLocalVars_77_77 = (MR_Integer) 1;
          if ((FuncDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_HasLabel_80_80 = STATE_VARIABLE_HasLabel_0_46;
            STATE_VARIABLE_HasAuxPred_81_81 = STATE_VARIABLE_HasAuxPred_0_48;
            STATE_VARIABLE_HasLocalVars_82_82 = STATE_VARIABLE_HasLocalVars_77_77;
          }
          else
          {
            MR_Box conv5_STATE_VARIABLE_HasLabel_80_80;
            MR_Box conv4_STATE_VARIABLE_HasAuxPred_81_81;
            MR_Box conv3_STATE_VARIABLE_HasLocalVars_82_82;

            mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[8]), FuncDefns_13, ((MR_Box) (STATE_VARIABLE_HasLabel_0_46)), &conv5_STATE_VARIABLE_HasLabel_80_80, ((MR_Box) ((MR_Integer) 1)), &conv4_STATE_VARIABLE_HasAuxPred_81_81, ((MR_Box) (STATE_VARIABLE_HasLocalVars_77_77)), &conv3_STATE_VARIABLE_HasLocalVars_82_82);
            STATE_VARIABLE_HasLabel_80_80 = ((MR_Word) (conv5_STATE_VARIABLE_HasLabel_80_80));
            STATE_VARIABLE_HasAuxPred_81_81 = ((MR_Word) (conv4_STATE_VARIABLE_HasAuxPred_81_81));
            STATE_VARIABLE_HasLocalVars_82_82 = ((MR_Word) (conv3_STATE_VARIABLE_HasLocalVars_82_82));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[9]), BlockStmts_14, ((MR_Box) (STATE_VARIABLE_HasLabel_80_80)), &conv11_STATE_VARIABLE_HasLabel_47, ((MR_Box) (STATE_VARIABLE_HasAuxPred_81_81)), &conv10_STATE_VARIABLE_HasAuxPred_49, ((MR_Box) (STATE_VARIABLE_HasLocalVars_82_82)), &conv9_STATE_VARIABLE_HasLocalVars_51);
          *STATE_VARIABLE_HasLabel_47 = ((MR_Word) (conv11_STATE_VARIABLE_HasLabel_47));
          *STATE_VARIABLE_HasAuxPred_49 = ((MR_Word) (conv10_STATE_VARIABLE_HasAuxPred_49));
          *STATE_VARIABLE_HasLocalVars_51 = ((MR_Word) (conv9_STATE_VARIABLE_HasLocalVars_51));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BodyStmt_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_8, (MR_Integer) 2))));
          MR_Word next_value_of_Stmt_8 = BodyStmt_22;

          // direct tailcall eliminated
          ;
          Stmt_8 = next_value_of_Stmt_8;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_8, (MR_Integer) 1))));
          MR_Word MaybeElseStmt_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_8, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_HasLabel_68_68;
          MR_Word STATE_VARIABLE_HasAuxPred_69_69;
          MR_Word STATE_VARIABLE_HasLocalVars_70_70;

          ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(ThenStmt_25, STATE_VARIABLE_HasLabel_0_46, &STATE_VARIABLE_HasLabel_68_68, STATE_VARIABLE_HasAuxPred_0_48, &STATE_VARIABLE_HasAuxPred_69_69, STATE_VARIABLE_HasLocalVars_0_50, &STATE_VARIABLE_HasLocalVars_70_70);
          if ((MaybeElseStmt_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_68_68;
            *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_69_69;
            *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_70_70;
          }
          else
          {
            MR_Word ElseStmt_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseStmt_26, (MR_Integer) 0))));
            MR_Word next_value_of_Stmt_8 = ElseStmt_27;
            MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_68_68;
            MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_69_69;
            MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_70_70;

            // direct tailcall eliminated
            ;
            Stmt_8 = next_value_of_Stmt_8;
            STATE_VARIABLE_HasLabel_0_46 = next_value_of_STATE_VARIABLE_HasLabel_0_46;
            STATE_VARIABLE_HasAuxPred_0_48 = next_value_of_STATE_VARIABLE_HasAuxPred_0_48;
            STATE_VARIABLE_HasLocalVars_0_50 = next_value_of_STATE_VARIABLE_HasLocalVars_0_50;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_8, (MR_Integer) 4))));
              MR_Word Default_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_8, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_HasLabel_62_62;
              MR_Word STATE_VARIABLE_HasAuxPred_63_63;
              MR_Word STATE_VARIABLE_HasLocalVars_64_64;
              MR_Box conv17_STATE_VARIABLE_HasLabel_62_62;
              MR_Box conv16_STATE_VARIABLE_HasAuxPred_63_63;
              MR_Box conv15_STATE_VARIABLE_HasLocalVars_64_64;

              mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[10]), Cases_31, ((MR_Box) (STATE_VARIABLE_HasLabel_0_46)), &conv17_STATE_VARIABLE_HasLabel_62_62, ((MR_Box) (STATE_VARIABLE_HasAuxPred_0_48)), &conv16_STATE_VARIABLE_HasAuxPred_63_63, ((MR_Box) (STATE_VARIABLE_HasLocalVars_0_50)), &conv15_STATE_VARIABLE_HasLocalVars_64_64);
              STATE_VARIABLE_HasLabel_62_62 = ((MR_Word) (conv17_STATE_VARIABLE_HasLabel_62_62));
              STATE_VARIABLE_HasAuxPred_63_63 = ((MR_Word) (conv16_STATE_VARIABLE_HasAuxPred_63_63));
              STATE_VARIABLE_HasLocalVars_64_64 = ((MR_Word) (conv15_STATE_VARIABLE_HasLocalVars_64_64));
              switch (MR_tag((MR_Word) Default_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_32)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_62_62;
                        *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_63_63;
                        *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_64_64;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_62_62;
                        *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_63_63;
                        *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_64_64;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DefaultStmt_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_32, (MR_Integer) 0))));
                    MR_Word next_value_of_Stmt_8 = DefaultStmt_33;
                    MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_62_62;
                    MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_63_63;
                    MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_64_64;

                    // direct tailcall eliminated
                    ;
                    Stmt_8 = next_value_of_Stmt_8;
                    STATE_VARIABLE_HasLabel_0_46 = next_value_of_STATE_VARIABLE_HasLabel_0_46;
                    STATE_VARIABLE_HasAuxPred_0_48 = next_value_of_STATE_VARIABLE_HasAuxPred_0_48;
                    STATE_VARIABLE_HasLocalVars_0_50 = next_value_of_STATE_VARIABLE_HasLocalVars_0_50;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_HasLabel_47 = (MR_Integer) 1;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 3:
            {
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 4:
            {
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 5:
            {
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word HandlerStmt_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_8, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_HasLabel_55_55;
              MR_Word STATE_VARIABLE_HasAuxPred_56_56;
              MR_Word STATE_VARIABLE_HasLocalVars_57_57;
              MR_Word BodyStmt_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_8, (MR_Integer) 2))));
              MR_Word next_value_of_Stmt_8;
              MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46;
              MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48;
              MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50;

              ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(BodyStmt_95, STATE_VARIABLE_HasLabel_0_46, &STATE_VARIABLE_HasLabel_55_55, (MR_Integer) 1, &STATE_VARIABLE_HasAuxPred_56_56, STATE_VARIABLE_HasLocalVars_0_50, &STATE_VARIABLE_HasLocalVars_57_57);
              // direct tailcall eliminated
              ;
              next_value_of_Stmt_8 = HandlerStmt_35;
              next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_55_55;
              next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_56_56;
              next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_57_57;
              Stmt_8 = next_value_of_Stmt_8;
              STATE_VARIABLE_HasLabel_0_46 = next_value_of_STATE_VARIABLE_HasLabel_0_46;
              STATE_VARIABLE_HasAuxPred_0_48 = next_value_of_STATE_VARIABLE_HasAuxPred_0_48;
              STATE_VARIABLE_HasLocalVars_0_50 = next_value_of_STATE_VARIABLE_HasLocalVars_0_50;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              *STATE_VARIABLE_HasAuxPred_49 = (MR_Integer) 1;
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
          case (MR_Integer) 8:
            {
              *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_0_46;
              *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_0_48;
              *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_0_50;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_9_p_0_1(
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
  MR_Word conv4_CaseId_16;
  MR_Word conv3_STATE_VARIABLE_CodeMap_35;
  MR_Word conv2_STATE_VARIABLE_ReachableConstVarMaps_37;
  MR_Word conv1_STATE_VARIABLE_MayUseTagSwitch_39;
  MR_Word conv0_Info_21;

  ml_backend__ml_tag_switch__gen_tagged_case_code_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_CaseId_16, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_CodeMap_35, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ReachableConstVarMaps_37, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_MayUseTagSwitch_39, ((MR_Word) (wrapper_arg_9)), &conv0_Info_21);
  *wrapper_arg_2 = ((MR_Box) (conv4_CaseId_16));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_CodeMap_35));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ReachableConstVarMaps_37));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_MayUseTagSwitch_39));
  *wrapper_arg_10 = ((MR_Box) (conv0_Info_21));
}

MR_bool MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_9_p_0(
  MR_Word TaggedCases_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_47_85;
  MR_Word TypeCtorInfo_48_86;
  MR_Word ModuleInfo_18;
  MR_Word VarType_19;
  uint8_t MaxPrimary_20;
  MR_Word PtagCountMap_21;
  MR_Word CodeMap_22;
  MR_Word ReachableConstVarMaps0_23;
  MR_Word MayUseTagSwitch_24;
  MR_Word PtagCaseMap_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word VarLval_64;
  MR_Word VarRval_65;
  MR_Word PtagRval_66;
  MR_Word PtagCaseList_67;
  MR_Word PtagCases0_68;
  MR_Word ReachableConstVarMaps_69;
  MR_Word Range_70;
  MR_Word PtagCases_71;
  MR_Word Default_72;
  MR_Word SwitchStmt0_73;
  MR_Word SwitchStmt_74;
  MR_Word Var_75;
  MR_Word STATE_VARIABLE_Info_38_76;
  MR_Word STATE_VARIABLE_Info_39_77;
  MR_Integer Var_78;
  MR_Integer Var_79;
  MR_Word STATE_VARIABLE_Info_42_80;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word _CaseIdPtagsMap_25;
  MR_Box conv8_CodeMap_22;
  MR_Box conv7_ReachableConstVarMaps0_23;
  MR_Box conv6_MayUseTagSwitch_24;
  MR_Box conv5_STATE_VARIABLE_Info_33_33;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_18);
  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_27, Var_11, &VarType_19);
  backend_libs__switch_util__get_ptag_counts_4_p_0(VarType_19, ModuleInfo_18, &MaxPrimary_20, &PtagCountMap_21);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (CodeModel_12));
    MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (EntryPackedArgsMap_14));
  }
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0));
  backend_libs__switch_util__group_cases_by_ptag_12_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), TaggedCases_10, Var_29, ((MR_Box) (Var_30)), &conv8_CodeMap_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ReachableConstVarMaps0_23, ((MR_Box) ((MR_Integer) 1)), &conv6_MayUseTagSwitch_24, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv5_STATE_VARIABLE_Info_33_33, &_CaseIdPtagsMap_25, &PtagCaseMap_26);
  CodeMap_22 = ((MR_Word) (conv8_CodeMap_22));
  ReachableConstVarMaps0_23 = ((MR_Word) (conv7_ReachableConstVarMaps0_23));
  MayUseTagSwitch_24 = ((MR_Word) (conv6_MayUseTagSwitch_24));
  STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_Info_33_33));
  succeeded = (MayUseTagSwitch_24 == (MR_Integer) 1);
  if (succeeded)
  {
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_33_33, Var_11, &VarLval_64);
    Var_75 = (MR_Word) ((MR_Unsigned) 0U);
    TypeCtorInfo_47_85 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0);
    {
      VarRval_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), VarRval_65, 0) = ((MR_Box) (VarLval_64));
    }
    {
      PtagRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PtagRval_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), PtagRval_66, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(3), PtagRval_66, 2) = ((MR_Box) (VarRval_65));
    }
    backend_libs__switch_util__order_ptags_by_count_3_p_0(TypeCtorInfo_47_85, PtagCountMap_21, PtagCaseMap_26, &PtagCaseList_67);
    ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(PtagCaseList_67, CodeMap_22, Var_11, CanFail_13, CodeModel_12, PtagCountMap_21, Context_15, &PtagCases0_68, ReachableConstVarMaps0_23, &ReachableConstVarMaps_69, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_38_76);
    ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_69, STATE_VARIABLE_Info_38_76, &STATE_VARIABLE_Info_39_77);
    Var_78 = (MR_Integer) 0;
    Var_79 = mercury__uint8__cast_to_int_1_f_0(MaxPrimary_20);
    TypeCtorInfo_48_86 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0);
    {
      Range_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Range_70, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Range_70, 1) = ((MR_Box) (Var_79));
    }
    mercury__list__sort_2_p_0(TypeCtorInfo_48_86, PtagCases0_68, &PtagCases_71);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_13, CodeModel_12, Context_15, &Default_72, STATE_VARIABLE_Info_39_77, &STATE_VARIABLE_Info_42_80);
    Var_81 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[7]));
    {
      SwitchStmt0_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 2) = ((MR_Box) (PtagRval_66));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 3) = ((MR_Box) (Range_70));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 4) = ((MR_Box) (PtagCases_71));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 5) = ((MR_Box) (Default_72));
      MR_hl_field(MR_mktag(3), SwitchStmt0_73, 6) = ((MR_Box) (Context_15));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_73, &SwitchStmt_74, STATE_VARIABLE_Info_42_80, STATE_VARIABLE_Info_28);
    Var_84 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_74));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_84));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word Var_3,
  MR_Word CanFail_4,
  MR_Word CodeModel_5,
  MR_Word PtagCountMap_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_9,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
    *STATE_VARIABLE_ReachableConstVarMaps_10 = STATE_VARIABLE_ReachableConstVarMaps_0_9;
  }
  else
  {
    MR_Word Ptag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ptags_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MLDS_Case_33;
    MR_Word MLDS_Cases_34;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_41_41;
    MR_Word STATE_VARIABLE_Info_42_42;

    ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(Ptag_25, CodeMap_2, Var_3, CanFail_4, CodeModel_5, PtagCountMap_6, Context_7, &MLDS_Case_33, STATE_VARIABLE_ReachableConstVarMaps_0_9, &STATE_VARIABLE_ReachableConstVarMaps_41_41, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_42_42);
    ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(Ptags_26, CodeMap_2, Var_3, CanFail_4, CodeModel_5, PtagCountMap_6, Context_7, &MLDS_Cases_34, STATE_VARIABLE_ReachableConstVarMaps_41_41, STATE_VARIABLE_ReachableConstVarMaps_10, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_Case_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Cases_34));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Cond_4;

  conv1_Cond_4 = ml_backend__ml_tag_switch__make_ptag_match_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Cond_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__433__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__408__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(
  MR_Word PtagCase_13,
  MR_Word CodeMap_14,
  MR_Word Var_15,
  MR_Word CanFail_16,
  MR_Word CodeModel_17,
  MR_Word PtagCountMap_18,
  MR_Word Context_19,
  MR_Word * MLDS_Case_20,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_48,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_bool succeeded;
  MR_Word MainPtag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_13, (MR_Integer) 0))));
  MR_Word OtherPtags_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_13, (MR_Integer) 1))));
  MR_Word SecTagLocn_25;
  MR_Word GoalMap_26;
  MR_Word CountInfo_27;
  MR_Word SecTagLocn1_28;
  MR_Integer MaxSecondary_29;
  MR_Word GoalList_30;
  MR_Word Stmt_33;
  MR_Word MainPtagMatch_46;
  MR_Word OtherPtagMatches_47;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_13, (MR_Integer) 2))));
  MR_Word Var_53;
  MR_Box conv0_CountInfo_27;

  SecTagLocn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
  GoalMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1))));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[2]), PtagCountMap_18, ((MR_Box) (MainPtag_23)), &conv0_CountInfo_27);
  CountInfo_27 = ((MR_Word) (conv0_CountInfo_27));
  SecTagLocn1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_27, (MR_Integer) 0))));
  MaxSecondary_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_27, (MR_Integer) 1))));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1));
    MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (SecTagLocn_25));
    MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (SecTagLocn1_28));
  }
  mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/12", (MR_String) "secondary tag locations differ");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), GoalMap_26, &GoalList_30);
  switch (MR_tag((MR_Word) SecTagLocn_25)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(SecTagLocn_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          if ((GoalList_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/12", (MR_String) "no goal for non-shared tag");
              return;
            }
          else
          {
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_30, (MR_Integer) 1))));
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_30, (MR_Integer) 0))));

            if ((Var_89 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word CaseId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 1))));

              ml_backend__ml_tag_switch__lookup_code_map_8_p_0(CodeMap_14, CaseId_32, CodeModel_17, &Stmt_33, STATE_VARIABLE_ReachableConstVarMaps_0_48, STATE_VARIABLE_ReachableConstVarMaps_49, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/12", (MR_String) "more than one goal for non-shared tag");
                return;
              }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word CaseCanFail_41;
            MR_Word GroupedGoalList_44;
            MR_Word Var_56;
            MR_Word RevMap_93;
            MR_Word Var_94;
            MR_Word CaseId_77;
            MR_Word Var_61;
            MR_Word Var_62;

            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_2));
              MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (OtherPtags_24));
              MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/12", (MR_String) ">1 ptag with secondary tag");
            switch (CanFail_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer GoalCount_42;
                  MR_Integer FullGoalCount_43;

                  mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[3]), GoalList_30, &GoalCount_42);
                  FullGoalCount_43 = (MR_Integer) ((MR_Unsigned) MaxSecondary_29 + (MR_Unsigned) 1);
                  succeeded = (FullGoalCount_43 == GoalCount_42);
                  if (succeeded)
                    CaseCanFail_41 = (MR_Integer) 1;
                  else
                    CaseCanFail_41 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                CaseCanFail_41 = (MR_Integer) 1;
                break;
            }
            Var_94 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0));
            ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(GoalList_30, Var_94, &RevMap_93);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), RevMap_93, &GroupedGoalList_44);
            succeeded = (CaseCanFail_41 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (GroupedGoalList_44 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_44, (MR_Integer) 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_44, (MR_Integer) 1))));
                succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  CaseId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              ml_backend__ml_tag_switch__lookup_code_map_8_p_0(CodeMap_14, CaseId_77, CodeModel_17, &Stmt_33, STATE_VARIABLE_ReachableConstVarMaps_0_48, STATE_VARIABLE_ReachableConstVarMaps_49, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
            else
              ml_backend__ml_tag_switch__gen_stag_switch_13_p_0(GroupedGoalList_44, CodeMap_14, MainPtag_23, SecTagLocn_25, Var_15, CodeModel_17, CaseCanFail_41, Context_19, &Stmt_33, STATE_VARIABLE_ReachableConstVarMaps_0_48, STATE_VARIABLE_ReachableConstVarMaps_49, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word CaseCanFail_41;
        MR_Word GroupedGoalList_44;
        MR_Word Var_56;
        MR_Word RevMap_93;
        MR_Word Var_94;
        MR_Word CaseId_77;
        MR_Word Var_61;
        MR_Word Var_62;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (OtherPtags_24));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/12", (MR_String) ">1 ptag with secondary tag");
        switch (CanFail_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer GoalCount_42;
              MR_Integer FullGoalCount_43;

              mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[3]), GoalList_30, &GoalCount_42);
              FullGoalCount_43 = (MR_Integer) ((MR_Unsigned) MaxSecondary_29 + (MR_Unsigned) 1);
              succeeded = (FullGoalCount_43 == GoalCount_42);
              if (succeeded)
                CaseCanFail_41 = (MR_Integer) 1;
              else
                CaseCanFail_41 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            CaseCanFail_41 = (MR_Integer) 1;
            break;
        }
        Var_94 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0));
        ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(GoalList_30, Var_94, &RevMap_93);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), RevMap_93, &GroupedGoalList_44);
        succeeded = (CaseCanFail_41 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (GroupedGoalList_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_44, (MR_Integer) 0))));
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_44, (MR_Integer) 1))));
            succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CaseId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          ml_backend__ml_tag_switch__lookup_code_map_8_p_0(CodeMap_14, CaseId_77, CodeModel_17, &Stmt_33, STATE_VARIABLE_ReachableConstVarMaps_0_48, STATE_VARIABLE_ReachableConstVarMaps_49, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
        else
          ml_backend__ml_tag_switch__gen_stag_switch_13_p_0(GroupedGoalList_44, CodeMap_14, MainPtag_23, SecTagLocn_25, Var_15, CodeModel_17, CaseCanFail_41, Context_19, &Stmt_33, STATE_VARIABLE_ReachableConstVarMaps_0_48, STATE_VARIABLE_ReachableConstVarMaps_49, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
      }
      break;
  }
  MainPtagMatch_46 = ml_backend__ml_tag_switch__make_ptag_match_1_f_0(MainPtag_23);
  OtherPtagMatches_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[7]), OtherPtags_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MLDS_Case_20 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainPtagMatch_46));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherPtagMatches_47));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmt_33));
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_13_p_0(
  MR_Word Cases_14,
  MR_Word CodeMap_15,
  MR_Word Ptag_16,
  MR_Word StagLocn_17,
  MR_Word Var_18,
  MR_Word CodeModel_19,
  MR_Word CanFail_20,
  MR_Word Context_21,
  MR_Word * Stmt_22,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_38,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_Word VarType_25;
  MR_Word VarLval_26;
  MR_Word VarRval_27;
  MR_Word StagRval_28;
  MR_Word StagCases0_33;
  MR_Word StagCases_34;
  MR_Word Default_35;
  MR_Word SwitchStmt_37;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_57_57;

  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_40, Var_18, &VarType_25);
  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_40, Var_18, &VarLval_26);
  {
    VarRval_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), VarRval_27, 0) = ((MR_Box) (VarLval_26));
  }
  switch (MR_tag((MR_Word) StagLocn_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(StagLocn_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_stag_switch\'/13", (MR_String) "no stag");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            StagRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), StagRval_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), StagRval_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), StagRval_28, 2) = ((MR_Box) (VarRval_27));
          }
          break;
        case (MR_Integer) 3:
          ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_40, VarType_25, VarRval_27, Ptag_16, &StagRval_28);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned Mask_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagLocn_17, (MR_Integer) 1))));
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;

        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_50, 2) = ((MR_Box) (VarRval_27));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Mask_30));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          StagRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StagRval_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), StagRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[8])));
          MR_hl_field(MR_mktag(3), StagRval_28, 2) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(3), StagRval_28, 3) = ((MR_Box) (Var_52));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StagWordRval_32;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Unsigned Mask_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StagLocn_17, (MR_Integer) 1))));

        ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_40, VarType_25, VarRval_27, Ptag_16, &StagWordRval_32);
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Mask_61));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          StagRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StagRval_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), StagRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[8])));
          MR_hl_field(MR_mktag(3), StagRval_28, 2) = ((MR_Box) (StagWordRval_32));
          MR_hl_field(MR_mktag(3), StagRval_28, 3) = ((MR_Box) (Var_46));
        }
      }
      break;
  }
  ml_backend__ml_tag_switch__gen_stag_cases_8_p_0(Cases_14, CodeMap_15, CodeModel_19, &StagCases0_33, STATE_VARIABLE_ReachableConstVarMaps_0_38, STATE_VARIABLE_ReachableConstVarMaps_39, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_56_56);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), StagCases0_33, &StagCases_34);
  ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_20, CodeModel_19, Context_21, &Default_35, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_57_57);
  {
    SwitchStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[7])));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 2) = ((MR_Box) (StagRval_28));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 4) = ((MR_Box) (StagCases_34));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 5) = ((MR_Box) (Default_35));
    MR_hl_field(MR_mktag(3), SwitchStmt_37, 6) = ((MR_Box) (Context_21));
  }
  ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt_37, Stmt_22, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_41);
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_tag_switch__make_match_value_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_5,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_ReachableConstVarMaps_6 = STATE_VARIABLE_ReachableConstVarMaps_0_5;
  }
  else
  {
    MR_Word Group_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Groups_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_21;
    MR_Word Cases_22;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word CaseId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_17, (MR_Integer) 0))));
    MR_Word Stags_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_17, (MR_Integer) 1))));
    MR_Integer FirstStag_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stags_44, (MR_Integer) 0))));
    MR_Word RevLaterStags_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stags_44, (MR_Integer) 1))));
    MR_Word LaterStags_47;
    MR_Word FirstMatch_48;
    MR_Word LaterMatches_49;
    MR_Word Stmt_50;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word MaybeCode_71;
    MR_Box conv1_MaybeCode_71;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLaterStags_46, &LaterStags_47);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (FirstStag_45));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      FirstMatch_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMatch_48, 0) = ((MR_Box) (Var_59));
    }
    LaterMatches_49 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[6]), LaterStags_47);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_2, ((MR_Box) (CaseId_43)), &conv1_MaybeCode_71);
    MaybeCode_71 = ((MR_Word) (conv1_MaybeCode_71));
    if (((MR_tag((MR_Word) MaybeCode_71)) == (MR_Integer) 1))
    {
      MR_Word EntryPackedArgsMap_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_71, (MR_Integer) 0))));
      MR_Word Goal_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_71, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_22_74;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_72, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_22_74);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_3, Goal_73, &Stmt_50, STATE_VARIABLE_ReachableConstVarMaps_0_5, &STATE_VARIABLE_ReachableConstVarMaps_29_29, STATE_VARIABLE_Info_22_74, &STATE_VARIABLE_Info_30_30);
    }
    else
    {
      Stmt_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCode_71, (MR_Integer) 0))));
      STATE_VARIABLE_ReachableConstVarMaps_29_29 = STATE_VARIABLE_ReachableConstVarMaps_0_5;
      STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_7;
    }
    {
      Case_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_21, 0) = ((MR_Box) (FirstMatch_48));
      MR_hl_field(MR_mktag(0), Case_21, 1) = ((MR_Box) (LaterMatches_49));
      MR_hl_field(MR_mktag(0), Case_21, 2) = ((MR_Box) (Stmt_50));
    }
    ml_backend__ml_tag_switch__gen_stag_cases_8_p_0(Groups_18, CodeMap_2, CodeModel_3, &Cases_22, STATE_VARIABLE_ReachableConstVarMaps_29_29, STATE_VARIABLE_ReachableConstVarMaps_6, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_22));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMap_0_2,
  MR_Word * STATE_VARIABLE_RevMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMap_3 = STATE_VARIABLE_RevMap_0_2;
    else
    {
      MR_Word Entry_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entries_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Stag_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 0))));
      MR_Word CaseId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMap_19_19;
      MR_Word OldEntry_12;
      MR_Box conv0_OldEntry_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_2;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), STATE_VARIABLE_RevMap_0_2, ((MR_Box) (CaseId_11)), &conv0_OldEntry_12);
      if (succeeded)
      {
        OldEntry_12 = ((MR_Word) (conv0_OldEntry_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer OldFirstStag_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldEntry_12, (MR_Integer) 0))));
        MR_Word OldLaterStags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_12, (MR_Integer) 1))));
        MR_Word NewEntry_15;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Stag_10));
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (OldLaterStags_14));
        }
        {
          NewEntry_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewEntry_15, 0) = ((MR_Box) (OldFirstStag_13));
          MR_hl_field(MR_mktag(0), NewEntry_15, 1) = ((MR_Box) (Var_18));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), ((MR_Box) (CaseId_11)), ((MR_Box) (NewEntry_15)), STATE_VARIABLE_RevMap_0_2, &STATE_VARIABLE_RevMap_19_19);
      }
      else
      {
        MR_Word NewEntry_23;

        {
          NewEntry_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewEntry_23, 0) = ((MR_Box) (Stag_10));
          MR_hl_field(MR_mktag(0), NewEntry_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), ((MR_Box) (CaseId_11)), ((MR_Box) (NewEntry_23)), STATE_VARIABLE_RevMap_0_2, &STATE_VARIABLE_RevMap_19_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entries_8;
      next_value_of_STATE_VARIABLE_RevMap_0_2 = STATE_VARIABLE_RevMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMap_0_2 = next_value_of_STATE_VARIABLE_RevMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_8_p_0(
  MR_Word CodeMap_9,
  MR_Word CaseId_10,
  MR_Word CodeModel_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_18,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word MaybeCode_15;
  MR_Box conv0_MaybeCode_15;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_9, ((MR_Box) (CaseId_10)), &conv0_MaybeCode_15);
  MaybeCode_15 = ((MR_Word) (conv0_MaybeCode_15));
  if (((MR_tag((MR_Word) MaybeCode_15)) == (MR_Integer) 1))
  {
    MR_Word EntryPackedArgsMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_15, (MR_Integer) 0))));
    MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_22_22;

    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_16, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_22_22);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_11, Goal_17, Stmt_12, STATE_VARIABLE_ReachableConstVarMaps_0_18, STATE_VARIABLE_ReachableConstVarMaps_19, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_21);
  }
  else
  {
    *Stmt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCode_15, (MR_Integer) 0))));
    *STATE_VARIABLE_ReachableConstVarMaps_19 = STATE_VARIABLE_ReachableConstVarMaps_0_18;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Word Ptag_3)
{
  MR_Word Cond_4;
  uint8_t PtagUint8_5 = (uint8_t) (Ptag_3);
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;

  Var_8 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_5);
  {
    Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Var_8));
  }
  {
    Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
  }
  {
    Cond_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Cond_4, 0) = ((MR_Box) (Var_6));
  }
  return Cond_4;
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____code_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____code_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____may_use_tag_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____may_use_tag_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____maybe_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____maybe_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____stags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____stags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_tag_switch__init(void)
{
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0);
}

void mercury__ml_backend__ml_tag_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_tag_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_tag_switch.
