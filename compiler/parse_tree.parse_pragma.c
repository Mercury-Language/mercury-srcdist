/*
** Automatically generated from `parse_pragma.m'
** by the Mercury compiler,
** version rotd-2024-02-26
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


// :- module parse_tree.parse_pragma.
// :- implementation.

/*
INIT mercury__parse_tree__parse_pragma__init
ENDINIT
*/

#include "parse_tree.parse_pragma.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_pragma_analysis.mih"
#include "parse_tree.parse_pragma_foreign.mih"
#include "parse_tree.parse_pragma_tabling.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_fs_vl_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_fs_vl_0[2];

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_fs_vl_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_seen_none_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0[2];

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0[2];

static MR_String MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1734__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_96,
  MR_Word HeadVar__3_153);

static MR_String MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1707__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_47,
  MR_Word HeadVar__3_147);

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma____Compare____fs_vl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____fs_vl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma__parse_required_feature_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeReqFeature_6);

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_rhs_tvar_4_p_0(
  MR_Word TVarSet_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_BadRHSTVars_0_9,
  MR_Word * STATE_VARIABLE_BadRHSTVars_10);

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_type_acc_tvars_3_p_0(
  MR_Word VoGType_4,
  MR_Word STATE_VARIABLE_TVars_0_9,
  MR_Word * STATE_VARIABLE_TVars_10);

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_TVars_0_9,
  MR_Word * STATE_VARIABLE_TVars_10);

static void MR_CALL 
parse_tree__parse_pragma__parse_named_pragma_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_named_pragma_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ErrorTerm_11,
  MR_String PragmaName_12,
  MR_Word PragmaTerms_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word ModuleName_9,
  MR_String PragmaName_10,
  MR_Word PragmaTerms_11,
  MR_Word VarSet_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeRTR_7);

static MR_Word MR_CALL 
parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(
  MR_Word Term_4,
  MR_Word Context_5);

static MR_Word MR_CALL 
parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(
  MR_String ThisName_5,
  MR_String EarlierName_6,
  MR_Word Context_7);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet0_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_substs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_substs_8_p_0(
  MR_Word WNHII_9,
  MR_Word ContextPieces_10,
  MR_Word VarSet_11,
  MR_Word HeadTerm_12,
  MR_Word TailTerms_13,
  MR_Word * TVarSubsts_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet0_8,
  MR_Word ErrorTerm_9,
  MR_Word PragmaTerms_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNames_0_3,
  MR_Word * STATE_VARIABLE_VarNames_4);

static void MR_CALL 
parse_tree__parse_pragma__check_type_substs_7_p_0(
  MR_Word TVarSet_1,
  MR_Word ConstraintTVars_2,
  MR_Word ErrorTerm_3,
  MR_Integer SubstNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeSubstTVarSpecs_0_6,
  MR_Word * STATE_VARIABLE_TypeSubstTVarSpecs_7);

static MR_Box MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0(
  MR_Word TVarSet_8,
  MR_Word ConstraintTVars_9,
  MR_Word ErrorTerm_10,
  MR_Integer SubstNum_11,
  MR_Word TypeSubst_12,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_7_p_0(
  MR_Word TVarSet_8,
  MR_Word ConstraintTVars_9,
  MR_Word TVarSubst_10,
  MR_Word STATE_VARIABLE_BadLHSTVars_0_16,
  MR_Word * STATE_VARIABLE_BadLHSTVars_17,
  MR_Word STATE_VARIABLE_BadRHSTVars_0_18,
  MR_Word * STATE_VARIABLE_BadRHSTVars_19);

static void MR_CALL 
parse_tree__parse_pragma__parse_apply_to_supers_2_p_0(
  MR_Word Term_3,
  MR_Word * MaybeApplyToSupers_4);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_list_8_p_0(
  MR_Word NamedVarNames_9,
  MR_Word Term_10,
  MR_Word * TypeSubsts_11,
  MR_Word * Specs_12,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_acc_12_p_0(
  MR_Word WNHII_13,
  MR_Word PrefixPieces_14,
  MR_Word NamedVarNames_15,
  MR_Word Term_16,
  MR_Word STATE_VARIABLE_TypeSubstCord_0_24,
  MR_Word * STATE_VARIABLE_TypeSubstCord_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0(
  MR_Word WNHII_10,
  MR_Word PrefixPieces_11,
  MR_Word NamedVarNames_12,
  MR_Word Term_13,
  MR_Word * MaybeTypeSubst_14,
  MR_Word STATE_VARIABLE_Counter_0_38,
  MR_Word * STATE_VARIABLE_Counter_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41);

static void MR_CALL 
parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(
  MR_Word NamedVarNames_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Counter_0_16,
  MR_Word * STATE_VARIABLE_Counter_17,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19);

static void MR_CALL 
parse_tree__parse_pragma__name_unnamed_vars_in_terms_6_p_0(
  MR_Word NamedVarNames_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Counter_0_3,
  MR_Word * STATE_VARIABLE_Counter_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6);

static void MR_CALL 
parse_tree__parse_pragma__name_anonymous_variable_6_p_0(
  MR_Word NamedVarNames_7,
  MR_Word AnonVar_8,
  MR_Word STATE_VARIABLE_Counter_0_13,
  MR_Word * STATE_VARIABLE_Counter_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16);

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(
  MR_Word WNHII_9,
  MR_Word ContextPieces_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_TVarSubstCord_0_33,
  MR_Word * STATE_VARIABLE_TVarSubstCord_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0(
  MR_Word NamedVarNames_9,
  MR_Word Term_10,
  MR_Word * Constraints_11,
  MR_Word * Specs_12,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0(
  MR_Word NamedVarNames_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_ConstraintCord_0_32,
  MR_Word * STATE_VARIABLE_ConstraintCord_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_Counter_0_36,
  MR_Word * STATE_VARIABLE_Counter_37,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39);

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_types_6_p_0(
  MR_Word AllowHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word ClassId_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_String ArgNum_9,
  MR_String ExpectedFunctor_10,
  MR_Word Term_11,
  MR_Word * MaybePredSpecs_12);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_format_call_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_format_string_values_terms_5_p_0(
  MR_Word VarSet_6,
  MR_Integer ListPos_7,
  MR_Word HeadTerm_8,
  MR_Word TailTerms_9,
  MR_Word * MaybeOoMFormatStringValues_10);

static void MR_CALL 
parse_tree__parse_pragma__parse_format_string_values_args_4_p_0(
  MR_Word MaybeListPos_5,
  MR_Word ErrorTerm_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeFormatStringValues_8);

static MR_Word MR_CALL 
parse_tree__parse_pragma__format_string_values_context_1_f_0(
  MR_Word MaybeListPos_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_arg_num_4_p_0(
  MR_Word MaybeListPos_5,
  MR_Word FS_VL_6,
  MR_Word Term_7,
  MR_Word * MaybeArgNum_8);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(
  MR_Word Term_4,
  MR_Word VarSet_5,
  MR_Word * MaybeObsoleteInFavourOf_6);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word PorF_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(
  MR_Word VarSet_5,
  MR_Word MaybeOptionsTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeMaybeBackend_8);

static void MR_CALL 
parse_tree__parse_pragma__parse_symname_arity_4_p_0(
  MR_Word VarSet_5,
  MR_Word PredTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeSymNameArity_8);

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_String PragmaName_11,
  MR_Word MarkerKind_12,
  MR_Word VarSet_13,
  MR_Word ErrorTerm_14,
  MR_Word PragmaTerms_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_decl_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_String PragmaName_11,
  MR_Word MarkerKind_12,
  MR_Word VarSet_13,
  MR_Word ErrorTerm_14,
  MR_Word PragmaTerms_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18);

static MR_Word MR_CALL 
parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(
  MR_Word Context_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____fs_vl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma____Compare____fs_vl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_1[247][2];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_2[8][1];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_3[5][3];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_4[1][8];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_5[1][9];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_6[1][13];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_7[1][11];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_8[1][15];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_10[1][10];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_11[3][6];


struct parse_tree__parse_pragma__vector_common_type_12_0_s {
  const MR_String parse_tree__parse_pragma__vector_common_type_12_0__vct_12_f_0;
  const MR_Word parse_tree__parse_pragma__vector_common_type_12_0__vct_12_f_1;
};

static /* final */ const struct parse_tree__parse_pragma__vector_common_type_12_0_s parse_tree__parse_pragma_vector_common_12[16];



static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_1[247][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_backend_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_1[7]))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a recognized pragma name."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pragma pragma_name(pragma_arguments)."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have exactly one argument."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration should be a string."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "source_file"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the argument of a"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "second argument of"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the predicate name in the"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not for the expected module, which is"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have one or two arguments."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the arity must be an integer."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be Name/Arity."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected either an empty list,"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or a singleton list containing either"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "low_level_backend"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "high_level_backend"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[48])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[48])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first  argument of"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "suggested replacement predicates and/or functions."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be a list of the names and arities of the"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "element in the second argument of"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a name/arity pair, got"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have two arguments."))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or a nonempty list of such terms."))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "where N and M are strictly positive integers"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[93])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "format_string_values(N, M)"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either must be a term of the form"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected a term of the form"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "where N and M are strictly positive integers,"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "format_string_values must have two arguments."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the argument number must be an integer."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in the second argument of a"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "element of the list:"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of format_string_values:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected attribute list, got"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: conflicting "))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attributes: "))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conflicts with earlier attribute"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unrecognised "))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute: "))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have three or four arguments."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected predicate name/arity, got"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have three arguments."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type_spec_constrained_preds"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must not be empty."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the list of type class constraints"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of a"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a list of type class constraints, got"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a typeclass constraint consisting of"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a class_name applied to one or more argument types,"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got the class name"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without any argument types."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[109])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in the first argument of a"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected a typeclass constraint of the form"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "class_name(argtype1, argtype2, ...)"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the constraint using type class"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "expect ground types as arguments,"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the list of type substitutions"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[139])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the third argument of a"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[72])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a list of type substitutions, got"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[168]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[V1 = <type1>, ...]"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[170])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should have the form"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have exactly one argument,"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "subst"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "substitutions must not be empty."))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the list of type variable"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[184])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a list of the form,"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a term of the form"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "subst([V1 = <type1>, ...])"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in the second argument of"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not have any arguments."))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "apply_to_superclasses"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[194])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "do_not_apply_to_superclasses"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must be either"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[197])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[199])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[200])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in the third argument of a"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "substitution:"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must occur"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the constraints listed in the first argument,"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a substitution must be anonymous, but"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[207]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "any type variables that occur on the right hand side"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[208])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[210])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[211])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[72])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[214])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[88])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[217])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the right hand side of the"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the left hand side of the"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a variable, got"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "V1 = <type1>"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -11))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[225]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[88])))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[226])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a string specifying a filename,"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[229]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[230])))
  },
  /* row 232 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 233 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[232])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected the name of a required feature,"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which must be one of"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "concurrency"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "single_prec_float"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "double_prec_float"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "parallel_conj"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trailing"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "strict_sequential"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "conservative_gc"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[112])))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none"))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_2[8][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 15U) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing works only with sequential conjunctions"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "floats cannot be both single- and double-precision"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_11[0])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_11[1])),
    ((MR_Box) (parse_tree__parse_pragma__parse_named_pragma_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_11[2])),
    ((MR_Box) (parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_8[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__parse_pragma__cord__pti_cord_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_11[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};


static /* final */ const struct parse_tree__parse_pragma__vector_common_type_12_0_s parse_tree__parse_pragma_vector_common_12[16] = {
  /* row   0 */
  {
    (MR_String) "concurrency",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   2 */
  {
    (MR_String) "memo",
    (MR_Integer) 3
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    (MR_String) "conservative_gc",
    (MR_Integer) 7
  },
  /* row   6 */
  {
    (MR_String) "trailing",
    (MR_Integer) 5
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    (MR_String) "single_prec_float",
    (MR_Integer) 1
  },
  /* row  10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    (MR_String) "double_prec_float",
    (MR_Integer) 2
  },
  /* row  13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    (MR_String) "strict_sequential",
    (MR_Integer) 6
  },
  /* row  15 */
  {
    (MR_String) "parallel_conj",
    (MR_Integer) 4
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__cord__pti_cord_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_pragma__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_0 = {
  (MR_String) "fs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_1 = {
  (MR_String) "vl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_fs_vl_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_0,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_fs_vl_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_0,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_fs_vl_0_1
};

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_fs_vl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_fs_vl_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_pragma____Unify____fs_vl_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma____Compare____fs_vl_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma",
  (MR_String) "fs_vl",
  { parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_fs_vl_0 },
  { parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_fs_vl_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_fs_vl_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0 = {
  (MR_String) "seen_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1 = {
  (MR_String) "have_not_seen_none",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_seen_none_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0
};

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_seen_none_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_pragma____Unify____seen_none_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma____Compare____seen_none_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma",
  (MR_String) "seen_none",
  { parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0 },
  { parse_tree__parse_pragma__parse_tree__parse_pragma__enum_ordinal_ordered_seen_none_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0,

};

static MR_String MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1734__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_96,
  MR_Word HeadVar__3_153)
{
  MR_String HeadVar__4_154;

  HeadVar__4_154 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, HeadVar__2_96, HeadVar__3_153);
  return HeadVar__4_154;
}

static MR_String MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1707__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_47,
  MR_Word HeadVar__3_147)
{
  MR_String HeadVar__4_148;

  HeadVar__4_148 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, HeadVar__2_47, HeadVar__3_147);
  return HeadVar__4_148;
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0(
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
parse_tree__parse_pragma____Unify____seen_none_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____fs_vl_0_0(
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
parse_tree__parse_pragma____Unify____fs_vl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma__parse_required_feature_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeReqFeature_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word ReqFeature_9;
  MR_String Functor_7;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Integer slot_0;
  MR_String str_1;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_7 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
        // hashed string simple lookup switch
        ;
        // compute the hash value of the input string
        ;
        slot_0 = ((MR_hash_string5(Functor_7)) & (MR_Integer) 15);
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        str_1 = ((&parse_tree__parse_pragma_vector_common_12[0 + slot_0]))->parse_tree__parse_pragma__vector_common_type_12_0__vct_12_f_0;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_7) == 0))))
        {
          // we found a match; look up the results
          ;
          ReqFeature_9 = ((&parse_tree__parse_pragma_vector_common_12[0 + slot_0]))->parse_tree__parse_pragma__vector_common_type_12_0__vct_12_f_1;
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeReqFeature_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ReqFeature_9));
    }
  else
  {
    MR_String TermStr_10;
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_85;
    MR_Word Var_86;

    TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    Var_24 = (MR_Word) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62]));
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (TermStr_10));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[244])));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[243])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[242])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[241])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[240])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[239])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[238])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[237])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[236])));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[235])));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[234])));
      MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_required_feature\'/3"));
      MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Var_85));
      MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeReqFeature_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_rhs_tvar_4_p_0(
  MR_Word TVarSet_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_BadRHSTVars_0_9,
  MR_Word * STATE_VARIABLE_BadRHSTVars_10)
{
  MR_bool succeeded;
  MR_String _VarName_8;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_5, TVar_6, &_VarName_8);
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), ((MR_Box) (TVar_6)), STATE_VARIABLE_BadRHSTVars_0_9, STATE_VARIABLE_BadRHSTVars_10);
  else
    *STATE_VARIABLE_BadRHSTVars_10 = STATE_VARIABLE_BadRHSTVars_0_9;
}

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_type_acc_tvars_3_p_0(
  MR_Word VoGType_4,
  MR_Word STATE_VARIABLE_TVars_0_9,
  MR_Word * STATE_VARIABLE_TVars_10)
{
  if (((MR_tag((MR_Word) VoGType_4)) == (MR_Integer) 1))
    *STATE_VARIABLE_TVars_10 = STATE_VARIABLE_TVars_0_9;
  else
  {
    MR_Word TVar_6 = ((MR_Word) ((MR_hl_field(0, VoGType_4, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), ((MR_Box) (TVar_6)), STATE_VARIABLE_TVars_0_9, STATE_VARIABLE_TVars_10);
  }
}

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TVars_10;

  parse_tree__parse_pragma__var_or_ground_type_acc_tvars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_10));
}

static void MR_CALL 
parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_TVars_0_9,
  MR_Word * STATE_VARIABLE_TVars_10)
{
  MR_Word VoGTypes_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_TVars_10;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_3[4]), VoGTypes_7, ((MR_Box) (STATE_VARIABLE_TVars_0_9)), &conv1_STATE_VARIABLE_TVars_10);
  *STATE_VARIABLE_TVars_10 = ((MR_Word) (conv1_STATE_VARIABLE_TVars_10));
}

void MR_CALL 
parse_tree__parse_pragma__parse_pragma_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (PragmaTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PragmaTerm_13;
  MR_String PragmaName_14;
  MR_Word PragmaArgTerms_15;
  MR_Word PragmaContext_16;
  MR_Word Var_20;
  MR_Word Var_21;

  if (succeeded)
  {
    PragmaTerm_13 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) PragmaTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(0, PragmaTerm_13, (MR_Integer) 0))));
        PragmaArgTerms_15 = ((MR_Word) ((MR_hl_field(0, PragmaTerm_13, (MR_Integer) 1))));
        PragmaContext_16 = ((MR_Word) ((MR_hl_field(0, PragmaTerm_13, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
          PragmaName_14 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeIOMPrime_17;

    succeeded = parse_tree__parse_pragma__parse_named_pragma_8_p_0(ModuleName_7, VarSet_8, PragmaTerm_13, PragmaName_14, PragmaArgTerms_15, PragmaContext_16, SeqNum_11, &MaybeIOMPrime_17);
    if (succeeded)
      *MaybeIOM_12 = MaybeIOMPrime_17;
    else
    {
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_35;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[18])));
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[15])));
        MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_24));
      }
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma\'/6"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_10));
        MR_hl_field(1, Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
  else
  {
    MR_Word Var_37;
    MR_Word Spec_39;

    {
      Spec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_39, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.report_unrecognized_pragma\'/1"));
      MR_hl_field(1, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_39, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_39, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[28])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_named_pragma_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeReqFeature_6;

  parse_tree__parse_pragma__parse_required_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeReqFeature_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeReqFeature_6));
}

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_named_pragma_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ErrorTerm_11,
  MR_String PragmaName_12,
  MR_Word PragmaTerms_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(PragmaName_12, 0)) {
      case (MR_Integer) 99:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 104:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "check_termination"))
              case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "consider_used"))
              case_num_0 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 100:
        if (MR_offset_streq(1, PragmaName_12, (MR_String) "does_not_terminate"))
          case_num_0 = (MR_Integer) 2;
        break;
      case (MR_Integer) 101:
        if (((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 120))
          switch (MR_nth_code_unit(PragmaName_12, 2)) {
            case (MR_Integer) 99:
              if (MR_offset_streq(3, PragmaName_12, (MR_String) "exceptions"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 116:
              if (((((((((((((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PragmaName_12, 8)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(PragmaName_12, 9)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(10, PragmaName_12, (MR_String) "external_func"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(10, PragmaName_12, (MR_String) "external_pred"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                }
              break;
          }
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "fact_table"))
              case_num_0 = (MR_Integer) 6;
            break;
          case (MR_Integer) 111:
            if (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114))
              switch (MR_nth_code_unit(PragmaName_12, 3)) {
                case (MR_Integer) 101:
                  if (((((((((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
                    switch (MR_nth_code_unit(PragmaName_12, 8)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_code"))
                          case_num_0 = (MR_Integer) 7;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_decl"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                      case (MR_Integer) 101:
                        switch (MR_nth_code_unit(PragmaName_12, 9)) {
                          case (MR_Integer) 110:
                            if (MR_offset_streq(10, PragmaName_12, (MR_String) "foreign_enum"))
                              case_num_0 = (MR_Integer) 9;
                            break;
                          case (MR_Integer) 120:
                            if (((((((((MR_nth_code_unit(PragmaName_12, 10)) == (MR_Integer) 112)) && (((MR_nth_code_unit(PragmaName_12, 11)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 12)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 13)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(PragmaName_12, 14)) {
                                case (MR_Integer) 0:
                                  case_num_0 = (MR_Integer) 10;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(15, PragmaName_12, (MR_String) "foreign_export_enum"))
                                    case_num_0 = (MR_Integer) 11;
                                  break;
                              }
                            break;
                        }
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_import_module"))
                          case_num_0 = (MR_Integer) 12;
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_proc"))
                          case_num_0 = (MR_Integer) 13;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_type"))
                          case_num_0 = (MR_Integer) 14;
                        break;
                    }
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(4, PragmaName_12, (MR_String) "format_call"))
                    case_num_0 = (MR_Integer) 15;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 105:
        if (MR_offset_streq(1, PragmaName_12, (MR_String) "inline"))
          case_num_0 = (MR_Integer) 16;
        break;
      case (MR_Integer) 108:
        if (MR_offset_streq(1, PragmaName_12, (MR_String) "loop_check"))
          case_num_0 = (MR_Integer) 17;
        break;
      case (MR_Integer) 109:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "memo"))
              case_num_0 = (MR_Integer) 18;
            break;
          case (MR_Integer) 105:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "minimal_model"))
              case_num_0 = (MR_Integer) 19;
            break;
          case (MR_Integer) 109:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "mm_tabling_info"))
              case_num_0 = (MR_Integer) 20;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "mode_check_clauses"))
              case_num_0 = (MR_Integer) 21;
            break;
        }
        break;
      case (MR_Integer) 110:
        if (((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 95))))
          switch (MR_nth_code_unit(PragmaName_12, 3)) {
            case (MR_Integer) 100:
              if (MR_offset_streq(4, PragmaName_12, (MR_String) "no_determinism_warning"))
                case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(4, PragmaName_12, (MR_String) "no_inline"))
                case_num_0 = (MR_Integer) 23;
              break;
          }
        break;
      case (MR_Integer) 111:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 98:
            if (((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 101))))
              switch (MR_nth_code_unit(PragmaName_12, 8)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(9, PragmaName_12, (MR_String) "obsolete_proc"))
                    case_num_0 = (MR_Integer) 25;
                  break;
              }
            break;
          case (MR_Integer) 105:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "oisu"))
              case_num_0 = (MR_Integer) 26;
            break;
        }
        break;
      case (MR_Integer) 112:
        if (((((((((((((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
          switch (MR_nth_code_unit(PragmaName_12, 8)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_equivalent_clauses"))
                case_num_0 = (MR_Integer) 27;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_pure"))
                case_num_0 = (MR_Integer) 28;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_semipure"))
                case_num_0 = (MR_Integer) 29;
              break;
          }
        break;
      case (MR_Integer) 114:
        if (((((((((((((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
          switch (MR_nth_code_unit(PragmaName_12, 8)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(9, PragmaName_12, (MR_String) "require_feature_set"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(9, PragmaName_12, (MR_String) "require_tail_recursion"))
                case_num_0 = (MR_Integer) 31;
              break;
          }
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 111:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "source_file"))
              case_num_0 = (MR_Integer) 32;
            break;
          case (MR_Integer) 116:
            if (((((((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 9)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(PragmaName_12, 10)) {
                case (MR_Integer) 114:
                  if (MR_offset_streq(11, PragmaName_12, (MR_String) "structure_reuse"))
                    case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(11, PragmaName_12, (MR_String) "structure_sharing"))
                    case_num_0 = (MR_Integer) 34;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(PragmaName_12, 1)) {
          case (MR_Integer) 101:
            if (((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 116))))
              switch (MR_nth_code_unit(PragmaName_12, 8)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(9, PragmaName_12, (MR_String) "terminates"))
                    case_num_0 = (MR_Integer) 35;
                  break;
                case (MR_Integer) 105:
                  if (((((MR_nth_code_unit(PragmaName_12, 9)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PragmaName_12, 10)) == (MR_Integer) 110))))
                    switch (MR_nth_code_unit(PragmaName_12, 11)) {
                      case (MR_Integer) 50:
                        if (MR_offset_streq(12, PragmaName_12, (MR_String) "termination2_info"))
                          case_num_0 = (MR_Integer) 36;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(12, PragmaName_12, (MR_String) "termination_info"))
                          case_num_0 = (MR_Integer) 37;
                        break;
                    }
                  break;
              }
            break;
          case (MR_Integer) 114:
            if (MR_offset_streq(2, PragmaName_12, (MR_String) "trailing_info"))
              case_num_0 = (MR_Integer) 38;
            break;
          case (MR_Integer) 121:
            if (((((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 8)) == (MR_Integer) 99))))
              switch (MR_nth_code_unit(PragmaName_12, 9)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 39;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(10, PragmaName_12, (MR_String) "type_spec_constrained_preds"))
                    case_num_0 = (MR_Integer) 40;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 117:
        if (MR_offset_streq(1, PragmaName_12, (MR_String) "unused_args"))
          case_num_0 = (MR_Integer) 41;
        break;
      case (MR_Integer) 119:
        if (MR_offset_streq(1, PragmaName_12, (MR_String) "where"))
          case_num_0 = (MR_Integer) 42;
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "check_termination"
          ;
          parse_tree__parse_pragma__parse_name_arity_decl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 2, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          // case "consider_used"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 2, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case "does_not_terminate"
          ;
          parse_tree__parse_pragma__parse_name_arity_decl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 1, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          // case "exceptions"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_exceptions_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
        {
          // case "external_func"
          ;
          parse_tree__parse_pragma__parse_pragma_external_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Integer) 1, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          // case "external_pred"
          ;
          parse_tree__parse_pragma__parse_pragma_external_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Integer) 0, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case "fact_table"
          ;
          parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "foreign_code"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_code_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "foreign_decl"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_decl_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case "foreign_enum"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 10:
        {
          // case "foreign_export"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 11:
        {
          // case "foreign_export_enum"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 12:
        {
          // case "foreign_import_module"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_import_module_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case "foreign_proc"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 14:
        {
          // case "foreign_type"
          ;
          parse_tree__parse_pragma_foreign__parse_pragma_foreign_type_8_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[0])), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 15:
        {
          // case "format_call"
          ;
          parse_tree__parse_pragma__parse_pragma_format_call_7_p_0(ModuleName_9, PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 16:
        {
          // case "inline"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 0, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 17:
        {
          // case "loop_check"
          ;
          parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) ((MR_Unsigned) 0U), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 18:
        {
          // case "memo"
          ;
          parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[1])), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 19:
        {
          // case "minimal_model"
          ;
          parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_2[1])), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 20:
        {
          // case "mm_tabling_info"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_mm_tabling_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 21:
        {
          // case "mode_check_clauses"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 3, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 22:
        {
          // case "no_determinism_warning"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 4, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 23:
        {
          // case "no_inline"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 1, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 24:
        {
          // case "obsolete"
          ;
          parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(ModuleName_9, PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 25:
        {
          // case "obsolete_proc"
          ;
          parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(ModuleName_9, PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 26:
        {
          // case "oisu"
          ;
          parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 27:
        {
          // case "promise_equivalent_clauses"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 7, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 28:
        {
          // case "promise_pure"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 5, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 29:
        {
          // case "promise_semipure"
          ;
          parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 6, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 30:
        {
          // case "require_feature_set"
          ;
          if ((PragmaTerms_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_59;
            MR_Word Var_67;
            MR_Word Var_68;

            Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
            {
              Spec_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_59, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_feature_set\'/6"));
              MR_hl_field(1, Spec_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_59, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_59, 3) = ((MR_Box) (Var_67));
              MR_hl_field(1, Spec_59, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[231])));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_59));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
            }
          }
          else
          {
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 0))));

            if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeFeatureList_49;

              parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_String) "a list of features", (MR_Word) (&parse_tree__parse_pragma_scalar_common_3[3]), VarSet_10, Var_83, &MaybeFeatureList_49);
              if (((MR_tag((MR_Word) MaybeFeatureList_49)) == (MR_Integer) 0))
                *MaybeIOM_16 = (MR_Word) (MaybeFeatureList_49);
              else
              {
                MR_Word FeatureList_50 = ((MR_Word) ((MR_hl_field(1, MaybeFeatureList_49, (MR_Integer) 0))));
                MR_Word FeatureListContext_52;
                MR_Word ConflictSpecs_53;

                FeatureListContext_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_83);
                parse_tree__parse_util__report_any_conflicts_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), FeatureListContext_52, (MR_String) "conflicting features in feature set", (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[233])), FeatureList_50, &ConflictSpecs_53);
                if ((ConflictSpecs_53 == (MR_Word) ((MR_Unsigned) 0U)))
                  if ((FeatureList_50 == (MR_Word) ((MR_Unsigned) 0U)))
                    *MaybeIOM_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[7]));
                  else
                  {
                    MR_Word FeatureSet_54;
                    MR_Word RFSInfo_55;
                    MR_Word Pragma_56;
                    MR_Word Item_57;
                    MR_Word Var_63;

                    FeatureSet_54 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), FeatureList_50);
                    {
                      RFSInfo_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, RFSInfo_55, 0) = ((MR_Box) (FeatureSet_54));
                      MR_hl_field(0, RFSInfo_55, 1) = ((MR_Box) (Context_14));
                      MR_hl_field(0, RFSInfo_55, 2) = ((MR_Box) (SeqNum_15));
                    }
                    {
                      Pragma_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Pragma_56, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Pragma_56, 1) = ((MR_Box) (RFSInfo_55));
                    }
                    {
                      Item_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Item_57, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(3, Item_57, 1) = ((MR_Box) (Pragma_56));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Item_57));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeIOM_16 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
                    }
                  }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeIOM_16 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (ConflictSpecs_53));
                  }
              }
            }
            else
            {
              MR_Word Spec_74;
              MR_Word Var_78;
              MR_Word Var_79;

              Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
              {
                Spec_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_feature_set\'/6"));
                MR_hl_field(1, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_74, 3) = ((MR_Box) (Var_78));
                MR_hl_field(1, Spec_74, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[231])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (Spec_74));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
              }
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 31:
        {
          // case "require_tail_recursion"
          ;
          parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(ModuleName_9, PragmaName_12, PragmaTerms_13, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 32:
        {
          // case "source_file"
          ;
          {
            MR_Word SourceFileTerm_84;
            MR_Word Var_90;

            succeeded = (PragmaTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SourceFileTerm_84 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 0))));
              Var_90 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 1))));
              succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_String SourceFile_85;
              MR_Word Var_91;
              MR_Word Var_92;

              succeeded = ((MR_tag((MR_Word) SourceFileTerm_84)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_91 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_84, (MR_Integer) 0))));
                Var_92 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_84, (MR_Integer) 1))));
                succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 2);
                  if (succeeded)
                    SourceFile_85 = ((MR_String) ((MR_hl_field(2, Var_91, (MR_Integer) 0))));
                }
              }
              if (succeeded)
              {
                MR_Word Marker_87;

                {
                  Marker_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Marker_87, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, Marker_87, 1) = ((MR_Box) (SourceFile_85));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_16 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Marker_87));
                }
              }
              else
              {
                MR_Word Spec_89;
                MR_Word Var_96;

                {
                  Spec_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_source_file\'/3"));
                  MR_hl_field(1, Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_89, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(1, Spec_89, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[36])));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (Spec_89));
                  MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_16 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
                }
              }
            }
            else
            {
              MR_Word Var_101;
              MR_Word Spec_104;

              {
                Spec_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_104, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_source_file\'/3"));
                MR_hl_field(1, Spec_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_104, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_104, 3) = ((MR_Box) (Context_14));
                MR_hl_field(1, Spec_104, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[38])));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Spec_104));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_101));
              }
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 33:
        {
          // case "structure_reuse"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 34:
        {
          // case "structure_sharing"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 35:
        {
          // case "terminates"
          ;
          parse_tree__parse_pragma__parse_name_arity_decl_pragma_9_p_0(ModuleName_9, PragmaName_12, (MR_Integer) 0, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 36:
        {
          // case "termination2_info"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_termination2_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 37:
        {
          // case "termination_info"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 38:
        {
          // case "trailing_info"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_trailing_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 39:
        {
          // case "type_spec"
          ;
          parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 40:
        {
          // case "type_spec_constrained_preds"
          ;
          parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 41:
        {
          // case "unused_args"
          ;
          parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 42:
        {
          // case "where"
          ;
          {
            MR_Word WhereTerm_21;
            MR_Word BeforeWherePragmaTerms_22;
            MR_Word BeforeWhereContext_23;
            MR_Word BeforeWhereTerm_20;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_String Var_33;

            succeeded = (PragmaTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BeforeWhereTerm_20 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_13, (MR_Integer) 1))));
              succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                WhereTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
                Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
                succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) BeforeWhereTerm_20)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_32 = ((MR_Word) ((MR_hl_field(0, BeforeWhereTerm_20, (MR_Integer) 0))));
                    BeforeWherePragmaTerms_22 = ((MR_Word) ((MR_hl_field(0, BeforeWhereTerm_20, (MR_Integer) 1))));
                    BeforeWhereContext_23 = ((MR_Word) ((MR_hl_field(0, BeforeWhereTerm_20, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_33, (MR_String) "foreign_type") == 0);
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word MaybeMaybeUC_24;

              parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(ModuleName_9, VarSet_10, WhereTerm_21, &MaybeMaybeUC_24);
              parse_tree__parse_pragma_foreign__parse_pragma_foreign_type_8_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, BeforeWherePragmaTerms_22, BeforeWhereContext_23, SeqNum_15, MaybeMaybeUC_24, MaybeIOM_16);
            }
            else
            {
              MR_Word Spec_25;
              MR_Word Var_34;

              Spec_25 = parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(Context_14);
              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_25));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
              }
            }
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word ModuleName_9,
  MR_String PragmaName_10,
  MR_Word PragmaTerms_11,
  MR_Word VarSet_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_104;
    MR_Word Pieces_106;
    MR_Word Spec_107;

    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (PragmaName_10));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[48])));
    }
    {
      Pieces_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
      MR_hl_field(1, Pieces_106, 1) = ((MR_Box) (Var_93));
    }
    {
      Spec_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
      MR_hl_field(1, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_107, 3) = ((MR_Box) (Context_14));
      MR_hl_field(1, Spec_107, 4) = ((MR_Box) (Pieces_106));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Spec_107));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
    }
  }
  else
  {
    MR_Word Var_349 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_350 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_349 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_20;
      MR_Word MaybePredOrProcSpec_21;
      MR_Word MaybeOptions_24;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_82;
      MR_Word PredOrProcSpec_29;
      MR_Word Options_30;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (PragmaName_10));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[72])));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[117])));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
      }
      ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41);
      parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_9, ContextPieces_20, VarSet_13, Var_350, &MaybePredOrProcSpec_21);
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Context_14));
      }
      {
        MaybeOptions_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeOptions_24, 0) = ((MR_Box) (Var_82));
      }
      succeeded = ((MR_tag((MR_Word) MaybePredOrProcSpec_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        PredOrProcSpec_29 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_21, (MR_Integer) 0))));
        Options_30 = ((MR_Word) ((MR_hl_field(1, MaybeOptions_24, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TailRec_31;
        MR_Word Item_32;
        MR_Word Var_85;
        MR_Word Var_86;

        {
          TailRec_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TailRec_31, 0) = ((MR_Box) (PredOrProcSpec_29));
          MR_hl_field(0, TailRec_31, 1) = ((MR_Box) (Options_30));
          MR_hl_field(0, TailRec_31, 2) = ((MR_Box) (Context_14));
          MR_hl_field(0, TailRec_31, 3) = ((MR_Box) (SeqNum_15));
        }
        {
          Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_85, 1) = ((MR_Box) (TailRec_31));
        }
        {
          Item_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_32, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Item_32, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (Item_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_86));
        }
      }
      else
      {
        MR_Word Specs_33;
        MR_Word Var_87;
        MR_Word Var_88;

        Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_or_proc_pfumm_name_0), MaybePredOrProcSpec_21);
        Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0), MaybeOptions_24);
        Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_87, Var_88);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
        }
      }
    }
    else
    {
      MR_Word Var_351 = ((MR_Word) ((MR_hl_field(1, Var_349, (MR_Integer) 1))));
      MR_Word Var_352 = ((MR_Word) ((MR_hl_field(1, Var_349, (MR_Integer) 0))));

      if ((Var_351 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OptionsTerm_186;
        MR_Word MaybeOptionsTerm_279;
        MR_Word ContextPieces_280;
        MR_Word MaybePredOrProcSpec_281;
        MR_Word MaybeOptions_284;
        MR_Word Var_294;
        MR_Word Var_297;
        MR_Word Var_298;
        MR_Word OptionsTerms_155;
        MR_Word PredOrProcSpec_266;
        MR_Word Options_267;

        {
          MaybeOptionsTerm_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOptionsTerm_279, 0) = ((MR_Box) (Var_352));
        }
        {
          Var_298 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_298, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_298, 1) = ((MR_Box) (PragmaName_10));
        }
        {
          Var_297 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_297, 0) = ((MR_Box) (Var_298));
          MR_hl_field(1, Var_297, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[72])));
        }
        {
          Var_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_294, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[117])));
          MR_hl_field(1, Var_294, 1) = ((MR_Box) (Var_297));
        }
        ContextPieces_280 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_294);
        parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_9, ContextPieces_280, VarSet_13, Var_350, &MaybePredOrProcSpec_281);
        OptionsTerm_186 = ((MR_Word) ((MR_hl_field(1, MaybeOptionsTerm_279, (MR_Integer) 0))));
        succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(OptionsTerm_186, &OptionsTerms_155);
        if (succeeded)
          parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(OptionsTerms_155, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_14, &MaybeOptions_284);
        else
        {
          MR_Word OptionsContext_129;
          MR_String OptionsTermStr_130;
          MR_Word Pieces_131;
          MR_Word Spec_132;
          MR_Word Var_135;
          MR_Word Var_138;
          MR_Word Var_141;
          MR_Word Var_143;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_152;

          OptionsContext_129 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OptionsTerm_186);
          OptionsTermStr_130 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_13, OptionsTerm_186);
          {
            Var_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_147, 1) = ((MR_Box) (OptionsTermStr_130));
          }
          {
            Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
            MR_hl_field(1, Var_146, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
          }
          {
            Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_143, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[120])));
            MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_146));
          }
          {
            Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_143));
          }
          {
            Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
            MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
          }
          {
            Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[119])));
            MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
          }
          {
            Pieces_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_131, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[118])));
            MR_hl_field(1, Pieces_131, 1) = ((MR_Box) (Var_135));
          }
          {
            Spec_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_132, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
            MR_hl_field(1, Spec_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_132, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_132, 3) = ((MR_Box) (OptionsContext_129));
            MR_hl_field(1, Spec_132, 4) = ((MR_Box) (Pieces_131));
          }
          {
            Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_152, 0) = ((MR_Box) (Spec_132));
            MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeOptions_284 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeOptions_284, 0) = ((MR_Box) (Var_152));
          }
        }
        succeeded = ((MR_tag((MR_Word) MaybePredOrProcSpec_281)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredOrProcSpec_266 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_281, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeOptions_284)) == (MR_Integer) 1);
          if (succeeded)
            Options_267 = ((MR_Word) ((MR_hl_field(1, MaybeOptions_284, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word TailRec_256;
          MR_Word Item_257;
          MR_Word Var_258;
          MR_Word Var_259;

          {
            TailRec_256 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TailRec_256, 0) = ((MR_Box) (PredOrProcSpec_266));
            MR_hl_field(0, TailRec_256, 1) = ((MR_Box) (Options_267));
            MR_hl_field(0, TailRec_256, 2) = ((MR_Box) (Context_14));
            MR_hl_field(0, TailRec_256, 3) = ((MR_Box) (SeqNum_15));
          }
          {
            Var_258 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_258, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_258, 1) = ((MR_Box) (TailRec_256));
          }
          {
            Item_257 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_257, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Item_257, 1) = ((MR_Box) (Var_258));
          }
          {
            Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_259, 0) = ((MR_Box) (Item_257));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_259));
          }
        }
        else
        {
          MR_Word Specs_260;
          MR_Word Var_261;
          MR_Word Var_262;

          Var_261 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_or_proc_pfumm_name_0), MaybePredOrProcSpec_281);
          Var_262 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0), MaybeOptions_284);
          Specs_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_261, Var_262);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_260));
          }
        }
      }
      else
      {
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_121;
        MR_Word Pieces_123;
        MR_Word Spec_124;

        {
          Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_116, 1) = ((MR_Box) (PragmaName_10));
        }
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
          MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[48])));
        }
        {
          Pieces_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_123, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
          MR_hl_field(1, Pieces_123, 1) = ((MR_Box) (Var_115));
        }
        {
          Spec_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
          MR_hl_field(1, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_124, 3) = ((MR_Box) (Context_14));
          MR_hl_field(1, Spec_124, 4) = ((MR_Box) (Pieces_123));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (Spec_124));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_121));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeRTR_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          if ((STATE_VARIABLE_Specs_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word WarnOrError_22;
            MR_Word Type_23;
            MR_Word RTR_24;

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
              WarnOrError_22 = (MR_Integer) 0;
            else
              WarnOrError_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
              Type_23 = (MR_Integer) 1;
            else
              Type_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
            {
              RTR_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RTR_24, 0) = (MR_Box) (((((MR_Unsigned) (WarnOrError_22) << 1)) | (MR_Unsigned) (Type_23)));
              MR_hl_field(1, RTR_24, 1) = ((MR_Box) (HeadVar__6_6));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRTR_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (RTR_24));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRTR_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_27_27;

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_5;
            else
            {
              MR_Word WarnOrError0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_String WarnOrErrorString_15;
              MR_Word SpecA_16;
              MR_Word Pieces_69;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_80;
              MR_Word Var_83;
              MR_Word Var_84;

              libs__compiler_util__warning_or_error_string_2_p_0(WarnOrError0_14, &WarnOrErrorString_15);
              {
                Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_84, 1) = ((MR_Box) (WarnOrErrorString_15));
              }
              {
                Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
              }
              {
                Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[123])));
                MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
              }
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[246])));
                MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[122])));
                MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[119])));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
              }
              {
                Pieces_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_69, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[121])));
                MR_hl_field(1, Pieces_69, 1) = ((MR_Box) (Var_72));
              }
              {
                SpecA_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SpecA_16, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.conflicting_attributes_error\'/3"));
                MR_hl_field(1, SpecA_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, SpecA_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, SpecA_16, 3) = ((MR_Box) (HeadVar__6_6));
                MR_hl_field(1, SpecA_16, 4) = ((MR_Box) (Pieces_69));
              }
              {
                STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (SpecA_16));
                MR_hl_field(1, STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((STATE_VARIABLE_Specs_27_27 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_30;

                {
                  Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_30, 0) = ((MR_Box) (HeadVar__6_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeRTR_7 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeRTR_7 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_27_27));
                }
            else
            {
              MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
              MR_String TypeString_18;
              MR_Word SpecB_19;
              MR_Word STATE_VARIABLE_Specs_29_108;

              parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(Type0_17, &TypeString_18);
              SpecB_19 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0((MR_String) "none", TypeString_18, HeadVar__6_6);
              {
                STATE_VARIABLE_Specs_29_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_29_108, 0) = ((MR_Box) (SpecB_19));
                MR_hl_field(1, STATE_VARIABLE_Specs_29_108, 1) = ((MR_Box) (STATE_VARIABLE_Specs_27_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRTR_7 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_29_108));
              }
            }
          }
          break;
      }
    else
    {
      MR_Word Term_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeWarnOrError_44;
      MR_Word MaybeType_48;
      MR_Word SeenNone_49;
      MR_Word STATE_VARIABLE_Specs_55_55;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      if (((MR_tag((MR_Word) Term_31)) == (MR_Integer) 0))
      {
        MR_Word Functor_39 = ((MR_Word) ((MR_hl_field(0, Term_31, (MR_Integer) 0))));
        MR_Word Context_41 = ((MR_Word) ((MR_hl_field(0, Term_31, (MR_Integer) 2))));
        MR_String Name_42;
        MR_Word WarnOrError_43;

        succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_42 = ((MR_String) ((MR_hl_field(0, Functor_39, (MR_Integer) 0))));
          succeeded = libs__compiler_util__warning_or_error_string_2_p_1(&WarnOrError_43, Name_42);
        }
        if (succeeded)
        {
          if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MaybeWarnOrError_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeWarnOrError_44, 0) = ((MR_Box) (WarnOrError_43));
            }
            STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_5;
          }
          else
          {
            MR_Word WarnOrErrorFirst_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
            MR_String WarnOrErrorFirstString_46;
            MR_Word Spec_47;

            libs__compiler_util__warning_or_error_string_2_p_0(WarnOrErrorFirst_45, &WarnOrErrorFirstString_46);
            Spec_47 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(Name_42, WarnOrErrorFirstString_46, Context_41);
            MaybeWarnOrError_44 = HeadVar__3_3;
            {
              STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (Spec_47));
              MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          }
          MaybeType_48 = HeadVar__4_4;
          SeenNone_49 = HeadVar__2_2;
        }
        else
        {
          MR_Word Type_50;
          MR_String Name_65;

          succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_65 = ((MR_String) ((MR_hl_field(0, Functor_39, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_1(&Type_50, Name_65);
          }
          if (succeeded)
          {
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MaybeType_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeType_48, 0) = ((MR_Box) (Type_50));
              }
              STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_5;
            }
            else
            {
              MR_Word TypeFirst_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
              MR_String TypeFirstString_52;
              MR_Word Spec_60;

              parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(TypeFirst_51, &TypeFirstString_52);
              Spec_60 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(Name_65, TypeFirstString_52, Context_41);
              MaybeType_48 = HeadVar__4_4;
              {
                STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (Spec_60));
                MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            MaybeWarnOrError_44 = HeadVar__3_3;
            SeenNone_49 = HeadVar__2_2;
          }
          else
          {
            MR_String Var_57;

            succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_57 = ((MR_String) ((MR_hl_field(0, Functor_39, (MR_Integer) 0))));
              succeeded = (strcmp(Var_57, (MR_String) "none") == 0);
            }
            if (succeeded)
            {
              SeenNone_49 = (MR_Integer) 0;
              MaybeWarnOrError_44 = HeadVar__3_3;
              MaybeType_48 = HeadVar__4_4;
              STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_5;
            }
            else
            {
              MR_Word Spec_63;
              MR_Word VarSet_89;
              MR_Word Pieces_90;
              MR_Word Var_93;
              MR_Word Var_96;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_String Var_101;

              mercury__varset__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &VarSet_89);
              Var_101 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_89, Term_31);
              {
                Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
              }
              {
                Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
              }
              {
                Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[125])));
                MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
              }
              {
                Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[119])));
                MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
              }
              {
                Pieces_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_90, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[124])));
                MR_hl_field(1, Pieces_90, 1) = ((MR_Box) (Var_93));
              }
              {
                Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.pragma_require_tailrec_unknown_term_error\'/2"));
                MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Context_41));
                MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_90));
              }
              {
                STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (Spec_63));
                MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
              SeenNone_49 = HeadVar__2_2;
              MaybeType_48 = HeadVar__4_4;
              MaybeWarnOrError_44 = HeadVar__3_3;
            }
          }
        }
      }
      else
      {
        MR_Word Context_67 = ((MR_Word) ((MR_hl_field(1, Term_31, (MR_Integer) 1))));
        MR_Word Spec_68;

        Spec_68 = parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(Term_31, Context_67);
        {
          STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(1, STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
        SeenNone_49 = HeadVar__2_2;
        MaybeType_48 = HeadVar__4_4;
        MaybeWarnOrError_44 = HeadVar__3_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_32;
      next_value_of_HeadVar__2_2 = SeenNone_49;
      next_value_of_HeadVar__3_3 = MaybeWarnOrError_44;
      next_value_of_HeadVar__4_4 = MaybeType_48;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_55_55;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(
  MR_Word Term_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word VarSet_7;
  MR_Word Pieces_8;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;

  mercury__varset__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &VarSet_7);
  Var_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_4);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[125])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[119])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[124])));
    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_11));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.pragma_require_tailrec_unknown_term_error\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_8));
  }
  return Spec_6;
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(
  MR_String ThisName_5,
  MR_String EarlierName_6,
  MR_Word Context_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (ThisName_5));
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (EarlierName_6));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[123])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[122])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[119])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Pieces_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[121])));
    MR_hl_field(1, Pieces_9, 1) = ((MR_Box) (Var_12));
  }
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.conflicting_attributes_error\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Spec_90;

    Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_90, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
      MR_hl_field(1, Spec_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_90, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_90, 3) = ((MR_Box) (Var_86));
      MR_hl_field(1, Spec_90, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[227])));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Spec_90));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
    }
  }
  else
  {
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_120 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Spec_100;

      Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
        MR_hl_field(1, Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_100, 3) = ((MR_Box) (Var_96));
        MR_hl_field(1, Spec_100, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[227])));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (Spec_100));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
      }
    }
    else
    {
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 1))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 0))));

      if ((Var_122 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybePredSpec_17;

        parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(ModuleName_8, (MR_String) "fact_table", VarSet_9, Var_121, &MaybePredSpec_17);
        if (((MR_tag((MR_Word) MaybePredSpec_17)) == (MR_Integer) 0))
          *MaybeIOM_14 = (MR_Word) (MaybePredSpec_17);
        else
        {
          MR_Word PredSpec_18 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_17, (MR_Integer) 0))));
          MR_String FileName_19;
          MR_Word Var_35;
          MR_Word Var_36;

          succeeded = ((MR_tag((MR_Word) Var_123)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_35 = ((MR_Word) ((MR_hl_field(0, Var_123, (MR_Integer) 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(0, Var_123, (MR_Integer) 1))));
            succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 2);
              if (succeeded)
                FileName_19 = ((MR_String) ((MR_hl_field(2, Var_35, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FactTable_21;
            MR_Word Item_22;
            MR_Word Var_37;
            MR_Word Var_38;

            {
              FactTable_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FactTable_21, 0) = ((MR_Box) (PredSpec_18));
              MR_hl_field(0, FactTable_21, 1) = ((MR_Box) (FileName_19));
              MR_hl_field(0, FactTable_21, 2) = ((MR_Box) (Context_12));
              MR_hl_field(0, FactTable_21, 3) = ((MR_Box) (SeqNum_13));
            }
            {
              Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_37, 1) = ((MR_Box) (FactTable_21));
            }
            {
              Item_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_22, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Item_22, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_38, 0) = ((MR_Box) (Item_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
            }
          }
          else
          {
            MR_String FileNameTermStr_23;
            MR_Word Pieces_24;
            MR_Word Spec_25;
            MR_Word Var_41;
            MR_Word Var_44;
            MR_Word Var_47;
            MR_Word Var_49;
            MR_Word Var_52;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_66;
            MR_Word Var_67;

            FileNameTermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_123);
            {
              Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_56, 1) = ((MR_Box) (FileNameTermStr_23));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
            }
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[228])));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[225])));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
            }
            {
              Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[118])));
              MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_41));
            }
            Var_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_123);
            {
              Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
              MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Var_66));
              MR_hl_field(1, Spec_25, 4) = ((MR_Box) (Pieces_24));
            }
            {
              Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_67, 0) = ((MR_Box) (Spec_25));
              MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
            }
          }
        }
      }
      else
      {
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Spec_109;

        Var_105 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_109, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
          MR_hl_field(1, Spec_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_109, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_109, 3) = ((MR_Box) (Var_105));
          MR_hl_field(1, Spec_109, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[227])));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (Spec_109));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_106));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet0_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded = (PragmaTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PredAndModesTerm_15;
  MR_Word TypeSubstTerm_16;
  MR_Word Var_46;
  MR_Word Var_47;

  if (succeeded)
  {
    PredAndModesTerm_15 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeSubstTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ArityOrModesContextPieces_17;
    MR_Word MaybePredOrProcSpec_18;

    ArityOrModesContextPieces_17 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[215])));
    parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_8, ArityOrModesContextPieces_17, VarSet0_9, PredAndModesTerm_15, &MaybePredOrProcSpec_18);
    if (((MR_tag((MR_Word) MaybePredOrProcSpec_18)) == (MR_Integer) 0))
      *MaybeIOM_14 = (MR_Word) (MaybePredOrProcSpec_18);
    else
    {
      MR_Word PredOrProcSpec_19 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_18, (MR_Integer) 0))));
      MR_Word PFUMM_20 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 0))));
      MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 1))));
      MR_Word TypeContextPieces_23 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[216]));
      MR_Word NamedVarNames_24;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_String Var_73;

      Var_71 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      if (((MR_tag((MR_Word) TypeSubstTerm_16)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_125 = ((MR_Word) ((MR_hl_field(0, TypeSubstTerm_16, (MR_Integer) 1))));

        parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(VarSet0_9, ArgTerms_125, Var_71, &NamedVarNames_24);
      }
      else
      {
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, TypeSubstTerm_16, (MR_Integer) 0))));
        MR_String VarName_123;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_9, Var_121, &VarName_123);
        if (succeeded)
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_123)), Var_71, &NamedVarNames_24);
        else
          NamedVarNames_24 = Var_71;
      }
      succeeded = ((MR_tag((MR_Word) TypeSubstTerm_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_72 = ((MR_Word) ((MR_hl_field(0, TypeSubstTerm_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_73 = ((MR_String) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));
          succeeded = (strcmp(Var_73, (MR_String) "subst") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word MaybeTypeSubst_27;
        MR_Word VarSet_29;
        MR_Word Var_74;
        MR_Word Var_28;

        Var_74 = mercury__counter__init_1_f_0((MR_Integer) 1);
        parse_tree__parse_pragma__parse_type_subst_9_p_0((MR_Integer) 16, TypeContextPieces_23, NamedVarNames_24, TypeSubstTerm_16, &MaybeTypeSubst_27, Var_74, &Var_28, VarSet0_9, &VarSet_29);
        if (((MR_tag((MR_Word) MaybeTypeSubst_27)) == (MR_Integer) 0))
          *MaybeIOM_14 = (MR_Word) (MaybeTypeSubst_27);
        else
        {
          MR_Word OoMTVarSubsts_30 = ((MR_Word) ((MR_hl_field(1, MaybeTypeSubst_27, (MR_Integer) 0))));
          MR_Word TVarSet_31;
          MR_Word TypeSpec_32;
          MR_Word Item_33;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_29, &TVarSet_31);
          Var_76 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
          {
            TypeSpec_32 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeSpec_32, 0) = ((MR_Box) (PFUMM_20));
            MR_hl_field(0, TypeSpec_32, 1) = ((MR_Box) (PredName_21));
            MR_hl_field(0, TypeSpec_32, 2) = ((MR_Box) (ModuleName_8));
            MR_hl_field(0, TypeSpec_32, 3) = ((MR_Box) (OoMTVarSubsts_30));
            MR_hl_field(0, TypeSpec_32, 4) = ((MR_Box) (TVarSet_31));
            MR_hl_field(0, TypeSpec_32, 5) = ((MR_Box) (Var_76));
            MR_hl_field(0, TypeSpec_32, 6) = ((MR_Box) (Context_12));
            MR_hl_field(0, TypeSpec_32, 7) = ((MR_Box) (SeqNum_13));
          }
          {
            Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_77, 1) = ((MR_Box) (TypeSpec_32));
          }
          {
            Item_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_33, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Item_33, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (Item_33));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
          }
        }
      }
      else
      {
        MR_Word TypeSubstTerms_36;
        MR_Word HeadTypeSubstTerm_37;
        MR_Word TailTypeSubstTerms_38;
        MR_Word TVarSubsts_39;
        MR_Word TypeSpecs_40;
        MR_Word Var_79;
        MR_Word VarSet_110;
        MR_Word Var_35;

        Var_79 = mercury__counter__init_1_f_0((MR_Integer) 1);
        parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(NamedVarNames_24, TypeSubstTerm_16, Var_79, &Var_35, VarSet0_9, &VarSet_110);
        parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeSubstTerm_16, &TypeSubstTerms_36);
        HeadTypeSubstTerm_37 = ((MR_Word) ((MR_hl_field(0, TypeSubstTerms_36, (MR_Integer) 0))));
        TailTypeSubstTerms_38 = ((MR_Word) ((MR_hl_field(0, TypeSubstTerms_36, (MR_Integer) 1))));
        parse_tree__parse_pragma__parse_tvar_substs_8_p_0((MR_Integer) 16, TypeContextPieces_23, VarSet0_9, HeadTypeSubstTerm_37, TailTypeSubstTerms_38, &TVarSubsts_39, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs_40);
        if ((TypeSpecs_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word OoMTVarSubsts_102;
          MR_Word TVarSet_103;
          MR_Word TypeSpec_104;
          MR_Word Item_105;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_110, &TVarSet_103);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TVarSubsts_39, &OoMTVarSubsts_102);
          Var_82 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
          {
            TypeSpec_104 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeSpec_104, 0) = ((MR_Box) (PFUMM_20));
            MR_hl_field(0, TypeSpec_104, 1) = ((MR_Box) (PredName_21));
            MR_hl_field(0, TypeSpec_104, 2) = ((MR_Box) (ModuleName_8));
            MR_hl_field(0, TypeSpec_104, 3) = ((MR_Box) (OoMTVarSubsts_102));
            MR_hl_field(0, TypeSpec_104, 4) = ((MR_Box) (TVarSet_103));
            MR_hl_field(0, TypeSpec_104, 5) = ((MR_Box) (Var_82));
            MR_hl_field(0, TypeSpec_104, 6) = ((MR_Box) (Context_12));
            MR_hl_field(0, TypeSpec_104, 7) = ((MR_Box) (SeqNum_13));
          }
          {
            Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_83, 1) = ((MR_Box) (TypeSpec_104));
          }
          {
            Item_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_105, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Item_105, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (Item_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_84));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (TypeSpecs_40));
          }
      }
    }
  }
  else
  {
    MR_Word Spec_45;
    MR_Word Var_99;
    MR_Word Var_100;

    Var_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_type_spec\'/7"));
      MR_hl_field(1, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_45, 3) = ((MR_Box) (Var_99));
      MR_hl_field(1, Spec_45, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[218])));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Spec_45));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_substs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TVarSubstCord_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TVarSubstCord_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TVarSubstCord_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_substs_8_p_0(
  MR_Word WNHII_9,
  MR_Word ContextPieces_10,
  MR_Word VarSet_11,
  MR_Word HeadTerm_12,
  MR_Word TailTerms_13,
  MR_Word * TVarSubsts_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word TVarSubstCord0_16;
  MR_Word TVarSubstCord1_17;
  MR_Word TVarSubstCord_18;
  MR_Word STATE_VARIABLE_Specs_21_21;
  MR_Word Var_22;
  MR_Box conv3_TVarSubstCord_18;
  MR_Box conv2_STATE_VARIABLE_Specs_20;

  TVarSubstCord0_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0));
  parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(WNHII_9, ContextPieces_10, VarSet_11, HeadTerm_12, TVarSubstCord0_16, &TVarSubstCord1_17, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_21_21);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_7[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_tvar_substs_8_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (WNHII_9));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (ContextPieces_10));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (VarSet_11));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[14]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[10]), Var_22, TailTerms_13, ((MR_Box) (TVarSubstCord1_17)), &conv3_TVarSubstCord_18, ((MR_Box) (STATE_VARIABLE_Specs_21_21)), &conv2_STATE_VARIABLE_Specs_20);
  TVarSubstCord_18 = ((MR_Word) (conv3_TVarSubstCord_18));
  *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
  *TVarSubsts_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TVarSubstCord_18);
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TVars_10;

  parse_tree__parse_pragma__var_or_ground_constraint_acc_tvars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_10));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_constr_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet0_8,
  MR_Word ErrorTerm_9,
  MR_Word PragmaTerms_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (PragmaTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ConstraintsTerm_13;
  MR_Word ApplyToSupersTerm_14;
  MR_Word TypeSubstsTerm_15;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  if (succeeded)
  {
    ConstraintsTerm_13 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_10, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_10, (MR_Integer) 1))));
    succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ApplyToSupersTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
      succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeSubstsTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word NamedVarNames1_16;
    MR_Word NamedVarNames_17;
    MR_Word Constraints_18;
    MR_Word ConstraintSpecs_19;
    MR_Word Counter1_20;
    MR_Word VarSet1_21;
    MR_Word MaybeApplyToSupers_22;
    MR_Word TypeSubsts_23;
    MR_Word TypeSubstsSpecs_24;
    MR_Word VarSet_26;
    MR_Word TVarSet0_27;
    MR_Word ConstraintTVars_28;
    MR_Word TypeSubstTVarSpecs_29;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word _Counter_25;
    MR_Box conv1_ConstraintTVars_28;
    MR_Word ApplyToSupers_30;

    Var_43 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if (((MR_tag((MR_Word) ConstraintsTerm_13)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_91 = ((MR_Word) ((MR_hl_field(0, ConstraintsTerm_13, (MR_Integer) 1))));

      parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(VarSet0_8, ArgTerms_91, Var_43, &NamedVarNames1_16);
    }
    else
    {
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(1, ConstraintsTerm_13, (MR_Integer) 0))));
      MR_String VarName_89;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_8, Var_87, &VarName_89);
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_89)), Var_43, &NamedVarNames1_16);
      else
        NamedVarNames1_16 = Var_43;
    }
    if (((MR_tag((MR_Word) TypeSubstsTerm_15)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_99 = ((MR_Word) ((MR_hl_field(0, TypeSubstsTerm_15, (MR_Integer) 1))));

      parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(VarSet0_8, ArgTerms_99, NamedVarNames1_16, &NamedVarNames_17);
    }
    else
    {
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, TypeSubstsTerm_15, (MR_Integer) 0))));
      MR_String VarName_97;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_8, Var_95, &VarName_97);
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_97)), NamedVarNames1_16, &NamedVarNames_17);
      else
        NamedVarNames_17 = NamedVarNames1_16;
    }
    Var_44 = mercury__counter__init_1_f_0((MR_Integer) 1);
    parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0(NamedVarNames_17, ConstraintsTerm_13, &Constraints_18, &ConstraintSpecs_19, Var_44, &Counter1_20, VarSet0_8, &VarSet1_21);
    parse_tree__parse_pragma__parse_apply_to_supers_2_p_0(ApplyToSupersTerm_14, &MaybeApplyToSupers_22);
    parse_tree__parse_pragma__parse_type_subst_list_8_p_0(NamedVarNames_17, TypeSubstsTerm_15, &TypeSubsts_23, &TypeSubstsSpecs_24, Counter1_20, &_Counter_25, VarSet1_21, &VarSet_26);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet0_8, &TVarSet0_27);
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_3[2]), Constraints_18, ((MR_Box) (Var_47)), &conv1_ConstraintTVars_28);
    ConstraintTVars_28 = ((MR_Word) (conv1_ConstraintTVars_28));
    parse_tree__parse_pragma__check_type_substs_7_p_0(TVarSet0_27, ConstraintTVars_28, TypeSubstsTerm_15, (MR_Integer) 1, TypeSubsts_23, (MR_Word) ((MR_Unsigned) 0U), &TypeSubstTVarSpecs_29);
    succeeded = (ConstraintSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TypeSubstsSpecs_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (TypeSubstTVarSpecs_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeApplyToSupers_22)) == (MR_Integer) 1);
          if (succeeded)
            ApplyToSupers_30 = ((MR_Word) ((MR_hl_field(1, MaybeApplyToSupers_22, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word OoMConstraints_31;
      MR_Word OoMTypeSubsts_32;
      MR_Word TVarSet_33;
      MR_Word TypeSpecConstr_34;
      MR_Word Pragma_35;
      MR_Word Item_36;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;

      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), Constraints_18, &OoMConstraints_31);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[7]), TypeSubsts_23, &OoMTypeSubsts_32);
      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_26, &TVarSet_33);
      Var_50 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
      Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_9);
      {
        TypeSpecConstr_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeSpecConstr_34, 0) = ((MR_Box) (ModuleName_7));
        MR_hl_field(0, TypeSpecConstr_34, 1) = ((MR_Box) (OoMConstraints_31));
        MR_hl_field(0, TypeSpecConstr_34, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_30));
        MR_hl_field(0, TypeSpecConstr_34, 3) = ((MR_Box) (OoMTypeSubsts_32));
        MR_hl_field(0, TypeSpecConstr_34, 4) = ((MR_Box) (TVarSet_33));
        MR_hl_field(0, TypeSpecConstr_34, 5) = ((MR_Box) (Var_50));
        MR_hl_field(0, TypeSpecConstr_34, 6) = ((MR_Box) (Var_51));
        MR_hl_field(0, TypeSpecConstr_34, 7) = ((MR_Box) (SeqNum_11));
      }
      {
        Pragma_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Pragma_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Pragma_35, 1) = ((MR_Box) (TypeSpecConstr_34));
      }
      {
        Item_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_36, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Item_36, 1) = ((MR_Box) (Pragma_35));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Item_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_52));
      }
    }
    else
    {
      MR_Word Specs_37;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_apply_to_supers_0), MaybeApplyToSupers_22);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeSubstsSpecs_24, TypeSubstTVarSpecs_29);
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_54, Var_55);
      Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConstraintSpecs_19, Var_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_37));
      }
    }
  }
  else
  {
    MR_Word Spec_39;
    MR_Word Var_70;
    MR_Word Var_71;

    Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_9);
    {
      Spec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_type_spec_constr\'/6"));
      MR_hl_field(1, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_39, 3) = ((MR_Box) (Var_70));
      MR_hl_field(1, Spec_39, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[137])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNames_0_3,
  MR_Word * STATE_VARIABLE_VarNames_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarNames_4 = STATE_VARIABLE_VarNames_0_3;
    else
    {
      MR_Word Term_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarNames_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarNames_0_3;

      if (((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_20 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));

        parse_tree__parse_pragma__acc_var_names_in_terms_4_p_0(VarSet_1, ArgTerms_20, STATE_VARIABLE_VarNames_0_3, &STATE_VARIABLE_VarNames_15_15);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, Term_10, (MR_Integer) 0))));
        MR_String VarName_18;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Var_16, &VarName_18);
        if (succeeded)
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_18)), STATE_VARIABLE_VarNames_0_3, &STATE_VARIABLE_VarNames_15_15);
        else
          STATE_VARIABLE_VarNames_15_15 = STATE_VARIABLE_VarNames_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms_11;
      next_value_of_STATE_VARIABLE_VarNames_0_3 = STATE_VARIABLE_VarNames_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarNames_0_3 = next_value_of_STATE_VARIABLE_VarNames_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__check_type_substs_7_p_0(
  MR_Word TVarSet_1,
  MR_Word ConstraintTVars_2,
  MR_Word ErrorTerm_3,
  MR_Integer SubstNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeSubstTVarSpecs_0_6,
  MR_Word * STATE_VARIABLE_TypeSubstTVarSpecs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeSubstTVarSpecs_7 = STATE_VARIABLE_TypeSubstTVarSpecs_0_6;
    else
    {
      MR_Word TypeSubst_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TypeSubsts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeSubstTVarSpecs_24_24;
      MR_Integer Var_25;
      MR_Integer next_value_of_SubstNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeSubstTVarSpecs_0_6;

      parse_tree__parse_pragma__check_type_subst_7_p_0(TVarSet_1, ConstraintTVars_2, ErrorTerm_3, SubstNum_4, TypeSubst_19, STATE_VARIABLE_TypeSubstTVarSpecs_0_6, &STATE_VARIABLE_TypeSubstTVarSpecs_24_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) SubstNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SubstNum_4 = Var_25;
      next_value_of_HeadVar__5_5 = TypeSubsts_20;
      next_value_of_STATE_VARIABLE_TypeSubstTVarSpecs_0_6 = STATE_VARIABLE_TypeSubstTVarSpecs_24_24;
      SubstNum_4 = next_value_of_SubstNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_TypeSubstTVarSpecs_0_6 = next_value_of_STATE_VARIABLE_TypeSubstTVarSpecs_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__4_154;

  conv5_HeadVar__4_154 = parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1734__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_154));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__4_148;

  conv4_HeadVar__4_148 = parse_tree__parse_pragma__IntroducedFrom__func__check_type_subst__1707__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_148));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_BadLHSTVars_17;
  MR_Word conv0_STATE_VARIABLE_BadRHSTVars_19;

  parse_tree__parse_pragma__check_tvar_subst_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BadLHSTVars_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_BadRHSTVars_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BadLHSTVars_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_BadRHSTVars_19));
}

static void MR_CALL 
parse_tree__parse_pragma__check_type_subst_7_p_0(
  MR_Word TVarSet_8,
  MR_Word ConstraintTVars_9,
  MR_Word ErrorTerm_10,
  MR_Integer SubstNum_11,
  MR_Word TypeSubst_12,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_Word HeadTVarSubst_14 = ((MR_Word) ((MR_hl_field(0, TypeSubst_12, (MR_Integer) 0))));
  MR_Word TailTVarSubsts_15 = ((MR_Word) ((MR_hl_field(0, TypeSubst_12, (MR_Integer) 1))));
  MR_Word BadLHSTVars1_16;
  MR_Word BadRHSTVars1_17;
  MR_Word BadLHSTVars_18;
  MR_Word BadRHSTVars_19;
  MR_Word BadLHSTVarList_20;
  MR_Word BadRHSTVarList_21;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Specs_94_94;
  MR_Box conv3_BadLHSTVars_18;
  MR_Box conv2_BadRHSTVars_19;

  Var_43 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]));
  Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]));
  parse_tree__parse_pragma__check_tvar_subst_7_p_0(TVarSet_8, ConstraintTVars_9, HeadTVarSubst_14, Var_43, &BadLHSTVars1_16, Var_44, &BadRHSTVars1_17);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_10[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__parse_pragma__check_type_subst_7_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (ConstraintTVars_9));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[6]), Var_45, TailTVarSubsts_15, ((MR_Box) (BadLHSTVars1_16)), &conv3_BadLHSTVars_18, ((MR_Box) (BadRHSTVars1_17)), &conv2_BadRHSTVars_19);
  BadLHSTVars_18 = ((MR_Word) (conv3_BadLHSTVars_18));
  BadRHSTVars_19 = ((MR_Word) (conv2_BadRHSTVars_19));
  BadLHSTVarList_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), BadLHSTVars_18);
  BadRHSTVarList_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), BadRHSTVars_19);
  if ((BadLHSTVarList_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_41;
  else
  {
    MR_Word TailBadLHSTVars_23 = ((MR_Word) ((MR_hl_field(1, BadLHSTVarList_20, (MR_Integer) 1))));
    MR_String TheTypeVar_24;
    MR_String ItDoesNot_25;
    MR_Word BadLHSTVarStrs_28;
    MR_Word BadLHSTVarsPieces_29;
    MR_Word LHSPieces_30;
    MR_Word LHSSpec_31;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_93;

    if ((TailBadLHSTVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      TheTypeVar_24 = (MR_String) "the left-hand-side type variable";
      ItDoesNot_25 = (MR_String) "it does not.";
    }
    else
    {
      TheTypeVar_24 = (MR_String) "the left-hand-side type variables";
      ItDoesNot_25 = (MR_String) "they do not.";
    }
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_9[1]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__parse_pragma__check_type_subst_7_p_0_2));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TVarSet_8));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    BadLHSTVarStrs_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, BadLHSTVarList_20);
    BadLHSTVarsPieces_29 = parse_tree__error_spec__list_to_pieces_1_f_0(BadLHSTVarStrs_28);
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (SubstNum_11));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_String) "lhs"));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (SubstNum_11));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (TheTypeVar_24));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[203])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[202])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_86, 1) = ((MR_Box) (ItDoesNot_25));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[206])));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[205])));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[204])));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
    }
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadLHSTVarsPieces_29, Var_76);
    LHSPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_75);
    Var_93 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      LHSSpec_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LHSSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.check_type_subst\'/7"));
      MR_hl_field(1, LHSSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, LHSSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, LHSSpec_31, 3) = ((MR_Box) (Var_93));
      MR_hl_field(1, LHSSpec_31, 4) = ((MR_Box) (LHSPieces_30));
    }
    {
      STATE_VARIABLE_Specs_94_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_94_94, 0) = ((MR_Box) (LHSSpec_31));
      MR_hl_field(1, STATE_VARIABLE_Specs_94_94, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
    }
  }
  if ((BadRHSTVarList_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_94_94;
  else
  {
    MR_Word TailBadRHSTVars_33 = ((MR_Word) ((MR_hl_field(1, BadRHSTVarList_21, (MR_Integer) 1))));
    MR_String IsNot_34;
    MR_Word BadRHSTVarStrs_37;
    MR_Word BadRHSTVarsPieces_38;
    MR_Word RHSPieces_39;
    MR_Word RHSSpec_40;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_137;

    if ((TailBadRHSTVars_33 == (MR_Word) ((MR_Unsigned) 0U)))
      IsNot_34 = (MR_String) "is not.";
    else
      IsNot_34 = (MR_String) "are not.";
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_9[1]));
      MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__parse_pragma__check_type_subst_7_p_0_3));
      MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_95, 3) = ((MR_Box) (TVarSet_8));
      MR_hl_field(0, Var_95, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    BadRHSTVarStrs_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_95, BadRHSTVarList_21);
    BadRHSTVarsPieces_38 = parse_tree__error_spec__list_to_pieces_1_f_0(BadRHSTVarStrs_37);
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (SubstNum_11));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_String) "rhs"));
    }
    {
      Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_115, 1) = ((MR_Box) (SubstNum_11));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[212])));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[202])));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_130, 1) = ((MR_Box) (IsNot_34));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[16])));
    }
    Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadRHSTVarsPieces_38, Var_129);
    RHSPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_128);
    Var_137 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      RHSSpec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.check_type_subst\'/7"));
      MR_hl_field(1, RHSSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, RHSSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, RHSSpec_40, 3) = ((MR_Box) (Var_137));
      MR_hl_field(1, RHSSpec_40, 4) = ((MR_Box) (RHSPieces_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_42 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RHSSpec_40));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_94_94));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BadRHSTVars_10;

  parse_tree__parse_pragma__check_tvar_subst_rhs_tvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BadRHSTVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BadRHSTVars_10));
}

static void MR_CALL 
parse_tree__parse_pragma__check_tvar_subst_7_p_0(
  MR_Word TVarSet_8,
  MR_Word ConstraintTVars_9,
  MR_Word TVarSubst_10,
  MR_Word STATE_VARIABLE_BadLHSTVars_0_16,
  MR_Word * STATE_VARIABLE_BadLHSTVars_17,
  MR_Word STATE_VARIABLE_BadRHSTVars_0_18,
  MR_Word * STATE_VARIABLE_BadRHSTVars_19)
{
  MR_bool succeeded;
  MR_Word LHSTVar_13 = ((MR_Word) ((MR_hl_field(0, TVarSubst_10, (MR_Integer) 0))));
  MR_Word RHSType_14 = ((MR_Word) ((MR_hl_field(0, TVarSubst_10, (MR_Integer) 1))));
  MR_Word RHSTVars_15;
  MR_Word Var_21;
  MR_Box conv1_STATE_VARIABLE_BadRHSTVars_19;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), ConstraintTVars_9, ((MR_Box) (LHSTVar_13)));
  if (succeeded)
    *STATE_VARIABLE_BadLHSTVars_17 = STATE_VARIABLE_BadLHSTVars_0_16;
  else
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), ((MR_Box) (LHSTVar_13)), STATE_VARIABLE_BadLHSTVars_0_16, STATE_VARIABLE_BadLHSTVars_17);
  parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(RHSType_14, &RHSTVars_15);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_9[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__parse_pragma__check_tvar_subst_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (TVarSet_8));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[6]), Var_21, RHSTVars_15, ((MR_Box) (STATE_VARIABLE_BadRHSTVars_0_18)), &conv1_STATE_VARIABLE_BadRHSTVars_19);
  *STATE_VARIABLE_BadRHSTVars_19 = ((MR_Word) (conv1_STATE_VARIABLE_BadRHSTVars_19));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_apply_to_supers_2_p_0(
  MR_Word Term_3,
  MR_Word * MaybeApplyToSupers_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Args_6;
  MR_String AtomStr_8;
  MR_Word ApplyToSupers0_9;
  MR_Word Functor_5;

  if (succeeded)
  {
    Functor_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_8 = ((MR_String) ((MR_hl_field(0, Functor_5, (MR_Integer) 0))));
      if ((strcmp(AtomStr_8, (MR_String) "apply_to_superclasses") == 0))
      {
        ApplyToSupers0_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(AtomStr_8, (MR_String) "do_not_apply_to_superclasses") == 0))
      {
        ApplyToSupers0_9 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeApplyToSupers_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ApplyToSupers0_9));
      }
    else
    {
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_33;
      MR_Word Var_34;

      {
        Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_23, 1) = ((MR_Box) (AtomStr_8));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[192])));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[190])));
        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_16));
      }
      Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
      {
        Spec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_apply_to_supers\'/2"));
        MR_hl_field(1, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_13, 3) = ((MR_Box) (Var_33));
        MR_hl_field(1, Spec_13, 4) = ((MR_Box) (Pieces_12));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeApplyToSupers_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
      }
    }
  else
  {
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Spec_66;

    Var_62 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
    {
      Spec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_apply_to_supers\'/2"));
      MR_hl_field(1, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_66, 3) = ((MR_Box) (Var_62));
      MR_hl_field(1, Spec_66, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[201])));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Spec_66));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeApplyToSupers_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_TypeSubstCord_25;
  MR_Word conv2_STATE_VARIABLE_Specs_27;
  MR_Word conv1_STATE_VARIABLE_Counter_29;
  MR_Word conv0_STATE_VARIABLE_VarSet_31;

  parse_tree__parse_pragma__parse_type_subst_acc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_TypeSubstCord_25, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_27, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Counter_29, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_VarSet_31);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_TypeSubstCord_25));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_27));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_29));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_31));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_list_8_p_0(
  MR_Word NamedVarNames_9,
  MR_Word Term_10,
  MR_Word * TypeSubsts_11,
  MR_Word * Specs_12,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28)
{
  MR_bool succeeded;
  MR_Word TypeSubstTerms_15;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_10, &TypeSubstTerms_15);
  if (succeeded)
    if ((TypeSubstTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_17;
      MR_Word Var_49;

      *TypeSubsts_11 = (MR_Word) ((MR_Unsigned) 0U);
      Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
      {
        Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst_list\'/8"));
        MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Var_49));
        MR_hl_field(1, Spec_17, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[164])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Counter_26 = STATE_VARIABLE_Counter_0_25;
      *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
    }
    else
    {
      MR_Word HeadTypeSubstTerm_18 = ((MR_Word) ((MR_hl_field(1, TypeSubstTerms_15, (MR_Integer) 0))));
      MR_Word TailTypeSubstTerms_19 = ((MR_Word) ((MR_hl_field(1, TypeSubstTerms_15, (MR_Integer) 1))));
      MR_Word PrefixPieces_20 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[166]));
      MR_Word TypeSubstCord1_22;
      MR_Word Specs1_23;
      MR_Word TypeSubstCord_24;
      MR_Word Var_62;
      MR_Word STATE_VARIABLE_Counter_64_64;
      MR_Word STATE_VARIABLE_VarSet_65_65;
      MR_Word Var_66;
      MR_Box conv7_TypeSubstCord_24;
      MR_Box conv6_Specs_12;
      MR_Box conv5_STATE_VARIABLE_Counter_26;
      MR_Box conv4_STATE_VARIABLE_VarSet_28;

      Var_62 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[7]));
      parse_tree__parse_pragma__parse_type_subst_acc_12_p_0((MR_Integer) 15, PrefixPieces_20, NamedVarNames_9, HeadTypeSubstTerm_18, Var_62, &TypeSubstCord1_22, (MR_Word) ((MR_Unsigned) 0U), &Specs1_23, STATE_VARIABLE_Counter_0_25, &STATE_VARIABLE_Counter_64_64, STATE_VARIABLE_VarSet_0_27, &STATE_VARIABLE_VarSet_65_65);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_66, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_8[0]));
        MR_hl_field(0, Var_66, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_type_subst_list_8_p_0_1));
        MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_66, 3) = ((MR_Box) ((MR_Integer) 15));
        MR_hl_field(0, Var_66, 4) = ((MR_Box) (PrefixPieces_20));
        MR_hl_field(0, Var_66, 5) = ((MR_Box) (NamedVarNames_9));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[13]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[10]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[11]), Var_66, TailTypeSubstTerms_19, ((MR_Box) (TypeSubstCord1_22)), &conv7_TypeSubstCord_24, ((MR_Box) (Specs1_23)), &conv6_Specs_12, ((MR_Box) (STATE_VARIABLE_Counter_64_64)), &conv5_STATE_VARIABLE_Counter_26, ((MR_Box) (STATE_VARIABLE_VarSet_65_65)), &conv4_STATE_VARIABLE_VarSet_28);
      TypeSubstCord_24 = ((MR_Word) (conv7_TypeSubstCord_24));
      *Specs_12 = ((MR_Word) (conv6_Specs_12));
      *STATE_VARIABLE_Counter_26 = ((MR_Word) (conv5_STATE_VARIABLE_Counter_26));
      *STATE_VARIABLE_VarSet_28 = ((MR_Word) (conv4_STATE_VARIABLE_VarSet_28));
      *TypeSubsts_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[7]), TypeSubstCord_24);
    }
  else
  {
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_String Var_82;
    MR_Word Var_92;
    MR_Word Pieces_94;
    MR_Word Spec_95;

    *TypeSubsts_11 = (MR_Word) ((MR_Unsigned) 0U);
    Var_82 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_27, Term_10);
    {
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[167])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Pieces_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[163])));
      MR_hl_field(1, Pieces_94, 1) = ((MR_Box) (Var_71));
    }
    Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    {
      Spec_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst_list\'/8"));
      MR_hl_field(1, Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_95, 3) = ((MR_Box) (Var_92));
      MR_hl_field(1, Spec_95, 4) = ((MR_Box) (Pieces_94));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_95));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
    *STATE_VARIABLE_Counter_26 = STATE_VARIABLE_Counter_0_25;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_acc_12_p_0(
  MR_Word WNHII_13,
  MR_Word PrefixPieces_14,
  MR_Word NamedVarNames_15,
  MR_Word Term_16,
  MR_Word STATE_VARIABLE_TypeSubstCord_0_24,
  MR_Word * STATE_VARIABLE_TypeSubstCord_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  MR_Word MaybeTypeSubst_21;

  parse_tree__parse_pragma__parse_type_subst_9_p_0(WNHII_13, PrefixPieces_14, NamedVarNames_15, Term_16, &MaybeTypeSubst_21, STATE_VARIABLE_Counter_0_28, STATE_VARIABLE_Counter_29, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
  if (((MR_tag((MR_Word) MaybeTypeSubst_21)) == (MR_Integer) 0))
  {
    MR_Word TypeSubstSpecs_23 = ((MR_Word) ((MR_hl_field(0, MaybeTypeSubst_21, (MR_Integer) 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeSubstSpecs_23, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_TypeSubstCord_25 = STATE_VARIABLE_TypeSubstCord_0_24;
  }
  else
  {
    MR_Word TypeSubst_22 = ((MR_Word) ((MR_hl_field(1, MaybeTypeSubst_21, (MR_Integer) 0))));

    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[7]), ((MR_Box) (TypeSubst_22)), STATE_VARIABLE_TypeSubstCord_0_24, STATE_VARIABLE_TypeSubstCord_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TVarSubstCord_34;
  MR_Word conv4_STATE_VARIABLE_Specs_36;

  parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TVarSubstCord_34, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TVarSubstCord_34));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_36));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Counter_17;
  MR_Word conv0_STATE_VARIABLE_VarSet_19;

  parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Counter_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_19));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_type_subst_9_p_0(
  MR_Word WNHII_10,
  MR_Word PrefixPieces_11,
  MR_Word NamedVarNames_12,
  MR_Word Term_13,
  MR_Word * MaybeTypeSubst_14,
  MR_Word STATE_VARIABLE_Counter_0_38,
  MR_Word * STATE_VARIABLE_Counter_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
  MR_Word ArgTerms_17;
  MR_Word Var_42;
  MR_String Var_43;

  if (succeeded)
  {
    Var_42 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
    ArgTerms_17 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
      succeeded = (strcmp(Var_43, (MR_String) "subst") == 0);
    }
  }
  if (succeeded)
    if ((ArgTerms_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_73;
      MR_Word Var_74;

      Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_11, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[182])));
      Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
      {
        Spec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst\'/9"));
        MR_hl_field(1, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_23, 3) = ((MR_Box) (Var_73));
        MR_hl_field(1, Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeSubst_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      }
      *STATE_VARIABLE_Counter_39 = STATE_VARIABLE_Counter_0_38;
      *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
    }
    else
    {
      MR_Word Var_223 = ((MR_Word) ((MR_hl_field(1, ArgTerms_17, (MR_Integer) 1))));
      MR_Word Var_224 = ((MR_Word) ((MR_hl_field(1, ArgTerms_17, (MR_Integer) 0))));

      if ((Var_223 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeSubstTerms_25;

        succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_224, &TypeSubstTerms_25);
        if (succeeded)
          if ((TypeSubstTerms_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Pieces_164;
            MR_Word Spec_165;

            Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_11, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[186])));
            Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
            {
              Spec_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_165, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst\'/9"));
              MR_hl_field(1, Spec_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_165, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_165, 3) = ((MR_Box) (Var_89));
              MR_hl_field(1, Spec_165, 4) = ((MR_Box) (Pieces_164));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Spec_165));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeSubst_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_90));
            }
            *STATE_VARIABLE_Counter_39 = STATE_VARIABLE_Counter_0_38;
            *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
          }
          else
          {
            MR_Word HeadTypeSubstTerm_26 = ((MR_Word) ((MR_hl_field(1, TypeSubstTerms_25, (MR_Integer) 0))));
            MR_Word TailTypeSubstTerms_27 = ((MR_Word) ((MR_hl_field(1, TypeSubstTerms_25, (MR_Integer) 1))));
            MR_Word TVarSubstCord1_29;
            MR_Word TVarSpecs1_30;
            MR_Word TVarSubstCord_31;
            MR_Word TVarSpecs_32;
            MR_Word STATE_VARIABLE_Counter_92_92;
            MR_Word STATE_VARIABLE_VarSet_93_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_99;
            MR_Box conv3_STATE_VARIABLE_Counter_39;
            MR_Box conv2_STATE_VARIABLE_VarSet_41;
            MR_Box conv7_TVarSubstCord_31;
            MR_Box conv6_TVarSpecs_32;

            parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(NamedVarNames_12, HeadTypeSubstTerm_26, STATE_VARIABLE_Counter_0_38, &STATE_VARIABLE_Counter_92_92, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_93_93);
            {
              Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_94, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[0]));
              MR_hl_field(0, Var_94, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_type_subst_9_p_0_1));
              MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_94, 3) = ((MR_Box) (NamedVarNames_12));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[11]), Var_94, TailTypeSubstTerms_27, ((MR_Box) (STATE_VARIABLE_Counter_92_92)), &conv3_STATE_VARIABLE_Counter_39, ((MR_Box) (STATE_VARIABLE_VarSet_93_93)), &conv2_STATE_VARIABLE_VarSet_41);
            *STATE_VARIABLE_Counter_39 = ((MR_Word) (conv3_STATE_VARIABLE_Counter_39));
            *STATE_VARIABLE_VarSet_41 = ((MR_Word) (conv2_STATE_VARIABLE_VarSet_41));
            Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0));
            parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(WNHII_10, PrefixPieces_11, STATE_VARIABLE_VarSet_0_40, HeadTypeSubstTerm_26, Var_97, &TVarSubstCord1_29, (MR_Word) ((MR_Unsigned) 0U), &TVarSpecs1_30);
            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_99, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_7[0]));
              MR_hl_field(0, Var_99, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_type_subst_9_p_0_2));
              MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_99, 3) = ((MR_Box) (WNHII_10));
              MR_hl_field(0, Var_99, 4) = ((MR_Box) (PrefixPieces_11));
              MR_hl_field(0, Var_99, 5) = ((MR_Box) (STATE_VARIABLE_VarSet_0_40));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[14]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[10]), Var_99, TailTypeSubstTerms_27, ((MR_Box) (TVarSubstCord1_29)), &conv7_TVarSubstCord_31, ((MR_Box) (TVarSpecs1_30)), &conv6_TVarSpecs_32);
            TVarSubstCord_31 = ((MR_Word) (conv7_TVarSubstCord_31));
            TVarSpecs_32 = ((MR_Word) (conv6_TVarSpecs_32));
            if ((TVarSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TVarSubsts_33;
              MR_Word TypeSubst_34;

              TVarSubsts_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TVarSubstCord_31);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TVarSubsts_33, &TypeSubst_34);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeTypeSubst_14 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (TypeSubst_34));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeTypeSubst_14 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (TVarSpecs_32));
              }
          }
        else
        {
          MR_String ErrorTermStr_37;
          MR_Word Var_100;
          MR_Word Var_103;
          MR_Word Var_106;
          MR_Word Var_109;
          MR_Word Var_112;
          MR_Word Var_115;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Pieces_168;
          MR_Word Spec_169;

          ErrorTermStr_37 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_40, Term_13);
          {
            Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_119, 1) = ((MR_Box) (ErrorTermStr_37));
          }
          {
            Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
            MR_hl_field(1, Var_118, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
          }
          {
            Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
            MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[168])));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_115));
          }
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62])));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[171])));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[173])));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[187])));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
          }
          Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_11, Var_100);
          Var_129 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
          {
            Spec_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_169, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst\'/9"));
            MR_hl_field(1, Spec_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_169, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_169, 3) = ((MR_Box) (Var_129));
            MR_hl_field(1, Spec_169, 4) = ((MR_Box) (Pieces_168));
          }
          {
            Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_130, 0) = ((MR_Box) (Spec_169));
            MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeSubst_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
          }
          *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
          *STATE_VARIABLE_Counter_39 = STATE_VARIABLE_Counter_0_38;
        }
      }
      else
      {
        MR_Word Pieces_201;
        MR_Word Spec_202;
        MR_Word Var_207;
        MR_Word Var_208;

        Pieces_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_11, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[182])));
        Var_207 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
        {
          Spec_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_202, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst\'/9"));
          MR_hl_field(1, Spec_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_202, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_202, 3) = ((MR_Box) (Var_207));
          MR_hl_field(1, Spec_202, 4) = ((MR_Box) (Pieces_201));
        }
        {
          Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_208, 0) = ((MR_Box) (Spec_202));
          MR_hl_field(1, Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeSubst_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_208));
        }
        *STATE_VARIABLE_Counter_39 = STATE_VARIABLE_Counter_0_38;
        *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
      }
    }
  else
  {
    MR_Word Var_132;
    MR_Word Var_135;
    MR_Word Var_138;
    MR_Word Var_141;
    MR_Word Var_144;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Pieces_174;
    MR_Word Spec_175;
    MR_String ErrorTermStr_176;

    ErrorTermStr_176 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_40, Term_13);
    {
      Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_151, 1) = ((MR_Box) (ErrorTermStr_176));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
      MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[168])));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62])));
      MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[189])));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[173])));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[188])));
      MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
    }
    Pieces_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_11, Var_132);
    Var_161 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
    {
      Spec_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_175, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_type_subst\'/9"));
      MR_hl_field(1, Spec_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_175, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_175, 3) = ((MR_Box) (Var_161));
      MR_hl_field(1, Spec_175, 4) = ((MR_Box) (Pieces_174));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Spec_175));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeSubst_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
    }
    *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
    *STATE_VARIABLE_Counter_39 = STATE_VARIABLE_Counter_0_38;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(
  MR_Word NamedVarNames_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Counter_0_16,
  MR_Word * STATE_VARIABLE_Counter_17,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));

    parse_tree__parse_pragma__name_unnamed_vars_in_terms_6_p_0(NamedVarNames_7, ArgTerms_15, STATE_VARIABLE_Counter_0_16, STATE_VARIABLE_Counter_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19);
  }
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Term_8, (MR_Integer) 0))));
    MR_String _VarName_13;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_18, Var_11, &_VarName_13);
    if (succeeded)
    {
      *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
      *STATE_VARIABLE_Counter_17 = STATE_VARIABLE_Counter_0_16;
    }
    else
      parse_tree__parse_pragma__name_anonymous_variable_6_p_0(NamedVarNames_7, Var_11, STATE_VARIABLE_Counter_0_16, STATE_VARIABLE_Counter_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19);
  }
}

static void MR_CALL 
parse_tree__parse_pragma__name_unnamed_vars_in_terms_6_p_0(
  MR_Word NamedVarNames_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Counter_0_3,
  MR_Word * STATE_VARIABLE_Counter_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
      *STATE_VARIABLE_Counter_4 = STATE_VARIABLE_Counter_0_3;
    }
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Counter_23_23;
      MR_Word STATE_VARIABLE_VarSet_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_5;

      parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(NamedVarNames_1, Term_15, STATE_VARIABLE_Counter_0_3, &STATE_VARIABLE_Counter_23_23, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms_16;
      next_value_of_STATE_VARIABLE_Counter_0_3 = STATE_VARIABLE_Counter_23_23;
      next_value_of_STATE_VARIABLE_VarSet_0_5 = STATE_VARIABLE_VarSet_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Counter_0_3 = next_value_of_STATE_VARIABLE_Counter_0_3;
      STATE_VARIABLE_VarSet_0_5 = next_value_of_STATE_VARIABLE_VarSet_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__name_anonymous_variable_6_p_0(
  MR_Word NamedVarNames_7,
  MR_Word AnonVar_8,
  MR_Word STATE_VARIABLE_Counter_0_13,
  MR_Word * STATE_VARIABLE_Counter_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer SeqNum_11;
    MR_String VarName_12;
    MR_Word STATE_VARIABLE_Counter_17_17;
    MR_String Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__counter__allocate_3_p_0(&SeqNum_11, STATE_VARIABLE_Counter_0_13, &STATE_VARIABLE_Counter_17_17);
    Var_19 = mercury__string__int_to_string_1_f_0(SeqNum_11);
    VarName_12 = mercury__string__f_43_43_2_f_0((MR_String) "Anon", Var_19);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NamedVarNames_7, ((MR_Box) (VarName_12)));
    if (succeeded)
    {
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_13 = STATE_VARIABLE_Counter_17_17;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_Counter_0_13 = next_value_of_STATE_VARIABLE_Counter_0_13;
      continue;
    }
    else
    {
      mercury__varset__name_var_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AnonVar_8, VarName_12, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
      *STATE_VARIABLE_Counter_14 = STATE_VARIABLE_Counter_17_17;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_tvar_subst_acc_8_p_0(
  MR_Word WNHII_9,
  MR_Word ContextPieces_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_TVarSubstCord_0_33,
  MR_Word * STATE_VARIABLE_TVarSubstCord_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
  MR_Word TypeVarTerm_16;
  MR_Word TypeTerm_17;
  MR_String AtomStr_19;
  MR_String Atom_15;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_15 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeVarTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
        Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
        succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((strcmp(Atom_15, (MR_String) "=") == 0))
            {
              AtomStr_19 = (MR_String) "equals sign";
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(Atom_15, (MR_String) "=>") == 0))
            {
              AtomStr_19 = (MR_String) "arrow";
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeVar0_20;

    succeeded = ((MR_tag((MR_Word) TypeVarTerm_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeVar0_20 = ((MR_Word) ((MR_hl_field(1, TypeVarTerm_16, (MR_Integer) 0))));
      {
        MR_Word RHSPieces_22;
        MR_Word TypeContextPieces_23;
        MR_Word MaybeType_24;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;

        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (AtomStr_19));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[220])));
        }
        {
          RHSPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RHSPieces_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[219])));
          MR_hl_field(1, RHSPieces_22, 1) = ((MR_Box) (Var_43));
        }
        Var_51 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
        Var_52 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), RHSPieces_22);
        TypeContextPieces_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_52);
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = (MR_Box) ((MR_Unsigned) (WNHII_9));
        }
        parse_tree__parse_type_name__parse_type_5_p_0(Var_53, VarSet_11, TypeContextPieces_23, TypeTerm_17, &MaybeType_24);
        if (((MR_tag((MR_Word) MaybeType_24)) == (MR_Integer) 0))
        {
          MR_Word TypeSpecs_28 = ((MR_Word) ((MR_hl_field(0, MaybeType_24, (MR_Integer) 0))));

          *STATE_VARIABLE_Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeSpecs_28, STATE_VARIABLE_Specs_0_35);
          *STATE_VARIABLE_TVarSubstCord_34 = STATE_VARIABLE_TVarSubstCord_0_33;
        }
        else
        {
          MR_Word Type_25 = ((MR_Word) ((MR_hl_field(1, MaybeType_24, (MR_Integer) 0))));
          MR_Word TypeVar_26;
          MR_Word TVarSubst_27;

          mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVar0_20, &TypeVar_26);
          {
            TVarSubst_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TVarSubst_27, 0) = ((MR_Box) (TypeVar_26));
            MR_hl_field(0, TVarSubst_27, 1) = ((MR_Box) (Type_25));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), ((MR_Box) (TVarSubst_27)), STATE_VARIABLE_TVarSubstCord_0_33, STATE_VARIABLE_TVarSubstCord_34);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
        }
      }
    }
    else
    {
      MR_String TypeVarTermStr_29;
      MR_Word Pieces_30;
      MR_Word Spec_31;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_80;

      TypeVarTermStr_29 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_11, TypeVarTerm_16);
      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (AtomStr_19));
      }
      {
        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_70, 1) = ((MR_Box) (TypeVarTermStr_29));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[222])));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[53])));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[221])));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
      }
      Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10, Var_56);
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeVarTerm_16);
      {
        Spec_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_tvar_subst_acc\'/8"));
        MR_hl_field(1, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_31, 3) = ((MR_Box) (Var_80));
        MR_hl_field(1, Spec_31, 4) = ((MR_Box) (Pieces_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_36 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
      }
      *STATE_VARIABLE_TVarSubstCord_34 = STATE_VARIABLE_TVarSubstCord_0_33;
    }
  }
  else
  {
    MR_String TermStr_32;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_111;
    MR_Word Pieces_113;
    MR_Word Spec_114;

    TermStr_32 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_11, Term_12);
    {
      Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_101, 1) = ((MR_Box) (TermStr_32));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[224])));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62])));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[223])));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[173])));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[188])));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
    }
    Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10, Var_82);
    Var_111 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12);
    {
      Spec_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_tvar_subst_acc\'/8"));
      MR_hl_field(1, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_114, 3) = ((MR_Box) (Var_111));
      MR_hl_field(1, Spec_114, 4) = ((MR_Box) (Pieces_113));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_114));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
    }
    *STATE_VARIABLE_TVarSubstCord_34 = STATE_VARIABLE_TVarSubstCord_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ConstraintCord_33;
  MR_Word conv2_STATE_VARIABLE_Specs_35;
  MR_Word conv1_STATE_VARIABLE_Counter_37;
  MR_Word conv0_STATE_VARIABLE_VarSet_39;

  parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ConstraintCord_33, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_35, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Counter_37, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_VarSet_39);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ConstraintCord_33));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_35));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_37));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_39));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0(
  MR_Word NamedVarNames_9,
  MR_Word Term_10,
  MR_Word * Constraints_11,
  MR_Word * Specs_12,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  MR_bool succeeded;
  MR_Word ConstraintTerms_15;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_10, &ConstraintTerms_15);
  if (succeeded)
    if ((ConstraintTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_17;
      MR_Word Var_47;

      *Constraints_11 = (MR_Word) ((MR_Unsigned) 0U);
      Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
      {
        Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_var_or_ground_constraint_list\'/8"));
        MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Var_47));
        MR_hl_field(1, Spec_17, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[145])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Counter_24 = STATE_VARIABLE_Counter_0_23;
      *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    }
    else
    {
      MR_Word HeadConstraintTerm_18 = ((MR_Word) ((MR_hl_field(1, ConstraintTerms_15, (MR_Integer) 0))));
      MR_Word TailConstraintTerms_19 = ((MR_Word) ((MR_hl_field(1, ConstraintTerms_15, (MR_Integer) 1))));
      MR_Word ConstraintCord1_20;
      MR_Word Specs1_21;
      MR_Word ConstraintCord_22;
      MR_Word Var_49;
      MR_Word STATE_VARIABLE_Counter_51_51;
      MR_Word STATE_VARIABLE_VarSet_52_52;
      MR_Word Var_53;
      MR_Box conv7_ConstraintCord_22;
      MR_Box conv6_Specs_12;
      MR_Box conv5_STATE_VARIABLE_Counter_24;
      MR_Box conv4_STATE_VARIABLE_VarSet_26;

      Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0));
      parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0(NamedVarNames_9, HeadConstraintTerm_18, Var_49, &ConstraintCord1_20, (MR_Word) ((MR_Unsigned) 0U), &Specs1_21, STATE_VARIABLE_Counter_0_23, &STATE_VARIABLE_Counter_51_51, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_52_52);
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_6[0]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_var_or_ground_constraint_list_8_p_0_1));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) (NamedVarNames_9));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[10]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[11]), Var_53, TailConstraintTerms_19, ((MR_Box) (ConstraintCord1_20)), &conv7_ConstraintCord_22, ((MR_Box) (Specs1_21)), &conv6_Specs_12, ((MR_Box) (STATE_VARIABLE_Counter_51_51)), &conv5_STATE_VARIABLE_Counter_24, ((MR_Box) (STATE_VARIABLE_VarSet_52_52)), &conv4_STATE_VARIABLE_VarSet_26);
      ConstraintCord_22 = ((MR_Word) (conv7_ConstraintCord_22));
      *Specs_12 = ((MR_Word) (conv6_Specs_12));
      *STATE_VARIABLE_Counter_24 = ((MR_Word) (conv5_STATE_VARIABLE_Counter_24));
      *STATE_VARIABLE_VarSet_26 = ((MR_Word) (conv4_STATE_VARIABLE_VarSet_26));
      *Constraints_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), ConstraintCord_22);
    }
  else
  {
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_String Var_69;
    MR_Word Var_79;
    MR_Word Pieces_81;
    MR_Word Spec_82;

    *Constraints_11 = (MR_Word) ((MR_Unsigned) 0U);
    Var_69 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_25, Term_10);
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[146])));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Pieces_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_81, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[144])));
      MR_hl_field(1, Pieces_81, 1) = ((MR_Box) (Var_58));
    }
    Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    {
      Spec_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_var_or_ground_constraint_list\'/8"));
      MR_hl_field(1, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_82, 3) = ((MR_Box) (Var_79));
      MR_hl_field(1, Spec_82, 4) = ((MR_Box) (Pieces_81));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_82));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    *STATE_VARIABLE_Counter_24 = STATE_VARIABLE_Counter_0_23;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Counter_17;
  MR_Word conv0_STATE_VARIABLE_VarSet_19;

  parse_tree__parse_pragma__name_unnamed_vars_in_term_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Counter_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_19));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0(
  MR_Word NamedVarNames_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_ConstraintCord_0_32,
  MR_Word * STATE_VARIABLE_ConstraintCord_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_Counter_0_36,
  MR_Word * STATE_VARIABLE_Counter_37,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39)
{
  MR_bool succeeded;
  MR_Word ClassSymName_17;
  MR_Word ArgTerms_18;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12, &ClassSymName_17, &ArgTerms_18);
  if (succeeded)
    if ((ArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_String Var_59;
      MR_Word Var_69;

      Var_59 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_17);
      {
        Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[151])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[149])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[148])));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[147])));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[144])));
        MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_42));
      }
      Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12);
      {
        Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_var_or_ground_constraint_acc\'/10"));
        MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_69));
        MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_35 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
      }
      *STATE_VARIABLE_ConstraintCord_33 = STATE_VARIABLE_ConstraintCord_0_32;
      *STATE_VARIABLE_Counter_37 = STATE_VARIABLE_Counter_0_36;
      *STATE_VARIABLE_VarSet_39 = STATE_VARIABLE_VarSet_0_38;
    }
    else
    {
      MR_Word ContextPieces_23;
      MR_Integer NumArgTerms_25;
      MR_Word ClassId_26;
      MR_Word MaybeArgs_27;
      MR_Word Var_71;
      MR_Box conv3_STATE_VARIABLE_Counter_37;
      MR_Box conv2_STATE_VARIABLE_VarSet_39;

      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_71, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[0]));
        MR_hl_field(0, Var_71, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_var_or_ground_constraint_acc_10_p_0_1));
        MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_71, 3) = ((MR_Box) (NamedVarNames_11));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[11]), Var_71, ArgTerms_18, ((MR_Box) (STATE_VARIABLE_Counter_0_36)), &conv3_STATE_VARIABLE_Counter_37, ((MR_Box) (STATE_VARIABLE_VarSet_0_38)), &conv2_STATE_VARIABLE_VarSet_39);
      *STATE_VARIABLE_Counter_37 = ((MR_Word) (conv3_STATE_VARIABLE_Counter_37));
      *STATE_VARIABLE_VarSet_39 = ((MR_Word) (conv2_STATE_VARIABLE_VarSet_39));
      ContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[153])));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[8]), ArgTerms_18, &NumArgTerms_25);
      {
        ClassId_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassId_26, 0) = ((MR_Box) (ClassSymName_17));
        MR_hl_field(0, ClassId_26, 1) = ((MR_Box) (NumArgTerms_25));
      }
      parse_tree__parse_pragma__parse_var_or_ground_types_6_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[5])), *STATE_VARIABLE_VarSet_39, ContextPieces_23, ClassId_26, ArgTerms_18, &MaybeArgs_27);
      if (((MR_tag((MR_Word) MaybeArgs_27)) == (MR_Integer) 0))
      {
        MR_Word ArgSpecs_31 = ((MR_Word) ((MR_hl_field(0, MaybeArgs_27, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgSpecs_31, STATE_VARIABLE_Specs_0_34);
        *STATE_VARIABLE_ConstraintCord_33 = STATE_VARIABLE_ConstraintCord_0_32;
      }
      else
      {
        MR_Word Args_28 = ((MR_Word) ((MR_hl_field(1, MaybeArgs_27, (MR_Integer) 0))));
        MR_Word Context_29;
        MR_Word Constraint_30;

        Context_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12);
        {
          Constraint_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Constraint_30, 0) = ((MR_Box) (ClassSymName_17));
          MR_hl_field(0, Constraint_30, 1) = ((MR_Box) (Args_28));
          MR_hl_field(0, Constraint_30, 2) = ((MR_Box) (Context_29));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), ((MR_Box) (Constraint_30)), STATE_VARIABLE_ConstraintCord_0_32, STATE_VARIABLE_ConstraintCord_33);
        *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
      }
    }
  else
  {
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_String Var_106;
    MR_Word Var_116;
    MR_Word Pieces_118;
    MR_Word Spec_119;

    Var_106 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_38, Term_12);
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[156])));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[155])));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
    }
    {
      Pieces_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_118, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[154])));
      MR_hl_field(1, Pieces_118, 1) = ((MR_Box) (Var_89));
    }
    Var_116 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12);
    {
      Spec_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_119, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_var_or_ground_constraint_acc\'/10"));
      MR_hl_field(1, Spec_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_119, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_119, 3) = ((MR_Box) (Var_116));
      MR_hl_field(1, Spec_119, 4) = ((MR_Box) (Pieces_118));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_35 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_119));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
    }
    *STATE_VARIABLE_VarSet_39 = STATE_VARIABLE_VarSet_0_38;
    *STATE_VARIABLE_Counter_37 = STATE_VARIABLE_Counter_0_36;
    *STATE_VARIABLE_ConstraintCord_33 = STATE_VARIABLE_ConstraintCord_0_32;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_var_or_ground_types_6_p_0(
  MR_Word AllowHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word ClassId_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[6]));
  else
  {
    MR_Word HeadTerm_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TailTerms_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word TailResult_19;
    MR_Word HeadResult0_20;
    MR_Word HeadResult_27;
    MR_Word HeadArg_32;
    MR_Word TailArgs_33;

    parse_tree__parse_pragma__parse_var_or_ground_types_6_p_0(AllowHOInstInfo_1, VarSet_2, ContextPieces_3, ClassId_4, TailTerms_17, &TailResult_19);
    parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_1, VarSet_2, ContextPieces_3, HeadTerm_16, &HeadResult0_20);
    if (((MR_tag((MR_Word) HeadResult0_20)) == (MR_Integer) 0))
      HeadResult_27 = (MR_Word) (HeadResult0_20);
    else
    {
      MR_Word HeadType_21 = ((MR_Word) ((MR_hl_field(1, HeadResult0_20, (MR_Integer) 0))));
      MR_Word HeadVar_22;

      succeeded = ((MR_tag((MR_Word) HeadType_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        HeadVar_22 = ((MR_Word) ((MR_hl_field(0, HeadType_21, (MR_Integer) 0))));
        {
          MR_Word TVarSet_24;
          MR_String HeadVarName_25;
          MR_Word HeadArg0_26;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &TVarSet_24);
          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_24, HeadVar_22, &HeadVarName_25);
          {
            HeadArg0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadArg0_26, 0) = ((MR_Box) (HeadVar_22));
            MR_hl_field(0, HeadArg0_26, 1) = ((MR_Box) (HeadVarName_25));
          }
          {
            HeadResult_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadResult_27, 0) = ((MR_Box) (HeadArg0_26));
          }
        }
      }
      else
      {
        MR_Word HeadGroundType_28;

        succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(HeadType_21, &HeadGroundType_28);
        if (succeeded)
        {
          MR_Word HeadArg0_75;

          {
            HeadArg0_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadArg0_75, 0) = ((MR_Box) (HeadGroundType_28));
          }
          {
            HeadResult_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadResult_27, 0) = ((MR_Box) (HeadArg0_75));
          }
        }
        else
        {
          MR_Word Pieces_29;
          MR_Word Spec_30;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_String Var_59;
          MR_Word Var_69;
          MR_Word Var_70;

          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (ClassId_4));
          }
          Var_59 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_2, HeadTerm_16);
          {
            Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[158])));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62])));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[157])));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[135])));
            MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
          }
          {
            Pieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_29, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[154])));
            MR_hl_field(1, Pieces_29, 1) = ((MR_Box) (Var_37));
          }
          Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_16);
          {
            Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_var_or_ground_types\'/6"));
            MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Var_69));
            MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_29));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            HeadResult_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadResult_27, 0) = ((MR_Box) (Var_70));
          }
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) HeadResult_27)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadArg_32 = ((MR_Word) ((MR_hl_field(1, HeadResult_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TailResult_19)) == (MR_Integer) 1);
      if (succeeded)
        TailArgs_33 = ((MR_Word) ((MR_hl_field(1, TailResult_19, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_72;

      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (HeadArg_32));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (TailArgs_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
      }
    }
    else
    {
      MR_Word Specs_34;
      MR_Word Var_73;
      MR_Word Var_74;

      Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), HeadResult_27);
      Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[12]), TailResult_19);
      Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_73, Var_74);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__6_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_34));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_50;
    MR_Word Var_118;
    MR_Word Var_119;

    Var_118 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
      MR_hl_field(1, Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_50, 3) = ((MR_Box) (Var_118));
      MR_hl_field(1, Spec_50, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[130])));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (Spec_50));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
    }
  }
  else
  {
    MR_Word Var_165 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_166 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_165 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_129;
      MR_Word Var_133;
      MR_Word Var_134;

      Var_133 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_129, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
        MR_hl_field(1, Spec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_129, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_129, 3) = ((MR_Box) (Var_133));
        MR_hl_field(1, Spec_129, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[130])));
      }
      {
        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_134, 0) = ((MR_Box) (Spec_129));
        MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_134));
      }
    }
    else
    {
      MR_Word Var_167 = ((MR_Word) ((MR_hl_field(1, Var_165, (MR_Integer) 1))));
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(1, Var_165, (MR_Integer) 0))));

      if ((Var_167 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_138;
        MR_Word Var_142;
        MR_Word Var_143;

        Var_142 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_138, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
          MR_hl_field(1, Spec_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_138, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_138, 3) = ((MR_Box) (Var_142));
          MR_hl_field(1, Spec_138, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[130])));
        }
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Spec_138));
          MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
        }
      }
      else
      {
        MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Var_167, (MR_Integer) 1))));
        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Var_167, (MR_Integer) 0))));

        if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeTypeCtor_25;
          MR_Word MaybeCreatorsNamesArities_30;
          MR_Word MaybeMutatorsNamesArities_31;
          MR_Word MaybeDestructorsNamesArities_33;
          MR_Word SymName0_21;
          MR_Integer Arity_22;
          MR_Word TypeCtor_34;
          MR_Word CreatorsNamesArities_35;
          MR_Word MutatorsNamesArities_36;
          MR_Word DestructorsNamesArities_37;

          succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_166, &SymName0_21, &Arity_22);
          if (succeeded)
          {
            MR_Word MaybeSymName_23;

            parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, Var_166, SymName0_21, &MaybeSymName_23);
            if (((MR_tag((MR_Word) MaybeSymName_23)) == (MR_Integer) 0))
              MaybeTypeCtor_25 = (MR_Word) (MaybeSymName_23);
            else
            {
              MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_23, (MR_Integer) 0))));
              MR_Word Var_54;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (SymName_24));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (Arity_22));
              }
              {
                MaybeTypeCtor_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeTypeCtor_25, 0) = ((MR_Box) (Var_54));
              }
            }
          }
          else
          {
            MR_String TypeCtorTermStr_27;
            MR_Word Pieces_28;
            MR_Word TypeCtorSpec_29;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_63;
            MR_Word Var_65;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_79;
            MR_Word Var_80;

            TypeCtorTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_166);
            {
              Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_69, 1) = ((MR_Box) (TypeCtorTermStr_27));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
            }
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[131])));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
            }
            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[128])));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[117])));
              MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_57));
            }
            Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              TypeCtorSpec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TypeCtorSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
              MR_hl_field(1, TypeCtorSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, TypeCtorSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, TypeCtorSpec_29, 3) = ((MR_Box) (Var_79));
              MR_hl_field(1, TypeCtorSpec_29, 4) = ((MR_Box) (Pieces_28));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (TypeCtorSpec_29));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeTypeCtor_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeTypeCtor_25, 0) = ((MR_Box) (Var_80));
            }
          }
          parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "second", (MR_String) "creators", Var_168, &MaybeCreatorsNamesArities_30);
          parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "third", (MR_String) "mutators", Var_170, &MaybeMutatorsNamesArities_31);
          MaybeDestructorsNamesArities_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[4]));
          succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeCtor_34 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtor_25, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCreatorsNamesArities_30)) == (MR_Integer) 1);
            if (succeeded)
            {
              CreatorsNamesArities_35 = ((MR_Word) ((MR_hl_field(1, MaybeCreatorsNamesArities_30, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeMutatorsNamesArities_31)) == (MR_Integer) 1);
              if (succeeded)
              {
                MutatorsNamesArities_36 = ((MR_Word) ((MR_hl_field(1, MaybeMutatorsNamesArities_31, (MR_Integer) 0))));
                DestructorsNamesArities_37 = ((MR_Word) ((MR_hl_field(1, MaybeDestructorsNamesArities_33, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Word OISU_38;
            MR_Word Item_39;
            MR_Word Var_89;
            MR_Word Var_90;

            {
              OISU_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OISU_38, 0) = ((MR_Box) (TypeCtor_34));
              MR_hl_field(0, OISU_38, 1) = ((MR_Box) (CreatorsNamesArities_35));
              MR_hl_field(0, OISU_38, 2) = ((MR_Box) (MutatorsNamesArities_36));
              MR_hl_field(0, OISU_38, 3) = ((MR_Box) (DestructorsNamesArities_37));
              MR_hl_field(0, OISU_38, 4) = ((MR_Box) (Context_12));
              MR_hl_field(0, OISU_38, 5) = ((MR_Box) (SeqNum_13));
            }
            {
              Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_89, 1) = ((MR_Box) (OISU_38));
            }
            {
              Item_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_39, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Item_39, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Item_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
            }
          }
          else
          {
            MR_Word Specs_40;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;

            Var_91 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_25);
            Var_93 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeCreatorsNamesArities_30);
            Var_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeMutatorsNamesArities_31);
            Var_96 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeDestructorsNamesArities_33);
            Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_95, Var_96);
            Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_93, Var_94);
            Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_91, Var_92);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
            }
          }
        }
        else
        {
          MR_Word Var_409 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 1))));
          MR_Word Var_410 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 0))));

          if ((Var_409 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DestructorsTerm2_32;
            MR_Word MaybeDestructorsTerm_281;
            MR_Word MaybeTypeCtor_286;
            MR_Word MaybeCreatorsNamesArities_291;
            MR_Word MaybeMutatorsNamesArities_292;
            MR_Word MaybeDestructorsNamesArities_293;
            MR_Word SymName0_209;
            MR_Integer Arity_210;
            MR_Word TypeCtor_259;
            MR_Word CreatorsNamesArities_260;
            MR_Word MutatorsNamesArities_261;
            MR_Word DestructorsNamesArities_262;

            {
              MaybeDestructorsTerm_281 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeDestructorsTerm_281, 0) = ((MR_Box) (Var_410));
            }
            succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_166, &SymName0_209, &Arity_210);
            if (succeeded)
            {
              MR_Word MaybeSymName_178;

              parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, Var_166, SymName0_209, &MaybeSymName_178);
              if (((MR_tag((MR_Word) MaybeSymName_178)) == (MR_Integer) 0))
                MaybeTypeCtor_286 = (MR_Word) (MaybeSymName_178);
              else
              {
                MR_Word SymName_172 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_178, (MR_Integer) 0))));
                MR_Word Var_173;

                {
                  Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_173, 0) = ((MR_Box) (SymName_172));
                  MR_hl_field(0, Var_173, 1) = ((MR_Box) (Arity_210));
                }
                {
                  MaybeTypeCtor_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeTypeCtor_286, 0) = ((MR_Box) (Var_173));
                }
              }
            }
            else
            {
              MR_String TypeCtorTermStr_183;
              MR_Word Pieces_184;
              MR_Word TypeCtorSpec_185;
              MR_Word Var_188;
              MR_Word Var_191;
              MR_Word Var_194;
              MR_Word Var_196;
              MR_Word Var_199;
              MR_Word Var_200;
              MR_Word Var_205;
              MR_Word Var_206;

              TypeCtorTermStr_183 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_166);
              {
                Var_200 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_200, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_200, 1) = ((MR_Box) (TypeCtorTermStr_183));
              }
              {
                Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_199, 0) = ((MR_Box) (Var_200));
                MR_hl_field(1, Var_199, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
              }
              {
                Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_196, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[131])));
                MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_199));
              }
              {
                Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_196));
              }
              {
                Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_191, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
                MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_194));
              }
              {
                Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_188, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[128])));
                MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_191));
              }
              {
                Pieces_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_184, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[117])));
                MR_hl_field(1, Pieces_184, 1) = ((MR_Box) (Var_188));
              }
              Var_205 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                TypeCtorSpec_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypeCtorSpec_185, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
                MR_hl_field(1, TypeCtorSpec_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, TypeCtorSpec_185, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, TypeCtorSpec_185, 3) = ((MR_Box) (Var_205));
                MR_hl_field(1, TypeCtorSpec_185, 4) = ((MR_Box) (Pieces_184));
              }
              {
                Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_206, 0) = ((MR_Box) (TypeCtorSpec_185));
                MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeTypeCtor_286 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeTypeCtor_286, 0) = ((MR_Box) (Var_206));
              }
            }
            parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "second", (MR_String) "creators", Var_168, &MaybeCreatorsNamesArities_291);
            parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "third", (MR_String) "mutators", Var_170, &MaybeMutatorsNamesArities_292);
            DestructorsTerm2_32 = ((MR_Word) ((MR_hl_field(1, MaybeDestructorsTerm_281, (MR_Integer) 0))));
            parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "fourth", (MR_String) "destructors", DestructorsTerm2_32, &MaybeDestructorsNamesArities_293);
            succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_286)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtor_259 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtor_286, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCreatorsNamesArities_291)) == (MR_Integer) 1);
              if (succeeded)
              {
                CreatorsNamesArities_260 = ((MR_Word) ((MR_hl_field(1, MaybeCreatorsNamesArities_291, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMutatorsNamesArities_292)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MutatorsNamesArities_261 = ((MR_Word) ((MR_hl_field(1, MaybeMutatorsNamesArities_292, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeDestructorsNamesArities_293)) == (MR_Integer) 1);
                  if (succeeded)
                    DestructorsNamesArities_262 = ((MR_Word) ((MR_hl_field(1, MaybeDestructorsNamesArities_293, (MR_Integer) 0))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word OISU_245;
              MR_Word Item_246;
              MR_Word Var_247;
              MR_Word Var_248;

              {
                OISU_245 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OISU_245, 0) = ((MR_Box) (TypeCtor_259));
                MR_hl_field(0, OISU_245, 1) = ((MR_Box) (CreatorsNamesArities_260));
                MR_hl_field(0, OISU_245, 2) = ((MR_Box) (MutatorsNamesArities_261));
                MR_hl_field(0, OISU_245, 3) = ((MR_Box) (DestructorsNamesArities_262));
                MR_hl_field(0, OISU_245, 4) = ((MR_Box) (Context_12));
                MR_hl_field(0, OISU_245, 5) = ((MR_Box) (SeqNum_13));
              }
              {
                Var_247 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_247, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_247, 1) = ((MR_Box) (OISU_245));
              }
              {
                Item_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Item_246, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, Item_246, 1) = ((MR_Box) (Var_247));
              }
              {
                Var_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_248, 0) = ((MR_Box) (Item_246));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_14 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_248));
              }
            }
            else
            {
              MR_Word Specs_249;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_254;
              MR_Word Var_255;

              Var_250 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_286);
              Var_252 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeCreatorsNamesArities_291);
              Var_254 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeMutatorsNamesArities_292);
              Var_255 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), MaybeDestructorsNamesArities_293);
              Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_254, Var_255);
              Var_251 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_252, Var_253);
              Specs_249 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_250, Var_251);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_249));
              }
            }
          }
          else
          {
            MR_Word Spec_147;
            MR_Word Var_151;
            MR_Word Var_152;

            Var_151 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_147, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
              MR_hl_field(1, Spec_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_147, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_147, 3) = ((MR_Box) (Var_151));
              MR_hl_field(1, Spec_147, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[130])));
            }
            {
              Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_152, 0) = ((MR_Box) (Spec_147));
              MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_152));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  parse_tree__parse_util__parse_pred_pf_name_arity_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_String ArgNum_9,
  MR_String ExpectedFunctor_10,
  MR_Word Term_11,
  MR_Word * MaybePredSpecs_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0);
  MR_Word ArgTerm_16;
  MR_String Functor_13;
  MR_Word ArgTerms_14;
  MR_Word Var_19;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_11, (MR_Integer) 0))));
    ArgTerms_14 = ((MR_Word) ((MR_hl_field(0, Term_11, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_13 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
      succeeded = (strcmp(Functor_13, ExpectedFunctor_10) == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTerm_16 = ((MR_Word) ((MR_hl_field(1, ArgTerms_14, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_14, (MR_Integer) 1))));
          succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_pragma_scalar_common_4[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) ((MR_String) "oisu"));
    }
    parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_String) "a list of predicate or function names/arities", Var_22, VarSet_8, ArgTerm_16, MaybePredSpecs_12);
  }
  else
  {
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_53;
    MR_Word Var_54;

    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_27, 1) = ((MR_Box) (ArgNum_9));
    }
    Var_42 = mercury__string__f_43_43_2_f_0(ExpectedFunctor_10, (MR_String) "([pred(name1/arity1), ..., pred(namen/arityn)])");
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[21])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[23])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[128])));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[132])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[15])));
      MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_26));
    }
    Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
    {
      Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_preds_term\'/6"));
      MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Var_53));
      MR_hl_field(1, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredSpecs_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_format_call_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_36;
    MR_Word Var_91;
    MR_Word Var_92;

    Var_91 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_format_call\'/7"));
      MR_hl_field(1, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_36, 3) = ((MR_Box) (Var_91));
      MR_hl_field(1, Spec_36, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[91])));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
    }
  }
  else
  {
    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_126 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_100;
      MR_Word Var_104;
      MR_Word Var_105;

      Var_104 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_format_call\'/7"));
        MR_hl_field(1, Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_100, 3) = ((MR_Box) (Var_104));
        MR_hl_field(1, Spec_100, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[91])));
      }
      {
        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_105, 0) = ((MR_Box) (Spec_100));
        MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_105));
      }
    }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, Var_126, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, Var_126, (MR_Integer) 0))));

      if ((Var_128 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybePredSpec_17;
        MR_Word MaybeFormatCall_19;
        MR_Word MaybeFormatCallPrime_18;
        MR_Word Functor_130;
        MR_Word ArgTerms_131;
        MR_Word MaybeFormatStringValues_133;
        MR_String Var_136;
        MR_Word Var_137;
        MR_Word PredSpec_25;
        MR_Word FormatCall_26;

        parse_tree__parse_util__parse_pred_pf_name_arity_5_p_0(ModuleName_8, (MR_String) "format_call", VarSet_11, Var_127, &MaybePredSpec_17);
        succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 0);
        if (succeeded)
        {
          Functor_130 = ((MR_Word) ((MR_hl_field(0, Var_129, (MR_Integer) 0))));
          ArgTerms_131 = ((MR_Word) ((MR_hl_field(0, Var_129, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Functor_130)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_136 = ((MR_String) ((MR_hl_field(0, Functor_130, (MR_Integer) 0))));
            succeeded = (strcmp(Var_136, (MR_String) "format_string_values") == 0);
            if (succeeded)
            {
              Var_137 = (MR_Word) ((MR_Unsigned) 0U);
              parse_tree__parse_pragma__parse_format_string_values_args_4_p_0(Var_137, Var_129, ArgTerms_131, &MaybeFormatStringValues_133);
              if (((MR_tag((MR_Word) MaybeFormatStringValues_133)) == (MR_Integer) 0))
                MaybeFormatCallPrime_18 = (MR_Word) (MaybeFormatStringValues_133);
              else
              {
                MR_Word FormatStringValues_134 = ((MR_Word) ((MR_hl_field(1, MaybeFormatStringValues_133, (MR_Integer) 0))));
                MR_Word Var_138;

                {
                  Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_138, 0) = ((MR_Box) (FormatStringValues_134));
                  MR_hl_field(0, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeFormatCallPrime_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeFormatCallPrime_18, 0) = ((MR_Box) (Var_138));
                }
              }
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          MaybeFormatCall_19 = MaybeFormatCallPrime_18;
        else
        {
          MR_Word HeadFormatCallTerm_21;
          MR_Word TailFormatCallTerms_22;
          MR_Word FormatCallTerms_20;

          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_129, &FormatCallTerms_20);
          if (succeeded)
          {
            succeeded = (FormatCallTerms_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadFormatCallTerm_21 = ((MR_Word) ((MR_hl_field(1, FormatCallTerms_20, (MR_Integer) 0))));
              TailFormatCallTerms_22 = ((MR_Word) ((MR_hl_field(1, FormatCallTerms_20, (MR_Integer) 1))));
            }
          }
          if (succeeded)
            parse_tree__parse_pragma__parse_format_string_values_terms_5_p_0(VarSet_11, (MR_Integer) 1, HeadFormatCallTerm_21, TailFormatCallTerms_22, &MaybeFormatCall_19);
          else
          {
            MR_Word FormatCallSpec_24;
            MR_Word Var_67;
            MR_Word Var_68;

            Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_129);
            {
              FormatCallSpec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FormatCallSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_format_call\'/7"));
              MR_hl_field(1, FormatCallSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, FormatCallSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, FormatCallSpec_24, 3) = ((MR_Box) (Var_67));
              MR_hl_field(1, FormatCallSpec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[102])));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (FormatCallSpec_24));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeFormatCall_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeFormatCall_19, 0) = ((MR_Box) (Var_68));
            }
          }
        }
        succeeded = ((MR_tag((MR_Word) MaybePredSpec_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredSpec_25 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_17, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeFormatCall_19)) == (MR_Integer) 1);
          if (succeeded)
            FormatCall_26 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall_19, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FormatCallPragma_27;
          MR_Word Item_28;
          MR_Word Var_70;
          MR_Word Var_71;

          {
            FormatCallPragma_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FormatCallPragma_27, 0) = ((MR_Box) (PredSpec_25));
            MR_hl_field(0, FormatCallPragma_27, 1) = ((MR_Box) (FormatCall_26));
            MR_hl_field(0, FormatCallPragma_27, 2) = ((MR_Box) (Context_12));
            MR_hl_field(0, FormatCallPragma_27, 3) = ((MR_Box) (SeqNum_13));
          }
          Var_70 = (MR_Word) (MR_mkword(2, (MR_Word) (FormatCallPragma_27)));
          {
            Item_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_28, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Item_28, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Item_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_71));
          }
        }
        else
        {
          MR_Word IOMSpecs_29;
          MR_Word Var_72;
          MR_Word Var_73;

          Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), MaybePredSpec_17);
          Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeFormatCall_19);
          IOMSpecs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_72, Var_73);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (IOMSpecs_29));
          }
        }
      }
      else
      {
        MR_Word Spec_109;
        MR_Word Var_113;
        MR_Word Var_114;

        Var_113 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_109, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_format_call\'/7"));
          MR_hl_field(1, Spec_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_109, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_109, 3) = ((MR_Box) (Var_113));
          MR_hl_field(1, Spec_109, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[91])));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (Spec_109));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_format_string_values_terms_5_p_0(
  MR_Word VarSet_6,
  MR_Integer ListPos_7,
  MR_Word HeadTerm_8,
  MR_Word TailTerms_9,
  MR_Word * MaybeOoMFormatStringValues_10)
{
  MR_bool succeeded;
  MR_Word TailFormatStringValues_11;
  MR_Word TailSpecs_12;
  MR_Word HeadArgTerms_18;
  MR_Word HeadFunctor_17;
  MR_String Var_29;

  if ((TailTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    TailFormatStringValues_11 = (MR_Word) ((MR_Unsigned) 0U);
    TailSpecs_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadTailTerm_13 = ((MR_Word) ((MR_hl_field(1, TailTerms_9, (MR_Integer) 0))));
    MR_Word TailTailTerms_14 = ((MR_Word) ((MR_hl_field(1, TailTerms_9, (MR_Integer) 1))));
    MR_Word MaybeOoMTailFormatStringValues_15;
    MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) ListPos_7 + (MR_Unsigned) 1);

    parse_tree__parse_pragma__parse_format_string_values_terms_5_p_0(VarSet_6, Var_27, HeadTailTerm_13, TailTailTerms_14, &MaybeOoMTailFormatStringValues_15);
    if (((MR_tag((MR_Word) MaybeOoMTailFormatStringValues_15)) == (MR_Integer) 0))
    {
      TailSpecs_12 = ((MR_Word) ((MR_hl_field(0, MaybeOoMTailFormatStringValues_15, (MR_Integer) 0))));
      TailFormatStringValues_11 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word OoMTailFormatStringValues_16 = ((MR_Word) ((MR_hl_field(1, MaybeOoMTailFormatStringValues_15, (MR_Integer) 0))));

      TailFormatStringValues_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), OoMTailFormatStringValues_16);
      TailSpecs_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  succeeded = ((MR_tag((MR_Word) HeadTerm_8)) == (MR_Integer) 0);
  if (succeeded)
  {
    HeadFunctor_17 = ((MR_Word) ((MR_hl_field(0, HeadTerm_8, (MR_Integer) 0))));
    HeadArgTerms_18 = ((MR_Word) ((MR_hl_field(0, HeadTerm_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) HeadFunctor_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = ((MR_String) ((MR_hl_field(0, HeadFunctor_17, (MR_Integer) 0))));
      succeeded = (strcmp(Var_29, (MR_String) "format_string_values") == 0);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeHeadFormatStringValues_20;
    MR_Word Var_30;
    MR_Word HeadFormatStringValues_21;

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (ListPos_7));
    }
    parse_tree__parse_pragma__parse_format_string_values_args_4_p_0(Var_30, HeadTerm_8, HeadArgTerms_18, &MaybeHeadFormatStringValues_20);
    succeeded = (TailSpecs_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeHeadFormatStringValues_20)) == (MR_Integer) 1);
      if (succeeded)
        HeadFormatStringValues_21 = ((MR_Word) ((MR_hl_field(1, MaybeHeadFormatStringValues_20, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word OoMFormatStringValues_22;

      {
        OoMFormatStringValues_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMFormatStringValues_22, 0) = ((MR_Box) (HeadFormatStringValues_21));
        MR_hl_field(0, OoMFormatStringValues_22, 1) = ((MR_Box) (TailFormatStringValues_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeOoMFormatStringValues_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (OoMFormatStringValues_22));
      }
    }
    else
    {
      MR_Word Specs_23;
      MR_Word Var_31;

      Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), MaybeHeadFormatStringValues_20);
      Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_31, TailSpecs_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOoMFormatStringValues_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
      }
    }
  }
  else
  {
    MR_String ErrorTermStr_24;
    MR_Word HeadPieces_25;
    MR_Word HeadSpec_26;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_57;
    MR_Word Specs_58;
    MR_Word Var_68;
    MR_Word Var_69;

    ErrorTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, HeadTerm_8);
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (ListPos_7));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[245])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (ErrorTermStr_24));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[104])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[96])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[103])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    HeadPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_34);
    Var_57 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_8);
    {
      HeadSpec_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_format_string_values_terms\'/5"));
      MR_hl_field(1, HeadSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, HeadSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, HeadSpec_26, 3) = ((MR_Box) (Var_57));
      MR_hl_field(1, HeadSpec_26, 4) = ((MR_Box) (HeadPieces_25));
    }
    {
      Specs_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_58, 0) = ((MR_Box) (HeadSpec_26));
      MR_hl_field(1, Specs_58, 1) = ((MR_Box) (TailSpecs_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeOoMFormatStringValues_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_format_string_values_args_4_p_0(
  MR_Word MaybeListPos_5,
  MR_Word ErrorTerm_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeFormatStringValues_8)
{
  MR_bool succeeded;

  if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Word Var_35;
    MR_Word Var_45;
    MR_Word Var_46;

    if ((MaybeListPos_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[112]));
    else
    {
      MR_Integer ListPos_93 = ((MR_Integer) ((MR_hl_field(1, MaybeListPos_5, (MR_Integer) 0))));
      MR_Word Var_96;
      MR_Word Var_97;

      {
        Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_97, 1) = ((MR_Box) (ListPos_93));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[245])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_96));
      }
    }
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[106])));
    Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
    {
      Spec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_format_string_values_args\'/4"));
      MR_hl_field(1, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_23, 3) = ((MR_Box) (Var_45));
      MR_hl_field(1, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFormatStringValues_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    }
  }
  else
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));

    if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_52;
      MR_Word Spec_53;
      MR_Word Var_54;
      MR_Word Var_59;
      MR_Word Var_60;

      Var_54 = parse_tree__parse_pragma__format_string_values_context_1_f_0(MaybeListPos_5);
      Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[106])));
      Var_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
      {
        Spec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_format_string_values_args\'/4"));
        MR_hl_field(1, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_53, 3) = ((MR_Box) (Var_59));
        MR_hl_field(1, Spec_53, 4) = ((MR_Box) (Pieces_52));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_53));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFormatStringValues_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
      }
    }
    else
    {
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));

      if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeArgNumFS_11;
        MR_Word MaybeArgNumVL_12;
        MR_Integer ArgNumFS_13;
        MR_Integer ArgNumVL_14;

        parse_tree__parse_pragma__parse_arg_num_4_p_0(MaybeListPos_5, (MR_Integer) 0, Var_89, &MaybeArgNumFS_11);
        parse_tree__parse_pragma__parse_arg_num_4_p_0(MaybeListPos_5, (MR_Integer) 1, Var_91, &MaybeArgNumVL_12);
        succeeded = ((MR_tag((MR_Word) MaybeArgNumFS_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgNumFS_13 = ((MR_Integer) ((MR_hl_field(1, MaybeArgNumFS_11, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeArgNumVL_12)) == (MR_Integer) 1);
          if (succeeded)
            ArgNumVL_14 = ((MR_Integer) ((MR_hl_field(1, MaybeArgNumVL_12, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FormatStringValues_15;

          {
            FormatStringValues_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FormatStringValues_15, 0) = ((MR_Box) (ArgNumFS_13));
            MR_hl_field(0, FormatStringValues_15, 1) = ((MR_Box) (ArgNumVL_14));
            MR_hl_field(0, FormatStringValues_15, 2) = ((MR_Box) (ArgNumFS_13));
            MR_hl_field(0, FormatStringValues_15, 3) = ((MR_Box) (ArgNumVL_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeFormatStringValues_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FormatStringValues_15));
          }
        }
        else
        {
          MR_Word Specs_16;
          MR_Word Var_30;
          MR_Word Var_31;

          Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArgNumFS_11);
          Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArgNumVL_12);
          Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_30, Var_31);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeFormatStringValues_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_16));
          }
        }
      }
      else
      {
        MR_Word Pieces_64;
        MR_Word Spec_65;
        MR_Word Var_66;
        MR_Word Var_71;
        MR_Word Var_72;

        Var_66 = parse_tree__parse_pragma__format_string_values_context_1_f_0(MaybeListPos_5);
        Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[106])));
        Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
        {
          Spec_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_format_string_values_args\'/4"));
          MR_hl_field(1, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_65, 3) = ((MR_Box) (Var_71));
          MR_hl_field(1, Spec_65, 4) = ((MR_Box) (Pieces_64));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_65));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeFormatStringValues_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__format_string_values_context_1_f_0(
  MR_Word MaybeListPos_3)
{
  MR_Word Pieces_4;

  if ((MaybeListPos_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[112]));
  else
  {
    MR_Integer ListPos_6 = ((MR_Integer) ((MR_hl_field(1, MaybeListPos_3, (MR_Integer) 0))));
    MR_Word Var_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (ListPos_6));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[245])));
    }
    {
      Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
      MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (Var_18));
    }
  }
  return Pieces_4;
}

static void MR_CALL 
parse_tree__parse_pragma__parse_arg_num_4_p_0(
  MR_Word MaybeListPos_5,
  MR_Word FS_VL_6,
  MR_Word Term_7,
  MR_Word * MaybeArgNum_8)
{
  MR_bool succeeded;
  MR_Integer Int_9;

  succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &Int_9);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeArgNum_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Int_9));
    }
  else
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_12;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Pieces0_28;
    MR_String FS_VL_Str_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;

    if ((MaybeListPos_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces0_28 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[112]));
    else
    {
      MR_Integer ListPos_41 = ((MR_Integer) ((MR_hl_field(1, MaybeListPos_5, (MR_Integer) 0))));
      MR_Word Var_44;
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (ListPos_41));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[245])));
      }
      {
        Pieces0_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
        MR_hl_field(1, Pieces0_28, 1) = ((MR_Box) (Var_44));
      }
    }
    switch (FS_VL_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FS_VL_Str_29 = (MR_String) "first";
        break;
      case (MR_Integer) 1:
        FS_VL_Str_29 = (MR_String) "second";
        break;
    }
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (FS_VL_Str_29));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[116])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Pieces0_28));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[115])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[113])));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_32));
    }
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[108])));
    Var_22 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_arg_num\'/4"));
      MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Var_22));
      MR_hl_field(1, Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeArgNum_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_33;
    MR_Word Var_71;
    MR_Word Var_72;

    Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_proc\'/7"));
      MR_hl_field(1, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_33, 3) = ((MR_Box) (Var_71));
      MR_hl_field(1, Spec_33, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[70])));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_153 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeObsoleteInFavourOf_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[3]));
      MR_Word PredAndModesContextPieces_18;
      MR_Word MaybePredAndModes_19;
      MR_Word Var_50;
      MR_Word PredName_20;
      MR_Word PredOrFunc_21;
      MR_Word Modes_22;
      MR_Word ObsoleteInFavourOf_23;

      PredAndModesContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[75])));
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (ModuleName_8));
      }
      parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_50, PredAndModesContextPieces_18, VarSet_11, Var_154, &MaybePredAndModes_19);
      succeeded = ((MR_tag((MR_Word) MaybePredAndModes_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        PredName_20 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 0))));
        PredOrFunc_21 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 1))));
        Modes_22 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 2))));
        ObsoleteInFavourOf_23 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf_16, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredNameModesPF_24;
        MR_Word Obsolete_25;
        MR_Word Item_26;
        MR_Word Var_51;
        MR_Word Var_52;

        {
          PredNameModesPF_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredNameModesPF_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(0, PredNameModesPF_24, 1) = ((MR_Box) (PredName_20));
          MR_hl_field(0, PredNameModesPF_24, 2) = ((MR_Box) (Modes_22));
        }
        {
          Obsolete_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Obsolete_25, 0) = ((MR_Box) (PredNameModesPF_24));
          MR_hl_field(0, Obsolete_25, 1) = ((MR_Box) (ObsoleteInFavourOf_23));
          MR_hl_field(0, Obsolete_25, 2) = ((MR_Box) (Context_12));
          MR_hl_field(0, Obsolete_25, 3) = ((MR_Box) (SeqNum_13));
        }
        Var_51 = (MR_Word) (MR_mkword(1, (MR_Word) (Obsolete_25)));
        {
          Item_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_26, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Item_26, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Item_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_52));
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_53 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[2]), MaybePredAndModes_19);
        Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_16);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_53, Var_54);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
        }
      }
    }
    else
    {
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, Var_153, (MR_Integer) 1))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, Var_153, (MR_Integer) 0))));

      if ((Var_155 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeObsoleteInFavourOf_121;
        MR_Word PredAndModesContextPieces_122;
        MR_Word MaybePredAndModes_123;
        MR_Word Var_133;
        MR_Word PredName_103;
        MR_Word PredOrFunc_104;
        MR_Word Modes_105;
        MR_Word ObsoleteInFavourOf_106;

        parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(Var_156, VarSet_11, &MaybeObsoleteInFavourOf_121);
        PredAndModesContextPieces_122 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[75])));
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (ModuleName_8));
        }
        parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_133, PredAndModesContextPieces_122, VarSet_11, Var_154, &MaybePredAndModes_123);
        succeeded = ((MR_tag((MR_Word) MaybePredAndModes_123)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredName_103 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_123, (MR_Integer) 0))));
          PredOrFunc_104 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_123, (MR_Integer) 1))));
          Modes_105 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_123, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) MaybeObsoleteInFavourOf_121)) == (MR_Integer) 1);
          if (succeeded)
            ObsoleteInFavourOf_106 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf_121, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word PredNameModesPF_90;
          MR_Word Obsolete_91;
          MR_Word Item_92;
          MR_Word Var_93;
          MR_Word Var_94;

          {
            PredNameModesPF_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredNameModesPF_90, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_104));
            MR_hl_field(0, PredNameModesPF_90, 1) = ((MR_Box) (PredName_103));
            MR_hl_field(0, PredNameModesPF_90, 2) = ((MR_Box) (Modes_105));
          }
          {
            Obsolete_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Obsolete_91, 0) = ((MR_Box) (PredNameModesPF_90));
            MR_hl_field(0, Obsolete_91, 1) = ((MR_Box) (ObsoleteInFavourOf_106));
            MR_hl_field(0, Obsolete_91, 2) = ((MR_Box) (Context_12));
            MR_hl_field(0, Obsolete_91, 3) = ((MR_Box) (SeqNum_13));
          }
          Var_93 = (MR_Word) (MR_mkword(1, (MR_Word) (Obsolete_91)));
          {
            Item_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_92, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Item_92, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_94, 0) = ((MR_Box) (Item_92));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_94));
          }
        }
        else
        {
          MR_Word Specs_95;
          MR_Word Var_96;
          MR_Word Var_97;

          Var_96 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[2]), MaybePredAndModes_123);
          Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_121);
          Specs_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_96, Var_97);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_95));
          }
        }
      }
      else
      {
        MR_Word Spec_82;
        MR_Word Var_86;
        MR_Word Var_87;

        Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_proc\'/7"));
          MR_hl_field(1, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_82, 3) = ((MR_Box) (Var_86));
          MR_hl_field(1, Spec_82, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[70])));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Spec_82));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_29;
    MR_Word Var_55;
    MR_Word Var_56;

    Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete\'/7"));
      MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Var_55));
      MR_hl_field(1, Spec_29, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[67])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
    }
  }
  else
  {
    MR_Word Var_118 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_118 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeObsoleteInFavourOf_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[3]));
      MR_Word MaybePredSpec_18;
      MR_Word PredSpec_19;
      MR_Word ObsoleteInFavourOf_20;

      parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(ModuleName_8, (MR_String) "obsolete", VarSet_11, Var_119, &MaybePredSpec_18);
      succeeded = ((MR_tag((MR_Word) MaybePredSpec_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        PredSpec_19 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_18, (MR_Integer) 0))));
        ObsoleteInFavourOf_20 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf_16, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Obsolete_21;
        MR_Word Item_22;
        MR_Word Var_35;
        MR_Word Var_36;

        {
          Obsolete_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Obsolete_21, 0) = ((MR_Box) (PredSpec_19));
          MR_hl_field(0, Obsolete_21, 1) = ((MR_Box) (ObsoleteInFavourOf_20));
          MR_hl_field(0, Obsolete_21, 2) = ((MR_Box) (Context_12));
          MR_hl_field(0, Obsolete_21, 3) = ((MR_Box) (SeqNum_13));
        }
        Var_35 = (MR_Word) ((MR_Word) (Obsolete_21));
        {
          Item_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_22, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Item_22, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Item_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
        }
      }
      else
      {
        MR_Word Specs_23;
        MR_Word Var_37;
        MR_Word Var_38;

        Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_pfu_name_arity_0), MaybePredSpec_18);
        Var_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_16);
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_37, Var_38);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
    else
    {
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(1, Var_118, (MR_Integer) 1))));
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, Var_118, (MR_Integer) 0))));

      if ((Var_120 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeObsoleteInFavourOf_94;
        MR_Word MaybePredSpec_95;
        MR_Word PredSpec_81;
        MR_Word ObsoleteInFavourOf_82;

        parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(Var_121, VarSet_11, &MaybeObsoleteInFavourOf_94);
        parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(ModuleName_8, (MR_String) "obsolete", VarSet_11, Var_119, &MaybePredSpec_95);
        succeeded = ((MR_tag((MR_Word) MaybePredSpec_95)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredSpec_81 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_95, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeObsoleteInFavourOf_94)) == (MR_Integer) 1);
          if (succeeded)
            ObsoleteInFavourOf_82 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf_94, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Obsolete_71;
          MR_Word Item_72;
          MR_Word Var_73;
          MR_Word Var_74;

          {
            Obsolete_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Obsolete_71, 0) = ((MR_Box) (PredSpec_81));
            MR_hl_field(0, Obsolete_71, 1) = ((MR_Box) (ObsoleteInFavourOf_82));
            MR_hl_field(0, Obsolete_71, 2) = ((MR_Box) (Context_12));
            MR_hl_field(0, Obsolete_71, 3) = ((MR_Box) (SeqNum_13));
          }
          Var_73 = (MR_Word) ((MR_Word) (Obsolete_71));
          {
            Item_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_72, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Item_72, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (Item_72));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_74));
          }
        }
        else
        {
          MR_Word Specs_75;
          MR_Word Var_76;
          MR_Word Var_77;

          Var_76 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_pfu_name_arity_0), MaybePredSpec_95);
          Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_94);
          Specs_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_76, Var_77);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_75));
          }
        }
      }
      else
      {
        MR_Word Spec_63;
        MR_Word Var_67;
        MR_Word Var_68;

        Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete\'/7"));
          MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Var_67));
          MR_hl_field(1, Spec_63, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[67])));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_63));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(
  MR_Word Term_4,
  MR_Word VarSet_5,
  MR_Word * MaybeObsoleteInFavourOf_6)
{
  MR_bool succeeded;
  MR_Word Terms_7;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_4, &Terms_7);
  if (succeeded)
    parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0((MR_Integer) 1, Terms_7, VarSet_5, MaybeObsoleteInFavourOf_6);
  else
  {
    MR_Word Spec_9;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_4);
    {
      Spec_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_in_favour_of\'/3"));
      MR_hl_field(1, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_9, 3) = ((MR_Box) (Var_31));
      MR_hl_field(1, Spec_9, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[83])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Spec_9));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeObsoleteInFavourOf_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[3]));
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Terms_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MaybeHeadSNA_15;
    MR_Word MaybeTailSNAs_18;
    MR_Integer Var_56;
    MR_Word SymName_13;
    MR_Integer Arity_14;
    MR_Word HeadSNA_19;
    MR_Word TailSNAs_20;

    succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9, &SymName_13, &Arity_14);
    if (succeeded)
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (SymName_13));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (Arity_14));
      }
      {
        MaybeHeadSNA_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeHeadSNA_15, 0) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_String Var_43;
      MR_Word Var_53;
      MR_Word Var_54;

      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (HeadVar__1_1));
      }
      Var_43 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3, Term_9);
      {
        Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[86])));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[71])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[64])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[85])));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
      }
      {
        Pieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[84])));
        MR_hl_field(1, Pieces_16, 1) = ((MR_Box) (Var_25));
      }
      Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_in_favour_of_snas\'/4"));
        MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Var_53));
        MR_hl_field(1, Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeHeadSNA_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeHeadSNA_15, 0) = ((MR_Box) (Var_54));
      }
    }
    Var_56 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(Var_56, Terms_10, HeadVar__3_3, &MaybeTailSNAs_18);
    succeeded = ((MR_tag((MR_Word) MaybeHeadSNA_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadSNA_19 = ((MR_Word) ((MR_hl_field(1, MaybeHeadSNA_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTailSNAs_18)) == (MR_Integer) 1);
      if (succeeded)
        TailSNAs_20 = ((MR_Word) ((MR_hl_field(1, MaybeTailSNAs_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_58;

      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (HeadSNA_19));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (TailSNAs_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
      }
    }
    else
    {
      MR_Word Specs_21;
      MR_Word Var_59;
      MR_Word Var_60;

      Var_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), MaybeHeadSNA_15);
      Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeTailSNAs_18);
      Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_59, Var_60);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word PorF_17,
  MR_Word * MaybeIOM_18)
{
  MR_bool succeeded = (PragmaTerms_14 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PredTerm_19;
  MR_Word MaybeOptionsTerm_20;
  MR_Word Var_111;
  MR_Word Var_112;

  if (succeeded)
  {
    Var_112 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, (MR_Integer) 0))));
    Var_111 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, (MR_Integer) 1))));
    if ((Var_111 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredTerm_19 = Var_112;
      MaybeOptionsTerm_20 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word OptionsTerm_21;
      MR_Word Var_39;

      PredTerm_19 = Var_112;
      OptionsTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_111, (MR_Integer) 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(1, Var_111, (MR_Integer) 1))));
      succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          MaybeOptionsTerm_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOptionsTerm_20, 0) = ((MR_Box) (OptionsTerm_21));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word ContextPieces1_22;
    MR_Word MaybeSymNameArity_23;
    MR_Word ContextPieces2_24;
    MR_Word MaybeMaybeBackend_25;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_49;
    MR_Word SymName_26;
    MR_Integer Arity_27;
    MR_Word MaybeBackend_28;

    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (PragmaName_13));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[40])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[39])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    ContextPieces1_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40);
    parse_tree__parse_pragma__parse_symname_arity_4_p_0(VarSet_11, PredTerm_19, ContextPieces1_22, &MaybeSymNameArity_23);
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[41])));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_43));
    }
    ContextPieces2_24 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49);
    parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(VarSet_11, MaybeOptionsTerm_20, ContextPieces2_24, &MaybeMaybeBackend_25);
    succeeded = ((MR_tag((MR_Word) MaybeSymNameArity_23)) == (MR_Integer) 1);
    if (succeeded)
    {
      SymName_26 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameArity_23, (MR_Integer) 0))));
      Arity_27 = ((MR_Integer) ((MR_hl_field(1, MaybeSymNameArity_23, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeMaybeBackend_25)) == (MR_Integer) 1);
      if (succeeded)
        MaybeBackend_28 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeBackend_25, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_String BaseName_29;
      MR_Word FullSymName_30;

      BaseName_29 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_26);
      {
        FullSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FullSymName_30, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(1, FullSymName_30, 1) = ((MR_Box) (BaseName_29));
      }
      succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(SymName_26, FullSymName_30);
      if (succeeded)
      {
        MR_Word PFNameArity_31;
        MR_Word External_32;
        MR_Word Item_33;
        MR_Word Var_58 = (MR_Word) (Arity_27);
        MR_Word Var_59;
        MR_Word Var_60;

        {
          PFNameArity_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_31, 0) = (MR_Box) ((MR_Unsigned) (PorF_17));
          MR_hl_field(0, PFNameArity_31, 1) = ((MR_Box) (FullSymName_30));
          MR_hl_field(0, PFNameArity_31, 2) = ((MR_Box) (Var_58));
        }
        {
          External_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, External_32, 0) = ((MR_Box) (PFNameArity_31));
          MR_hl_field(0, External_32, 1) = ((MR_Box) (MaybeBackend_28));
          MR_hl_field(0, External_32, 2) = ((MR_Box) (Context_15));
          MR_hl_field(0, External_32, 3) = ((MR_Box) (SeqNum_16));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (External_32));
        }
        {
          Item_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_33, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Item_33, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Item_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_60));
        }
      }
      else
      {
        MR_Word Pieces_34;
        MR_Word Spec_35;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_81;
        MR_Word Var_82;

        Var_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces1_22);
        {
          Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_71, 1) = ((MR_Box) (ModuleName_10));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[44])));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
        }
        Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_67);
        Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[43])), Var_65);
        Var_81 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
        {
          Spec_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external\'/9"));
          MR_hl_field(1, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_35, 3) = ((MR_Box) (Var_81));
          MR_hl_field(1, Spec_35, 4) = ((MR_Box) (Pieces_34));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
        }
      }
    }
    else
    {
      MR_Word Specs_36;
      MR_Word Var_84;
      MR_Word Var_85;

      Var_84 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeSymNameArity_23);
      Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[0]), MaybeMaybeBackend_25);
      Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_84, Var_85);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_36));
      }
    }
  }
  else
  {
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Pieces_102;
    MR_Word Spec_103;

    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (PragmaName_13));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[48])));
    }
    {
      Pieces_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_102, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
      MR_hl_field(1, Pieces_102, 1) = ((MR_Box) (Var_88));
    }
    Var_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
    {
      Spec_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_103, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external\'/9"));
      MR_hl_field(1, Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_103, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_103, 3) = ((MR_Box) (Var_99));
      MR_hl_field(1, Spec_103, 4) = ((MR_Box) (Pieces_102));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Spec_103));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(
  MR_Word VarSet_5,
  MR_Word MaybeOptionsTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeMaybeBackend_8)
{
  MR_bool succeeded;

  if ((MaybeOptionsTerm_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeMaybeBackend_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[2]));
  else
  {
    MR_Word OptionsTerm_9 = ((MR_Word) ((MR_hl_field(1, MaybeOptionsTerm_6, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_24;

    succeeded = ((MR_tag((MR_Word) OptionsTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(0, OptionsTerm_9, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(0, OptionsTerm_9, (MR_Integer) 1))));
      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
          succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeMaybeBackend_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_2[2]));
    else
    {
      MR_Word Backend_15;
      MR_Word OptionsTermHead_11;
      MR_Word OptionsTermTail_12;
      MR_Word Var_26;
      MR_String Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word Var_39;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_String Var_87;

      succeeded = ((MR_tag((MR_Word) OptionsTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(0, OptionsTerm_9, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(0, OptionsTerm_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
          succeeded = (strcmp(Var_27, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OptionsTermHead_11 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
              succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                OptionsTermTail_12 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
                Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
                succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) OptionsTermHead_11)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_86 = ((MR_Word) ((MR_hl_field(0, OptionsTermHead_11, (MR_Integer) 0))));
                    Var_85 = ((MR_Word) ((MR_hl_field(0, OptionsTermHead_11, (MR_Integer) 1))));
                    succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_87 = ((MR_String) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
                        if ((strcmp(Var_87, (MR_String) "low_level_backend") == 0))
                        {
                          Backend_15 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        if ((strcmp(Var_87, (MR_String) "high_level_backend") == 0))
                        {
                          Backend_15 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) OptionsTermTail_12)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_37 = ((MR_Word) ((MR_hl_field(0, OptionsTermTail_12, (MR_Integer) 0))));
                            Var_39 = ((MR_Word) ((MR_hl_field(0, OptionsTermTail_12, (MR_Integer) 1))));
                            succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_38 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_38, (MR_String) "[]") == 0);
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
      if (succeeded)
      {
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Backend_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeBackend_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
        }
      }
      else
      {
        MR_String OptionsTermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_79;
        MR_Word Var_80;

        OptionsTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, OptionsTerm_9);
        Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (OptionsTermStr_18));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[46])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[63])));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[62])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[61])));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[60])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[59])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[58])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[57])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[15])));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
        }
        Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
        Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OptionsTerm_9);
        {
          Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external_options\'/4"));
          MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_79));
          MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeBackend_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_symname_arity_4_p_0(
  MR_Word VarSet_5,
  MR_Word PredTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeSymNameArity_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PredTerm_6)) == (MR_Integer) 0);
  MR_Word NameTerm_9;
  MR_Word ArityTerm_10;
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, PredTerm_6, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, PredTerm_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
      succeeded = (strcmp(Var_23, (MR_String) "/") == 0);
      if (succeeded)
      {
        succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeSymName_12;
    MR_Word MaybeArity_14;
    MR_Integer ArityPrime_13;
    MR_Word SymName_17;
    MR_Integer Arity_18;

    parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, NameTerm_9, &MaybeSymName_12);
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_10, &ArityPrime_13);
    if (succeeded)
      {
        MaybeArity_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArity_14, 0) = ((MR_Box) (ArityPrime_13));
      }
    else
    {
      MR_Word ArityPieces_15;
      MR_Word AritySpec_16;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_45;
      MR_Word Var_46;

      Var_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
      Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[54])));
      ArityPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[50])), Var_31);
      Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_10);
      {
        AritySpec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AritySpec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_symname_arity\'/4"));
        MR_hl_field(1, AritySpec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, AritySpec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, AritySpec_16, 3) = ((MR_Box) (Var_45));
        MR_hl_field(1, AritySpec_16, 4) = ((MR_Box) (ArityPieces_15));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (AritySpec_16));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeArity_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeArity_14, 0) = ((MR_Box) (Var_46));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeSymName_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      SymName_17 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeArity_14)) == (MR_Integer) 1);
      if (succeeded)
        Arity_18 = ((MR_Integer) ((MR_hl_field(1, MaybeArity_14, (MR_Integer) 0))));
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameArity_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Arity_18));
      }
    else
    {
      MR_Word Specs_19;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeSymName_12);
      Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_14);
      Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_48, Var_49);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameArity_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_19));
      }
    }
  }
  else
  {
    MR_Word Pieces_20;
    MR_Word Spec_21;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_63;
    MR_Word Var_64;

    Var_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[15])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[56])));
    Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTerm_6);
    {
      Spec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_symname_arity\'/4"));
      MR_hl_field(1, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_21, 3) = ((MR_Box) (Var_63));
      MR_hl_field(1, Spec_21, 4) = ((MR_Box) (Pieces_20));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymNameArity_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_impl_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_String PragmaName_11,
  MR_Word MarkerKind_12,
  MR_Word VarSet_13,
  MR_Word ErrorTerm_14,
  MR_Word PragmaTerms_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18)
{
  if ((PragmaTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (PragmaName_11));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])));
    }
    {
      Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
      MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_35));
    }
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_14);
    {
      Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_impl_pragma\'/9"));
      MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Var_46));
      MR_hl_field(1, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_15, (MR_Integer) 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_15, (MR_Integer) 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybePredSpec_20;

      parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(ModuleName_10, PragmaName_11, VarSet_13, Var_79, &MaybePredSpec_20);
      if (((MR_tag((MR_Word) MaybePredSpec_20)) == (MR_Integer) 0))
        *MaybeIOM_18 = (MR_Word) (MaybePredSpec_20);
      else
      {
        MR_Word PredSpec_21 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_20, (MR_Integer) 0))));
        MR_Word Marker_22;
        MR_Word Item_23;
        MR_Word Var_31;

        {
          Marker_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Marker_22, 0) = (MR_Box) ((MR_Unsigned) (MarkerKind_12));
          MR_hl_field(0, Marker_22, 1) = ((MR_Box) (PredSpec_21));
          MR_hl_field(0, Marker_22, 2) = ((MR_Box) (Context_16));
          MR_hl_field(0, Marker_22, 3) = ((MR_Box) (SeqNum_17));
        }
        {
          Item_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Item_23, 1) = ((MR_Box) (Marker_22));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Item_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
    }
    else
    {
      MR_Word Pieces_50;
      MR_Word Spec_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_60;
      MR_Word Var_61;

      {
        Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(3, Var_55, 1) = ((MR_Box) (PragmaName_11));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Pieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
        MR_hl_field(1, Pieces_50, 1) = ((MR_Box) (Var_54));
      }
      Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_14);
      {
        Spec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_impl_pragma\'/9"));
        MR_hl_field(1, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_51, 3) = ((MR_Box) (Var_60));
        MR_hl_field(1, Spec_51, 4) = ((MR_Box) (Pieces_50));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_51));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_decl_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_String PragmaName_11,
  MR_Word MarkerKind_12,
  MR_Word VarSet_13,
  MR_Word ErrorTerm_14,
  MR_Word PragmaTerms_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18)
{
  if ((PragmaTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (PragmaName_11));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])));
    }
    {
      Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
      MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_35));
    }
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_14);
    {
      Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_decl_pragma\'/9"));
      MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Var_46));
      MR_hl_field(1, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_15, (MR_Integer) 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_15, (MR_Integer) 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybePredSpec_20;

      parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(ModuleName_10, PragmaName_11, VarSet_13, Var_79, &MaybePredSpec_20);
      if (((MR_tag((MR_Word) MaybePredSpec_20)) == (MR_Integer) 0))
        *MaybeIOM_18 = (MR_Word) (MaybePredSpec_20);
      else
      {
        MR_Word PredSpec_21 = ((MR_Word) ((MR_hl_field(1, MaybePredSpec_20, (MR_Integer) 0))));
        MR_Word Marker_22;
        MR_Word Item_23;
        MR_Word Var_31;

        {
          Marker_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Marker_22, 0) = (MR_Box) ((MR_Unsigned) (MarkerKind_12));
          MR_hl_field(0, Marker_22, 1) = ((MR_Box) (PredSpec_21));
          MR_hl_field(0, Marker_22, 2) = ((MR_Box) (Context_16));
          MR_hl_field(0, Marker_22, 3) = ((MR_Box) (SeqNum_17));
        }
        {
          Item_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Item_23, 1) = ((MR_Box) (Marker_22));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Item_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
    }
    else
    {
      MR_Word Pieces_50;
      MR_Word Spec_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_60;
      MR_Word Var_61;

      {
        Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(3, Var_55, 1) = ((MR_Box) (PragmaName_11));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Pieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_scalar_common_1[27])));
        MR_hl_field(1, Pieces_50, 1) = ((MR_Box) (Var_54));
      }
      Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_14);
      {
        Spec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_decl_pragma\'/9"));
        MR_hl_field(1, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_51, 3) = ((MR_Box) (Var_60));
        MR_hl_field(1, Spec_51, 4) = ((MR_Box) (Pieces_50));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_51));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(
  MR_Word Context_3)
{
  MR_Word Spec_4;

  {
    Spec_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.report_unrecognized_pragma\'/1"));
    MR_hl_field(1, Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_4, 3) = ((MR_Box) (Context_3));
    MR_hl_field(1, Spec_4, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_scalar_common_1[28])));
  }
  return Spec_4;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____fs_vl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_pragma____Unify____fs_vl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____fs_vl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_pragma____Compare____fs_vl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_pragma____Unify____seen_none_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_pragma____Compare____seen_none_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_pragma__init(void)
{
}

void mercury__parse_tree__parse_pragma__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_fs_vl_0);
	MR_register_type_ctor_info(&parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_seen_none_0);
}

void mercury__parse_tree__parse_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_pragma__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_pragma.
