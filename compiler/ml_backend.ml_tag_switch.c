/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2026-02-12
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.tag_switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

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

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_will_gen_aux_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_will_gen_aux_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_has_local_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_has_local_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stmt_contains_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stmt_contains_label_0_0(
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
  MR_Word HeadVar__1_1,
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
  MR_Unsigned Sectag_3);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Word Ptag_3);

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
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_10_p_0_1(
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
  MR_Word Var_1,
  MR_Word VarEntry_2,
  MR_Word CanFail_3,
  MR_Word CodeModel_4,
  MR_Word Context_5,
  MR_Word CodeMap_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_9,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(
  MR_Word Var_13,
  MR_Word VarEntry_14,
  MR_Word CanFail_15,
  MR_Word CodeModel_16,
  MR_Word Context_17,
  MR_Word CodeMap_18,
  MR_Word PtagGroup_19,
  MR_Word * MLDS_Case_20,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_40,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_5,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

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


static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[8][3];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[7][2];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][5];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][15];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[3][10];




static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[8][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[3])),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[4]))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[7][2] = {
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
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row   1 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0) }
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0) }
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

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0) };

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

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1] = { &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0 };

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1] = { &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1 };

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[2]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    ml_backend__mlds____Compare____mlds_stmt_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
  MR_Unsigned Sectag_3)
{
  MR_Word Match_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Integer Var_7;

  Var_7 = mercury__uint__cast_to_int_1_f_0(Sectag_3);
  {
    Var_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_6, 0) = ((MR_Box) (Var_7));
  }
  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (Var_6));
  }
  {
    Match_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Match_4, 0) = ((MR_Box) (Var_5));
  }
  return Match_4;
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
    Var_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_7, 0) = ((MR_Box) (Var_8));
  }
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (Var_7));
  }
  {
    Cond_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Cond_4, 0) = ((MR_Box) (Var_6));
  }
  return Cond_4;
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
  MR_Word FuncBody_17 = ((MR_Word) ((MR_hl_field(0, FuncDefn_8, 5))));

  if ((FuncBody_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_HasLabel_22 = STATE_VARIABLE_HasLabel_0_21;
    *STATE_VARIABLE_HasAuxPred_24 = STATE_VARIABLE_HasAuxPred_0_23;
    *STATE_VARIABLE_HasLocalVars_26 = STATE_VARIABLE_HasLocalVars_0_25;
  }
  else
  {
    MR_Word Stmt_20 = ((MR_Word) ((MR_hl_field(1, FuncBody_17, 0))));

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
  MR_Word Stmt_14 = ((MR_Word) ((MR_hl_field(0, Case_8, 2))));

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
  OtherTaggedConsIds_24 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 1))));
  *CaseId_16 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 2))));
  Goal_25 = ((MR_Word) ((MR_hl_field(0, TaggedCase_15, 3))));
  ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_13, Goal_25, &Stmt_26, STATE_VARIABLE_ReachableConstVarMaps_0_36, STATE_VARIABLE_ReachableConstVarMaps_37, Info1_22, &Info2_27);
  if ((OtherTaggedConsIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MaybeCode_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeCode_28, 0) = ((MR_Box) (Stmt_26));
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
        MaybeCode_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCode_28, 0) = ((MR_Box) (EntryPackedArgsMap_14));
        MR_hl_field(1, MaybeCode_28, 1) = ((MR_Box) (Goal_25));
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
          MaybeCode_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeCode_28, 0) = ((MR_Box) (EntryPackedArgsMap_14));
          MR_hl_field(1, MaybeCode_28, 1) = ((MR_Box) (Goal_25));
        }
        *Info_21 = Info1_22;
      }
      else
      {
        {
          MaybeCode_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeCode_28, 0) = ((MR_Box) (Stmt_26));
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
          MR_Word LocalVarDefns_12 = ((MR_Word) ((MR_hl_field(0, Stmt_8, 0))));
          MR_Word FuncDefns_13 = ((MR_Word) ((MR_hl_field(0, Stmt_8, 1))));
          MR_Word BlockStmts_14 = ((MR_Word) ((MR_hl_field(0, Stmt_8, 2))));
          MR_Word STATE_VARIABLE_HasLocalVars_1_52;
          MR_Word STATE_VARIABLE_HasLabel_1_55;
          MR_Word STATE_VARIABLE_HasAuxPred_2_56;
          MR_Word STATE_VARIABLE_HasLocalVars_2_57;
          MR_Box conv11_STATE_VARIABLE_HasLabel_47;
          MR_Box conv10_STATE_VARIABLE_HasAuxPred_49;
          MR_Box conv9_STATE_VARIABLE_HasLocalVars_51;

          if ((LocalVarDefns_12 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_HasLocalVars_1_52 = STATE_VARIABLE_HasLocalVars_0_50;
          else
            STATE_VARIABLE_HasLocalVars_1_52 = (MR_Integer) 1;
          if ((FuncDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_HasLabel_1_55 = STATE_VARIABLE_HasLabel_0_46;
            STATE_VARIABLE_HasAuxPred_2_56 = STATE_VARIABLE_HasAuxPred_0_48;
            STATE_VARIABLE_HasLocalVars_2_57 = STATE_VARIABLE_HasLocalVars_1_52;
          }
          else
          {
            MR_Box conv5_STATE_VARIABLE_HasLabel_1_55;
            MR_Box conv4_STATE_VARIABLE_HasAuxPred_2_56;
            MR_Box conv3_STATE_VARIABLE_HasLocalVars_2_57;

            mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[5]), FuncDefns_13, ((MR_Box) (STATE_VARIABLE_HasLabel_0_46)), &conv5_STATE_VARIABLE_HasLabel_1_55, ((MR_Box) ((MR_Integer) 1)), &conv4_STATE_VARIABLE_HasAuxPred_2_56, ((MR_Box) (STATE_VARIABLE_HasLocalVars_1_52)), &conv3_STATE_VARIABLE_HasLocalVars_2_57);
            STATE_VARIABLE_HasLabel_1_55 = ((MR_Word) (conv5_STATE_VARIABLE_HasLabel_1_55));
            STATE_VARIABLE_HasAuxPred_2_56 = ((MR_Word) (conv4_STATE_VARIABLE_HasAuxPred_2_56));
            STATE_VARIABLE_HasLocalVars_2_57 = ((MR_Word) (conv3_STATE_VARIABLE_HasLocalVars_2_57));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[6]), BlockStmts_14, ((MR_Box) (STATE_VARIABLE_HasLabel_1_55)), &conv11_STATE_VARIABLE_HasLabel_47, ((MR_Box) (STATE_VARIABLE_HasAuxPred_2_56)), &conv10_STATE_VARIABLE_HasAuxPred_49, ((MR_Box) (STATE_VARIABLE_HasLocalVars_2_57)), &conv9_STATE_VARIABLE_HasLocalVars_51);
          *STATE_VARIABLE_HasLabel_47 = ((MR_Word) (conv11_STATE_VARIABLE_HasLabel_47));
          *STATE_VARIABLE_HasAuxPred_49 = ((MR_Word) (conv10_STATE_VARIABLE_HasAuxPred_49));
          *STATE_VARIABLE_HasLocalVars_51 = ((MR_Word) (conv9_STATE_VARIABLE_HasLocalVars_51));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BodyStmt_22 = ((MR_Word) ((MR_hl_field(1, Stmt_8, 2))));
          MR_Word next_value_of_Stmt_8 = BodyStmt_22;

          // direct tailcall eliminated
          ;
          Stmt_8 = next_value_of_Stmt_8;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt_25 = ((MR_Word) ((MR_hl_field(2, Stmt_8, 1))));
          MR_Word MaybeElseStmt_26 = ((MR_Word) ((MR_hl_field(2, Stmt_8, 2))));
          MR_Word STATE_VARIABLE_HasLabel_4_65;
          MR_Word STATE_VARIABLE_HasAuxPred_5_66;
          MR_Word STATE_VARIABLE_HasLocalVars_5_67;

          ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(ThenStmt_25, STATE_VARIABLE_HasLabel_0_46, &STATE_VARIABLE_HasLabel_4_65, STATE_VARIABLE_HasAuxPred_0_48, &STATE_VARIABLE_HasAuxPred_5_66, STATE_VARIABLE_HasLocalVars_0_50, &STATE_VARIABLE_HasLocalVars_5_67);
          if ((MaybeElseStmt_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_4_65;
            *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_5_66;
            *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_5_67;
          }
          else
          {
            MR_Word ElseStmt_27 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt_26, 0))));
            MR_Word next_value_of_Stmt_8 = ElseStmt_27;
            MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_4_65;
            MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_5_66;
            MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_5_67;

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
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_31 = ((MR_Word) ((MR_hl_field(3, Stmt_8, 4))));
              MR_Word Default_32 = ((MR_Word) ((MR_hl_field(3, Stmt_8, 5))));
              MR_Word STATE_VARIABLE_HasLabel_6_72;
              MR_Word STATE_VARIABLE_HasAuxPred_7_73;
              MR_Word STATE_VARIABLE_HasLocalVars_7_74;
              MR_Box conv17_STATE_VARIABLE_HasLabel_6_72;
              MR_Box conv16_STATE_VARIABLE_HasAuxPred_7_73;
              MR_Box conv15_STATE_VARIABLE_HasLocalVars_7_74;

              mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_contains_label_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_will_gen_aux_pred_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stmt_has_local_vars_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[7]), Cases_31, ((MR_Box) (STATE_VARIABLE_HasLabel_0_46)), &conv17_STATE_VARIABLE_HasLabel_6_72, ((MR_Box) (STATE_VARIABLE_HasAuxPred_0_48)), &conv16_STATE_VARIABLE_HasAuxPred_7_73, ((MR_Box) (STATE_VARIABLE_HasLocalVars_0_50)), &conv15_STATE_VARIABLE_HasLocalVars_7_74);
              STATE_VARIABLE_HasLabel_6_72 = ((MR_Word) (conv17_STATE_VARIABLE_HasLabel_6_72));
              STATE_VARIABLE_HasAuxPred_7_73 = ((MR_Word) (conv16_STATE_VARIABLE_HasAuxPred_7_73));
              STATE_VARIABLE_HasLocalVars_7_74 = ((MR_Word) (conv15_STATE_VARIABLE_HasLocalVars_7_74));
              switch (MR_tag((MR_Word) Default_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_32)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_6_72;
                        *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_7_73;
                        *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_7_74;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_HasLabel_47 = STATE_VARIABLE_HasLabel_6_72;
                        *STATE_VARIABLE_HasAuxPred_49 = STATE_VARIABLE_HasAuxPred_7_73;
                        *STATE_VARIABLE_HasLocalVars_51 = STATE_VARIABLE_HasLocalVars_7_74;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DefaultStmt_33 = ((MR_Word) ((MR_hl_field(1, Default_32, 0))));
                    MR_Word next_value_of_Stmt_8 = DefaultStmt_33;
                    MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_6_72;
                    MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_7_73;
                    MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_7_74;

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
              MR_Word HandlerStmt_35 = ((MR_Word) ((MR_hl_field(3, Stmt_8, 3))));
              MR_Word STATE_VARIABLE_HasLabel_8_79;
              MR_Word STATE_VARIABLE_HasAuxPred_10_80;
              MR_Word STATE_VARIABLE_HasLocalVars_9_81;
              MR_Word BodyStmt_95 = ((MR_Word) ((MR_hl_field(3, Stmt_8, 2))));
              MR_Word next_value_of_Stmt_8;
              MR_Word next_value_of_STATE_VARIABLE_HasLabel_0_46;
              MR_Word next_value_of_STATE_VARIABLE_HasAuxPred_0_48;
              MR_Word next_value_of_STATE_VARIABLE_HasLocalVars_0_50;

              ml_backend__ml_tag_switch__acc_dup_properties_of_stmt_7_p_0(BodyStmt_95, STATE_VARIABLE_HasLabel_0_46, &STATE_VARIABLE_HasLabel_8_79, (MR_Integer) 1, &STATE_VARIABLE_HasAuxPred_10_80, STATE_VARIABLE_HasLocalVars_0_50, &STATE_VARIABLE_HasLocalVars_9_81);
              // direct tailcall eliminated
              ;
              next_value_of_Stmt_8 = HandlerStmt_35;
              next_value_of_STATE_VARIABLE_HasLabel_0_46 = STATE_VARIABLE_HasLabel_8_79;
              next_value_of_STATE_VARIABLE_HasAuxPred_0_48 = STATE_VARIABLE_HasAuxPred_10_80;
              next_value_of_STATE_VARIABLE_HasLocalVars_0_50 = STATE_VARIABLE_HasLocalVars_9_81;
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
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_10_p_0_1(
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

  ml_backend__ml_tag_switch__gen_tagged_case_code_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_CaseId_16, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_CodeMap_35, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ReachableConstVarMaps_37, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_MayUseTagSwitch_39, ((MR_Word) (wrapper_arg_9)), &conv0_Info_21);
  *wrapper_arg_2 = ((MR_Box) (conv4_CaseId_16));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_CodeMap_35));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ReachableConstVarMaps_37));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_MayUseTagSwitch_39));
  *wrapper_arg_10 = ((MR_Box) (conv0_Info_21));
}

MR_bool MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_10_p_0(
  MR_Word Var_11,
  MR_Word VarEntry_12,
  MR_Word TaggedCases_13,
  MR_Word CodeModel_14,
  MR_Word CanFail_15,
  MR_Word Context_16,
  MR_Word EntryPackedArgsMap_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_46_73;
  MR_Word ModuleInfo_20;
  MR_Word VarType_21;
  MR_Word CodeMap_22;
  MR_Word ReachableConstVarMaps0_23;
  MR_Word MayUseTagSwitch_24;
  MR_Word PtagCaseGroups_25;
  uint8_t MaxPtagUint8_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_Info_1_35;
  MR_Word VarLval_54;
  MR_Word VarRval_55;
  MR_Word PtagRval_56;
  MR_Word MLDS_Cases0_57;
  MR_Word ReachableConstVarMaps_58;
  MR_Word Range_59;
  MR_Word MLDS_Cases_60;
  MR_Word Default_61;
  MR_Word SwitchStmt0_62;
  MR_Word SwitchStmt_63;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_Info_1_65;
  MR_Word STATE_VARIABLE_Info_2_66;
  MR_Integer Var_67;
  MR_Integer Var_68;
  MR_Word STATE_VARIABLE_Info_3_69;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word _CaseRepGoalMap_26;
  MR_Integer _NumPtagsUsed_27;
  MR_Box conv8_CodeMap_22;
  MR_Box conv7_ReachableConstVarMaps0_23;
  MR_Box conv6_MayUseTagSwitch_24;
  MR_Box conv5_STATE_VARIABLE_Info_1_35;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_29, &ModuleInfo_20);
  VarType_21 = ((MR_Word) ((MR_hl_field(0, VarEntry_12, 1))));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_4[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (CodeModel_14));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (EntryPackedArgsMap_17));
  }
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0));
  backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), ModuleInfo_20, Var_31, VarType_21, TaggedCases_13, ((MR_Box) (Var_32)), &conv8_CodeMap_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ReachableConstVarMaps0_23, ((MR_Box) ((MR_Integer) 1)), &conv6_MayUseTagSwitch_24, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv5_STATE_VARIABLE_Info_1_35, &PtagCaseGroups_25, &_CaseRepGoalMap_26, &_NumPtagsUsed_27, &MaxPtagUint8_28);
  CodeMap_22 = ((MR_Word) (conv8_CodeMap_22));
  ReachableConstVarMaps0_23 = ((MR_Word) (conv7_ReachableConstVarMaps0_23));
  MayUseTagSwitch_24 = ((MR_Word) (conv6_MayUseTagSwitch_24));
  STATE_VARIABLE_Info_1_35 = ((MR_Word) (conv5_STATE_VARIABLE_Info_1_35));
  succeeded = (MayUseTagSwitch_24 == (MR_Integer) 1);
  if (succeeded)
  {
    ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_1_35, Var_11, VarEntry_12, &VarLval_54);
    Var_64 = (MR_Word) ((MR_Unsigned) 0U);
    {
      VarRval_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, VarRval_55, 0) = ((MR_Box) (VarLval_54));
    }
    {
      PtagRval_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, PtagRval_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, PtagRval_56, 1) = ((MR_Box) (Var_64));
      MR_hl_field(3, PtagRval_56, 2) = ((MR_Box) (VarRval_55));
    }
    ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(Var_11, VarEntry_12, CanFail_15, CodeModel_14, Context_16, CodeMap_22, PtagCaseGroups_25, &MLDS_Cases0_57, ReachableConstVarMaps0_23, &ReachableConstVarMaps_58, STATE_VARIABLE_Info_1_35, &STATE_VARIABLE_Info_1_65);
    ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_58, STATE_VARIABLE_Info_1_65, &STATE_VARIABLE_Info_2_66);
    Var_67 = (MR_Integer) 0;
    Var_68 = mercury__uint8__cast_to_int_1_f_0(MaxPtagUint8_28);
    TypeCtorInfo_46_73 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0);
    {
      Range_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Range_59, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Range_59, 1) = ((MR_Box) (Var_68));
    }
    mercury__list__sort_2_p_0(TypeCtorInfo_46_73, MLDS_Cases0_57, &MLDS_Cases_60);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_15, CodeModel_14, Context_16, &Default_61, STATE_VARIABLE_Info_2_66, &STATE_VARIABLE_Info_3_69);
    Var_70 = (MR_Word) (MR_mkword(3, &ml_backend__ml_tag_switch_scalar_common_2[5]));
    {
      SwitchStmt0_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SwitchStmt0_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SwitchStmt0_62, 1) = ((MR_Box) (Var_70));
      MR_hl_field(3, SwitchStmt0_62, 2) = ((MR_Box) (PtagRval_56));
      MR_hl_field(3, SwitchStmt0_62, 3) = ((MR_Box) (Range_59));
      MR_hl_field(3, SwitchStmt0_62, 4) = ((MR_Box) (MLDS_Cases_60));
      MR_hl_field(3, SwitchStmt0_62, 5) = ((MR_Box) (Default_61));
      MR_hl_field(3, SwitchStmt0_62, 6) = ((MR_Box) (Context_16));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_62, &SwitchStmt_63, STATE_VARIABLE_Info_3_69, STATE_VARIABLE_Info_30);
    Var_72 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SwitchStmt_63));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_72));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(
  MR_Word Var_1,
  MR_Word VarEntry_2,
  MR_Word CanFail_3,
  MR_Word CodeModel_4,
  MR_Word Context_5,
  MR_Word CodeMap_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_9,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
    *STATE_VARIABLE_ReachableConstVarMaps_10 = STATE_VARIABLE_ReachableConstVarMaps_0_9;
  }
  else
  {
    MR_Word PtagCase_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
    MR_Word PtagsCases_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word MLDS_Case_33;
    MR_Word MLDS_Cases_34;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_1_41;
    MR_Word STATE_VARIABLE_Info_1_42;

    ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(Var_1, VarEntry_2, CanFail_3, CodeModel_4, Context_5, CodeMap_6, PtagCase_31, &MLDS_Case_33, STATE_VARIABLE_ReachableConstVarMaps_0_9, &STATE_VARIABLE_ReachableConstVarMaps_1_41, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_1_42);
    ml_backend__ml_tag_switch__gen_ptag_cases_12_p_0(Var_1, VarEntry_2, CanFail_3, CodeModel_4, Context_5, CodeMap_6, PtagsCases_32, &MLDS_Cases_34, STATE_VARIABLE_ReachableConstVarMaps_1_41, STATE_VARIABLE_ReachableConstVarMaps_10, STATE_VARIABLE_Info_1_42, STATE_VARIABLE_Info_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MLDS_Case_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (MLDS_Cases_34));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0_1(
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

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_12_p_0(
  MR_Word Var_13,
  MR_Word VarEntry_14,
  MR_Word CanFail_15,
  MR_Word CodeModel_16,
  MR_Word Context_17,
  MR_Word CodeMap_18,
  MR_Word PtagGroup_19,
  MR_Word * MLDS_Case_20,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_40,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_Word Stmt_28;
  MR_Word MainPtagMatch_29;
  MR_Word OtherPtagMatches_30;

  if (((MR_tag((MR_Word) PtagGroup_19)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_23 = ((MR_Word) ((MR_hl_field(0, PtagGroup_19, 0))));
    MR_Word MainPtag_24 = ((MR_Word) ((MR_hl_field(0, WholeInfo_23, 0))));
    MR_Word OtherPtags_25 = ((MR_Word) ((MR_hl_field(0, WholeInfo_23, 1))));
    MR_Word CaseId_27 = ((MR_Word) ((MR_hl_field(0, WholeInfo_23, 3))));
    MR_Word MaybeCode_56;
    uint8_t PtagUint8_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Integer Var_65;
    MR_Box conv0_MaybeCode_56;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_18, ((MR_Box) (CaseId_27)), &conv0_MaybeCode_56);
    MaybeCode_56 = ((MR_Word) (conv0_MaybeCode_56));
    if (((MR_tag((MR_Word) MaybeCode_56)) == (MR_Integer) 1))
    {
      MR_Word EntryPackedArgsMap_57 = ((MR_Word) ((MR_hl_field(1, MaybeCode_56, 0))));
      MR_Word Goal_58 = ((MR_Word) ((MR_hl_field(1, MaybeCode_56, 1))));
      MR_Word STATE_VARIABLE_Info_1_59;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_57, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_1_59);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_58, &Stmt_28, STATE_VARIABLE_ReachableConstVarMaps_0_40, STATE_VARIABLE_ReachableConstVarMaps_41, STATE_VARIABLE_Info_1_59, STATE_VARIABLE_Info_43);
    }
    else
    {
      Stmt_28 = ((MR_Word) ((MR_hl_field(0, MaybeCode_56, 0))));
      *STATE_VARIABLE_ReachableConstVarMaps_41 = STATE_VARIABLE_ReachableConstVarMaps_0_40;
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
    }
    PtagUint8_62 = (uint8_t) (MainPtag_24);
    Var_65 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_62);
    {
      Var_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_64, 0) = ((MR_Box) (Var_65));
    }
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      MainPtagMatch_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainPtagMatch_29, 0) = ((MR_Box) (Var_63));
    }
    OtherPtagMatches_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[4]), OtherPtags_25);
  }
  else
  {
    MR_Word SharedInfo_31 = ((MR_Word) ((MR_hl_field(1, PtagGroup_19, 0))));
    MR_Word Ptag_32 = ((MR_Word) ((MR_hl_field(0, SharedInfo_31, 0))));
    MR_Word SharedSectagLocn_33 = ((MR_Word) ((MR_hl_field(0, SharedInfo_31, 1))));
    MR_Word SectagSwitchComplete_35 = ((MR_Unsigned) ((MR_hl_field(0, SharedInfo_31, 3))) & (MR_Integer) 1);
    MR_Word CaseIdToSectagsMap_37 = ((MR_Word) ((MR_hl_field(0, SharedInfo_31, 6))));
    MR_Word CaseCanFail_38;
    MR_Word CaseIdToSectagsAL_39;
    uint8_t PtagUint8_66 = (uint8_t) (Ptag_32);
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Integer Var_69;
    MR_Word VarType_70;
    MR_Word VarLval_71;
    MR_Word VarRval_72;
    MR_Word SectagRval_73;
    MR_Word SectagCases0_78;
    MR_Word SectagCases_79;
    MR_Word Default_80;
    MR_Word SwitchStmt_82;
    MR_Word STATE_VARIABLE_Info_1_94;
    MR_Word STATE_VARIABLE_Info_2_95;

    Var_69 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_66);
    {
      Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_68, 0) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      MainPtagMatch_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainPtagMatch_29, 0) = ((MR_Box) (Var_67));
    }
    OtherPtagMatches_30 = (MR_Word) ((MR_Unsigned) 0U);
    switch (CanFail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (SectagSwitchComplete_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            CaseCanFail_38 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            CaseCanFail_38 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        CaseCanFail_38 = (MR_Integer) 1;
        break;
    }
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[2]), CaseIdToSectagsMap_37, &CaseIdToSectagsAL_39);
    VarType_70 = ((MR_Word) ((MR_hl_field(0, VarEntry_14, 1))));
    ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_42, Var_13, VarEntry_14, &VarLval_71);
    {
      VarRval_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, VarRval_72, 0) = ((MR_Box) (VarLval_71));
    }
    switch (MR_tag((MR_Word) SharedSectagLocn_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SharedSectagLocn_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              SectagRval_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SectagRval_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, SectagRval_73, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, SectagRval_73, 2) = ((MR_Box) (VarRval_72));
            }
            break;
          case (MR_Integer) 3:
            ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_42, VarType_70, VarRval_72, Ptag_32, &SectagRval_73);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned Mask_75 = ((MR_Unsigned) ((MR_hl_field(1, SharedSectagLocn_33, 1))));
          MR_Word Var_86;
          MR_Word Var_88;
          MR_Word Var_89;

          {
            Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, Var_86, 2) = ((MR_Box) (VarRval_72));
          }
          {
            Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_89, 1) = ((MR_Box) (Mask_75));
          }
          {
            Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_88, 1) = ((MR_Box) (Var_89));
          }
          {
            SectagRval_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SectagRval_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, SectagRval_73, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_tag_switch_scalar_common_2[6])));
            MR_hl_field(3, SectagRval_73, 2) = ((MR_Box) (Var_86));
            MR_hl_field(3, SectagRval_73, 3) = ((MR_Box) (Var_88));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SectagWordRval_77;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Unsigned Mask_98 = ((MR_Unsigned) ((MR_hl_field(2, SharedSectagLocn_33, 1))));

          ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_42, VarType_70, VarRval_72, Ptag_32, &SectagWordRval_77);
          {
            Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_93, 1) = ((MR_Box) (Mask_98));
          }
          {
            Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            SectagRval_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SectagRval_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, SectagRval_73, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_tag_switch_scalar_common_2[6])));
            MR_hl_field(3, SectagRval_73, 2) = ((MR_Box) (SectagWordRval_77));
            MR_hl_field(3, SectagRval_73, 3) = ((MR_Box) (Var_92));
          }
        }
        break;
    }
    ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0(CaseIdToSectagsAL_39, CodeMap_18, CodeModel_16, &SectagCases0_78, STATE_VARIABLE_ReachableConstVarMaps_0_40, STATE_VARIABLE_ReachableConstVarMaps_41, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_1_94);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), SectagCases0_78, &SectagCases_79);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CaseCanFail_38, CodeModel_16, Context_17, &Default_80, STATE_VARIABLE_Info_1_94, &STATE_VARIABLE_Info_2_95);
    {
      SwitchStmt_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SwitchStmt_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SwitchStmt_82, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_tag_switch_scalar_common_2[5])));
      MR_hl_field(3, SwitchStmt_82, 2) = ((MR_Box) (SectagRval_73));
      MR_hl_field(3, SwitchStmt_82, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SwitchStmt_82, 4) = ((MR_Box) (SectagCases_79));
      MR_hl_field(3, SwitchStmt_82, 5) = ((MR_Box) (Default_80));
      MR_hl_field(3, SwitchStmt_82, 6) = ((MR_Box) (Context_17));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt_82, &Stmt_28, STATE_VARIABLE_Info_2_95, STATE_VARIABLE_Info_43);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MLDS_Case_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainPtagMatch_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherPtagMatches_30));
    MR_hl_field(0, base, 2) = ((MR_Box) (Stmt_28));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_4;

  conv0_Match_4 = ml_backend__ml_tag_switch__make_match_value_1_f_0(((MR_Unsigned) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Match_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0(
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
    MR_Word Group_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Groups_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_21;
    MR_Word Cases_22;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_1_29;
    MR_Word STATE_VARIABLE_Info_1_30;
    MR_Word CaseId_31 = ((MR_Word) ((MR_hl_field(0, Group_17, 0))));
    MR_Unsigned FirstSectag_32;
    MR_Word LaterSectags_33;
    MR_Word FirstMatch_34;
    MR_Word LaterMatches_35;
    MR_Word Stmt_36;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Group_17, 1))));
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_43;
    MR_Word MaybeCode_44;
    MR_Box conv1_MaybeCode_44;

    FirstSectag_32 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, 0))));
    LaterSectags_33 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
    Var_43 = mercury__uint__cast_to_int_1_f_0(FirstSectag_32);
    {
      Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      FirstMatch_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMatch_34, 0) = ((MR_Box) (Var_41));
    }
    LaterMatches_35 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[3]), LaterSectags_33);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_2, ((MR_Box) (CaseId_31)), &conv1_MaybeCode_44);
    MaybeCode_44 = ((MR_Word) (conv1_MaybeCode_44));
    if (((MR_tag((MR_Word) MaybeCode_44)) == (MR_Integer) 1))
    {
      MR_Word EntryPackedArgsMap_45 = ((MR_Word) ((MR_hl_field(1, MaybeCode_44, 0))));
      MR_Word Goal_46 = ((MR_Word) ((MR_hl_field(1, MaybeCode_44, 1))));
      MR_Word STATE_VARIABLE_Info_1_47;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_47);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_3, Goal_46, &Stmt_36, STATE_VARIABLE_ReachableConstVarMaps_0_5, &STATE_VARIABLE_ReachableConstVarMaps_1_29, STATE_VARIABLE_Info_1_47, &STATE_VARIABLE_Info_1_30);
    }
    else
    {
      Stmt_36 = ((MR_Word) ((MR_hl_field(0, MaybeCode_44, 0))));
      STATE_VARIABLE_ReachableConstVarMaps_1_29 = STATE_VARIABLE_ReachableConstVarMaps_0_5;
      STATE_VARIABLE_Info_1_30 = STATE_VARIABLE_Info_0_7;
    }
    {
      Case_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_21, 0) = ((MR_Box) (FirstMatch_34));
      MR_hl_field(0, Case_21, 1) = ((MR_Box) (LaterMatches_35));
      MR_hl_field(0, Case_21, 2) = ((MR_Box) (Stmt_36));
    }
    ml_backend__ml_tag_switch__gen_sectag_cases_8_p_0(Groups_18, CodeMap_2, CodeModel_3, &Cases_22, STATE_VARIABLE_ReachableConstVarMaps_1_29, STATE_VARIABLE_ReachableConstVarMaps_6, STATE_VARIABLE_Info_1_30, STATE_VARIABLE_Info_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_22));
    }
  }
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
  MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_may_use_tag_switch_0);
  MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
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
